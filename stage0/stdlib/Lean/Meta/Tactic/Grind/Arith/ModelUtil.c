// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.ModelUtil
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Arith.Util import Init.Grind.Module.Envelope
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
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isNatNum(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isIntNum(lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
uint8_t l_Lean_Expr_isDIte(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot_x3f(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isRoot(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getGeneration(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(142, 44, 53, 46, 180, 233, 253, 99)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value),LEAN_SCALAR_PTR_LITERAL(36, 9, 44, 71, 206, 78, 188, 190)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "One"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value),LEAN_SCALAR_PTR_LITERAL(31, 134, 200, 93, 163, 253, 252, 128)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Zero"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value),LEAN_SCALAR_PTR_LITERAL(172, 37, 33, 120, 251, 36, 203, 36)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value),LEAN_SCALAR_PTR_LITERAL(165, 91, 87, 132, 175, 103, 206, 109)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IntModule"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OfNatModule"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__52_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__53_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__52_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__53_value),LEAN_SCALAR_PTR_LITERAL(100, 80, 29, 215, 2, 174, 123, 91)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInterpretedTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_Arith_finalizeModel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_finalizeModel___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_traceModel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_traceModel___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_traceModel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_traceModel___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__1(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Rat_ofInt(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(lean_object* v_a_3_, lean_object* v_x_4_){
_start:
{
if (lean_obj_tag(v_x_4_) == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_box(0);
return v___x_5_;
}
else
{
lean_object* v_key_6_; lean_object* v_value_7_; lean_object* v_tail_8_; uint8_t v___x_9_; 
v_key_6_ = lean_ctor_get(v_x_4_, 0);
v_value_7_ = lean_ctor_get(v_x_4_, 1);
v_tail_8_ = lean_ctor_get(v_x_4_, 2);
v___x_9_ = lean_expr_eqv(v_key_6_, v_a_3_);
if (v___x_9_ == 0)
{
v_x_4_ = v_tail_8_;
goto _start;
}
else
{
lean_object* v___x_11_; 
lean_inc(v_value_7_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_7_);
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg___boxed(lean_object* v_a_12_, lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_12_, v_x_13_);
lean_dec(v_x_13_);
lean_dec_ref(v_a_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(lean_object* v_m_15_, lean_object* v_a_16_){
_start:
{
lean_object* v_buckets_17_; lean_object* v___x_18_; uint64_t v___x_19_; uint64_t v___x_20_; uint64_t v___x_21_; uint64_t v_fold_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___x_25_; size_t v___x_26_; size_t v___x_27_; size_t v___x_28_; size_t v___x_29_; size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_buckets_17_ = lean_ctor_get(v_m_15_, 1);
v___x_18_ = lean_array_get_size(v_buckets_17_);
v___x_19_ = l_Lean_Expr_hash(v_a_16_);
v___x_20_ = 32ULL;
v___x_21_ = lean_uint64_shift_right(v___x_19_, v___x_20_);
v_fold_22_ = lean_uint64_xor(v___x_19_, v___x_21_);
v___x_23_ = 16ULL;
v___x_24_ = lean_uint64_shift_right(v_fold_22_, v___x_23_);
v___x_25_ = lean_uint64_xor(v_fold_22_, v___x_24_);
v___x_26_ = lean_uint64_to_usize(v___x_25_);
v___x_27_ = lean_usize_of_nat(v___x_18_);
v___x_28_ = ((size_t)1ULL);
v___x_29_ = lean_usize_sub(v___x_27_, v___x_28_);
v___x_30_ = lean_usize_land(v___x_26_, v___x_29_);
v___x_31_ = lean_array_uget_borrowed(v_buckets_17_, v___x_30_);
v___x_32_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_16_, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg___boxed(lean_object* v_m_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_m_33_, v_a_34_);
lean_dec_ref(v_a_34_);
lean_dec_ref(v_m_33_);
return v_res_35_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(lean_object* v_a_36_, lean_object* v_v_37_, lean_object* v_other_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_a_36_, v_other_38_);
if (lean_obj_tag(v___x_39_) == 1)
{
lean_object* v_val_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v_val_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_val_40_);
lean_dec_ref_known(v___x_39_, 1);
v___x_41_ = l_Rat_ofInt(v_v_37_);
v___x_42_ = l_instDecidableEqRat_decEq(v_val_40_, v___x_41_);
lean_dec_ref(v___x_41_);
lean_dec(v_val_40_);
if (v___x_42_ == 0)
{
uint8_t v___x_43_; 
v___x_43_ = 1;
return v___x_43_;
}
else
{
uint8_t v___x_44_; 
v___x_44_ = 0;
return v___x_44_;
}
}
else
{
uint8_t v___x_45_; 
lean_dec(v___x_39_);
lean_dec(v_v_37_);
v___x_45_ = 1;
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq___boxed(lean_object* v_a_46_, lean_object* v_v_47_, lean_object* v_other_48_){
_start:
{
uint8_t v_res_49_; lean_object* v_r_50_; 
v_res_49_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_46_, v_v_47_, v_other_48_);
lean_dec_ref(v_other_48_);
lean_dec_ref(v_a_46_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(lean_object* v_00_u03b2_51_, lean_object* v_m_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_m_52_, v_a_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___boxed(lean_object* v_00_u03b2_55_, lean_object* v_m_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(v_00_u03b2_55_, v_m_56_, v_a_57_);
lean_dec_ref(v_a_57_);
lean_dec_ref(v_m_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(lean_object* v_00_u03b2_59_, lean_object* v_a_60_, lean_object* v_x_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_60_, v_x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___boxed(lean_object* v_00_u03b2_63_, lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(v_00_u03b2_63_, v_a_64_, v_x_65_);
lean_dec(v_x_65_);
lean_dec_ref(v_a_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(lean_object* v_goal_76_, lean_object* v_e_77_, lean_object* v_a_78_, lean_object* v_v_79_, lean_object* v_as_x27_80_, lean_object* v_b_81_){
_start:
{
if (lean_obj_tag(v_as_x27_80_) == 0)
{
lean_dec(v_v_79_);
lean_inc_ref(v_b_81_);
return v_b_81_;
}
else
{
lean_object* v_head_82_; lean_object* v_tail_83_; lean_object* v___x_84_; uint8_t v___y_86_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v_head_82_ = lean_ctor_get(v_as_x27_80_, 0);
v_tail_83_ = lean_ctor_get(v_as_x27_80_, 1);
v___x_84_ = lean_box(0);
v___x_90_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0));
v___x_91_ = l_Lean_Expr_cleanupAnnotations(v_head_82_);
v___x_92_ = l_Lean_Expr_isApp(v___x_91_);
if (v___x_92_ == 0)
{
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = l_Lean_Expr_appFnCleanup___redArg(v___x_91_);
v___x_95_ = l_Lean_Expr_isApp(v___x_94_);
if (v___x_95_ == 0)
{
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = l_Lean_Expr_appFnCleanup___redArg(v___x_94_);
v___x_98_ = l_Lean_Expr_isApp(v___x_97_);
if (v___x_98_ == 0)
{
lean_dec_ref(v___x_97_);
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_100_ = l_Lean_Expr_appFnCleanup___redArg(v___x_97_);
lean_dec_ref(v___x_97_);
v___x_101_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2));
v___x_102_ = l_Lean_Expr_isConstOf(v___x_100_, v___x_101_);
lean_dec_ref(v___x_100_);
if (v___x_102_ == 0)
{
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_76_, v_head_82_);
if (lean_obj_tag(v___x_104_) == 1)
{
lean_object* v_val_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_val_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4));
v___x_107_ = l_Lean_Expr_isConstOf(v_val_105_, v___x_106_);
lean_dec(v_val_105_);
if (v___x_107_ == 0)
{
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_object* v_arg_109_; lean_object* v___x_110_; 
v_arg_109_ = lean_ctor_get(v___x_94_, 1);
lean_inc_ref(v_arg_109_);
lean_dec_ref(v___x_94_);
v___x_110_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_76_, v_arg_109_);
lean_dec_ref(v_arg_109_);
if (lean_obj_tag(v___x_110_) == 1)
{
lean_object* v_val_111_; lean_object* v_arg_112_; lean_object* v___x_113_; 
v_val_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_val_111_);
lean_dec_ref_known(v___x_110_, 1);
v_arg_112_ = lean_ctor_get(v___x_91_, 1);
lean_inc_ref(v_arg_112_);
lean_dec_ref(v___x_91_);
v___x_113_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_76_, v_arg_112_);
lean_dec_ref(v_arg_112_);
if (lean_obj_tag(v___x_113_) == 1)
{
lean_object* v_val_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_132_; 
v_val_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_132_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_132_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_val_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_132_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___y_119_; uint8_t v___x_124_; 
v___x_124_ = lean_expr_eqv(v_val_111_, v_e_77_);
if (v___x_124_ == 0)
{
lean_del_object(v___x_116_);
v___y_119_ = v___x_124_;
goto v___jp_118_;
}
else
{
uint8_t v___x_125_; 
lean_inc(v_v_79_);
v___x_125_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_78_, v_v_79_, v_val_114_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_128_; 
lean_dec(v_val_114_);
lean_dec(v_val_111_);
lean_dec(v_v_79_);
v___x_126_ = lean_box(v___x_125_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 0, v___x_126_);
v___x_128_ = v___x_116_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_126_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_84_);
return v___x_129_;
}
}
else
{
uint8_t v___x_131_; 
lean_del_object(v___x_116_);
v___x_131_ = 0;
v___y_119_ = v___x_131_;
goto v___jp_118_;
}
}
v___jp_118_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_expr_eqv(v_val_114_, v_e_77_);
lean_dec(v_val_114_);
if (v___x_120_ == 0)
{
lean_dec(v_val_111_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
uint8_t v___x_122_; 
lean_inc(v_v_79_);
v___x_122_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_78_, v_v_79_, v_val_111_);
lean_dec(v_val_111_);
if (v___x_122_ == 0)
{
lean_dec(v_v_79_);
v___y_86_ = v___y_119_;
goto v___jp_85_;
}
else
{
if (v___y_119_ == 0)
{
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
else
{
lean_dec(v_v_79_);
v___y_86_ = v___y_119_;
goto v___jp_85_;
}
}
}
}
}
}
else
{
lean_dec(v___x_113_);
lean_dec(v_val_111_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
}
else
{
lean_dec(v___x_110_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
}
}
else
{
lean_dec(v___x_104_);
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_91_);
v_as_x27_80_ = v_tail_83_;
v_b_81_ = v___x_90_;
goto _start;
}
}
}
}
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_box(v___y_86_);
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_84_);
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___boxed(lean_object* v_goal_136_, lean_object* v_e_137_, lean_object* v_a_138_, lean_object* v_v_139_, lean_object* v_as_x27_140_, lean_object* v_b_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_136_, v_e_137_, v_a_138_, v_v_139_, v_as_x27_140_, v_b_141_);
lean_dec_ref(v_b_141_);
lean_dec(v_as_x27_140_);
lean_dec_ref(v_a_138_);
lean_dec_ref(v_e_137_);
lean_dec_ref(v_goal_136_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_143_, lean_object* v_vals_144_, lean_object* v_i_145_, lean_object* v_k_146_){
_start:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_array_get_size(v_keys_143_);
v___x_148_ = lean_nat_dec_lt(v_i_145_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
lean_dec(v_i_145_);
v___x_149_ = lean_box(0);
return v___x_149_;
}
else
{
lean_object* v_k_x27_150_; size_t v___x_151_; size_t v___x_152_; uint8_t v___x_153_; 
v_k_x27_150_ = lean_array_fget_borrowed(v_keys_143_, v_i_145_);
v___x_151_ = lean_ptr_addr(v_k_146_);
v___x_152_ = lean_ptr_addr(v_k_x27_150_);
v___x_153_ = lean_usize_dec_eq(v___x_151_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_nat_add(v_i_145_, v___x_154_);
lean_dec(v_i_145_);
v_i_145_ = v___x_155_;
goto _start;
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_array_fget_borrowed(v_vals_144_, v_i_145_);
lean_dec(v_i_145_);
lean_inc(v___x_157_);
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_159_, lean_object* v_vals_160_, lean_object* v_i_161_, lean_object* v_k_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_keys_159_, v_vals_160_, v_i_161_, v_k_162_);
lean_dec_ref(v_k_162_);
lean_dec_ref(v_vals_160_);
lean_dec_ref(v_keys_159_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(lean_object* v_x_164_, size_t v_x_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v_es_167_; lean_object* v___x_168_; size_t v___x_169_; size_t v___x_170_; lean_object* v_j_171_; lean_object* v___x_172_; 
v_es_167_ = lean_ctor_get(v_x_164_, 0);
v___x_168_ = lean_box(2);
v___x_169_ = ((size_t)31ULL);
v___x_170_ = lean_usize_land(v_x_165_, v___x_169_);
v_j_171_ = lean_usize_to_nat(v___x_170_);
v___x_172_ = lean_array_get_borrowed(v___x_168_, v_es_167_, v_j_171_);
lean_dec(v_j_171_);
switch(lean_obj_tag(v___x_172_))
{
case 0:
{
lean_object* v_key_173_; lean_object* v_val_174_; size_t v___x_175_; size_t v___x_176_; uint8_t v___x_177_; 
v_key_173_ = lean_ctor_get(v___x_172_, 0);
v_val_174_ = lean_ctor_get(v___x_172_, 1);
v___x_175_ = lean_ptr_addr(v_x_166_);
v___x_176_ = lean_ptr_addr(v_key_173_);
v___x_177_ = lean_usize_dec_eq(v___x_175_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
lean_object* v___x_179_; 
lean_inc(v_val_174_);
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v_val_174_);
return v___x_179_;
}
}
case 1:
{
lean_object* v_node_180_; size_t v___x_181_; size_t v___x_182_; 
v_node_180_ = lean_ctor_get(v___x_172_, 0);
v___x_181_ = ((size_t)5ULL);
v___x_182_ = lean_usize_shift_right(v_x_165_, v___x_181_);
v_x_164_ = v_node_180_;
v_x_165_ = v___x_182_;
goto _start;
}
default: 
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
}
}
else
{
lean_object* v_ks_185_; lean_object* v_vs_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_ks_185_ = lean_ctor_get(v_x_164_, 0);
v_vs_186_ = lean_ctor_get(v_x_164_, 1);
v___x_187_ = lean_unsigned_to_nat(0u);
v___x_188_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_ks_185_, v_vs_186_, v___x_187_, v_x_166_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg___boxed(lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
size_t v_x_1692__boxed_192_; lean_object* v_res_193_; 
v_x_1692__boxed_192_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_193_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_189_, v_x_1692__boxed_192_, v_x_191_);
lean_dec_ref(v_x_191_);
lean_dec_ref(v_x_189_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
size_t v___x_196_; size_t v___x_197_; size_t v___x_198_; uint64_t v___x_199_; size_t v___x_200_; lean_object* v___x_201_; 
v___x_196_ = lean_ptr_addr(v_x_195_);
v___x_197_ = ((size_t)3ULL);
v___x_198_ = lean_usize_shift_right(v___x_196_, v___x_197_);
v___x_199_ = lean_usize_to_uint64(v___x_198_);
v___x_200_ = lean_uint64_to_usize(v___x_199_);
v___x_201_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_194_, v___x_200_, v_x_195_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg___boxed(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_x_202_, v_x_203_);
lean_dec_ref(v_x_203_);
lean_dec_ref(v_x_202_);
return v_res_204_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(lean_object* v_goal_205_, lean_object* v_a_206_, lean_object* v_e_207_, lean_object* v_v_208_){
_start:
{
lean_object* v_toGoalState_209_; lean_object* v_parents_210_; lean_object* v___x_211_; 
v_toGoalState_209_ = lean_ctor_get(v_goal_205_, 0);
v_parents_210_ = lean_ctor_get(v_toGoalState_209_, 3);
v___x_211_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_parents_210_, v_e_207_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v_val_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v_fst_216_; 
v_val_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v___x_211_, 1);
v___x_213_ = l_Lean_Meta_Grind_ParentSet_elems(v_val_212_);
lean_dec(v_val_212_);
v___x_214_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0));
v___x_215_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_205_, v_e_207_, v_a_206_, v_v_208_, v___x_213_, v___x_214_);
lean_dec(v___x_213_);
v_fst_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_fst_216_);
lean_dec_ref(v___x_215_);
if (lean_obj_tag(v_fst_216_) == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 1;
return v___x_217_;
}
else
{
lean_object* v_val_218_; uint8_t v___x_219_; 
v_val_218_ = lean_ctor_get(v_fst_216_, 0);
lean_inc(v_val_218_);
lean_dec_ref_known(v_fst_216_, 1);
v___x_219_ = lean_unbox(v_val_218_);
lean_dec(v_val_218_);
return v___x_219_;
}
}
else
{
uint8_t v___x_220_; 
lean_dec(v___x_211_);
lean_dec(v_v_208_);
v___x_220_ = 1;
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs___boxed(lean_object* v_goal_221_, lean_object* v_a_222_, lean_object* v_e_223_, lean_object* v_v_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(v_goal_221_, v_a_222_, v_e_223_, v_v_224_);
lean_dec_ref(v_e_223_);
lean_dec_ref(v_a_222_);
lean_dec_ref(v_goal_221_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(lean_object* v_00_u03b2_227_, lean_object* v_x_228_, lean_object* v_x_229_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_x_228_, v_x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___boxed(lean_object* v_00_u03b2_231_, lean_object* v_x_232_, lean_object* v_x_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(v_00_u03b2_231_, v_x_232_, v_x_233_);
lean_dec_ref(v_x_233_);
lean_dec_ref(v_x_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(lean_object* v_goal_235_, lean_object* v_e_236_, lean_object* v_a_237_, lean_object* v_v_238_, lean_object* v_as_239_, lean_object* v_as_x27_240_, lean_object* v_b_241_, lean_object* v_a_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_235_, v_e_236_, v_a_237_, v_v_238_, v_as_x27_240_, v_b_241_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___boxed(lean_object* v_goal_244_, lean_object* v_e_245_, lean_object* v_a_246_, lean_object* v_v_247_, lean_object* v_as_248_, lean_object* v_as_x27_249_, lean_object* v_b_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(v_goal_244_, v_e_245_, v_a_246_, v_v_247_, v_as_248_, v_as_x27_249_, v_b_250_, v_a_251_);
lean_dec_ref(v_b_250_);
lean_dec(v_as_x27_249_);
lean_dec(v_as_248_);
lean_dec_ref(v_a_246_);
lean_dec_ref(v_e_245_);
lean_dec_ref(v_goal_244_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(lean_object* v_00_u03b2_253_, lean_object* v_x_254_, size_t v_x_255_, lean_object* v_x_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_254_, v_x_255_, v_x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_258_, lean_object* v_x_259_, lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
size_t v_x_1797__boxed_262_; lean_object* v_res_263_; 
v_x_1797__boxed_262_ = lean_unbox_usize(v_x_260_);
lean_dec(v_x_260_);
v_res_263_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(v_00_u03b2_258_, v_x_259_, v_x_1797__boxed_262_, v_x_261_);
lean_dec_ref(v_x_261_);
lean_dec_ref(v_x_259_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_264_, lean_object* v_keys_265_, lean_object* v_vals_266_, lean_object* v_heq_267_, lean_object* v_i_268_, lean_object* v_k_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_keys_265_, v_vals_266_, v_i_268_, v_k_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_271_, lean_object* v_keys_272_, lean_object* v_vals_273_, lean_object* v_heq_274_, lean_object* v_i_275_, lean_object* v_k_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(v_00_u03b2_271_, v_keys_272_, v_vals_273_, v_heq_274_, v_i_275_, v_k_276_);
lean_dec_ref(v_k_276_);
lean_dec_ref(v_vals_273_);
lean_dec_ref(v_keys_272_);
return v_res_277_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
uint8_t v___x_280_; 
v___x_280_ = 0;
return v___x_280_;
}
else
{
lean_object* v_key_281_; lean_object* v_tail_282_; uint8_t v___x_283_; 
v_key_281_ = lean_ctor_get(v_x_279_, 0);
v_tail_282_ = lean_ctor_get(v_x_279_, 2);
v___x_283_ = lean_int_dec_eq(v_key_281_, v_a_278_);
if (v___x_283_ == 0)
{
v_x_279_ = v_tail_282_;
goto _start;
}
else
{
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_285_, lean_object* v_x_286_){
_start:
{
uint8_t v_res_287_; lean_object* v_r_288_; 
v_res_287_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_285_, v_x_286_);
lean_dec(v_x_286_);
lean_dec(v_a_285_);
v_r_288_ = lean_box(v_res_287_);
return v_r_288_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v_natZero_289_; lean_object* v_intZero_290_; 
v_natZero_289_ = lean_unsigned_to_nat(0u);
v_intZero_290_ = lean_nat_to_int(v_natZero_289_);
return v_intZero_290_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(lean_object* v_m_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_buckets_293_; lean_object* v___x_294_; uint64_t v___y_296_; lean_object* v_intZero_310_; uint8_t v_isNeg_311_; 
v_buckets_293_ = lean_ctor_get(v_m_291_, 1);
v___x_294_ = lean_array_get_size(v_buckets_293_);
v_intZero_310_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_311_ = lean_int_dec_lt(v_a_292_, v_intZero_310_);
if (v_isNeg_311_ == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint64_t v___x_315_; 
v_a_312_ = lean_nat_abs(v_a_292_);
v___x_313_ = lean_unsigned_to_nat(2u);
v___x_314_ = lean_nat_mul(v___x_313_, v_a_312_);
lean_dec(v_a_312_);
v___x_315_ = lean_uint64_of_nat(v___x_314_);
lean_dec(v___x_314_);
v___y_296_ = v___x_315_;
goto v___jp_295_;
}
else
{
lean_object* v_abs_316_; lean_object* v_one_317_; lean_object* v_a_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; uint64_t v___x_322_; 
v_abs_316_ = lean_nat_abs(v_a_292_);
v_one_317_ = lean_unsigned_to_nat(1u);
v_a_318_ = lean_nat_sub(v_abs_316_, v_one_317_);
lean_dec(v_abs_316_);
v___x_319_ = lean_unsigned_to_nat(2u);
v___x_320_ = lean_nat_mul(v___x_319_, v_a_318_);
lean_dec(v_a_318_);
v___x_321_ = lean_nat_add(v___x_320_, v_one_317_);
lean_dec(v___x_320_);
v___x_322_ = lean_uint64_of_nat(v___x_321_);
lean_dec(v___x_321_);
v___y_296_ = v___x_322_;
goto v___jp_295_;
}
v___jp_295_:
{
uint64_t v___x_297_; uint64_t v___x_298_; uint64_t v_fold_299_; uint64_t v___x_300_; uint64_t v___x_301_; uint64_t v___x_302_; size_t v___x_303_; size_t v___x_304_; size_t v___x_305_; size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_297_ = 32ULL;
v___x_298_ = lean_uint64_shift_right(v___y_296_, v___x_297_);
v_fold_299_ = lean_uint64_xor(v___y_296_, v___x_298_);
v___x_300_ = 16ULL;
v___x_301_ = lean_uint64_shift_right(v_fold_299_, v___x_300_);
v___x_302_ = lean_uint64_xor(v_fold_299_, v___x_301_);
v___x_303_ = lean_uint64_to_usize(v___x_302_);
v___x_304_ = lean_usize_of_nat(v___x_294_);
v___x_305_ = ((size_t)1ULL);
v___x_306_ = lean_usize_sub(v___x_304_, v___x_305_);
v___x_307_ = lean_usize_land(v___x_303_, v___x_306_);
v___x_308_ = lean_array_uget_borrowed(v_buckets_293_, v___x_307_);
v___x_309_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_292_, v___x_308_);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___boxed(lean_object* v_m_323_, lean_object* v_a_324_){
_start:
{
uint8_t v_res_325_; lean_object* v_r_326_; 
v_res_325_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_m_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_m_323_);
v_r_326_ = lean_box(v_res_325_);
return v_r_326_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(1u);
v___x_328_ = lean_nat_to_int(v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(lean_object* v_goal_329_, lean_object* v_a_330_, lean_object* v_e_331_, lean_object* v_alreadyUsed_332_, lean_object* v_next_333_){
_start:
{
uint8_t v___x_334_; 
v___x_334_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_alreadyUsed_332_, v_next_333_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
lean_inc(v_next_333_);
v___x_335_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(v_goal_329_, v_a_330_, v_e_331_, v_next_333_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_337_ = lean_int_add(v_next_333_, v___x_336_);
lean_dec(v_next_333_);
v_next_333_ = v___x_337_;
goto _start;
}
else
{
return v_next_333_;
}
}
else
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_340_ = lean_int_add(v_next_333_, v___x_339_);
lean_dec(v_next_333_);
v_next_333_ = v___x_340_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___boxed(lean_object* v_goal_342_, lean_object* v_a_343_, lean_object* v_e_344_, lean_object* v_alreadyUsed_345_, lean_object* v_next_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_342_, v_a_343_, v_e_344_, v_alreadyUsed_345_, v_next_346_);
lean_dec_ref(v_alreadyUsed_345_);
lean_dec_ref(v_e_344_);
lean_dec_ref(v_a_343_);
lean_dec_ref(v_goal_342_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(lean_object* v_00_u03b2_348_, lean_object* v_m_349_, lean_object* v_a_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_m_349_, v_a_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___boxed(lean_object* v_00_u03b2_352_, lean_object* v_m_353_, lean_object* v_a_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(v_00_u03b2_352_, v_m_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_m_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(lean_object* v_00_u03b2_357_, lean_object* v_a_358_, lean_object* v_x_359_){
_start:
{
uint8_t v___x_360_; 
v___x_360_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_358_, v_x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_361_, lean_object* v_a_362_, lean_object* v_x_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(v_00_u03b2_361_, v_a_362_, v_x_363_);
lean_dec(v_x_363_);
lean_dec(v_a_362_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue(lean_object* v_goal_366_, lean_object* v_a_367_, lean_object* v_e_368_, lean_object* v_next_369_, lean_object* v_alreadyUsed_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_366_, v_a_367_, v_e_368_, v_alreadyUsed_370_, v_next_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue___boxed(lean_object* v_goal_372_, lean_object* v_a_373_, lean_object* v_e_374_, lean_object* v_next_375_, lean_object* v_alreadyUsed_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_Meta_Grind_Arith_pickUnusedValue(v_goal_372_, v_a_373_, v_e_374_, v_next_375_, v_alreadyUsed_376_);
lean_dec_ref(v_alreadyUsed_376_);
lean_dec_ref(v_e_374_);
lean_dec_ref(v_a_373_);
lean_dec_ref(v_goal_372_);
return v_res_377_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInterpretedTerm(lean_object* v_e_472_){
_start:
{
uint8_t v___x_478_; 
v___x_478_ = l_Lean_Meta_Grind_Arith_isNatNum(v_e_472_);
if (v___x_478_ == 0)
{
uint8_t v___x_479_; 
v___x_479_ = l_Lean_Meta_Grind_Arith_isIntNum(v_e_472_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7));
v___x_481_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10));
v___x_483_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13));
v___x_485_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_486_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16));
v___x_487_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19));
v___x_489_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22));
v___x_491_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25));
v___x_493_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28));
v___x_495_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31));
v___x_497_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34));
v___x_499_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37));
v___x_501_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_500_);
if (v___x_501_ == 0)
{
uint8_t v___x_502_; 
v___x_502_ = l_Lean_Expr_isIte(v_e_472_);
if (v___x_502_ == 0)
{
uint8_t v___x_503_; 
v___x_503_ = l_Lean_Expr_isDIte(v_e_472_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40));
v___x_505_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42));
v___x_507_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_508_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45));
v___x_509_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48));
v___x_511_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__54));
v___x_513_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_512_);
if (v___x_513_ == 0)
{
if (lean_obj_tag(v_e_472_) == 9)
{
lean_object* v_a_514_; 
v_a_514_ = lean_ctor_get(v_e_472_, 0);
if (lean_obj_tag(v_a_514_) == 0)
{
uint8_t v___x_515_; 
v___x_515_ = 1;
return v___x_515_;
}
else
{
goto v___jp_473_;
}
}
else
{
goto v___jp_473_;
}
}
else
{
return v___x_513_;
}
}
else
{
return v___x_511_;
}
}
else
{
return v___x_509_;
}
}
else
{
return v___x_507_;
}
}
else
{
return v___x_505_;
}
}
else
{
return v___x_503_;
}
}
else
{
return v___x_502_;
}
}
else
{
return v___x_501_;
}
}
else
{
return v___x_499_;
}
}
else
{
return v___x_497_;
}
}
else
{
return v___x_495_;
}
}
else
{
return v___x_493_;
}
}
else
{
return v___x_491_;
}
}
else
{
return v___x_489_;
}
}
else
{
return v___x_487_;
}
}
else
{
return v___x_485_;
}
}
else
{
return v___x_483_;
}
}
else
{
return v___x_481_;
}
}
else
{
return v___x_479_;
}
}
else
{
return v___x_478_;
}
v___jp_473_:
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2));
v___x_475_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4));
v___x_477_ = l_Lean_Expr_isAppOf(v_e_472_, v___x_476_);
return v___x_477_;
}
else
{
return v___x_475_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___boxed(lean_object* v_e_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = l_Lean_Meta_Grind_Arith_isInterpretedTerm(v_e_516_);
lean_dec_ref(v_e_516_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_520_) == 0)
{
return v_x_519_;
}
else
{
lean_object* v_key_521_; lean_object* v_value_522_; lean_object* v_tail_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_546_; 
v_key_521_ = lean_ctor_get(v_x_520_, 0);
v_value_522_ = lean_ctor_get(v_x_520_, 1);
v_tail_523_ = lean_ctor_get(v_x_520_, 2);
v_isSharedCheck_546_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_546_ == 0)
{
v___x_525_ = v_x_520_;
v_isShared_526_ = v_isSharedCheck_546_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_tail_523_);
lean_inc(v_value_522_);
lean_inc(v_key_521_);
lean_dec(v_x_520_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_546_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; uint64_t v___x_528_; uint64_t v___x_529_; uint64_t v___x_530_; uint64_t v_fold_531_; uint64_t v___x_532_; uint64_t v___x_533_; uint64_t v___x_534_; size_t v___x_535_; size_t v___x_536_; size_t v___x_537_; size_t v___x_538_; size_t v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_527_ = lean_array_get_size(v_x_519_);
v___x_528_ = l_Lean_Expr_hash(v_key_521_);
v___x_529_ = 32ULL;
v___x_530_ = lean_uint64_shift_right(v___x_528_, v___x_529_);
v_fold_531_ = lean_uint64_xor(v___x_528_, v___x_530_);
v___x_532_ = 16ULL;
v___x_533_ = lean_uint64_shift_right(v_fold_531_, v___x_532_);
v___x_534_ = lean_uint64_xor(v_fold_531_, v___x_533_);
v___x_535_ = lean_uint64_to_usize(v___x_534_);
v___x_536_ = lean_usize_of_nat(v___x_527_);
v___x_537_ = ((size_t)1ULL);
v___x_538_ = lean_usize_sub(v___x_536_, v___x_537_);
v___x_539_ = lean_usize_land(v___x_535_, v___x_538_);
v___x_540_ = lean_array_uget_borrowed(v_x_519_, v___x_539_);
lean_inc(v___x_540_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 2, v___x_540_);
v___x_542_ = v___x_525_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_key_521_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_value_522_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v___x_540_);
v___x_542_ = v_reuseFailAlloc_545_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; 
v___x_543_ = lean_array_uset(v_x_519_, v___x_539_, v___x_542_);
v_x_519_ = v___x_543_;
v_x_520_ = v_tail_523_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(lean_object* v_i_547_, lean_object* v_source_548_, lean_object* v_target_549_){
_start:
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = lean_array_get_size(v_source_548_);
v___x_551_ = lean_nat_dec_lt(v_i_547_, v___x_550_);
if (v___x_551_ == 0)
{
lean_dec_ref(v_source_548_);
lean_dec(v_i_547_);
return v_target_549_;
}
else
{
lean_object* v_es_552_; lean_object* v___x_553_; lean_object* v_source_554_; lean_object* v_target_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_es_552_ = lean_array_fget(v_source_548_, v_i_547_);
v___x_553_ = lean_box(0);
v_source_554_ = lean_array_fset(v_source_548_, v_i_547_, v___x_553_);
v_target_555_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(v_target_549_, v_es_552_);
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = lean_nat_add(v_i_547_, v___x_556_);
lean_dec(v_i_547_);
v_i_547_ = v___x_557_;
v_source_548_ = v_source_554_;
v_target_549_ = v_target_555_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(lean_object* v_data_559_){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v_nbuckets_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_560_ = lean_array_get_size(v_data_559_);
v___x_561_ = lean_unsigned_to_nat(2u);
v_nbuckets_562_ = lean_nat_mul(v___x_560_, v___x_561_);
v___x_563_ = lean_unsigned_to_nat(0u);
v___x_564_ = lean_box(0);
v___x_565_ = lean_mk_array(v_nbuckets_562_, v___x_564_);
v___x_566_ = lean_array_propagate_mark(v_data_559_, v___x_565_);
v___x_567_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(v___x_563_, v_data_559_, v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(lean_object* v_a_568_, lean_object* v_b_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_dec(v_b_569_);
lean_dec_ref(v_a_568_);
return v_x_570_;
}
else
{
lean_object* v_key_571_; lean_object* v_value_572_; lean_object* v_tail_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_585_; 
v_key_571_ = lean_ctor_get(v_x_570_, 0);
v_value_572_ = lean_ctor_get(v_x_570_, 1);
v_tail_573_ = lean_ctor_get(v_x_570_, 2);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_570_);
if (v_isSharedCheck_585_ == 0)
{
v___x_575_ = v_x_570_;
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_tail_573_);
lean_inc(v_value_572_);
lean_inc(v_key_571_);
lean_dec(v_x_570_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_585_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_expr_eqv(v_key_571_, v_a_568_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_578_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_568_, v_b_569_, v_tail_573_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 2, v___x_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_key_571_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_value_572_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
else
{
lean_object* v___x_583_; 
lean_dec(v_value_572_);
lean_dec(v_key_571_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v_b_569_);
lean_ctor_set(v___x_575_, 0, v_a_568_);
v___x_583_ = v___x_575_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_568_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_b_569_);
lean_ctor_set(v_reuseFailAlloc_584_, 2, v_tail_573_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(lean_object* v_a_586_, lean_object* v_x_587_){
_start:
{
if (lean_obj_tag(v_x_587_) == 0)
{
uint8_t v___x_588_; 
v___x_588_ = 0;
return v___x_588_;
}
else
{
lean_object* v_key_589_; lean_object* v_tail_590_; uint8_t v___x_591_; 
v_key_589_ = lean_ctor_get(v_x_587_, 0);
v_tail_590_ = lean_ctor_get(v_x_587_, 2);
v___x_591_ = lean_expr_eqv(v_key_589_, v_a_586_);
if (v___x_591_ == 0)
{
v_x_587_ = v_tail_590_;
goto _start;
}
else
{
return v___x_591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg___boxed(lean_object* v_a_593_, lean_object* v_x_594_){
_start:
{
uint8_t v_res_595_; lean_object* v_r_596_; 
v_res_595_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_593_, v_x_594_);
lean_dec(v_x_594_);
lean_dec_ref(v_a_593_);
v_r_596_ = lean_box(v_res_595_);
return v_r_596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(lean_object* v_m_597_, lean_object* v_a_598_, lean_object* v_b_599_){
_start:
{
lean_object* v_size_600_; lean_object* v_buckets_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_644_; 
v_size_600_ = lean_ctor_get(v_m_597_, 0);
v_buckets_601_ = lean_ctor_get(v_m_597_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_m_597_);
if (v_isSharedCheck_644_ == 0)
{
v___x_603_ = v_m_597_;
v_isShared_604_ = v_isSharedCheck_644_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_buckets_601_);
lean_inc(v_size_600_);
lean_dec(v_m_597_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_644_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; uint64_t v___x_606_; uint64_t v___x_607_; uint64_t v___x_608_; uint64_t v_fold_609_; uint64_t v___x_610_; uint64_t v___x_611_; uint64_t v___x_612_; size_t v___x_613_; size_t v___x_614_; size_t v___x_615_; size_t v___x_616_; size_t v___x_617_; lean_object* v_bkt_618_; uint8_t v___x_619_; 
v___x_605_ = lean_array_get_size(v_buckets_601_);
v___x_606_ = l_Lean_Expr_hash(v_a_598_);
v___x_607_ = 32ULL;
v___x_608_ = lean_uint64_shift_right(v___x_606_, v___x_607_);
v_fold_609_ = lean_uint64_xor(v___x_606_, v___x_608_);
v___x_610_ = 16ULL;
v___x_611_ = lean_uint64_shift_right(v_fold_609_, v___x_610_);
v___x_612_ = lean_uint64_xor(v_fold_609_, v___x_611_);
v___x_613_ = lean_uint64_to_usize(v___x_612_);
v___x_614_ = lean_usize_of_nat(v___x_605_);
v___x_615_ = ((size_t)1ULL);
v___x_616_ = lean_usize_sub(v___x_614_, v___x_615_);
v___x_617_ = lean_usize_land(v___x_613_, v___x_616_);
v_bkt_618_ = lean_array_uget_borrowed(v_buckets_601_, v___x_617_);
v___x_619_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_598_, v_bkt_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v_size_x27_621_; lean_object* v___x_622_; lean_object* v_buckets_x27_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_620_ = lean_unsigned_to_nat(1u);
v_size_x27_621_ = lean_nat_add(v_size_600_, v___x_620_);
lean_dec(v_size_600_);
lean_inc(v_bkt_618_);
v___x_622_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_622_, 0, v_a_598_);
lean_ctor_set(v___x_622_, 1, v_b_599_);
lean_ctor_set(v___x_622_, 2, v_bkt_618_);
v_buckets_x27_623_ = lean_array_uset(v_buckets_601_, v___x_617_, v___x_622_);
v___x_624_ = lean_unsigned_to_nat(4u);
v___x_625_ = lean_nat_mul(v_size_x27_621_, v___x_624_);
v___x_626_ = lean_unsigned_to_nat(3u);
v___x_627_ = lean_nat_div(v___x_625_, v___x_626_);
lean_dec(v___x_625_);
v___x_628_ = lean_array_get_size(v_buckets_x27_623_);
v___x_629_ = lean_nat_dec_le(v___x_627_, v___x_628_);
lean_dec(v___x_627_);
if (v___x_629_ == 0)
{
lean_object* v_val_630_; lean_object* v___x_632_; 
v_val_630_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(v_buckets_x27_623_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v_val_630_);
lean_ctor_set(v___x_603_, 0, v_size_x27_621_);
v___x_632_ = v___x_603_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_size_x27_621_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_val_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
else
{
lean_object* v___x_635_; 
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v_buckets_x27_623_);
lean_ctor_set(v___x_603_, 0, v_size_x27_621_);
v___x_635_ = v___x_603_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_size_x27_621_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_buckets_x27_623_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
else
{
lean_object* v___x_637_; lean_object* v_buckets_x27_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
lean_inc(v_bkt_618_);
v___x_637_ = lean_box(0);
v_buckets_x27_638_ = lean_array_uset(v_buckets_601_, v___x_617_, v___x_637_);
v___x_639_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_598_, v_b_599_, v_bkt_618_);
v___x_640_ = lean_array_uset(v_buckets_x27_638_, v___x_617_, v___x_639_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v___x_640_);
v___x_642_ = v___x_603_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_size_600_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(lean_object* v_v_645_, lean_object* v_as_x27_646_, lean_object* v_b_647_){
_start:
{
if (lean_obj_tag(v_as_x27_646_) == 0)
{
lean_dec_ref(v_v_645_);
return v_b_647_;
}
else
{
lean_object* v_head_648_; lean_object* v_tail_649_; lean_object* v___x_650_; 
v_head_648_ = lean_ctor_get(v_as_x27_646_, 0);
v_tail_649_ = lean_ctor_get(v_as_x27_646_, 1);
lean_inc_ref(v_v_645_);
lean_inc(v_head_648_);
v___x_650_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(v_b_647_, v_head_648_, v_v_645_);
v_as_x27_646_ = v_tail_649_;
v_b_647_ = v___x_650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg___boxed(lean_object* v_v_652_, lean_object* v_as_x27_653_, lean_object* v_b_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_652_, v_as_x27_653_, v_b_654_);
lean_dec(v_as_x27_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc(lean_object* v_goal_656_, lean_object* v_e_657_, lean_object* v_v_658_, lean_object* v_a_659_){
_start:
{
uint8_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_660_ = 0;
v___x_661_ = l_Lean_Meta_Grind_Goal_getEqc(v_goal_656_, v_e_657_, v___x_660_);
v___x_662_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_658_, v___x_661_, v_a_659_);
lean_dec(v___x_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc___boxed(lean_object* v_goal_663_, lean_object* v_e_664_, lean_object* v_v_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_663_, v_e_664_, v_v_665_, v_a_666_);
lean_dec_ref(v_goal_663_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0(lean_object* v_00_u03b2_668_, lean_object* v_m_669_, lean_object* v_a_670_, lean_object* v_b_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(v_m_669_, v_a_670_, v_b_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(lean_object* v_v_673_, lean_object* v_as_674_, lean_object* v_as_x27_675_, lean_object* v_b_676_, lean_object* v_a_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_673_, v_as_x27_675_, v_b_676_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___boxed(lean_object* v_v_679_, lean_object* v_as_680_, lean_object* v_as_x27_681_, lean_object* v_b_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(v_v_679_, v_as_680_, v_as_x27_681_, v_b_682_, v_a_683_);
lean_dec(v_as_x27_681_);
lean_dec(v_as_680_);
return v_res_684_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(lean_object* v_00_u03b2_685_, lean_object* v_a_686_, lean_object* v_x_687_){
_start:
{
uint8_t v___x_688_; 
v___x_688_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_686_, v_x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_689_, lean_object* v_a_690_, lean_object* v_x_691_){
_start:
{
uint8_t v_res_692_; lean_object* v_r_693_; 
v_res_692_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(v_00_u03b2_689_, v_a_690_, v_x_691_);
lean_dec(v_x_691_);
lean_dec_ref(v_a_690_);
v_r_693_ = lean_box(v_res_692_);
return v_r_693_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1(lean_object* v_00_u03b2_694_, lean_object* v_data_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(v_data_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2(lean_object* v_00_u03b2_697_, lean_object* v_a_698_, lean_object* v_b_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_698_, v_b_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_702_, lean_object* v_i_703_, lean_object* v_source_704_, lean_object* v_target_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(v_i_703_, v_source_704_, v_target_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_707_, lean_object* v_x_708_, lean_object* v_x_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(v_x_708_, v_x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_x_711_, lean_object* v_x_712_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
return v_x_711_;
}
else
{
lean_object* v_key_713_; lean_object* v_value_714_; lean_object* v_tail_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_752_; 
v_key_713_ = lean_ctor_get(v_x_712_, 0);
v_value_714_ = lean_ctor_get(v_x_712_, 1);
v_tail_715_ = lean_ctor_get(v_x_712_, 2);
v_isSharedCheck_752_ = !lean_is_exclusive(v_x_712_);
if (v_isSharedCheck_752_ == 0)
{
v___x_717_ = v_x_712_;
v_isShared_718_ = v_isSharedCheck_752_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_tail_715_);
lean_inc(v_value_714_);
lean_inc(v_key_713_);
lean_dec(v_x_712_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_752_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; uint64_t v___y_721_; lean_object* v_intZero_739_; uint8_t v_isNeg_740_; 
v___x_719_ = lean_array_get_size(v_x_711_);
v_intZero_739_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_740_ = lean_int_dec_lt(v_key_713_, v_intZero_739_);
if (v_isNeg_740_ == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint64_t v___x_744_; 
v_a_741_ = lean_nat_abs(v_key_713_);
v___x_742_ = lean_unsigned_to_nat(2u);
v___x_743_ = lean_nat_mul(v___x_742_, v_a_741_);
lean_dec(v_a_741_);
v___x_744_ = lean_uint64_of_nat(v___x_743_);
lean_dec(v___x_743_);
v___y_721_ = v___x_744_;
goto v___jp_720_;
}
else
{
lean_object* v_abs_745_; lean_object* v_one_746_; lean_object* v_a_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint64_t v___x_751_; 
v_abs_745_ = lean_nat_abs(v_key_713_);
v_one_746_ = lean_unsigned_to_nat(1u);
v_a_747_ = lean_nat_sub(v_abs_745_, v_one_746_);
lean_dec(v_abs_745_);
v___x_748_ = lean_unsigned_to_nat(2u);
v___x_749_ = lean_nat_mul(v___x_748_, v_a_747_);
lean_dec(v_a_747_);
v___x_750_ = lean_nat_add(v___x_749_, v_one_746_);
lean_dec(v___x_749_);
v___x_751_ = lean_uint64_of_nat(v___x_750_);
lean_dec(v___x_750_);
v___y_721_ = v___x_751_;
goto v___jp_720_;
}
v___jp_720_:
{
uint64_t v___x_722_; uint64_t v___x_723_; uint64_t v_fold_724_; uint64_t v___x_725_; uint64_t v___x_726_; uint64_t v___x_727_; size_t v___x_728_; size_t v___x_729_; size_t v___x_730_; size_t v___x_731_; size_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_722_ = 32ULL;
v___x_723_ = lean_uint64_shift_right(v___y_721_, v___x_722_);
v_fold_724_ = lean_uint64_xor(v___y_721_, v___x_723_);
v___x_725_ = 16ULL;
v___x_726_ = lean_uint64_shift_right(v_fold_724_, v___x_725_);
v___x_727_ = lean_uint64_xor(v_fold_724_, v___x_726_);
v___x_728_ = lean_uint64_to_usize(v___x_727_);
v___x_729_ = lean_usize_of_nat(v___x_719_);
v___x_730_ = ((size_t)1ULL);
v___x_731_ = lean_usize_sub(v___x_729_, v___x_730_);
v___x_732_ = lean_usize_land(v___x_728_, v___x_731_);
v___x_733_ = lean_array_uget_borrowed(v_x_711_, v___x_732_);
lean_inc(v___x_733_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 2, v___x_733_);
v___x_735_ = v___x_717_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_key_713_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_value_714_);
lean_ctor_set(v_reuseFailAlloc_738_, 2, v___x_733_);
v___x_735_ = v_reuseFailAlloc_738_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; 
v___x_736_ = lean_array_uset(v_x_711_, v___x_732_, v___x_735_);
v_x_711_ = v___x_736_;
v_x_712_ = v_tail_715_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(lean_object* v_i_753_, lean_object* v_source_754_, lean_object* v_target_755_){
_start:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_array_get_size(v_source_754_);
v___x_757_ = lean_nat_dec_lt(v_i_753_, v___x_756_);
if (v___x_757_ == 0)
{
lean_dec_ref(v_source_754_);
lean_dec(v_i_753_);
return v_target_755_;
}
else
{
lean_object* v_es_758_; lean_object* v___x_759_; lean_object* v_source_760_; lean_object* v_target_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_es_758_ = lean_array_fget(v_source_754_, v_i_753_);
v___x_759_ = lean_box(0);
v_source_760_ = lean_array_fset(v_source_754_, v_i_753_, v___x_759_);
v_target_761_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(v_target_755_, v_es_758_);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_nat_add(v_i_753_, v___x_762_);
lean_dec(v_i_753_);
v_i_753_ = v___x_763_;
v_source_754_ = v_source_760_;
v_target_755_ = v_target_761_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(lean_object* v_data_765_){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v_nbuckets_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_766_ = lean_array_get_size(v_data_765_);
v___x_767_ = lean_unsigned_to_nat(2u);
v_nbuckets_768_ = lean_nat_mul(v___x_766_, v___x_767_);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_box(0);
v___x_771_ = lean_mk_array(v_nbuckets_768_, v___x_770_);
v___x_772_ = lean_array_propagate_mark(v_data_765_, v___x_771_);
v___x_773_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(v___x_769_, v_data_765_, v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(lean_object* v_m_774_, lean_object* v_a_775_, lean_object* v_b_776_){
_start:
{
lean_object* v_size_777_; lean_object* v_buckets_778_; lean_object* v___x_779_; uint64_t v___y_781_; lean_object* v_intZero_818_; uint8_t v_isNeg_819_; 
v_size_777_ = lean_ctor_get(v_m_774_, 0);
v_buckets_778_ = lean_ctor_get(v_m_774_, 1);
v___x_779_ = lean_array_get_size(v_buckets_778_);
v_intZero_818_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_819_ = lean_int_dec_lt(v_a_775_, v_intZero_818_);
if (v_isNeg_819_ == 0)
{
lean_object* v_a_820_; lean_object* v___x_821_; lean_object* v___x_822_; uint64_t v___x_823_; 
v_a_820_ = lean_nat_abs(v_a_775_);
v___x_821_ = lean_unsigned_to_nat(2u);
v___x_822_ = lean_nat_mul(v___x_821_, v_a_820_);
lean_dec(v_a_820_);
v___x_823_ = lean_uint64_of_nat(v___x_822_);
lean_dec(v___x_822_);
v___y_781_ = v___x_823_;
goto v___jp_780_;
}
else
{
lean_object* v_abs_824_; lean_object* v_one_825_; lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; uint64_t v___x_830_; 
v_abs_824_ = lean_nat_abs(v_a_775_);
v_one_825_ = lean_unsigned_to_nat(1u);
v_a_826_ = lean_nat_sub(v_abs_824_, v_one_825_);
lean_dec(v_abs_824_);
v___x_827_ = lean_unsigned_to_nat(2u);
v___x_828_ = lean_nat_mul(v___x_827_, v_a_826_);
lean_dec(v_a_826_);
v___x_829_ = lean_nat_add(v___x_828_, v_one_825_);
lean_dec(v___x_828_);
v___x_830_ = lean_uint64_of_nat(v___x_829_);
lean_dec(v___x_829_);
v___y_781_ = v___x_830_;
goto v___jp_780_;
}
v___jp_780_:
{
uint64_t v___x_782_; uint64_t v___x_783_; uint64_t v_fold_784_; uint64_t v___x_785_; uint64_t v___x_786_; uint64_t v___x_787_; size_t v___x_788_; size_t v___x_789_; size_t v___x_790_; size_t v___x_791_; size_t v___x_792_; lean_object* v_bkt_793_; uint8_t v___x_794_; 
v___x_782_ = 32ULL;
v___x_783_ = lean_uint64_shift_right(v___y_781_, v___x_782_);
v_fold_784_ = lean_uint64_xor(v___y_781_, v___x_783_);
v___x_785_ = 16ULL;
v___x_786_ = lean_uint64_shift_right(v_fold_784_, v___x_785_);
v___x_787_ = lean_uint64_xor(v_fold_784_, v___x_786_);
v___x_788_ = lean_uint64_to_usize(v___x_787_);
v___x_789_ = lean_usize_of_nat(v___x_779_);
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_sub(v___x_789_, v___x_790_);
v___x_792_ = lean_usize_land(v___x_788_, v___x_791_);
v_bkt_793_ = lean_array_uget_borrowed(v_buckets_778_, v___x_792_);
v___x_794_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_775_, v_bkt_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_815_; 
lean_inc_ref(v_buckets_778_);
lean_inc(v_size_777_);
v_isSharedCheck_815_ = !lean_is_exclusive(v_m_774_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; lean_object* v_unused_817_; 
v_unused_816_ = lean_ctor_get(v_m_774_, 1);
lean_dec(v_unused_816_);
v_unused_817_ = lean_ctor_get(v_m_774_, 0);
lean_dec(v_unused_817_);
v___x_796_ = v_m_774_;
v_isShared_797_ = v_isSharedCheck_815_;
goto v_resetjp_795_;
}
else
{
lean_dec(v_m_774_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_815_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v_size_x27_799_; lean_object* v___x_800_; lean_object* v_buckets_x27_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_798_ = lean_unsigned_to_nat(1u);
v_size_x27_799_ = lean_nat_add(v_size_777_, v___x_798_);
lean_dec(v_size_777_);
lean_inc(v_bkt_793_);
v___x_800_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_800_, 0, v_a_775_);
lean_ctor_set(v___x_800_, 1, v_b_776_);
lean_ctor_set(v___x_800_, 2, v_bkt_793_);
v_buckets_x27_801_ = lean_array_uset(v_buckets_778_, v___x_792_, v___x_800_);
v___x_802_ = lean_unsigned_to_nat(4u);
v___x_803_ = lean_nat_mul(v_size_x27_799_, v___x_802_);
v___x_804_ = lean_unsigned_to_nat(3u);
v___x_805_ = lean_nat_div(v___x_803_, v___x_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_array_get_size(v_buckets_x27_801_);
v___x_807_ = lean_nat_dec_le(v___x_805_, v___x_806_);
lean_dec(v___x_805_);
if (v___x_807_ == 0)
{
lean_object* v_val_808_; lean_object* v___x_810_; 
v_val_808_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(v_buckets_x27_801_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v_val_808_);
lean_ctor_set(v___x_796_, 0, v_size_x27_799_);
v___x_810_ = v___x_796_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_size_x27_799_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_val_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
else
{
lean_object* v___x_813_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v_buckets_x27_801_);
lean_ctor_set(v___x_796_, 0, v_size_x27_799_);
v___x_813_ = v___x_796_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_size_x27_799_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_buckets_x27_801_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_dec(v_b_776_);
lean_dec(v_a_775_);
return v_m_774_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(lean_object* v_goal_831_, lean_object* v_isTarget_832_, lean_object* v_as_833_, size_t v_sz_834_, size_t v_i_835_, lean_object* v_b_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
uint8_t v___x_842_; 
v___x_842_ = lean_usize_dec_lt(v_i_835_, v_sz_834_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; 
lean_dec_ref(v_isTarget_832_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v_b_836_);
return v___x_843_;
}
else
{
lean_object* v_snd_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_925_; 
v_snd_844_ = lean_ctor_get(v_b_836_, 1);
v_isSharedCheck_925_ = !lean_is_exclusive(v_b_836_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; 
v_unused_926_ = lean_ctor_get(v_b_836_, 0);
lean_dec(v_unused_926_);
v___x_846_ = v_b_836_;
v_isShared_847_ = v_isSharedCheck_925_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_snd_844_);
lean_dec(v_b_836_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_925_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v_snd_848_; lean_object* v_fst_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_924_; 
v_snd_848_ = lean_ctor_get(v_snd_844_, 1);
v_fst_849_ = lean_ctor_get(v_snd_844_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v_snd_844_);
if (v_isSharedCheck_924_ == 0)
{
v___x_851_ = v_snd_844_;
v_isShared_852_ = v_isSharedCheck_924_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_snd_848_);
lean_inc(v_fst_849_);
lean_dec(v_snd_844_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_924_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_923_; 
v_fst_853_ = lean_ctor_get(v_snd_848_, 0);
v_snd_854_ = lean_ctor_get(v_snd_848_, 1);
v_isSharedCheck_923_ = !lean_is_exclusive(v_snd_848_);
if (v_isSharedCheck_923_ == 0)
{
v___x_856_ = v_snd_848_;
v_isShared_857_ = v_isSharedCheck_923_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snd_854_);
lean_inc(v_fst_853_);
lean_dec(v_snd_848_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_923_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v_a_860_; lean_object* v_a_867_; lean_object* v___x_868_; 
v___x_858_ = lean_box(0);
v_a_867_ = lean_array_uget_borrowed(v_as_833_, v_i_835_);
lean_inc(v_a_867_);
v___x_868_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_831_, v_a_867_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; uint8_t v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_872_; 
lean_dec(v_a_869_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v_snd_854_);
lean_ctor_set(v___x_851_, 0, v_fst_853_);
v___x_872_ = v___x_851_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_fst_853_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_snd_854_);
v___x_872_ = v_reuseFailAlloc_876_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_874_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_872_);
lean_ctor_set(v___x_846_, 0, v_fst_849_);
v___x_874_ = v___x_846_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_fst_849_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
v_a_860_ = v___x_874_;
goto v___jp_859_;
}
}
}
else
{
lean_object* v___x_877_; 
lean_inc_ref(v_isTarget_832_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
lean_inc(v___y_838_);
lean_inc_ref(v___y_837_);
lean_inc(v_a_869_);
v___x_877_ = lean_apply_6(v_isTarget_832_, v_a_869_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, lean_box(0));
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; uint8_t v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = lean_unbox(v_a_878_);
lean_dec(v_a_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_a_869_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v_snd_854_);
lean_ctor_set(v___x_851_, 0, v_fst_853_);
v___x_881_ = v___x_851_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_fst_853_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_snd_854_);
v___x_881_ = v_reuseFailAlloc_885_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_883_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_881_);
lean_ctor_set(v___x_846_, 0, v_fst_849_);
v___x_883_ = v___x_846_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_fst_849_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
v_a_860_ = v___x_883_;
goto v___jp_859_;
}
}
}
else
{
lean_object* v_self_886_; lean_object* v___x_887_; 
v_self_886_ = lean_ctor_get(v_a_869_, 0);
lean_inc_ref(v_self_886_);
lean_dec(v_a_869_);
v___x_887_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_854_, v_self_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_888_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_831_, v_snd_854_, v_self_886_, v_fst_853_, v_fst_849_);
lean_inc_n(v___x_888_, 2);
v___x_889_ = l_Rat_ofInt(v___x_888_);
v___x_890_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_831_, v_self_886_, v___x_889_, v_snd_854_);
v___x_891_ = lean_box(0);
v___x_892_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_853_, v___x_888_, v___x_891_);
v___x_893_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_894_ = lean_int_add(v___x_888_, v___x_893_);
lean_dec(v___x_888_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v___x_890_);
lean_ctor_set(v___x_851_, 0, v___x_892_);
v___x_896_ = v___x_851_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v___x_890_);
v___x_896_ = v_reuseFailAlloc_900_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_898_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_896_);
lean_ctor_set(v___x_846_, 0, v___x_894_);
v___x_898_ = v___x_846_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
v_a_860_ = v___x_898_;
goto v___jp_859_;
}
}
}
else
{
lean_object* v___x_902_; 
lean_dec_ref_known(v___x_887_, 1);
lean_dec_ref(v_self_886_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v_snd_854_);
lean_ctor_set(v___x_851_, 0, v_fst_853_);
v___x_902_ = v___x_851_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_fst_853_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_snd_854_);
v___x_902_ = v_reuseFailAlloc_906_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_904_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_902_);
lean_ctor_set(v___x_846_, 0, v_fst_849_);
v___x_904_ = v___x_846_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_fst_849_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_860_ = v___x_904_;
goto v___jp_859_;
}
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_a_869_);
lean_del_object(v___x_856_);
lean_dec(v_snd_854_);
lean_dec(v_fst_853_);
lean_del_object(v___x_851_);
lean_dec(v_fst_849_);
lean_del_object(v___x_846_);
lean_dec_ref(v_isTarget_832_);
v_a_907_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_877_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_877_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_del_object(v___x_856_);
lean_dec(v_snd_854_);
lean_dec(v_fst_853_);
lean_del_object(v___x_851_);
lean_dec(v_fst_849_);
lean_del_object(v___x_846_);
lean_dec_ref(v_isTarget_832_);
v_a_915_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_868_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_868_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
v___jp_859_:
{
lean_object* v___x_862_; 
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v_a_860_);
lean_ctor_set(v___x_856_, 0, v___x_858_);
v___x_862_ = v___x_856_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_a_860_);
v___x_862_ = v_reuseFailAlloc_866_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
size_t v___x_863_; size_t v___x_864_; 
v___x_863_ = ((size_t)1ULL);
v___x_864_ = lean_usize_add(v_i_835_, v___x_863_);
v_i_835_ = v___x_864_;
v_b_836_ = v___x_862_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9___boxed(lean_object* v_goal_927_, lean_object* v_isTarget_928_, lean_object* v_as_929_, lean_object* v_sz_930_, lean_object* v_i_931_, lean_object* v_b_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
size_t v_sz_boxed_938_; size_t v_i_boxed_939_; lean_object* v_res_940_; 
v_sz_boxed_938_ = lean_unbox_usize(v_sz_930_);
lean_dec(v_sz_930_);
v_i_boxed_939_ = lean_unbox_usize(v_i_931_);
lean_dec(v_i_931_);
v_res_940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(v_goal_927_, v_isTarget_928_, v_as_929_, v_sz_boxed_938_, v_i_boxed_939_, v_b_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec_ref(v_as_929_);
lean_dec_ref(v_goal_927_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(lean_object* v_goal_941_, lean_object* v_isTarget_942_, lean_object* v_as_943_, size_t v_sz_944_, size_t v_i_945_, lean_object* v_b_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
uint8_t v___x_952_; 
v___x_952_ = lean_usize_dec_lt(v_i_945_, v_sz_944_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; 
lean_dec_ref(v_isTarget_942_);
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v_b_946_);
return v___x_953_;
}
else
{
lean_object* v_snd_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_1035_; 
v_snd_954_ = lean_ctor_get(v_b_946_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_b_946_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v_b_946_, 0);
lean_dec(v_unused_1036_);
v___x_956_ = v_b_946_;
v_isShared_957_ = v_isSharedCheck_1035_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_snd_954_);
lean_dec(v_b_946_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_1035_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_snd_958_; lean_object* v_fst_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_1034_; 
v_snd_958_ = lean_ctor_get(v_snd_954_, 1);
v_fst_959_ = lean_ctor_get(v_snd_954_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v_snd_954_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_961_ = v_snd_954_;
v_isShared_962_ = v_isSharedCheck_1034_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_snd_958_);
lean_inc(v_fst_959_);
lean_dec(v_snd_954_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_1034_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v_fst_963_; lean_object* v_snd_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_1033_; 
v_fst_963_ = lean_ctor_get(v_snd_958_, 0);
v_snd_964_ = lean_ctor_get(v_snd_958_, 1);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_snd_958_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_966_ = v_snd_958_;
v_isShared_967_ = v_isSharedCheck_1033_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_snd_964_);
lean_inc(v_fst_963_);
lean_dec(v_snd_958_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_1033_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v_a_970_; lean_object* v_a_977_; lean_object* v___x_978_; 
v___x_968_ = lean_box(0);
v_a_977_ = lean_array_uget_borrowed(v_as_943_, v_i_945_);
lean_inc(v_a_977_);
v___x_978_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_941_, v_a_977_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; uint8_t v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_979_);
if (v___x_980_ == 0)
{
lean_object* v___x_982_; 
lean_dec(v_a_979_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v_snd_964_);
lean_ctor_set(v___x_961_, 0, v_fst_963_);
v___x_982_ = v___x_961_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_fst_963_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_snd_964_);
v___x_982_ = v_reuseFailAlloc_986_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_982_);
lean_ctor_set(v___x_956_, 0, v_fst_959_);
v___x_984_ = v___x_956_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_fst_959_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v_a_970_ = v___x_984_;
goto v___jp_969_;
}
}
}
else
{
lean_object* v___x_987_; 
lean_inc_ref(v_isTarget_942_);
lean_inc(v___y_950_);
lean_inc_ref(v___y_949_);
lean_inc(v___y_948_);
lean_inc_ref(v___y_947_);
lean_inc(v_a_979_);
v___x_987_ = lean_apply_6(v_isTarget_942_, v_a_979_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, lean_box(0));
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; uint8_t v___x_989_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = lean_unbox(v_a_988_);
lean_dec(v_a_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_991_; 
lean_dec(v_a_979_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v_snd_964_);
lean_ctor_set(v___x_961_, 0, v_fst_963_);
v___x_991_ = v___x_961_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_fst_963_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_snd_964_);
v___x_991_ = v_reuseFailAlloc_995_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_993_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_991_);
lean_ctor_set(v___x_956_, 0, v_fst_959_);
v___x_993_ = v___x_956_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_fst_959_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
v_a_970_ = v___x_993_;
goto v___jp_969_;
}
}
}
else
{
lean_object* v_self_996_; lean_object* v___x_997_; 
v_self_996_ = lean_ctor_get(v_a_979_, 0);
lean_inc_ref(v_self_996_);
lean_dec(v_a_979_);
v___x_997_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_964_, v_self_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_998_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_941_, v_snd_964_, v_self_996_, v_fst_963_, v_fst_959_);
lean_inc_n(v___x_998_, 2);
v___x_999_ = l_Rat_ofInt(v___x_998_);
v___x_1000_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_941_, v_self_996_, v___x_999_, v_snd_964_);
v___x_1001_ = lean_box(0);
v___x_1002_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_963_, v___x_998_, v___x_1001_);
v___x_1003_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_1004_ = lean_int_add(v___x_998_, v___x_1003_);
lean_dec(v___x_998_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v___x_1000_);
lean_ctor_set(v___x_961_, 0, v___x_1002_);
v___x_1006_ = v___x_961_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v___x_1000_);
v___x_1006_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_1006_);
lean_ctor_set(v___x_956_, 0, v___x_1004_);
v___x_1008_ = v___x_956_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
v_a_970_ = v___x_1008_;
goto v___jp_969_;
}
}
}
else
{
lean_object* v___x_1012_; 
lean_dec_ref_known(v___x_997_, 1);
lean_dec_ref(v_self_996_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v_snd_964_);
lean_ctor_set(v___x_961_, 0, v_fst_963_);
v___x_1012_ = v___x_961_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_fst_963_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_snd_964_);
v___x_1012_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1014_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_1012_);
lean_ctor_set(v___x_956_, 0, v_fst_959_);
v___x_1014_ = v___x_956_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_fst_959_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
v_a_970_ = v___x_1014_;
goto v___jp_969_;
}
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_979_);
lean_del_object(v___x_966_);
lean_dec(v_snd_964_);
lean_dec(v_fst_963_);
lean_del_object(v___x_961_);
lean_dec(v_fst_959_);
lean_del_object(v___x_956_);
lean_dec_ref(v_isTarget_942_);
v_a_1017_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_987_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_987_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_del_object(v___x_966_);
lean_dec(v_snd_964_);
lean_dec(v_fst_963_);
lean_del_object(v___x_961_);
lean_dec(v_fst_959_);
lean_del_object(v___x_956_);
lean_dec_ref(v_isTarget_942_);
v_a_1025_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_978_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_978_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
v___jp_969_:
{
lean_object* v___x_972_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v_a_970_);
lean_ctor_set(v___x_966_, 0, v___x_968_);
v___x_972_ = v___x_966_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_a_970_);
v___x_972_ = v_reuseFailAlloc_976_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
size_t v___x_973_; size_t v___x_974_; lean_object* v___x_975_; 
v___x_973_ = ((size_t)1ULL);
v___x_974_ = lean_usize_add(v_i_945_, v___x_973_);
v___x_975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(v_goal_941_, v_isTarget_942_, v_as_943_, v_sz_944_, v___x_974_, v___x_972_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
return v___x_975_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5___boxed(lean_object* v_goal_1037_, lean_object* v_isTarget_1038_, lean_object* v_as_1039_, lean_object* v_sz_1040_, lean_object* v_i_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
size_t v_sz_boxed_1048_; size_t v_i_boxed_1049_; lean_object* v_res_1050_; 
v_sz_boxed_1048_ = lean_unbox_usize(v_sz_1040_);
lean_dec(v_sz_1040_);
v_i_boxed_1049_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(v_goal_1037_, v_isTarget_1038_, v_as_1039_, v_sz_boxed_1048_, v_i_boxed_1049_, v_b_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec_ref(v_as_1039_);
lean_dec_ref(v_goal_1037_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(lean_object* v_goal_1051_, lean_object* v_isTarget_1052_, lean_object* v_as_1053_, size_t v_sz_1054_, size_t v_i_1055_, lean_object* v_b_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
uint8_t v___x_1062_; 
v___x_1062_ = lean_usize_dec_lt(v_i_1055_, v_sz_1054_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; 
lean_dec_ref(v_isTarget_1052_);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v_b_1056_);
return v___x_1063_;
}
else
{
lean_object* v_snd_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1145_; 
v_snd_1064_ = lean_ctor_get(v_b_1056_, 1);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_b_1056_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v_b_1056_, 0);
lean_dec(v_unused_1146_);
v___x_1066_ = v_b_1056_;
v_isShared_1067_ = v_isSharedCheck_1145_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_snd_1064_);
lean_dec(v_b_1056_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1145_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v_snd_1068_; lean_object* v_fst_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1144_; 
v_snd_1068_ = lean_ctor_get(v_snd_1064_, 1);
v_fst_1069_ = lean_ctor_get(v_snd_1064_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_snd_1064_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1071_ = v_snd_1064_;
v_isShared_1072_ = v_isSharedCheck_1144_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_snd_1068_);
lean_inc(v_fst_1069_);
lean_dec(v_snd_1064_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1144_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v_fst_1073_; lean_object* v_snd_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1143_; 
v_fst_1073_ = lean_ctor_get(v_snd_1068_, 0);
v_snd_1074_ = lean_ctor_get(v_snd_1068_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_snd_1068_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1076_ = v_snd_1068_;
v_isShared_1077_ = v_isSharedCheck_1143_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_snd_1074_);
lean_inc(v_fst_1073_);
lean_dec(v_snd_1068_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1143_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1078_; lean_object* v_a_1080_; lean_object* v_a_1087_; lean_object* v___x_1088_; 
v___x_1078_ = lean_box(0);
v_a_1087_ = lean_array_uget_borrowed(v_as_1053_, v_i_1055_);
lean_inc(v_a_1087_);
v___x_1088_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_1051_, v_a_1087_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; uint8_t v___x_1090_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___x_1090_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1092_; 
lean_dec(v_a_1089_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v_snd_1074_);
lean_ctor_set(v___x_1071_, 0, v_fst_1073_);
v___x_1092_ = v___x_1071_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_fst_1073_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_snd_1074_);
v___x_1092_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1094_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1092_);
lean_ctor_set(v___x_1066_, 0, v_fst_1069_);
v___x_1094_ = v___x_1066_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_fst_1069_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
v_a_1080_ = v___x_1094_;
goto v___jp_1079_;
}
}
}
else
{
lean_object* v___x_1097_; 
lean_inc_ref(v_isTarget_1052_);
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v_a_1089_);
v___x_1097_ = lean_apply_6(v_isTarget_1052_, v_a_1089_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, lean_box(0));
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; uint8_t v___x_1099_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = lean_unbox(v_a_1098_);
lean_dec(v_a_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1101_; 
lean_dec(v_a_1089_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v_snd_1074_);
lean_ctor_set(v___x_1071_, 0, v_fst_1073_);
v___x_1101_ = v___x_1071_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_fst_1073_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_snd_1074_);
v___x_1101_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
lean_object* v___x_1103_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1101_);
lean_ctor_set(v___x_1066_, 0, v_fst_1069_);
v___x_1103_ = v___x_1066_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_fst_1069_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v_a_1080_ = v___x_1103_;
goto v___jp_1079_;
}
}
}
else
{
lean_object* v_self_1106_; lean_object* v___x_1107_; 
v_self_1106_ = lean_ctor_get(v_a_1089_, 0);
lean_inc_ref(v_self_1106_);
lean_dec(v_a_1089_);
v___x_1107_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_1074_, v_self_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1108_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_1051_, v_snd_1074_, v_self_1106_, v_fst_1073_, v_fst_1069_);
lean_inc_n(v___x_1108_, 2);
v___x_1109_ = l_Rat_ofInt(v___x_1108_);
v___x_1110_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_1051_, v_self_1106_, v___x_1109_, v_snd_1074_);
v___x_1111_ = lean_box(0);
v___x_1112_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_1073_, v___x_1108_, v___x_1111_);
v___x_1113_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_1114_ = lean_int_add(v___x_1108_, v___x_1113_);
lean_dec(v___x_1108_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v___x_1110_);
lean_ctor_set(v___x_1071_, 0, v___x_1112_);
v___x_1116_ = v___x_1071_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1110_);
v___x_1116_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1118_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1116_);
lean_ctor_set(v___x_1066_, 0, v___x_1114_);
v___x_1118_ = v___x_1066_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
v_a_1080_ = v___x_1118_;
goto v___jp_1079_;
}
}
}
else
{
lean_object* v___x_1122_; 
lean_dec_ref_known(v___x_1107_, 1);
lean_dec_ref(v_self_1106_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v_snd_1074_);
lean_ctor_set(v___x_1071_, 0, v_fst_1073_);
v___x_1122_ = v___x_1071_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1073_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1074_);
v___x_1122_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1124_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1122_);
lean_ctor_set(v___x_1066_, 0, v_fst_1069_);
v___x_1124_ = v___x_1066_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_fst_1069_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
v_a_1080_ = v___x_1124_;
goto v___jp_1079_;
}
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_a_1089_);
lean_del_object(v___x_1076_);
lean_dec(v_snd_1074_);
lean_dec(v_fst_1073_);
lean_del_object(v___x_1071_);
lean_dec(v_fst_1069_);
lean_del_object(v___x_1066_);
lean_dec_ref(v_isTarget_1052_);
v_a_1127_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1097_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1097_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_del_object(v___x_1076_);
lean_dec(v_snd_1074_);
lean_dec(v_fst_1073_);
lean_del_object(v___x_1071_);
lean_dec(v_fst_1069_);
lean_del_object(v___x_1066_);
lean_dec_ref(v_isTarget_1052_);
v_a_1135_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1088_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1088_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
v___jp_1079_:
{
lean_object* v___x_1082_; 
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 1, v_a_1080_);
lean_ctor_set(v___x_1076_, 0, v___x_1078_);
v___x_1082_ = v___x_1076_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_a_1080_);
v___x_1082_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
size_t v___x_1083_; size_t v___x_1084_; 
v___x_1083_ = ((size_t)1ULL);
v___x_1084_ = lean_usize_add(v_i_1055_, v___x_1083_);
v_i_1055_ = v___x_1084_;
v_b_1056_ = v___x_1082_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9___boxed(lean_object* v_goal_1147_, lean_object* v_isTarget_1148_, lean_object* v_as_1149_, lean_object* v_sz_1150_, lean_object* v_i_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
size_t v_sz_boxed_1158_; size_t v_i_boxed_1159_; lean_object* v_res_1160_; 
v_sz_boxed_1158_ = lean_unbox_usize(v_sz_1150_);
lean_dec(v_sz_1150_);
v_i_boxed_1159_ = lean_unbox_usize(v_i_1151_);
lean_dec(v_i_1151_);
v_res_1160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(v_goal_1147_, v_isTarget_1148_, v_as_1149_, v_sz_boxed_1158_, v_i_boxed_1159_, v_b_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec_ref(v_as_1149_);
lean_dec_ref(v_goal_1147_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(lean_object* v_goal_1161_, lean_object* v_isTarget_1162_, lean_object* v_as_1163_, size_t v_sz_1164_, size_t v_i_1165_, lean_object* v_b_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
uint8_t v___x_1172_; 
v___x_1172_ = lean_usize_dec_lt(v_i_1165_, v_sz_1164_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; 
lean_dec_ref(v_isTarget_1162_);
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v_b_1166_);
return v___x_1173_;
}
else
{
lean_object* v_snd_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1255_; 
v_snd_1174_ = lean_ctor_get(v_b_1166_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_b_1166_);
if (v_isSharedCheck_1255_ == 0)
{
lean_object* v_unused_1256_; 
v_unused_1256_ = lean_ctor_get(v_b_1166_, 0);
lean_dec(v_unused_1256_);
v___x_1176_ = v_b_1166_;
v_isShared_1177_ = v_isSharedCheck_1255_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_snd_1174_);
lean_dec(v_b_1166_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1255_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v_snd_1178_; lean_object* v_fst_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1254_; 
v_snd_1178_ = lean_ctor_get(v_snd_1174_, 1);
v_fst_1179_ = lean_ctor_get(v_snd_1174_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_snd_1174_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1181_ = v_snd_1174_;
v_isShared_1182_ = v_isSharedCheck_1254_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_snd_1178_);
lean_inc(v_fst_1179_);
lean_dec(v_snd_1174_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1254_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_fst_1183_; lean_object* v_snd_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1253_; 
v_fst_1183_ = lean_ctor_get(v_snd_1178_, 0);
v_snd_1184_ = lean_ctor_get(v_snd_1178_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_snd_1178_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1186_ = v_snd_1178_;
v_isShared_1187_ = v_isSharedCheck_1253_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_snd_1184_);
lean_inc(v_fst_1183_);
lean_dec(v_snd_1178_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1253_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v_a_1190_; lean_object* v_a_1197_; lean_object* v___x_1198_; 
v___x_1188_ = lean_box(0);
v_a_1197_ = lean_array_uget_borrowed(v_as_1163_, v_i_1165_);
lean_inc(v_a_1197_);
v___x_1198_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_1161_, v_a_1197_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; uint8_t v___x_1200_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1200_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1202_; 
lean_dec(v_a_1199_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v_snd_1184_);
lean_ctor_set(v___x_1181_, 0, v_fst_1183_);
v___x_1202_ = v___x_1181_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_fst_1183_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_snd_1184_);
v___x_1202_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1204_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1202_);
lean_ctor_set(v___x_1176_, 0, v_fst_1179_);
v___x_1204_ = v___x_1176_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_fst_1179_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___x_1202_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
v_a_1190_ = v___x_1204_;
goto v___jp_1189_;
}
}
}
else
{
lean_object* v___x_1207_; 
lean_inc_ref(v_isTarget_1162_);
lean_inc(v___y_1170_);
lean_inc_ref(v___y_1169_);
lean_inc(v___y_1168_);
lean_inc_ref(v___y_1167_);
lean_inc(v_a_1199_);
v___x_1207_ = lean_apply_6(v_isTarget_1162_, v_a_1199_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, lean_box(0));
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; uint8_t v___x_1209_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1207_, 1);
v___x_1209_ = lean_unbox(v_a_1208_);
lean_dec(v_a_1208_);
if (v___x_1209_ == 0)
{
lean_object* v___x_1211_; 
lean_dec(v_a_1199_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v_snd_1184_);
lean_ctor_set(v___x_1181_, 0, v_fst_1183_);
v___x_1211_ = v___x_1181_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_fst_1183_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_snd_1184_);
v___x_1211_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1213_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1211_);
lean_ctor_set(v___x_1176_, 0, v_fst_1179_);
v___x_1213_ = v___x_1176_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_fst_1179_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
v_a_1190_ = v___x_1213_;
goto v___jp_1189_;
}
}
}
else
{
lean_object* v_self_1216_; lean_object* v___x_1217_; 
v_self_1216_ = lean_ctor_get(v_a_1199_, 0);
lean_inc_ref(v_self_1216_);
lean_dec(v_a_1199_);
v___x_1217_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_1184_, v_self_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1218_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_1161_, v_snd_1184_, v_self_1216_, v_fst_1183_, v_fst_1179_);
lean_inc_n(v___x_1218_, 2);
v___x_1219_ = l_Rat_ofInt(v___x_1218_);
v___x_1220_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_1161_, v_self_1216_, v___x_1219_, v_snd_1184_);
v___x_1221_ = lean_box(0);
v___x_1222_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_1183_, v___x_1218_, v___x_1221_);
v___x_1223_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_1224_ = lean_int_add(v___x_1218_, v___x_1223_);
lean_dec(v___x_1218_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v___x_1220_);
lean_ctor_set(v___x_1181_, 0, v___x_1222_);
v___x_1226_ = v___x_1181_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v___x_1220_);
v___x_1226_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1228_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1226_);
lean_ctor_set(v___x_1176_, 0, v___x_1224_);
v___x_1228_ = v___x_1176_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
v_a_1190_ = v___x_1228_;
goto v___jp_1189_;
}
}
}
else
{
lean_object* v___x_1232_; 
lean_dec_ref_known(v___x_1217_, 1);
lean_dec_ref(v_self_1216_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v_snd_1184_);
lean_ctor_set(v___x_1181_, 0, v_fst_1183_);
v___x_1232_ = v___x_1181_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_fst_1183_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v_snd_1184_);
v___x_1232_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1234_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1232_);
lean_ctor_set(v___x_1176_, 0, v_fst_1179_);
v___x_1234_ = v___x_1176_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_fst_1179_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_a_1190_ = v___x_1234_;
goto v___jp_1189_;
}
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec(v_a_1199_);
lean_del_object(v___x_1186_);
lean_dec(v_snd_1184_);
lean_dec(v_fst_1183_);
lean_del_object(v___x_1181_);
lean_dec(v_fst_1179_);
lean_del_object(v___x_1176_);
lean_dec_ref(v_isTarget_1162_);
v_a_1237_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1207_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1207_);
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
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_del_object(v___x_1186_);
lean_dec(v_snd_1184_);
lean_dec(v_fst_1183_);
lean_del_object(v___x_1181_);
lean_dec(v_fst_1179_);
lean_del_object(v___x_1176_);
lean_dec_ref(v_isTarget_1162_);
v_a_1245_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1198_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1198_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
v___jp_1189_:
{
lean_object* v___x_1192_; 
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 1, v_a_1190_);
lean_ctor_set(v___x_1186_, 0, v___x_1188_);
v___x_1192_ = v___x_1186_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_a_1190_);
v___x_1192_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
size_t v___x_1193_; size_t v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1165_, v___x_1193_);
v___x_1195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(v_goal_1161_, v_isTarget_1162_, v_as_1163_, v_sz_1164_, v___x_1194_, v___x_1192_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
return v___x_1195_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7___boxed(lean_object* v_goal_1257_, lean_object* v_isTarget_1258_, lean_object* v_as_1259_, lean_object* v_sz_1260_, lean_object* v_i_1261_, lean_object* v_b_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
size_t v_sz_boxed_1268_; size_t v_i_boxed_1269_; lean_object* v_res_1270_; 
v_sz_boxed_1268_ = lean_unbox_usize(v_sz_1260_);
lean_dec(v_sz_1260_);
v_i_boxed_1269_ = lean_unbox_usize(v_i_1261_);
lean_dec(v_i_1261_);
v_res_1270_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(v_goal_1257_, v_isTarget_1258_, v_as_1259_, v_sz_boxed_1268_, v_i_boxed_1269_, v_b_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec_ref(v_as_1259_);
lean_dec_ref(v_goal_1257_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(lean_object* v_init_1271_, lean_object* v_goal_1272_, lean_object* v_isTarget_1273_, lean_object* v_n_1274_, lean_object* v_b_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
if (lean_obj_tag(v_n_1274_) == 0)
{
lean_object* v_cs_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; size_t v_sz_1284_; size_t v___x_1285_; lean_object* v___x_1286_; 
v_cs_1281_ = lean_ctor_get(v_n_1274_, 0);
v___x_1282_ = lean_box(0);
v___x_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
lean_ctor_set(v___x_1283_, 1, v_b_1275_);
v_sz_1284_ = lean_array_size(v_cs_1281_);
v___x_1285_ = ((size_t)0ULL);
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(v_init_1271_, v_goal_1272_, v_isTarget_1273_, v_cs_1281_, v_sz_1284_, v___x_1285_, v___x_1283_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1301_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1301_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1301_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v_fst_1291_; 
v_fst_1291_ = lean_ctor_get(v_a_1287_, 0);
if (lean_obj_tag(v_fst_1291_) == 0)
{
lean_object* v_snd_1292_; lean_object* v___x_1293_; lean_object* v___x_1295_; 
v_snd_1292_ = lean_ctor_get(v_a_1287_, 1);
lean_inc(v_snd_1292_);
lean_dec(v_a_1287_);
v___x_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_snd_1292_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1293_);
v___x_1295_ = v___x_1289_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1293_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
else
{
lean_object* v_val_1297_; lean_object* v___x_1299_; 
lean_inc_ref(v_fst_1291_);
lean_dec(v_a_1287_);
v_val_1297_ = lean_ctor_get(v_fst_1291_, 0);
lean_inc(v_val_1297_);
lean_dec_ref_known(v_fst_1291_, 1);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v_val_1297_);
v___x_1299_ = v___x_1289_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_val_1297_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
v_a_1302_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1286_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1286_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_vs_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; size_t v_sz_1313_; size_t v___x_1314_; lean_object* v___x_1315_; 
v_vs_1310_ = lean_ctor_get(v_n_1274_, 0);
v___x_1311_ = lean_box(0);
v___x_1312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set(v___x_1312_, 1, v_b_1275_);
v_sz_1313_ = lean_array_size(v_vs_1310_);
v___x_1314_ = ((size_t)0ULL);
v___x_1315_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(v_goal_1272_, v_isTarget_1273_, v_vs_1310_, v_sz_1313_, v___x_1314_, v___x_1312_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1330_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1330_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1330_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v_fst_1320_; 
v_fst_1320_ = lean_ctor_get(v_a_1316_, 0);
if (lean_obj_tag(v_fst_1320_) == 0)
{
lean_object* v_snd_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; 
v_snd_1321_ = lean_ctor_get(v_a_1316_, 1);
lean_inc(v_snd_1321_);
lean_dec(v_a_1316_);
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_snd_1321_);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v___x_1322_);
v___x_1324_ = v___x_1318_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
else
{
lean_object* v_val_1326_; lean_object* v___x_1328_; 
lean_inc_ref(v_fst_1320_);
lean_dec(v_a_1316_);
v_val_1326_ = lean_ctor_get(v_fst_1320_, 0);
lean_inc(v_val_1326_);
lean_dec_ref_known(v_fst_1320_, 1);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v_val_1326_);
v___x_1328_ = v___x_1318_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_val_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
v_a_1331_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1315_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1315_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(lean_object* v_init_1339_, lean_object* v_goal_1340_, lean_object* v_isTarget_1341_, lean_object* v_as_1342_, size_t v_sz_1343_, size_t v_i_1344_, lean_object* v_b_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_usize_dec_lt(v_i_1344_, v_sz_1343_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
lean_dec_ref(v_isTarget_1341_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_b_1345_);
return v___x_1352_;
}
else
{
lean_object* v_snd_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1387_; 
v_snd_1353_ = lean_ctor_get(v_b_1345_, 1);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_b_1345_);
if (v_isSharedCheck_1387_ == 0)
{
lean_object* v_unused_1388_; 
v_unused_1388_ = lean_ctor_get(v_b_1345_, 0);
lean_dec(v_unused_1388_);
v___x_1355_ = v_b_1345_;
v_isShared_1356_ = v_isSharedCheck_1387_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_snd_1353_);
lean_dec(v_b_1345_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1387_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v_a_1358_; lean_object* v___x_1359_; 
v___x_1357_ = lean_box(0);
v_a_1358_ = lean_array_uget_borrowed(v_as_1342_, v_i_1344_);
lean_inc(v_snd_1353_);
lean_inc_ref(v_isTarget_1341_);
v___x_1359_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1339_, v_goal_1340_, v_isTarget_1341_, v_a_1358_, v_snd_1353_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1378_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1378_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1378_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
if (lean_obj_tag(v_a_1360_) == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1366_; 
lean_dec_ref(v_isTarget_1341_);
v___x_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_a_1360_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1364_);
v___x_1366_ = v___x_1355_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1364_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_snd_1353_);
v___x_1366_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1368_; 
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 0, v___x_1366_);
v___x_1368_ = v___x_1362_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; 
lean_del_object(v___x_1362_);
lean_dec(v_snd_1353_);
v_a_1371_ = lean_ctor_get(v_a_1360_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v_a_1360_, 1);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 1, v_a_1371_);
lean_ctor_set(v___x_1355_, 0, v___x_1357_);
v___x_1373_ = v___x_1355_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1357_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_a_1371_);
v___x_1373_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
size_t v___x_1374_; size_t v___x_1375_; 
v___x_1374_ = ((size_t)1ULL);
v___x_1375_ = lean_usize_add(v_i_1344_, v___x_1374_);
v_i_1344_ = v___x_1375_;
v_b_1345_ = v___x_1373_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_del_object(v___x_1355_);
lean_dec(v_snd_1353_);
lean_dec_ref(v_isTarget_1341_);
v_a_1379_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1359_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1359_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6___boxed(lean_object* v_init_1389_, lean_object* v_goal_1390_, lean_object* v_isTarget_1391_, lean_object* v_as_1392_, lean_object* v_sz_1393_, lean_object* v_i_1394_, lean_object* v_b_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
size_t v_sz_boxed_1401_; size_t v_i_boxed_1402_; lean_object* v_res_1403_; 
v_sz_boxed_1401_ = lean_unbox_usize(v_sz_1393_);
lean_dec(v_sz_1393_);
v_i_boxed_1402_ = lean_unbox_usize(v_i_1394_);
lean_dec(v_i_1394_);
v_res_1403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(v_init_1389_, v_goal_1390_, v_isTarget_1391_, v_as_1392_, v_sz_boxed_1401_, v_i_boxed_1402_, v_b_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec_ref(v_as_1392_);
lean_dec_ref(v_goal_1390_);
lean_dec_ref(v_init_1389_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4___boxed(lean_object* v_init_1404_, lean_object* v_goal_1405_, lean_object* v_isTarget_1406_, lean_object* v_n_1407_, lean_object* v_b_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1404_, v_goal_1405_, v_isTarget_1406_, v_n_1407_, v_b_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec_ref(v_n_1407_);
lean_dec_ref(v_goal_1405_);
lean_dec_ref(v_init_1404_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(lean_object* v_goal_1415_, lean_object* v_isTarget_1416_, lean_object* v_t_1417_, lean_object* v_init_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_root_1424_; lean_object* v_tail_1425_; lean_object* v___x_1426_; 
v_root_1424_ = lean_ctor_get(v_t_1417_, 0);
v_tail_1425_ = lean_ctor_get(v_t_1417_, 1);
lean_inc_ref(v_isTarget_1416_);
lean_inc_ref(v_init_1418_);
v___x_1426_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1418_, v_goal_1415_, v_isTarget_1416_, v_root_1424_, v_init_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
lean_dec_ref(v_init_1418_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1463_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1429_ = v___x_1426_;
v_isShared_1430_ = v_isSharedCheck_1463_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1426_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1463_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
if (lean_obj_tag(v_a_1427_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1433_; 
lean_dec_ref(v_isTarget_1416_);
v_a_1431_ = lean_ctor_get(v_a_1427_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v_a_1427_, 1);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v_a_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; size_t v_sz_1438_; size_t v___x_1439_; lean_object* v___x_1440_; 
lean_del_object(v___x_1429_);
v_a_1435_ = lean_ctor_get(v_a_1427_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v_a_1427_, 1);
v___x_1436_ = lean_box(0);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v_a_1435_);
v_sz_1438_ = lean_array_size(v_tail_1425_);
v___x_1439_ = ((size_t)0ULL);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(v_goal_1415_, v_isTarget_1416_, v_tail_1425_, v_sz_1438_, v___x_1439_, v___x_1437_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1454_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1454_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1454_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v_fst_1445_; 
v_fst_1445_ = lean_ctor_get(v_a_1441_, 0);
if (lean_obj_tag(v_fst_1445_) == 0)
{
lean_object* v_snd_1446_; lean_object* v___x_1448_; 
v_snd_1446_ = lean_ctor_get(v_a_1441_, 1);
lean_inc(v_snd_1446_);
lean_dec(v_a_1441_);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 0, v_snd_1446_);
v___x_1448_ = v___x_1443_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_snd_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
else
{
lean_object* v_val_1450_; lean_object* v___x_1452_; 
lean_inc_ref(v_fst_1445_);
lean_dec(v_a_1441_);
v_val_1450_ = lean_ctor_get(v_fst_1445_, 0);
lean_inc(v_val_1450_);
lean_dec_ref_known(v_fst_1445_, 1);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 0, v_val_1450_);
v___x_1452_ = v___x_1443_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_val_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
v_a_1455_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1440_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1440_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
}
else
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
lean_dec_ref(v_isTarget_1416_);
v_a_1464_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1426_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1426_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3___boxed(lean_object* v_goal_1472_, lean_object* v_isTarget_1473_, lean_object* v_t_1474_, lean_object* v_init_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(v_goal_1472_, v_isTarget_1473_, v_t_1474_, v_init_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec_ref(v_t_1474_);
lean_dec_ref(v_goal_1472_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(lean_object* v_a_1482_, lean_object* v_a_1483_){
_start:
{
if (lean_obj_tag(v_a_1482_) == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_a_1483_);
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
return v___x_1486_;
}
else
{
lean_object* v_value_1487_; lean_object* v_tail_1488_; lean_object* v_num_1489_; lean_object* v_den_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
v_value_1487_ = lean_ctor_get(v_a_1482_, 1);
lean_inc(v_value_1487_);
v_tail_1488_ = lean_ctor_get(v_a_1482_, 2);
lean_inc(v_tail_1488_);
lean_dec_ref_known(v_a_1482_, 3);
v_num_1489_ = lean_ctor_get(v_value_1487_, 0);
lean_inc(v_num_1489_);
v_den_1490_ = lean_ctor_get(v_value_1487_, 1);
lean_inc(v_den_1490_);
lean_dec(v_value_1487_);
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = lean_nat_dec_eq(v_den_1490_, v___x_1491_);
lean_dec(v_den_1490_);
if (v___x_1492_ == 0)
{
lean_dec(v_num_1489_);
v_a_1482_ = v_tail_1488_;
goto _start;
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = lean_box(0);
v___x_1495_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_a_1483_, v_num_1489_, v___x_1494_);
v_a_1482_ = v_tail_1488_;
v_a_1483_ = v___x_1495_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg___boxed(lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1497_, v_a_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(lean_object* v_as_1501_, size_t v_sz_1502_, size_t v_i_1503_, lean_object* v_b_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
uint8_t v___x_1510_; 
v___x_1510_ = lean_usize_dec_lt(v_i_1503_, v_sz_1502_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1511_, 0, v_b_1504_);
return v___x_1511_;
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1513_; 
v_a_1512_ = lean_array_uget_borrowed(v_as_1501_, v_i_1503_);
lean_inc(v_a_1512_);
v___x_1513_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1512_, v_b_1504_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1526_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1526_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1526_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
if (lean_obj_tag(v_a_1514_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1520_; 
v_a_1518_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v_a_1514_, 1);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_a_1518_);
v___x_1520_ = v___x_1516_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
else
{
lean_object* v_a_1522_; size_t v___x_1523_; size_t v___x_1524_; 
lean_del_object(v___x_1516_);
v_a_1522_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v_a_1514_, 1);
v___x_1523_ = ((size_t)1ULL);
v___x_1524_ = lean_usize_add(v_i_1503_, v___x_1523_);
v_i_1503_ = v___x_1524_;
v_b_1504_ = v_a_1522_;
goto _start;
}
}
}
else
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
v_a_1527_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1513_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1513_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2___boxed(lean_object* v_as_1535_, lean_object* v_sz_1536_, lean_object* v_i_1537_, lean_object* v_b_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
size_t v_sz_boxed_1544_; size_t v_i_boxed_1545_; lean_object* v_res_1546_; 
v_sz_boxed_1544_ = lean_unbox_usize(v_sz_1536_);
lean_dec(v_sz_1536_);
v_i_boxed_1545_ = lean_unbox_usize(v_i_1537_);
lean_dec(v_i_1537_);
v_res_1546_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(v_as_1535_, v_sz_boxed_1544_, v_i_boxed_1545_, v_b_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec_ref(v_as_1535_);
return v_res_1546_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1547_ = lean_box(0);
v___x_1548_ = lean_unsigned_to_nat(16u);
v___x_1549_ = lean_mk_array(v___x_1548_, v___x_1547_);
return v___x_1549_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v_used_1552_; 
v___x_1550_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0);
v___x_1551_ = lean_unsigned_to_nat(0u);
v_used_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_used_1552_, 0, v___x_1551_);
lean_ctor_set(v_used_1552_, 1, v___x_1550_);
return v_used_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(lean_object* v_goal_1553_, lean_object* v_isTarget_1554_, lean_object* v_model_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_buckets_1561_; lean_object* v_nextVal_1562_; lean_object* v_used_1563_; size_t v_sz_1564_; size_t v___x_1565_; lean_object* v___x_1566_; 
v_buckets_1561_ = lean_ctor_get(v_model_1555_, 1);
v_nextVal_1562_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_used_1563_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1);
v_sz_1564_ = lean_array_size(v_buckets_1561_);
v___x_1565_ = ((size_t)0ULL);
v___x_1566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(v_buckets_1561_, v_sz_1564_, v___x_1565_, v_used_1563_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_toGoalState_1567_; lean_object* v_a_1568_; lean_object* v_exprs_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_toGoalState_1567_ = lean_ctor_get(v_goal_1553_, 0);
v_a_1568_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1566_, 1);
v_exprs_1569_ = lean_ctor_get(v_toGoalState_1567_, 2);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v_a_1568_);
lean_ctor_set(v___x_1570_, 1, v_model_1555_);
v___x_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1571_, 0, v_nextVal_1562_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(v_goal_1553_, v_isTarget_1554_, v_exprs_1569_, v___x_1571_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1582_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1575_ = v___x_1572_;
v_isShared_1576_ = v_isSharedCheck_1582_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1582_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v_snd_1577_; lean_object* v_snd_1578_; lean_object* v___x_1580_; 
v_snd_1577_ = lean_ctor_get(v_a_1573_, 1);
lean_inc(v_snd_1577_);
lean_dec(v_a_1573_);
v_snd_1578_ = lean_ctor_get(v_snd_1577_, 1);
lean_inc(v_snd_1578_);
lean_dec(v_snd_1577_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 0, v_snd_1578_);
v___x_1580_ = v___x_1575_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_snd_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_a_1583_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1572_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1572_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec_ref(v_model_1555_);
lean_dec_ref(v_isTarget_1554_);
v_a_1591_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1566_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1566_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___boxed(lean_object* v_goal_1599_, lean_object* v_isTarget_1600_, lean_object* v_model_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(v_goal_1599_, v_isTarget_1600_, v_model_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_);
lean_dec(v_a_1605_);
lean_dec_ref(v_a_1604_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec_ref(v_goal_1599_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0(lean_object* v_00_u03b2_1608_, lean_object* v_m_1609_, lean_object* v_a_1610_, lean_object* v_b_1611_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_m_1609_, v_a_1610_, v_b_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1613_, v_a_1614_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___boxed(lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(v_a_1621_, v_a_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0(lean_object* v_00_u03b2_1629_, lean_object* v_data_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(v_data_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1632_, lean_object* v_i_1633_, lean_object* v_source_1634_, lean_object* v_target_1635_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(v_i_1633_, v_source_1634_, v_target_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1637_, lean_object* v_x_1638_, lean_object* v_x_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1638_, v_x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(lean_object* v_goal_1641_, lean_object* v_hi_1642_, lean_object* v_pivot_1643_, lean_object* v_as_1644_, lean_object* v_i_1645_, lean_object* v_k_1646_){
_start:
{
uint8_t v___y_1648_; uint8_t v___x_1657_; 
v___x_1657_ = lean_nat_dec_lt(v_k_1646_, v_hi_1642_);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
lean_dec(v_k_1646_);
v___x_1658_ = lean_array_fswap(v_as_1644_, v_i_1645_, v_hi_1642_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v_i_1645_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
return v___x_1659_;
}
else
{
lean_object* v___x_1660_; lean_object* v_fst_1661_; lean_object* v_fst_1662_; lean_object* v_g_u2081_1663_; lean_object* v_g_u2082_1664_; uint8_t v___x_1665_; 
v___x_1660_ = lean_array_fget_borrowed(v_as_1644_, v_k_1646_);
v_fst_1661_ = lean_ctor_get(v___x_1660_, 0);
v_fst_1662_ = lean_ctor_get(v_pivot_1643_, 0);
v_g_u2081_1663_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1641_, v_fst_1661_);
v_g_u2082_1664_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1641_, v_fst_1662_);
v___x_1665_ = lean_nat_dec_eq(v_g_u2081_1663_, v_g_u2082_1664_);
if (v___x_1665_ == 0)
{
uint8_t v___x_1666_; 
v___x_1666_ = lean_nat_dec_lt(v_g_u2081_1663_, v_g_u2082_1664_);
lean_dec(v_g_u2082_1664_);
lean_dec(v_g_u2081_1663_);
v___y_1648_ = v___x_1666_;
goto v___jp_1647_;
}
else
{
uint8_t v___x_1667_; 
lean_dec(v_g_u2082_1664_);
lean_dec(v_g_u2081_1663_);
v___x_1667_ = lean_expr_lt(v_fst_1661_, v_fst_1662_);
v___y_1648_ = v___x_1667_;
goto v___jp_1647_;
}
}
v___jp_1647_:
{
if (v___y_1648_ == 0)
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_unsigned_to_nat(1u);
v___x_1650_ = lean_nat_add(v_k_1646_, v___x_1649_);
lean_dec(v_k_1646_);
v_k_1646_ = v___x_1650_;
goto _start;
}
else
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1652_ = lean_array_fswap(v_as_1644_, v_i_1645_, v_k_1646_);
v___x_1653_ = lean_unsigned_to_nat(1u);
v___x_1654_ = lean_nat_add(v_i_1645_, v___x_1653_);
lean_dec(v_i_1645_);
v___x_1655_ = lean_nat_add(v_k_1646_, v___x_1653_);
lean_dec(v_k_1646_);
v_as_1644_ = v___x_1652_;
v_i_1645_ = v___x_1654_;
v_k_1646_ = v___x_1655_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg___boxed(lean_object* v_goal_1668_, lean_object* v_hi_1669_, lean_object* v_pivot_1670_, lean_object* v_as_1671_, lean_object* v_i_1672_, lean_object* v_k_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1668_, v_hi_1669_, v_pivot_1670_, v_as_1671_, v_i_1672_, v_k_1673_);
lean_dec_ref(v_pivot_1670_);
lean_dec(v_hi_1669_);
lean_dec_ref(v_goal_1668_);
return v_res_1674_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(lean_object* v_goal_1675_, lean_object* v_x_1676_, lean_object* v_x_1677_){
_start:
{
lean_object* v_fst_1678_; lean_object* v_fst_1679_; lean_object* v_g_u2081_1680_; lean_object* v_g_u2082_1681_; uint8_t v___x_1682_; 
v_fst_1678_ = lean_ctor_get(v_x_1676_, 0);
v_fst_1679_ = lean_ctor_get(v_x_1677_, 0);
v_g_u2081_1680_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1675_, v_fst_1678_);
v_g_u2082_1681_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1675_, v_fst_1679_);
v___x_1682_ = lean_nat_dec_eq(v_g_u2081_1680_, v_g_u2082_1681_);
if (v___x_1682_ == 0)
{
uint8_t v___x_1683_; 
v___x_1683_ = lean_nat_dec_lt(v_g_u2081_1680_, v_g_u2082_1681_);
lean_dec(v_g_u2082_1681_);
lean_dec(v_g_u2081_1680_);
return v___x_1683_;
}
else
{
uint8_t v___x_1684_; 
lean_dec(v_g_u2082_1681_);
lean_dec(v_g_u2081_1680_);
v___x_1684_ = lean_expr_lt(v_fst_1678_, v_fst_1679_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0___boxed(lean_object* v_goal_1685_, lean_object* v_x_1686_, lean_object* v_x_1687_){
_start:
{
uint8_t v_res_1688_; lean_object* v_r_1689_; 
v_res_1688_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1685_, v_x_1686_, v_x_1687_);
lean_dec_ref(v_x_1687_);
lean_dec_ref(v_x_1686_);
lean_dec_ref(v_goal_1685_);
v_r_1689_ = lean_box(v_res_1688_);
return v_r_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(lean_object* v_goal_1690_, lean_object* v_n_1691_, lean_object* v_as_1692_, lean_object* v_lo_1693_, lean_object* v_hi_1694_){
_start:
{
lean_object* v___y_1696_; uint8_t v___x_1706_; 
v___x_1706_ = lean_nat_dec_lt(v_lo_1693_, v_hi_1694_);
if (v___x_1706_ == 0)
{
lean_dec(v_lo_1693_);
return v_as_1692_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v_mid_1709_; lean_object* v___y_1711_; lean_object* v___y_1717_; lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1707_ = lean_nat_add(v_lo_1693_, v_hi_1694_);
v___x_1708_ = lean_unsigned_to_nat(1u);
v_mid_1709_ = lean_nat_shiftr(v___x_1707_, v___x_1708_);
lean_dec(v___x_1707_);
v___x_1722_ = lean_array_fget_borrowed(v_as_1692_, v_mid_1709_);
v___x_1723_ = lean_array_fget_borrowed(v_as_1692_, v_lo_1693_);
v___x_1724_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1690_, v___x_1722_, v___x_1723_);
if (v___x_1724_ == 0)
{
v___y_1717_ = v_as_1692_;
goto v___jp_1716_;
}
else
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_array_fswap(v_as_1692_, v_lo_1693_, v_mid_1709_);
v___y_1717_ = v___x_1725_;
goto v___jp_1716_;
}
v___jp_1710_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1712_ = lean_array_fget_borrowed(v___y_1711_, v_mid_1709_);
v___x_1713_ = lean_array_fget_borrowed(v___y_1711_, v_hi_1694_);
v___x_1714_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1690_, v___x_1712_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_dec(v_mid_1709_);
v___y_1696_ = v___y_1711_;
goto v___jp_1695_;
}
else
{
lean_object* v___x_1715_; 
v___x_1715_ = lean_array_fswap(v___y_1711_, v_mid_1709_, v_hi_1694_);
lean_dec(v_mid_1709_);
v___y_1696_ = v___x_1715_;
goto v___jp_1695_;
}
}
v___jp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1718_ = lean_array_fget_borrowed(v___y_1717_, v_hi_1694_);
v___x_1719_ = lean_array_fget_borrowed(v___y_1717_, v_lo_1693_);
v___x_1720_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1690_, v___x_1718_, v___x_1719_);
if (v___x_1720_ == 0)
{
v___y_1711_ = v___y_1717_;
goto v___jp_1710_;
}
else
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_array_fswap(v___y_1717_, v_lo_1693_, v_hi_1694_);
v___y_1711_ = v___x_1721_;
goto v___jp_1710_;
}
}
}
v___jp_1695_:
{
lean_object* v_pivot_1697_; lean_object* v___x_1698_; lean_object* v_fst_1699_; lean_object* v_snd_1700_; uint8_t v___x_1701_; 
v_pivot_1697_ = lean_array_fget(v___y_1696_, v_hi_1694_);
lean_inc_n(v_lo_1693_, 2);
v___x_1698_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1690_, v_hi_1694_, v_pivot_1697_, v___y_1696_, v_lo_1693_, v_lo_1693_);
lean_dec(v_pivot_1697_);
v_fst_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_fst_1699_);
v_snd_1700_ = lean_ctor_get(v___x_1698_, 1);
lean_inc(v_snd_1700_);
lean_dec_ref(v___x_1698_);
v___x_1701_ = lean_nat_dec_le(v_hi_1694_, v_fst_1699_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1702_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1690_, v_n_1691_, v_snd_1700_, v_lo_1693_, v_fst_1699_);
v___x_1703_ = lean_unsigned_to_nat(1u);
v___x_1704_ = lean_nat_add(v_fst_1699_, v___x_1703_);
lean_dec(v_fst_1699_);
v_as_1692_ = v___x_1702_;
v_lo_1693_ = v___x_1704_;
goto _start;
}
else
{
lean_dec(v_fst_1699_);
lean_dec(v_lo_1693_);
return v_snd_1700_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___boxed(lean_object* v_goal_1726_, lean_object* v_n_1727_, lean_object* v_as_1728_, lean_object* v_lo_1729_, lean_object* v_hi_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1726_, v_n_1727_, v_as_1728_, v_lo_1729_, v_hi_1730_);
lean_dec(v_hi_1730_);
lean_dec(v_n_1727_);
lean_dec_ref(v_goal_1726_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(lean_object* v_goal_1732_, lean_object* v_m_1733_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1734_ = lean_array_get_size(v_m_1733_);
v___x_1735_ = lean_unsigned_to_nat(0u);
v___x_1736_ = lean_nat_dec_eq(v___x_1734_, v___x_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___y_1740_; uint8_t v___x_1744_; 
v___x_1737_ = lean_unsigned_to_nat(1u);
v___x_1738_ = lean_nat_sub(v___x_1734_, v___x_1737_);
v___x_1744_ = lean_nat_dec_le(v___x_1735_, v___x_1738_);
if (v___x_1744_ == 0)
{
lean_inc(v___x_1738_);
v___y_1740_ = v___x_1738_;
goto v___jp_1739_;
}
else
{
v___y_1740_ = v___x_1735_;
goto v___jp_1739_;
}
v___jp_1739_:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_nat_dec_le(v___y_1740_, v___x_1738_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; 
lean_dec(v___x_1738_);
lean_inc(v___y_1740_);
v___x_1742_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1732_, v___x_1734_, v_m_1733_, v___y_1740_, v___y_1740_);
lean_dec(v___y_1740_);
return v___x_1742_;
}
else
{
lean_object* v___x_1743_; 
v___x_1743_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1732_, v___x_1734_, v_m_1733_, v___y_1740_, v___x_1738_);
lean_dec(v___x_1738_);
return v___x_1743_;
}
}
}
else
{
return v_m_1733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel___boxed(lean_object* v_goal_1745_, lean_object* v_m_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(v_goal_1745_, v_m_1746_);
lean_dec_ref(v_goal_1745_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(lean_object* v_goal_1748_, lean_object* v_n_1749_, lean_object* v_as_1750_, lean_object* v_lo_1751_, lean_object* v_hi_1752_, lean_object* v_w_1753_, lean_object* v_hlo_1754_, lean_object* v_hhi_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1748_, v_n_1749_, v_as_1750_, v_lo_1751_, v_hi_1752_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___boxed(lean_object* v_goal_1757_, lean_object* v_n_1758_, lean_object* v_as_1759_, lean_object* v_lo_1760_, lean_object* v_hi_1761_, lean_object* v_w_1762_, lean_object* v_hlo_1763_, lean_object* v_hhi_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(v_goal_1757_, v_n_1758_, v_as_1759_, v_lo_1760_, v_hi_1761_, v_w_1762_, v_hlo_1763_, v_hhi_1764_);
lean_dec(v_hi_1761_);
lean_dec(v_n_1758_);
lean_dec_ref(v_goal_1757_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(lean_object* v_goal_1766_, lean_object* v_n_1767_, lean_object* v_lo_1768_, lean_object* v_hi_1769_, lean_object* v_hhi_1770_, lean_object* v_pivot_1771_, lean_object* v_as_1772_, lean_object* v_i_1773_, lean_object* v_k_1774_, lean_object* v_ilo_1775_, lean_object* v_ik_1776_, lean_object* v_w_1777_){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1766_, v_hi_1769_, v_pivot_1771_, v_as_1772_, v_i_1773_, v_k_1774_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___boxed(lean_object* v_goal_1779_, lean_object* v_n_1780_, lean_object* v_lo_1781_, lean_object* v_hi_1782_, lean_object* v_hhi_1783_, lean_object* v_pivot_1784_, lean_object* v_as_1785_, lean_object* v_i_1786_, lean_object* v_k_1787_, lean_object* v_ilo_1788_, lean_object* v_ik_1789_, lean_object* v_w_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(v_goal_1779_, v_n_1780_, v_lo_1781_, v_hi_1782_, v_hhi_1783_, v_pivot_1784_, v_as_1785_, v_i_1786_, v_k_1787_, v_ilo_1788_, v_ik_1789_, v_w_1790_);
lean_dec_ref(v_pivot_1784_);
lean_dec(v_hi_1782_);
lean_dec(v_lo_1781_);
lean_dec(v_n_1780_);
lean_dec_ref(v_goal_1779_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
if (lean_obj_tag(v_a_1792_) == 0)
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_a_1793_);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
return v___x_1796_;
}
else
{
lean_object* v_key_1797_; lean_object* v_value_1798_; lean_object* v_tail_1799_; uint8_t v___x_1800_; 
v_key_1797_ = lean_ctor_get(v_a_1792_, 0);
v_value_1798_ = lean_ctor_get(v_a_1792_, 1);
v_tail_1799_ = lean_ctor_get(v_a_1792_, 2);
v___x_1800_ = l_Lean_Meta_Grind_Arith_isInterpretedTerm(v_key_1797_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_inc(v_value_1798_);
lean_inc(v_key_1797_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_key_1797_);
lean_ctor_set(v___x_1801_, 1, v_value_1798_);
v___x_1802_ = lean_array_push(v_a_1793_, v___x_1801_);
v_a_1792_ = v_tail_1799_;
v_a_1793_ = v___x_1802_;
goto _start;
}
else
{
v_a_1792_ = v_tail_1799_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg___boxed(lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1805_, v_a_1806_);
lean_dec(v_a_1805_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(lean_object* v_as_1809_, size_t v_sz_1810_, size_t v_i_1811_, lean_object* v_b_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v___x_1818_; 
v___x_1818_ = lean_usize_dec_lt(v_i_1811_, v_sz_1810_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; 
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v_b_1812_);
return v___x_1819_;
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1821_; 
v_a_1820_ = lean_array_uget_borrowed(v_as_1809_, v_i_1811_);
v___x_1821_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1820_, v_b_1812_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1834_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1824_ = v___x_1821_;
v_isShared_1825_ = v_isSharedCheck_1834_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1821_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1834_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
if (lean_obj_tag(v_a_1822_) == 0)
{
lean_object* v_a_1826_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v_a_1822_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v_a_1822_, 1);
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 0, v_a_1826_);
v___x_1828_ = v___x_1824_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1826_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
else
{
lean_object* v_a_1830_; size_t v___x_1831_; size_t v___x_1832_; 
lean_del_object(v___x_1824_);
v_a_1830_ = lean_ctor_get(v_a_1822_, 0);
lean_inc(v_a_1830_);
lean_dec_ref_known(v_a_1822_, 1);
v___x_1831_ = ((size_t)1ULL);
v___x_1832_ = lean_usize_add(v_i_1811_, v___x_1831_);
v_i_1811_ = v___x_1832_;
v_b_1812_ = v_a_1830_;
goto _start;
}
}
}
else
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1842_; 
v_a_1835_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1837_ = v___x_1821_;
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1821_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1840_; 
if (v_isShared_1838_ == 0)
{
v___x_1840_ = v___x_1837_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_a_1835_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1___boxed(lean_object* v_as_1843_, lean_object* v_sz_1844_, lean_object* v_i_1845_, lean_object* v_b_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
size_t v_sz_boxed_1852_; size_t v_i_boxed_1853_; lean_object* v_res_1854_; 
v_sz_boxed_1852_ = lean_unbox_usize(v_sz_1844_);
lean_dec(v_sz_1844_);
v_i_boxed_1853_ = lean_unbox_usize(v_i_1845_);
lean_dec(v_i_1845_);
v_res_1854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(v_as_1843_, v_sz_boxed_1852_, v_i_boxed_1853_, v_b_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec_ref(v_as_1843_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel(lean_object* v_goal_1857_, lean_object* v_isTarget_1858_, lean_object* v_model_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(v_goal_1857_, v_isTarget_1858_, v_model_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v_buckets_1867_; lean_object* v___x_1868_; size_t v_sz_1869_; size_t v___x_1870_; lean_object* v___x_1871_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v_buckets_1867_ = lean_ctor_get(v_a_1866_, 1);
lean_inc_ref(v_buckets_1867_);
lean_dec(v_a_1866_);
v___x_1868_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_finalizeModel___closed__0));
v_sz_1869_ = lean_array_size(v_buckets_1867_);
v___x_1870_ = ((size_t)0ULL);
v___x_1871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(v_buckets_1867_, v_sz_1869_, v___x_1870_, v___x_1868_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_);
lean_dec_ref(v_buckets_1867_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1880_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1874_ = v___x_1871_;
v_isShared_1875_ = v_isSharedCheck_1880_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1871_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1880_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1876_; lean_object* v___x_1878_; 
v___x_1876_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(v_goal_1857_, v_a_1872_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 0, v___x_1876_);
v___x_1878_ = v___x_1874_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
else
{
return v___x_1871_;
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
v_a_1881_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1865_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1865_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___boxed(lean_object* v_goal_1889_, lean_object* v_isTarget_1890_, lean_object* v_model_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_Meta_Grind_Arith_finalizeModel(v_goal_1889_, v_isTarget_1890_, v_model_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
lean_dec(v_a_1895_);
lean_dec_ref(v_a_1894_);
lean_dec(v_a_1893_);
lean_dec_ref(v_a_1892_);
lean_dec_ref(v_goal_1889_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1898_, v_a_1899_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___boxed(lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(v_a_1906_, v_a_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v_a_1906_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(lean_object* v_msgData_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v_env_1921_; uint8_t v___x_1922_; lean_object* v_env_1923_; lean_object* v___x_1924_; lean_object* v_toCold_1925_; lean_object* v_mctx_1926_; lean_object* v_lctx_1927_; lean_object* v_options_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1920_ = lean_st_ref_get(v___y_1918_);
v_env_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc_ref(v_env_1921_);
lean_dec(v___x_1920_);
v___x_1922_ = 0;
v_env_1923_ = l_Lean_Environment_setRecordingDeps(v_env_1921_, v___x_1922_);
v___x_1924_ = lean_st_ref_get(v___y_1916_);
v_toCold_1925_ = lean_ctor_get(v___y_1917_, 0);
v_mctx_1926_ = lean_ctor_get(v___x_1924_, 0);
lean_inc_ref(v_mctx_1926_);
lean_dec(v___x_1924_);
v_lctx_1927_ = lean_ctor_get(v___y_1915_, 2);
v_options_1928_ = lean_ctor_get(v_toCold_1925_, 2);
lean_inc_ref(v_options_1928_);
lean_inc_ref(v_lctx_1927_);
v___x_1929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1929_, 0, v_env_1923_);
lean_ctor_set(v___x_1929_, 1, v_mctx_1926_);
lean_ctor_set(v___x_1929_, 2, v_lctx_1927_);
lean_ctor_set(v___x_1929_, 3, v_options_1928_);
v___x_1930_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
lean_ctor_set(v___x_1930_, 1, v_msgData_1914_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0___boxed(lean_object* v_msgData_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(v_msgData_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
return v_res_1938_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1939_; double v___x_1940_; 
v___x_1939_ = lean_unsigned_to_nat(0u);
v___x_1940_ = lean_float_of_nat(v___x_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(lean_object* v_cls_1944_, lean_object* v_msg_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_ref_1951_; lean_object* v___x_1952_; lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1998_; 
v_ref_1951_ = lean_ctor_get(v___y_1948_, 2);
v___x_1952_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(v_msg_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1955_ = v___x_1952_;
v_isShared_1956_ = v_isSharedCheck_1998_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1998_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v_traceState_1958_; lean_object* v_env_1959_; lean_object* v_nextMacroScope_1960_; lean_object* v_ngen_1961_; lean_object* v_auxDeclNGen_1962_; lean_object* v_cache_1963_; lean_object* v_recordedDeps_1964_; lean_object* v_messages_1965_; lean_object* v_infoState_1966_; lean_object* v_snapshotTasks_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1997_; 
v___x_1957_ = lean_st_ref_take(v___y_1949_);
v_traceState_1958_ = lean_ctor_get(v___x_1957_, 4);
v_env_1959_ = lean_ctor_get(v___x_1957_, 0);
v_nextMacroScope_1960_ = lean_ctor_get(v___x_1957_, 1);
v_ngen_1961_ = lean_ctor_get(v___x_1957_, 2);
v_auxDeclNGen_1962_ = lean_ctor_get(v___x_1957_, 3);
v_cache_1963_ = lean_ctor_get(v___x_1957_, 5);
v_recordedDeps_1964_ = lean_ctor_get(v___x_1957_, 6);
v_messages_1965_ = lean_ctor_get(v___x_1957_, 7);
v_infoState_1966_ = lean_ctor_get(v___x_1957_, 8);
v_snapshotTasks_1967_ = lean_ctor_get(v___x_1957_, 9);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1969_ = v___x_1957_;
v_isShared_1970_ = v_isSharedCheck_1997_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_snapshotTasks_1967_);
lean_inc(v_infoState_1966_);
lean_inc(v_messages_1965_);
lean_inc(v_recordedDeps_1964_);
lean_inc(v_cache_1963_);
lean_inc(v_traceState_1958_);
lean_inc(v_auxDeclNGen_1962_);
lean_inc(v_ngen_1961_);
lean_inc(v_nextMacroScope_1960_);
lean_inc(v_env_1959_);
lean_dec(v___x_1957_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1997_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
uint64_t v_tid_1971_; lean_object* v_traces_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1996_; 
v_tid_1971_ = lean_ctor_get_uint64(v_traceState_1958_, sizeof(void*)*1);
v_traces_1972_ = lean_ctor_get(v_traceState_1958_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_traceState_1958_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1974_ = v_traceState_1958_;
v_isShared_1975_ = v_isSharedCheck_1996_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_traces_1972_);
lean_dec(v_traceState_1958_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1996_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; double v___x_1978_; uint8_t v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1976_ = lean_box(0);
v___x_1977_ = lean_box(0);
v___x_1978_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0);
v___x_1979_ = 0;
v___x_1980_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1));
v___x_1981_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1981_, 0, v_cls_1944_);
lean_ctor_set(v___x_1981_, 1, v___x_1977_);
lean_ctor_set(v___x_1981_, 2, v___x_1980_);
lean_ctor_set_float(v___x_1981_, sizeof(void*)*3, v___x_1978_);
lean_ctor_set_float(v___x_1981_, sizeof(void*)*3 + 8, v___x_1978_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*3 + 16, v___x_1979_);
v___x_1982_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2));
v___x_1983_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1981_);
lean_ctor_set(v___x_1983_, 1, v_a_1953_);
lean_ctor_set(v___x_1983_, 2, v___x_1982_);
lean_inc(v_ref_1951_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_ref_1951_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = l_Lean_PersistentArray_push___redArg(v_traces_1972_, v___x_1984_);
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 0, v___x_1985_);
v___x_1987_ = v___x_1974_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1985_);
lean_ctor_set_uint64(v_reuseFailAlloc_1995_, sizeof(void*)*1, v_tid_1971_);
v___x_1987_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 4, v___x_1987_);
v___x_1989_ = v___x_1969_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_env_1959_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_nextMacroScope_1960_);
lean_ctor_set(v_reuseFailAlloc_1994_, 2, v_ngen_1961_);
lean_ctor_set(v_reuseFailAlloc_1994_, 3, v_auxDeclNGen_1962_);
lean_ctor_set(v_reuseFailAlloc_1994_, 4, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1994_, 5, v_cache_1963_);
lean_ctor_set(v_reuseFailAlloc_1994_, 6, v_recordedDeps_1964_);
lean_ctor_set(v_reuseFailAlloc_1994_, 7, v_messages_1965_);
lean_ctor_set(v_reuseFailAlloc_1994_, 8, v_infoState_1966_);
lean_ctor_set(v_reuseFailAlloc_1994_, 9, v_snapshotTasks_1967_);
v___x_1989_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1990_ = lean_st_ref_put(v___y_1949_, v___x_1989_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1976_);
v___x_1992_ = v___x_1955_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1976_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___boxed(lean_object* v_cls_1999_, lean_object* v_msg_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(v_cls_1999_, v_msg_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
return v_res_2006_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0));
v___x_2009_ = l_Lean_stringToMessageData(v___x_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(lean_object* v_traceClass_2011_, lean_object* v_as_2012_, size_t v_sz_2013_, size_t v_i_2014_, lean_object* v_b_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = lean_usize_dec_lt(v_i_2014_, v_sz_2013_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; 
lean_dec(v_traceClass_2011_);
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_b_2015_);
return v___x_2022_;
}
else
{
lean_object* v_a_2023_; lean_object* v_snd_2024_; lean_object* v_fst_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2060_; 
v_a_2023_ = lean_array_uget(v_as_2012_, v_i_2014_);
v_snd_2024_ = lean_ctor_get(v_a_2023_, 1);
v_fst_2025_ = lean_ctor_get(v_a_2023_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_a_2023_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2027_ = v_a_2023_;
v_isShared_2028_ = v_isSharedCheck_2060_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_snd_2024_);
lean_inc(v_fst_2025_);
lean_dec(v_a_2023_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2060_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_num_2029_; lean_object* v_den_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2059_; 
v_num_2029_ = lean_ctor_get(v_snd_2024_, 0);
v_den_2030_ = lean_ctor_get(v_snd_2024_, 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_snd_2024_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2032_ = v_snd_2024_;
v_isShared_2033_ = v_isSharedCheck_2059_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_den_2030_);
lean_inc(v_num_2029_);
lean_dec(v_snd_2024_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2059_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2038_; 
v___x_2034_ = lean_box(0);
v___x_2035_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_fst_2025_);
v___x_2036_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1);
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 7);
lean_ctor_set(v___x_2032_, 1, v___x_2036_);
lean_ctor_set(v___x_2032_, 0, v___x_2035_);
v___x_2038_ = v___x_2032_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___y_2040_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2050_ = lean_unsigned_to_nat(1u);
v___x_2051_ = lean_nat_dec_eq(v_den_2030_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2052_ = l_Int_repr(v_num_2029_);
lean_dec(v_num_2029_);
v___x_2053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2));
v___x_2054_ = lean_string_append(v___x_2052_, v___x_2053_);
v___x_2055_ = l_Nat_reprFast(v_den_2030_);
v___x_2056_ = lean_string_append(v___x_2054_, v___x_2055_);
lean_dec_ref(v___x_2055_);
v___y_2040_ = v___x_2056_;
goto v___jp_2039_;
}
else
{
lean_object* v___x_2057_; 
lean_dec(v_den_2030_);
v___x_2057_ = l_Int_repr(v_num_2029_);
lean_dec(v_num_2029_);
v___y_2040_ = v___x_2057_;
goto v___jp_2039_;
}
v___jp_2039_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2041_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___y_2040_);
v___x_2042_ = l_Lean_MessageData_ofFormat(v___x_2041_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 7);
lean_ctor_set(v___x_2027_, 1, v___x_2042_);
lean_ctor_set(v___x_2027_, 0, v___x_2038_);
v___x_2044_ = v___x_2027_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; 
lean_inc(v_traceClass_2011_);
v___x_2045_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(v_traceClass_2011_, v___x_2044_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_);
if (lean_obj_tag(v___x_2045_) == 0)
{
size_t v___x_2046_; size_t v___x_2047_; 
lean_dec_ref_known(v___x_2045_, 1);
v___x_2046_ = ((size_t)1ULL);
v___x_2047_ = lean_usize_add(v_i_2014_, v___x_2046_);
v_i_2014_ = v___x_2047_;
v_b_2015_ = v___x_2034_;
goto _start;
}
else
{
lean_dec(v_traceClass_2011_);
return v___x_2045_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___boxed(lean_object* v_traceClass_2061_, lean_object* v_as_2062_, lean_object* v_sz_2063_, lean_object* v_i_2064_, lean_object* v_b_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
size_t v_sz_boxed_2071_; size_t v_i_boxed_2072_; lean_object* v_res_2073_; 
v_sz_boxed_2071_ = lean_unbox_usize(v_sz_2063_);
lean_dec(v_sz_2063_);
v_i_boxed_2072_ = lean_unbox_usize(v_i_2064_);
lean_dec(v_i_2064_);
v_res_2073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(v_traceClass_2061_, v_as_2062_, v_sz_boxed_2071_, v_i_boxed_2072_, v_b_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec_ref(v_as_2062_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel(lean_object* v_traceClass_2077_, lean_object* v_model_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v_toCold_2087_; lean_object* v_options_2088_; uint8_t v_hasTrace_2089_; 
v_toCold_2087_ = lean_ctor_get(v_a_2081_, 0);
v_options_2088_ = lean_ctor_get(v_toCold_2087_, 2);
v_hasTrace_2089_ = lean_ctor_get_uint8(v_options_2088_, sizeof(void*)*1);
if (v_hasTrace_2089_ == 0)
{
lean_dec(v_traceClass_2077_);
goto v___jp_2084_;
}
else
{
lean_object* v_inheritedTraceOptions_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v_inheritedTraceOptions_2090_ = lean_ctor_get(v_toCold_2087_, 11);
v___x_2091_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_traceModel___closed__1));
lean_inc(v_traceClass_2077_);
v___x_2092_ = l_Lean_Name_append(v___x_2091_, v_traceClass_2077_);
v___x_2093_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2090_, v_options_2088_, v___x_2092_);
lean_dec(v___x_2092_);
if (v___x_2093_ == 0)
{
lean_dec(v_traceClass_2077_);
goto v___jp_2084_;
}
else
{
lean_object* v___x_2094_; size_t v_sz_2095_; size_t v___x_2096_; lean_object* v___x_2097_; 
v___x_2094_ = lean_box(0);
v_sz_2095_ = lean_array_size(v_model_2078_);
v___x_2096_ = ((size_t)0ULL);
v___x_2097_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(v_traceClass_2077_, v_model_2078_, v_sz_2095_, v___x_2096_, v___x_2094_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v___x_2097_, 0);
lean_dec(v_unused_2105_);
v___x_2099_ = v___x_2097_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_dec(v___x_2097_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 0, v___x_2094_);
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2094_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
else
{
return v___x_2097_;
}
}
}
v___jp_2084_:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = lean_box(0);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
return v___x_2086_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel___boxed(lean_object* v_traceClass_2106_, lean_object* v_model_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lean_Meta_Grind_Arith_traceModel(v_traceClass_2106_, v_model_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
lean_dec(v_a_2109_);
lean_dec_ref(v_a_2108_);
lean_dec_ref(v_model_2107_);
return v_res_2113_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
}
#ifdef __cplusplus
}
#endif
