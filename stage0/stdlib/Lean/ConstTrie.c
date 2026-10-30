// Lean compiler output
// Module: Lean.ConstTrie
// Imports: public import Init.System.IO public import Init.Data.Option.BasicAux import Lean.Data.Name import Std.Data.HashMap.Basic import Std.Data.HashSet.Basic import Init.Data.Array.QSort import Init.While import Init.Omega import Init.Data.Array.Lemmas import Init.Data.Array.Monadic import Init.Data.Array.Mem
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
uint64_t lean_uint64_land(uint64_t, uint64_t);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedConstTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedConstTrie___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__0;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__1;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofNames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofNames___closed__0;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl;
lean_object* lean_imported_consts_cache_new();
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedImportedTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedImportedTree___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedImportedTree___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedTree___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedImportedTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedTree___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree(lean_object*);
static const lean_ctor_object l_Lean_instInhabitedImportedConsts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedImportedConsts___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedImportedConsts___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedConsts___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ImportedConsts_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object*, lean_object*);
lean_object* lean_imported_extra_consts_find_entry_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraEntryCachedImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_imported_extra_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraModIdxCachedImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value)} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1_value;
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_toArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_find_x3f___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_ConstTrie_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___boxed(lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_ConstTrie_ctorIdx___impl(v_00_u03b1_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
switch(lean_obj_tag(v_t_11_))
{
case 0:
{
lean_object* v_key_13_; lean_object* v_val_14_; lean_object* v___x_15_; 
v_key_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_13_);
v_val_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_val_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_key_13_, v_val_14_);
return v___x_15_;
}
case 1:
{
lean_object* v_key_16_; lean_object* v_children_17_; lean_object* v___x_18_; 
v_key_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_16_);
v_children_17_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_children_17_);
lean_dec_ref_known(v_t_11_, 2);
v___x_18_ = lean_apply_2(v_k_12_, v_key_16_, v_children_17_);
return v___x_18_;
}
default: 
{
lean_object* v_key_19_; lean_object* v_val_20_; lean_object* v_children_21_; lean_object* v___x_22_; 
v_key_19_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_19_);
v_val_20_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_val_20_);
v_children_21_ = lean_ctor_get(v_t_11_, 2);
lean_inc_ref(v_children_21_);
lean_dec_ref_known(v_t_11_, 3);
v___x_22_ = lean_apply_3(v_k_12_, v_key_19_, v_val_20_, v_children_21_);
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim(lean_object* v_00_u03b1_23_, lean_object* v_motive__1_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___boxed(lean_object* v_00_u03b1_30_, lean_object* v_motive__1_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_ConstTrie_ctorElim(v_00_u03b1_30_, v_motive__1_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim___redArg(lean_object* v_t_37_, lean_object* v_leaf_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_37_, v_leaf_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim(lean_object* v_00_u03b1_40_, lean_object* v_motive__1_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_leaf_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_42_, v_leaf_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim___redArg(lean_object* v_t_46_, lean_object* v_inner_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_46_, v_inner_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim(lean_object* v_00_u03b1_49_, lean_object* v_motive__1_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_inner_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_51_, v_inner_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim___redArg(lean_object* v_t_55_, lean_object* v_node_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_55_, v_node_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim(lean_object* v_00_u03b1_58_, lean_object* v_motive__1_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_node_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_60_, v_node_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg(){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__1));
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object* v___dummy_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_instInhabitedConstTrie___redArg();
return v_res_72_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstTrie___closed__0(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_instInhabitedConstTrie___redArg();
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object* v_00_u03b1_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
return v___x_75_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
switch(lean_obj_tag(v_x_76_))
{
case 0:
{
if (lean_obj_tag(v_x_77_) == 0)
{
uint8_t v___x_78_; 
v___x_78_ = 1;
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 0;
return v___x_79_;
}
}
case 1:
{
if (lean_obj_tag(v_x_77_) == 1)
{
lean_object* v_str_80_; lean_object* v_str_81_; uint8_t v___x_82_; 
v_str_80_ = lean_ctor_get(v_x_76_, 1);
v_str_81_ = lean_ctor_get(v_x_77_, 1);
v___x_82_ = lean_string_dec_eq(v_str_80_, v_str_81_);
return v___x_82_;
}
else
{
uint8_t v___x_83_; 
v___x_83_ = 0;
return v___x_83_;
}
}
default: 
{
if (lean_obj_tag(v_x_77_) == 2)
{
lean_object* v_i_84_; lean_object* v_i_85_; uint8_t v___x_86_; 
v_i_84_ = lean_ctor_get(v_x_76_, 1);
v_i_85_ = lean_ctor_get(v_x_77_, 1);
v___x_86_ = lean_nat_dec_eq(v_i_84_, v_i_85_);
return v___x_86_;
}
else
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l___private_Lean_ConstTrie_0__Lean_lastPartEq(v_x_88_, v_x_89_);
lean_dec(v_x_89_);
lean_dec(v_x_88_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(lean_object* v_inst_92_, lean_object* v_cs_93_, lean_object* v_keyOf_94_, uint64_t v_h_95_, lean_object* v_lo_96_, lean_object* v_hi_97_){
_start:
{
uint8_t v___x_98_; 
v___x_98_ = lean_nat_dec_lt(v_lo_96_, v_hi_97_);
if (v___x_98_ == 0)
{
lean_dec(v_hi_97_);
lean_dec_ref(v_keyOf_94_);
return v_lo_96_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_mid_101_; uint64_t v___y_103_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_99_ = lean_nat_add(v_lo_96_, v_hi_97_);
v___x_100_ = lean_unsigned_to_nat(1u);
v_mid_101_ = lean_nat_shiftr(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
v___x_108_ = lean_array_get_borrowed(v_inst_92_, v_cs_93_, v_mid_101_);
lean_inc_ref(v_keyOf_94_);
lean_inc(v___x_108_);
v___x_109_ = lean_apply_1(v_keyOf_94_, v___x_108_);
if (lean_obj_tag(v___x_109_) == 0)
{
uint64_t v___x_110_; 
v___x_110_ = 1723ULL;
v___y_103_ = v___x_110_;
goto v___jp_102_;
}
else
{
uint64_t v_hash_111_; 
v_hash_111_ = lean_ctor_get_uint64(v___x_109_, sizeof(void*)*2);
lean_dec(v___x_109_);
v___y_103_ = v_hash_111_;
goto v___jp_102_;
}
v___jp_102_:
{
uint8_t v___x_104_; 
v___x_104_ = lean_uint64_dec_lt(v___y_103_, v_h_95_);
if (v___x_104_ == 0)
{
lean_dec(v_hi_97_);
v_hi_97_ = v_mid_101_;
goto _start;
}
else
{
lean_object* v___x_106_; 
lean_dec(v_lo_96_);
v___x_106_ = lean_nat_add(v_mid_101_, v___x_100_);
lean_dec(v_mid_101_);
v_lo_96_ = v___x_106_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg___boxed(lean_object* v_inst_112_, lean_object* v_cs_113_, lean_object* v_keyOf_114_, lean_object* v_h_115_, lean_object* v_lo_116_, lean_object* v_hi_117_){
_start:
{
uint64_t v_h_boxed_118_; lean_object* v_res_119_; 
v_h_boxed_118_ = lean_unbox_uint64(v_h_115_);
lean_dec_ref(v_h_115_);
v_res_119_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_112_, v_cs_113_, v_keyOf_114_, v_h_boxed_118_, v_lo_116_, v_hi_117_);
lean_dec_ref(v_cs_113_);
lean_dec(v_inst_112_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(lean_object* v_00_u03b2_120_, lean_object* v_inst_121_, lean_object* v_cs_122_, lean_object* v_keyOf_123_, uint64_t v_h_124_, lean_object* v_lo_125_, lean_object* v_hi_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_121_, v_cs_122_, v_keyOf_123_, v_h_124_, v_lo_125_, v_hi_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___boxed(lean_object* v_00_u03b2_128_, lean_object* v_inst_129_, lean_object* v_cs_130_, lean_object* v_keyOf_131_, lean_object* v_h_132_, lean_object* v_lo_133_, lean_object* v_hi_134_){
_start:
{
uint64_t v_h_boxed_135_; lean_object* v_res_136_; 
v_h_boxed_135_ = lean_unbox_uint64(v_h_132_);
lean_dec_ref(v_h_132_);
v_res_136_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(v_00_u03b2_128_, v_inst_129_, v_cs_130_, v_keyOf_131_, v_h_boxed_135_, v_lo_133_, v_hi_134_);
lean_dec_ref(v_cs_130_);
lean_dec(v_inst_129_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(lean_object* v_inst_137_, lean_object* v_cs_138_, lean_object* v_keyOf_139_, lean_object* v_k_140_, uint64_t v_h_141_, lean_object* v_j_142_){
_start:
{
uint8_t v___y_148_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_array_get_size(v_cs_138_);
v___x_151_ = lean_nat_dec_lt(v_j_142_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec(v_j_142_);
lean_dec_ref(v_keyOf_139_);
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v_c_154_; uint64_t v___y_156_; 
v___x_153_ = lean_array_get_borrowed(v_inst_137_, v_cs_138_, v_j_142_);
lean_inc_ref(v_keyOf_139_);
lean_inc(v___x_153_);
v_c_154_ = lean_apply_1(v_keyOf_139_, v___x_153_);
if (lean_obj_tag(v_c_154_) == 0)
{
uint64_t v___x_166_; 
v___x_166_ = 1723ULL;
v___y_156_ = v___x_166_;
goto v___jp_155_;
}
else
{
uint64_t v_hash_167_; 
v_hash_167_ = lean_ctor_get_uint64(v_c_154_, sizeof(void*)*2);
v___y_156_ = v_hash_167_;
goto v___jp_155_;
}
v___jp_155_:
{
uint8_t v___x_157_; 
v___x_157_ = lean_uint64_dec_eq(v___y_156_, v_h_141_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; 
lean_dec(v_c_154_);
lean_dec(v_j_142_);
lean_dec_ref(v_keyOf_139_);
v___x_158_ = lean_box(0);
return v___x_158_;
}
else
{
switch(lean_obj_tag(v_c_154_))
{
case 0:
{
if (lean_obj_tag(v_k_140_) == 0)
{
lean_object* v___x_159_; 
lean_dec_ref(v_keyOf_139_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v_j_142_);
return v___x_159_;
}
else
{
goto v___jp_143_;
}
}
case 1:
{
if (lean_obj_tag(v_k_140_) == 1)
{
lean_object* v_str_160_; lean_object* v_str_161_; uint8_t v___x_162_; 
v_str_160_ = lean_ctor_get(v_c_154_, 1);
lean_inc_ref(v_str_160_);
lean_dec_ref_known(v_c_154_, 2);
v_str_161_ = lean_ctor_get(v_k_140_, 1);
v___x_162_ = lean_string_dec_eq(v_str_160_, v_str_161_);
lean_dec_ref(v_str_160_);
v___y_148_ = v___x_162_;
goto v___jp_147_;
}
else
{
lean_dec_ref_known(v_c_154_, 2);
goto v___jp_143_;
}
}
default: 
{
if (lean_obj_tag(v_k_140_) == 2)
{
lean_object* v_i_163_; lean_object* v_i_164_; uint8_t v___x_165_; 
v_i_163_ = lean_ctor_get(v_c_154_, 1);
lean_inc(v_i_163_);
lean_dec_ref_known(v_c_154_, 2);
v_i_164_ = lean_ctor_get(v_k_140_, 1);
v___x_165_ = lean_nat_dec_eq(v_i_163_, v_i_164_);
lean_dec(v_i_163_);
v___y_148_ = v___x_165_;
goto v___jp_147_;
}
else
{
lean_dec_ref_known(v_c_154_, 2);
goto v___jp_143_;
}
}
}
}
}
}
v___jp_143_:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_nat_add(v_j_142_, v___x_144_);
lean_dec(v_j_142_);
v_j_142_ = v___x_145_;
goto _start;
}
v___jp_147_:
{
if (v___y_148_ == 0)
{
goto v___jp_143_;
}
else
{
lean_object* v___x_149_; 
lean_dec_ref(v_keyOf_139_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v_j_142_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg___boxed(lean_object* v_inst_168_, lean_object* v_cs_169_, lean_object* v_keyOf_170_, lean_object* v_k_171_, lean_object* v_h_172_, lean_object* v_j_173_){
_start:
{
uint64_t v_h_boxed_174_; lean_object* v_res_175_; 
v_h_boxed_174_ = lean_unbox_uint64(v_h_172_);
lean_dec_ref(v_h_172_);
v_res_175_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_168_, v_cs_169_, v_keyOf_170_, v_k_171_, v_h_boxed_174_, v_j_173_);
lean_dec(v_k_171_);
lean_dec_ref(v_cs_169_);
lean_dec(v_inst_168_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(lean_object* v_00_u03b2_176_, lean_object* v_inst_177_, lean_object* v_cs_178_, lean_object* v_keyOf_179_, lean_object* v_k_180_, uint64_t v_h_181_, lean_object* v_j_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_177_, v_cs_178_, v_keyOf_179_, v_k_180_, v_h_181_, v_j_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___boxed(lean_object* v_00_u03b2_184_, lean_object* v_inst_185_, lean_object* v_cs_186_, lean_object* v_keyOf_187_, lean_object* v_k_188_, lean_object* v_h_189_, lean_object* v_j_190_){
_start:
{
uint64_t v_h_boxed_191_; lean_object* v_res_192_; 
v_h_boxed_191_ = lean_unbox_uint64(v_h_189_);
lean_dec_ref(v_h_189_);
v_res_192_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(v_00_u03b2_184_, v_inst_185_, v_cs_186_, v_keyOf_187_, v_k_188_, v_h_boxed_191_, v_j_190_);
lean_dec(v_k_188_);
lean_dec_ref(v_cs_186_);
lean_dec(v_inst_185_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(lean_object* v_inst_193_, lean_object* v_cs_194_, lean_object* v_keyOf_195_, lean_object* v_k_196_){
_start:
{
uint64_t v___y_198_; 
if (lean_obj_tag(v_k_196_) == 0)
{
uint64_t v___x_203_; 
v___x_203_ = 1723ULL;
v___y_198_ = v___x_203_;
goto v___jp_197_;
}
else
{
uint64_t v_hash_204_; 
v_hash_204_ = lean_ctor_get_uint64(v_k_196_, sizeof(void*)*2);
v___y_198_ = v_hash_204_;
goto v___jp_197_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = lean_array_get_size(v_cs_194_);
lean_inc_ref(v_keyOf_195_);
v___x_201_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_193_, v_cs_194_, v_keyOf_195_, v___y_198_, v___x_199_, v___x_200_);
v___x_202_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_193_, v_cs_194_, v_keyOf_195_, v_k_196_, v___y_198_, v___x_201_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg___boxed(lean_object* v_inst_205_, lean_object* v_cs_206_, lean_object* v_keyOf_207_, lean_object* v_k_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v_inst_205_, v_cs_206_, v_keyOf_207_, v_k_208_);
lean_dec(v_k_208_);
lean_dec_ref(v_cs_206_);
lean_dec(v_inst_205_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(lean_object* v_00_u03b2_210_, lean_object* v_inst_211_, lean_object* v_cs_212_, lean_object* v_keyOf_213_, lean_object* v_k_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v_inst_211_, v_cs_212_, v_keyOf_213_, v_k_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___boxed(lean_object* v_00_u03b2_216_, lean_object* v_inst_217_, lean_object* v_cs_218_, lean_object* v_keyOf_219_, lean_object* v_k_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(v_00_u03b2_216_, v_inst_217_, v_cs_218_, v_keyOf_219_, v_k_220_);
lean_dec(v_k_220_);
lean_dec_ref(v_cs_218_);
lean_dec(v_inst_217_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object* v_n_222_, lean_object* v_acc_223_){
_start:
{
if (lean_obj_tag(v_n_222_) == 0)
{
return v_acc_223_;
}
else
{
lean_object* v_pre_224_; lean_object* v___x_225_; 
v_pre_224_ = lean_ctor_get(v_n_222_, 0);
lean_inc(v_pre_224_);
v___x_225_ = lean_array_push(v_acc_223_, v_n_222_);
v_n_222_ = v_pre_224_;
v_acc_223_ = v___x_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object* v_x_227_){
_start:
{
lean_object* v_key_228_; 
v_key_228_ = lean_ctor_get(v_x_227_, 0);
lean_inc(v_key_228_);
return v_key_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_ConstTrie_key___redArg(v_x_229_);
lean_dec_ref(v_x_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object* v_00_u03b1_231_, lean_object* v_x_232_){
_start:
{
lean_object* v_key_233_; 
v_key_233_ = lean_ctor_get(v_x_232_, 0);
lean_inc(v_key_233_);
return v_key_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object* v_00_u03b1_234_, lean_object* v_x_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_ConstTrie_key(v_00_u03b1_234_, v_x_235_);
lean_dec_ref(v_x_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object* v_x_237_){
_start:
{
if (lean_obj_tag(v_x_237_) == 1)
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
else
{
lean_object* v_val_239_; lean_object* v___x_240_; 
v_val_239_ = lean_ctor_get(v_x_237_, 1);
lean_inc(v_val_239_);
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v_val_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object* v_x_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_ConstTrie_val_x3f___redArg(v_x_241_);
lean_dec_ref(v_x_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object* v_00_u03b1_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 1)
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_247_; 
v_val_246_ = lean_ctor_get(v_x_244_, 1);
lean_inc(v_val_246_);
v___x_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_247_, 0, v_val_246_);
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object* v_00_u03b1_248_, lean_object* v_x_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_ConstTrie_val_x3f(v_00_u03b1_248_, v_x_249_);
lean_dec_ref(v_x_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object* v_x_251_){
_start:
{
switch(lean_obj_tag(v_x_251_))
{
case 0:
{
lean_object* v___x_252_; 
v___x_252_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
return v___x_252_;
}
case 1:
{
lean_object* v_children_253_; 
v_children_253_ = lean_ctor_get(v_x_251_, 1);
lean_inc_ref(v_children_253_);
return v_children_253_;
}
default: 
{
lean_object* v_children_254_; 
v_children_254_ = lean_ctor_get(v_x_251_, 2);
lean_inc_ref(v_children_254_);
return v_children_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_ConstTrie_children___redArg(v_x_255_);
lean_dec_ref(v_x_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object* v_00_u03b1_257_, lean_object* v_x_258_){
_start:
{
switch(lean_obj_tag(v_x_258_))
{
case 0:
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
return v___x_259_;
}
case 1:
{
lean_object* v_children_260_; 
v_children_260_ = lean_ctor_get(v_x_258_, 1);
lean_inc_ref(v_children_260_);
return v_children_260_;
}
default: 
{
lean_object* v_children_261_; 
v_children_261_ = lean_ctor_get(v_x_258_, 2);
lean_inc_ref(v_children_261_);
return v_children_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object* v_00_u03b1_262_, lean_object* v_x_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_ConstTrie_children(v_00_u03b1_262_, v_x_263_);
lean_dec_ref(v_x_263_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg(lean_object* v_key_265_, lean_object* v_val_x3f_266_, lean_object* v_children_267_){
_start:
{
if (lean_obj_tag(v_val_x3f_266_) == 0)
{
lean_object* v___x_268_; 
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_key_265_);
lean_ctor_set(v___x_268_, 1, v_children_267_);
return v___x_268_;
}
else
{
lean_object* v_val_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v_val_269_ = lean_ctor_get(v_val_x3f_266_, 0);
v___x_270_ = lean_array_get_size(v_children_267_);
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_nat_dec_eq(v___x_270_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
lean_inc(v_val_269_);
v___x_273_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_273_, 0, v_key_265_);
lean_ctor_set(v___x_273_, 1, v_val_269_);
lean_ctor_set(v___x_273_, 2, v_children_267_);
return v___x_273_;
}
else
{
lean_object* v___x_274_; 
lean_dec_ref(v_children_267_);
lean_inc(v_val_269_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_key_265_);
lean_ctor_set(v___x_274_, 1, v_val_269_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg___boxed(lean_object* v_key_275_, lean_object* v_val_x3f_276_, lean_object* v_children_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_ConstTrie_mk___redArg(v_key_275_, v_val_x3f_276_, v_children_277_);
lean_dec(v_val_x3f_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk(lean_object* v_00_u03b1_279_, lean_object* v_key_280_, lean_object* v_val_x3f_281_, lean_object* v_children_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_ConstTrie_mk___redArg(v_key_280_, v_val_x3f_281_, v_children_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___boxed(lean_object* v_00_u03b1_284_, lean_object* v_key_285_, lean_object* v_val_x3f_286_, lean_object* v_children_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_ConstTrie_mk(v_00_u03b1_284_, v_key_285_, v_val_x3f_286_, v_children_287_);
lean_dec(v_val_x3f_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object* v_cs_289_, uint64_t v_h_290_, lean_object* v_lo_291_, lean_object* v_hi_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = lean_nat_dec_lt(v_lo_291_, v_hi_292_);
if (v___x_293_ == 0)
{
lean_dec(v_hi_292_);
return v_lo_291_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v_mid_297_; uint64_t v___y_299_; lean_object* v___y_305_; lean_object* v___x_308_; lean_object* v_key_309_; 
v___x_294_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_295_ = lean_nat_add(v_lo_291_, v_hi_292_);
v___x_296_ = lean_unsigned_to_nat(1u);
v_mid_297_ = lean_nat_shiftr(v___x_295_, v___x_296_);
lean_dec(v___x_295_);
v___x_308_ = lean_array_get_borrowed(v___x_294_, v_cs_289_, v_mid_297_);
v_key_309_ = lean_ctor_get(v___x_308_, 0);
v___y_305_ = v_key_309_;
goto v___jp_304_;
v___jp_298_:
{
uint8_t v___x_300_; 
v___x_300_ = lean_uint64_dec_lt(v___y_299_, v_h_290_);
if (v___x_300_ == 0)
{
lean_dec(v_hi_292_);
v_hi_292_ = v_mid_297_;
goto _start;
}
else
{
lean_object* v___x_302_; 
lean_dec(v_lo_291_);
v___x_302_ = lean_nat_add(v_mid_297_, v___x_296_);
lean_dec(v_mid_297_);
v_lo_291_ = v___x_302_;
goto _start;
}
}
v___jp_304_:
{
if (lean_obj_tag(v___y_305_) == 0)
{
uint64_t v___x_306_; 
v___x_306_ = 1723ULL;
v___y_299_ = v___x_306_;
goto v___jp_298_;
}
else
{
uint64_t v_hash_307_; 
v_hash_307_ = lean_ctor_get_uint64(v___y_305_, sizeof(void*)*2);
v___y_299_ = v_hash_307_;
goto v___jp_298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object* v_cs_310_, lean_object* v_h_311_, lean_object* v_lo_312_, lean_object* v_hi_313_){
_start:
{
uint64_t v_h_boxed_314_; lean_object* v_res_315_; 
v_h_boxed_314_ = lean_unbox_uint64(v_h_311_);
lean_dec_ref(v_h_311_);
v_res_315_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_310_, v_h_boxed_314_, v_lo_312_, v_hi_313_);
lean_dec_ref(v_cs_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(lean_object* v_cs_316_, lean_object* v_k_317_, uint64_t v_h_318_, lean_object* v_j_319_){
_start:
{
uint8_t v___y_325_; lean_object* v___y_328_; uint64_t v___y_329_; lean_object* v___y_340_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = lean_array_get_size(v_cs_316_);
v___x_344_ = lean_nat_dec_lt(v_j_319_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v_j_319_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v_key_348_; 
v___x_346_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_347_ = lean_array_get_borrowed(v___x_346_, v_cs_316_, v_j_319_);
v_key_348_ = lean_ctor_get(v___x_347_, 0);
v___y_340_ = v_key_348_;
goto v___jp_339_;
}
v___jp_320_:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_add(v_j_319_, v___x_321_);
lean_dec(v_j_319_);
v_j_319_ = v___x_322_;
goto _start;
}
v___jp_324_:
{
if (v___y_325_ == 0)
{
goto v___jp_320_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v_j_319_);
return v___x_326_;
}
}
v___jp_327_:
{
uint8_t v___x_330_; 
v___x_330_ = lean_uint64_dec_eq(v___y_329_, v_h_318_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_dec(v_j_319_);
v___x_331_ = lean_box(0);
return v___x_331_;
}
else
{
switch(lean_obj_tag(v___y_328_))
{
case 0:
{
if (lean_obj_tag(v_k_317_) == 0)
{
lean_object* v___x_332_; 
v___x_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_332_, 0, v_j_319_);
return v___x_332_;
}
else
{
goto v___jp_320_;
}
}
case 1:
{
if (lean_obj_tag(v_k_317_) == 1)
{
lean_object* v_str_333_; lean_object* v_str_334_; uint8_t v___x_335_; 
v_str_333_ = lean_ctor_get(v___y_328_, 1);
v_str_334_ = lean_ctor_get(v_k_317_, 1);
v___x_335_ = lean_string_dec_eq(v_str_333_, v_str_334_);
v___y_325_ = v___x_335_;
goto v___jp_324_;
}
else
{
goto v___jp_320_;
}
}
default: 
{
if (lean_obj_tag(v_k_317_) == 2)
{
lean_object* v_i_336_; lean_object* v_i_337_; uint8_t v___x_338_; 
v_i_336_ = lean_ctor_get(v___y_328_, 1);
v_i_337_ = lean_ctor_get(v_k_317_, 1);
v___x_338_ = lean_nat_dec_eq(v_i_336_, v_i_337_);
v___y_325_ = v___x_338_;
goto v___jp_324_;
}
else
{
goto v___jp_320_;
}
}
}
}
}
v___jp_339_:
{
if (lean_obj_tag(v___y_340_) == 0)
{
uint64_t v___x_341_; 
v___x_341_ = 1723ULL;
v___y_328_ = v___y_340_;
v___y_329_ = v___x_341_;
goto v___jp_327_;
}
else
{
uint64_t v_hash_342_; 
v_hash_342_ = lean_ctor_get_uint64(v___y_340_, sizeof(void*)*2);
v___y_328_ = v___y_340_;
v___y_329_ = v_hash_342_;
goto v___jp_327_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg___boxed(lean_object* v_cs_349_, lean_object* v_k_350_, lean_object* v_h_351_, lean_object* v_j_352_){
_start:
{
uint64_t v_h_boxed_353_; lean_object* v_res_354_; 
v_h_boxed_353_ = lean_unbox_uint64(v_h_351_);
lean_dec_ref(v_h_351_);
v_res_354_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_349_, v_k_350_, v_h_boxed_353_, v_j_352_);
lean_dec(v_k_350_);
lean_dec_ref(v_cs_349_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object* v_cs_355_, lean_object* v_k_356_){
_start:
{
uint64_t v___y_358_; 
if (lean_obj_tag(v_k_356_) == 0)
{
uint64_t v___x_363_; 
v___x_363_ = 1723ULL;
v___y_358_ = v___x_363_;
goto v___jp_357_;
}
else
{
uint64_t v_hash_364_; 
v_hash_364_ = lean_ctor_get_uint64(v_k_356_, sizeof(void*)*2);
v___y_358_ = v_hash_364_;
goto v___jp_357_;
}
v___jp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = lean_array_get_size(v_cs_355_);
v___x_361_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_355_, v___y_358_, v___x_359_, v___x_360_);
v___x_362_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_355_, v_k_356_, v___y_358_, v___x_361_);
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object* v_cs_365_, lean_object* v_k_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_365_, v_k_366_);
lean_dec(v_k_366_);
lean_dec_ref(v_cs_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object* v_t_368_, lean_object* v_path_369_, lean_object* v_i_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v_cs_374_; 
v___x_371_ = lean_box(0);
v___x_372_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
switch(lean_obj_tag(v_t_368_))
{
case 0:
{
lean_object* v_val_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v_val_383_ = lean_ctor_get(v_t_368_, 1);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_nat_dec_eq(v_i_370_, v___x_384_);
lean_dec(v_i_370_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; 
v___x_386_ = lean_box(0);
return v___x_386_;
}
else
{
lean_object* v___x_387_; 
lean_inc(v_val_383_);
v___x_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_387_, 0, v_val_383_);
return v___x_387_;
}
}
case 1:
{
lean_object* v_children_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v_children_388_ = lean_ctor_get(v_t_368_, 1);
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_nat_dec_eq(v_i_370_, v___x_389_);
if (v___x_390_ == 0)
{
v_cs_374_ = v_children_388_;
goto v___jp_373_;
}
else
{
lean_object* v___x_391_; 
lean_dec(v_i_370_);
v___x_391_ = lean_box(0);
return v___x_391_;
}
}
default: 
{
lean_object* v_val_392_; lean_object* v_children_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_val_392_ = lean_ctor_get(v_t_368_, 1);
v_children_393_ = lean_ctor_get(v_t_368_, 2);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_nat_dec_eq(v_i_370_, v___x_394_);
if (v___x_395_ == 0)
{
v_cs_374_ = v_children_393_;
goto v___jp_373_;
}
else
{
lean_object* v___x_396_; 
lean_dec(v_i_370_);
lean_inc(v_val_392_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_val_392_);
return v___x_396_;
}
}
}
v___jp_373_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_sub(v_i_370_, v___x_375_);
lean_dec(v_i_370_);
v___x_377_ = lean_array_get_borrowed(v___x_371_, v_path_369_, v___x_376_);
v___x_378_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_374_, v___x_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v___x_379_; 
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
return v___x_379_;
}
else
{
lean_object* v_val_380_; lean_object* v___x_381_; 
v_val_380_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_val_380_);
lean_dec_ref_known(v___x_378_, 1);
v___x_381_ = lean_array_get_borrowed(v___x_372_, v_cs_374_, v_val_380_);
lean_dec(v_val_380_);
v_t_368_ = v___x_381_;
v_i_370_ = v___x_376_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object* v_t_397_, lean_object* v_path_398_, lean_object* v_i_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_397_, v_path_398_, v_i_399_);
lean_dec_ref(v_path_398_);
lean_dec_ref(v_t_397_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object* v_00_u03b1_401_, lean_object* v_t_402_, lean_object* v_path_403_, lean_object* v_i_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_402_, v_path_403_, v_i_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object* v_00_u03b1_406_, lean_object* v_t_407_, lean_object* v_path_408_, lean_object* v_i_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(v_00_u03b1_406_, v_t_407_, v_path_408_, v_i_409_);
lean_dec_ref(v_path_408_);
lean_dec_ref(v_t_407_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object* v_00_u03b1_411_, lean_object* v_cs_412_, lean_object* v_k_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_412_, v_k_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object* v_00_u03b1_415_, lean_object* v_cs_416_, lean_object* v_k_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(v_00_u03b1_415_, v_cs_416_, v_k_417_);
lean_dec(v_k_417_);
lean_dec_ref(v_cs_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object* v_00_u03b1_419_, lean_object* v_cs_420_, uint64_t v_h_421_, lean_object* v_lo_422_, lean_object* v_hi_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_420_, v_h_421_, v_lo_422_, v_hi_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_425_, lean_object* v_cs_426_, lean_object* v_h_427_, lean_object* v_lo_428_, lean_object* v_hi_429_){
_start:
{
uint64_t v_h_boxed_430_; lean_object* v_res_431_; 
v_h_boxed_430_ = lean_unbox_uint64(v_h_427_);
lean_dec_ref(v_h_427_);
v_res_431_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(v_00_u03b1_425_, v_cs_426_, v_h_boxed_430_, v_lo_428_, v_hi_429_);
lean_dec_ref(v_cs_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(lean_object* v_00_u03b1_432_, lean_object* v_cs_433_, lean_object* v_k_434_, uint64_t v_h_435_, lean_object* v_j_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_433_, v_k_434_, v_h_435_, v_j_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___boxed(lean_object* v_00_u03b1_438_, lean_object* v_cs_439_, lean_object* v_k_440_, lean_object* v_h_441_, lean_object* v_j_442_){
_start:
{
uint64_t v_h_boxed_443_; lean_object* v_res_444_; 
v_h_boxed_443_ = lean_unbox_uint64(v_h_441_);
lean_dec_ref(v_h_441_);
v_res_444_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(v_00_u03b1_438_, v_cs_439_, v_k_440_, v_h_boxed_443_, v_j_442_);
lean_dec(v_k_440_);
lean_dec_ref(v_cs_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter___redArg(lean_object* v_x_445_, lean_object* v_h__1_446_, lean_object* v_h__2_447_, lean_object* v_h__3_448_){
_start:
{
switch(lean_obj_tag(v_x_445_))
{
case 0:
{
lean_object* v_key_449_; lean_object* v_val_450_; lean_object* v___x_451_; 
lean_dec(v_h__3_448_);
lean_dec(v_h__2_447_);
v_key_449_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_449_);
v_val_450_ = lean_ctor_get(v_x_445_, 1);
lean_inc(v_val_450_);
lean_dec_ref_known(v_x_445_, 2);
v___x_451_ = lean_apply_2(v_h__1_446_, v_key_449_, v_val_450_);
return v___x_451_;
}
case 1:
{
lean_object* v_key_452_; lean_object* v_children_453_; lean_object* v___x_454_; 
lean_dec(v_h__3_448_);
lean_dec(v_h__1_446_);
v_key_452_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_452_);
v_children_453_ = lean_ctor_get(v_x_445_, 1);
lean_inc_ref(v_children_453_);
lean_dec_ref_known(v_x_445_, 2);
v___x_454_ = lean_apply_2(v_h__2_447_, v_key_452_, v_children_453_);
return v___x_454_;
}
default: 
{
lean_object* v_key_455_; lean_object* v_val_456_; lean_object* v_children_457_; lean_object* v___x_458_; 
lean_dec(v_h__2_447_);
lean_dec(v_h__1_446_);
v_key_455_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_455_);
v_val_456_ = lean_ctor_get(v_x_445_, 1);
lean_inc(v_val_456_);
v_children_457_ = lean_ctor_get(v_x_445_, 2);
lean_inc_ref(v_children_457_);
lean_dec_ref_known(v_x_445_, 3);
v___x_458_ = lean_apply_3(v_h__3_448_, v_key_455_, v_val_456_, v_children_457_);
return v___x_458_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter(lean_object* v_00_u03b1_459_, lean_object* v_motive_460_, lean_object* v_x_461_, lean_object* v_h__1_462_, lean_object* v_h__2_463_, lean_object* v_h__3_464_){
_start:
{
switch(lean_obj_tag(v_x_461_))
{
case 0:
{
lean_object* v_key_465_; lean_object* v_val_466_; lean_object* v___x_467_; 
lean_dec(v_h__3_464_);
lean_dec(v_h__2_463_);
v_key_465_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_465_);
v_val_466_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_val_466_);
lean_dec_ref_known(v_x_461_, 2);
v___x_467_ = lean_apply_2(v_h__1_462_, v_key_465_, v_val_466_);
return v___x_467_;
}
case 1:
{
lean_object* v_key_468_; lean_object* v_children_469_; lean_object* v___x_470_; 
lean_dec(v_h__3_464_);
lean_dec(v_h__1_462_);
v_key_468_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_468_);
v_children_469_ = lean_ctor_get(v_x_461_, 1);
lean_inc_ref(v_children_469_);
lean_dec_ref_known(v_x_461_, 2);
v___x_470_ = lean_apply_2(v_h__2_463_, v_key_468_, v_children_469_);
return v___x_470_;
}
default: 
{
lean_object* v_key_471_; lean_object* v_val_472_; lean_object* v_children_473_; lean_object* v___x_474_; 
lean_dec(v_h__2_463_);
lean_dec(v_h__1_462_);
v_key_471_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_471_);
v_val_472_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_val_472_);
v_children_473_ = lean_ctor_get(v_x_461_, 2);
lean_inc_ref(v_children_473_);
lean_dec_ref_known(v_x_461_, 3);
v___x_474_ = lean_apply_3(v_h__3_464_, v_key_471_, v_val_472_, v_children_473_);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter___redArg(lean_object* v_x_475_, lean_object* v_h__1_476_, lean_object* v_h__2_477_){
_start:
{
if (lean_obj_tag(v_x_475_) == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v_h__1_476_);
v___x_478_ = lean_box(0);
v___x_479_ = lean_apply_1(v_h__2_477_, v___x_478_);
return v___x_479_;
}
else
{
lean_object* v_val_480_; lean_object* v___x_481_; 
lean_dec(v_h__2_477_);
v_val_480_ = lean_ctor_get(v_x_475_, 0);
lean_inc(v_val_480_);
lean_dec_ref_known(v_x_475_, 1);
v___x_481_ = lean_apply_1(v_h__1_476_, v_val_480_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter(lean_object* v_motive_482_, lean_object* v_x_483_, lean_object* v_h__1_484_, lean_object* v_h__2_485_){
_start:
{
if (lean_obj_tag(v_x_483_) == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v_h__1_484_);
v___x_486_ = lean_box(0);
v___x_487_ = lean_apply_1(v_h__2_485_, v___x_486_);
return v___x_487_;
}
else
{
lean_object* v_val_488_; lean_object* v___x_489_; 
lean_dec(v_h__2_485_);
v_val_488_ = lean_ctor_get(v_x_483_, 0);
lean_inc(v_val_488_);
lean_dec_ref_known(v_x_483_, 1);
v___x_489_ = lean_apply_1(v_h__1_484_, v_val_488_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object* v_t_490_, lean_object* v_n_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_path_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_492_ = lean_unsigned_to_nat(8u);
v___x_493_ = lean_mk_empty_array_with_capacity(v___x_492_);
v_path_494_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_491_, v___x_493_);
v___x_495_ = lean_array_get_size(v_path_494_);
v___x_496_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_490_, v_path_494_, v___x_495_);
lean_dec_ref(v_path_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object* v_t_497_, lean_object* v_n_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_497_, v_n_498_);
lean_dec_ref(v_t_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object* v_00_u03b1_500_, lean_object* v_t_501_, lean_object* v_n_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_501_, v_n_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object* v_00_u03b1_504_, lean_object* v_t_505_, lean_object* v_n_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_ConstTrie_find_x3f(v_00_u03b1_504_, v_t_505_, v_n_506_);
lean_dec_ref(v_t_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object* v_toApplicative_508_, lean_object* v_children_509_, lean_object* v_inst_510_, lean_object* v___f_511_, lean_object* v_____do__lift_512_){
_start:
{
lean_object* v_toPure_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_toPure_513_ = lean_ctor_get(v_toApplicative_508_, 1);
lean_inc(v_toPure_513_);
lean_dec_ref(v_toApplicative_508_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_array_get_size(v_children_509_);
v___x_516_ = lean_nat_dec_lt(v___x_514_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v___f_511_);
lean_dec_ref(v_inst_510_);
lean_dec_ref(v_children_509_);
v___x_517_ = lean_apply_2(v_toPure_513_, lean_box(0), v_____do__lift_512_);
return v___x_517_;
}
else
{
size_t v___x_518_; size_t v___x_519_; lean_object* v___x_520_; 
lean_dec(v_toPure_513_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = lean_usize_of_nat(v___x_515_);
v___x_520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_510_, v___f_511_, v_children_509_, v___x_518_, v___x_519_, v_____do__lift_512_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object* v_inst_521_, lean_object* v_t_522_, lean_object* v_f_523_, lean_object* v_init_524_){
_start:
{
switch(lean_obj_tag(v_t_522_))
{
case 0:
{
lean_object* v_key_525_; lean_object* v_val_526_; lean_object* v___x_527_; 
lean_dec_ref(v_inst_521_);
v_key_525_ = lean_ctor_get(v_t_522_, 0);
lean_inc(v_key_525_);
v_val_526_ = lean_ctor_get(v_t_522_, 1);
lean_inc(v_val_526_);
lean_dec_ref_known(v_t_522_, 2);
v___x_527_ = lean_apply_3(v_f_523_, v_init_524_, v_key_525_, v_val_526_);
return v___x_527_;
}
case 1:
{
lean_object* v_toApplicative_528_; lean_object* v_children_529_; lean_object* v_toPure_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v_toApplicative_528_ = lean_ctor_get(v_inst_521_, 0);
v_children_529_ = lean_ctor_get(v_t_522_, 1);
lean_inc_ref(v_children_529_);
lean_dec_ref_known(v_t_522_, 2);
v_toPure_530_ = lean_ctor_get(v_toApplicative_528_, 1);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_array_get_size(v_children_529_);
v___x_533_ = lean_nat_dec_lt(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
lean_inc(v_toPure_530_);
lean_dec_ref(v_children_529_);
lean_dec(v_f_523_);
lean_dec_ref(v_inst_521_);
v___x_534_ = lean_apply_2(v_toPure_530_, lean_box(0), v_init_524_);
return v___x_534_;
}
else
{
lean_object* v___f_535_; size_t v___x_536_; size_t v___x_537_; lean_object* v___x_538_; 
lean_inc_ref(v_inst_521_);
v___f_535_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_535_, 0, v_inst_521_);
lean_closure_set(v___f_535_, 1, v_f_523_);
v___x_536_ = ((size_t)0ULL);
v___x_537_ = lean_usize_of_nat(v___x_532_);
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_521_, v___f_535_, v_children_529_, v___x_536_, v___x_537_, v_init_524_);
return v___x_538_;
}
}
default: 
{
lean_object* v_toApplicative_539_; lean_object* v_toBind_540_; lean_object* v_key_541_; lean_object* v_val_542_; lean_object* v_children_543_; lean_object* v___f_544_; lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_toApplicative_539_ = lean_ctor_get(v_inst_521_, 0);
lean_inc_ref(v_toApplicative_539_);
v_toBind_540_ = lean_ctor_get(v_inst_521_, 1);
lean_inc(v_toBind_540_);
v_key_541_ = lean_ctor_get(v_t_522_, 0);
lean_inc(v_key_541_);
v_val_542_ = lean_ctor_get(v_t_522_, 1);
lean_inc(v_val_542_);
v_children_543_ = lean_ctor_get(v_t_522_, 2);
lean_inc_ref(v_children_543_);
lean_dec_ref_known(v_t_522_, 3);
lean_inc(v_f_523_);
lean_inc_ref(v_inst_521_);
v___f_544_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_544_, 0, v_inst_521_);
lean_closure_set(v___f_544_, 1, v_f_523_);
v___f_545_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_545_, 0, v_toApplicative_539_);
lean_closure_set(v___f_545_, 1, v_children_543_);
lean_closure_set(v___f_545_, 2, v_inst_521_);
lean_closure_set(v___f_545_, 3, v___f_544_);
v___x_546_ = lean_apply_3(v_f_523_, v_init_524_, v_key_541_, v_val_542_);
v___x_547_ = lean_apply_4(v_toBind_540_, lean_box(0), lean_box(0), v___x_546_, v___f_545_);
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object* v_inst_548_, lean_object* v_f_549_, lean_object* v_s_550_, lean_object* v_c_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_548_, v_c_551_, v_f_549_, v_s_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object* v_m_553_, lean_object* v_00_u03b1_554_, lean_object* v_00_u03c3_555_, lean_object* v_inst_556_, lean_object* v_t_557_, lean_object* v_f_558_, lean_object* v_init_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_556_, v_t_557_, v_f_558_, v_init_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object* v_x_561_, lean_object* v_h__1_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_apply_2(v_h__1_562_, v_x_561_, lean_box(0));
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter(lean_object* v_00_u03b1_564_, lean_object* v_P_565_, lean_object* v_motive_566_, lean_object* v_x_567_, lean_object* v_h__1_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_apply_2(v_h__1_568_, v_x_567_, lean_box(0));
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
return v_x_570_;
}
else
{
lean_object* v_pre_571_; 
v_pre_571_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_pre_571_);
return v_pre_571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object* v_x_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(v_x_572_);
lean_dec(v_x_572_);
return v_res_573_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object* v_a_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
uint8_t v___x_576_; 
v___x_576_ = 0;
return v___x_576_;
}
else
{
lean_object* v_key_577_; lean_object* v_tail_578_; uint8_t v___x_579_; 
v_key_577_ = lean_ctor_get(v_x_575_, 0);
v_tail_578_ = lean_ctor_get(v_x_575_, 2);
v___x_579_ = lean_name_eq(v_key_577_, v_a_574_);
if (v___x_579_ == 0)
{
v_x_575_ = v_tail_578_;
goto _start;
}
else
{
return v___x_579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object* v_a_581_, lean_object* v_x_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_581_, v_x_582_);
lean_dec(v_x_582_);
lean_dec(v_a_581_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object* v_m_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_buckets_587_; lean_object* v___x_588_; uint64_t v___y_590_; 
v_buckets_587_ = lean_ctor_get(v_m_585_, 1);
v___x_588_ = lean_array_get_size(v_buckets_587_);
if (lean_obj_tag(v_a_586_) == 0)
{
uint64_t v___x_604_; 
v___x_604_ = 1723ULL;
v___y_590_ = v___x_604_;
goto v___jp_589_;
}
else
{
uint64_t v_hash_605_; 
v_hash_605_ = lean_ctor_get_uint64(v_a_586_, sizeof(void*)*2);
v___y_590_ = v_hash_605_;
goto v___jp_589_;
}
v___jp_589_:
{
uint64_t v___x_591_; uint64_t v___x_592_; uint64_t v_fold_593_; uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v___x_596_; size_t v___x_597_; size_t v___x_598_; size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_591_ = 32ULL;
v___x_592_ = lean_uint64_shift_right(v___y_590_, v___x_591_);
v_fold_593_ = lean_uint64_xor(v___y_590_, v___x_592_);
v___x_594_ = 16ULL;
v___x_595_ = lean_uint64_shift_right(v_fold_593_, v___x_594_);
v___x_596_ = lean_uint64_xor(v_fold_593_, v___x_595_);
v___x_597_ = lean_uint64_to_usize(v___x_596_);
v___x_598_ = lean_usize_of_nat(v___x_588_);
v___x_599_ = ((size_t)1ULL);
v___x_600_ = lean_usize_sub(v___x_598_, v___x_599_);
v___x_601_ = lean_usize_land(v___x_597_, v___x_600_);
v___x_602_ = lean_array_uget_borrowed(v_buckets_587_, v___x_601_);
v___x_603_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_586_, v___x_602_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object* v_m_606_, lean_object* v_a_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_m_606_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
return v_x_610_;
}
else
{
lean_object* v_key_612_; lean_object* v_value_613_; lean_object* v_tail_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_640_; 
v_key_612_ = lean_ctor_get(v_x_611_, 0);
v_value_613_ = lean_ctor_get(v_x_611_, 1);
v_tail_614_ = lean_ctor_get(v_x_611_, 2);
v_isSharedCheck_640_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_640_ == 0)
{
v___x_616_ = v_x_611_;
v_isShared_617_ = v_isSharedCheck_640_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_tail_614_);
lean_inc(v_value_613_);
lean_inc(v_key_612_);
lean_dec(v_x_611_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_640_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; uint64_t v___y_620_; 
v___x_618_ = lean_array_get_size(v_x_610_);
if (lean_obj_tag(v_key_612_) == 0)
{
uint64_t v___x_638_; 
v___x_638_ = 1723ULL;
v___y_620_ = v___x_638_;
goto v___jp_619_;
}
else
{
uint64_t v_hash_639_; 
v_hash_639_ = lean_ctor_get_uint64(v_key_612_, sizeof(void*)*2);
v___y_620_ = v_hash_639_;
goto v___jp_619_;
}
v___jp_619_:
{
uint64_t v___x_621_; uint64_t v___x_622_; uint64_t v_fold_623_; uint64_t v___x_624_; uint64_t v___x_625_; uint64_t v___x_626_; size_t v___x_627_; size_t v___x_628_; size_t v___x_629_; size_t v___x_630_; size_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_621_ = 32ULL;
v___x_622_ = lean_uint64_shift_right(v___y_620_, v___x_621_);
v_fold_623_ = lean_uint64_xor(v___y_620_, v___x_622_);
v___x_624_ = 16ULL;
v___x_625_ = lean_uint64_shift_right(v_fold_623_, v___x_624_);
v___x_626_ = lean_uint64_xor(v_fold_623_, v___x_625_);
v___x_627_ = lean_uint64_to_usize(v___x_626_);
v___x_628_ = lean_usize_of_nat(v___x_618_);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_sub(v___x_628_, v___x_629_);
v___x_631_ = lean_usize_land(v___x_627_, v___x_630_);
v___x_632_ = lean_array_uget_borrowed(v_x_610_, v___x_631_);
lean_inc(v___x_632_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 2, v___x_632_);
v___x_634_ = v___x_616_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_key_612_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_value_613_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v___x_632_);
v___x_634_ = v_reuseFailAlloc_637_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; 
v___x_635_ = lean_array_uset(v_x_610_, v___x_631_, v___x_634_);
v_x_610_ = v___x_635_;
v_x_611_ = v_tail_614_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object* v_i_641_, lean_object* v_source_642_, lean_object* v_target_643_){
_start:
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = lean_array_get_size(v_source_642_);
v___x_645_ = lean_nat_dec_lt(v_i_641_, v___x_644_);
if (v___x_645_ == 0)
{
lean_dec_ref(v_source_642_);
lean_dec(v_i_641_);
return v_target_643_;
}
else
{
lean_object* v_es_646_; lean_object* v___x_647_; lean_object* v_source_648_; lean_object* v_target_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_es_646_ = lean_array_fget(v_source_642_, v_i_641_);
v___x_647_ = lean_box(0);
v_source_648_ = lean_array_fset(v_source_642_, v_i_641_, v___x_647_);
v_target_649_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(v_target_643_, v_es_646_);
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = lean_nat_add(v_i_641_, v___x_650_);
lean_dec(v_i_641_);
v_i_641_ = v___x_651_;
v_source_642_ = v_source_648_;
v_target_643_ = v_target_649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object* v_data_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v_nbuckets_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_654_ = lean_array_get_size(v_data_653_);
v___x_655_ = lean_unsigned_to_nat(2u);
v_nbuckets_656_ = lean_nat_mul(v___x_654_, v___x_655_);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = lean_box(0);
v___x_659_ = lean_mk_array(v_nbuckets_656_, v___x_658_);
v___x_660_ = lean_array_propagate_mark(v_data_653_, v___x_659_);
v___x_661_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v___x_657_, v_data_653_, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object* v_m_662_, lean_object* v_a_663_, lean_object* v_b_664_){
_start:
{
lean_object* v_size_665_; lean_object* v_buckets_666_; lean_object* v___x_667_; uint64_t v___y_669_; 
v_size_665_ = lean_ctor_get(v_m_662_, 0);
v_buckets_666_ = lean_ctor_get(v_m_662_, 1);
v___x_667_ = lean_array_get_size(v_buckets_666_);
if (lean_obj_tag(v_a_663_) == 0)
{
uint64_t v___x_706_; 
v___x_706_ = 1723ULL;
v___y_669_ = v___x_706_;
goto v___jp_668_;
}
else
{
uint64_t v_hash_707_; 
v_hash_707_ = lean_ctor_get_uint64(v_a_663_, sizeof(void*)*2);
v___y_669_ = v_hash_707_;
goto v___jp_668_;
}
v___jp_668_:
{
uint64_t v___x_670_; uint64_t v___x_671_; uint64_t v_fold_672_; uint64_t v___x_673_; uint64_t v___x_674_; uint64_t v___x_675_; size_t v___x_676_; size_t v___x_677_; size_t v___x_678_; size_t v___x_679_; size_t v___x_680_; lean_object* v_bkt_681_; uint8_t v___x_682_; 
v___x_670_ = 32ULL;
v___x_671_ = lean_uint64_shift_right(v___y_669_, v___x_670_);
v_fold_672_ = lean_uint64_xor(v___y_669_, v___x_671_);
v___x_673_ = 16ULL;
v___x_674_ = lean_uint64_shift_right(v_fold_672_, v___x_673_);
v___x_675_ = lean_uint64_xor(v_fold_672_, v___x_674_);
v___x_676_ = lean_uint64_to_usize(v___x_675_);
v___x_677_ = lean_usize_of_nat(v___x_667_);
v___x_678_ = ((size_t)1ULL);
v___x_679_ = lean_usize_sub(v___x_677_, v___x_678_);
v___x_680_ = lean_usize_land(v___x_676_, v___x_679_);
v_bkt_681_ = lean_array_uget_borrowed(v_buckets_666_, v___x_680_);
v___x_682_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_663_, v_bkt_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_703_; 
lean_inc_ref(v_buckets_666_);
lean_inc(v_size_665_);
v_isSharedCheck_703_ = !lean_is_exclusive(v_m_662_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; lean_object* v_unused_705_; 
v_unused_704_ = lean_ctor_get(v_m_662_, 1);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v_m_662_, 0);
lean_dec(v_unused_705_);
v___x_684_ = v_m_662_;
v_isShared_685_ = v_isSharedCheck_703_;
goto v_resetjp_683_;
}
else
{
lean_dec(v_m_662_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_703_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v_size_x27_687_; lean_object* v___x_688_; lean_object* v_buckets_x27_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_686_ = lean_unsigned_to_nat(1u);
v_size_x27_687_ = lean_nat_add(v_size_665_, v___x_686_);
lean_dec(v_size_665_);
lean_inc(v_bkt_681_);
v___x_688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_688_, 0, v_a_663_);
lean_ctor_set(v___x_688_, 1, v_b_664_);
lean_ctor_set(v___x_688_, 2, v_bkt_681_);
v_buckets_x27_689_ = lean_array_uset(v_buckets_666_, v___x_680_, v___x_688_);
v___x_690_ = lean_unsigned_to_nat(4u);
v___x_691_ = lean_nat_mul(v_size_x27_687_, v___x_690_);
v___x_692_ = lean_unsigned_to_nat(3u);
v___x_693_ = lean_nat_div(v___x_691_, v___x_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_array_get_size(v_buckets_x27_689_);
v___x_695_ = lean_nat_dec_le(v___x_693_, v___x_694_);
lean_dec(v___x_693_);
if (v___x_695_ == 0)
{
lean_object* v_val_696_; lean_object* v___x_698_; 
v_val_696_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_689_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 1, v_val_696_);
lean_ctor_set(v___x_684_, 0, v_size_x27_687_);
v___x_698_ = v___x_684_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_size_x27_687_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_val_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
else
{
lean_object* v___x_701_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 1, v_buckets_x27_689_);
lean_ctor_set(v___x_684_, 0, v_size_x27_687_);
v___x_701_ = v___x_684_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_size_x27_687_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_buckets_x27_689_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
else
{
lean_dec(v_b_664_);
lean_dec(v_a_663_);
return v_m_662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object* v_cur_710_, lean_object* v_cs_x3f_711_){
_start:
{
lean_object* v___y_713_; 
if (lean_obj_tag(v_cs_x3f_711_) == 0)
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_713_ = v___x_716_;
goto v___jp_712_;
}
else
{
lean_object* v_val_717_; 
v_val_717_ = lean_ctor_get(v_cs_x3f_711_, 0);
lean_inc(v_val_717_);
lean_dec_ref_known(v_cs_x3f_711_, 1);
v___y_713_ = v_val_717_;
goto v___jp_712_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_array_push(v___y_713_, v_cur_710_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object* v_cur_718_, lean_object* v_a_719_, lean_object* v_x_720_){
_start:
{
if (lean_obj_tag(v_x_720_) == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_val_723_; lean_object* v___x_724_; 
v___x_721_ = lean_box(0);
v___x_722_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v_cur_718_, v___x_721_);
v_val_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_val_723_);
lean_dec(v___x_722_);
v___x_724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_724_, 0, v_a_719_);
lean_ctor_set(v___x_724_, 1, v_val_723_);
lean_ctor_set(v___x_724_, 2, v_x_720_);
return v___x_724_;
}
else
{
lean_object* v_key_725_; lean_object* v_value_726_; lean_object* v_tail_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_742_; 
v_key_725_ = lean_ctor_get(v_x_720_, 0);
v_value_726_ = lean_ctor_get(v_x_720_, 1);
v_tail_727_ = lean_ctor_get(v_x_720_, 2);
v_isSharedCheck_742_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_742_ == 0)
{
v___x_729_ = v_x_720_;
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_tail_727_);
lean_inc(v_value_726_);
lean_inc(v_key_725_);
lean_dec(v_x_720_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
uint8_t v___x_731_; 
v___x_731_ = lean_name_eq(v_key_725_, v_a_719_);
if (v___x_731_ == 0)
{
lean_object* v_tail_732_; lean_object* v___x_734_; 
v_tail_732_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v_cur_718_, v_a_719_, v_tail_727_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 2, v_tail_732_);
v___x_734_ = v___x_729_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_key_725_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_value_726_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_tail_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v_val_738_; lean_object* v___x_740_; 
lean_dec(v_key_725_);
v___x_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_736_, 0, v_value_726_);
v___x_737_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v_cur_718_, v___x_736_);
v_val_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_738_);
lean_dec(v___x_737_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 1, v_val_738_);
lean_ctor_set(v___x_729_, 0, v_a_719_);
v___x_740_ = v___x_729_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_val_738_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_tail_727_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object* v_cur_743_, lean_object* v_m_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___y_747_; lean_object* v___y_748_; size_t v___y_749_; lean_object* v___y_750_; lean_object* v_size_753_; lean_object* v_buckets_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_801_; 
v_size_753_ = lean_ctor_get(v_m_744_, 0);
v_buckets_754_ = lean_ctor_get(v_m_744_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_m_744_);
if (v_isSharedCheck_801_ == 0)
{
v___x_756_ = v_m_744_;
v_isShared_757_ = v_isSharedCheck_801_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_buckets_754_);
lean_inc(v_size_753_);
lean_dec(v_m_744_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_801_;
goto v_resetjp_755_;
}
v___jp_746_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_array_uset(v___y_747_, v___y_749_, v___y_748_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___y_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
return v___x_752_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; uint64_t v___y_760_; 
v___x_758_ = lean_array_get_size(v_buckets_754_);
if (lean_obj_tag(v_a_745_) == 0)
{
uint64_t v___x_799_; 
v___x_799_ = 1723ULL;
v___y_760_ = v___x_799_;
goto v___jp_759_;
}
else
{
uint64_t v_hash_800_; 
v_hash_800_ = lean_ctor_get_uint64(v_a_745_, sizeof(void*)*2);
v___y_760_ = v_hash_800_;
goto v___jp_759_;
}
v___jp_759_:
{
uint64_t v___x_761_; uint64_t v___x_762_; uint64_t v_fold_763_; uint64_t v___x_764_; uint64_t v___x_765_; uint64_t v___x_766_; size_t v___x_767_; size_t v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; lean_object* v_bkt_772_; uint8_t v___x_773_; 
v___x_761_ = 32ULL;
v___x_762_ = lean_uint64_shift_right(v___y_760_, v___x_761_);
v_fold_763_ = lean_uint64_xor(v___y_760_, v___x_762_);
v___x_764_ = 16ULL;
v___x_765_ = lean_uint64_shift_right(v_fold_763_, v___x_764_);
v___x_766_ = lean_uint64_xor(v_fold_763_, v___x_765_);
v___x_767_ = lean_uint64_to_usize(v___x_766_);
v___x_768_ = lean_usize_of_nat(v___x_758_);
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_sub(v___x_768_, v___x_769_);
v___x_771_ = lean_usize_land(v___x_767_, v___x_770_);
v_bkt_772_ = lean_array_uget_borrowed(v_buckets_754_, v___x_771_);
v___x_773_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_745_, v_bkt_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_size_x27_777_; lean_object* v___x_778_; lean_object* v_buckets_x27_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_774_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___x_775_ = lean_array_push(v___x_774_, v_cur_743_);
v___x_776_ = lean_unsigned_to_nat(1u);
v_size_x27_777_ = lean_nat_add(v_size_753_, v___x_776_);
lean_dec(v_size_753_);
lean_inc(v_bkt_772_);
v___x_778_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_778_, 0, v_a_745_);
lean_ctor_set(v___x_778_, 1, v___x_775_);
lean_ctor_set(v___x_778_, 2, v_bkt_772_);
v_buckets_x27_779_ = lean_array_uset(v_buckets_754_, v___x_771_, v___x_778_);
v___x_780_ = lean_unsigned_to_nat(4u);
v___x_781_ = lean_nat_mul(v_size_x27_777_, v___x_780_);
v___x_782_ = lean_unsigned_to_nat(3u);
v___x_783_ = lean_nat_div(v___x_781_, v___x_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_array_get_size(v_buckets_x27_779_);
v___x_785_ = lean_nat_dec_le(v___x_783_, v___x_784_);
lean_dec(v___x_783_);
if (v___x_785_ == 0)
{
lean_object* v_val_786_; lean_object* v___x_788_; 
v_val_786_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_779_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 1, v_val_786_);
lean_ctor_set(v___x_756_, 0, v_size_x27_777_);
v___x_788_ = v___x_756_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_size_x27_777_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_val_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v___x_791_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 1, v_buckets_x27_779_);
lean_ctor_set(v___x_756_, 0, v_size_x27_777_);
v___x_791_ = v___x_756_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_size_x27_777_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_buckets_x27_779_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v___x_793_; lean_object* v_buckets_x27_794_; lean_object* v_bkt_x27_795_; uint8_t v___x_796_; 
lean_inc(v_bkt_772_);
lean_del_object(v___x_756_);
v___x_793_ = lean_box(0);
v_buckets_x27_794_ = lean_array_uset(v_buckets_754_, v___x_771_, v___x_793_);
lean_inc(v_a_745_);
v_bkt_x27_795_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v_cur_743_, v_a_745_, v_bkt_772_);
v___x_796_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_745_, v_bkt_x27_795_);
lean_dec(v_a_745_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(1u);
v___x_798_ = lean_nat_sub(v_size_753_, v___x_797_);
lean_dec(v_size_753_);
v___y_747_ = v_buckets_x27_794_;
v___y_748_ = v_bkt_x27_795_;
v___y_749_ = v___x_771_;
v___y_750_ = v___x_798_;
goto v___jp_746_;
}
else
{
v___y_747_ = v_buckets_x27_794_;
v___y_748_ = v_bkt_x27_795_;
v___y_749_ = v___x_771_;
v___y_750_ = v_size_753_;
goto v___jp_746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object* v_b_802_, lean_object* v_cur_803_){
_start:
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = lean_box(0);
v___x_805_ = lean_name_eq(v_cur_803_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v_values_806_; lean_object* v_seen_807_; lean_object* v_children_808_; uint8_t v___x_809_; 
v_values_806_ = lean_ctor_get(v_b_802_, 0);
v_seen_807_ = lean_ctor_get(v_b_802_, 1);
v_children_808_ = lean_ctor_get(v_b_802_, 2);
v___x_809_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_seen_807_, v_cur_803_);
if (v___x_809_ == 0)
{
lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_823_; 
lean_inc_ref(v_children_808_);
lean_inc_ref(v_seen_807_);
lean_inc_ref(v_values_806_);
v_isSharedCheck_823_ = !lean_is_exclusive(v_b_802_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; lean_object* v_unused_825_; lean_object* v_unused_826_; 
v_unused_824_ = lean_ctor_get(v_b_802_, 2);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_b_802_, 1);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_b_802_, 0);
lean_dec(v_unused_826_);
v___x_811_ = v_b_802_;
v_isShared_812_ = v_isSharedCheck_823_;
goto v_resetjp_810_;
}
else
{
lean_dec(v_b_802_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_823_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___y_816_; 
v___x_813_ = lean_box(0);
lean_inc(v_cur_803_);
v___x_814_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_seen_807_, v_cur_803_, v___x_813_);
if (lean_obj_tag(v_cur_803_) == 0)
{
v___y_816_ = v_cur_803_;
goto v___jp_815_;
}
else
{
lean_object* v_pre_822_; 
v_pre_822_ = lean_ctor_get(v_cur_803_, 0);
lean_inc(v_pre_822_);
v___y_816_ = v_pre_822_;
goto v___jp_815_;
}
v___jp_815_:
{
lean_object* v___x_817_; lean_object* v___x_819_; 
lean_inc(v___y_816_);
v___x_817_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(v_cur_803_, v_children_808_, v___y_816_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 2, v___x_817_);
lean_ctor_set(v___x_811_, 1, v___x_814_);
v___x_819_ = v___x_811_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_values_806_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v___x_817_);
v___x_819_ = v_reuseFailAlloc_821_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
v_b_802_ = v___x_819_;
v_cur_803_ = v___y_816_;
goto _start;
}
}
}
}
else
{
lean_dec(v_cur_803_);
return v_b_802_;
}
}
else
{
lean_dec(v_cur_803_);
return v_b_802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object* v_00_u03b1_827_, lean_object* v_b_828_, lean_object* v_cur_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_828_, v_cur_829_);
return v___x_830_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object* v_00_u03b2_831_, lean_object* v_m_832_, lean_object* v_a_833_){
_start:
{
uint8_t v___x_834_; 
v___x_834_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_832_, v_a_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object* v_00_u03b2_835_, lean_object* v_m_836_, lean_object* v_a_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(v_00_u03b2_835_, v_m_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_m_836_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object* v_00_u03b2_840_, lean_object* v_m_841_, lean_object* v_a_842_, lean_object* v_b_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_m_841_, v_a_842_, v_b_843_);
return v___x_844_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object* v_00_u03b2_845_, lean_object* v_a_846_, lean_object* v_x_847_){
_start:
{
uint8_t v___x_848_; 
v___x_848_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_846_, v_x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_849_, lean_object* v_a_850_, lean_object* v_x_851_){
_start:
{
uint8_t v_res_852_; lean_object* v_r_853_; 
v_res_852_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(v_00_u03b2_849_, v_a_850_, v_x_851_);
lean_dec(v_x_851_);
lean_dec(v_a_850_);
v_r_853_ = lean_box(v_res_852_);
return v_r_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object* v_00_u03b2_854_, lean_object* v_data_855_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_data_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_857_, lean_object* v_i_858_, lean_object* v_source_859_, lean_object* v_target_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v_i_858_, v_source_859_, v_target_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(v_x_863_, v_x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object* v_a_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_box(0);
return v___x_868_;
}
else
{
lean_object* v_key_869_; lean_object* v_value_870_; lean_object* v_tail_871_; uint8_t v___x_872_; 
v_key_869_ = lean_ctor_get(v_x_867_, 0);
v_value_870_ = lean_ctor_get(v_x_867_, 1);
v_tail_871_ = lean_ctor_get(v_x_867_, 2);
v___x_872_ = lean_name_eq(v_key_869_, v_a_866_);
if (v___x_872_ == 0)
{
v_x_867_ = v_tail_871_;
goto _start;
}
else
{
lean_object* v___x_874_; 
lean_inc(v_value_870_);
v___x_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_874_, 0, v_value_870_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object* v_a_875_, lean_object* v_x_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_875_, v_x_876_);
lean_dec(v_x_876_);
lean_dec(v_a_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object* v_m_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_buckets_880_; lean_object* v___x_881_; uint64_t v___y_883_; 
v_buckets_880_ = lean_ctor_get(v_m_878_, 1);
v___x_881_ = lean_array_get_size(v_buckets_880_);
if (lean_obj_tag(v_a_879_) == 0)
{
uint64_t v___x_897_; 
v___x_897_ = 1723ULL;
v___y_883_ = v___x_897_;
goto v___jp_882_;
}
else
{
uint64_t v_hash_898_; 
v_hash_898_ = lean_ctor_get_uint64(v_a_879_, sizeof(void*)*2);
v___y_883_ = v_hash_898_;
goto v___jp_882_;
}
v___jp_882_:
{
uint64_t v___x_884_; uint64_t v___x_885_; uint64_t v_fold_886_; uint64_t v___x_887_; uint64_t v___x_888_; uint64_t v___x_889_; size_t v___x_890_; size_t v___x_891_; size_t v___x_892_; size_t v___x_893_; size_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_884_ = 32ULL;
v___x_885_ = lean_uint64_shift_right(v___y_883_, v___x_884_);
v_fold_886_ = lean_uint64_xor(v___y_883_, v___x_885_);
v___x_887_ = 16ULL;
v___x_888_ = lean_uint64_shift_right(v_fold_886_, v___x_887_);
v___x_889_ = lean_uint64_xor(v_fold_886_, v___x_888_);
v___x_890_ = lean_uint64_to_usize(v___x_889_);
v___x_891_ = lean_usize_of_nat(v___x_881_);
v___x_892_ = ((size_t)1ULL);
v___x_893_ = lean_usize_sub(v___x_891_, v___x_892_);
v___x_894_ = lean_usize_land(v___x_890_, v___x_893_);
v___x_895_ = lean_array_uget_borrowed(v_buckets_880_, v___x_894_);
v___x_896_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_879_, v___x_895_);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object* v_m_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_899_, v_a_900_);
lean_dec(v_a_900_);
lean_dec_ref(v_m_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(lean_object* v_hi_902_, lean_object* v_pivot_903_, lean_object* v_as_904_, lean_object* v_i_905_, lean_object* v_k_906_){
_start:
{
uint64_t v___y_908_; uint64_t v___y_909_; uint64_t v___y_920_; lean_object* v___y_921_; uint64_t v___y_925_; lean_object* v___y_928_; uint8_t v___x_931_; 
v___x_931_ = lean_nat_dec_lt(v_k_906_, v_hi_902_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec(v_k_906_);
v___x_932_ = lean_array_fswap(v_as_904_, v_i_905_, v_hi_902_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_i_905_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v_key_935_; 
v___x_934_ = lean_array_fget_borrowed(v_as_904_, v_k_906_);
v_key_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_key_935_);
v___y_928_ = v_key_935_;
goto v___jp_927_;
}
v___jp_907_:
{
uint8_t v___x_910_; 
v___x_910_ = lean_uint64_dec_lt(v___y_908_, v___y_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_nat_add(v_k_906_, v___x_911_);
lean_dec(v_k_906_);
v_k_906_ = v___x_912_;
goto _start;
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_914_ = lean_array_fswap(v_as_904_, v_i_905_, v_k_906_);
v___x_915_ = lean_unsigned_to_nat(1u);
v___x_916_ = lean_nat_add(v_i_905_, v___x_915_);
lean_dec(v_i_905_);
v___x_917_ = lean_nat_add(v_k_906_, v___x_915_);
lean_dec(v_k_906_);
v_as_904_ = v___x_914_;
v_i_905_ = v___x_916_;
v_k_906_ = v___x_917_;
goto _start;
}
}
v___jp_919_:
{
if (lean_obj_tag(v___y_921_) == 0)
{
uint64_t v___x_922_; 
v___x_922_ = 1723ULL;
v___y_908_ = v___y_920_;
v___y_909_ = v___x_922_;
goto v___jp_907_;
}
else
{
uint64_t v_hash_923_; 
v_hash_923_ = lean_ctor_get_uint64(v___y_921_, sizeof(void*)*2);
v___y_908_ = v___y_920_;
v___y_909_ = v_hash_923_;
goto v___jp_907_;
}
}
v___jp_924_:
{
lean_object* v_key_926_; 
v_key_926_ = lean_ctor_get(v_pivot_903_, 0);
v___y_920_ = v___y_925_;
v___y_921_ = v_key_926_;
goto v___jp_919_;
}
v___jp_927_:
{
if (lean_obj_tag(v___y_928_) == 0)
{
uint64_t v___x_929_; 
v___x_929_ = 1723ULL;
v___y_925_ = v___x_929_;
goto v___jp_924_;
}
else
{
uint64_t v_hash_930_; 
v_hash_930_ = lean_ctor_get_uint64(v___y_928_, sizeof(void*)*2);
lean_dec(v___y_928_);
v___y_925_ = v_hash_930_;
goto v___jp_924_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg___boxed(lean_object* v_hi_936_, lean_object* v_pivot_937_, lean_object* v_as_938_, lean_object* v_i_939_, lean_object* v_k_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_936_, v_pivot_937_, v_as_938_, v_i_939_, v_k_940_);
lean_dec_ref(v_pivot_937_);
lean_dec(v_hi_936_);
return v_res_941_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(lean_object* v_c_u2081_942_, lean_object* v_c_u2082_943_){
_start:
{
uint64_t v___y_945_; lean_object* v___y_946_; uint64_t v___y_952_; lean_object* v___y_955_; lean_object* v_key_958_; 
v_key_958_ = lean_ctor_get(v_c_u2081_942_, 0);
v___y_955_ = v_key_958_;
goto v___jp_954_;
v___jp_944_:
{
if (lean_obj_tag(v___y_946_) == 0)
{
uint64_t v___x_947_; uint8_t v___x_948_; 
v___x_947_ = 1723ULL;
v___x_948_ = lean_uint64_dec_lt(v___y_945_, v___x_947_);
return v___x_948_;
}
else
{
uint64_t v_hash_949_; uint8_t v___x_950_; 
v_hash_949_ = lean_ctor_get_uint64(v___y_946_, sizeof(void*)*2);
v___x_950_ = lean_uint64_dec_lt(v___y_945_, v_hash_949_);
return v___x_950_;
}
}
v___jp_951_:
{
lean_object* v_key_953_; 
v_key_953_ = lean_ctor_get(v_c_u2082_943_, 0);
v___y_945_ = v___y_952_;
v___y_946_ = v_key_953_;
goto v___jp_944_;
}
v___jp_954_:
{
if (lean_obj_tag(v___y_955_) == 0)
{
uint64_t v___x_956_; 
v___x_956_ = 1723ULL;
v___y_952_ = v___x_956_;
goto v___jp_951_;
}
else
{
uint64_t v_hash_957_; 
v_hash_957_ = lean_ctor_get_uint64(v___y_955_, sizeof(void*)*2);
v___y_952_ = v_hash_957_;
goto v___jp_951_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0___boxed(lean_object* v_c_u2081_959_, lean_object* v_c_u2082_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v_c_u2081_959_, v_c_u2082_960_);
lean_dec_ref(v_c_u2082_960_);
lean_dec_ref(v_c_u2081_959_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object* v_n_963_, lean_object* v_as_964_, lean_object* v_lo_965_, lean_object* v_hi_966_){
_start:
{
lean_object* v___y_968_; uint8_t v___x_978_; 
v___x_978_ = lean_nat_dec_lt(v_lo_965_, v_hi_966_);
if (v___x_978_ == 0)
{
lean_dec(v_lo_965_);
return v_as_964_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v_mid_981_; lean_object* v___y_983_; lean_object* v___y_989_; lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_979_ = lean_nat_add(v_lo_965_, v_hi_966_);
v___x_980_ = lean_unsigned_to_nat(1u);
v_mid_981_ = lean_nat_shiftr(v___x_979_, v___x_980_);
lean_dec(v___x_979_);
v___x_994_ = lean_array_fget_borrowed(v_as_964_, v_mid_981_);
v___x_995_ = lean_array_fget_borrowed(v_as_964_, v_lo_965_);
v___x_996_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_994_, v___x_995_);
if (v___x_996_ == 0)
{
v___y_989_ = v_as_964_;
goto v___jp_988_;
}
else
{
lean_object* v___x_997_; 
v___x_997_ = lean_array_fswap(v_as_964_, v_lo_965_, v_mid_981_);
v___y_989_ = v___x_997_;
goto v___jp_988_;
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_984_ = lean_array_fget_borrowed(v___y_983_, v_mid_981_);
v___x_985_ = lean_array_fget_borrowed(v___y_983_, v_hi_966_);
v___x_986_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_984_, v___x_985_);
if (v___x_986_ == 0)
{
lean_dec(v_mid_981_);
v___y_968_ = v___y_983_;
goto v___jp_967_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = lean_array_fswap(v___y_983_, v_mid_981_, v_hi_966_);
lean_dec(v_mid_981_);
v___y_968_ = v___x_987_;
goto v___jp_967_;
}
}
v___jp_988_:
{
lean_object* v___x_990_; lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_990_ = lean_array_fget_borrowed(v___y_989_, v_hi_966_);
v___x_991_ = lean_array_fget_borrowed(v___y_989_, v_lo_965_);
v___x_992_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_990_, v___x_991_);
if (v___x_992_ == 0)
{
v___y_983_ = v___y_989_;
goto v___jp_982_;
}
else
{
lean_object* v___x_993_; 
v___x_993_ = lean_array_fswap(v___y_989_, v_lo_965_, v_hi_966_);
v___y_983_ = v___x_993_;
goto v___jp_982_;
}
}
}
v___jp_967_:
{
lean_object* v_pivot_969_; lean_object* v___x_970_; lean_object* v_fst_971_; lean_object* v_snd_972_; uint8_t v___x_973_; 
v_pivot_969_ = lean_array_fget(v___y_968_, v_hi_966_);
lean_inc_n(v_lo_965_, 2);
v___x_970_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_966_, v_pivot_969_, v___y_968_, v_lo_965_, v_lo_965_);
lean_dec(v_pivot_969_);
v_fst_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_fst_971_);
v_snd_972_ = lean_ctor_get(v___x_970_, 1);
lean_inc(v_snd_972_);
lean_dec_ref(v___x_970_);
v___x_973_ = lean_nat_dec_le(v_hi_966_, v_fst_971_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_974_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_963_, v_snd_972_, v_lo_965_, v_fst_971_);
v___x_975_ = lean_unsigned_to_nat(1u);
v___x_976_ = lean_nat_add(v_fst_971_, v___x_975_);
lean_dec(v_fst_971_);
v_as_964_ = v___x_974_;
v_lo_965_ = v___x_976_;
goto _start;
}
else
{
lean_dec(v_fst_971_);
lean_dec(v_lo_965_);
return v_snd_972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object* v_n_998_, lean_object* v_as_999_, lean_object* v_lo_1000_, lean_object* v_hi_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_998_, v_as_999_, v_lo_1000_, v_hi_1001_);
lean_dec(v_hi_1001_);
lean_dec(v_n_998_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object* v_b_1003_, lean_object* v_key_1004_, lean_object* v_x_1005_){
_start:
{
lean_object* v_zero_1006_; uint8_t v_isZero_1007_; 
v_zero_1006_ = lean_unsigned_to_nat(0u);
v_isZero_1007_ = lean_nat_dec_eq(v_x_1005_, v_zero_1006_);
if (v_isZero_1007_ == 1)
{
lean_object* v_values_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_values_1008_ = lean_ctor_get(v_b_1003_, 0);
v___x_1009_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1008_, v_key_1004_);
v___x_1010_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___x_1011_ = l_Lean_ConstTrie_mk___redArg(v_key_1004_, v___x_1009_, v___x_1010_);
lean_dec(v___x_1009_);
return v___x_1011_;
}
else
{
lean_object* v_values_1012_; lean_object* v_children_1013_; lean_object* v___y_1015_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v_one_1030_; lean_object* v_n_1031_; lean_object* v___y_1033_; lean_object* v___x_1041_; 
v_values_1012_ = lean_ctor_get(v_b_1003_, 0);
v_children_1013_ = lean_ctor_get(v_b_1003_, 2);
v_one_1030_ = lean_unsigned_to_nat(1u);
v_n_1031_ = lean_nat_sub(v_x_1005_, v_one_1030_);
v___x_1041_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_children_1013_, v_key_1004_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v___x_1042_; 
v___x_1042_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_1033_ = v___x_1042_;
goto v___jp_1032_;
}
else
{
lean_object* v_val_1043_; 
v_val_1043_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_val_1043_);
lean_dec_ref_known(v___x_1041_, 1);
v___y_1033_ = v_val_1043_;
goto v___jp_1032_;
}
v___jp_1014_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1012_, v_key_1004_);
v___x_1017_ = l_Lean_ConstTrie_mk___redArg(v_key_1004_, v___x_1016_, v___y_1015_);
lean_dec(v___x_1016_);
return v___x_1017_;
}
v___jp_1018_:
{
lean_object* v___x_1023_; 
v___x_1023_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v___y_1021_, v___y_1020_, v___y_1019_, v___y_1022_);
lean_dec(v___y_1022_);
lean_dec(v___y_1021_);
v___y_1015_ = v___x_1023_;
goto v___jp_1014_;
}
v___jp_1024_:
{
uint8_t v___x_1029_; 
v___x_1029_ = lean_nat_dec_le(v___y_1028_, v___y_1025_);
if (v___x_1029_ == 0)
{
lean_dec(v___y_1025_);
lean_inc(v___y_1028_);
v___y_1019_ = v___y_1028_;
v___y_1020_ = v___y_1026_;
v___y_1021_ = v___y_1027_;
v___y_1022_ = v___y_1028_;
goto v___jp_1018_;
}
else
{
v___y_1019_ = v___y_1028_;
v___y_1020_ = v___y_1026_;
v___y_1021_ = v___y_1027_;
v___y_1022_ = v___y_1025_;
goto v___jp_1018_;
}
}
v___jp_1032_:
{
size_t v_sz_1034_; size_t v___x_1035_; lean_object* v_children_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v_sz_1034_ = lean_array_size(v___y_1033_);
v___x_1035_ = ((size_t)0ULL);
v_children_1036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1003_, v_n_1031_, v_sz_1034_, v___x_1035_, v___y_1033_);
lean_dec(v_n_1031_);
v___x_1037_ = lean_array_get_size(v_children_1036_);
v___x_1038_ = lean_nat_dec_eq(v___x_1037_, v_zero_1006_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = lean_nat_sub(v___x_1037_, v_one_1030_);
v___x_1040_ = lean_nat_dec_le(v_zero_1006_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_inc(v___x_1039_);
v___y_1025_ = v___x_1039_;
v___y_1026_ = v_children_1036_;
v___y_1027_ = v___x_1037_;
v___y_1028_ = v___x_1039_;
goto v___jp_1024_;
}
else
{
v___y_1025_ = v___x_1039_;
v___y_1026_ = v_children_1036_;
v___y_1027_ = v___x_1037_;
v___y_1028_ = v_zero_1006_;
goto v___jp_1024_;
}
}
else
{
v___y_1015_ = v_children_1036_;
goto v___jp_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object* v_b_1044_, lean_object* v_n_1045_, size_t v_sz_1046_, size_t v_i_1047_, lean_object* v_bs_1048_){
_start:
{
uint8_t v___x_1049_; 
v___x_1049_ = lean_usize_dec_lt(v_i_1047_, v_sz_1046_);
if (v___x_1049_ == 0)
{
return v_bs_1048_;
}
else
{
lean_object* v_v_1050_; lean_object* v___x_1051_; lean_object* v_bs_x27_1052_; lean_object* v___x_1053_; size_t v___x_1054_; size_t v___x_1055_; lean_object* v___x_1056_; 
v_v_1050_ = lean_array_uget(v_bs_1048_, v_i_1047_);
v___x_1051_ = lean_unsigned_to_nat(0u);
v_bs_x27_1052_ = lean_array_uset(v_bs_1048_, v_i_1047_, v___x_1051_);
v___x_1053_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1044_, v_v_1050_, v_n_1045_);
v___x_1054_ = ((size_t)1ULL);
v___x_1055_ = lean_usize_add(v_i_1047_, v___x_1054_);
v___x_1056_ = lean_array_uset(v_bs_x27_1052_, v_i_1047_, v___x_1053_);
v_i_1047_ = v___x_1055_;
v_bs_1048_ = v___x_1056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object* v_b_1058_, lean_object* v_n_1059_, lean_object* v_sz_1060_, lean_object* v_i_1061_, lean_object* v_bs_1062_){
_start:
{
size_t v_sz_boxed_1063_; size_t v_i_boxed_1064_; lean_object* v_res_1065_; 
v_sz_boxed_1063_ = lean_unbox_usize(v_sz_1060_);
lean_dec(v_sz_1060_);
v_i_boxed_1064_ = lean_unbox_usize(v_i_1061_);
lean_dec(v_i_1061_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1058_, v_n_1059_, v_sz_boxed_1063_, v_i_boxed_1064_, v_bs_1062_);
lean_dec(v_n_1059_);
lean_dec_ref(v_b_1058_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object* v_b_1066_, lean_object* v_key_1067_, lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1066_, v_key_1067_, v_x_1068_);
lean_dec(v_x_1068_);
lean_dec_ref(v_b_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object* v_00_u03b1_1070_, lean_object* v_b_1071_, lean_object* v_key_1072_, lean_object* v_x_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1071_, v_key_1072_, v_x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object* v_00_u03b1_1075_, lean_object* v_b_1076_, lean_object* v_key_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(v_00_u03b1_1075_, v_b_1076_, v_key_1077_, v_x_1078_);
lean_dec(v_x_1078_);
lean_dec_ref(v_b_1076_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object* v_00_u03b2_1080_, lean_object* v_m_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1081_, v_a_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object* v_00_u03b2_1084_, lean_object* v_m_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(v_00_u03b2_1084_, v_m_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_m_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object* v_00_u03b1_1088_, lean_object* v_b_1089_, lean_object* v_n_1090_, size_t v_sz_1091_, size_t v_i_1092_, lean_object* v_bs_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1089_, v_n_1090_, v_sz_1091_, v_i_1092_, v_bs_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object* v_00_u03b1_1095_, lean_object* v_b_1096_, lean_object* v_n_1097_, lean_object* v_sz_1098_, lean_object* v_i_1099_, lean_object* v_bs_1100_){
_start:
{
size_t v_sz_boxed_1101_; size_t v_i_boxed_1102_; lean_object* v_res_1103_; 
v_sz_boxed_1101_ = lean_unbox_usize(v_sz_1098_);
lean_dec(v_sz_1098_);
v_i_boxed_1102_ = lean_unbox_usize(v_i_1099_);
lean_dec(v_i_1099_);
v_res_1103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(v_00_u03b1_1095_, v_b_1096_, v_n_1097_, v_sz_boxed_1101_, v_i_boxed_1102_, v_bs_1100_);
lean_dec(v_n_1097_);
lean_dec_ref(v_b_1096_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object* v_00_u03b1_1104_, lean_object* v_n_1105_, lean_object* v_as_1106_, lean_object* v_lo_1107_, lean_object* v_hi_1108_, lean_object* v_w_1109_, lean_object* v_hlo_1110_, lean_object* v_hhi_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_1105_, v_as_1106_, v_lo_1107_, v_hi_1108_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object* v_00_u03b1_1113_, lean_object* v_n_1114_, lean_object* v_as_1115_, lean_object* v_lo_1116_, lean_object* v_hi_1117_, lean_object* v_w_1118_, lean_object* v_hlo_1119_, lean_object* v_hhi_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(v_00_u03b1_1113_, v_n_1114_, v_as_1115_, v_lo_1116_, v_hi_1117_, v_w_1118_, v_hlo_1119_, v_hhi_1120_);
lean_dec(v_hi_1117_);
lean_dec(v_n_1114_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object* v_00_u03b2_1122_, lean_object* v_a_1123_, lean_object* v_x_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1123_, v_x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1126_, lean_object* v_a_1127_, lean_object* v_x_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(v_00_u03b2_1126_, v_a_1127_, v_x_1128_);
lean_dec(v_x_1128_);
lean_dec(v_a_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(lean_object* v_00_u03b1_1130_, lean_object* v_n_1131_, lean_object* v_lo_1132_, lean_object* v_hi_1133_, lean_object* v_hhi_1134_, lean_object* v_pivot_1135_, lean_object* v_as_1136_, lean_object* v_i_1137_, lean_object* v_k_1138_, lean_object* v_ilo_1139_, lean_object* v_ik_1140_, lean_object* v_w_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_1133_, v_pivot_1135_, v_as_1136_, v_i_1137_, v_k_1138_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1143_, lean_object* v_n_1144_, lean_object* v_lo_1145_, lean_object* v_hi_1146_, lean_object* v_hhi_1147_, lean_object* v_pivot_1148_, lean_object* v_as_1149_, lean_object* v_i_1150_, lean_object* v_k_1151_, lean_object* v_ilo_1152_, lean_object* v_ik_1153_, lean_object* v_w_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(v_00_u03b1_1143_, v_n_1144_, v_lo_1145_, v_hi_1146_, v_hhi_1147_, v_pivot_1148_, v_as_1149_, v_i_1150_, v_k_1151_, v_ilo_1152_, v_ik_1153_, v_w_1154_);
lean_dec_ref(v_pivot_1148_);
lean_dec(v_hi_1146_);
lean_dec(v_lo_1145_);
lean_dec(v_n_1144_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(lean_object* v_as_1156_, size_t v_i_1157_, size_t v_stop_1158_, lean_object* v_b_1159_){
_start:
{
lean_object* v___y_1161_; uint8_t v___x_1165_; 
v___x_1165_ = lean_usize_dec_eq(v_i_1157_, v_stop_1158_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1166_ = lean_array_uget_borrowed(v_as_1156_, v_i_1157_);
v___x_1167_ = l_Lean_Name_getNumParts(v___x_1166_);
v___x_1168_ = lean_nat_dec_le(v_b_1159_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_dec(v___x_1167_);
v___y_1161_ = v_b_1159_;
goto v___jp_1160_;
}
else
{
lean_dec(v_b_1159_);
v___y_1161_ = v___x_1167_;
goto v___jp_1160_;
}
}
else
{
return v_b_1159_;
}
v___jp_1160_:
{
size_t v___x_1162_; size_t v___x_1163_; 
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_add(v_i_1157_, v___x_1162_);
v_i_1157_ = v___x_1163_;
v_b_1159_ = v___y_1161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0___boxed(lean_object* v_as_1169_, lean_object* v_i_1170_, lean_object* v_stop_1171_, lean_object* v_b_1172_){
_start:
{
size_t v_i_boxed_1173_; size_t v_stop_boxed_1174_; lean_object* v_res_1175_; 
v_i_boxed_1173_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_stop_boxed_1174_ = lean_unbox_usize(v_stop_1171_);
lean_dec(v_stop_1171_);
v_res_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(v_as_1169_, v_i_boxed_1173_, v_stop_boxed_1174_, v_b_1172_);
lean_dec_ref(v_as_1169_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(lean_object* v_names_1176_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = lean_array_get_size(v_names_1176_);
v___x_1179_ = lean_nat_dec_lt(v___x_1177_, v___x_1178_);
if (v___x_1179_ == 0)
{
return v___x_1177_;
}
else
{
size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = ((size_t)0ULL);
v___x_1181_ = lean_usize_of_nat(v___x_1178_);
v___x_1182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(v_names_1176_, v___x_1180_, v___x_1181_, v___x_1177_);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound___boxed(lean_object* v_names_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1183_);
lean_dec_ref(v_names_1183_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(lean_object* v_a_1185_, lean_object* v_b_1186_, lean_object* v_x_1187_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
lean_dec(v_b_1186_);
lean_dec(v_a_1185_);
return v_x_1187_;
}
else
{
lean_object* v_key_1188_; lean_object* v_value_1189_; lean_object* v_tail_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1202_; 
v_key_1188_ = lean_ctor_get(v_x_1187_, 0);
v_value_1189_ = lean_ctor_get(v_x_1187_, 1);
v_tail_1190_ = lean_ctor_get(v_x_1187_, 2);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_x_1187_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1192_ = v_x_1187_;
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_tail_1190_);
lean_inc(v_value_1189_);
lean_inc(v_key_1188_);
lean_dec(v_x_1187_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_name_eq(v_key_1188_, v_a_1185_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1185_, v_b_1186_, v_tail_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 2, v___x_1195_);
v___x_1197_ = v___x_1192_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_key_1188_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_value_1189_);
lean_ctor_set(v_reuseFailAlloc_1198_, 2, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
else
{
lean_object* v___x_1200_; 
lean_dec(v_value_1189_);
lean_dec(v_key_1188_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v_b_1186_);
lean_ctor_set(v___x_1192_, 0, v_a_1185_);
v___x_1200_ = v___x_1192_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1185_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_b_1186_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v_tail_1190_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(lean_object* v_m_1203_, lean_object* v_a_1204_, lean_object* v_b_1205_){
_start:
{
lean_object* v_size_1206_; lean_object* v_buckets_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1253_; 
v_size_1206_ = lean_ctor_get(v_m_1203_, 0);
v_buckets_1207_ = lean_ctor_get(v_m_1203_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_m_1203_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1209_ = v_m_1203_;
v_isShared_1210_ = v_isSharedCheck_1253_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_buckets_1207_);
lean_inc(v_size_1206_);
lean_dec(v_m_1203_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1253_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1211_; uint64_t v___y_1213_; 
v___x_1211_ = lean_array_get_size(v_buckets_1207_);
if (lean_obj_tag(v_a_1204_) == 0)
{
uint64_t v___x_1251_; 
v___x_1251_ = 1723ULL;
v___y_1213_ = v___x_1251_;
goto v___jp_1212_;
}
else
{
uint64_t v_hash_1252_; 
v_hash_1252_ = lean_ctor_get_uint64(v_a_1204_, sizeof(void*)*2);
v___y_1213_ = v_hash_1252_;
goto v___jp_1212_;
}
v___jp_1212_:
{
uint64_t v___x_1214_; uint64_t v___x_1215_; uint64_t v_fold_1216_; uint64_t v___x_1217_; uint64_t v___x_1218_; uint64_t v___x_1219_; size_t v___x_1220_; size_t v___x_1221_; size_t v___x_1222_; size_t v___x_1223_; size_t v___x_1224_; lean_object* v_bkt_1225_; uint8_t v___x_1226_; 
v___x_1214_ = 32ULL;
v___x_1215_ = lean_uint64_shift_right(v___y_1213_, v___x_1214_);
v_fold_1216_ = lean_uint64_xor(v___y_1213_, v___x_1215_);
v___x_1217_ = 16ULL;
v___x_1218_ = lean_uint64_shift_right(v_fold_1216_, v___x_1217_);
v___x_1219_ = lean_uint64_xor(v_fold_1216_, v___x_1218_);
v___x_1220_ = lean_uint64_to_usize(v___x_1219_);
v___x_1221_ = lean_usize_of_nat(v___x_1211_);
v___x_1222_ = ((size_t)1ULL);
v___x_1223_ = lean_usize_sub(v___x_1221_, v___x_1222_);
v___x_1224_ = lean_usize_land(v___x_1220_, v___x_1223_);
v_bkt_1225_ = lean_array_uget_borrowed(v_buckets_1207_, v___x_1224_);
v___x_1226_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_1204_, v_bkt_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; lean_object* v_size_x27_1228_; lean_object* v___x_1229_; lean_object* v_buckets_x27_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1227_ = lean_unsigned_to_nat(1u);
v_size_x27_1228_ = lean_nat_add(v_size_1206_, v___x_1227_);
lean_dec(v_size_1206_);
lean_inc(v_bkt_1225_);
v___x_1229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1229_, 0, v_a_1204_);
lean_ctor_set(v___x_1229_, 1, v_b_1205_);
lean_ctor_set(v___x_1229_, 2, v_bkt_1225_);
v_buckets_x27_1230_ = lean_array_uset(v_buckets_1207_, v___x_1224_, v___x_1229_);
v___x_1231_ = lean_unsigned_to_nat(4u);
v___x_1232_ = lean_nat_mul(v_size_x27_1228_, v___x_1231_);
v___x_1233_ = lean_unsigned_to_nat(3u);
v___x_1234_ = lean_nat_div(v___x_1232_, v___x_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_array_get_size(v_buckets_x27_1230_);
v___x_1236_ = lean_nat_dec_le(v___x_1234_, v___x_1235_);
lean_dec(v___x_1234_);
if (v___x_1236_ == 0)
{
lean_object* v_val_1237_; lean_object* v___x_1239_; 
v_val_1237_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_1230_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v_val_1237_);
lean_ctor_set(v___x_1209_, 0, v_size_x27_1228_);
v___x_1239_ = v___x_1209_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_size_x27_1228_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_val_1237_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
else
{
lean_object* v___x_1242_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v_buckets_x27_1230_);
lean_ctor_set(v___x_1209_, 0, v_size_x27_1228_);
v___x_1242_ = v___x_1209_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_size_x27_1228_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_buckets_x27_1230_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
else
{
lean_object* v___x_1244_; lean_object* v_buckets_x27_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
lean_inc(v_bkt_1225_);
v___x_1244_ = lean_box(0);
v_buckets_x27_1245_ = lean_array_uset(v_buckets_1207_, v___x_1224_, v___x_1244_);
v___x_1246_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1204_, v_b_1205_, v_bkt_1225_);
v___x_1247_ = lean_array_uset(v_buckets_x27_1245_, v___x_1224_, v___x_1246_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v___x_1247_);
v___x_1249_ = v___x_1209_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_size_1206_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v___x_1247_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(lean_object* v_names_1254_, lean_object* v_vals_1255_, lean_object* v_i_1256_, lean_object* v_b_1257_){
_start:
{
lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = lean_array_get_size(v_names_1254_);
v___x_1259_ = lean_nat_dec_lt(v_i_1256_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v_i_1256_);
return v_b_1257_;
}
else
{
lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = lean_array_get_size(v_vals_1255_);
v___x_1261_ = lean_nat_dec_lt(v_i_1256_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec(v_i_1256_);
return v_b_1257_;
}
else
{
lean_object* v_values_1262_; lean_object* v_seen_1263_; lean_object* v_children_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1278_; 
v_values_1262_ = lean_ctor_get(v_b_1257_, 0);
v_seen_1263_ = lean_ctor_get(v_b_1257_, 1);
v_children_1264_ = lean_ctor_get(v_b_1257_, 2);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_b_1257_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1266_ = v_b_1257_;
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_children_1264_);
lean_inc(v_seen_1263_);
lean_inc(v_values_1262_);
lean_dec(v_b_1257_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_b_1272_; 
v___x_1268_ = lean_array_fget_borrowed(v_names_1254_, v_i_1256_);
v___x_1269_ = lean_array_fget_borrowed(v_vals_1255_, v_i_1256_);
lean_inc(v___x_1269_);
lean_inc(v___x_1268_);
v___x_1270_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_values_1262_, v___x_1268_, v___x_1269_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1270_);
v_b_1272_ = v___x_1266_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_seen_1263_);
lean_ctor_set(v_reuseFailAlloc_1277_, 2, v_children_1264_);
v_b_1272_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = lean_nat_add(v_i_1256_, v___x_1273_);
lean_dec(v_i_1256_);
lean_inc(v___x_1268_);
v___x_1275_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_1272_, v___x_1268_);
v_i_1256_ = v___x_1274_;
v_b_1257_ = v___x_1275_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg___boxed(lean_object* v_names_1279_, lean_object* v_vals_1280_, lean_object* v_i_1281_, lean_object* v_b_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1279_, v_vals_1280_, v_i_1281_, v_b_1282_);
lean_dec_ref(v_vals_1280_);
lean_dec_ref(v_names_1279_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(lean_object* v_00_u03b1_1284_, lean_object* v_names_1285_, lean_object* v_vals_1286_, lean_object* v_i_1287_, lean_object* v_b_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1285_, v_vals_1286_, v_i_1287_, v_b_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___boxed(lean_object* v_00_u03b1_1290_, lean_object* v_names_1291_, lean_object* v_vals_1292_, lean_object* v_i_1293_, lean_object* v_b_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(v_00_u03b1_1290_, v_names_1291_, v_vals_1292_, v_i_1293_, v_b_1294_);
lean_dec_ref(v_vals_1292_);
lean_dec_ref(v_names_1291_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0(lean_object* v_00_u03b2_1296_, lean_object* v_m_1297_, lean_object* v_a_1298_, lean_object* v_b_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_m_1297_, v_a_1298_, v_b_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0(lean_object* v_00_u03b2_1301_, lean_object* v_a_1302_, lean_object* v_b_1303_, lean_object* v_x_1304_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1302_, v_b_1303_, v_x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_unsigned_to_nat(16u);
v___x_1308_ = lean_mk_array(v___x_1307_, v___x_1306_);
return v___x_1308_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__0, &l_Lean_ConstTrie_ofArrays___redArg___closed__0_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v___x_1313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
lean_ctor_set(v___x_1313_, 2, v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object* v_names_1314_, lean_object* v_vals_1315_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1316_ = lean_unsigned_to_nat(0u);
v___x_1317_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__2, &l_Lean_ConstTrie_ofArrays___redArg___closed__2_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2);
v___x_1318_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1314_, v_vals_1315_, v___x_1316_, v___x_1317_);
v___x_1319_ = lean_box(0);
v___x_1320_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1314_);
v___x_1321_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1318_, v___x_1319_, v___x_1320_);
lean_dec(v___x_1320_);
lean_dec_ref(v___x_1318_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object* v_names_1322_, lean_object* v_vals_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1322_, v_vals_1323_);
lean_dec_ref(v_vals_1323_);
lean_dec_ref(v_names_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object* v_00_u03b1_1325_, lean_object* v_names_1326_, lean_object* v_vals_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1326_, v_vals_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object* v_00_u03b1_1329_, lean_object* v_names_1330_, lean_object* v_vals_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_ConstTrie_ofArrays(v_00_u03b1_1329_, v_names_1330_, v_vals_1331_);
lean_dec_ref(v_vals_1331_);
lean_dec_ref(v_names_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object* v_as_1333_, size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_b_1336_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = lean_usize_dec_lt(v_i_1335_, v_sz_1334_);
if (v___x_1337_ == 0)
{
return v_b_1336_;
}
else
{
lean_object* v_values_1338_; lean_object* v_seen_1339_; lean_object* v_children_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1354_; 
v_values_1338_ = lean_ctor_get(v_b_1336_, 0);
v_seen_1339_ = lean_ctor_get(v_b_1336_, 1);
v_children_1340_ = lean_ctor_get(v_b_1336_, 2);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_b_1336_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1342_ = v_b_1336_;
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_children_1340_);
lean_inc(v_seen_1339_);
lean_inc(v_values_1338_);
lean_dec(v_b_1336_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_a_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
v_a_1344_ = lean_array_uget_borrowed(v_as_1333_, v_i_1335_);
v___x_1345_ = lean_box(0);
lean_inc(v_a_1344_);
v___x_1346_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_values_1338_, v_a_1344_, v___x_1345_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1346_);
v___x_1348_ = v___x_1342_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_seen_1339_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_children_1340_);
v___x_1348_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; 
lean_inc(v_a_1344_);
v___x_1349_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1348_, v_a_1344_);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_add(v_i_1335_, v___x_1350_);
v_i_1335_ = v___x_1351_;
v_b_1336_ = v___x_1349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object* v_as_1355_, lean_object* v_sz_1356_, lean_object* v_i_1357_, lean_object* v_b_1358_){
_start:
{
size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1356_);
lean_dec(v_sz_1356_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1357_);
lean_dec(v_i_1357_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_as_1355_, v_sz_boxed_1359_, v_i_boxed_1360_, v_b_1358_);
lean_dec_ref(v_as_1355_);
return v_res_1361_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofNames___closed__0(void){
_start:
{
lean_object* v___x_1362_; lean_object* v_b_1363_; 
v___x_1362_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1363_, 0, v___x_1362_);
lean_ctor_set(v_b_1363_, 1, v___x_1362_);
lean_ctor_set(v_b_1363_, 2, v___x_1362_);
return v_b_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object* v_names_1364_){
_start:
{
lean_object* v_b_1365_; size_t v_sz_1366_; size_t v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_b_1365_ = lean_obj_once(&l_Lean_ConstTrie_ofNames___closed__0, &l_Lean_ConstTrie_ofNames___closed__0_once, _init_l_Lean_ConstTrie_ofNames___closed__0);
v_sz_1366_ = lean_array_size(v_names_1364_);
v___x_1367_ = ((size_t)0ULL);
v___x_1368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_names_1364_, v_sz_1366_, v___x_1367_, v_b_1365_);
v___x_1369_ = lean_box(0);
v___x_1370_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1364_);
v___x_1371_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1368_, v___x_1369_, v___x_1370_);
lean_dec(v___x_1370_);
lean_dec_ref(v___x_1368_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object* v_names_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_ConstTrie_ofNames(v_names_1372_);
lean_dec_ref(v_names_1372_);
return v_res_1373_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl(void){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_box(0);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object* v_a_00___x40___internal___hyg_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = lean_imported_consts_cache_new();
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg(lean_object* v_x_1378_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_obj_tag_nat(v_x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg___boxed(lean_object* v_x_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_ImportedTree_ctorIdx___impl___redArg(v_x_1380_);
lean_dec_ref(v_x_1380_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl(lean_object* v_00_u03b1_1382_, lean_object* v_x_1383_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_obj_tag_nat(v_x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___boxed(lean_object* v_00_u03b1_1385_, lean_object* v_x_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_ImportedTree_ctorIdx___impl(v_00_u03b1_1385_, v_x_1386_);
lean_dec_ref(v_x_1386_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___redArg(lean_object* v_t_1388_, lean_object* v_k_1389_){
_start:
{
if (lean_obj_tag(v_t_1388_) == 0)
{
lean_object* v_modIdx_1390_; lean_object* v_tree_1391_; lean_object* v___x_1392_; 
v_modIdx_1390_ = lean_ctor_get(v_t_1388_, 0);
lean_inc(v_modIdx_1390_);
v_tree_1391_ = lean_ctor_get(v_t_1388_, 1);
lean_inc_ref(v_tree_1391_);
lean_dec_ref_known(v_t_1388_, 2);
v___x_1392_ = lean_apply_2(v_k_1389_, v_modIdx_1390_, v_tree_1391_);
return v___x_1392_;
}
else
{
lean_object* v_key_1393_; lean_object* v_entry_x3f_1394_; lean_object* v_children_1395_; lean_object* v___x_1396_; 
v_key_1393_ = lean_ctor_get(v_t_1388_, 0);
lean_inc(v_key_1393_);
v_entry_x3f_1394_ = lean_ctor_get(v_t_1388_, 1);
lean_inc(v_entry_x3f_1394_);
v_children_1395_ = lean_ctor_get(v_t_1388_, 2);
lean_inc_ref(v_children_1395_);
lean_dec_ref(v_t_1388_);
v___x_1396_ = lean_apply_3(v_k_1389_, v_key_1393_, v_entry_x3f_1394_, v_children_1395_);
return v___x_1396_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim(lean_object* v_00_u03b1_1397_, lean_object* v_motive__1_1398_, lean_object* v_ctorIdx_1399_, lean_object* v_t_1400_, lean_object* v_h_1401_, lean_object* v_k_1402_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1400_, v_k_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_motive__1_1405_, lean_object* v_ctorIdx_1406_, lean_object* v_t_1407_, lean_object* v_h_1408_, lean_object* v_k_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_ImportedTree_ctorElim(v_00_u03b1_1404_, v_motive__1_1405_, v_ctorIdx_1406_, v_t_1407_, v_h_1408_, v_k_1409_);
lean_dec(v_ctorIdx_1406_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim___redArg(lean_object* v_t_1411_, lean_object* v_mod_1412_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1411_, v_mod_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim(lean_object* v_00_u03b1_1414_, lean_object* v_motive__1_1415_, lean_object* v_t_1416_, lean_object* v_h_1417_, lean_object* v_mod_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1416_, v_mod_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim___redArg(lean_object* v_t_1420_, lean_object* v_merged_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1420_, v_merged_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim(lean_object* v_00_u03b1_1423_, lean_object* v_motive__1_1424_, lean_object* v_t_1425_, lean_object* v_h_1426_, lean_object* v_merged_1427_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1425_, v_merged_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim___redArg(lean_object* v_t_1429_, lean_object* v_lazy_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1429_, v_lazy_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim(lean_object* v_00_u03b1_1432_, lean_object* v_motive__1_1433_, lean_object* v_t_1434_, lean_object* v_h_1435_, lean_object* v_lazy_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1434_, v_lazy_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg(){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = ((lean_object*)(l_Lean_instInhabitedImportedTree___redArg___closed__1));
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg___boxed(lean_object* v___dummy_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_instInhabitedImportedTree___redArg();
return v_res_1447_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedTree___closed__0(void){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lean_instInhabitedImportedTree___redArg();
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree(lean_object* v_00_u03b1_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg(){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___redArg___closed__1));
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object* v___dummy_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_instInhabitedImportedConsts___redArg();
return v_res_1461_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedConsts___closed__0(void){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_instInhabitedImportedConsts___redArg();
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object* v_00_u03b1_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(lean_object* v_x_1465_){
_start:
{
if (lean_obj_tag(v_x_1465_) == 0)
{
lean_object* v_tree_1466_; lean_object* v_key_1467_; 
v_tree_1466_ = lean_ctor_get(v_x_1465_, 1);
v_key_1467_ = lean_ctor_get(v_tree_1466_, 0);
lean_inc(v_key_1467_);
return v_key_1467_;
}
else
{
lean_object* v_key_1468_; 
v_key_1468_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_key_1468_);
return v_key_1468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg___boxed(lean_object* v_x_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v_x_1469_);
lean_dec_ref(v_x_1469_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(lean_object* v_00_u03b1_1471_, lean_object* v_x_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v_x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed(lean_object* v_00_u03b1_1474_, lean_object* v_x_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(v_00_u03b1_1474_, v_x_1475_);
lean_dec_ref(v_x_1475_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(lean_object* v_cs_1477_, uint64_t v_h_1478_, lean_object* v_lo_1479_, lean_object* v_hi_1480_){
_start:
{
uint8_t v___x_1481_; 
v___x_1481_ = lean_nat_dec_lt(v_lo_1479_, v_hi_1480_);
if (v___x_1481_ == 0)
{
lean_dec(v_hi_1480_);
return v_lo_1479_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_mid_1485_; uint64_t v___y_1487_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1482_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_1483_ = lean_nat_add(v_lo_1479_, v_hi_1480_);
v___x_1484_ = lean_unsigned_to_nat(1u);
v_mid_1485_ = lean_nat_shiftr(v___x_1483_, v___x_1484_);
lean_dec(v___x_1483_);
v___x_1492_ = lean_array_get_borrowed(v___x_1482_, v_cs_1477_, v_mid_1485_);
v___x_1493_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
uint64_t v___x_1494_; 
v___x_1494_ = 1723ULL;
v___y_1487_ = v___x_1494_;
goto v___jp_1486_;
}
else
{
uint64_t v_hash_1495_; 
v_hash_1495_ = lean_ctor_get_uint64(v___x_1493_, sizeof(void*)*2);
lean_dec(v___x_1493_);
v___y_1487_ = v_hash_1495_;
goto v___jp_1486_;
}
v___jp_1486_:
{
uint8_t v___x_1488_; 
v___x_1488_ = lean_uint64_dec_lt(v___y_1487_, v_h_1478_);
if (v___x_1488_ == 0)
{
lean_dec(v_hi_1480_);
v_hi_1480_ = v_mid_1485_;
goto _start;
}
else
{
lean_object* v___x_1490_; 
lean_dec(v_lo_1479_);
v___x_1490_ = lean_nat_add(v_mid_1485_, v___x_1484_);
lean_dec(v_mid_1485_);
v_lo_1479_ = v___x_1490_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_cs_1496_, lean_object* v_h_1497_, lean_object* v_lo_1498_, lean_object* v_hi_1499_){
_start:
{
uint64_t v_h_boxed_1500_; lean_object* v_res_1501_; 
v_h_boxed_1500_ = lean_unbox_uint64(v_h_1497_);
lean_dec_ref(v_h_1497_);
v_res_1501_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1496_, v_h_boxed_1500_, v_lo_1498_, v_hi_1499_);
lean_dec_ref(v_cs_1496_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(lean_object* v_cs_1502_, lean_object* v_k_1503_, uint64_t v_h_1504_, lean_object* v_j_1505_){
_start:
{
uint8_t v___y_1511_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1513_ = lean_array_get_size(v_cs_1502_);
v___x_1514_ = lean_nat_dec_lt(v_j_1505_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
lean_dec(v_j_1505_);
v___x_1515_ = lean_box(0);
return v___x_1515_;
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v_c_1518_; uint64_t v___y_1520_; 
v___x_1516_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_1517_ = lean_array_get_borrowed(v___x_1516_, v_cs_1502_, v_j_1505_);
v_c_1518_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v___x_1517_);
if (lean_obj_tag(v_c_1518_) == 0)
{
uint64_t v___x_1530_; 
v___x_1530_ = 1723ULL;
v___y_1520_ = v___x_1530_;
goto v___jp_1519_;
}
else
{
uint64_t v_hash_1531_; 
v_hash_1531_ = lean_ctor_get_uint64(v_c_1518_, sizeof(void*)*2);
v___y_1520_ = v_hash_1531_;
goto v___jp_1519_;
}
v___jp_1519_:
{
uint8_t v___x_1521_; 
v___x_1521_ = lean_uint64_dec_eq(v___y_1520_, v_h_1504_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; 
lean_dec(v_c_1518_);
lean_dec(v_j_1505_);
v___x_1522_ = lean_box(0);
return v___x_1522_;
}
else
{
switch(lean_obj_tag(v_c_1518_))
{
case 0:
{
if (lean_obj_tag(v_k_1503_) == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_j_1505_);
return v___x_1523_;
}
else
{
goto v___jp_1506_;
}
}
case 1:
{
if (lean_obj_tag(v_k_1503_) == 1)
{
lean_object* v_str_1524_; lean_object* v_str_1525_; uint8_t v___x_1526_; 
v_str_1524_ = lean_ctor_get(v_c_1518_, 1);
lean_inc_ref(v_str_1524_);
lean_dec_ref_known(v_c_1518_, 2);
v_str_1525_ = lean_ctor_get(v_k_1503_, 1);
v___x_1526_ = lean_string_dec_eq(v_str_1524_, v_str_1525_);
lean_dec_ref(v_str_1524_);
v___y_1511_ = v___x_1526_;
goto v___jp_1510_;
}
else
{
lean_dec_ref_known(v_c_1518_, 2);
goto v___jp_1506_;
}
}
default: 
{
if (lean_obj_tag(v_k_1503_) == 2)
{
lean_object* v_i_1527_; lean_object* v_i_1528_; uint8_t v___x_1529_; 
v_i_1527_ = lean_ctor_get(v_c_1518_, 1);
lean_inc(v_i_1527_);
lean_dec_ref_known(v_c_1518_, 2);
v_i_1528_ = lean_ctor_get(v_k_1503_, 1);
v___x_1529_ = lean_nat_dec_eq(v_i_1527_, v_i_1528_);
lean_dec(v_i_1527_);
v___y_1511_ = v___x_1529_;
goto v___jp_1510_;
}
else
{
lean_dec_ref_known(v_c_1518_, 2);
goto v___jp_1506_;
}
}
}
}
}
}
v___jp_1506_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_unsigned_to_nat(1u);
v___x_1508_ = lean_nat_add(v_j_1505_, v___x_1507_);
lean_dec(v_j_1505_);
v_j_1505_ = v___x_1508_;
goto _start;
}
v___jp_1510_:
{
if (v___y_1511_ == 0)
{
goto v___jp_1506_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_j_1505_);
return v___x_1512_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg___boxed(lean_object* v_cs_1532_, lean_object* v_k_1533_, lean_object* v_h_1534_, lean_object* v_j_1535_){
_start:
{
uint64_t v_h_boxed_1536_; lean_object* v_res_1537_; 
v_h_boxed_1536_ = lean_unbox_uint64(v_h_1534_);
lean_dec_ref(v_h_1534_);
v_res_1537_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1532_, v_k_1533_, v_h_boxed_1536_, v_j_1535_);
lean_dec(v_k_1533_);
lean_dec_ref(v_cs_1532_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(lean_object* v_cs_1538_, lean_object* v_k_1539_){
_start:
{
uint64_t v___y_1541_; 
if (lean_obj_tag(v_k_1539_) == 0)
{
uint64_t v___x_1546_; 
v___x_1546_ = 1723ULL;
v___y_1541_ = v___x_1546_;
goto v___jp_1540_;
}
else
{
uint64_t v_hash_1547_; 
v_hash_1547_ = lean_ctor_get_uint64(v_k_1539_, sizeof(void*)*2);
v___y_1541_ = v_hash_1547_;
goto v___jp_1540_;
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1542_ = lean_unsigned_to_nat(0u);
v___x_1543_ = lean_array_get_size(v_cs_1538_);
v___x_1544_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1538_, v___y_1541_, v___x_1542_, v___x_1543_);
v___x_1545_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1538_, v_k_1539_, v___y_1541_, v___x_1544_);
return v___x_1545_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg___boxed(lean_object* v_cs_1548_, lean_object* v_k_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1548_, v_k_1549_);
lean_dec(v_k_1549_);
lean_dec_ref(v_cs_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(lean_object* v_x_1551_, lean_object* v_x_1552_, lean_object* v_x_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_box(0);
v___x_1555_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
switch(lean_obj_tag(v_x_1551_))
{
case 0:
{
lean_object* v_tree_1556_; lean_object* v___x_1557_; 
v_tree_1556_ = lean_ctor_get(v_x_1551_, 1);
lean_inc_ref(v_tree_1556_);
lean_dec_ref_known(v_x_1551_, 2);
v___x_1557_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_1556_, v_x_1552_, v_x_1553_);
lean_dec_ref(v_tree_1556_);
return v___x_1557_;
}
case 1:
{
lean_object* v_entry_x3f_1558_; lean_object* v_children_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v_entry_x3f_1558_ = lean_ctor_get(v_x_1551_, 1);
lean_inc(v_entry_x3f_1558_);
v_children_1559_ = lean_ctor_get(v_x_1551_, 2);
lean_inc_ref(v_children_1559_);
lean_dec_ref_known(v_x_1551_, 3);
v___x_1560_ = lean_unsigned_to_nat(0u);
v___x_1561_ = lean_nat_dec_eq(v_x_1553_, v___x_1560_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
lean_dec(v_entry_x3f_1558_);
v___x_1562_ = lean_unsigned_to_nat(1u);
v___x_1563_ = lean_nat_sub(v_x_1553_, v___x_1562_);
lean_dec(v_x_1553_);
v___x_1564_ = lean_array_get_borrowed(v___x_1554_, v_x_1552_, v___x_1563_);
v___x_1565_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_children_1559_, v___x_1564_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v___x_1566_; 
lean_dec(v___x_1563_);
lean_dec_ref(v_children_1559_);
v___x_1566_ = lean_box(0);
return v___x_1566_;
}
else
{
lean_object* v_val_1567_; lean_object* v___x_1568_; 
v_val_1567_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_val_1567_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1568_ = lean_array_get(v___x_1555_, v_children_1559_, v_val_1567_);
lean_dec(v_val_1567_);
lean_dec_ref(v_children_1559_);
v_x_1551_ = v___x_1568_;
v_x_1553_ = v___x_1563_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1559_);
lean_dec(v_x_1553_);
if (lean_obj_tag(v_entry_x3f_1558_) == 0)
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_box(0);
return v___x_1570_;
}
else
{
lean_object* v_val_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1579_; 
v_val_1571_ = lean_ctor_get(v_entry_x3f_1558_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_entry_x3f_1558_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1573_ = v_entry_x3f_1558_;
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_val_1571_);
lean_dec(v_entry_x3f_1558_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_fst_1575_; lean_object* v___x_1577_; 
v_fst_1575_ = lean_ctor_get(v_val_1571_, 0);
lean_inc(v_fst_1575_);
lean_dec(v_val_1571_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v_fst_1575_);
v___x_1577_ = v___x_1573_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_fst_1575_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
default: 
{
lean_object* v_entry_x3f_1580_; lean_object* v_children_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v_entry_x3f_1580_ = lean_ctor_get(v_x_1551_, 1);
lean_inc(v_entry_x3f_1580_);
v_children_1581_ = lean_ctor_get(v_x_1551_, 2);
lean_inc_ref(v_children_1581_);
lean_dec_ref_known(v_x_1551_, 3);
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_nat_dec_eq(v_x_1553_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_object* v_cs_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
lean_dec(v_entry_x3f_1580_);
v_cs_1584_ = lean_thunk_get_own(v_children_1581_);
lean_dec_ref(v_children_1581_);
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = lean_nat_sub(v_x_1553_, v___x_1585_);
lean_dec(v_x_1553_);
v___x_1587_ = lean_array_get_borrowed(v___x_1554_, v_x_1552_, v___x_1586_);
v___x_1588_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1584_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
lean_dec(v___x_1586_);
lean_dec(v_cs_1584_);
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
else
{
lean_object* v_val_1590_; lean_object* v___x_1591_; 
v_val_1590_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_val_1590_);
lean_dec_ref_known(v___x_1588_, 1);
v___x_1591_ = lean_array_get(v___x_1555_, v_cs_1584_, v_val_1590_);
lean_dec(v_val_1590_);
lean_dec(v_cs_1584_);
v_x_1551_ = v___x_1591_;
v_x_1553_ = v___x_1586_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1581_);
lean_dec(v_x_1553_);
if (lean_obj_tag(v_entry_x3f_1580_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_box(0);
return v___x_1593_;
}
else
{
lean_object* v_val_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1602_; 
v_val_1594_ = lean_ctor_get(v_entry_x3f_1580_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_entry_x3f_1580_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1596_ = v_entry_x3f_1580_;
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_val_1594_);
lean_dec(v_entry_x3f_1580_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v_fst_1598_; lean_object* v___x_1600_; 
v_fst_1598_ = lean_ctor_get(v_val_1594_, 0);
lean_inc(v_fst_1598_);
lean_dec(v_val_1594_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v_fst_1598_);
v___x_1600_ = v___x_1596_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_fst_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg___boxed(lean_object* v_x_1603_, lean_object* v_x_1604_, lean_object* v_x_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_x_1603_, v_x_1604_, v_x_1605_);
lean_dec_ref(v_x_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(lean_object* v_00_u03b1_1607_, lean_object* v_x_1608_, lean_object* v_x_1609_, lean_object* v_x_1610_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_x_1608_, v_x_1609_, v_x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_x_1613_, lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(v_00_u03b1_1612_, v_x_1613_, v_x_1614_, v_x_1615_);
lean_dec_ref(v_x_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(lean_object* v_00_u03b1_1617_, lean_object* v_cs_1618_, lean_object* v_k_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1618_, v_k_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___boxed(lean_object* v_00_u03b1_1621_, lean_object* v_cs_1622_, lean_object* v_k_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(v_00_u03b1_1621_, v_cs_1622_, v_k_1623_);
lean_dec(v_k_1623_);
lean_dec_ref(v_cs_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_1625_, lean_object* v_cs_1626_, uint64_t v_h_1627_, lean_object* v_lo_1628_, lean_object* v_hi_1629_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1626_, v_h_1627_, v_lo_1628_, v_hi_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_cs_1632_, lean_object* v_h_1633_, lean_object* v_lo_1634_, lean_object* v_hi_1635_){
_start:
{
uint64_t v_h_boxed_1636_; lean_object* v_res_1637_; 
v_h_boxed_1636_ = lean_unbox_uint64(v_h_1633_);
lean_dec_ref(v_h_1633_);
v_res_1637_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(v_00_u03b1_1631_, v_cs_1632_, v_h_boxed_1636_, v_lo_1634_, v_hi_1635_);
lean_dec_ref(v_cs_1632_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(lean_object* v_00_u03b1_1638_, lean_object* v_cs_1639_, lean_object* v_k_1640_, uint64_t v_h_1641_, lean_object* v_j_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1639_, v_k_1640_, v_h_1641_, v_j_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1644_, lean_object* v_cs_1645_, lean_object* v_k_1646_, lean_object* v_h_1647_, lean_object* v_j_1648_){
_start:
{
uint64_t v_h_boxed_1649_; lean_object* v_res_1650_; 
v_h_boxed_1649_ = lean_unbox_uint64(v_h_1647_);
lean_dec_ref(v_h_1647_);
v_res_1650_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(v_00_u03b1_1644_, v_cs_1645_, v_k_1646_, v_h_boxed_1649_, v_j_1648_);
lean_dec(v_k_1646_);
lean_dec_ref(v_cs_1645_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter___redArg(lean_object* v_x_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v_h__1_1654_, lean_object* v_h__2_1655_, lean_object* v_h__3_1656_){
_start:
{
switch(lean_obj_tag(v_x_1651_))
{
case 0:
{
lean_object* v_modIdx_1657_; lean_object* v_tree_1658_; lean_object* v___x_1659_; 
lean_dec(v_h__3_1656_);
lean_dec(v_h__2_1655_);
v_modIdx_1657_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_modIdx_1657_);
v_tree_1658_ = lean_ctor_get(v_x_1651_, 1);
lean_inc_ref(v_tree_1658_);
lean_dec_ref_known(v_x_1651_, 2);
v___x_1659_ = lean_apply_4(v_h__1_1654_, v_modIdx_1657_, v_tree_1658_, v_x_1652_, v_x_1653_);
return v___x_1659_;
}
case 1:
{
lean_object* v_key_1660_; lean_object* v_entry_x3f_1661_; lean_object* v_children_1662_; lean_object* v___x_1663_; 
lean_dec(v_h__2_1655_);
lean_dec(v_h__1_1654_);
v_key_1660_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_key_1660_);
v_entry_x3f_1661_ = lean_ctor_get(v_x_1651_, 1);
lean_inc(v_entry_x3f_1661_);
v_children_1662_ = lean_ctor_get(v_x_1651_, 2);
lean_inc_ref(v_children_1662_);
lean_dec_ref_known(v_x_1651_, 3);
v___x_1663_ = lean_apply_5(v_h__3_1656_, v_key_1660_, v_entry_x3f_1661_, v_children_1662_, v_x_1652_, v_x_1653_);
return v___x_1663_;
}
default: 
{
lean_object* v_key_1664_; lean_object* v_entry_x3f_1665_; lean_object* v_children_1666_; lean_object* v___x_1667_; 
lean_dec(v_h__3_1656_);
lean_dec(v_h__1_1654_);
v_key_1664_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_key_1664_);
v_entry_x3f_1665_ = lean_ctor_get(v_x_1651_, 1);
lean_inc(v_entry_x3f_1665_);
v_children_1666_ = lean_ctor_get(v_x_1651_, 2);
lean_inc_ref(v_children_1666_);
lean_dec_ref_known(v_x_1651_, 3);
v___x_1667_ = lean_apply_5(v_h__2_1655_, v_key_1664_, v_entry_x3f_1665_, v_children_1666_, v_x_1652_, v_x_1653_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter(lean_object* v_00_u03b1_1668_, lean_object* v_motive_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_x_1672_, lean_object* v_h__1_1673_, lean_object* v_h__2_1674_, lean_object* v_h__3_1675_){
_start:
{
switch(lean_obj_tag(v_x_1670_))
{
case 0:
{
lean_object* v_modIdx_1676_; lean_object* v_tree_1677_; lean_object* v___x_1678_; 
lean_dec(v_h__3_1675_);
lean_dec(v_h__2_1674_);
v_modIdx_1676_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_modIdx_1676_);
v_tree_1677_ = lean_ctor_get(v_x_1670_, 1);
lean_inc_ref(v_tree_1677_);
lean_dec_ref_known(v_x_1670_, 2);
v___x_1678_ = lean_apply_4(v_h__1_1673_, v_modIdx_1676_, v_tree_1677_, v_x_1671_, v_x_1672_);
return v___x_1678_;
}
case 1:
{
lean_object* v_key_1679_; lean_object* v_entry_x3f_1680_; lean_object* v_children_1681_; lean_object* v___x_1682_; 
lean_dec(v_h__2_1674_);
lean_dec(v_h__1_1673_);
v_key_1679_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_key_1679_);
v_entry_x3f_1680_ = lean_ctor_get(v_x_1670_, 1);
lean_inc(v_entry_x3f_1680_);
v_children_1681_ = lean_ctor_get(v_x_1670_, 2);
lean_inc_ref(v_children_1681_);
lean_dec_ref_known(v_x_1670_, 3);
v___x_1682_ = lean_apply_5(v_h__3_1675_, v_key_1679_, v_entry_x3f_1680_, v_children_1681_, v_x_1671_, v_x_1672_);
return v___x_1682_;
}
default: 
{
lean_object* v_key_1683_; lean_object* v_entry_x3f_1684_; lean_object* v_children_1685_; lean_object* v___x_1686_; 
lean_dec(v_h__3_1675_);
lean_dec(v_h__1_1673_);
v_key_1683_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_key_1683_);
v_entry_x3f_1684_ = lean_ctor_get(v_x_1670_, 1);
lean_inc(v_entry_x3f_1684_);
v_children_1685_ = lean_ctor_get(v_x_1670_, 2);
lean_inc_ref(v_children_1685_);
lean_dec_ref_known(v_x_1670_, 3);
v___x_1686_ = lean_apply_5(v_h__2_1674_, v_key_1683_, v_entry_x3f_1684_, v_children_1685_, v_x_1671_, v_x_1672_);
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(lean_object* v_x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_box(0);
v___x_1691_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
switch(lean_obj_tag(v_x_1687_))
{
case 0:
{
lean_object* v_modIdx_1692_; lean_object* v_tree_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1710_; 
v_modIdx_1692_ = lean_ctor_get(v_x_1687_, 0);
v_tree_1693_ = lean_ctor_get(v_x_1687_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1687_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1695_ = v_x_1687_;
v_isShared_1696_ = v_isSharedCheck_1710_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_tree_1693_);
lean_inc(v_modIdx_1692_);
lean_dec(v_x_1687_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1710_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1697_; 
v___x_1697_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_1693_, v_x_1688_, v_x_1689_);
lean_dec_ref(v_tree_1693_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v___x_1698_; 
lean_del_object(v___x_1695_);
lean_dec(v_modIdx_1692_);
v___x_1698_ = lean_box(0);
return v___x_1698_;
}
else
{
lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1709_; 
v_val_1699_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1701_ = v___x_1697_;
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v___x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 1, v_modIdx_1692_);
lean_ctor_set(v___x_1695_, 0, v_val_1699_);
v___x_1704_ = v___x_1695_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_val_1699_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v_modIdx_1692_);
v___x_1704_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1706_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1704_);
v___x_1706_ = v___x_1701_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_1711_; lean_object* v_children_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v_entry_x3f_1711_ = lean_ctor_get(v_x_1687_, 1);
lean_inc(v_entry_x3f_1711_);
v_children_1712_ = lean_ctor_get(v_x_1687_, 2);
lean_inc_ref(v_children_1712_);
lean_dec_ref_known(v_x_1687_, 3);
v___x_1713_ = lean_unsigned_to_nat(0u);
v___x_1714_ = lean_nat_dec_eq(v_x_1689_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_entry_x3f_1711_);
v___x_1715_ = lean_unsigned_to_nat(1u);
v___x_1716_ = lean_nat_sub(v_x_1689_, v___x_1715_);
lean_dec(v_x_1689_);
v___x_1717_ = lean_array_get_borrowed(v___x_1690_, v_x_1688_, v___x_1716_);
v___x_1718_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_children_1712_, v___x_1717_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v___x_1719_; 
lean_dec(v___x_1716_);
lean_dec_ref(v_children_1712_);
v___x_1719_ = lean_box(0);
return v___x_1719_;
}
else
{
lean_object* v_val_1720_; lean_object* v___x_1721_; 
v_val_1720_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_val_1720_);
lean_dec_ref_known(v___x_1718_, 1);
v___x_1721_ = lean_array_get(v___x_1691_, v_children_1712_, v_val_1720_);
lean_dec(v_val_1720_);
lean_dec_ref(v_children_1712_);
v_x_1687_ = v___x_1721_;
v_x_1689_ = v___x_1716_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1712_);
lean_dec(v_x_1689_);
return v_entry_x3f_1711_;
}
}
default: 
{
lean_object* v_entry_x3f_1723_; lean_object* v_children_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; 
v_entry_x3f_1723_ = lean_ctor_get(v_x_1687_, 1);
lean_inc(v_entry_x3f_1723_);
v_children_1724_ = lean_ctor_get(v_x_1687_, 2);
lean_inc_ref(v_children_1724_);
lean_dec_ref_known(v_x_1687_, 3);
v___x_1725_ = lean_unsigned_to_nat(0u);
v___x_1726_ = lean_nat_dec_eq(v_x_1689_, v___x_1725_);
if (v___x_1726_ == 0)
{
lean_object* v_cs_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_dec(v_entry_x3f_1723_);
v_cs_1727_ = lean_thunk_get_own(v_children_1724_);
lean_dec_ref(v_children_1724_);
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = lean_nat_sub(v_x_1689_, v___x_1728_);
lean_dec(v_x_1689_);
v___x_1730_ = lean_array_get_borrowed(v___x_1690_, v_x_1688_, v___x_1729_);
v___x_1731_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1727_, v___x_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v___x_1732_; 
lean_dec(v___x_1729_);
lean_dec(v_cs_1727_);
v___x_1732_ = lean_box(0);
return v___x_1732_;
}
else
{
lean_object* v_val_1733_; lean_object* v___x_1734_; 
v_val_1733_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_val_1733_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1734_ = lean_array_get(v___x_1691_, v_cs_1727_, v_val_1733_);
lean_dec(v_val_1733_);
lean_dec(v_cs_1727_);
v_x_1687_ = v___x_1734_;
v_x_1689_ = v___x_1729_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1724_);
lean_dec(v_x_1689_);
return v_entry_x3f_1723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg___boxed(lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_x_1736_, v_x_1737_, v_x_1738_);
lean_dec_ref(v_x_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(lean_object* v_00_u03b1_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_x_1741_, v_x_1742_, v_x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___boxed(lean_object* v_00_u03b1_1745_, lean_object* v_x_1746_, lean_object* v_x_1747_, lean_object* v_x_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(v_00_u03b1_1745_, v_x_1746_, v_x_1747_, v_x_1748_);
lean_dec_ref(v_x_1747_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg(){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___redArg___closed__1));
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object* v___dummy_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_ImportedConsts_empty___redArg();
return v_res_1753_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_empty___closed__0(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_ImportedConsts_empty___redArg();
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object* v_00_u03b1_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object* v_t_1757_){
_start:
{
lean_object* v___x_1759_; lean_object* v_tree_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1768_; 
v___x_1759_ = lean_imported_consts_cache_new();
v_tree_1760_ = lean_ctor_get(v_t_1757_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_t_1757_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v_t_1757_, 0);
lean_dec(v_unused_1769_);
v___x_1762_ = v_t_1757_;
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_tree_1760_);
lean_dec(v_t_1757_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1759_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1766_ = v___x_1762_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_tree_1760_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object* v_t_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_ImportedConsts_withCache___redArg(v_t_1770_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object* v_00_u03b1_1773_, lean_object* v_t_1774_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lean_ImportedConsts_withCache___redArg(v_t_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object* v_00_u03b1_1777_, lean_object* v_t_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_ImportedConsts_withCache(v_00_u03b1_1777_, v_t_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_1781_, lean_object* v_n_1782_){
_start:
{
lean_object* v_tree_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v_path_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_tree_1783_ = lean_ctor_get(v_t_1781_, 1);
lean_inc_ref(v_tree_1783_);
lean_dec_ref(v_t_1781_);
v___x_1784_ = lean_unsigned_to_nat(8u);
v___x_1785_ = lean_mk_empty_array_with_capacity(v___x_1784_);
v_path_1786_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_1782_, v___x_1785_);
v___x_1787_ = lean_array_get_size(v_path_1786_);
v___x_1788_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_tree_1783_, v_path_1786_, v___x_1787_);
lean_dec_ref(v_path_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_1789_, lean_object* v_t_1790_, lean_object* v_n_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_1790_, v_n_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object* v_t_1793_, lean_object* v_n_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_1793_, v_n_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraEntryCachedImpl___boxed(lean_object* v_cache_x3f_1799_, lean_object* v_t_1800_, lean_object* v_n_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = lean_imported_extra_consts_find_entry_cached(v_cache_x3f_1799_, v_t_1800_, v_n_1801_);
lean_dec(v_n_1801_);
lean_dec_ref(v_t_1800_);
lean_dec(v_cache_x3f_1799_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f(lean_object* v_t_1803_, lean_object* v_n_1804_){
_start:
{
lean_object* v_cache_x3f_1805_; lean_object* v___x_1806_; 
v_cache_x3f_1805_ = lean_ctor_get(v_t_1803_, 0);
v___x_1806_ = lean_imported_extra_consts_find_entry_cached(v_cache_x3f_1805_, v_t_1803_, v_n_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object* v_t_1807_, lean_object* v_n_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_ImportedConsts_findExtraEntryCached_x3f(v_t_1807_, v_n_1808_);
lean_dec(v_n_1808_);
lean_dec_ref(v_t_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraModIdxCachedImpl___boxed(lean_object* v_cache_x3f_1813_, lean_object* v_t_1814_, lean_object* v_n_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = lean_imported_extra_consts_find_mod_idx_cached(v_cache_x3f_1813_, v_t_1814_, v_n_1815_);
lean_dec(v_n_1815_);
lean_dec_ref(v_t_1814_);
lean_dec(v_cache_x3f_1813_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object* v_t_1817_, lean_object* v_n_1818_){
_start:
{
lean_object* v_cache_x3f_1819_; lean_object* v___x_1820_; lean_object* v_zero_1821_; uint8_t v_isZero_1822_; 
v_cache_x3f_1819_ = lean_ctor_get(v_t_1817_, 0);
v___x_1820_ = lean_imported_extra_consts_find_mod_idx_cached(v_cache_x3f_1819_, v_t_1817_, v_n_1818_);
v_zero_1821_ = lean_unsigned_to_nat(0u);
v_isZero_1822_ = lean_nat_dec_eq(v___x_1820_, v_zero_1821_);
if (v_isZero_1822_ == 1)
{
lean_object* v___x_1823_; 
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
return v___x_1823_;
}
else
{
lean_object* v_one_1824_; lean_object* v_n_1825_; lean_object* v___x_1826_; 
v_one_1824_ = lean_unsigned_to_nat(1u);
v_n_1825_ = lean_nat_sub(v___x_1820_, v_one_1824_);
lean_dec(v___x_1820_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_n_1825_);
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object* v_t_1827_, lean_object* v_n_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_ImportedConsts_findExtraModIdxCached_x3f(v_t_1827_, v_n_1828_);
lean_dec(v_n_1828_);
lean_dec_ref(v_t_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_1830_, lean_object* v_n_1831_){
_start:
{
lean_object* v_tree_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v_path_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_tree_1832_ = lean_ctor_get(v_t_1830_, 1);
lean_inc_ref(v_tree_1832_);
lean_dec_ref(v_t_1830_);
v___x_1833_ = lean_unsigned_to_nat(8u);
v___x_1834_ = lean_mk_empty_array_with_capacity(v___x_1833_);
v_path_1835_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_1831_, v___x_1834_);
v___x_1836_ = lean_array_get_size(v_path_1835_);
v___x_1837_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_tree_1832_, v_path_1835_, v___x_1836_);
lean_dec_ref(v_path_1835_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_1838_, lean_object* v_t_1839_, lean_object* v_n_1840_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_1839_, v_n_1840_);
return v___x_1841_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
lean_ctor_set(v___x_1844_, 1, v___x_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(lean_object* v_single_1845_, lean_object* v_multi_1846_, lean_object* v_groups_1847_, lean_object* v_k_1848_, lean_object* v_s_1849_){
_start:
{
lean_object* v___x_1850_; uint8_t v___x_1851_; 
v___x_1850_ = lean_array_get_size(v_groups_1847_);
v___x_1851_ = lean_nat_dec_lt(v_k_1848_, v___x_1850_);
if (v___x_1851_ == 0)
{
lean_dec(v_k_1848_);
lean_dec(v_multi_1846_);
lean_dec(v_single_1845_);
return v_s_1849_;
}
else
{
lean_object* v_g_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v_g_1852_ = lean_array_fget_borrowed(v_groups_1847_, v_k_1848_);
v___x_1853_ = lean_unsigned_to_nat(1u);
v___x_1854_ = lean_nat_add(v_k_1848_, v___x_1853_);
lean_dec(v_k_1848_);
v___x_1855_ = lean_array_get_size(v_g_1852_);
v___x_1856_ = lean_nat_dec_eq(v___x_1855_, v___x_1853_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
lean_inc(v_multi_1846_);
lean_inc(v_g_1852_);
v___x_1857_ = lean_apply_4(v_multi_1846_, v_s_1849_, v_g_1852_, lean_box(0), lean_box(0));
v_k_1848_ = v___x_1854_;
v_s_1849_ = v___x_1857_;
goto _start;
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_fst_1862_; lean_object* v_snd_1863_; lean_object* v___x_1864_; 
v___x_1859_ = lean_unsigned_to_nat(0u);
v___x_1860_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_1861_ = lean_array_get_borrowed(v___x_1860_, v_g_1852_, v___x_1859_);
v_fst_1862_ = lean_ctor_get(v___x_1861_, 0);
v_snd_1863_ = lean_ctor_get(v___x_1861_, 1);
lean_inc(v_single_1845_);
lean_inc(v_snd_1863_);
lean_inc(v_fst_1862_);
v___x_1864_ = lean_apply_3(v_single_1845_, v_s_1849_, v_fst_1862_, v_snd_1863_);
v_k_1848_ = v___x_1854_;
v_s_1849_ = v___x_1864_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___boxed(lean_object* v_single_1866_, lean_object* v_multi_1867_, lean_object* v_groups_1868_, lean_object* v_k_1869_, lean_object* v_s_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_1866_, v_multi_1867_, v_groups_1868_, v_k_1869_, v_s_1870_);
lean_dec_ref(v_groups_1868_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(lean_object* v_00_u03b1_1872_, lean_object* v_00_u03c3_1873_, lean_object* v_cands_1874_, lean_object* v_single_1875_, lean_object* v_multi_1876_, lean_object* v_groups_1877_, lean_object* v_hgroups_1878_, lean_object* v_k_1879_, lean_object* v_s_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_1875_, v_multi_1876_, v_groups_1877_, v_k_1879_, v_s_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___boxed(lean_object* v_00_u03b1_1882_, lean_object* v_00_u03c3_1883_, lean_object* v_cands_1884_, lean_object* v_single_1885_, lean_object* v_multi_1886_, lean_object* v_groups_1887_, lean_object* v_hgroups_1888_, lean_object* v_k_1889_, lean_object* v_s_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(v_00_u03b1_1882_, v_00_u03c3_1883_, v_cands_1884_, v_single_1885_, v_multi_1886_, v_groups_1887_, v_hgroups_1888_, v_k_1889_, v_s_1890_);
lean_dec_ref(v_groups_1887_);
lean_dec_ref(v_cands_1884_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(uint8_t v___x_1892_, lean_object* v_snd_1893_, lean_object* v_as_1894_, lean_object* v_j_1895_){
_start:
{
uint8_t v___y_1901_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1913_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = lean_array_get_size(v_as_1894_);
v___x_1916_ = lean_nat_dec_lt(v_j_1895_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1917_; 
lean_dec(v_j_1895_);
v___x_1917_ = lean_box(0);
return v___x_1917_;
}
else
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_snd_1922_; lean_object* v_key_1923_; 
v___x_1918_ = lean_unsigned_to_nat(0u);
v___x_1919_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_1920_ = lean_array_fget_borrowed(v_as_1894_, v_j_1895_);
v___x_1921_ = lean_array_get_borrowed(v___x_1919_, v___x_1920_, v___x_1918_);
v_snd_1922_ = lean_ctor_get(v___x_1921_, 1);
v_key_1923_ = lean_ctor_get(v_snd_1922_, 0);
v___y_1913_ = v_key_1923_;
goto v___jp_1912_;
}
v___jp_1896_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_unsigned_to_nat(1u);
v___x_1898_ = lean_nat_add(v_j_1895_, v___x_1897_);
lean_dec(v_j_1895_);
v_j_1895_ = v___x_1898_;
goto _start;
}
v___jp_1900_:
{
if (v___y_1901_ == 0)
{
goto v___jp_1896_;
}
else
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_j_1895_);
return v___x_1902_;
}
}
v___jp_1903_:
{
switch(lean_obj_tag(v___y_1904_))
{
case 0:
{
if (lean_obj_tag(v___y_1905_) == 0)
{
v___y_1901_ = v___x_1892_;
goto v___jp_1900_;
}
else
{
goto v___jp_1896_;
}
}
case 1:
{
if (lean_obj_tag(v___y_1905_) == 1)
{
lean_object* v_str_1906_; lean_object* v_str_1907_; uint8_t v___x_1908_; 
v_str_1906_ = lean_ctor_get(v___y_1904_, 1);
v_str_1907_ = lean_ctor_get(v___y_1905_, 1);
v___x_1908_ = lean_string_dec_eq(v_str_1906_, v_str_1907_);
v___y_1901_ = v___x_1908_;
goto v___jp_1900_;
}
else
{
goto v___jp_1896_;
}
}
default: 
{
if (lean_obj_tag(v___y_1905_) == 2)
{
lean_object* v_i_1909_; lean_object* v_i_1910_; uint8_t v___x_1911_; 
v_i_1909_ = lean_ctor_get(v___y_1904_, 1);
v_i_1910_ = lean_ctor_get(v___y_1905_, 1);
v___x_1911_ = lean_nat_dec_eq(v_i_1909_, v_i_1910_);
v___y_1901_ = v___x_1911_;
goto v___jp_1900_;
}
else
{
goto v___jp_1896_;
}
}
}
}
v___jp_1912_:
{
lean_object* v_key_1914_; 
v_key_1914_ = lean_ctor_get(v_snd_1893_, 0);
v___y_1904_ = v___y_1913_;
v___y_1905_ = v_key_1914_;
goto v___jp_1903_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg___boxed(lean_object* v___x_1924_, lean_object* v_snd_1925_, lean_object* v_as_1926_, lean_object* v_j_1927_){
_start:
{
uint8_t v___x_463__boxed_1928_; lean_object* v_res_1929_; 
v___x_463__boxed_1928_ = lean_unbox(v___x_1924_);
v_res_1929_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v___x_463__boxed_1928_, v_snd_1925_, v_as_1926_, v_j_1927_);
lean_dec_ref(v_as_1926_);
lean_dec_ref(v_snd_1925_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(lean_object* v_sorted_1930_, uint64_t v_hash_u2080_1931_, lean_object* v_idx_1932_, lean_object* v_groups_1933_){
_start:
{
lean_object* v_val_1935_; lean_object* v___x_1939_; uint8_t v___x_1940_; 
v___x_1939_ = lean_array_get_size(v_sorted_1930_);
v___x_1940_ = lean_nat_dec_lt(v_idx_1932_, v___x_1939_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; 
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v_groups_1933_);
lean_ctor_set(v___x_1941_, 1, v_idx_1932_);
return v___x_1941_;
}
else
{
lean_object* v___x_1942_; lean_object* v_fst_1943_; lean_object* v_snd_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1979_; 
v___x_1942_ = lean_array_fget(v_sorted_1930_, v_idx_1932_);
v_fst_1943_ = lean_ctor_get(v___x_1942_, 0);
v_snd_1944_ = lean_ctor_get(v___x_1942_, 1);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1946_ = v___x_1942_;
v_isShared_1947_ = v_isSharedCheck_1979_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_snd_1944_);
lean_inc(v_fst_1943_);
lean_dec(v___x_1942_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1979_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
uint64_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1948_ = lean_unbox_uint64(v_fst_1943_);
lean_dec(v_fst_1943_);
v___x_1949_ = lean_uint64_dec_eq(v___x_1948_, v_hash_u2080_1931_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1951_; 
lean_dec(v_snd_1944_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 1, v_idx_1932_);
lean_ctor_set(v___x_1946_, 0, v_groups_1933_);
v___x_1951_ = v___x_1946_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_groups_1933_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v_idx_1932_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
else
{
lean_object* v_fst_1953_; lean_object* v_snd_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1978_; 
lean_del_object(v___x_1946_);
v_fst_1953_ = lean_ctor_get(v_snd_1944_, 0);
v_snd_1954_ = lean_ctor_get(v_snd_1944_, 1);
v_isSharedCheck_1978_ = !lean_is_exclusive(v_snd_1944_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1956_ = v_snd_1944_;
v_isShared_1957_ = v_isSharedCheck_1978_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_snd_1954_);
lean_inc(v_fst_1953_);
lean_dec(v_snd_1944_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1978_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v___x_1949_, v_snd_1954_, v_groups_1933_, v___x_1958_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v___x_1961_; 
if (v_isShared_1957_ == 0)
{
v___x_1961_ = v___x_1956_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_fst_1953_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_snd_1954_);
v___x_1961_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1962_ = lean_unsigned_to_nat(1u);
v___x_1963_ = lean_mk_empty_array_with_capacity(v___x_1962_);
v___x_1964_ = lean_array_push(v___x_1963_, v___x_1961_);
v___x_1965_ = lean_array_push(v_groups_1933_, v___x_1964_);
v_val_1935_ = v___x_1965_;
goto v___jp_1934_;
}
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; 
v_val_1967_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1968_ = lean_array_get_size(v_groups_1933_);
v___x_1969_ = lean_nat_dec_lt(v_val_1967_, v___x_1968_);
if (v___x_1969_ == 0)
{
lean_dec(v_val_1967_);
lean_del_object(v___x_1956_);
lean_dec(v_snd_1954_);
lean_dec(v_fst_1953_);
v_val_1935_ = v_groups_1933_;
goto v___jp_1934_;
}
else
{
lean_object* v_v_1970_; lean_object* v___x_1971_; lean_object* v_xs_x27_1972_; lean_object* v___x_1974_; 
v_v_1970_ = lean_array_fget(v_groups_1933_, v_val_1967_);
v___x_1971_ = lean_box(0);
v_xs_x27_1972_ = lean_array_fset(v_groups_1933_, v_val_1967_, v___x_1971_);
if (v_isShared_1957_ == 0)
{
v___x_1974_ = v___x_1956_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_fst_1953_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_snd_1954_);
v___x_1974_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_array_push(v_v_1970_, v___x_1974_);
v___x_1976_ = lean_array_fset(v_xs_x27_1972_, v_val_1967_, v___x_1975_);
lean_dec(v_val_1967_);
v_val_1935_ = v___x_1976_;
goto v___jp_1934_;
}
}
}
}
}
}
}
v___jp_1934_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_unsigned_to_nat(1u);
v___x_1937_ = lean_nat_add(v_idx_1932_, v___x_1936_);
lean_dec(v_idx_1932_);
v_idx_1932_ = v___x_1937_;
v_groups_1933_ = v_val_1935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg___boxed(lean_object* v_sorted_1980_, lean_object* v_hash_u2080_1981_, lean_object* v_idx_1982_, lean_object* v_groups_1983_){
_start:
{
uint64_t v_hash_u2080_boxed_1984_; lean_object* v_res_1985_; 
v_hash_u2080_boxed_1984_ = lean_unbox_uint64(v_hash_u2080_1981_);
lean_dec_ref(v_hash_u2080_1981_);
v_res_1985_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_1980_, v_hash_u2080_boxed_1984_, v_idx_1982_, v_groups_1983_);
lean_dec_ref(v_sorted_1980_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(lean_object* v_00_u03b1_1986_, lean_object* v_cands_1987_, lean_object* v_sorted_1988_, uint64_t v_hash_u2080_1989_, lean_object* v_idx_1990_, lean_object* v_groups_1991_, lean_object* v_hgroups_1992_){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_1988_, v_hash_u2080_1989_, v_idx_1990_, v_groups_1991_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___boxed(lean_object* v_00_u03b1_1994_, lean_object* v_cands_1995_, lean_object* v_sorted_1996_, lean_object* v_hash_u2080_1997_, lean_object* v_idx_1998_, lean_object* v_groups_1999_, lean_object* v_hgroups_2000_){
_start:
{
uint64_t v_hash_u2080_boxed_2001_; lean_object* v_res_2002_; 
v_hash_u2080_boxed_2001_ = lean_unbox_uint64(v_hash_u2080_1997_);
lean_dec_ref(v_hash_u2080_1997_);
v_res_2002_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(v_00_u03b1_1994_, v_cands_1995_, v_sorted_1996_, v_hash_u2080_boxed_2001_, v_idx_1998_, v_groups_1999_, v_hgroups_2000_);
lean_dec_ref(v_sorted_1996_);
lean_dec_ref(v_cands_1995_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(lean_object* v_00_u03b1_2003_, uint8_t v___x_2004_, lean_object* v_snd_2005_, lean_object* v_as_2006_, lean_object* v_j_2007_){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v___x_2004_, v_snd_2005_, v_as_2006_, v_j_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___boxed(lean_object* v_00_u03b1_2009_, lean_object* v___x_2010_, lean_object* v_snd_2011_, lean_object* v_as_2012_, lean_object* v_j_2013_){
_start:
{
uint8_t v___x_624__boxed_2014_; lean_object* v_res_2015_; 
v___x_624__boxed_2014_ = lean_unbox(v___x_2010_);
v_res_2015_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(v_00_u03b1_2009_, v___x_624__boxed_2014_, v_snd_2011_, v_as_2012_, v_j_2013_);
lean_dec_ref(v_as_2012_);
lean_dec_ref(v_snd_2011_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___redArg(lean_object* v_x_2016_, lean_object* v_h__1_2017_){
_start:
{
lean_object* v_snd_2018_; lean_object* v_fst_2019_; lean_object* v_fst_2020_; lean_object* v_snd_2021_; lean_object* v___x_2022_; 
v_snd_2018_ = lean_ctor_get(v_x_2016_, 1);
lean_inc(v_snd_2018_);
v_fst_2019_ = lean_ctor_get(v_x_2016_, 0);
lean_inc(v_fst_2019_);
lean_dec_ref(v_x_2016_);
v_fst_2020_ = lean_ctor_get(v_snd_2018_, 0);
lean_inc(v_fst_2020_);
v_snd_2021_ = lean_ctor_get(v_snd_2018_, 1);
lean_inc(v_snd_2021_);
lean_dec(v_snd_2018_);
v___x_2022_ = lean_apply_3(v_h__1_2017_, v_fst_2019_, v_fst_2020_, v_snd_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(lean_object* v_00_u03b1_2023_, lean_object* v_cands_2024_, lean_object* v_motive_2025_, lean_object* v_x_2026_, lean_object* v_h__1_2027_){
_start:
{
lean_object* v_snd_2028_; lean_object* v_fst_2029_; lean_object* v_fst_2030_; lean_object* v_snd_2031_; lean_object* v___x_2032_; 
v_snd_2028_ = lean_ctor_get(v_x_2026_, 1);
lean_inc(v_snd_2028_);
v_fst_2029_ = lean_ctor_get(v_x_2026_, 0);
lean_inc(v_fst_2029_);
lean_dec_ref(v_x_2026_);
v_fst_2030_ = lean_ctor_get(v_snd_2028_, 0);
lean_inc(v_fst_2030_);
v_snd_2031_ = lean_ctor_get(v_snd_2028_, 1);
lean_inc(v_snd_2031_);
lean_dec(v_snd_2028_);
v___x_2032_ = lean_apply_3(v_h__1_2027_, v_fst_2029_, v_fst_2030_, v_snd_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___boxed(lean_object* v_00_u03b1_2033_, lean_object* v_cands_2034_, lean_object* v_motive_2035_, lean_object* v_x_2036_, lean_object* v_h__1_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(v_00_u03b1_2033_, v_cands_2034_, v_motive_2035_, v_x_2036_, v_h__1_2037_);
lean_dec_ref(v_cands_2034_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___redArg(lean_object* v_x_2039_, lean_object* v_h__1_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_apply_2(v_h__1_2040_, v_x_2039_, lean_box(0));
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(lean_object* v_00_u03b1_2042_, lean_object* v_cands_2043_, lean_object* v_motive_2044_, lean_object* v_x_2045_, lean_object* v_h__1_2046_){
_start:
{
lean_object* v___x_2047_; 
v___x_2047_ = lean_apply_2(v_h__1_2046_, v_x_2045_, lean_box(0));
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___boxed(lean_object* v_00_u03b1_2048_, lean_object* v_cands_2049_, lean_object* v_motive_2050_, lean_object* v_x_2051_, lean_object* v_h__1_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(v_00_u03b1_2048_, v_cands_2049_, v_motive_2050_, v_x_2051_, v_h__1_2052_);
lean_dec_ref(v_cands_2049_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___redArg(lean_object* v_x_2054_, lean_object* v_h__1_2055_){
_start:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_apply_3(v_h__1_2055_, v_x_2054_, lean_box(0), lean_box(0));
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(lean_object* v_00_u03b1_2057_, lean_object* v_cands_2058_, lean_object* v_idx_2059_, lean_object* v_motive_2060_, lean_object* v_x_2061_, lean_object* v_h__1_2062_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_apply_3(v_h__1_2062_, v_x_2061_, lean_box(0), lean_box(0));
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___boxed(lean_object* v_00_u03b1_2064_, lean_object* v_cands_2065_, lean_object* v_idx_2066_, lean_object* v_motive_2067_, lean_object* v_x_2068_, lean_object* v_h__1_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(v_00_u03b1_2064_, v_cands_2065_, v_idx_2066_, v_motive_2067_, v_x_2068_, v_h__1_2069_);
lean_dec(v_idx_2066_);
lean_dec_ref(v_cands_2065_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(lean_object* v_single_2071_, lean_object* v_multi_2072_, lean_object* v_sorted_2073_, lean_object* v_idx_2074_, lean_object* v_s_2075_){
_start:
{
lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2076_ = lean_array_get_size(v_sorted_2073_);
v___x_2077_ = lean_nat_dec_lt(v_idx_2074_, v___x_2076_);
if (v___x_2077_ == 0)
{
lean_dec(v_idx_2074_);
lean_dec(v_multi_2072_);
lean_dec(v_single_2071_);
return v_s_2075_;
}
else
{
lean_object* v___x_2078_; lean_object* v_snd_2079_; lean_object* v_fst_2080_; lean_object* v_fst_2081_; lean_object* v_snd_2082_; lean_object* v___x_2083_; lean_object* v_idx_2084_; uint8_t v___x_2085_; 
v___x_2078_ = lean_array_fget_borrowed(v_sorted_2073_, v_idx_2074_);
v_snd_2079_ = lean_ctor_get(v___x_2078_, 1);
v_fst_2080_ = lean_ctor_get(v___x_2078_, 0);
v_fst_2081_ = lean_ctor_get(v_snd_2079_, 0);
v_snd_2082_ = lean_ctor_get(v_snd_2079_, 1);
v___x_2083_ = lean_unsigned_to_nat(1u);
v_idx_2084_ = lean_nat_add(v_idx_2074_, v___x_2083_);
lean_dec(v_idx_2074_);
v___x_2085_ = lean_nat_dec_lt(v_idx_2084_, v___x_2076_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; 
lean_inc(v_single_2071_);
lean_inc(v_snd_2082_);
lean_inc(v_fst_2081_);
v___x_2086_ = lean_apply_3(v_single_2071_, v_s_2075_, v_fst_2081_, v_snd_2082_);
v_idx_2074_ = v_idx_2084_;
v_s_2075_ = v___x_2086_;
goto _start;
}
else
{
lean_object* v___x_2088_; lean_object* v_fst_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2111_; 
v___x_2088_ = lean_array_fget(v_sorted_2073_, v_idx_2084_);
v_fst_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2111_ == 0)
{
lean_object* v_unused_2112_; 
v_unused_2112_ = lean_ctor_get(v___x_2088_, 1);
lean_dec(v_unused_2112_);
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2111_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_fst_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2111_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
uint64_t v___x_2093_; uint64_t v___x_2094_; uint8_t v___x_2095_; 
v___x_2093_ = lean_unbox_uint64(v_fst_2089_);
lean_dec(v_fst_2089_);
v___x_2094_ = lean_unbox_uint64(v_fst_2080_);
v___x_2095_ = lean_uint64_dec_eq(v___x_2093_, v___x_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; 
lean_del_object(v___x_2091_);
lean_inc(v_single_2071_);
lean_inc(v_snd_2082_);
lean_inc(v_fst_2081_);
v___x_2096_ = lean_apply_3(v_single_2071_, v_s_2075_, v_fst_2081_, v_snd_2082_);
v_idx_2074_ = v_idx_2084_;
v_s_2075_ = v___x_2096_;
goto _start;
}
else
{
lean_object* v___x_2099_; 
lean_inc(v_snd_2082_);
lean_inc(v_fst_2081_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 1, v_snd_2082_);
lean_ctor_set(v___x_2091_, 0, v_fst_2081_);
v___x_2099_ = v___x_2091_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_fst_2081_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_snd_2082_);
v___x_2099_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; uint64_t v___x_2103_; lean_object* v_val_2104_; lean_object* v_fst_2105_; lean_object* v_snd_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2100_ = lean_mk_empty_array_with_capacity(v___x_2083_);
lean_inc_ref(v___x_2100_);
v___x_2101_ = lean_array_push(v___x_2100_, v___x_2099_);
v___x_2102_ = lean_array_push(v___x_2100_, v___x_2101_);
v___x_2103_ = lean_unbox_uint64(v_fst_2080_);
v_val_2104_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2073_, v___x_2103_, v_idx_2084_, v___x_2102_);
v_fst_2105_ = lean_ctor_get(v_val_2104_, 0);
lean_inc(v_fst_2105_);
v_snd_2106_ = lean_ctor_get(v_val_2104_, 1);
lean_inc(v_snd_2106_);
lean_dec_ref(v_val_2104_);
v___x_2107_ = lean_unsigned_to_nat(0u);
lean_inc(v_multi_2072_);
lean_inc(v_single_2071_);
v___x_2108_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_2071_, v_multi_2072_, v_fst_2105_, v___x_2107_, v_s_2075_);
lean_dec(v_fst_2105_);
v_idx_2074_ = v_snd_2106_;
v_s_2075_ = v___x_2108_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg___boxed(lean_object* v_single_2113_, lean_object* v_multi_2114_, lean_object* v_sorted_2115_, lean_object* v_idx_2116_, lean_object* v_s_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2113_, v_multi_2114_, v_sorted_2115_, v_idx_2116_, v_s_2117_);
lean_dec_ref(v_sorted_2115_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(lean_object* v_00_u03b1_2119_, lean_object* v_00_u03c3_2120_, lean_object* v_cands_2121_, lean_object* v_single_2122_, lean_object* v_multi_2123_, lean_object* v_sorted_2124_, lean_object* v_idx_2125_, lean_object* v_s_2126_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2122_, v_multi_2123_, v_sorted_2124_, v_idx_2125_, v_s_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___boxed(lean_object* v_00_u03b1_2128_, lean_object* v_00_u03c3_2129_, lean_object* v_cands_2130_, lean_object* v_single_2131_, lean_object* v_multi_2132_, lean_object* v_sorted_2133_, lean_object* v_idx_2134_, lean_object* v_s_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(v_00_u03b1_2128_, v_00_u03c3_2129_, v_cands_2130_, v_single_2131_, v_multi_2132_, v_sorted_2133_, v_idx_2134_, v_s_2135_);
lean_dec_ref(v_sorted_2133_);
lean_dec_ref(v_cands_2130_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___redArg(lean_object* v_x_2137_, lean_object* v_h__1_2138_){
_start:
{
lean_object* v_fst_2139_; lean_object* v_snd_2140_; lean_object* v___x_2141_; 
v_fst_2139_ = lean_ctor_get(v_x_2137_, 0);
lean_inc(v_fst_2139_);
v_snd_2140_ = lean_ctor_get(v_x_2137_, 1);
lean_inc(v_snd_2140_);
lean_dec_ref(v_x_2137_);
v___x_2141_ = lean_apply_4(v_h__1_2138_, v_fst_2139_, v_snd_2140_, lean_box(0), lean_box(0));
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(lean_object* v_00_u03b1_2142_, lean_object* v_cands_2143_, lean_object* v_idx_2144_, lean_object* v_motive_2145_, lean_object* v_x_2146_, lean_object* v_h__1_2147_){
_start:
{
lean_object* v_fst_2148_; lean_object* v_snd_2149_; lean_object* v___x_2150_; 
v_fst_2148_ = lean_ctor_get(v_x_2146_, 0);
lean_inc(v_fst_2148_);
v_snd_2149_ = lean_ctor_get(v_x_2146_, 1);
lean_inc(v_snd_2149_);
lean_dec_ref(v_x_2146_);
v___x_2150_ = lean_apply_4(v_h__1_2147_, v_fst_2148_, v_snd_2149_, lean_box(0), lean_box(0));
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___boxed(lean_object* v_00_u03b1_2151_, lean_object* v_cands_2152_, lean_object* v_idx_2153_, lean_object* v_motive_2154_, lean_object* v_x_2155_, lean_object* v_h__1_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(v_00_u03b1_2151_, v_cands_2152_, v_idx_2153_, v_motive_2154_, v_x_2155_, v_h__1_2156_);
lean_dec(v_idx_2153_);
lean_dec_ref(v_cands_2152_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2158_, lean_object* v_x_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___y_2162_; lean_object* v_snd_2166_; 
v_snd_2166_ = lean_ctor_get(v_a_2158_, 1);
switch(lean_obj_tag(v_snd_2166_))
{
case 0:
{
lean_object* v___x_2167_; 
v___x_2167_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2162_ = v___x_2167_;
goto v___jp_2161_;
}
case 1:
{
lean_object* v_children_2168_; 
v_children_2168_ = lean_ctor_get(v_snd_2166_, 1);
v___y_2162_ = v_children_2168_;
goto v___jp_2161_;
}
default: 
{
lean_object* v_children_2169_; 
v_children_2169_ = lean_ctor_get(v_snd_2166_, 2);
v___y_2162_ = v_children_2169_;
goto v___jp_2161_;
}
}
v___jp_2161_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = lean_array_get_size(v___y_2162_);
v___x_2164_ = lean_nat_add(v___y_2160_, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
return v___x_2165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2170_, lean_object* v_x_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2170_, v_x_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v_a_2170_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2174_, lean_object* v_c_2175_, lean_object* v_h_x27_2176_, lean_object* v_____s_2177_){
_start:
{
uint64_t v___y_2179_; lean_object* v___y_2186_; lean_object* v_key_2189_; 
v_key_2189_ = lean_ctor_get(v_c_2175_, 0);
lean_inc(v_key_2189_);
v___y_2186_ = v_key_2189_;
goto v___jp_2185_;
v___jp_2178_:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2180_, 0, v_fst_2174_);
lean_ctor_set(v___x_2180_, 1, v_c_2175_);
v___x_2181_ = lean_box_uint64(v___y_2179_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___x_2180_);
v___x_2183_ = lean_array_push(v_____s_2177_, v___x_2182_);
v___x_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
return v___x_2184_;
}
v___jp_2185_:
{
if (lean_obj_tag(v___y_2186_) == 0)
{
uint64_t v___x_2187_; 
v___x_2187_ = 1723ULL;
v___y_2179_ = v___x_2187_;
goto v___jp_2178_;
}
else
{
uint64_t v_hash_2188_; 
v_hash_2188_ = lean_ctor_get_uint64(v___y_2186_, sizeof(void*)*2);
lean_dec(v___y_2186_);
v___y_2179_ = v_hash_2188_;
goto v___jp_2178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2190_, lean_object* v_p_2191_, lean_object* v_h_2192_, lean_object* v_____s_2193_){
_start:
{
lean_object* v_fst_2194_; lean_object* v_snd_2195_; lean_object* v___f_2196_; lean_object* v___y_2198_; 
v_fst_2194_ = lean_ctor_get(v_p_2191_, 0);
lean_inc(v_fst_2194_);
v_snd_2195_ = lean_ctor_get(v_p_2191_, 1);
lean_inc(v_snd_2195_);
lean_dec_ref(v_p_2191_);
v___f_2196_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2196_, 0, v_fst_2194_);
switch(lean_obj_tag(v_snd_2195_))
{
case 0:
{
lean_object* v___x_2203_; 
lean_dec_ref_known(v_snd_2195_, 2);
v___x_2203_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2198_ = v___x_2203_;
goto v___jp_2197_;
}
case 1:
{
lean_object* v_children_2204_; 
v_children_2204_ = lean_ctor_get(v_snd_2195_, 1);
lean_inc_ref(v_children_2204_);
lean_dec_ref_known(v_snd_2195_, 2);
v___y_2198_ = v_children_2204_;
goto v___jp_2197_;
}
default: 
{
lean_object* v_children_2205_; 
v_children_2205_ = lean_ctor_get(v_snd_2195_, 2);
lean_inc_ref(v_children_2205_);
lean_dec_ref_known(v_snd_2195_, 3);
v___y_2198_ = v_children_2205_;
goto v___jp_2197_;
}
}
v___jp_2197_:
{
size_t v_sz_2199_; size_t v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_sz_2199_ = lean_array_size(v___y_2198_);
v___x_2200_ = ((size_t)0ULL);
v___x_2201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2190_, v___y_2198_, v___f_2196_, v_sz_2199_, v___x_2200_, v_____s_2193_);
v___x_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v_x_2206_, lean_object* v_x_2207_){
_start:
{
lean_object* v_snd_2208_; lean_object* v_snd_2209_; lean_object* v_fst_2210_; lean_object* v_fst_2211_; lean_object* v_fst_2212_; lean_object* v_fst_2213_; uint64_t v___x_2214_; uint64_t v___x_2215_; uint8_t v___x_2216_; 
v_snd_2208_ = lean_ctor_get(v_x_2206_, 1);
v_snd_2209_ = lean_ctor_get(v_x_2207_, 1);
v_fst_2210_ = lean_ctor_get(v_x_2206_, 0);
v_fst_2211_ = lean_ctor_get(v_snd_2208_, 0);
v_fst_2212_ = lean_ctor_get(v_x_2207_, 0);
v_fst_2213_ = lean_ctor_get(v_snd_2209_, 0);
v___x_2214_ = lean_unbox_uint64(v_fst_2210_);
v___x_2215_ = lean_unbox_uint64(v_fst_2212_);
v___x_2216_ = lean_uint64_dec_lt(v___x_2214_, v___x_2215_);
if (v___x_2216_ == 0)
{
uint64_t v___x_2217_; uint64_t v___x_2218_; uint8_t v___x_2219_; 
v___x_2217_ = lean_unbox_uint64(v_fst_2210_);
v___x_2218_ = lean_unbox_uint64(v_fst_2212_);
v___x_2219_ = lean_uint64_dec_eq(v___x_2217_, v___x_2218_);
if (v___x_2219_ == 0)
{
return v___x_2219_;
}
else
{
uint8_t v___x_2220_; 
v___x_2220_ = lean_nat_dec_lt(v_fst_2211_, v_fst_2213_);
return v___x_2220_;
}
}
else
{
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v_x_2221_, lean_object* v_x_2222_){
_start:
{
uint8_t v_res_2223_; lean_object* v_r_2224_; 
v_res_2223_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v_x_2221_, v_x_2222_);
lean_dec_ref(v_x_2222_);
lean_dec_ref(v_x_2221_);
v_r_2224_ = lean_box(v_res_2223_);
return v_r_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_2248_, lean_object* v_init_2249_, lean_object* v_single_2250_, lean_object* v_multi_2251_){
_start:
{
lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___f_2254_; lean_object* v_total_2255_; size_t v_sz_2256_; size_t v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___f_2252_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_2253_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10));
v___f_2254_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11));
v_total_2255_ = lean_unsigned_to_nat(0u);
v_sz_2256_ = lean_array_size(v_cands_2248_);
v___x_2257_ = ((size_t)0ULL);
lean_inc_ref(v_cands_2248_);
v___x_2258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2253_, v_cands_2248_, v___f_2252_, v_sz_2256_, v___x_2257_, v_total_2255_);
v___x_2259_ = lean_mk_empty_array_with_capacity(v___x_2258_);
lean_dec(v___x_2258_);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2253_, v_cands_2248_, v___f_2254_, v_sz_2256_, v___x_2257_, v___x_2259_);
v___x_2261_ = lean_array_get_size(v___x_2260_);
v___x_2262_ = lean_nat_dec_eq(v___x_2261_, v_total_2255_);
if (v___x_2262_ == 0)
{
lean_object* v___f_2263_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___y_2272_; uint8_t v___x_2274_; 
v___f_2263_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12));
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_nat_sub(v___x_2261_, v___x_2269_);
v___x_2274_ = lean_nat_dec_le(v_total_2255_, v___x_2270_);
if (v___x_2274_ == 0)
{
lean_inc(v___x_2270_);
v___y_2272_ = v___x_2270_;
goto v___jp_2271_;
}
else
{
v___y_2272_ = v_total_2255_;
goto v___jp_2271_;
}
v___jp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2263_, v___x_2261_, v___x_2260_, v___y_2265_, v___y_2266_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2266_);
v___x_2268_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2250_, v_multi_2251_, v___x_2267_, v_total_2255_, v_init_2249_);
lean_dec_ref(v___x_2267_);
return v___x_2268_;
}
v___jp_2271_:
{
uint8_t v___x_2273_; 
v___x_2273_ = lean_nat_dec_le(v___y_2272_, v___x_2270_);
if (v___x_2273_ == 0)
{
lean_dec(v___x_2270_);
lean_inc(v___y_2272_);
v___y_2265_ = v___y_2272_;
v___y_2266_ = v___y_2272_;
goto v___jp_2264_;
}
else
{
v___y_2265_ = v___y_2272_;
v___y_2266_ = v___x_2270_;
goto v___jp_2264_;
}
}
}
else
{
lean_object* v___x_2275_; 
v___x_2275_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2250_, v_multi_2251_, v___x_2260_, v_total_2255_, v_init_2249_);
lean_dec(v___x_2260_);
return v___x_2275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_2276_, lean_object* v_00_u03c3_2277_, lean_object* v_cands_2278_, lean_object* v_init_2279_, lean_object* v_single_2280_, lean_object* v_multi_2281_){
_start:
{
lean_object* v___f_2282_; lean_object* v___x_2283_; lean_object* v___f_2284_; lean_object* v_total_2285_; size_t v_sz_2286_; size_t v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___f_2282_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_2283_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10));
v___f_2284_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11));
v_total_2285_ = lean_unsigned_to_nat(0u);
v_sz_2286_ = lean_array_size(v_cands_2278_);
v___x_2287_ = ((size_t)0ULL);
lean_inc_ref(v_cands_2278_);
v___x_2288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2283_, v_cands_2278_, v___f_2282_, v_sz_2286_, v___x_2287_, v_total_2285_);
v___x_2289_ = lean_mk_empty_array_with_capacity(v___x_2288_);
lean_dec(v___x_2288_);
v___x_2290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2283_, v_cands_2278_, v___f_2284_, v_sz_2286_, v___x_2287_, v___x_2289_);
v___x_2291_ = lean_array_get_size(v___x_2290_);
v___x_2292_ = lean_nat_dec_eq(v___x_2291_, v_total_2285_);
if (v___x_2292_ == 0)
{
lean_object* v___f_2293_; lean_object* v___y_2295_; lean_object* v___y_2296_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___y_2302_; uint8_t v___x_2304_; 
v___f_2293_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12));
v___x_2299_ = lean_unsigned_to_nat(1u);
v___x_2300_ = lean_nat_sub(v___x_2291_, v___x_2299_);
v___x_2304_ = lean_nat_dec_le(v_total_2285_, v___x_2300_);
if (v___x_2304_ == 0)
{
lean_inc(v___x_2300_);
v___y_2302_ = v___x_2300_;
goto v___jp_2301_;
}
else
{
v___y_2302_ = v_total_2285_;
goto v___jp_2301_;
}
v___jp_2294_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2297_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2293_, v___x_2291_, v___x_2290_, v___y_2295_, v___y_2296_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2296_);
v___x_2298_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2280_, v_multi_2281_, v___x_2297_, v_total_2285_, v_init_2279_);
lean_dec_ref(v___x_2297_);
return v___x_2298_;
}
v___jp_2301_:
{
uint8_t v___x_2303_; 
v___x_2303_ = lean_nat_dec_le(v___y_2302_, v___x_2300_);
if (v___x_2303_ == 0)
{
lean_dec(v___x_2300_);
lean_inc(v___y_2302_);
v___y_2295_ = v___y_2302_;
v___y_2296_ = v___y_2302_;
goto v___jp_2294_;
}
else
{
v___y_2295_ = v___y_2302_;
v___y_2296_ = v___x_2300_;
goto v___jp_2294_;
}
}
}
else
{
lean_object* v___x_2305_; 
v___x_2305_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2280_, v_multi_2281_, v___x_2290_, v_total_2285_, v_init_2279_);
lean_dec(v___x_2290_);
return v___x_2305_;
}
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v_covered_2308_, lean_object* v_as_2309_, size_t v_sz_2310_, size_t v_i_2311_, uint64_t v_b_2312_){
_start:
{
uint8_t v___x_2313_; 
v___x_2313_ = lean_usize_dec_lt(v_i_2311_, v_sz_2310_);
if (v___x_2313_ == 0)
{
return v_b_2312_;
}
else
{
lean_object* v_a_2314_; lean_object* v_fst_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; uint64_t v___x_2318_; uint64_t v___x_2319_; size_t v___x_2320_; size_t v___x_2321_; 
v_a_2314_ = lean_array_uget_borrowed(v_as_2309_, v_i_2311_);
v_fst_2315_ = lean_ctor_get(v_a_2314_, 0);
v___x_2316_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1));
v___x_2317_ = lean_array_get_borrowed(v___x_2316_, v_covered_2308_, v_fst_2315_);
v___x_2318_ = lean_unbox_uint64(v___x_2317_);
v___x_2319_ = lean_uint64_land(v_b_2312_, v___x_2318_);
v___x_2320_ = ((size_t)1ULL);
v___x_2321_ = lean_usize_add(v_i_2311_, v___x_2320_);
v_i_2311_ = v___x_2321_;
v_b_2312_ = v___x_2319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v_covered_2323_, lean_object* v_as_2324_, lean_object* v_sz_2325_, lean_object* v_i_2326_, lean_object* v_b_2327_){
_start:
{
size_t v_sz_boxed_2328_; size_t v_i_boxed_2329_; uint64_t v_b_boxed_2330_; uint64_t v_res_2331_; lean_object* v_r_2332_; 
v_sz_boxed_2328_ = lean_unbox_usize(v_sz_2325_);
lean_dec(v_sz_2325_);
v_i_boxed_2329_ = lean_unbox_usize(v_i_2326_);
lean_dec(v_i_2326_);
v_b_boxed_2330_ = lean_unbox_uint64(v_b_2327_);
lean_dec_ref(v_b_2327_);
v_res_2331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2323_, v_as_2324_, v_sz_boxed_2328_, v_i_boxed_2329_, v_b_boxed_2330_);
lean_dec_ref(v_as_2324_);
lean_dec_ref(v_covered_2323_);
v_r_2332_ = lean_box_uint64(v_res_2331_);
return v_r_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_p_2333_, lean_object* v_as_2334_, size_t v_sz_2335_, size_t v_i_2336_, lean_object* v_b_2337_){
_start:
{
uint8_t v___x_2338_; 
v___x_2338_ = lean_usize_dec_lt(v_i_2336_, v_sz_2335_);
if (v___x_2338_ == 0)
{
return v_b_2337_;
}
else
{
lean_object* v_a_2339_; uint64_t v___y_2341_; lean_object* v___y_2351_; lean_object* v_key_2354_; 
v_a_2339_ = lean_array_uget_borrowed(v_as_2334_, v_i_2336_);
v_key_2354_ = lean_ctor_get(v_a_2339_, 0);
v___y_2351_ = v_key_2354_;
goto v___jp_2350_;
v___jp_2340_:
{
lean_object* v_fst_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; size_t v___x_2347_; size_t v___x_2348_; 
v_fst_2342_ = lean_ctor_get(v_p_2333_, 0);
lean_inc(v_a_2339_);
lean_inc(v_fst_2342_);
v___x_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2343_, 0, v_fst_2342_);
lean_ctor_set(v___x_2343_, 1, v_a_2339_);
v___x_2344_ = lean_box_uint64(v___y_2341_);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2344_);
lean_ctor_set(v___x_2345_, 1, v___x_2343_);
v___x_2346_ = lean_array_push(v_b_2337_, v___x_2345_);
v___x_2347_ = ((size_t)1ULL);
v___x_2348_ = lean_usize_add(v_i_2336_, v___x_2347_);
v_i_2336_ = v___x_2348_;
v_b_2337_ = v___x_2346_;
goto _start;
}
v___jp_2350_:
{
if (lean_obj_tag(v___y_2351_) == 0)
{
uint64_t v___x_2352_; 
v___x_2352_ = 1723ULL;
v___y_2341_ = v___x_2352_;
goto v___jp_2340_;
}
else
{
uint64_t v_hash_2353_; 
v_hash_2353_ = lean_ctor_get_uint64(v___y_2351_, sizeof(void*)*2);
v___y_2341_ = v_hash_2353_;
goto v___jp_2340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_p_2355_, lean_object* v_as_2356_, lean_object* v_sz_2357_, lean_object* v_i_2358_, lean_object* v_b_2359_){
_start:
{
size_t v_sz_boxed_2360_; size_t v_i_boxed_2361_; lean_object* v_res_2362_; 
v_sz_boxed_2360_ = lean_unbox_usize(v_sz_2357_);
lean_dec(v_sz_2357_);
v_i_boxed_2361_ = lean_unbox_usize(v_i_2358_);
lean_dec(v_i_2358_);
v_res_2362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_p_2355_, v_as_2356_, v_sz_boxed_2360_, v_i_boxed_2361_, v_b_2359_);
lean_dec_ref(v_as_2356_);
lean_dec_ref(v_p_2355_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_2363_, size_t v_sz_2364_, size_t v_i_2365_, lean_object* v_b_2366_){
_start:
{
uint8_t v___x_2367_; 
v___x_2367_ = lean_usize_dec_lt(v_i_2365_, v_sz_2364_);
if (v___x_2367_ == 0)
{
return v_b_2366_;
}
else
{
lean_object* v_a_2368_; lean_object* v___y_2370_; lean_object* v_snd_2377_; 
v_a_2368_ = lean_array_uget_borrowed(v_as_2363_, v_i_2365_);
v_snd_2377_ = lean_ctor_get(v_a_2368_, 1);
switch(lean_obj_tag(v_snd_2377_))
{
case 0:
{
lean_object* v___x_2378_; 
v___x_2378_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2370_ = v___x_2378_;
goto v___jp_2369_;
}
case 1:
{
lean_object* v_children_2379_; 
v_children_2379_ = lean_ctor_get(v_snd_2377_, 1);
v___y_2370_ = v_children_2379_;
goto v___jp_2369_;
}
default: 
{
lean_object* v_children_2380_; 
v_children_2380_ = lean_ctor_get(v_snd_2377_, 2);
v___y_2370_ = v_children_2380_;
goto v___jp_2369_;
}
}
v___jp_2369_:
{
size_t v_sz_2371_; size_t v___x_2372_; lean_object* v___x_2373_; size_t v___x_2374_; size_t v___x_2375_; 
v_sz_2371_ = lean_array_size(v___y_2370_);
v___x_2372_ = ((size_t)0ULL);
v___x_2373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_a_2368_, v___y_2370_, v_sz_2371_, v___x_2372_, v_b_2366_);
v___x_2374_ = ((size_t)1ULL);
v___x_2375_ = lean_usize_add(v_i_2365_, v___x_2374_);
v_i_2365_ = v___x_2375_;
v_b_2366_ = v___x_2373_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_2381_, lean_object* v_sz_2382_, lean_object* v_i_2383_, lean_object* v_b_2384_){
_start:
{
size_t v_sz_boxed_2385_; size_t v_i_boxed_2386_; lean_object* v_res_2387_; 
v_sz_boxed_2385_ = lean_unbox_usize(v_sz_2382_);
lean_dec(v_sz_2382_);
v_i_boxed_2386_ = lean_unbox_usize(v_i_2383_);
lean_dec(v_i_2383_);
v_res_2387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_2381_, v_sz_boxed_2385_, v_i_boxed_2386_, v_b_2384_);
lean_dec_ref(v_as_2381_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(lean_object* v_as_2388_, size_t v_i_2389_, size_t v_stop_2390_, lean_object* v_b_2391_){
_start:
{
lean_object* v___y_2393_; uint8_t v___x_2397_; 
v___x_2397_ = lean_usize_dec_eq(v_i_2389_, v_stop_2390_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; lean_object* v_fst_2399_; lean_object* v_snd_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2411_; 
v___x_2398_ = lean_array_uget(v_as_2388_, v_i_2389_);
v_fst_2399_ = lean_ctor_get(v___x_2398_, 0);
v_snd_2400_ = lean_ctor_get(v___x_2398_, 1);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2402_ = v___x_2398_;
v_isShared_2403_ = v_isSharedCheck_2411_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_snd_2400_);
lean_inc(v_fst_2399_);
lean_dec(v___x_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2411_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v_val_2405_; 
if (lean_obj_tag(v_snd_2400_) == 1)
{
lean_dec_ref_known(v_snd_2400_, 2);
lean_del_object(v___x_2402_);
lean_dec(v_fst_2399_);
v___y_2393_ = v_b_2391_;
goto v___jp_2392_;
}
else
{
lean_object* v_val_2410_; 
v_val_2410_ = lean_ctor_get(v_snd_2400_, 1);
lean_inc(v_val_2410_);
lean_dec(v_snd_2400_);
v_val_2405_ = v_val_2410_;
goto v___jp_2404_;
}
v___jp_2404_:
{
lean_object* v___x_2407_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 1, v_fst_2399_);
lean_ctor_set(v___x_2402_, 0, v_val_2405_);
v___x_2407_ = v___x_2402_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_val_2405_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_fst_2399_);
v___x_2407_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_array_push(v_b_2391_, v___x_2407_);
v___y_2393_ = v___x_2408_;
goto v___jp_2392_;
}
}
}
}
else
{
return v_b_2391_;
}
v___jp_2392_:
{
size_t v___x_2394_; size_t v___x_2395_; 
v___x_2394_ = ((size_t)1ULL);
v___x_2395_ = lean_usize_add(v_i_2389_, v___x_2394_);
v_i_2389_ = v___x_2395_;
v_b_2391_ = v___y_2393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg___boxed(lean_object* v_as_2412_, lean_object* v_i_2413_, lean_object* v_stop_2414_, lean_object* v_b_2415_){
_start:
{
size_t v_i_boxed_2416_; size_t v_stop_boxed_2417_; lean_object* v_res_2418_; 
v_i_boxed_2416_ = lean_unbox_usize(v_i_2413_);
lean_dec(v_i_2413_);
v_stop_boxed_2417_ = lean_unbox_usize(v_stop_2414_);
lean_dec(v_stop_2414_);
v_res_2418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2412_, v_i_boxed_2416_, v_stop_boxed_2417_, v_b_2415_);
lean_dec_ref(v_as_2412_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_as_2421_, lean_object* v_start_2422_, lean_object* v_stop_2423_){
_start:
{
lean_object* v___x_2424_; uint8_t v___x_2425_; 
v___x_2424_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0));
v___x_2425_ = lean_nat_dec_lt(v_start_2422_, v_stop_2423_);
if (v___x_2425_ == 0)
{
return v___x_2424_;
}
else
{
lean_object* v___x_2426_; uint8_t v___x_2427_; 
v___x_2426_ = lean_array_get_size(v_as_2421_);
v___x_2427_ = lean_nat_dec_le(v_stop_2423_, v___x_2426_);
if (v___x_2427_ == 0)
{
uint8_t v___x_2428_; 
v___x_2428_ = lean_nat_dec_lt(v_start_2422_, v___x_2426_);
if (v___x_2428_ == 0)
{
return v___x_2424_;
}
else
{
size_t v___x_2429_; size_t v___x_2430_; lean_object* v___x_2431_; 
v___x_2429_ = lean_usize_of_nat(v_start_2422_);
v___x_2430_ = lean_usize_of_nat(v___x_2426_);
v___x_2431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2421_, v___x_2429_, v___x_2430_, v___x_2424_);
return v___x_2431_;
}
}
else
{
size_t v___x_2432_; size_t v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_usize_of_nat(v_start_2422_);
v___x_2433_ = lean_usize_of_nat(v_stop_2423_);
v___x_2434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2421_, v___x_2432_, v___x_2433_, v___x_2424_);
return v___x_2434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_as_2435_, lean_object* v_start_2436_, lean_object* v_stop_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_as_2435_, v_start_2436_, v_stop_2437_);
lean_dec(v_stop_2437_);
lean_dec(v_start_2436_);
lean_dec_ref(v_as_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(lean_object* v_hi_2439_, lean_object* v_pivot_2440_, lean_object* v_as_2441_, lean_object* v_i_2442_, lean_object* v_k_2443_){
_start:
{
uint8_t v___x_2454_; 
v___x_2454_ = lean_nat_dec_lt(v_k_2443_, v_hi_2439_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
lean_dec(v_k_2443_);
v___x_2455_ = lean_array_fswap(v_as_2441_, v_i_2442_, v_hi_2439_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v_i_2442_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
return v___x_2456_;
}
else
{
lean_object* v___x_2457_; lean_object* v_snd_2458_; lean_object* v_snd_2459_; lean_object* v_fst_2460_; lean_object* v_fst_2461_; lean_object* v_fst_2462_; lean_object* v_fst_2463_; uint64_t v___x_2464_; uint64_t v___x_2465_; uint8_t v___x_2466_; 
v___x_2457_ = lean_array_fget_borrowed(v_as_2441_, v_k_2443_);
v_snd_2458_ = lean_ctor_get(v___x_2457_, 1);
v_snd_2459_ = lean_ctor_get(v_pivot_2440_, 1);
v_fst_2460_ = lean_ctor_get(v___x_2457_, 0);
v_fst_2461_ = lean_ctor_get(v_snd_2458_, 0);
v_fst_2462_ = lean_ctor_get(v_pivot_2440_, 0);
v_fst_2463_ = lean_ctor_get(v_snd_2459_, 0);
v___x_2464_ = lean_unbox_uint64(v_fst_2460_);
v___x_2465_ = lean_unbox_uint64(v_fst_2462_);
v___x_2466_ = lean_uint64_dec_lt(v___x_2464_, v___x_2465_);
if (v___x_2466_ == 0)
{
uint64_t v___x_2467_; uint64_t v___x_2468_; uint8_t v___x_2469_; 
v___x_2467_ = lean_unbox_uint64(v_fst_2460_);
v___x_2468_ = lean_unbox_uint64(v_fst_2462_);
v___x_2469_ = lean_uint64_dec_eq(v___x_2467_, v___x_2468_);
if (v___x_2469_ == 0)
{
goto v___jp_2450_;
}
else
{
uint8_t v___x_2470_; 
v___x_2470_ = lean_nat_dec_lt(v_fst_2461_, v_fst_2463_);
if (v___x_2470_ == 0)
{
goto v___jp_2450_;
}
else
{
goto v___jp_2444_;
}
}
}
else
{
goto v___jp_2444_;
}
}
v___jp_2444_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2445_ = lean_array_fswap(v_as_2441_, v_i_2442_, v_k_2443_);
v___x_2446_ = lean_unsigned_to_nat(1u);
v___x_2447_ = lean_nat_add(v_i_2442_, v___x_2446_);
lean_dec(v_i_2442_);
v___x_2448_ = lean_nat_add(v_k_2443_, v___x_2446_);
lean_dec(v_k_2443_);
v_as_2441_ = v___x_2445_;
v_i_2442_ = v___x_2447_;
v_k_2443_ = v___x_2448_;
goto _start;
}
v___jp_2450_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = lean_unsigned_to_nat(1u);
v___x_2452_ = lean_nat_add(v_k_2443_, v___x_2451_);
lean_dec(v_k_2443_);
v_k_2443_ = v___x_2452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg___boxed(lean_object* v_hi_2471_, lean_object* v_pivot_2472_, lean_object* v_as_2473_, lean_object* v_i_2474_, lean_object* v_k_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2471_, v_pivot_2472_, v_as_2473_, v_i_2474_, v_k_2475_);
lean_dec_ref(v_pivot_2472_);
lean_dec(v_hi_2471_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_n_2477_, lean_object* v_as_2478_, lean_object* v_lo_2479_, lean_object* v_hi_2480_){
_start:
{
lean_object* v___y_2482_; uint8_t v___x_2492_; 
v___x_2492_ = lean_nat_dec_lt(v_lo_2479_, v_hi_2480_);
if (v___x_2492_ == 0)
{
lean_dec(v_lo_2479_);
return v_as_2478_;
}
else
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v_mid_2495_; lean_object* v___y_2497_; lean_object* v___y_2503_; lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v___x_2493_ = lean_nat_add(v_lo_2479_, v_hi_2480_);
v___x_2494_ = lean_unsigned_to_nat(1u);
v_mid_2495_ = lean_nat_shiftr(v___x_2493_, v___x_2494_);
lean_dec(v___x_2493_);
v___x_2508_ = lean_array_fget_borrowed(v_as_2478_, v_mid_2495_);
v___x_2509_ = lean_array_fget_borrowed(v_as_2478_, v_lo_2479_);
v___x_2510_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2508_, v___x_2509_);
if (v___x_2510_ == 0)
{
v___y_2503_ = v_as_2478_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_array_fswap(v_as_2478_, v_lo_2479_, v_mid_2495_);
v___y_2503_ = v___x_2511_;
goto v___jp_2502_;
}
v___jp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v___x_2498_ = lean_array_fget_borrowed(v___y_2497_, v_mid_2495_);
v___x_2499_ = lean_array_fget_borrowed(v___y_2497_, v_hi_2480_);
v___x_2500_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2498_, v___x_2499_);
if (v___x_2500_ == 0)
{
lean_dec(v_mid_2495_);
v___y_2482_ = v___y_2497_;
goto v___jp_2481_;
}
else
{
lean_object* v___x_2501_; 
v___x_2501_ = lean_array_fswap(v___y_2497_, v_mid_2495_, v_hi_2480_);
lean_dec(v_mid_2495_);
v___y_2482_ = v___x_2501_;
goto v___jp_2481_;
}
}
v___jp_2502_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v___x_2504_ = lean_array_fget_borrowed(v___y_2503_, v_hi_2480_);
v___x_2505_ = lean_array_fget_borrowed(v___y_2503_, v_lo_2479_);
v___x_2506_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2504_, v___x_2505_);
if (v___x_2506_ == 0)
{
v___y_2497_ = v___y_2503_;
goto v___jp_2496_;
}
else
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_array_fswap(v___y_2503_, v_lo_2479_, v_hi_2480_);
v___y_2497_ = v___x_2507_;
goto v___jp_2496_;
}
}
}
v___jp_2481_:
{
lean_object* v_pivot_2483_; lean_object* v___x_2484_; lean_object* v_fst_2485_; lean_object* v_snd_2486_; uint8_t v___x_2487_; 
v_pivot_2483_ = lean_array_fget(v___y_2482_, v_hi_2480_);
lean_inc_n(v_lo_2479_, 2);
v___x_2484_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2480_, v_pivot_2483_, v___y_2482_, v_lo_2479_, v_lo_2479_);
lean_dec(v_pivot_2483_);
v_fst_2485_ = lean_ctor_get(v___x_2484_, 0);
lean_inc(v_fst_2485_);
v_snd_2486_ = lean_ctor_get(v___x_2484_, 1);
lean_inc(v_snd_2486_);
lean_dec_ref(v___x_2484_);
v___x_2487_ = lean_nat_dec_le(v_hi_2480_, v_fst_2485_);
if (v___x_2487_ == 0)
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2477_, v_snd_2486_, v_lo_2479_, v_fst_2485_);
v___x_2489_ = lean_unsigned_to_nat(1u);
v___x_2490_ = lean_nat_add(v_fst_2485_, v___x_2489_);
lean_dec(v_fst_2485_);
v_as_2478_ = v___x_2488_;
v_lo_2479_ = v___x_2490_;
goto _start;
}
else
{
lean_dec(v_fst_2485_);
lean_dec(v_lo_2479_);
return v_snd_2486_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_n_2512_, lean_object* v_as_2513_, lean_object* v_lo_2514_, lean_object* v_hi_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2512_, v_as_2513_, v_lo_2514_, v_hi_2515_);
lean_dec(v_hi_2515_);
lean_dec(v_n_2512_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_2517_, size_t v_sz_2518_, size_t v_i_2519_, lean_object* v_b_2520_){
_start:
{
lean_object* v___y_2522_; uint8_t v___x_2528_; 
v___x_2528_ = lean_usize_dec_lt(v_i_2519_, v_sz_2518_);
if (v___x_2528_ == 0)
{
return v_b_2520_;
}
else
{
lean_object* v_a_2529_; lean_object* v_snd_2530_; 
v_a_2529_ = lean_array_uget_borrowed(v_as_2517_, v_i_2519_);
v_snd_2530_ = lean_ctor_get(v_a_2529_, 1);
switch(lean_obj_tag(v_snd_2530_))
{
case 0:
{
lean_object* v___x_2531_; 
v___x_2531_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2522_ = v___x_2531_;
goto v___jp_2521_;
}
case 1:
{
lean_object* v_children_2532_; 
v_children_2532_ = lean_ctor_get(v_snd_2530_, 1);
v___y_2522_ = v_children_2532_;
goto v___jp_2521_;
}
default: 
{
lean_object* v_children_2533_; 
v_children_2533_ = lean_ctor_get(v_snd_2530_, 2);
v___y_2522_ = v_children_2533_;
goto v___jp_2521_;
}
}
}
v___jp_2521_:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; size_t v___x_2525_; size_t v___x_2526_; 
v___x_2523_ = lean_array_get_size(v___y_2522_);
v___x_2524_ = lean_nat_add(v_b_2520_, v___x_2523_);
lean_dec(v_b_2520_);
v___x_2525_ = ((size_t)1ULL);
v___x_2526_ = lean_usize_add(v_i_2519_, v___x_2525_);
v_i_2519_ = v___x_2526_;
v_b_2520_ = v___x_2524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_2534_, lean_object* v_sz_2535_, lean_object* v_i_2536_, lean_object* v_b_2537_){
_start:
{
size_t v_sz_boxed_2538_; size_t v_i_boxed_2539_; lean_object* v_res_2540_; 
v_sz_boxed_2538_ = lean_unbox_usize(v_sz_2535_);
lean_dec(v_sz_2535_);
v_i_boxed_2539_ = lean_unbox_usize(v_i_2536_);
lean_dec(v_i_2536_);
v_res_2540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_2534_, v_sz_boxed_2538_, v_i_boxed_2539_, v_b_2537_);
lean_dec_ref(v_as_2534_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v_covered_2541_, lean_object* v_cands_2542_, lean_object* v_sorted_2543_, lean_object* v_idx_2544_, lean_object* v_s_2545_){
_start:
{
lean_object* v___x_2546_; uint8_t v___x_2547_; 
v___x_2546_ = lean_array_get_size(v_sorted_2543_);
v___x_2547_ = lean_nat_dec_lt(v_idx_2544_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_dec(v_idx_2544_);
return v_s_2545_;
}
else
{
lean_object* v___x_2548_; lean_object* v_snd_2549_; lean_object* v_fst_2550_; lean_object* v_fst_2551_; lean_object* v_snd_2552_; lean_object* v___x_2553_; lean_object* v_idx_2554_; uint8_t v___x_2555_; 
v___x_2548_ = lean_array_fget_borrowed(v_sorted_2543_, v_idx_2544_);
v_snd_2549_ = lean_ctor_get(v___x_2548_, 1);
v_fst_2550_ = lean_ctor_get(v___x_2548_, 0);
v_fst_2551_ = lean_ctor_get(v_snd_2549_, 0);
v_snd_2552_ = lean_ctor_get(v_snd_2549_, 1);
v___x_2553_ = lean_unsigned_to_nat(1u);
v_idx_2554_ = lean_nat_add(v_idx_2544_, v___x_2553_);
lean_dec(v_idx_2544_);
v___x_2555_ = lean_nat_dec_lt(v_idx_2554_, v___x_2546_);
if (v___x_2555_ == 0)
{
v_idx_2544_ = v_idx_2554_;
goto _start;
}
else
{
lean_object* v___x_2557_; lean_object* v_fst_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2579_; 
v___x_2557_ = lean_array_fget(v_sorted_2543_, v_idx_2554_);
v_fst_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2579_ == 0)
{
lean_object* v_unused_2580_; 
v_unused_2580_ = lean_ctor_get(v___x_2557_, 1);
lean_dec(v_unused_2580_);
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2579_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_fst_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2579_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
uint64_t v___x_2562_; uint64_t v___x_2563_; uint8_t v___x_2564_; 
v___x_2562_ = lean_unbox_uint64(v_fst_2558_);
lean_dec(v_fst_2558_);
v___x_2563_ = lean_unbox_uint64(v_fst_2550_);
v___x_2564_ = lean_uint64_dec_eq(v___x_2562_, v___x_2563_);
if (v___x_2564_ == 0)
{
lean_del_object(v___x_2560_);
v_idx_2544_ = v_idx_2554_;
goto _start;
}
else
{
lean_object* v___x_2567_; 
lean_inc(v_snd_2552_);
lean_inc(v_fst_2551_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 1, v_snd_2552_);
lean_ctor_set(v___x_2560_, 0, v_fst_2551_);
v___x_2567_ = v___x_2560_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_fst_2551_);
lean_ctor_set(v_reuseFailAlloc_2578_, 1, v_snd_2552_);
v___x_2567_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; uint64_t v___x_2571_; lean_object* v_val_2572_; lean_object* v_fst_2573_; lean_object* v_snd_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2568_ = lean_mk_empty_array_with_capacity(v___x_2553_);
lean_inc_ref(v___x_2568_);
v___x_2569_ = lean_array_push(v___x_2568_, v___x_2567_);
v___x_2570_ = lean_array_push(v___x_2568_, v___x_2569_);
v___x_2571_ = lean_unbox_uint64(v_fst_2550_);
v_val_2572_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2543_, v___x_2571_, v_idx_2554_, v___x_2570_);
v_fst_2573_ = lean_ctor_get(v_val_2572_, 0);
lean_inc(v_fst_2573_);
v_snd_2574_ = lean_ctor_get(v_val_2572_, 1);
lean_inc(v_snd_2574_);
lean_dec_ref(v_val_2572_);
v___x_2575_ = lean_unsigned_to_nat(0u);
v___x_2576_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2541_, v_fst_2573_, v___x_2575_, v_s_2545_);
lean_dec(v_fst_2573_);
v_idx_2544_ = v_snd_2574_;
v_s_2545_ = v___x_2576_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_2581_, lean_object* v_key_2582_, lean_object* v_cands_2583_, lean_object* v_acc_2584_){
_start:
{
lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2603_; lean_object* v_acc_2604_; lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2625_ = lean_array_get_size(v_covered_2581_);
v___x_2626_ = lean_unsigned_to_nat(0u);
v___x_2627_ = lean_nat_dec_eq(v___x_2625_, v___x_2626_);
if (v___x_2627_ == 0)
{
uint64_t v_common_2628_; size_t v_sz_2629_; size_t v___x_2630_; uint64_t v___x_2631_; uint64_t v___x_2632_; uint8_t v___x_2633_; 
v_common_2628_ = 18446744073709551615ULL;
v_sz_2629_ = lean_array_size(v_cands_2583_);
v___x_2630_ = ((size_t)0ULL);
v___x_2631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2581_, v_cands_2583_, v_sz_2629_, v___x_2630_, v_common_2628_);
v___x_2632_ = 0ULL;
v___x_2633_ = lean_uint64_dec_eq(v___x_2631_, v___x_2632_);
if (v___x_2633_ == 0)
{
lean_dec(v_key_2582_);
return v_acc_2584_;
}
else
{
goto v___jp_2616_;
}
}
else
{
goto v___jp_2616_;
}
v___jp_2585_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v___y_2590_, v___y_2588_, v___y_2589_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec(v___y_2590_);
v___x_2593_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2581_, v_cands_2583_, v___x_2592_, v___y_2586_, v___y_2587_);
lean_dec_ref(v___x_2592_);
return v___x_2593_;
}
v___jp_2594_:
{
uint8_t v___x_2601_; 
v___x_2601_ = lean_nat_dec_le(v___y_2600_, v___y_2596_);
if (v___x_2601_ == 0)
{
lean_dec(v___y_2596_);
lean_inc(v___y_2600_);
v___y_2586_ = v___y_2595_;
v___y_2587_ = v___y_2597_;
v___y_2588_ = v___y_2598_;
v___y_2589_ = v___y_2600_;
v___y_2590_ = v___y_2599_;
v___y_2591_ = v___y_2600_;
goto v___jp_2585_;
}
else
{
v___y_2586_ = v___y_2595_;
v___y_2587_ = v___y_2597_;
v___y_2588_ = v___y_2598_;
v___y_2589_ = v___y_2600_;
v___y_2590_ = v___y_2599_;
v___y_2591_ = v___y_2596_;
goto v___jp_2585_;
}
}
v___jp_2602_:
{
size_t v_sz_2605_; size_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; 
v_sz_2605_ = lean_array_size(v_cands_2583_);
v___x_2606_ = ((size_t)0ULL);
lean_inc(v___y_2603_);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_2583_, v_sz_2605_, v___x_2606_, v___y_2603_);
v___x_2608_ = lean_mk_empty_array_with_capacity(v___x_2607_);
lean_dec(v___x_2607_);
v___x_2609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_2583_, v_sz_2605_, v___x_2606_, v___x_2608_);
v___x_2610_ = lean_array_get_size(v___x_2609_);
v___x_2611_ = lean_nat_dec_eq(v___x_2610_, v___y_2603_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2612_ = lean_unsigned_to_nat(1u);
v___x_2613_ = lean_nat_sub(v___x_2610_, v___x_2612_);
v___x_2614_ = lean_nat_dec_le(v___y_2603_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_inc(v___x_2613_);
v___y_2595_ = v___y_2603_;
v___y_2596_ = v___x_2613_;
v___y_2597_ = v_acc_2604_;
v___y_2598_ = v___x_2609_;
v___y_2599_ = v___x_2610_;
v___y_2600_ = v___x_2613_;
goto v___jp_2594_;
}
else
{
lean_inc(v___y_2603_);
v___y_2595_ = v___y_2603_;
v___y_2596_ = v___x_2613_;
v___y_2597_ = v_acc_2604_;
v___y_2598_ = v___x_2609_;
v___y_2599_ = v___x_2610_;
v___y_2600_ = v___y_2603_;
goto v___jp_2594_;
}
}
else
{
lean_object* v___x_2615_; 
v___x_2615_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2581_, v_cands_2583_, v___x_2609_, v___y_2603_, v_acc_2604_);
lean_dec_ref(v___x_2609_);
return v___x_2615_;
}
}
v___jp_2616_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v_entries_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2617_ = lean_unsigned_to_nat(0u);
v___x_2618_ = lean_array_get_size(v_cands_2583_);
v_entries_2619_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_cands_2583_, v___x_2617_, v___x_2618_);
v___x_2620_ = lean_unsigned_to_nat(1u);
v___x_2621_ = lean_array_get_size(v_entries_2619_);
v___x_2622_ = lean_nat_dec_lt(v___x_2620_, v___x_2621_);
if (v___x_2622_ == 0)
{
lean_dec_ref(v_entries_2619_);
lean_dec(v_key_2582_);
v___y_2603_ = v___x_2617_;
v_acc_2604_ = v_acc_2584_;
goto v___jp_2602_;
}
else
{
lean_object* v___x_2623_; lean_object* v_acc_2624_; 
v___x_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2623_, 0, v_key_2582_);
lean_ctor_set(v___x_2623_, 1, v_entries_2619_);
v_acc_2624_ = lean_array_push(v_acc_2584_, v___x_2623_);
v___y_2603_ = v___x_2617_;
v_acc_2604_ = v_acc_2624_;
goto v___jp_2602_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(lean_object* v_covered_2634_, lean_object* v_groups_2635_, lean_object* v_k_2636_, lean_object* v_s_2637_){
_start:
{
lean_object* v___x_2638_; uint8_t v___x_2639_; 
v___x_2638_ = lean_array_get_size(v_groups_2635_);
v___x_2639_ = lean_nat_dec_lt(v_k_2636_, v___x_2638_);
if (v___x_2639_ == 0)
{
lean_dec(v_k_2636_);
return v_s_2637_;
}
else
{
lean_object* v_g_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v_g_2640_ = lean_array_fget_borrowed(v_groups_2635_, v_k_2636_);
v___x_2641_ = lean_unsigned_to_nat(1u);
v___x_2642_ = lean_nat_add(v_k_2636_, v___x_2641_);
lean_dec(v_k_2636_);
v___x_2643_ = lean_array_get_size(v_g_2640_);
v___x_2644_ = lean_nat_dec_eq(v___x_2643_, v___x_2641_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v_snd_2648_; lean_object* v_key_2649_; lean_object* v___x_2650_; 
v___x_2645_ = lean_unsigned_to_nat(0u);
v___x_2646_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_2647_ = lean_array_get_borrowed(v___x_2646_, v_g_2640_, v___x_2645_);
v_snd_2648_ = lean_ctor_get(v___x_2647_, 1);
v_key_2649_ = lean_ctor_get(v_snd_2648_, 0);
lean_inc(v_key_2649_);
v___x_2650_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2634_, v_key_2649_, v_g_2640_, v_s_2637_);
v_k_2636_ = v___x_2642_;
v_s_2637_ = v___x_2650_;
goto _start;
}
else
{
v_k_2636_ = v___x_2642_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg___boxed(lean_object* v_covered_2653_, lean_object* v_groups_2654_, lean_object* v_k_2655_, lean_object* v_s_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2653_, v_groups_2654_, v_k_2655_, v_s_2656_);
lean_dec_ref(v_groups_2654_);
lean_dec_ref(v_covered_2653_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v_covered_2658_, lean_object* v_cands_2659_, lean_object* v_sorted_2660_, lean_object* v_idx_2661_, lean_object* v_s_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2658_, v_cands_2659_, v_sorted_2660_, v_idx_2661_, v_s_2662_);
lean_dec_ref(v_sorted_2660_);
lean_dec_ref(v_cands_2659_);
lean_dec_ref(v_covered_2658_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_2664_, lean_object* v_key_2665_, lean_object* v_cands_2666_, lean_object* v_acc_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2664_, v_key_2665_, v_cands_2666_, v_acc_2667_);
lean_dec_ref(v_cands_2666_);
lean_dec_ref(v_covered_2664_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_2669_, lean_object* v_covered_2670_, lean_object* v_key_2671_, lean_object* v_cands_2672_, lean_object* v_acc_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2670_, v_key_2671_, v_cands_2672_, v_acc_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_2675_, lean_object* v_covered_2676_, lean_object* v_key_2677_, lean_object* v_cands_2678_, lean_object* v_acc_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_2675_, v_covered_2676_, v_key_2677_, v_cands_2678_, v_acc_2679_);
lean_dec_ref(v_cands_2678_);
lean_dec_ref(v_covered_2676_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_2681_, lean_object* v_p_2682_, lean_object* v_as_2683_, size_t v_sz_2684_, size_t v_i_2685_, lean_object* v_b_2686_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_p_2682_, v_as_2683_, v_sz_2684_, v_i_2685_, v_b_2686_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_2688_, lean_object* v_p_2689_, lean_object* v_as_2690_, lean_object* v_sz_2691_, lean_object* v_i_2692_, lean_object* v_b_2693_){
_start:
{
size_t v_sz_boxed_2694_; size_t v_i_boxed_2695_; lean_object* v_res_2696_; 
v_sz_boxed_2694_ = lean_unbox_usize(v_sz_2691_);
lean_dec(v_sz_2691_);
v_i_boxed_2695_ = lean_unbox_usize(v_i_2692_);
lean_dec(v_i_2692_);
v_res_2696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_2688_, v_p_2689_, v_as_2690_, v_sz_boxed_2694_, v_i_boxed_2695_, v_b_2693_);
lean_dec_ref(v_as_2690_);
lean_dec_ref(v_p_2689_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_2697_, lean_object* v_as_2698_, size_t v_sz_2699_, size_t v_i_2700_, lean_object* v_b_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_2698_, v_sz_2699_, v_i_2700_, v_b_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_2703_, lean_object* v_as_2704_, lean_object* v_sz_2705_, lean_object* v_i_2706_, lean_object* v_b_2707_){
_start:
{
size_t v_sz_boxed_2708_; size_t v_i_boxed_2709_; lean_object* v_res_2710_; 
v_sz_boxed_2708_ = lean_unbox_usize(v_sz_2705_);
lean_dec(v_sz_2705_);
v_i_boxed_2709_ = lean_unbox_usize(v_i_2706_);
lean_dec(v_i_2706_);
v_res_2710_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_2703_, v_as_2704_, v_sz_boxed_2708_, v_i_boxed_2709_, v_b_2707_);
lean_dec_ref(v_as_2704_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_2711_, lean_object* v_as_2712_, size_t v_sz_2713_, size_t v_i_2714_, lean_object* v_b_2715_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_2712_, v_sz_2713_, v_i_2714_, v_b_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_2717_, lean_object* v_as_2718_, lean_object* v_sz_2719_, lean_object* v_i_2720_, lean_object* v_b_2721_){
_start:
{
size_t v_sz_boxed_2722_; size_t v_i_boxed_2723_; lean_object* v_res_2724_; 
v_sz_boxed_2722_ = lean_unbox_usize(v_sz_2719_);
lean_dec(v_sz_2719_);
v_i_boxed_2723_ = lean_unbox_usize(v_i_2720_);
lean_dec(v_i_2720_);
v_res_2724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_2717_, v_as_2718_, v_sz_boxed_2722_, v_i_boxed_2723_, v_b_2721_);
lean_dec_ref(v_as_2718_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_2725_, lean_object* v_n_2726_, lean_object* v_as_2727_, lean_object* v_lo_2728_, lean_object* v_hi_2729_, lean_object* v_w_2730_, lean_object* v_hlo_2731_, lean_object* v_hhi_2732_){
_start:
{
lean_object* v___x_2733_; 
v___x_2733_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2726_, v_as_2727_, v_lo_2728_, v_hi_2729_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_2734_, lean_object* v_n_2735_, lean_object* v_as_2736_, lean_object* v_lo_2737_, lean_object* v_hi_2738_, lean_object* v_w_2739_, lean_object* v_hlo_2740_, lean_object* v_hhi_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_2734_, v_n_2735_, v_as_2736_, v_lo_2737_, v_hi_2738_, v_w_2739_, v_hlo_2740_, v_hhi_2741_);
lean_dec(v_hi_2738_);
lean_dec(v_n_2735_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_2743_, lean_object* v_covered_2744_, lean_object* v_cands_2745_, lean_object* v_sorted_2746_, lean_object* v_idx_2747_, lean_object* v_s_2748_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2744_, v_cands_2745_, v_sorted_2746_, v_idx_2747_, v_s_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_2750_, lean_object* v_covered_2751_, lean_object* v_cands_2752_, lean_object* v_sorted_2753_, lean_object* v_idx_2754_, lean_object* v_s_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_2750_, v_covered_2751_, v_cands_2752_, v_sorted_2753_, v_idx_2754_, v_s_2755_);
lean_dec_ref(v_sorted_2753_);
lean_dec_ref(v_cands_2752_);
lean_dec_ref(v_covered_2751_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_2757_, lean_object* v_as_2758_, lean_object* v_start_2759_, lean_object* v_stop_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_as_2758_, v_start_2759_, v_stop_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_2762_, lean_object* v_as_2763_, lean_object* v_start_2764_, lean_object* v_stop_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_2762_, v_as_2763_, v_start_2764_, v_stop_2765_);
lean_dec(v_stop_2765_);
lean_dec(v_start_2764_);
lean_dec_ref(v_as_2763_);
return v_res_2766_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_2767_, lean_object* v_covered_2768_, lean_object* v_as_2769_, size_t v_sz_2770_, size_t v_i_2771_, uint64_t v_b_2772_){
_start:
{
uint64_t v___x_2773_; 
v___x_2773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2768_, v_as_2769_, v_sz_2770_, v_i_2771_, v_b_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_2774_, lean_object* v_covered_2775_, lean_object* v_as_2776_, lean_object* v_sz_2777_, lean_object* v_i_2778_, lean_object* v_b_2779_){
_start:
{
size_t v_sz_boxed_2780_; size_t v_i_boxed_2781_; uint64_t v_b_boxed_2782_; uint64_t v_res_2783_; lean_object* v_r_2784_; 
v_sz_boxed_2780_ = lean_unbox_usize(v_sz_2777_);
lean_dec(v_sz_2777_);
v_i_boxed_2781_ = lean_unbox_usize(v_i_2778_);
lean_dec(v_i_2778_);
v_b_boxed_2782_ = lean_unbox_uint64(v_b_2779_);
lean_dec_ref(v_b_2779_);
v_res_2783_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_2774_, v_covered_2775_, v_as_2776_, v_sz_boxed_2780_, v_i_boxed_2781_, v_b_boxed_2782_);
lean_dec_ref(v_as_2776_);
lean_dec_ref(v_covered_2775_);
v_r_2784_ = lean_box_uint64(v_res_2783_);
return v_r_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(lean_object* v_00_u03b1_2785_, lean_object* v_n_2786_, lean_object* v_lo_2787_, lean_object* v_hi_2788_, lean_object* v_hhi_2789_, lean_object* v_pivot_2790_, lean_object* v_as_2791_, lean_object* v_i_2792_, lean_object* v_k_2793_, lean_object* v_ilo_2794_, lean_object* v_ik_2795_, lean_object* v_w_2796_){
_start:
{
lean_object* v___x_2797_; 
v___x_2797_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2788_, v_pivot_2790_, v_as_2791_, v_i_2792_, v_k_2793_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___boxed(lean_object* v_00_u03b1_2798_, lean_object* v_n_2799_, lean_object* v_lo_2800_, lean_object* v_hi_2801_, lean_object* v_hhi_2802_, lean_object* v_pivot_2803_, lean_object* v_as_2804_, lean_object* v_i_2805_, lean_object* v_k_2806_, lean_object* v_ilo_2807_, lean_object* v_ik_2808_, lean_object* v_w_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(v_00_u03b1_2798_, v_n_2799_, v_lo_2800_, v_hi_2801_, v_hhi_2802_, v_pivot_2803_, v_as_2804_, v_i_2805_, v_k_2806_, v_ilo_2807_, v_ik_2808_, v_w_2809_);
lean_dec_ref(v_pivot_2803_);
lean_dec(v_hi_2801_);
lean_dec(v_lo_2800_);
lean_dec(v_n_2799_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(lean_object* v_00_u03b1_2811_, lean_object* v_covered_2812_, lean_object* v_cands_2813_, lean_object* v_groups_2814_, lean_object* v_hgroups_2815_, lean_object* v_k_2816_, lean_object* v_s_2817_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2812_, v_groups_2814_, v_k_2816_, v_s_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___boxed(lean_object* v_00_u03b1_2819_, lean_object* v_covered_2820_, lean_object* v_cands_2821_, lean_object* v_groups_2822_, lean_object* v_hgroups_2823_, lean_object* v_k_2824_, lean_object* v_s_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(v_00_u03b1_2819_, v_covered_2820_, v_cands_2821_, v_groups_2822_, v_hgroups_2823_, v_k_2824_, v_s_2825_);
lean_dec_ref(v_groups_2822_);
lean_dec_ref(v_cands_2821_);
lean_dec_ref(v_covered_2820_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(lean_object* v_00_u03b1_2827_, lean_object* v_as_2828_, size_t v_i_2829_, size_t v_stop_2830_, lean_object* v_b_2831_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2828_, v_i_2829_, v_stop_2830_, v_b_2831_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___boxed(lean_object* v_00_u03b1_2833_, lean_object* v_as_2834_, lean_object* v_i_2835_, lean_object* v_stop_2836_, lean_object* v_b_2837_){
_start:
{
size_t v_i_boxed_2838_; size_t v_stop_boxed_2839_; lean_object* v_res_2840_; 
v_i_boxed_2838_ = lean_unbox_usize(v_i_2835_);
lean_dec(v_i_2835_);
v_stop_boxed_2839_ = lean_unbox_usize(v_stop_2836_);
lean_dec(v_stop_2836_);
v_res_2840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(v_00_u03b1_2833_, v_as_2834_, v_i_boxed_2838_, v_stop_boxed_2839_, v_b_2837_);
lean_dec_ref(v_as_2834_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_2841_, lean_object* v_h__1_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_apply_2(v_h__1_2842_, v_x_2841_, lean_box(0));
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_2844_, lean_object* v_P_2845_, lean_object* v_motive_2846_, lean_object* v_x_2847_, lean_object* v_h__1_2848_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_apply_2(v_h__1_2848_, v_x_2847_, lean_box(0));
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter___redArg(lean_object* v_x_2850_, lean_object* v_h__1_2851_){
_start:
{
lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v___x_2854_; 
v_fst_2852_ = lean_ctor_get(v_x_2850_, 0);
lean_inc(v_fst_2852_);
v_snd_2853_ = lean_ctor_get(v_x_2850_, 1);
lean_inc(v_snd_2853_);
lean_dec_ref(v_x_2850_);
v___x_2854_ = lean_apply_2(v_h__1_2851_, v_fst_2852_, v_snd_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter(lean_object* v_00_u03b1_2855_, lean_object* v_motive_2856_, lean_object* v_x_2857_, lean_object* v_h__1_2858_){
_start:
{
lean_object* v_fst_2859_; lean_object* v_snd_2860_; lean_object* v___x_2861_; 
v_fst_2859_ = lean_ctor_get(v_x_2857_, 0);
lean_inc(v_fst_2859_);
v_snd_2860_ = lean_ctor_get(v_x_2857_, 1);
lean_inc(v_snd_2860_);
lean_dec_ref(v_x_2857_);
v___x_2861_ = lean_apply_2(v_h__1_2858_, v_fst_2859_, v_snd_2860_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_2864_, lean_object* v_covered_2865_){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v___x_2866_ = lean_array_get_size(v_trees_2864_);
v___x_2867_ = lean_unsigned_to_nat(2u);
v___x_2868_ = lean_nat_dec_lt(v___x_2866_, v___x_2867_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2869_ = lean_box(0);
v___x_2870_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_2871_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2865_, v___x_2869_, v_trees_2864_, v___x_2870_);
return v___x_2871_;
}
else
{
lean_object* v___x_2872_; 
v___x_2872_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_2873_, lean_object* v_covered_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_2873_, v_covered_2874_);
lean_dec_ref(v_covered_2874_);
lean_dec_ref(v_trees_2873_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_2876_, lean_object* v_trees_2877_, lean_object* v_covered_2878_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_2877_, v_covered_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_2880_, lean_object* v_trees_2881_, lean_object* v_covered_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_2880_, v_trees_2881_, v_covered_2882_);
lean_dec_ref(v_covered_2882_);
lean_dec_ref(v_trees_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(lean_object* v_cs_2884_, lean_object* v_i_2885_, lean_object* v_c_2886_){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2887_, 0, v_i_2885_);
lean_ctor_set(v___x_2887_, 1, v_c_2886_);
v___x_2888_ = lean_array_push(v_cs_2884_, v___x_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_2889_, lean_object* v_cands_2890_, lean_object* v_x_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_2889_, v_cands_2890_, v_x_2891_);
lean_dec_ref(v_cands_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_2893_, lean_object* v_key_2894_, lean_object* v_cands_2895_){
_start:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; 
v___x_2896_ = lean_array_get_size(v_cands_2895_);
v___x_2897_ = lean_unsigned_to_nat(1u);
v___x_2898_ = lean_nat_dec_eq(v___x_2896_, v___x_2897_);
if (v___x_2898_ == 0)
{
lean_object* v___f_2899_; lean_object* v___y_2901_; lean_object* v___x_2904_; lean_object* v_entries_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; 
lean_inc_ref(v_cands_2895_);
lean_inc_ref(v_resolve_2893_);
v___f_2899_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2899_, 0, v_resolve_2893_);
lean_closure_set(v___f_2899_, 1, v_cands_2895_);
v___x_2904_ = lean_unsigned_to_nat(0u);
v_entries_2905_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_cands_2895_, v___x_2904_, v___x_2896_);
lean_dec_ref(v_cands_2895_);
v___x_2906_ = lean_array_get_size(v_entries_2905_);
v___x_2907_ = lean_unsigned_to_nat(2u);
v___x_2908_ = lean_nat_dec_lt(v___x_2906_, v___x_2907_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_apply_1(v_resolve_2893_, v_entries_2905_);
v___y_2901_ = v___x_2909_;
goto v___jp_2900_;
}
else
{
uint8_t v___x_2910_; 
lean_dec_ref(v_resolve_2893_);
v___x_2910_ = lean_nat_dec_lt(v___x_2904_, v___x_2906_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; 
lean_dec_ref(v_entries_2905_);
v___x_2911_ = lean_box(0);
v___y_2901_ = v___x_2911_;
goto v___jp_2900_;
}
else
{
lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2912_ = lean_array_fget(v_entries_2905_, v___x_2904_);
lean_dec_ref(v_entries_2905_);
v___x_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
v___y_2901_ = v___x_2913_;
goto v___jp_2900_;
}
}
v___jp_2900_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = lean_mk_thunk(v___f_2899_);
v___x_2903_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2903_, 0, v_key_2894_);
lean_ctor_set(v___x_2903_, 1, v___y_2901_);
lean_ctor_set(v___x_2903_, 2, v___x_2902_);
return v___x_2903_;
}
}
else
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v_fst_2917_; lean_object* v_snd_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_dec(v_key_2894_);
lean_dec_ref(v_resolve_2893_);
v___x_2914_ = lean_unsigned_to_nat(0u);
v___x_2915_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_2916_ = lean_array_get(v___x_2915_, v_cands_2895_, v___x_2914_);
lean_dec_ref(v_cands_2895_);
v_fst_2917_ = lean_ctor_get(v___x_2916_, 0);
v_snd_2918_ = lean_ctor_get(v___x_2916_, 1);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2916_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_snd_2918_);
lean_inc(v_fst_2917_);
lean_dec(v___x_2916_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_fst_2917_);
lean_ctor_set(v_reuseFailAlloc_2924_, 1, v_snd_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_2926_, lean_object* v_groups_2927_, lean_object* v_k_2928_, lean_object* v_s_2929_){
_start:
{
lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2930_ = lean_array_get_size(v_groups_2927_);
v___x_2931_ = lean_nat_dec_lt(v_k_2928_, v___x_2930_);
if (v___x_2931_ == 0)
{
lean_dec(v_k_2928_);
lean_dec_ref(v_resolve_2926_);
return v_s_2929_;
}
else
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v_g_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___y_2938_; lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2932_ = lean_unsigned_to_nat(0u);
v___x_2933_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v_g_2934_ = lean_array_fget_borrowed(v_groups_2927_, v_k_2928_);
v___x_2935_ = lean_unsigned_to_nat(1u);
v___x_2936_ = lean_nat_add(v_k_2928_, v___x_2935_);
lean_dec(v_k_2928_);
v___x_2942_ = lean_array_get_size(v_g_2934_);
v___x_2943_ = lean_nat_dec_eq(v___x_2942_, v___x_2935_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; lean_object* v_snd_2945_; lean_object* v_key_2946_; 
v___x_2944_ = lean_array_get_borrowed(v___x_2933_, v_g_2934_, v___x_2932_);
v_snd_2945_ = lean_ctor_get(v___x_2944_, 1);
v_key_2946_ = lean_ctor_get(v_snd_2945_, 0);
lean_inc(v_key_2946_);
v___y_2938_ = v_key_2946_;
goto v___jp_2937_;
}
else
{
lean_object* v___x_2947_; lean_object* v_fst_2948_; lean_object* v_snd_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2958_; 
v___x_2947_ = lean_array_get(v___x_2933_, v_g_2934_, v___x_2932_);
v_fst_2948_ = lean_ctor_get(v___x_2947_, 0);
v_snd_2949_ = lean_ctor_get(v___x_2947_, 1);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2951_ = v___x_2947_;
v_isShared_2952_ = v_isSharedCheck_2958_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_snd_2949_);
lean_inc(v_fst_2948_);
lean_dec(v___x_2947_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2958_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_fst_2948_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_snd_2949_);
v___x_2954_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; 
v___x_2955_ = lean_array_push(v_s_2929_, v___x_2954_);
v_k_2928_ = v___x_2936_;
v_s_2929_ = v___x_2955_;
goto _start;
}
}
}
v___jp_2937_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; 
lean_inc(v_g_2934_);
lean_inc_ref(v_resolve_2926_);
v___x_2939_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_2926_, v___y_2938_, v_g_2934_);
v___x_2940_ = lean_array_push(v_s_2929_, v___x_2939_);
v_k_2928_ = v___x_2936_;
v_s_2929_ = v___x_2940_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_2959_, lean_object* v_cands_2960_, lean_object* v_sorted_2961_, lean_object* v_idx_2962_, lean_object* v_s_2963_){
_start:
{
lean_object* v___x_2964_; uint8_t v___x_2965_; 
v___x_2964_ = lean_array_get_size(v_sorted_2961_);
v___x_2965_ = lean_nat_dec_lt(v_idx_2962_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_dec(v_idx_2962_);
lean_dec_ref(v_resolve_2959_);
return v_s_2963_;
}
else
{
lean_object* v___x_2966_; lean_object* v_snd_2967_; lean_object* v_fst_2968_; lean_object* v_fst_2969_; lean_object* v_snd_2970_; lean_object* v___x_2971_; lean_object* v_idx_2972_; uint8_t v___x_2973_; 
v___x_2966_ = lean_array_fget_borrowed(v_sorted_2961_, v_idx_2962_);
v_snd_2967_ = lean_ctor_get(v___x_2966_, 1);
v_fst_2968_ = lean_ctor_get(v___x_2966_, 0);
v_fst_2969_ = lean_ctor_get(v_snd_2967_, 0);
v_snd_2970_ = lean_ctor_get(v_snd_2967_, 1);
v___x_2971_ = lean_unsigned_to_nat(1u);
v_idx_2972_ = lean_nat_add(v_idx_2962_, v___x_2971_);
lean_dec(v_idx_2962_);
v___x_2973_ = lean_nat_dec_lt(v_idx_2972_, v___x_2964_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; 
lean_inc(v_snd_2970_);
lean_inc(v_fst_2969_);
v___x_2974_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(v_s_2963_, v_fst_2969_, v_snd_2970_);
v_idx_2962_ = v_idx_2972_;
v_s_2963_ = v___x_2974_;
goto _start;
}
else
{
lean_object* v___x_2976_; lean_object* v_fst_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2999_; 
v___x_2976_ = lean_array_fget(v_sorted_2961_, v_idx_2972_);
v_fst_2977_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_2999_ == 0)
{
lean_object* v_unused_3000_; 
v_unused_3000_ = lean_ctor_get(v___x_2976_, 1);
lean_dec(v_unused_3000_);
v___x_2979_ = v___x_2976_;
v_isShared_2980_ = v_isSharedCheck_2999_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_fst_2977_);
lean_dec(v___x_2976_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2999_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
uint64_t v___x_2981_; uint64_t v___x_2982_; uint8_t v___x_2983_; 
v___x_2981_ = lean_unbox_uint64(v_fst_2977_);
lean_dec(v_fst_2977_);
v___x_2982_ = lean_unbox_uint64(v_fst_2968_);
v___x_2983_ = lean_uint64_dec_eq(v___x_2981_, v___x_2982_);
if (v___x_2983_ == 0)
{
lean_object* v___x_2984_; 
lean_del_object(v___x_2979_);
lean_inc(v_snd_2970_);
lean_inc(v_fst_2969_);
v___x_2984_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(v_s_2963_, v_fst_2969_, v_snd_2970_);
v_idx_2962_ = v_idx_2972_;
v_s_2963_ = v___x_2984_;
goto _start;
}
else
{
lean_object* v___x_2987_; 
lean_inc(v_snd_2970_);
lean_inc(v_fst_2969_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 1, v_snd_2970_);
lean_ctor_set(v___x_2979_, 0, v_fst_2969_);
v___x_2987_ = v___x_2979_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_fst_2969_);
lean_ctor_set(v_reuseFailAlloc_2998_, 1, v_snd_2970_);
v___x_2987_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; uint64_t v___x_2991_; lean_object* v_val_2992_; lean_object* v_fst_2993_; lean_object* v_snd_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2988_ = lean_mk_empty_array_with_capacity(v___x_2971_);
lean_inc_ref(v___x_2988_);
v___x_2989_ = lean_array_push(v___x_2988_, v___x_2987_);
v___x_2990_ = lean_array_push(v___x_2988_, v___x_2989_);
v___x_2991_ = lean_unbox_uint64(v_fst_2968_);
v_val_2992_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2961_, v___x_2991_, v_idx_2972_, v___x_2990_);
v_fst_2993_ = lean_ctor_get(v_val_2992_, 0);
lean_inc(v_fst_2993_);
v_snd_2994_ = lean_ctor_get(v_val_2992_, 1);
lean_inc(v_snd_2994_);
lean_dec_ref(v_val_2992_);
v___x_2995_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_resolve_2959_);
v___x_2996_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_2959_, v_fst_2993_, v___x_2995_, v_s_2963_);
lean_dec(v_fst_2993_);
v_idx_2962_ = v_snd_2994_;
v_s_2963_ = v___x_2996_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_3001_, lean_object* v_cands_3002_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; size_t v_sz_3005_; size_t v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___y_3012_; lean_object* v___y_3013_; uint8_t v___x_3016_; 
v___x_3003_ = lean_unsigned_to_nat(0u);
v___x_3004_ = ((lean_object*)(l_Lean_instInhabitedImportedTree___redArg___closed__0));
v_sz_3005_ = lean_array_size(v_cands_3002_);
v___x_3006_ = ((size_t)0ULL);
v___x_3007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3002_, v_sz_3005_, v___x_3006_, v___x_3003_);
v___x_3008_ = lean_mk_empty_array_with_capacity(v___x_3007_);
lean_dec(v___x_3007_);
v___x_3009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3002_, v_sz_3005_, v___x_3006_, v___x_3008_);
v___x_3010_ = lean_array_get_size(v___x_3009_);
v___x_3016_ = lean_nat_dec_eq(v___x_3010_, v___x_3003_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___y_3020_; uint8_t v___x_3022_; 
v___x_3017_ = lean_unsigned_to_nat(1u);
v___x_3018_ = lean_nat_sub(v___x_3010_, v___x_3017_);
v___x_3022_ = lean_nat_dec_le(v___x_3003_, v___x_3018_);
if (v___x_3022_ == 0)
{
lean_inc(v___x_3018_);
v___y_3020_ = v___x_3018_;
goto v___jp_3019_;
}
else
{
v___y_3020_ = v___x_3003_;
goto v___jp_3019_;
}
v___jp_3019_:
{
uint8_t v___x_3021_; 
v___x_3021_ = lean_nat_dec_le(v___y_3020_, v___x_3018_);
if (v___x_3021_ == 0)
{
lean_dec(v___x_3018_);
lean_inc(v___y_3020_);
v___y_3012_ = v___y_3020_;
v___y_3013_ = v___y_3020_;
goto v___jp_3011_;
}
else
{
v___y_3012_ = v___y_3020_;
v___y_3013_ = v___x_3018_;
goto v___jp_3011_;
}
}
}
else
{
lean_object* v___x_3023_; 
v___x_3023_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3001_, v_cands_3002_, v___x_3009_, v___x_3003_, v___x_3004_);
lean_dec_ref(v___x_3009_);
return v___x_3023_;
}
v___jp_3011_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v___x_3010_, v___x_3009_, v___y_3012_, v___y_3013_);
lean_dec(v___y_3013_);
v___x_3015_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3001_, v_cands_3002_, v___x_3014_, v___x_3003_, v___x_3004_);
lean_dec_ref(v___x_3014_);
return v___x_3015_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_3024_, lean_object* v_cands_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3024_, v_cands_3025_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_3028_, lean_object* v_cands_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3028_, v_cands_3029_);
lean_dec_ref(v_cands_3029_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_3031_, lean_object* v_groups_3032_, lean_object* v_k_3033_, lean_object* v_s_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_3031_, v_groups_3032_, v_k_3033_, v_s_3034_);
lean_dec_ref(v_groups_3032_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_3036_, lean_object* v_cands_3037_, lean_object* v_sorted_3038_, lean_object* v_idx_3039_, lean_object* v_s_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3036_, v_cands_3037_, v_sorted_3038_, v_idx_3039_, v_s_3040_);
lean_dec_ref(v_sorted_3038_);
lean_dec_ref(v_cands_3037_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_3042_, lean_object* v_resolve_3043_, lean_object* v_cands_3044_){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3043_, v_cands_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_3046_, lean_object* v_resolve_3047_, lean_object* v_cands_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_3046_, v_resolve_3047_, v_cands_3048_);
lean_dec_ref(v_cands_3048_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_3050_, lean_object* v_resolve_3051_, lean_object* v_key_3052_, lean_object* v_cands_3053_){
_start:
{
lean_object* v___x_3054_; 
v___x_3054_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3051_, v_key_3052_, v_cands_3053_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_3055_, lean_object* v_resolve_3056_, lean_object* v_cands_3057_, lean_object* v_sorted_3058_, lean_object* v_idx_3059_, lean_object* v_s_3060_){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3056_, v_cands_3057_, v_sorted_3058_, v_idx_3059_, v_s_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_3062_, lean_object* v_resolve_3063_, lean_object* v_cands_3064_, lean_object* v_sorted_3065_, lean_object* v_idx_3066_, lean_object* v_s_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_3062_, v_resolve_3063_, v_cands_3064_, v_sorted_3065_, v_idx_3066_, v_s_3067_);
lean_dec_ref(v_sorted_3065_);
lean_dec_ref(v_cands_3064_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_3069_, lean_object* v_resolve_3070_, lean_object* v_cands_3071_, lean_object* v_groups_3072_, lean_object* v_hgroups_3073_, lean_object* v_k_3074_, lean_object* v_s_3075_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_3070_, v_groups_3072_, v_k_3074_, v_s_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3077_, lean_object* v_resolve_3078_, lean_object* v_cands_3079_, lean_object* v_groups_3080_, lean_object* v_hgroups_3081_, lean_object* v_k_3082_, lean_object* v_s_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_3077_, v_resolve_3078_, v_cands_3079_, v_groups_3080_, v_hgroups_3081_, v_k_3082_, v_s_3083_);
lean_dec_ref(v_groups_3080_);
lean_dec_ref(v_cands_3079_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_3085_, lean_object* v_resolve_3086_){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3087_ = lean_box(0);
v___x_3088_ = lean_box(0);
v___x_3089_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3086_, v___x_3088_, v_trees_3085_);
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3087_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_3091_, lean_object* v_trees_3092_, lean_object* v_resolve_3093_){
_start:
{
lean_object* v___x_3094_; 
v___x_3094_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_3092_, v_resolve_3093_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(lean_object* v_n_3096_, lean_object* v_f_3097_, lean_object* v_a_3098_){
_start:
{
switch(lean_obj_tag(v_a_3098_))
{
case 0:
{
lean_dec_ref(v_f_3097_);
return v_a_3098_;
}
case 1:
{
lean_object* v_key_3099_; lean_object* v_entry_x3f_3100_; lean_object* v_children_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_key_3099_ = lean_ctor_get(v_a_3098_, 0);
v_entry_x3f_3100_ = lean_ctor_get(v_a_3098_, 1);
v_children_3101_ = lean_ctor_get(v_a_3098_, 2);
v___x_3102_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_3103_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0));
v___x_3104_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v___x_3102_, v_children_3101_, v___x_3103_, v_n_3096_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_dec_ref(v_f_3097_);
return v_a_3098_;
}
else
{
lean_object* v_val_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v_val_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_val_3105_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3106_ = lean_array_get_size(v_children_3101_);
v___x_3107_ = lean_nat_dec_lt(v_val_3105_, v___x_3106_);
if (v___x_3107_ == 0)
{
lean_dec(v_val_3105_);
lean_dec_ref(v_f_3097_);
return v_a_3098_;
}
else
{
lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3119_; 
lean_inc_ref(v_children_3101_);
lean_inc(v_entry_x3f_3100_);
lean_inc(v_key_3099_);
v_isSharedCheck_3119_ = !lean_is_exclusive(v_a_3098_);
if (v_isSharedCheck_3119_ == 0)
{
lean_object* v_unused_3120_; lean_object* v_unused_3121_; lean_object* v_unused_3122_; 
v_unused_3120_ = lean_ctor_get(v_a_3098_, 2);
lean_dec(v_unused_3120_);
v_unused_3121_ = lean_ctor_get(v_a_3098_, 1);
lean_dec(v_unused_3121_);
v_unused_3122_ = lean_ctor_get(v_a_3098_, 0);
lean_dec(v_unused_3122_);
v___x_3109_ = v_a_3098_;
v_isShared_3110_ = v_isSharedCheck_3119_;
goto v_resetjp_3108_;
}
else
{
lean_dec(v_a_3098_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3119_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v_v_3111_; lean_object* v___x_3112_; lean_object* v_xs_x27_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3117_; 
v_v_3111_ = lean_array_fget(v_children_3101_, v_val_3105_);
v___x_3112_ = lean_box(0);
v_xs_x27_3113_ = lean_array_fset(v_children_3101_, v_val_3105_, v___x_3112_);
v___x_3114_ = lean_apply_1(v_f_3097_, v_v_3111_);
v___x_3115_ = lean_array_fset(v_xs_x27_3113_, v_val_3105_, v___x_3114_);
lean_dec(v_val_3105_);
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 2, v___x_3115_);
v___x_3117_ = v___x_3109_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_key_3099_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v_entry_x3f_3100_);
lean_ctor_set(v_reuseFailAlloc_3118_, 2, v___x_3115_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
}
default: 
{
lean_object* v_key_3123_; lean_object* v_entry_x3f_3124_; lean_object* v_children_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3134_; 
v_key_3123_ = lean_ctor_get(v_a_3098_, 0);
v_entry_x3f_3124_ = lean_ctor_get(v_a_3098_, 1);
v_children_3125_ = lean_ctor_get(v_a_3098_, 2);
v_isSharedCheck_3134_ = !lean_is_exclusive(v_a_3098_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3127_ = v_a_3098_;
v_isShared_3128_ = v_isSharedCheck_3134_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_children_3125_);
lean_inc(v_entry_x3f_3124_);
lean_inc(v_key_3123_);
lean_dec(v_a_3098_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3134_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3129_ = lean_thunk_get_own(v_children_3125_);
lean_dec_ref(v_children_3125_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 1);
lean_ctor_set(v___x_3127_, 2, v___x_3129_);
v___x_3131_ = v___x_3127_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_key_3123_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_entry_x3f_3124_);
lean_ctor_set(v_reuseFailAlloc_3133_, 2, v___x_3129_);
v___x_3131_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
v_a_3098_ = v___x_3131_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_3135_, lean_object* v_f_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(v_n_3135_, v_f_3136_, v_a_3137_);
lean_dec(v_n_3135_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(lean_object* v_00_u03b1_3139_, lean_object* v_n_3140_, lean_object* v_f_3141_, lean_object* v_a_3142_){
_start:
{
lean_object* v___x_3143_; 
v___x_3143_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(v_n_3140_, v_f_3141_, v_a_3142_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_3144_, lean_object* v_n_3145_, lean_object* v_f_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(v_00_u03b1_3144_, v_n_3145_, v_f_3146_, v_a_3147_);
lean_dec(v_n_3145_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(lean_object* v_t_3149_, lean_object* v_n_3150_, lean_object* v_f_3151_){
_start:
{
if (lean_obj_tag(v_n_3150_) == 0)
{
lean_object* v___x_3152_; 
v___x_3152_ = lean_apply_1(v_f_3151_, v_t_3149_);
return v___x_3152_;
}
else
{
lean_object* v_pre_3153_; lean_object* v___x_3154_; 
v_pre_3153_ = lean_ctor_get(v_n_3150_, 0);
lean_inc(v_pre_3153_);
v___x_3154_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_3154_, 0, lean_box(0));
lean_closure_set(v___x_3154_, 1, v_n_3150_);
lean_closure_set(v___x_3154_, 2, v_f_3151_);
v_n_3150_ = v_pre_3153_;
v_f_3151_ = v___x_3154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt(lean_object* v_00_u03b1_3156_, lean_object* v_t_3157_, lean_object* v_n_3158_, lean_object* v_f_3159_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(v_t_3157_, v_n_3158_, v_f_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2(lean_object* v___f_3161_, lean_object* v_____x_3162_){
_start:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = lean_box(0);
v___x_3164_ = lean_apply_2(v___f_3161_, v___x_3163_, v_____x_3162_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(lean_object* v_toApplicative_3165_, lean_object* v_children_3166_, lean_object* v_inst_3167_, lean_object* v___f_3168_, lean_object* v_____r_3169_, lean_object* v_s_3170_){
_start:
{
lean_object* v_toPure_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v_toPure_3171_ = lean_ctor_get(v_toApplicative_3165_, 1);
lean_inc(v_toPure_3171_);
lean_dec_ref(v_toApplicative_3165_);
v___x_3172_ = lean_thunk_get_own(v_children_3166_);
v___x_3173_ = lean_unsigned_to_nat(0u);
v___x_3174_ = lean_array_get_size(v___x_3172_);
v___x_3175_ = lean_nat_dec_lt(v___x_3173_, v___x_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; 
lean_dec(v___x_3172_);
lean_dec(v___f_3168_);
lean_dec_ref(v_inst_3167_);
v___x_3176_ = lean_apply_2(v_toPure_3171_, lean_box(0), v_s_3170_);
return v___x_3176_;
}
else
{
size_t v___x_3177_; size_t v___x_3178_; lean_object* v___x_3179_; 
lean_dec(v_toPure_3171_);
v___x_3177_ = ((size_t)0ULL);
v___x_3178_ = lean_usize_of_nat(v___x_3174_);
v___x_3179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3167_, v___f_3168_, v___x_3172_, v___x_3177_, v___x_3178_, v_s_3170_);
return v___x_3179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed(lean_object* v_toApplicative_3180_, lean_object* v_children_3181_, lean_object* v_inst_3182_, lean_object* v___f_3183_, lean_object* v_____r_3184_, lean_object* v_s_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3180_, v_children_3181_, v_inst_3182_, v___f_3183_, v_____r_3184_, v_s_3185_);
lean_dec_ref(v_children_3181_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(lean_object* v_toApplicative_3187_, lean_object* v_children_3188_, lean_object* v_inst_3189_, lean_object* v___f_3190_, lean_object* v_____r_3191_, lean_object* v_s_3192_){
_start:
{
lean_object* v_toPure_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; uint8_t v___x_3196_; 
v_toPure_3193_ = lean_ctor_get(v_toApplicative_3187_, 1);
lean_inc(v_toPure_3193_);
lean_dec_ref(v_toApplicative_3187_);
v___x_3194_ = lean_unsigned_to_nat(0u);
v___x_3195_ = lean_array_get_size(v_children_3188_);
v___x_3196_ = lean_nat_dec_lt(v___x_3194_, v___x_3195_);
if (v___x_3196_ == 0)
{
lean_object* v___x_3197_; 
lean_dec(v___f_3190_);
lean_dec_ref(v_inst_3189_);
lean_dec_ref(v_children_3188_);
v___x_3197_ = lean_apply_2(v_toPure_3193_, lean_box(0), v_s_3192_);
return v___x_3197_;
}
else
{
size_t v___x_3198_; size_t v___x_3199_; lean_object* v___x_3200_; 
lean_dec(v_toPure_3193_);
v___x_3198_ = ((size_t)0ULL);
v___x_3199_ = lean_usize_of_nat(v___x_3195_);
v___x_3200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3189_, v___f_3190_, v_children_3188_, v___x_3198_, v___x_3199_, v_s_3192_);
return v___x_3200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(lean_object* v_inst_3201_, lean_object* v_t_3202_, lean_object* v_f_3203_, lean_object* v_init_3204_){
_start:
{
switch(lean_obj_tag(v_t_3202_))
{
case 0:
{
lean_object* v_tree_3205_; lean_object* v___x_3206_; 
v_tree_3205_ = lean_ctor_get(v_t_3202_, 1);
lean_inc_ref(v_tree_3205_);
lean_dec_ref_known(v_t_3202_, 2);
v___x_3206_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_3201_, v_tree_3205_, v_f_3203_, v_init_3204_);
return v___x_3206_;
}
case 1:
{
lean_object* v_toApplicative_3207_; lean_object* v_toBind_3208_; lean_object* v_key_3209_; lean_object* v_entry_x3f_3210_; lean_object* v_children_3211_; lean_object* v___f_3212_; lean_object* v___f_3213_; 
v_toApplicative_3207_ = lean_ctor_get(v_inst_3201_, 0);
lean_inc_ref_n(v_toApplicative_3207_, 2);
v_toBind_3208_ = lean_ctor_get(v_inst_3201_, 1);
v_key_3209_ = lean_ctor_get(v_t_3202_, 0);
lean_inc(v_key_3209_);
v_entry_x3f_3210_ = lean_ctor_get(v_t_3202_, 1);
lean_inc(v_entry_x3f_3210_);
v_children_3211_ = lean_ctor_get(v_t_3202_, 2);
lean_inc_ref_n(v_children_3211_, 2);
lean_dec_ref_known(v_t_3202_, 3);
lean_inc(v_f_3203_);
lean_inc_ref_n(v_inst_3201_, 2);
v___f_3212_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_3212_, 0, v_inst_3201_);
lean_closure_set(v___f_3212_, 1, v_f_3203_);
lean_inc_ref(v___f_3212_);
v___f_3213_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3213_, 0, v_toApplicative_3207_);
lean_closure_set(v___f_3213_, 1, v_children_3211_);
lean_closure_set(v___f_3213_, 2, v_inst_3201_);
lean_closure_set(v___f_3213_, 3, v___f_3212_);
if (lean_obj_tag(v_entry_x3f_3210_) == 1)
{
lean_object* v_val_3214_; lean_object* v_fst_3215_; lean_object* v___f_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
lean_inc(v_toBind_3208_);
lean_dec_ref(v___f_3212_);
lean_dec_ref(v_children_3211_);
lean_dec_ref(v_toApplicative_3207_);
lean_dec_ref(v_inst_3201_);
v_val_3214_ = lean_ctor_get(v_entry_x3f_3210_, 0);
lean_inc(v_val_3214_);
lean_dec_ref_known(v_entry_x3f_3210_, 1);
v_fst_3215_ = lean_ctor_get(v_val_3214_, 0);
lean_inc(v_fst_3215_);
lean_dec(v_val_3214_);
v___f_3216_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3216_, 0, v___f_3213_);
v___x_3217_ = lean_apply_3(v_f_3203_, v_init_3204_, v_key_3209_, v_fst_3215_);
v___x_3218_ = lean_apply_4(v_toBind_3208_, lean_box(0), lean_box(0), v___x_3217_, v___f_3216_);
return v___x_3218_;
}
else
{
lean_object* v___x_3219_; lean_object* v___x_3220_; 
lean_dec_ref(v___f_3213_);
lean_dec(v_entry_x3f_3210_);
lean_dec(v_key_3209_);
lean_dec(v_f_3203_);
v___x_3219_ = lean_box(0);
v___x_3220_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(v_toApplicative_3207_, v_children_3211_, v_inst_3201_, v___f_3212_, v___x_3219_, v_init_3204_);
return v___x_3220_;
}
}
default: 
{
lean_object* v_toApplicative_3221_; lean_object* v_toBind_3222_; lean_object* v_key_3223_; lean_object* v_entry_x3f_3224_; lean_object* v_children_3225_; lean_object* v___f_3226_; lean_object* v___f_3227_; 
v_toApplicative_3221_ = lean_ctor_get(v_inst_3201_, 0);
lean_inc_ref_n(v_toApplicative_3221_, 2);
v_toBind_3222_ = lean_ctor_get(v_inst_3201_, 1);
v_key_3223_ = lean_ctor_get(v_t_3202_, 0);
lean_inc(v_key_3223_);
v_entry_x3f_3224_ = lean_ctor_get(v_t_3202_, 1);
lean_inc(v_entry_x3f_3224_);
v_children_3225_ = lean_ctor_get(v_t_3202_, 2);
lean_inc_ref_n(v_children_3225_, 2);
lean_dec_ref_known(v_t_3202_, 3);
lean_inc(v_f_3203_);
lean_inc_ref_n(v_inst_3201_, 2);
v___f_3226_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_3226_, 0, v_inst_3201_);
lean_closure_set(v___f_3226_, 1, v_f_3203_);
lean_inc_ref(v___f_3226_);
v___f_3227_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3227_, 0, v_toApplicative_3221_);
lean_closure_set(v___f_3227_, 1, v_children_3225_);
lean_closure_set(v___f_3227_, 2, v_inst_3201_);
lean_closure_set(v___f_3227_, 3, v___f_3226_);
if (lean_obj_tag(v_entry_x3f_3224_) == 1)
{
lean_object* v_val_3228_; lean_object* v_fst_3229_; lean_object* v___f_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
lean_inc(v_toBind_3222_);
lean_dec_ref(v___f_3226_);
lean_dec_ref(v_children_3225_);
lean_dec_ref(v_toApplicative_3221_);
lean_dec_ref(v_inst_3201_);
v_val_3228_ = lean_ctor_get(v_entry_x3f_3224_, 0);
lean_inc(v_val_3228_);
lean_dec_ref_known(v_entry_x3f_3224_, 1);
v_fst_3229_ = lean_ctor_get(v_val_3228_, 0);
lean_inc(v_fst_3229_);
lean_dec(v_val_3228_);
v___f_3230_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3230_, 0, v___f_3227_);
v___x_3231_ = lean_apply_3(v_f_3203_, v_init_3204_, v_key_3223_, v_fst_3229_);
v___x_3232_ = lean_apply_4(v_toBind_3222_, lean_box(0), lean_box(0), v___x_3231_, v___f_3230_);
return v___x_3232_;
}
else
{
lean_object* v___x_3233_; lean_object* v___x_3234_; 
lean_dec_ref(v___f_3227_);
lean_dec(v_entry_x3f_3224_);
lean_dec(v_key_3223_);
lean_dec(v_f_3203_);
v___x_3233_ = lean_box(0);
v___x_3234_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3221_, v_children_3225_, v_inst_3201_, v___f_3226_, v___x_3233_, v_init_3204_);
lean_dec_ref(v_children_3225_);
return v___x_3234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0(lean_object* v_inst_3235_, lean_object* v_f_3236_, lean_object* v_s_3237_, lean_object* v_c_3238_){
_start:
{
lean_object* v___x_3239_; 
v___x_3239_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3235_, v_c_3238_, v_f_3236_, v_s_3237_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM(lean_object* v_m_3240_, lean_object* v_00_u03b1_3241_, lean_object* v_00_u03c3_3242_, lean_object* v_inst_3243_, lean_object* v_t_3244_, lean_object* v_f_3245_, lean_object* v_init_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3243_, v_t_3244_, v_f_3245_, v_init_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_3248_, lean_object* v_f_3249_, lean_object* v_s_3250_, lean_object* v_n_3251_, lean_object* v_v_3252_){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3253_, 0, v_v_3252_);
lean_ctor_set(v___x_3253_, 1, v_modIdx_3248_);
v___x_3254_ = lean_apply_3(v_f_3249_, v_s_3250_, v_n_3251_, v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(lean_object* v_inst_3255_, lean_object* v_t_3256_, lean_object* v_f_3257_, lean_object* v_init_3258_){
_start:
{
switch(lean_obj_tag(v_t_3256_))
{
case 0:
{
lean_object* v_modIdx_3259_; lean_object* v_tree_3260_; lean_object* v___f_3261_; lean_object* v___x_3262_; 
v_modIdx_3259_ = lean_ctor_get(v_t_3256_, 0);
lean_inc(v_modIdx_3259_);
v_tree_3260_ = lean_ctor_get(v_t_3256_, 1);
lean_inc_ref(v_tree_3260_);
lean_dec_ref_known(v_t_3256_, 2);
v___f_3261_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_3261_, 0, v_modIdx_3259_);
lean_closure_set(v___f_3261_, 1, v_f_3257_);
v___x_3262_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_3255_, v_tree_3260_, v___f_3261_, v_init_3258_);
return v___x_3262_;
}
case 1:
{
lean_object* v_toApplicative_3263_; lean_object* v_toBind_3264_; lean_object* v_key_3265_; lean_object* v_entry_x3f_3266_; lean_object* v_children_3267_; lean_object* v___f_3268_; lean_object* v___f_3269_; 
v_toApplicative_3263_ = lean_ctor_get(v_inst_3255_, 0);
lean_inc_ref_n(v_toApplicative_3263_, 2);
v_toBind_3264_ = lean_ctor_get(v_inst_3255_, 1);
v_key_3265_ = lean_ctor_get(v_t_3256_, 0);
lean_inc(v_key_3265_);
v_entry_x3f_3266_ = lean_ctor_get(v_t_3256_, 1);
lean_inc(v_entry_x3f_3266_);
v_children_3267_ = lean_ctor_get(v_t_3256_, 2);
lean_inc_ref_n(v_children_3267_, 2);
lean_dec_ref_known(v_t_3256_, 3);
lean_inc(v_f_3257_);
lean_inc_ref_n(v_inst_3255_, 2);
v___f_3268_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_3268_, 0, v_inst_3255_);
lean_closure_set(v___f_3268_, 1, v_f_3257_);
lean_inc_ref(v___f_3268_);
v___f_3269_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3269_, 0, v_toApplicative_3263_);
lean_closure_set(v___f_3269_, 1, v_children_3267_);
lean_closure_set(v___f_3269_, 2, v_inst_3255_);
lean_closure_set(v___f_3269_, 3, v___f_3268_);
if (lean_obj_tag(v_entry_x3f_3266_) == 1)
{
lean_object* v_val_3270_; lean_object* v___f_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
lean_inc(v_toBind_3264_);
lean_dec_ref(v___f_3268_);
lean_dec_ref(v_children_3267_);
lean_dec_ref(v_toApplicative_3263_);
lean_dec_ref(v_inst_3255_);
v_val_3270_ = lean_ctor_get(v_entry_x3f_3266_, 0);
lean_inc(v_val_3270_);
lean_dec_ref_known(v_entry_x3f_3266_, 1);
v___f_3271_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3271_, 0, v___f_3269_);
v___x_3272_ = lean_apply_3(v_f_3257_, v_init_3258_, v_key_3265_, v_val_3270_);
v___x_3273_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3272_, v___f_3271_);
return v___x_3273_;
}
else
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec_ref(v___f_3269_);
lean_dec(v_entry_x3f_3266_);
lean_dec(v_key_3265_);
lean_dec(v_f_3257_);
v___x_3274_ = lean_box(0);
v___x_3275_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(v_toApplicative_3263_, v_children_3267_, v_inst_3255_, v___f_3268_, v___x_3274_, v_init_3258_);
return v___x_3275_;
}
}
default: 
{
lean_object* v_toApplicative_3276_; lean_object* v_toBind_3277_; lean_object* v_key_3278_; lean_object* v_entry_x3f_3279_; lean_object* v_children_3280_; lean_object* v___f_3281_; lean_object* v___f_3282_; 
v_toApplicative_3276_ = lean_ctor_get(v_inst_3255_, 0);
lean_inc_ref_n(v_toApplicative_3276_, 2);
v_toBind_3277_ = lean_ctor_get(v_inst_3255_, 1);
v_key_3278_ = lean_ctor_get(v_t_3256_, 0);
lean_inc(v_key_3278_);
v_entry_x3f_3279_ = lean_ctor_get(v_t_3256_, 1);
lean_inc(v_entry_x3f_3279_);
v_children_3280_ = lean_ctor_get(v_t_3256_, 2);
lean_inc_ref_n(v_children_3280_, 2);
lean_dec_ref_known(v_t_3256_, 3);
lean_inc(v_f_3257_);
lean_inc_ref_n(v_inst_3255_, 2);
v___f_3281_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_3281_, 0, v_inst_3255_);
lean_closure_set(v___f_3281_, 1, v_f_3257_);
lean_inc_ref(v___f_3281_);
v___f_3282_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3282_, 0, v_toApplicative_3276_);
lean_closure_set(v___f_3282_, 1, v_children_3280_);
lean_closure_set(v___f_3282_, 2, v_inst_3255_);
lean_closure_set(v___f_3282_, 3, v___f_3281_);
if (lean_obj_tag(v_entry_x3f_3279_) == 1)
{
lean_object* v_val_3283_; lean_object* v___f_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
lean_inc(v_toBind_3277_);
lean_dec_ref(v___f_3281_);
lean_dec_ref(v_children_3280_);
lean_dec_ref(v_toApplicative_3276_);
lean_dec_ref(v_inst_3255_);
v_val_3283_ = lean_ctor_get(v_entry_x3f_3279_, 0);
lean_inc(v_val_3283_);
lean_dec_ref_known(v_entry_x3f_3279_, 1);
v___f_3284_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3284_, 0, v___f_3282_);
v___x_3285_ = lean_apply_3(v_f_3257_, v_init_3258_, v_key_3278_, v_val_3283_);
v___x_3286_ = lean_apply_4(v_toBind_3277_, lean_box(0), lean_box(0), v___x_3285_, v___f_3284_);
return v___x_3286_;
}
else
{
lean_object* v___x_3287_; lean_object* v___x_3288_; 
lean_dec_ref(v___f_3282_);
lean_dec(v_entry_x3f_3279_);
lean_dec(v_key_3278_);
lean_dec(v_f_3257_);
v___x_3287_ = lean_box(0);
v___x_3288_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3276_, v_children_3280_, v_inst_3255_, v___f_3281_, v___x_3287_, v_init_3258_);
lean_dec_ref(v_children_3280_);
return v___x_3288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1(lean_object* v_inst_3289_, lean_object* v_f_3290_, lean_object* v_s_3291_, lean_object* v_c_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3289_, v_c_3292_, v_f_3290_, v_s_3291_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM(lean_object* v_m_3294_, lean_object* v_00_u03b1_3295_, lean_object* v_00_u03c3_3296_, lean_object* v_inst_3297_, lean_object* v_t_3298_, lean_object* v_f_3299_, lean_object* v_init_3300_){
_start:
{
lean_object* v___x_3301_; 
v___x_3301_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3297_, v_t_3298_, v_f_3299_, v_init_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_3302_, lean_object* v_n_3303_, lean_object* v_f_3304_){
_start:
{
lean_object* v_tree_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3314_; 
v_tree_3305_ = lean_ctor_get(v_t_3302_, 1);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_t_3302_);
if (v_isSharedCheck_3314_ == 0)
{
lean_object* v_unused_3315_; 
v_unused_3315_ = lean_ctor_get(v_t_3302_, 0);
lean_dec(v_unused_3315_);
v___x_3307_ = v_t_3302_;
v_isShared_3308_ = v_isSharedCheck_3314_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_tree_3305_);
lean_dec(v_t_3302_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3314_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3312_; 
v___x_3309_ = lean_box(0);
v___x_3310_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(v_tree_3305_, v_n_3303_, v_f_3304_);
if (v_isShared_3308_ == 0)
{
lean_ctor_set(v___x_3307_, 1, v___x_3310_);
lean_ctor_set(v___x_3307_, 0, v___x_3309_);
v___x_3312_ = v___x_3307_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3309_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v___x_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_3316_, lean_object* v_t_3317_, lean_object* v_n_3318_, lean_object* v_f_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_3317_, v_n_3318_, v_f_3319_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_3321_, lean_object* v_t_3322_, lean_object* v_f_3323_, lean_object* v_init_3324_){
_start:
{
lean_object* v_tree_3325_; lean_object* v___x_3326_; 
v_tree_3325_ = lean_ctor_get(v_t_3322_, 1);
lean_inc_ref(v_tree_3325_);
lean_dec_ref(v_t_3322_);
v___x_3326_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3321_, v_tree_3325_, v_f_3323_, v_init_3324_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_3327_, lean_object* v_00_u03b1_3328_, lean_object* v_00_u03c3_3329_, lean_object* v_inst_3330_, lean_object* v_t_3331_, lean_object* v_f_3332_, lean_object* v_init_3333_){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3330_, v_t_3331_, v_f_3332_, v_init_3333_);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3335_, lean_object* v_f_3336_, lean_object* v_init_3337_){
_start:
{
switch(lean_obj_tag(v_t_3335_))
{
case 0:
{
lean_object* v_key_3338_; lean_object* v_val_3339_; lean_object* v___x_3340_; 
v_key_3338_ = lean_ctor_get(v_t_3335_, 0);
lean_inc(v_key_3338_);
v_val_3339_ = lean_ctor_get(v_t_3335_, 1);
lean_inc(v_val_3339_);
lean_dec_ref_known(v_t_3335_, 2);
v___x_3340_ = lean_apply_3(v_f_3336_, v_init_3337_, v_key_3338_, v_val_3339_);
return v___x_3340_;
}
case 1:
{
lean_object* v_children_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; uint8_t v___x_3344_; 
v_children_3341_ = lean_ctor_get(v_t_3335_, 1);
lean_inc_ref(v_children_3341_);
lean_dec_ref_known(v_t_3335_, 2);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = lean_array_get_size(v_children_3341_);
v___x_3344_ = lean_nat_dec_lt(v___x_3342_, v___x_3343_);
if (v___x_3344_ == 0)
{
lean_dec_ref(v_children_3341_);
lean_dec(v_f_3336_);
return v_init_3337_;
}
else
{
size_t v___x_3345_; size_t v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = ((size_t)0ULL);
v___x_3346_ = lean_usize_of_nat(v___x_3343_);
v___x_3347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3336_, v_children_3341_, v___x_3345_, v___x_3346_, v_init_3337_);
lean_dec_ref(v_children_3341_);
return v___x_3347_;
}
}
default: 
{
lean_object* v_key_3348_; lean_object* v_val_3349_; lean_object* v_children_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; uint8_t v___x_3354_; 
v_key_3348_ = lean_ctor_get(v_t_3335_, 0);
lean_inc(v_key_3348_);
v_val_3349_ = lean_ctor_get(v_t_3335_, 1);
lean_inc(v_val_3349_);
v_children_3350_ = lean_ctor_get(v_t_3335_, 2);
lean_inc_ref(v_children_3350_);
lean_dec_ref_known(v_t_3335_, 3);
lean_inc(v_f_3336_);
v___x_3351_ = lean_apply_3(v_f_3336_, v_init_3337_, v_key_3348_, v_val_3349_);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = lean_array_get_size(v_children_3350_);
v___x_3354_ = lean_nat_dec_lt(v___x_3352_, v___x_3353_);
if (v___x_3354_ == 0)
{
lean_dec_ref(v_children_3350_);
lean_dec(v_f_3336_);
return v___x_3351_;
}
else
{
size_t v___x_3355_; size_t v___x_3356_; lean_object* v___x_3357_; 
v___x_3355_ = ((size_t)0ULL);
v___x_3356_ = lean_usize_of_nat(v___x_3353_);
v___x_3357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3336_, v_children_3350_, v___x_3355_, v___x_3356_, v___x_3351_);
lean_dec_ref(v_children_3350_);
return v___x_3357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_3358_, lean_object* v_as_3359_, size_t v_i_3360_, size_t v_stop_3361_, lean_object* v_b_3362_){
_start:
{
uint8_t v___x_3363_; 
v___x_3363_ = lean_usize_dec_eq(v_i_3360_, v_stop_3361_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; lean_object* v___x_3365_; size_t v___x_3366_; size_t v___x_3367_; 
v___x_3364_ = lean_array_uget_borrowed(v_as_3359_, v_i_3360_);
lean_inc(v_f_3358_);
lean_inc(v___x_3364_);
v___x_3365_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v___x_3364_, v_f_3358_, v_b_3362_);
v___x_3366_ = ((size_t)1ULL);
v___x_3367_ = lean_usize_add(v_i_3360_, v___x_3366_);
v_i_3360_ = v___x_3367_;
v_b_3362_ = v___x_3365_;
goto _start;
}
else
{
lean_dec(v_f_3358_);
return v_b_3362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_3369_, lean_object* v_as_3370_, lean_object* v_i_3371_, lean_object* v_stop_3372_, lean_object* v_b_3373_){
_start:
{
size_t v_i_boxed_3374_; size_t v_stop_boxed_3375_; lean_object* v_res_3376_; 
v_i_boxed_3374_ = lean_unbox_usize(v_i_3371_);
lean_dec(v_i_3371_);
v_stop_boxed_3375_ = lean_unbox_usize(v_stop_3372_);
lean_dec(v_stop_3372_);
v_res_3376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3369_, v_as_3370_, v_i_boxed_3374_, v_stop_boxed_3375_, v_b_3373_);
lean_dec_ref(v_as_3370_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_3377_, lean_object* v_f_3378_, lean_object* v_init_3379_){
_start:
{
switch(lean_obj_tag(v_t_3377_))
{
case 0:
{
lean_object* v_tree_3380_; lean_object* v___x_3381_; 
v_tree_3380_ = lean_ctor_get(v_t_3377_, 1);
lean_inc_ref(v_tree_3380_);
lean_dec_ref_known(v_t_3377_, 2);
v___x_3381_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_tree_3380_, v_f_3378_, v_init_3379_);
return v___x_3381_;
}
case 1:
{
lean_object* v_key_3382_; lean_object* v_entry_x3f_3383_; lean_object* v_children_3384_; lean_object* v_s_3386_; 
v_key_3382_ = lean_ctor_get(v_t_3377_, 0);
lean_inc(v_key_3382_);
v_entry_x3f_3383_ = lean_ctor_get(v_t_3377_, 1);
lean_inc(v_entry_x3f_3383_);
v_children_3384_ = lean_ctor_get(v_t_3377_, 2);
lean_inc_ref(v_children_3384_);
lean_dec_ref_known(v_t_3377_, 3);
if (lean_obj_tag(v_entry_x3f_3383_) == 1)
{
lean_object* v_val_3393_; lean_object* v_fst_3394_; lean_object* v___x_3395_; 
v_val_3393_ = lean_ctor_get(v_entry_x3f_3383_, 0);
lean_inc(v_val_3393_);
lean_dec_ref_known(v_entry_x3f_3383_, 1);
v_fst_3394_ = lean_ctor_get(v_val_3393_, 0);
lean_inc(v_fst_3394_);
lean_dec(v_val_3393_);
lean_inc(v_f_3378_);
v___x_3395_ = lean_apply_3(v_f_3378_, v_init_3379_, v_key_3382_, v_fst_3394_);
v_s_3386_ = v___x_3395_;
goto v___jp_3385_;
}
else
{
lean_dec(v_entry_x3f_3383_);
lean_dec(v_key_3382_);
v_s_3386_ = v_init_3379_;
goto v___jp_3385_;
}
v___jp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; uint8_t v___x_3389_; 
v___x_3387_ = lean_unsigned_to_nat(0u);
v___x_3388_ = lean_array_get_size(v_children_3384_);
v___x_3389_ = lean_nat_dec_lt(v___x_3387_, v___x_3388_);
if (v___x_3389_ == 0)
{
lean_dec_ref(v_children_3384_);
lean_dec(v_f_3378_);
return v_s_3386_;
}
else
{
size_t v___x_3390_; size_t v___x_3391_; lean_object* v___x_3392_; 
v___x_3390_ = ((size_t)0ULL);
v___x_3391_ = lean_usize_of_nat(v___x_3388_);
v___x_3392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3378_, v_children_3384_, v___x_3390_, v___x_3391_, v_s_3386_);
lean_dec_ref(v_children_3384_);
return v___x_3392_;
}
}
}
default: 
{
lean_object* v_key_3396_; lean_object* v_entry_x3f_3397_; lean_object* v_children_3398_; lean_object* v_s_3400_; 
v_key_3396_ = lean_ctor_get(v_t_3377_, 0);
lean_inc(v_key_3396_);
v_entry_x3f_3397_ = lean_ctor_get(v_t_3377_, 1);
lean_inc(v_entry_x3f_3397_);
v_children_3398_ = lean_ctor_get(v_t_3377_, 2);
lean_inc_ref(v_children_3398_);
lean_dec_ref_known(v_t_3377_, 3);
if (lean_obj_tag(v_entry_x3f_3397_) == 1)
{
lean_object* v_val_3408_; lean_object* v_fst_3409_; lean_object* v___x_3410_; 
v_val_3408_ = lean_ctor_get(v_entry_x3f_3397_, 0);
lean_inc(v_val_3408_);
lean_dec_ref_known(v_entry_x3f_3397_, 1);
v_fst_3409_ = lean_ctor_get(v_val_3408_, 0);
lean_inc(v_fst_3409_);
lean_dec(v_val_3408_);
lean_inc(v_f_3378_);
v___x_3410_ = lean_apply_3(v_f_3378_, v_init_3379_, v_key_3396_, v_fst_3409_);
v_s_3400_ = v___x_3410_;
goto v___jp_3399_;
}
else
{
lean_dec(v_entry_x3f_3397_);
lean_dec(v_key_3396_);
v_s_3400_ = v_init_3379_;
goto v___jp_3399_;
}
v___jp_3399_:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; uint8_t v___x_3404_; 
v___x_3401_ = lean_thunk_get_own(v_children_3398_);
lean_dec_ref(v_children_3398_);
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = lean_array_get_size(v___x_3401_);
v___x_3404_ = lean_nat_dec_lt(v___x_3402_, v___x_3403_);
if (v___x_3404_ == 0)
{
lean_dec(v___x_3401_);
lean_dec(v_f_3378_);
return v_s_3400_;
}
else
{
size_t v___x_3405_; size_t v___x_3406_; lean_object* v___x_3407_; 
v___x_3405_ = ((size_t)0ULL);
v___x_3406_ = lean_usize_of_nat(v___x_3403_);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3378_, v___x_3401_, v___x_3405_, v___x_3406_, v_s_3400_);
lean_dec(v___x_3401_);
return v___x_3407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object* v_f_3411_, lean_object* v_as_3412_, size_t v_i_3413_, size_t v_stop_3414_, lean_object* v_b_3415_){
_start:
{
uint8_t v___x_3416_; 
v___x_3416_ = lean_usize_dec_eq(v_i_3413_, v_stop_3414_);
if (v___x_3416_ == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3418_; size_t v___x_3419_; size_t v___x_3420_; 
v___x_3417_ = lean_array_uget_borrowed(v_as_3412_, v_i_3413_);
lean_inc(v_f_3411_);
lean_inc(v___x_3417_);
v___x_3418_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_3417_, v_f_3411_, v_b_3415_);
v___x_3419_ = ((size_t)1ULL);
v___x_3420_ = lean_usize_add(v_i_3413_, v___x_3419_);
v_i_3413_ = v___x_3420_;
v_b_3415_ = v___x_3418_;
goto _start;
}
else
{
lean_dec(v_f_3411_);
return v_b_3415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_3422_, lean_object* v_as_3423_, lean_object* v_i_3424_, lean_object* v_stop_3425_, lean_object* v_b_3426_){
_start:
{
size_t v_i_boxed_3427_; size_t v_stop_boxed_3428_; lean_object* v_res_3429_; 
v_i_boxed_3427_ = lean_unbox_usize(v_i_3424_);
lean_dec(v_i_3424_);
v_stop_boxed_3428_ = lean_unbox_usize(v_stop_3425_);
lean_dec(v_stop_3425_);
v_res_3429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3422_, v_as_3423_, v_i_boxed_3427_, v_stop_boxed_3428_, v_b_3426_);
lean_dec_ref(v_as_3423_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_3430_, lean_object* v_f_3431_, lean_object* v_init_3432_){
_start:
{
lean_object* v_tree_3433_; lean_object* v___x_3434_; 
v_tree_3433_ = lean_ctor_get(v_t_3430_, 1);
lean_inc_ref(v_tree_3433_);
lean_dec_ref(v_t_3430_);
v___x_3434_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_3433_, v_f_3431_, v_init_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_3435_, lean_object* v_f_3436_, lean_object* v_init_3437_){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3435_, v_f_3436_, v_init_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_3439_, lean_object* v_00_u03c3_3440_, lean_object* v_t_3441_, lean_object* v_f_3442_, lean_object* v_init_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3441_, v_f_3442_, v_init_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_3445_, lean_object* v_00_u03c3_3446_, lean_object* v_t_3447_, lean_object* v_f_3448_, lean_object* v_init_3449_){
_start:
{
lean_object* v___x_3450_; 
v___x_3450_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3447_, v_f_3448_, v_init_3449_);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_3451_, lean_object* v_00_u03c3_3452_, lean_object* v_t_3453_, lean_object* v_f_3454_, lean_object* v_init_3455_){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_3453_, v_f_3454_, v_init_3455_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3457_, lean_object* v_00_u03c3_3458_, lean_object* v_t_3459_, lean_object* v_f_3460_, lean_object* v_init_3461_){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_t_3459_, v_f_3460_, v_init_3461_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3463_, lean_object* v_00_u03c3_3464_, lean_object* v_f_3465_, lean_object* v_as_3466_, size_t v_i_3467_, size_t v_stop_3468_, lean_object* v_b_3469_){
_start:
{
lean_object* v___x_3470_; 
v___x_3470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3465_, v_as_3466_, v_i_3467_, v_stop_3468_, v_b_3469_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3471_, lean_object* v_00_u03c3_3472_, lean_object* v_f_3473_, lean_object* v_as_3474_, lean_object* v_i_3475_, lean_object* v_stop_3476_, lean_object* v_b_3477_){
_start:
{
size_t v_i_boxed_3478_; size_t v_stop_boxed_3479_; lean_object* v_res_3480_; 
v_i_boxed_3478_ = lean_unbox_usize(v_i_3475_);
lean_dec(v_i_3475_);
v_stop_boxed_3479_ = lean_unbox_usize(v_stop_3476_);
lean_dec(v_stop_3476_);
v_res_3480_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(v_00_u03b1_3471_, v_00_u03c3_3472_, v_f_3473_, v_as_3474_, v_i_boxed_3478_, v_stop_boxed_3479_, v_b_3477_);
lean_dec_ref(v_as_3474_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3481_, lean_object* v_00_u03c3_3482_, lean_object* v_f_3483_, lean_object* v_as_3484_, size_t v_i_3485_, size_t v_stop_3486_, lean_object* v_b_3487_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3483_, v_as_3484_, v_i_3485_, v_stop_3486_, v_b_3487_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3489_, lean_object* v_00_u03c3_3490_, lean_object* v_f_3491_, lean_object* v_as_3492_, lean_object* v_i_3493_, lean_object* v_stop_3494_, lean_object* v_b_3495_){
_start:
{
size_t v_i_boxed_3496_; size_t v_stop_boxed_3497_; lean_object* v_res_3498_; 
v_i_boxed_3496_ = lean_unbox_usize(v_i_3493_);
lean_dec(v_i_3493_);
v_stop_boxed_3497_ = lean_unbox_usize(v_stop_3494_);
lean_dec(v_stop_3494_);
v_res_3498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3489_, v_00_u03c3_3490_, v_f_3491_, v_as_3492_, v_i_boxed_3496_, v_stop_boxed_3497_, v_b_3495_);
lean_dec_ref(v_as_3492_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_3499_, lean_object* v_t_3500_, lean_object* v_f_3501_, lean_object* v_init_3502_){
_start:
{
lean_object* v_tree_3503_; lean_object* v___x_3504_; 
v_tree_3503_ = lean_ctor_get(v_t_3500_, 1);
lean_inc_ref(v_tree_3503_);
lean_dec_ref(v_t_3500_);
v___x_3504_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3499_, v_tree_3503_, v_f_3501_, v_init_3502_);
return v___x_3504_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_3505_, lean_object* v_00_u03b1_3506_, lean_object* v_00_u03c3_3507_, lean_object* v_inst_3508_, lean_object* v_t_3509_, lean_object* v_f_3510_, lean_object* v_init_3511_){
_start:
{
lean_object* v___x_3512_; 
v___x_3512_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_3508_, v_t_3509_, v_f_3510_, v_init_3511_);
return v___x_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_3513_, lean_object* v_x_3514_, lean_object* v_n_3515_, lean_object* v_v_3516_){
_start:
{
lean_object* v___x_3517_; 
v___x_3517_ = lean_apply_2(v_f_3513_, v_n_3515_, v_v_3516_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_3518_, lean_object* v_t_3519_, lean_object* v_f_3520_){
_start:
{
lean_object* v___f_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___f_3521_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3521_, 0, v_f_3520_);
v___x_3522_ = lean_box(0);
v___x_3523_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3518_, v_t_3519_, v___f_3521_, v___x_3522_);
return v___x_3523_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_3524_, lean_object* v_00_u03b1_3525_, lean_object* v_inst_3526_, lean_object* v_t_3527_, lean_object* v_f_3528_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = l_Lean_ImportedConsts_forM___redArg(v_inst_3526_, v_t_3527_, v_f_3528_);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object* v_n_3530_, lean_object* v_x_3531_, lean_object* v_x_3532_){
_start:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3533_ = lean_unsigned_to_nat(1u);
v___x_3534_ = lean_nat_add(v_n_3530_, v___x_3533_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_n_3535_, lean_object* v_x_3536_, lean_object* v_x_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_n_3535_, v_x_3536_, v_x_3537_);
lean_dec(v_x_3537_);
lean_dec(v_x_3536_);
lean_dec(v_n_3535_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v_n_3539_, lean_object* v_x_3540_, lean_object* v_x_3541_){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_nat_add(v_n_3539_, v___x_3542_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_n_3544_, lean_object* v_x_3545_, lean_object* v_x_3546_){
_start:
{
lean_object* v_res_3547_; 
v_res_3547_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_n_3544_, v_x_3545_, v_x_3546_);
lean_dec(v_x_3546_);
lean_dec(v_x_3545_);
lean_dec(v_n_3544_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3548_, lean_object* v_init_3549_){
_start:
{
switch(lean_obj_tag(v_t_3548_))
{
case 0:
{
lean_object* v_key_3550_; lean_object* v_val_3551_; lean_object* v___x_3552_; 
v_key_3550_ = lean_ctor_get(v_t_3548_, 0);
v_val_3551_ = lean_ctor_get(v_t_3548_, 1);
v___x_3552_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3549_, v_key_3550_, v_val_3551_);
lean_dec(v_init_3549_);
return v___x_3552_;
}
case 1:
{
lean_object* v_children_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; uint8_t v___x_3556_; 
v_children_3553_ = lean_ctor_get(v_t_3548_, 1);
v___x_3554_ = lean_unsigned_to_nat(0u);
v___x_3555_ = lean_array_get_size(v_children_3553_);
v___x_3556_ = lean_nat_dec_lt(v___x_3554_, v___x_3555_);
if (v___x_3556_ == 0)
{
return v_init_3549_;
}
else
{
size_t v___x_3557_; size_t v___x_3558_; lean_object* v___x_3559_; 
v___x_3557_ = ((size_t)0ULL);
v___x_3558_ = lean_usize_of_nat(v___x_3555_);
v___x_3559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3553_, v___x_3557_, v___x_3558_, v_init_3549_);
return v___x_3559_;
}
}
default: 
{
lean_object* v_key_3560_; lean_object* v_val_3561_; lean_object* v_children_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; 
v_key_3560_ = lean_ctor_get(v_t_3548_, 0);
v_val_3561_ = lean_ctor_get(v_t_3548_, 1);
v_children_3562_ = lean_ctor_get(v_t_3548_, 2);
v___x_3563_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3549_, v_key_3560_, v_val_3561_);
lean_dec(v_init_3549_);
v___x_3564_ = lean_unsigned_to_nat(0u);
v___x_3565_ = lean_array_get_size(v_children_3562_);
v___x_3566_ = lean_nat_dec_lt(v___x_3564_, v___x_3565_);
if (v___x_3566_ == 0)
{
return v___x_3563_;
}
else
{
size_t v___x_3567_; size_t v___x_3568_; lean_object* v___x_3569_; 
v___x_3567_ = ((size_t)0ULL);
v___x_3568_ = lean_usize_of_nat(v___x_3565_);
v___x_3569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3562_, v___x_3567_, v___x_3568_, v___x_3563_);
return v___x_3569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3570_, size_t v_i_3571_, size_t v_stop_3572_, lean_object* v_b_3573_){
_start:
{
uint8_t v___x_3574_; 
v___x_3574_ = lean_usize_dec_eq(v_i_3571_, v_stop_3572_);
if (v___x_3574_ == 0)
{
lean_object* v___x_3575_; lean_object* v___x_3576_; size_t v___x_3577_; size_t v___x_3578_; 
v___x_3575_ = lean_array_uget_borrowed(v_as_3570_, v_i_3571_);
v___x_3576_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v___x_3575_, v_b_3573_);
v___x_3577_ = ((size_t)1ULL);
v___x_3578_ = lean_usize_add(v_i_3571_, v___x_3577_);
v_i_3571_ = v___x_3578_;
v_b_3573_ = v___x_3576_;
goto _start;
}
else
{
return v_b_3573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3580_, lean_object* v_i_3581_, lean_object* v_stop_3582_, lean_object* v_b_3583_){
_start:
{
size_t v_i_boxed_3584_; size_t v_stop_boxed_3585_; lean_object* v_res_3586_; 
v_i_boxed_3584_ = lean_unbox_usize(v_i_3581_);
lean_dec(v_i_3581_);
v_stop_boxed_3585_ = lean_unbox_usize(v_stop_3582_);
lean_dec(v_stop_3582_);
v_res_3586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3580_, v_i_boxed_3584_, v_stop_boxed_3585_, v_b_3583_);
lean_dec_ref(v_as_3580_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_3587_, lean_object* v_init_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_3587_, v_init_3588_);
lean_dec_ref(v_t_3587_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_3590_, lean_object* v_init_3591_){
_start:
{
switch(lean_obj_tag(v_t_3590_))
{
case 0:
{
lean_object* v_tree_3592_; lean_object* v___x_3593_; 
v_tree_3592_ = lean_ctor_get(v_t_3590_, 1);
v___x_3593_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_tree_3592_, v_init_3591_);
return v___x_3593_;
}
case 1:
{
lean_object* v_key_3594_; lean_object* v_entry_x3f_3595_; lean_object* v_children_3596_; lean_object* v_s_3598_; 
v_key_3594_ = lean_ctor_get(v_t_3590_, 0);
v_entry_x3f_3595_ = lean_ctor_get(v_t_3590_, 1);
v_children_3596_ = lean_ctor_get(v_t_3590_, 2);
if (lean_obj_tag(v_entry_x3f_3595_) == 1)
{
lean_object* v_val_3605_; lean_object* v_fst_3606_; lean_object* v___x_3607_; 
v_val_3605_ = lean_ctor_get(v_entry_x3f_3595_, 0);
v_fst_3606_ = lean_ctor_get(v_val_3605_, 0);
v___x_3607_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_3591_, v_key_3594_, v_fst_3606_);
lean_dec(v_init_3591_);
v_s_3598_ = v___x_3607_;
goto v___jp_3597_;
}
else
{
v_s_3598_ = v_init_3591_;
goto v___jp_3597_;
}
v___jp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; uint8_t v___x_3601_; 
v___x_3599_ = lean_unsigned_to_nat(0u);
v___x_3600_ = lean_array_get_size(v_children_3596_);
v___x_3601_ = lean_nat_dec_lt(v___x_3599_, v___x_3600_);
if (v___x_3601_ == 0)
{
return v_s_3598_;
}
else
{
size_t v___x_3602_; size_t v___x_3603_; lean_object* v___x_3604_; 
v___x_3602_ = ((size_t)0ULL);
v___x_3603_ = lean_usize_of_nat(v___x_3600_);
v___x_3604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_children_3596_, v___x_3602_, v___x_3603_, v_s_3598_);
return v___x_3604_;
}
}
}
default: 
{
lean_object* v_key_3608_; lean_object* v_entry_x3f_3609_; lean_object* v_children_3610_; lean_object* v_s_3612_; 
v_key_3608_ = lean_ctor_get(v_t_3590_, 0);
v_entry_x3f_3609_ = lean_ctor_get(v_t_3590_, 1);
v_children_3610_ = lean_ctor_get(v_t_3590_, 2);
if (lean_obj_tag(v_entry_x3f_3609_) == 1)
{
lean_object* v_val_3620_; lean_object* v_fst_3621_; lean_object* v___x_3622_; 
v_val_3620_ = lean_ctor_get(v_entry_x3f_3609_, 0);
v_fst_3621_ = lean_ctor_get(v_val_3620_, 0);
v___x_3622_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_3591_, v_key_3608_, v_fst_3621_);
lean_dec(v_init_3591_);
v_s_3612_ = v___x_3622_;
goto v___jp_3611_;
}
else
{
v_s_3612_ = v_init_3591_;
goto v___jp_3611_;
}
v___jp_3611_:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3613_ = lean_thunk_get_own(v_children_3610_);
v___x_3614_ = lean_unsigned_to_nat(0u);
v___x_3615_ = lean_array_get_size(v___x_3613_);
v___x_3616_ = lean_nat_dec_lt(v___x_3614_, v___x_3615_);
if (v___x_3616_ == 0)
{
lean_dec(v___x_3613_);
return v_s_3612_;
}
else
{
size_t v___x_3617_; size_t v___x_3618_; lean_object* v___x_3619_; 
v___x_3617_ = ((size_t)0ULL);
v___x_3618_ = lean_usize_of_nat(v___x_3615_);
v___x_3619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v___x_3613_, v___x_3617_, v___x_3618_, v_s_3612_);
lean_dec(v___x_3613_);
return v___x_3619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3623_, size_t v_i_3624_, size_t v_stop_3625_, lean_object* v_b_3626_){
_start:
{
uint8_t v___x_3627_; 
v___x_3627_ = lean_usize_dec_eq(v_i_3624_, v_stop_3625_);
if (v___x_3627_ == 0)
{
lean_object* v___x_3628_; lean_object* v___x_3629_; size_t v___x_3630_; size_t v___x_3631_; 
v___x_3628_ = lean_array_uget_borrowed(v_as_3623_, v_i_3624_);
v___x_3629_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_3628_, v_b_3626_);
v___x_3630_ = ((size_t)1ULL);
v___x_3631_ = lean_usize_add(v_i_3624_, v___x_3630_);
v_i_3624_ = v___x_3631_;
v_b_3626_ = v___x_3629_;
goto _start;
}
else
{
return v_b_3626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3633_, lean_object* v_i_3634_, lean_object* v_stop_3635_, lean_object* v_b_3636_){
_start:
{
size_t v_i_boxed_3637_; size_t v_stop_boxed_3638_; lean_object* v_res_3639_; 
v_i_boxed_3637_ = lean_unbox_usize(v_i_3634_);
lean_dec(v_i_3634_);
v_stop_boxed_3638_ = lean_unbox_usize(v_stop_3635_);
lean_dec(v_stop_3635_);
v_res_3639_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_3633_, v_i_boxed_3637_, v_stop_boxed_3638_, v_b_3636_);
lean_dec_ref(v_as_3633_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_3640_, lean_object* v_init_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_3640_, v_init_3641_);
lean_dec_ref(v_t_3640_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_3643_, lean_object* v_init_3644_){
_start:
{
lean_object* v_tree_3645_; lean_object* v___x_3646_; 
v_tree_3645_ = lean_ctor_get(v_t_3643_, 1);
v___x_3646_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_3645_, v_init_3644_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_3647_, lean_object* v_init_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3647_, v_init_3648_);
lean_dec_ref(v_t_3647_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_3650_){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = lean_unsigned_to_nat(0u);
v___x_3652_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3650_, v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l_Lean_ImportedConsts_size___redArg(v_t_3653_);
lean_dec_ref(v_t_3653_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_3655_, lean_object* v_t_3656_){
_start:
{
lean_object* v___x_3657_; 
v___x_3657_ = l_Lean_ImportedConsts_size___redArg(v_t_3656_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_3658_, lean_object* v_t_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_ImportedConsts_size(v_00_u03b1_3658_, v_t_3659_);
lean_dec_ref(v_t_3659_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_3661_, lean_object* v_t_3662_, lean_object* v_init_3663_){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3662_, v_init_3663_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_3665_, lean_object* v_t_3666_, lean_object* v_init_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_3665_, v_t_3666_, v_init_3667_);
lean_dec_ref(v_t_3666_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_3669_, lean_object* v_t_3670_, lean_object* v_init_3671_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_3670_, v_init_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3673_, lean_object* v_t_3674_, lean_object* v_init_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_3673_, v_t_3674_, v_init_3675_);
lean_dec_ref(v_t_3674_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3677_, lean_object* v_t_3678_, lean_object* v_init_3679_){
_start:
{
lean_object* v___x_3680_; 
v___x_3680_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_3678_, v_init_3679_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3681_, lean_object* v_t_3682_, lean_object* v_init_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_3681_, v_t_3682_, v_init_3683_);
lean_dec_ref(v_t_3682_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3685_, lean_object* v_as_3686_, size_t v_i_3687_, size_t v_stop_3688_, lean_object* v_b_3689_){
_start:
{
lean_object* v___x_3690_; 
v___x_3690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_3686_, v_i_3687_, v_stop_3688_, v_b_3689_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3691_, lean_object* v_as_3692_, lean_object* v_i_3693_, lean_object* v_stop_3694_, lean_object* v_b_3695_){
_start:
{
size_t v_i_boxed_3696_; size_t v_stop_boxed_3697_; lean_object* v_res_3698_; 
v_i_boxed_3696_ = lean_unbox_usize(v_i_3693_);
lean_dec(v_i_3693_);
v_stop_boxed_3697_ = lean_unbox_usize(v_stop_3694_);
lean_dec(v_stop_3694_);
v_res_3698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(v_00_u03b1_3691_, v_as_3692_, v_i_boxed_3696_, v_stop_boxed_3697_, v_b_3695_);
lean_dec_ref(v_as_3692_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3699_, lean_object* v_as_3700_, size_t v_i_3701_, size_t v_stop_3702_, lean_object* v_b_3703_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3700_, v_i_3701_, v_stop_3702_, v_b_3703_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3705_, lean_object* v_as_3706_, lean_object* v_i_3707_, lean_object* v_stop_3708_, lean_object* v_b_3709_){
_start:
{
size_t v_i_boxed_3710_; size_t v_stop_boxed_3711_; lean_object* v_res_3712_; 
v_i_boxed_3710_ = lean_unbox_usize(v_i_3707_);
lean_dec(v_i_3707_);
v_stop_boxed_3711_ = lean_unbox_usize(v_stop_3708_);
lean_dec(v_stop_3708_);
v_res_3712_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3705_, v_as_3706_, v_i_boxed_3710_, v_stop_boxed_3711_, v_b_3709_);
lean_dec_ref(v_as_3706_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_3713_, lean_object* v_f_3714_, lean_object* v_init_3715_){
_start:
{
lean_object* v___x_3716_; 
v___x_3716_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3713_, v_f_3714_, v_init_3715_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_3717_, lean_object* v_00_u03c3_3718_, lean_object* v_t_3719_, lean_object* v_f_3720_, lean_object* v_init_3721_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3719_, v_f_3720_, v_init_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_3723_, lean_object* v_t_3724_, lean_object* v_f_3725_, lean_object* v_init_3726_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3723_, v_t_3724_, v_f_3725_, v_init_3726_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_3728_, lean_object* v_00_u03b1_3729_, lean_object* v_00_u03c3_3730_, lean_object* v_inst_3731_, lean_object* v_t_3732_, lean_object* v_f_3733_, lean_object* v_init_3734_){
_start:
{
lean_object* v___x_3735_; 
v___x_3735_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3731_, v_t_3732_, v_f_3733_, v_init_3734_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object* v_l_3736_, lean_object* v_n_3737_, lean_object* v_v_3738_){
_start:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3739_, 0, v_n_3737_);
lean_ctor_set(v___x_3739_, 1, v_v_3738_);
v___x_3740_ = lean_array_push(v_l_3736_, v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v_l_3741_, lean_object* v_n_3742_, lean_object* v_v_3743_){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3744_, 0, v_n_3742_);
lean_ctor_set(v___x_3744_, 1, v_v_3743_);
v___x_3745_ = lean_array_push(v_l_3741_, v___x_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3746_, lean_object* v_init_3747_){
_start:
{
switch(lean_obj_tag(v_t_3746_))
{
case 0:
{
lean_object* v_key_3748_; lean_object* v_val_3749_; lean_object* v___x_3750_; 
v_key_3748_ = lean_ctor_get(v_t_3746_, 0);
lean_inc(v_key_3748_);
v_val_3749_ = lean_ctor_get(v_t_3746_, 1);
lean_inc(v_val_3749_);
lean_dec_ref_known(v_t_3746_, 2);
v___x_3750_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3747_, v_key_3748_, v_val_3749_);
return v___x_3750_;
}
case 1:
{
lean_object* v_children_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; 
v_children_3751_ = lean_ctor_get(v_t_3746_, 1);
lean_inc_ref(v_children_3751_);
lean_dec_ref_known(v_t_3746_, 2);
v___x_3752_ = lean_unsigned_to_nat(0u);
v___x_3753_ = lean_array_get_size(v_children_3751_);
v___x_3754_ = lean_nat_dec_lt(v___x_3752_, v___x_3753_);
if (v___x_3754_ == 0)
{
lean_dec_ref(v_children_3751_);
return v_init_3747_;
}
else
{
size_t v___x_3755_; size_t v___x_3756_; lean_object* v___x_3757_; 
v___x_3755_ = ((size_t)0ULL);
v___x_3756_ = lean_usize_of_nat(v___x_3753_);
v___x_3757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3751_, v___x_3755_, v___x_3756_, v_init_3747_);
lean_dec_ref(v_children_3751_);
return v___x_3757_;
}
}
default: 
{
lean_object* v_key_3758_; lean_object* v_val_3759_; lean_object* v_children_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; 
v_key_3758_ = lean_ctor_get(v_t_3746_, 0);
lean_inc(v_key_3758_);
v_val_3759_ = lean_ctor_get(v_t_3746_, 1);
lean_inc(v_val_3759_);
v_children_3760_ = lean_ctor_get(v_t_3746_, 2);
lean_inc_ref(v_children_3760_);
lean_dec_ref_known(v_t_3746_, 3);
v___x_3761_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3747_, v_key_3758_, v_val_3759_);
v___x_3762_ = lean_unsigned_to_nat(0u);
v___x_3763_ = lean_array_get_size(v_children_3760_);
v___x_3764_ = lean_nat_dec_lt(v___x_3762_, v___x_3763_);
if (v___x_3764_ == 0)
{
lean_dec_ref(v_children_3760_);
return v___x_3761_;
}
else
{
size_t v___x_3765_; size_t v___x_3766_; lean_object* v___x_3767_; 
v___x_3765_ = ((size_t)0ULL);
v___x_3766_ = lean_usize_of_nat(v___x_3763_);
v___x_3767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3760_, v___x_3765_, v___x_3766_, v___x_3761_);
lean_dec_ref(v_children_3760_);
return v___x_3767_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3768_, size_t v_i_3769_, size_t v_stop_3770_, lean_object* v_b_3771_){
_start:
{
uint8_t v___x_3772_; 
v___x_3772_ = lean_usize_dec_eq(v_i_3769_, v_stop_3770_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3773_; lean_object* v___x_3774_; size_t v___x_3775_; size_t v___x_3776_; 
v___x_3773_ = lean_array_uget_borrowed(v_as_3768_, v_i_3769_);
lean_inc(v___x_3773_);
v___x_3774_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v___x_3773_, v_b_3771_);
v___x_3775_ = ((size_t)1ULL);
v___x_3776_ = lean_usize_add(v_i_3769_, v___x_3775_);
v_i_3769_ = v___x_3776_;
v_b_3771_ = v___x_3774_;
goto _start;
}
else
{
return v_b_3771_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3778_, lean_object* v_i_3779_, lean_object* v_stop_3780_, lean_object* v_b_3781_){
_start:
{
size_t v_i_boxed_3782_; size_t v_stop_boxed_3783_; lean_object* v_res_3784_; 
v_i_boxed_3782_ = lean_unbox_usize(v_i_3779_);
lean_dec(v_i_3779_);
v_stop_boxed_3783_ = lean_unbox_usize(v_stop_3780_);
lean_dec(v_stop_3780_);
v_res_3784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3778_, v_i_boxed_3782_, v_stop_boxed_3783_, v_b_3781_);
lean_dec_ref(v_as_3778_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_3785_, lean_object* v_init_3786_){
_start:
{
switch(lean_obj_tag(v_t_3785_))
{
case 0:
{
lean_object* v_tree_3787_; lean_object* v___x_3788_; 
v_tree_3787_ = lean_ctor_get(v_t_3785_, 1);
lean_inc_ref(v_tree_3787_);
lean_dec_ref_known(v_t_3785_, 2);
v___x_3788_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_tree_3787_, v_init_3786_);
return v___x_3788_;
}
case 1:
{
lean_object* v_key_3789_; lean_object* v_entry_x3f_3790_; lean_object* v_children_3791_; lean_object* v_s_3793_; 
v_key_3789_ = lean_ctor_get(v_t_3785_, 0);
lean_inc(v_key_3789_);
v_entry_x3f_3790_ = lean_ctor_get(v_t_3785_, 1);
lean_inc(v_entry_x3f_3790_);
v_children_3791_ = lean_ctor_get(v_t_3785_, 2);
lean_inc_ref(v_children_3791_);
lean_dec_ref_known(v_t_3785_, 3);
if (lean_obj_tag(v_entry_x3f_3790_) == 1)
{
lean_object* v_val_3800_; lean_object* v_fst_3801_; lean_object* v___x_3802_; 
v_val_3800_ = lean_ctor_get(v_entry_x3f_3790_, 0);
lean_inc(v_val_3800_);
lean_dec_ref_known(v_entry_x3f_3790_, 1);
v_fst_3801_ = lean_ctor_get(v_val_3800_, 0);
lean_inc(v_fst_3801_);
lean_dec(v_val_3800_);
v___x_3802_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_3786_, v_key_3789_, v_fst_3801_);
v_s_3793_ = v___x_3802_;
goto v___jp_3792_;
}
else
{
lean_dec(v_entry_x3f_3790_);
lean_dec(v_key_3789_);
v_s_3793_ = v_init_3786_;
goto v___jp_3792_;
}
v___jp_3792_:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; uint8_t v___x_3796_; 
v___x_3794_ = lean_unsigned_to_nat(0u);
v___x_3795_ = lean_array_get_size(v_children_3791_);
v___x_3796_ = lean_nat_dec_lt(v___x_3794_, v___x_3795_);
if (v___x_3796_ == 0)
{
lean_dec_ref(v_children_3791_);
return v_s_3793_;
}
else
{
size_t v___x_3797_; size_t v___x_3798_; lean_object* v___x_3799_; 
v___x_3797_ = ((size_t)0ULL);
v___x_3798_ = lean_usize_of_nat(v___x_3795_);
v___x_3799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_children_3791_, v___x_3797_, v___x_3798_, v_s_3793_);
lean_dec_ref(v_children_3791_);
return v___x_3799_;
}
}
}
default: 
{
lean_object* v_key_3803_; lean_object* v_entry_x3f_3804_; lean_object* v_children_3805_; lean_object* v_s_3807_; 
v_key_3803_ = lean_ctor_get(v_t_3785_, 0);
lean_inc(v_key_3803_);
v_entry_x3f_3804_ = lean_ctor_get(v_t_3785_, 1);
lean_inc(v_entry_x3f_3804_);
v_children_3805_ = lean_ctor_get(v_t_3785_, 2);
lean_inc_ref(v_children_3805_);
lean_dec_ref_known(v_t_3785_, 3);
if (lean_obj_tag(v_entry_x3f_3804_) == 1)
{
lean_object* v_val_3815_; lean_object* v_fst_3816_; lean_object* v___x_3817_; 
v_val_3815_ = lean_ctor_get(v_entry_x3f_3804_, 0);
lean_inc(v_val_3815_);
lean_dec_ref_known(v_entry_x3f_3804_, 1);
v_fst_3816_ = lean_ctor_get(v_val_3815_, 0);
lean_inc(v_fst_3816_);
lean_dec(v_val_3815_);
v___x_3817_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_3786_, v_key_3803_, v_fst_3816_);
v_s_3807_ = v___x_3817_;
goto v___jp_3806_;
}
else
{
lean_dec(v_entry_x3f_3804_);
lean_dec(v_key_3803_);
v_s_3807_ = v_init_3786_;
goto v___jp_3806_;
}
v___jp_3806_:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; uint8_t v___x_3811_; 
v___x_3808_ = lean_thunk_get_own(v_children_3805_);
lean_dec_ref(v_children_3805_);
v___x_3809_ = lean_unsigned_to_nat(0u);
v___x_3810_ = lean_array_get_size(v___x_3808_);
v___x_3811_ = lean_nat_dec_lt(v___x_3809_, v___x_3810_);
if (v___x_3811_ == 0)
{
lean_dec(v___x_3808_);
return v_s_3807_;
}
else
{
size_t v___x_3812_; size_t v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = ((size_t)0ULL);
v___x_3813_ = lean_usize_of_nat(v___x_3810_);
v___x_3814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v___x_3808_, v___x_3812_, v___x_3813_, v_s_3807_);
lean_dec(v___x_3808_);
return v___x_3814_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3818_, size_t v_i_3819_, size_t v_stop_3820_, lean_object* v_b_3821_){
_start:
{
uint8_t v___x_3822_; 
v___x_3822_ = lean_usize_dec_eq(v_i_3819_, v_stop_3820_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; lean_object* v___x_3824_; size_t v___x_3825_; size_t v___x_3826_; 
v___x_3823_ = lean_array_uget_borrowed(v_as_3818_, v_i_3819_);
lean_inc(v___x_3823_);
v___x_3824_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_3823_, v_b_3821_);
v___x_3825_ = ((size_t)1ULL);
v___x_3826_ = lean_usize_add(v_i_3819_, v___x_3825_);
v_i_3819_ = v___x_3826_;
v_b_3821_ = v___x_3824_;
goto _start;
}
else
{
return v_b_3821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3828_, lean_object* v_i_3829_, lean_object* v_stop_3830_, lean_object* v_b_3831_){
_start:
{
size_t v_i_boxed_3832_; size_t v_stop_boxed_3833_; lean_object* v_res_3834_; 
v_i_boxed_3832_ = lean_unbox_usize(v_i_3829_);
lean_dec(v_i_3829_);
v_stop_boxed_3833_ = lean_unbox_usize(v_stop_3830_);
lean_dec(v_stop_3830_);
v_res_3834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_3828_, v_i_boxed_3832_, v_stop_boxed_3833_, v_b_3831_);
lean_dec_ref(v_as_3828_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_3835_, lean_object* v_init_3836_){
_start:
{
lean_object* v_tree_3837_; lean_object* v___x_3838_; 
v_tree_3837_ = lean_ctor_get(v_t_3835_, 1);
lean_inc_ref(v_tree_3837_);
lean_dec_ref(v_t_3835_);
v___x_3838_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_3837_, v_init_3836_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_3841_){
_start:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; 
v___x_3842_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_3843_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_3841_, v___x_3842_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_3844_, lean_object* v_t_3845_){
_start:
{
lean_object* v___x_3846_; 
v___x_3846_ = l_Lean_ImportedConsts_toArray___redArg(v_t_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_3847_, lean_object* v_t_3848_, lean_object* v_init_3849_){
_start:
{
lean_object* v___x_3850_; 
v___x_3850_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_3848_, v_init_3849_);
return v___x_3850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_3851_, lean_object* v_t_3852_, lean_object* v_init_3853_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_3852_, v_init_3853_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3855_, lean_object* v_t_3856_, lean_object* v_init_3857_){
_start:
{
lean_object* v___x_3858_; 
v___x_3858_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_t_3856_, v_init_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3859_, lean_object* v_as_3860_, size_t v_i_3861_, size_t v_stop_3862_, lean_object* v_b_3863_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_3860_, v_i_3861_, v_stop_3862_, v_b_3863_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3865_, lean_object* v_as_3866_, lean_object* v_i_3867_, lean_object* v_stop_3868_, lean_object* v_b_3869_){
_start:
{
size_t v_i_boxed_3870_; size_t v_stop_boxed_3871_; lean_object* v_res_3872_; 
v_i_boxed_3870_ = lean_unbox_usize(v_i_3867_);
lean_dec(v_i_3867_);
v_stop_boxed_3871_ = lean_unbox_usize(v_stop_3868_);
lean_dec(v_stop_3868_);
v_res_3872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(v_00_u03b1_3865_, v_as_3866_, v_i_boxed_3870_, v_stop_boxed_3871_, v_b_3869_);
lean_dec_ref(v_as_3866_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3873_, lean_object* v_as_3874_, size_t v_i_3875_, size_t v_stop_3876_, lean_object* v_b_3877_){
_start:
{
lean_object* v___x_3878_; 
v___x_3878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3874_, v_i_3875_, v_stop_3876_, v_b_3877_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3879_, lean_object* v_as_3880_, lean_object* v_i_3881_, lean_object* v_stop_3882_, lean_object* v_b_3883_){
_start:
{
size_t v_i_boxed_3884_; size_t v_stop_boxed_3885_; lean_object* v_res_3886_; 
v_i_boxed_3884_ = lean_unbox_usize(v_i_3881_);
lean_dec(v_i_3881_);
v_stop_boxed_3885_ = lean_unbox_usize(v_stop_3882_);
lean_dec(v_stop_3882_);
v_res_3886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3879_, v_as_3880_, v_i_boxed_3884_, v_stop_boxed_3885_, v_b_3883_);
lean_dec_ref(v_as_3880_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3887_, lean_object* v_init_3888_){
_start:
{
switch(lean_obj_tag(v_t_3887_))
{
case 0:
{
lean_object* v_val_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
v_val_3889_ = lean_ctor_get(v_t_3887_, 1);
v_isSharedCheck_3896_ = !lean_is_exclusive(v_t_3887_);
if (v_isSharedCheck_3896_ == 0)
{
lean_object* v_unused_3897_; 
v_unused_3897_ = lean_ctor_get(v_t_3887_, 0);
lean_dec(v_unused_3897_);
v___x_3891_ = v_t_3887_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_val_3889_);
lean_dec(v_t_3887_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
lean_ctor_set_tag(v___x_3891_, 1);
lean_ctor_set(v___x_3891_, 1, v_init_3888_);
lean_ctor_set(v___x_3891_, 0, v_val_3889_);
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_val_3889_);
lean_ctor_set(v_reuseFailAlloc_3895_, 1, v_init_3888_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
case 1:
{
lean_object* v_children_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; uint8_t v___x_3901_; 
v_children_3898_ = lean_ctor_get(v_t_3887_, 1);
lean_inc_ref(v_children_3898_);
lean_dec_ref_known(v_t_3887_, 2);
v___x_3899_ = lean_unsigned_to_nat(0u);
v___x_3900_ = lean_array_get_size(v_children_3898_);
v___x_3901_ = lean_nat_dec_lt(v___x_3899_, v___x_3900_);
if (v___x_3901_ == 0)
{
lean_dec_ref(v_children_3898_);
return v_init_3888_;
}
else
{
size_t v___x_3902_; size_t v___x_3903_; lean_object* v___x_3904_; 
v___x_3902_ = ((size_t)0ULL);
v___x_3903_ = lean_usize_of_nat(v___x_3900_);
v___x_3904_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3898_, v___x_3902_, v___x_3903_, v_init_3888_);
lean_dec_ref(v_children_3898_);
return v___x_3904_;
}
}
default: 
{
lean_object* v_val_3905_; lean_object* v_children_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; uint8_t v___x_3910_; 
v_val_3905_ = lean_ctor_get(v_t_3887_, 1);
lean_inc(v_val_3905_);
v_children_3906_ = lean_ctor_get(v_t_3887_, 2);
lean_inc_ref(v_children_3906_);
lean_dec_ref_known(v_t_3887_, 3);
v___x_3907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3907_, 0, v_val_3905_);
lean_ctor_set(v___x_3907_, 1, v_init_3888_);
v___x_3908_ = lean_unsigned_to_nat(0u);
v___x_3909_ = lean_array_get_size(v_children_3906_);
v___x_3910_ = lean_nat_dec_lt(v___x_3908_, v___x_3909_);
if (v___x_3910_ == 0)
{
lean_dec_ref(v_children_3906_);
return v___x_3907_;
}
else
{
size_t v___x_3911_; size_t v___x_3912_; lean_object* v___x_3913_; 
v___x_3911_ = ((size_t)0ULL);
v___x_3912_ = lean_usize_of_nat(v___x_3909_);
v___x_3913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3906_, v___x_3911_, v___x_3912_, v___x_3907_);
lean_dec_ref(v_children_3906_);
return v___x_3913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3914_, size_t v_i_3915_, size_t v_stop_3916_, lean_object* v_b_3917_){
_start:
{
uint8_t v___x_3918_; 
v___x_3918_ = lean_usize_dec_eq(v_i_3915_, v_stop_3916_);
if (v___x_3918_ == 0)
{
lean_object* v___x_3919_; lean_object* v___x_3920_; size_t v___x_3921_; size_t v___x_3922_; 
v___x_3919_ = lean_array_uget_borrowed(v_as_3914_, v_i_3915_);
lean_inc(v___x_3919_);
v___x_3920_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v___x_3919_, v_b_3917_);
v___x_3921_ = ((size_t)1ULL);
v___x_3922_ = lean_usize_add(v_i_3915_, v___x_3921_);
v_i_3915_ = v___x_3922_;
v_b_3917_ = v___x_3920_;
goto _start;
}
else
{
return v_b_3917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3924_, lean_object* v_i_3925_, lean_object* v_stop_3926_, lean_object* v_b_3927_){
_start:
{
size_t v_i_boxed_3928_; size_t v_stop_boxed_3929_; lean_object* v_res_3930_; 
v_i_boxed_3928_ = lean_unbox_usize(v_i_3925_);
lean_dec(v_i_3925_);
v_stop_boxed_3929_ = lean_unbox_usize(v_stop_3926_);
lean_dec(v_stop_3926_);
v_res_3930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3924_, v_i_boxed_3928_, v_stop_boxed_3929_, v_b_3927_);
lean_dec_ref(v_as_3924_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_3931_, lean_object* v_init_3932_){
_start:
{
switch(lean_obj_tag(v_t_3931_))
{
case 0:
{
lean_object* v_tree_3933_; lean_object* v___x_3934_; 
v_tree_3933_ = lean_ctor_get(v_t_3931_, 1);
lean_inc_ref(v_tree_3933_);
lean_dec_ref_known(v_t_3931_, 2);
v___x_3934_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_tree_3933_, v_init_3932_);
return v___x_3934_;
}
case 1:
{
lean_object* v_entry_x3f_3935_; lean_object* v_children_3936_; lean_object* v_s_3938_; 
v_entry_x3f_3935_ = lean_ctor_get(v_t_3931_, 1);
lean_inc(v_entry_x3f_3935_);
v_children_3936_ = lean_ctor_get(v_t_3931_, 2);
lean_inc_ref(v_children_3936_);
lean_dec_ref_known(v_t_3931_, 3);
if (lean_obj_tag(v_entry_x3f_3935_) == 1)
{
lean_object* v_val_3945_; lean_object* v_fst_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
v_val_3945_ = lean_ctor_get(v_entry_x3f_3935_, 0);
lean_inc(v_val_3945_);
lean_dec_ref_known(v_entry_x3f_3935_, 1);
v_fst_3946_ = lean_ctor_get(v_val_3945_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v_val_3945_);
if (v_isSharedCheck_3953_ == 0)
{
lean_object* v_unused_3954_; 
v_unused_3954_ = lean_ctor_get(v_val_3945_, 1);
lean_dec(v_unused_3954_);
v___x_3948_ = v_val_3945_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_fst_3946_);
lean_dec(v_val_3945_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
lean_ctor_set_tag(v___x_3948_, 1);
lean_ctor_set(v___x_3948_, 1, v_init_3932_);
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_fst_3946_);
lean_ctor_set(v_reuseFailAlloc_3952_, 1, v_init_3932_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
v_s_3938_ = v___x_3951_;
goto v___jp_3937_;
}
}
}
else
{
lean_dec(v_entry_x3f_3935_);
v_s_3938_ = v_init_3932_;
goto v___jp_3937_;
}
v___jp_3937_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; uint8_t v___x_3941_; 
v___x_3939_ = lean_unsigned_to_nat(0u);
v___x_3940_ = lean_array_get_size(v_children_3936_);
v___x_3941_ = lean_nat_dec_lt(v___x_3939_, v___x_3940_);
if (v___x_3941_ == 0)
{
lean_dec_ref(v_children_3936_);
return v_s_3938_;
}
else
{
size_t v___x_3942_; size_t v___x_3943_; lean_object* v___x_3944_; 
v___x_3942_ = ((size_t)0ULL);
v___x_3943_ = lean_usize_of_nat(v___x_3940_);
v___x_3944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_children_3936_, v___x_3942_, v___x_3943_, v_s_3938_);
lean_dec_ref(v_children_3936_);
return v___x_3944_;
}
}
}
default: 
{
lean_object* v_entry_x3f_3955_; lean_object* v_children_3956_; lean_object* v_s_3958_; 
v_entry_x3f_3955_ = lean_ctor_get(v_t_3931_, 1);
lean_inc(v_entry_x3f_3955_);
v_children_3956_ = lean_ctor_get(v_t_3931_, 2);
lean_inc_ref(v_children_3956_);
lean_dec_ref_known(v_t_3931_, 3);
if (lean_obj_tag(v_entry_x3f_3955_) == 1)
{
lean_object* v_val_3966_; lean_object* v_fst_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
v_val_3966_ = lean_ctor_get(v_entry_x3f_3955_, 0);
lean_inc(v_val_3966_);
lean_dec_ref_known(v_entry_x3f_3955_, 1);
v_fst_3967_ = lean_ctor_get(v_val_3966_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_val_3966_);
if (v_isSharedCheck_3974_ == 0)
{
lean_object* v_unused_3975_; 
v_unused_3975_ = lean_ctor_get(v_val_3966_, 1);
lean_dec(v_unused_3975_);
v___x_3969_ = v_val_3966_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_fst_3967_);
lean_dec(v_val_3966_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
lean_ctor_set_tag(v___x_3969_, 1);
lean_ctor_set(v___x_3969_, 1, v_init_3932_);
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_fst_3967_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v_init_3932_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
v_s_3958_ = v___x_3972_;
goto v___jp_3957_;
}
}
}
else
{
lean_dec(v_entry_x3f_3955_);
v_s_3958_ = v_init_3932_;
goto v___jp_3957_;
}
v___jp_3957_:
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; uint8_t v___x_3962_; 
v___x_3959_ = lean_thunk_get_own(v_children_3956_);
lean_dec_ref(v_children_3956_);
v___x_3960_ = lean_unsigned_to_nat(0u);
v___x_3961_ = lean_array_get_size(v___x_3959_);
v___x_3962_ = lean_nat_dec_lt(v___x_3960_, v___x_3961_);
if (v___x_3962_ == 0)
{
lean_dec(v___x_3959_);
return v_s_3958_;
}
else
{
size_t v___x_3963_; size_t v___x_3964_; lean_object* v___x_3965_; 
v___x_3963_ = ((size_t)0ULL);
v___x_3964_ = lean_usize_of_nat(v___x_3961_);
v___x_3965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v___x_3959_, v___x_3963_, v___x_3964_, v_s_3958_);
lean_dec(v___x_3959_);
return v___x_3965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3976_, size_t v_i_3977_, size_t v_stop_3978_, lean_object* v_b_3979_){
_start:
{
uint8_t v___x_3980_; 
v___x_3980_ = lean_usize_dec_eq(v_i_3977_, v_stop_3978_);
if (v___x_3980_ == 0)
{
lean_object* v___x_3981_; lean_object* v___x_3982_; size_t v___x_3983_; size_t v___x_3984_; 
v___x_3981_ = lean_array_uget_borrowed(v_as_3976_, v_i_3977_);
lean_inc(v___x_3981_);
v___x_3982_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_3981_, v_b_3979_);
v___x_3983_ = ((size_t)1ULL);
v___x_3984_ = lean_usize_add(v_i_3977_, v___x_3983_);
v_i_3977_ = v___x_3984_;
v_b_3979_ = v___x_3982_;
goto _start;
}
else
{
return v_b_3979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3986_, lean_object* v_i_3987_, lean_object* v_stop_3988_, lean_object* v_b_3989_){
_start:
{
size_t v_i_boxed_3990_; size_t v_stop_boxed_3991_; lean_object* v_res_3992_; 
v_i_boxed_3990_ = lean_unbox_usize(v_i_3987_);
lean_dec(v_i_3987_);
v_stop_boxed_3991_ = lean_unbox_usize(v_stop_3988_);
lean_dec(v_stop_3988_);
v_res_3992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_3986_, v_i_boxed_3990_, v_stop_boxed_3991_, v_b_3989_);
lean_dec_ref(v_as_3986_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_3993_, lean_object* v_init_3994_){
_start:
{
lean_object* v_tree_3995_; lean_object* v___x_3996_; 
v_tree_3995_ = lean_ctor_get(v_t_3993_, 1);
lean_inc_ref(v_tree_3995_);
lean_dec_ref(v_t_3993_);
v___x_3996_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_3995_, v_init_3994_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_3997_){
_start:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3998_ = lean_box(0);
v___x_3999_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_3997_, v___x_3998_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_4000_, lean_object* v_t_4001_){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = l_Lean_ImportedConsts_values___redArg(v_t_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_4003_, lean_object* v_t_4004_, lean_object* v_init_4005_){
_start:
{
lean_object* v___x_4006_; 
v___x_4006_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_4004_, v_init_4005_);
return v___x_4006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_4007_, lean_object* v_t_4008_, lean_object* v_init_4009_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_4008_, v_init_4009_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4011_, lean_object* v_t_4012_, lean_object* v_init_4013_){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_t_4012_, v_init_4013_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_4015_, lean_object* v_as_4016_, size_t v_i_4017_, size_t v_stop_4018_, lean_object* v_b_4019_){
_start:
{
lean_object* v___x_4020_; 
v___x_4020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_4016_, v_i_4017_, v_stop_4018_, v_b_4019_);
return v___x_4020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4021_, lean_object* v_as_4022_, lean_object* v_i_4023_, lean_object* v_stop_4024_, lean_object* v_b_4025_){
_start:
{
size_t v_i_boxed_4026_; size_t v_stop_boxed_4027_; lean_object* v_res_4028_; 
v_i_boxed_4026_ = lean_unbox_usize(v_i_4023_);
lean_dec(v_i_4023_);
v_stop_boxed_4027_ = lean_unbox_usize(v_stop_4024_);
lean_dec(v_stop_4024_);
v_res_4028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(v_00_u03b1_4021_, v_as_4022_, v_i_boxed_4026_, v_stop_boxed_4027_, v_b_4025_);
lean_dec_ref(v_as_4022_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_4029_, lean_object* v_as_4030_, size_t v_i_4031_, size_t v_stop_4032_, lean_object* v_b_4033_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_4030_, v_i_4031_, v_stop_4032_, v_b_4033_);
return v___x_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4035_, lean_object* v_as_4036_, lean_object* v_i_4037_, lean_object* v_stop_4038_, lean_object* v_b_4039_){
_start:
{
size_t v_i_boxed_4040_; size_t v_stop_boxed_4041_; lean_object* v_res_4042_; 
v_i_boxed_4040_ = lean_unbox_usize(v_i_4037_);
lean_dec(v_i_4037_);
v_stop_boxed_4041_ = lean_unbox_usize(v_stop_4038_);
lean_dec(v_stop_4038_);
v_res_4042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_4035_, v_as_4036_, v_i_boxed_4040_, v_stop_boxed_4041_, v_b_4039_);
lean_dec_ref(v_as_4036_);
return v_res_4042_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; 
v___x_4046_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_4047_ = lean_unsigned_to_nat(14u);
v___x_4048_ = lean_unsigned_to_nat(22u);
v___x_4049_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_4050_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_4051_ = l_mkPanicMessageWithDecl(v___x_4050_, v___x_4049_, v___x_4048_, v___x_4047_, v___x_4046_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_4052_, lean_object* v_t_4053_, lean_object* v_n_4054_, lean_object* v_x_4055_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_4053_, v_n_4054_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4057_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_4058_ = l_panic___redArg(v_inst_4052_, v___x_4057_);
return v___x_4058_;
}
else
{
lean_object* v_val_4059_; 
v_val_4059_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_val_4059_);
lean_dec_ref_known(v___x_4056_, 1);
return v_val_4059_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_4060_, lean_object* v_t_4061_, lean_object* v_n_4062_, lean_object* v_x_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_4060_, v_t_4061_, v_n_4062_, v_x_4063_);
lean_dec(v_inst_4060_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_4065_, lean_object* v_xs_4066_, lean_object* v_i_4067_){
_start:
{
lean_object* v___x_4068_; 
v___x_4068_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_4066_, v_i_4067_);
if (lean_obj_tag(v___x_4068_) == 0)
{
lean_object* v___x_4069_; 
v___x_4069_ = l_outOfBounds___redArg(v_inst_4065_);
return v___x_4069_;
}
else
{
lean_object* v_val_4070_; 
v_val_4070_ = lean_ctor_get(v___x_4068_, 0);
lean_inc(v_val_4070_);
lean_dec_ref_known(v___x_4068_, 1);
return v_val_4070_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_4071_, lean_object* v_xs_4072_, lean_object* v_i_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_4071_, v_xs_4072_, v_i_4073_);
lean_dec(v_inst_4071_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_4077_){
_start:
{
lean_object* v___f_4078_; lean_object* v___f_4079_; lean_object* v___f_4080_; lean_object* v___x_4081_; 
v___f_4078_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4078_, 0, v_inst_4077_);
v___f_4079_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_4080_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_4081_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4081_, 0, v___f_4078_);
lean_ctor_set(v___x_4081_, 1, v___f_4079_);
lean_ctor_set(v___x_4081_, 2, v___f_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_4082_, lean_object* v_inst_4083_){
_start:
{
lean_object* v___x_4084_; 
v___x_4084_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_4083_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_4085_, lean_object* v_n_4086_, lean_object* v_v_4087_){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4088_, 0, v_n_4086_);
lean_ctor_set(v___x_4088_, 1, v_v_4087_);
v___x_4089_ = lean_apply_1(v_f_4085_, v___x_4088_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_4090_, lean_object* v_t_4091_, lean_object* v_f_4092_){
_start:
{
lean_object* v___f_4093_; lean_object* v___x_4094_; 
v___f_4093_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4093_, 0, v_f_4092_);
v___x_4094_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4090_, v_t_4091_, v___f_4093_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_4095_){
_start:
{
lean_object* v___f_4096_; 
v___f_4096_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_4096_, 0, v_inst_4095_);
return v___f_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_4097_, lean_object* v_00_u03b1_4098_, lean_object* v_inst_4099_){
_start:
{
lean_object* v___f_4100_; 
v___f_4100_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_4100_, 0, v_inst_4099_);
return v___f_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_4101_, lean_object* v_____do__lift_4102_){
_start:
{
if (lean_obj_tag(v_____do__lift_4102_) == 0)
{
lean_object* v_a_4103_; lean_object* v___x_4104_; 
v_a_4103_ = lean_ctor_get(v_____do__lift_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v_____do__lift_4102_, 1);
v___x_4104_ = lean_apply_2(v_toPure_4101_, lean_box(0), v_a_4103_);
return v___x_4104_;
}
else
{
lean_object* v_a_4105_; lean_object* v_snd_4106_; lean_object* v___x_4107_; 
v_a_4105_ = lean_ctor_get(v_____do__lift_4102_, 0);
lean_inc(v_a_4105_);
lean_dec_ref_known(v_____do__lift_4102_, 1);
v_snd_4106_ = lean_ctor_get(v_a_4105_, 1);
lean_inc(v_snd_4106_);
lean_dec(v_a_4105_);
v___x_4107_ = lean_apply_2(v_toPure_4101_, lean_box(0), v_snd_4106_);
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_4108_, lean_object* v_____do__lift_4109_){
_start:
{
if (lean_obj_tag(v_____do__lift_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4118_; 
v_a_4110_ = lean_ctor_get(v_____do__lift_4109_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_____do__lift_4109_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4112_ = v_____do__lift_4109_;
v_isShared_4113_ = v_isSharedCheck_4118_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v_____do__lift_4109_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4118_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
lean_object* v___x_4116_; 
v___x_4116_ = lean_apply_2(v_toPure_4108_, lean_box(0), v___x_4115_);
return v___x_4116_;
}
}
}
else
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4129_; 
v_a_4119_ = lean_ctor_get(v_____do__lift_4109_, 0);
v_isSharedCheck_4129_ = !lean_is_exclusive(v_____do__lift_4109_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4121_ = v_____do__lift_4109_;
v_isShared_4122_ = v_isSharedCheck_4129_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v_____do__lift_4109_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4129_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4126_; 
v___x_4123_ = lean_box(0);
v___x_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4123_);
lean_ctor_set(v___x_4124_, 1, v_a_4119_);
if (v_isShared_4122_ == 0)
{
lean_ctor_set(v___x_4121_, 0, v___x_4124_);
v___x_4126_ = v___x_4121_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4124_);
v___x_4126_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
lean_object* v___x_4127_; 
v___x_4127_ = lean_apply_2(v_toPure_4108_, lean_box(0), v___x_4126_);
return v___x_4127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_4130_, lean_object* v_toBind_4131_, lean_object* v___f_4132_, lean_object* v_n_4133_, lean_object* v_v_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4136_, 0, v_n_4133_);
lean_ctor_set(v___x_4136_, 1, v_v_4134_);
v___x_4137_ = lean_apply_2(v___y_4130_, v___x_4136_, v___y_4135_);
v___x_4138_ = lean_apply_4(v_toBind_4131_, lean_box(0), lean_box(0), v___x_4137_, v___f_4132_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_4139_, lean_object* v_00_u03b2_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v___f_4144_; lean_object* v___f_4145_; lean_object* v___f_4146_; lean_object* v___f_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___f_4154_; lean_object* v___f_4155_; lean_object* v___f_4156_; lean_object* v___f_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v_toApplicative_4164_; lean_object* v_toBind_4165_; lean_object* v_toPure_4166_; lean_object* v___f_4167_; lean_object* v___f_4168_; lean_object* v___f_4169_; lean_object* v___x_138__overap_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
lean_inc_ref_n(v_inst_4139_, 7);
v___f_4144_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_4144_, 0, v_inst_4139_);
v___f_4145_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_4145_, 0, v_inst_4139_);
v___f_4146_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_4146_, 0, v_inst_4139_);
v___f_4147_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_4147_, 0, v_inst_4139_);
v___x_4148_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_4148_, 0, lean_box(0));
lean_closure_set(v___x_4148_, 1, lean_box(0));
lean_closure_set(v___x_4148_, 2, v_inst_4139_);
v___x_4149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4148_);
lean_ctor_set(v___x_4149_, 1, v___f_4144_);
v___x_4150_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_4150_, 0, lean_box(0));
lean_closure_set(v___x_4150_, 1, lean_box(0));
lean_closure_set(v___x_4150_, 2, v_inst_4139_);
v___x_4151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4149_);
lean_ctor_set(v___x_4151_, 1, v___x_4150_);
lean_ctor_set(v___x_4151_, 2, v___f_4145_);
lean_ctor_set(v___x_4151_, 3, v___f_4146_);
lean_ctor_set(v___x_4151_, 4, v___f_4147_);
v___x_4152_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_4152_, 0, lean_box(0));
lean_closure_set(v___x_4152_, 1, lean_box(0));
lean_closure_set(v___x_4152_, 2, v_inst_4139_);
v___x_4153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4151_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
lean_inc_ref_n(v___x_4153_, 6);
v___f_4154_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4154_, 0, v___x_4153_);
v___f_4155_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4155_, 0, v___x_4153_);
v___f_4156_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_4156_, 0, v___x_4153_);
v___f_4157_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_4157_, 0, v___x_4153_);
v___x_4158_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_4158_, 0, lean_box(0));
lean_closure_set(v___x_4158_, 1, lean_box(0));
lean_closure_set(v___x_4158_, 2, v___x_4153_);
v___x_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
lean_ctor_set(v___x_4159_, 1, v___f_4154_);
v___x_4160_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_4160_, 0, lean_box(0));
lean_closure_set(v___x_4160_, 1, lean_box(0));
lean_closure_set(v___x_4160_, 2, v___x_4153_);
v___x_4161_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4159_);
lean_ctor_set(v___x_4161_, 1, v___x_4160_);
lean_ctor_set(v___x_4161_, 2, v___f_4155_);
lean_ctor_set(v___x_4161_, 3, v___f_4156_);
lean_ctor_set(v___x_4161_, 4, v___f_4157_);
v___x_4162_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_4162_, 0, lean_box(0));
lean_closure_set(v___x_4162_, 1, lean_box(0));
lean_closure_set(v___x_4162_, 2, v___x_4153_);
v___x_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4161_);
lean_ctor_set(v___x_4163_, 1, v___x_4162_);
v_toApplicative_4164_ = lean_ctor_get(v_inst_4139_, 0);
lean_inc_ref(v_toApplicative_4164_);
v_toBind_4165_ = lean_ctor_get(v_inst_4139_, 1);
lean_inc_n(v_toBind_4165_, 2);
lean_dec_ref(v_inst_4139_);
v_toPure_4166_ = lean_ctor_get(v_toApplicative_4164_, 1);
lean_inc_n(v_toPure_4166_, 2);
lean_dec_ref(v_toApplicative_4164_);
v___f_4167_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4167_, 0, v_toPure_4166_);
v___f_4168_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4168_, 0, v_toPure_4166_);
v___f_4169_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_4169_, 0, v___y_4143_);
lean_closure_set(v___f_4169_, 1, v_toBind_4165_);
lean_closure_set(v___f_4169_, 2, v___f_4168_);
v___x_138__overap_4170_ = l_Lean_ImportedConsts_forM___redArg(v___x_4163_, v___y_4141_, v___f_4169_);
v___x_4171_ = lean_apply_1(v___x_138__overap_4170_, v___y_4142_);
v___x_4172_ = lean_apply_4(v_toBind_4165_, lean_box(0), lean_box(0), v___x_4171_, v___f_4167_);
return v___x_4172_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_4173_){
_start:
{
lean_object* v___f_4174_; 
v___f_4174_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_4174_, 0, v_inst_4173_);
return v___f_4174_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_4175_, lean_object* v_00_u03b1_4176_, lean_object* v_inst_4177_){
_start:
{
lean_object* v___f_4178_; 
v___f_4178_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_4178_, 0, v_inst_4177_);
return v___f_4178_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Monadic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl = _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Monadic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ConstTrie(builtin);
}
#ifdef __cplusplus
}
#endif
