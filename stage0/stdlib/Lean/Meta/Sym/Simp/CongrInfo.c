// Lean compiler output
// Module: Lean.Meta.Sym.Simp.CongrInfo
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.FunInfo import Init.Omega
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_instBEqCongrArgKind_beq(uint8_t, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "fixedPrefix "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "interlaced "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "congrTheorem "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object* v_argKinds_1_, lean_object* v_pre_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_argKinds_1_);
v___x_5_ = lean_nat_dec_lt(v_i_3_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_i_3_);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_pre_2_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_array_fget_borrowed(v_argKinds_1_, v_i_3_);
v___x_8_ = lean_unbox(v___x_7_);
if (v___x_8_ == 2)
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_nat_add(v_i_3_, v___x_9_);
lean_dec(v_i_3_);
v_i_3_ = v___x_10_;
goto _start;
}
else
{
lean_object* v___x_12_; 
lean_dec(v_i_3_);
lean_dec(v_pre_2_);
v___x_12_ = lean_box(0);
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object* v_argKinds_13_, lean_object* v_pre_14_, lean_object* v_i_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_13_, v_pre_14_, v_i_15_);
lean_dec_ref(v_argKinds_13_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t v_x_17_, lean_object* v_h__1_18_, lean_object* v_h__2_19_, lean_object* v_h__3_20_){
_start:
{
switch(v_x_17_)
{
case 0:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
lean_dec(v_h__3_20_);
lean_dec(v_h__2_19_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_apply_1(v_h__1_18_, v___x_21_);
return v___x_22_;
}
case 2:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_h__3_20_);
lean_dec(v_h__1_18_);
v___x_23_ = lean_box(0);
v___x_24_ = lean_apply_1(v_h__2_19_, v___x_23_);
return v___x_24_;
}
default: 
{
lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_h__2_19_);
lean_dec(v_h__1_18_);
v___x_25_ = lean_box(v_x_17_);
v___x_26_ = lean_apply_3(v_h__3_20_, v___x_25_, lean_box(0), lean_box(0));
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object* v_x_27_, lean_object* v_h__1_28_, lean_object* v_h__2_29_, lean_object* v_h__3_30_){
_start:
{
uint8_t v_x_18__boxed_31_; lean_object* v_res_32_; 
v_x_18__boxed_31_ = lean_unbox(v_x_27_);
v_res_32_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(v_x_18__boxed_31_, v_h__1_28_, v_h__2_29_, v_h__3_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object* v_motive_33_, uint8_t v_x_34_, lean_object* v_h__1_35_, lean_object* v_h__2_36_, lean_object* v_h__3_37_){
_start:
{
switch(v_x_34_)
{
case 0:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
v___x_38_ = lean_box(0);
v___x_39_ = lean_apply_1(v_h__1_35_, v___x_38_);
return v___x_39_;
}
case 2:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_dec(v_h__3_37_);
lean_dec(v_h__1_35_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_1(v_h__2_36_, v___x_40_);
return v___x_41_;
}
default: 
{
lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v___x_42_ = lean_box(v_x_34_);
v___x_43_ = lean_apply_3(v_h__3_37_, v___x_42_, lean_box(0), lean_box(0));
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object* v_motive_44_, lean_object* v_x_45_, lean_object* v_h__1_46_, lean_object* v_h__2_47_, lean_object* v_h__3_48_){
_start:
{
uint8_t v_x_33__boxed_49_; lean_object* v_res_50_; 
v_x_33__boxed_49_ = lean_unbox(v_x_45_);
v_res_50_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(v_motive_44_, v_x_33__boxed_49_, v_h__1_46_, v_h__2_47_, v_h__3_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object* v_argKinds_51_, lean_object* v_i_52_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_array_get_size(v_argKinds_51_);
v___x_54_ = lean_nat_dec_lt(v_i_52_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec(v_i_52_);
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_array_fget_borrowed(v_argKinds_51_, v_i_52_);
v___x_57_ = lean_unbox(v___x_56_);
switch(v___x_57_)
{
case 0:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(1u);
v___x_59_ = lean_nat_add(v_i_52_, v___x_58_);
lean_dec(v_i_52_);
v_i_52_ = v___x_59_;
goto _start;
}
case 2:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_add(v_i_52_, v___x_61_);
v___x_63_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_51_, v_i_52_, v___x_62_);
return v___x_63_;
}
default: 
{
lean_object* v___x_64_; 
lean_dec(v_i_52_);
v___x_64_ = lean_box(0);
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object* v_argKinds_65_, lean_object* v_i_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_65_, v_i_66_);
lean_dec_ref(v_argKinds_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object* v_argKinds_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_68_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object* v_argKinds_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_argKinds_71_);
lean_dec_ref(v_argKinds_71_);
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object* v_xs_73_, lean_object* v_ys_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_zero_76_; uint8_t v_isZero_77_; 
v_zero_76_ = lean_unsigned_to_nat(0u);
v_isZero_77_ = lean_nat_dec_eq(v_x_75_, v_zero_76_);
if (v_isZero_77_ == 1)
{
lean_dec(v_x_75_);
return v_isZero_77_;
}
else
{
lean_object* v_one_78_; lean_object* v_n_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; uint8_t v___x_83_; uint8_t v___x_84_; 
v_one_78_ = lean_unsigned_to_nat(1u);
v_n_79_ = lean_nat_sub(v_x_75_, v_one_78_);
lean_dec(v_x_75_);
v___x_80_ = lean_array_fget_borrowed(v_xs_73_, v_n_79_);
v___x_81_ = lean_array_fget_borrowed(v_ys_74_, v_n_79_);
v___x_82_ = lean_unbox(v___x_80_);
v___x_83_ = lean_unbox(v___x_81_);
v___x_84_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_dec(v_n_79_);
return v___x_84_;
}
else
{
v_x_75_ = v_n_79_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object* v_xs_86_, lean_object* v_ys_87_, lean_object* v_x_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_86_, v_ys_87_, v_x_88_);
lean_dec_ref(v_ys_87_);
lean_dec_ref(v_xs_86_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t v___y_91_, uint8_t v_a_92_, lean_object* v_as_93_, size_t v_i_94_, size_t v_stop_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_usize_dec_eq(v_i_94_, v_stop_95_);
if (v___x_96_ == 0)
{
uint8_t v___x_97_; uint8_t v___y_99_; lean_object* v___x_103_; uint8_t v___x_104_; uint8_t v___x_105_; uint8_t v___x_106_; 
v___x_97_ = 1;
v___x_103_ = lean_array_uget_borrowed(v_as_93_, v_i_94_);
v___x_104_ = 0;
v___x_105_ = lean_unbox(v___x_103_);
v___x_106_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_105_, v___x_104_);
if (v___x_106_ == 0)
{
v___y_99_ = v___y_91_;
goto v___jp_98_;
}
else
{
v___y_99_ = v_a_92_;
goto v___jp_98_;
}
v___jp_98_:
{
if (v___y_99_ == 0)
{
size_t v___x_100_; size_t v___x_101_; 
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_add(v_i_94_, v___x_100_);
v_i_94_ = v___x_101_;
goto _start;
}
else
{
return v___x_97_;
}
}
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object* v___y_108_, lean_object* v_a_109_, lean_object* v_as_110_, lean_object* v_i_111_, lean_object* v_stop_112_){
_start:
{
uint8_t v___y_6064__boxed_113_; uint8_t v_a_6065__boxed_114_; size_t v_i_boxed_115_; size_t v_stop_boxed_116_; uint8_t v_res_117_; lean_object* v_r_118_; 
v___y_6064__boxed_113_ = lean_unbox(v___y_108_);
v_a_6065__boxed_114_ = lean_unbox(v_a_109_);
v_i_boxed_115_ = lean_unbox_usize(v_i_111_);
lean_dec(v_i_111_);
v_stop_boxed_116_ = lean_unbox_usize(v_stop_112_);
lean_dec(v_stop_112_);
v_res_117_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_6064__boxed_113_, v_a_6065__boxed_114_, v_as_110_, v_i_boxed_115_, v_stop_boxed_116_);
lean_dec_ref(v_as_110_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t v_sz_119_, size_t v_i_120_, lean_object* v_bs_121_){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = lean_usize_dec_lt(v_i_120_, v_sz_119_);
if (v___x_122_ == 0)
{
return v_bs_121_;
}
else
{
lean_object* v_v_123_; lean_object* v___x_124_; lean_object* v_bs_x27_125_; uint8_t v___x_126_; uint8_t v___x_127_; uint8_t v___x_128_; size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_v_123_ = lean_array_uget(v_bs_121_, v_i_120_);
v___x_124_ = lean_unsigned_to_nat(0u);
v_bs_x27_125_ = lean_array_uset(v_bs_121_, v_i_120_, v___x_124_);
v___x_126_ = 2;
v___x_127_ = lean_unbox(v_v_123_);
lean_dec(v_v_123_);
v___x_128_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_127_, v___x_126_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_add(v_i_120_, v___x_129_);
v___x_131_ = lean_box(v___x_128_);
v___x_132_ = lean_array_uset(v_bs_x27_125_, v_i_120_, v___x_131_);
v_i_120_ = v___x_130_;
v_bs_121_ = v___x_132_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object* v_sz_134_, lean_object* v_i_135_, lean_object* v_bs_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v_i_boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_134_);
lean_dec(v_sz_134_);
v_i_boxed_138_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_res_139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_boxed_137_, v_i_boxed_138_, v_bs_136_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t v_a_140_, lean_object* v_as_141_, size_t v_i_142_, size_t v_stop_143_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = lean_usize_dec_eq(v_i_142_, v_stop_143_);
if (v___x_144_ == 0)
{
uint8_t v___x_145_; uint8_t v___y_147_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_145_ = 1;
v___x_151_ = lean_array_uget_borrowed(v_as_141_, v_i_142_);
v___x_152_ = lean_unbox(v___x_151_);
switch(v___x_152_)
{
case 0:
{
v___y_147_ = v_a_140_;
goto v___jp_146_;
}
case 2:
{
v___y_147_ = v_a_140_;
goto v___jp_146_;
}
default: 
{
return v___x_145_;
}
}
v___jp_146_:
{
if (v___y_147_ == 0)
{
size_t v___x_148_; size_t v___x_149_; 
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_add(v_i_142_, v___x_148_);
v_i_142_ = v___x_149_;
goto _start;
}
else
{
return v___x_145_;
}
}
}
else
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object* v_a_154_, lean_object* v_as_155_, lean_object* v_i_156_, lean_object* v_stop_157_){
_start:
{
uint8_t v_a_6114__boxed_158_; size_t v_i_boxed_159_; size_t v_stop_boxed_160_; uint8_t v_res_161_; lean_object* v_r_162_; 
v_a_6114__boxed_158_ = lean_unbox(v_a_154_);
v_i_boxed_159_ = lean_unbox_usize(v_i_156_);
lean_dec(v_i_156_);
v_stop_boxed_160_ = lean_unbox_usize(v_stop_157_);
lean_dec(v_stop_157_);
v_res_161_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v_a_6114__boxed_158_, v_as_155_, v_i_boxed_159_, v_stop_boxed_160_);
lean_dec_ref(v_as_155_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object* v_f_163_, uint8_t v_replaceUDecInsts_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v___x_170_; 
lean_inc_ref(v_f_163_);
v___x_170_ = l_Lean_Meta_isProof(v_f_163_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_307_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_307_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_307_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_307_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___x_175_; 
v___x_175_ = lean_unbox(v_a_171_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
lean_del_object(v___x_173_);
v___x_176_ = 1;
v___x_177_ = lean_box(0);
lean_inc_ref(v_f_163_);
v___x_178_ = l_Lean_Meta_getFunInfo(v_f_163_, v___x_177_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_294_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_294_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_294_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_294_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; 
lean_inc_ref(v_f_163_);
v___x_183_ = l_Lean_Meta_getCongrSimpKinds(v_f_163_, v_a_179_, v_replaceUDecInsts_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_285_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_285_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_285_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_285_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___y_230_; uint8_t v___x_249_; 
v___x_227_ = lean_unsigned_to_nat(0u);
v___x_228_ = lean_array_get_size(v_a_184_);
v___x_249_ = lean_nat_dec_lt(v___x_227_, v___x_228_);
if (v___x_249_ == 0)
{
lean_dec(v_a_179_);
lean_dec_ref(v_f_163_);
v___y_230_ = v___x_176_;
goto v___jp_229_;
}
else
{
if (v___x_249_ == 0)
{
lean_dec(v_a_179_);
lean_dec_ref(v_f_163_);
v___y_230_ = v___x_176_;
goto v___jp_229_;
}
else
{
size_t v___x_250_; size_t v___x_251_; uint8_t v___x_252_; uint8_t v___x_253_; 
v___x_250_ = ((size_t)0ULL);
v___x_251_ = lean_usize_of_nat(v___x_228_);
v___x_252_ = lean_unbox(v_a_171_);
v___x_253_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v___x_252_, v_a_184_, v___x_250_, v___x_251_);
if (v___x_253_ == 0)
{
lean_dec(v_a_179_);
lean_dec_ref(v_f_163_);
v___y_230_ = v___x_249_;
goto v___jp_229_;
}
else
{
lean_del_object(v___x_186_);
lean_del_object(v___x_181_);
lean_dec(v_a_171_);
if (lean_obj_tag(v_f_163_) == 4)
{
lean_object* v_declName_254_; lean_object* v_us_255_; lean_object* v___x_256_; 
v_declName_254_ = lean_ctor_get(v_f_163_, 0);
v_us_255_ = lean_ctor_get(v_f_163_, 1);
lean_inc(v_us_255_);
lean_inc(v_declName_254_);
v___x_256_ = l_Lean_Meta_mkCongrSimpForConst_x3f(v_declName_254_, v_us_255_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_276_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_276_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_276_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_276_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
if (lean_obj_tag(v_a_257_) == 1)
{
lean_object* v_val_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_275_; 
v_val_261_ = lean_ctor_get(v_a_257_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v_a_257_);
if (v_isSharedCheck_275_ == 0)
{
v___x_263_ = v_a_257_;
v_isShared_264_ = v_isSharedCheck_275_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_val_261_);
lean_dec(v_a_257_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_275_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_argKinds_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_argKinds_265_ = lean_ctor_get(v_val_261_, 2);
v___x_266_ = lean_array_get_size(v_argKinds_265_);
v___x_267_ = lean_nat_dec_eq(v___x_266_, v___x_228_);
if (v___x_267_ == 0)
{
lean_del_object(v___x_263_);
lean_dec(v_val_261_);
lean_del_object(v___x_259_);
v___y_194_ = v_a_165_;
v___y_195_ = v_a_166_;
v___y_196_ = v_a_167_;
v___y_197_ = v_a_168_;
goto v___jp_193_;
}
else
{
uint8_t v___x_268_; 
v___x_268_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_argKinds_265_, v_a_184_, v___x_266_);
if (v___x_268_ == 0)
{
lean_del_object(v___x_263_);
lean_dec(v_val_261_);
lean_del_object(v___x_259_);
v___y_194_ = v_a_165_;
v___y_195_ = v_a_166_;
v___y_196_ = v_a_167_;
v___y_197_ = v_a_168_;
goto v___jp_193_;
}
else
{
lean_object* v___x_270_; 
lean_dec_ref_known(v_f_163_, 2);
lean_dec(v_a_184_);
lean_dec(v_a_179_);
if (v_isShared_264_ == 0)
{
lean_ctor_set_tag(v___x_263_, 3);
v___x_270_ = v___x_263_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_val_261_);
v___x_270_ = v_reuseFailAlloc_274_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_272_; 
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_270_);
v___x_272_ = v___x_259_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_259_);
lean_dec(v_a_257_);
v___y_194_ = v_a_165_;
v___y_195_ = v_a_166_;
v___y_196_ = v_a_167_;
v___y_197_ = v_a_168_;
goto v___jp_193_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref_known(v_f_163_, 2);
lean_dec(v_a_184_);
lean_dec(v_a_179_);
v_a_277_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_256_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_256_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
else
{
v___y_194_ = v_a_165_;
v___y_195_ = v_a_166_;
v___y_196_ = v_a_167_;
v___y_197_ = v_a_168_;
goto v___jp_193_;
}
}
}
}
v___jp_188_:
{
lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_189_ = lean_box(0);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_189_);
v___x_191_ = v___x_186_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
v___jp_193_:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_163_, v_a_179_, v_a_184_, v___x_176_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_218_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_218_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_218_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_218_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
if (lean_obj_tag(v_a_199_) == 1)
{
lean_object* v_val_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_213_; 
v_val_203_ = lean_ctor_get(v_a_199_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v_a_199_);
if (v_isSharedCheck_213_ == 0)
{
v___x_205_ = v_a_199_;
v_isShared_206_ = v_isSharedCheck_213_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_val_203_);
lean_dec(v_a_199_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_213_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set_tag(v___x_205_, 3);
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_val_203_);
v___x_208_ = v_reuseFailAlloc_212_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_210_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_208_);
v___x_210_ = v___x_201_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec(v_a_199_);
v___x_214_ = lean_box(0);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_214_);
v___x_216_ = v___x_201_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
v_a_219_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_198_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_198_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
v___jp_229_:
{
uint8_t v___x_231_; 
v___x_231_ = lean_nat_dec_lt(v___x_227_, v___x_228_);
if (v___x_231_ == 0)
{
lean_dec(v_a_184_);
lean_del_object(v___x_181_);
lean_dec(v_a_171_);
goto v___jp_188_;
}
else
{
if (v___x_231_ == 0)
{
lean_dec(v_a_184_);
lean_del_object(v___x_181_);
lean_dec(v_a_171_);
goto v___jp_188_;
}
else
{
size_t v___x_232_; size_t v___x_233_; uint8_t v___x_234_; uint8_t v___x_235_; 
v___x_232_ = ((size_t)0ULL);
v___x_233_ = lean_usize_of_nat(v___x_228_);
v___x_234_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
v___x_235_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_230_, v___x_234_, v_a_184_, v___x_232_, v___x_233_);
if (v___x_235_ == 0)
{
lean_dec(v_a_184_);
lean_del_object(v___x_181_);
goto v___jp_188_;
}
else
{
lean_object* v___x_236_; 
lean_del_object(v___x_186_);
v___x_236_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_a_184_);
if (lean_obj_tag(v___x_236_) == 1)
{
lean_object* v_val_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
lean_dec(v_a_184_);
v_val_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_val_237_);
lean_dec_ref_known(v___x_236_, 1);
v___x_238_ = lean_nat_sub(v___x_228_, v_val_237_);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v_val_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_239_);
v___x_241_ = v___x_181_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
else
{
size_t v_sz_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
lean_dec(v___x_236_);
v_sz_243_ = lean_array_size(v_a_184_);
v___x_244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_243_, v___x_232_, v_a_184_);
v___x_245_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_245_);
v___x_247_ = v___x_181_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
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
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_del_object(v___x_181_);
lean_dec(v_a_179_);
lean_dec(v_a_171_);
lean_dec_ref(v_f_163_);
v_a_286_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_183_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_183_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
lean_dec(v_a_171_);
lean_dec_ref(v_f_163_);
v_a_295_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_178_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_178_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
else
{
lean_object* v___x_303_; lean_object* v___x_305_; 
lean_dec(v_a_171_);
lean_dec_ref(v_f_163_);
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
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_f_163_);
v_a_308_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_170_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_170_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object* v_f_316_, lean_object* v_replaceUDecInsts_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
uint8_t v_replaceUDecInsts_boxed_323_; lean_object* v_res_324_; 
v_replaceUDecInsts_boxed_323_ = lean_unbox(v_replaceUDecInsts_317_);
v_res_324_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_316_, v_replaceUDecInsts_boxed_323_, v_a_318_, v_a_319_, v_a_320_, v_a_321_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object* v_f_325_, uint8_t v_replaceUDecInsts_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_325_, v_replaceUDecInsts_326_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object* v_f_335_, lean_object* v_replaceUDecInsts_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
uint8_t v_replaceUDecInsts_boxed_344_; lean_object* v_res_345_; 
v_replaceUDecInsts_boxed_344_ = lean_unbox(v_replaceUDecInsts_336_);
v_res_345_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(v_f_335_, v_replaceUDecInsts_boxed_344_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
return v_res_345_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object* v_xs_346_, lean_object* v_ys_347_, lean_object* v_hsz_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_346_, v_ys_347_, v_x_349_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object* v_xs_352_, lean_object* v_ys_353_, lean_object* v_hsz_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
uint8_t v_res_357_; lean_object* v_r_358_; 
v_res_357_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(v_xs_352_, v_ys_353_, v_hsz_354_, v_x_355_, v_x_356_);
lean_dec_ref(v_ys_353_);
lean_dec_ref(v_xs_352_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
lean_object* v_ks_363_; lean_object* v_vs_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_390_; 
v_ks_363_ = lean_ctor_get(v_x_359_, 0);
v_vs_364_ = lean_ctor_get(v_x_359_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_390_ == 0)
{
v___x_366_ = v_x_359_;
v_isShared_367_ = v_isSharedCheck_390_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_vs_364_);
lean_inc(v_ks_363_);
lean_dec(v_x_359_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_390_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_array_get_size(v_ks_363_);
v___x_369_ = lean_nat_dec_lt(v_x_360_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
lean_dec(v_x_360_);
v___x_370_ = lean_array_push(v_ks_363_, v_x_361_);
v___x_371_ = lean_array_push(v_vs_364_, v_x_362_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v___x_371_);
lean_ctor_set(v___x_366_, 0, v___x_370_);
v___x_373_ = v___x_366_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
else
{
lean_object* v_k_x27_375_; size_t v___x_376_; size_t v___x_377_; uint8_t v___x_378_; 
v_k_x27_375_ = lean_array_fget_borrowed(v_ks_363_, v_x_360_);
v___x_376_ = lean_ptr_addr(v_x_361_);
v___x_377_ = lean_ptr_addr(v_k_x27_375_);
v___x_378_ = lean_usize_dec_eq(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_380_; 
if (v_isShared_367_ == 0)
{
v___x_380_ = v___x_366_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_ks_363_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_vs_364_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_unsigned_to_nat(1u);
v___x_382_ = lean_nat_add(v_x_360_, v___x_381_);
lean_dec(v_x_360_);
v_x_359_ = v___x_380_;
v_x_360_ = v___x_382_;
goto _start;
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_385_ = lean_array_fset(v_ks_363_, v_x_360_, v_x_361_);
v___x_386_ = lean_array_fset(v_vs_364_, v_x_360_, v_x_362_);
lean_dec(v_x_360_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v___x_386_);
lean_ctor_set(v___x_366_, 0, v___x_385_);
v___x_388_ = v___x_366_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object* v_n_391_, lean_object* v_k_392_, lean_object* v_v_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_n_391_, v___x_394_, v_k_392_, v_v_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object* v_x_397_, size_t v_x_398_, size_t v_x_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_397_) == 0)
{
lean_object* v_es_402_; size_t v___x_403_; size_t v___x_404_; lean_object* v_j_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v_es_402_ = lean_ctor_get(v_x_397_, 0);
v___x_403_ = ((size_t)31ULL);
v___x_404_ = lean_usize_land(v_x_398_, v___x_403_);
v_j_405_ = lean_usize_to_nat(v___x_404_);
v___x_406_ = lean_array_get_size(v_es_402_);
v___x_407_ = lean_nat_dec_lt(v_j_405_, v___x_406_);
if (v___x_407_ == 0)
{
lean_dec(v_j_405_);
lean_dec(v_x_401_);
lean_dec_ref(v_x_400_);
return v_x_397_;
}
else
{
lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_448_; 
lean_inc_ref(v_es_402_);
v_isSharedCheck_448_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v_x_397_, 0);
lean_dec(v_unused_449_);
v___x_409_ = v_x_397_;
v_isShared_410_ = v_isSharedCheck_448_;
goto v_resetjp_408_;
}
else
{
lean_dec(v_x_397_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_448_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_v_411_; lean_object* v___x_412_; lean_object* v_xs_x27_413_; lean_object* v___y_415_; 
v_v_411_ = lean_array_fget(v_es_402_, v_j_405_);
v___x_412_ = lean_box(0);
v_xs_x27_413_ = lean_array_fset(v_es_402_, v_j_405_, v___x_412_);
switch(lean_obj_tag(v_v_411_))
{
case 0:
{
lean_object* v_key_420_; lean_object* v_val_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_433_; 
v_key_420_ = lean_ctor_get(v_v_411_, 0);
v_val_421_ = lean_ctor_get(v_v_411_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_v_411_);
if (v_isSharedCheck_433_ == 0)
{
v___x_423_ = v_v_411_;
v_isShared_424_ = v_isSharedCheck_433_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_val_421_);
lean_inc(v_key_420_);
lean_dec(v_v_411_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_433_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_ptr_addr(v_x_400_);
v___x_426_ = lean_ptr_addr(v_key_420_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_del_object(v___x_423_);
v___x_428_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_420_, v_val_421_, v_x_400_, v_x_401_);
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
v___y_415_ = v___x_429_;
goto v___jp_414_;
}
else
{
lean_object* v___x_431_; 
lean_dec(v_val_421_);
lean_dec(v_key_420_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v_x_401_);
lean_ctor_set(v___x_423_, 0, v_x_400_);
v___x_431_ = v___x_423_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_x_400_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_x_401_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
v___y_415_ = v___x_431_;
goto v___jp_414_;
}
}
}
}
case 1:
{
lean_object* v_node_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_446_; 
v_node_434_ = lean_ctor_get(v_v_411_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v_v_411_);
if (v_isSharedCheck_446_ == 0)
{
v___x_436_ = v_v_411_;
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_node_434_);
lean_dec(v_v_411_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
size_t v___x_438_; size_t v___x_439_; size_t v___x_440_; size_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_438_ = ((size_t)5ULL);
v___x_439_ = lean_usize_shift_right(v_x_398_, v___x_438_);
v___x_440_ = ((size_t)1ULL);
v___x_441_ = lean_usize_add(v_x_399_, v___x_440_);
v___x_442_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_node_434_, v___x_439_, v___x_441_, v_x_400_, v_x_401_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_442_);
v___x_444_ = v___x_436_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
v___y_415_ = v___x_444_;
goto v___jp_414_;
}
}
}
default: 
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_447_, 0, v_x_400_);
lean_ctor_set(v___x_447_, 1, v_x_401_);
v___y_415_ = v___x_447_;
goto v___jp_414_;
}
}
v___jp_414_:
{
lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_416_ = lean_array_fset(v_xs_x27_413_, v_j_405_, v___y_415_);
lean_dec(v_j_405_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_416_);
v___x_418_ = v___x_409_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
else
{
lean_object* v_ks_450_; lean_object* v_vs_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_469_; 
v_ks_450_ = lean_ctor_get(v_x_397_, 0);
v_vs_451_ = lean_ctor_get(v_x_397_, 1);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_469_ == 0)
{
v___x_453_ = v_x_397_;
v_isShared_454_ = v_isSharedCheck_469_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_vs_451_);
lean_inc(v_ks_450_);
lean_dec(v_x_397_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_469_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_ks_450_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_vs_451_);
v___x_456_ = v_reuseFailAlloc_468_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v_newNode_457_; size_t v___x_458_; uint8_t v___x_459_; 
v_newNode_457_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v___x_456_, v_x_400_, v_x_401_);
v___x_458_ = ((size_t)7ULL);
v___x_459_ = lean_usize_dec_le(v___x_458_, v_x_399_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_457_);
v___x_461_ = lean_unsigned_to_nat(4u);
v___x_462_ = lean_nat_dec_lt(v___x_460_, v___x_461_);
lean_dec(v___x_460_);
if (v___x_462_ == 0)
{
lean_object* v_ks_463_; lean_object* v_vs_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_ks_463_ = lean_ctor_get(v_newNode_457_, 0);
lean_inc_ref(v_ks_463_);
v_vs_464_ = lean_ctor_get(v_newNode_457_, 1);
lean_inc_ref(v_vs_464_);
lean_dec_ref(v_newNode_457_);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0);
v___x_467_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_x_399_, v_ks_463_, v_vs_464_, v___x_465_, v___x_466_);
lean_dec_ref(v_vs_464_);
lean_dec_ref(v_ks_463_);
return v___x_467_;
}
else
{
return v_newNode_457_;
}
}
else
{
return v_newNode_457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t v_depth_470_, lean_object* v_keys_471_, lean_object* v_vals_472_, lean_object* v_i_473_, lean_object* v_entries_474_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_array_get_size(v_keys_471_);
v___x_476_ = lean_nat_dec_lt(v_i_473_, v___x_475_);
if (v___x_476_ == 0)
{
lean_dec(v_i_473_);
return v_entries_474_;
}
else
{
lean_object* v_k_477_; lean_object* v_v_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; uint64_t v___x_482_; size_t v_h_483_; size_t v___x_484_; lean_object* v___x_485_; size_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v_h_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_k_477_ = lean_array_fget_borrowed(v_keys_471_, v_i_473_);
v_v_478_ = lean_array_fget_borrowed(v_vals_472_, v_i_473_);
v___x_479_ = lean_ptr_addr(v_k_477_);
v___x_480_ = ((size_t)3ULL);
v___x_481_ = lean_usize_shift_right(v___x_479_, v___x_480_);
v___x_482_ = lean_usize_to_uint64(v___x_481_);
v_h_483_ = lean_uint64_to_usize(v___x_482_);
v___x_484_ = ((size_t)5ULL);
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = ((size_t)1ULL);
v___x_487_ = lean_usize_sub(v_depth_470_, v___x_486_);
v___x_488_ = lean_usize_mul(v___x_484_, v___x_487_);
v_h_489_ = lean_usize_shift_right(v_h_483_, v___x_488_);
v___x_490_ = lean_nat_add(v_i_473_, v___x_485_);
lean_dec(v_i_473_);
lean_inc(v_v_478_);
lean_inc(v_k_477_);
v___x_491_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_entries_474_, v_h_489_, v_depth_470_, v_k_477_, v_v_478_);
v_i_473_ = v___x_490_;
v_entries_474_ = v___x_491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_493_, lean_object* v_keys_494_, lean_object* v_vals_495_, lean_object* v_i_496_, lean_object* v_entries_497_){
_start:
{
size_t v_depth_boxed_498_; lean_object* v_res_499_; 
v_depth_boxed_498_ = lean_unbox_usize(v_depth_493_);
lean_dec(v_depth_493_);
v_res_499_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_boxed_498_, v_keys_494_, v_vals_495_, v_i_496_, v_entries_497_);
lean_dec_ref(v_vals_495_);
lean_dec_ref(v_keys_494_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
size_t v_x_3700__boxed_505_; size_t v_x_3701__boxed_506_; lean_object* v_res_507_; 
v_x_3700__boxed_505_ = lean_unbox_usize(v_x_501_);
lean_dec(v_x_501_);
v_x_3701__boxed_506_ = lean_unbox_usize(v_x_502_);
lean_dec(v_x_502_);
v_res_507_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_500_, v_x_3700__boxed_505_, v_x_3701__boxed_506_, v_x_503_, v_x_504_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
size_t v___x_511_; size_t v___x_512_; size_t v___x_513_; uint64_t v___x_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v___x_517_; 
v___x_511_ = lean_ptr_addr(v_x_509_);
v___x_512_ = ((size_t)3ULL);
v___x_513_ = lean_usize_shift_right(v___x_511_, v___x_512_);
v___x_514_ = lean_usize_to_uint64(v___x_513_);
v___x_515_ = lean_uint64_to_usize(v___x_514_);
v___x_516_ = ((size_t)1ULL);
v___x_517_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_508_, v___x_515_, v___x_516_, v_x_509_, v_x_510_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_518_, lean_object* v_vals_519_, lean_object* v_i_520_, lean_object* v_k_521_){
_start:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = lean_array_get_size(v_keys_518_);
v___x_523_ = lean_nat_dec_lt(v_i_520_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; 
lean_dec(v_i_520_);
v___x_524_ = lean_box(0);
return v___x_524_;
}
else
{
lean_object* v_k_x27_525_; size_t v___x_526_; size_t v___x_527_; uint8_t v___x_528_; 
v_k_x27_525_ = lean_array_fget_borrowed(v_keys_518_, v_i_520_);
v___x_526_ = lean_ptr_addr(v_k_521_);
v___x_527_ = lean_ptr_addr(v_k_x27_525_);
v___x_528_ = lean_usize_dec_eq(v___x_526_, v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_add(v_i_520_, v___x_529_);
lean_dec(v_i_520_);
v_i_520_ = v___x_530_;
goto _start;
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_array_fget_borrowed(v_vals_519_, v_i_520_);
lean_dec(v_i_520_);
lean_inc(v___x_532_);
v___x_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_534_, lean_object* v_vals_535_, lean_object* v_i_536_, lean_object* v_k_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_534_, v_vals_535_, v_i_536_, v_k_537_);
lean_dec_ref(v_k_537_);
lean_dec_ref(v_vals_535_);
lean_dec_ref(v_keys_534_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object* v_x_539_, size_t v_x_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_es_542_; lean_object* v___x_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v_j_546_; lean_object* v___x_547_; 
v_es_542_ = lean_ctor_get(v_x_539_, 0);
v___x_543_ = lean_box(2);
v___x_544_ = ((size_t)31ULL);
v___x_545_ = lean_usize_land(v_x_540_, v___x_544_);
v_j_546_ = lean_usize_to_nat(v___x_545_);
v___x_547_ = lean_array_get_borrowed(v___x_543_, v_es_542_, v_j_546_);
lean_dec(v_j_546_);
switch(lean_obj_tag(v___x_547_))
{
case 0:
{
lean_object* v_key_548_; lean_object* v_val_549_; size_t v___x_550_; size_t v___x_551_; uint8_t v___x_552_; 
v_key_548_ = lean_ctor_get(v___x_547_, 0);
v_val_549_ = lean_ctor_get(v___x_547_, 1);
v___x_550_ = lean_ptr_addr(v_x_541_);
v___x_551_ = lean_ptr_addr(v_key_548_);
v___x_552_ = lean_usize_dec_eq(v___x_550_, v___x_551_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
v___x_553_ = lean_box(0);
return v___x_553_;
}
else
{
lean_object* v___x_554_; 
lean_inc(v_val_549_);
v___x_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_554_, 0, v_val_549_);
return v___x_554_;
}
}
case 1:
{
lean_object* v_node_555_; size_t v___x_556_; size_t v___x_557_; 
v_node_555_ = lean_ctor_get(v___x_547_, 0);
v___x_556_ = ((size_t)5ULL);
v___x_557_ = lean_usize_shift_right(v_x_540_, v___x_556_);
v_x_539_ = v_node_555_;
v_x_540_ = v___x_557_;
goto _start;
}
default: 
{
lean_object* v___x_559_; 
v___x_559_ = lean_box(0);
return v___x_559_;
}
}
}
else
{
lean_object* v_ks_560_; lean_object* v_vs_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_ks_560_ = lean_ctor_get(v_x_539_, 0);
v_vs_561_ = lean_ctor_get(v_x_539_, 1);
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_ks_560_, v_vs_561_, v___x_562_, v_x_541_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object* v_x_564_, lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
size_t v_x_3901__boxed_567_; lean_object* v_res_568_; 
v_x_3901__boxed_567_ = lean_unbox_usize(v_x_565_);
lean_dec(v_x_565_);
v_res_568_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_564_, v_x_3901__boxed_567_, v_x_566_);
lean_dec_ref(v_x_566_);
lean_dec_ref(v_x_564_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
size_t v___x_571_; size_t v___x_572_; size_t v___x_573_; uint64_t v___x_574_; size_t v___x_575_; lean_object* v___x_576_; 
v___x_571_ = lean_ptr_addr(v_x_570_);
v___x_572_ = ((size_t)3ULL);
v___x_573_ = lean_usize_shift_right(v___x_571_, v___x_572_);
v___x_574_ = lean_usize_to_uint64(v___x_573_);
v___x_575_ = lean_uint64_to_usize(v___x_574_);
v___x_576_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_569_, v___x_575_, v_x_570_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object* v_x_577_, lean_object* v_x_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_577_, v_x_578_);
lean_dec_ref(v_x_578_);
lean_dec_ref(v_x_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object* v_f_580_, uint8_t v_replaceUDecInsts_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_588_; lean_object* v___y_590_; 
v___x_588_ = lean_st_ref_get(v_a_582_);
if (v_replaceUDecInsts_581_ == 0)
{
lean_object* v_congrInfoFixedUDec_665_; 
v_congrInfoFixedUDec_665_ = lean_ctor_get(v___x_588_, 7);
lean_inc_ref(v_congrInfoFixedUDec_665_);
lean_dec(v___x_588_);
v___y_590_ = v_congrInfoFixedUDec_665_;
goto v___jp_589_;
}
else
{
lean_object* v_congrInfo_666_; 
v_congrInfo_666_ = lean_ctor_get(v___x_588_, 6);
lean_inc_ref(v_congrInfo_666_);
lean_dec(v___x_588_);
v___y_590_ = v_congrInfo_666_;
goto v___jp_589_;
}
v___jp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v___y_590_, v_f_580_);
lean_dec_ref(v___y_590_);
if (lean_obj_tag(v___x_591_) == 1)
{
lean_object* v_val_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v_f_580_);
v_val_592_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_591_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_val_592_);
lean_dec(v___x_591_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set_tag(v___x_594_, 0);
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_val_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
else
{
lean_object* v___x_600_; 
lean_dec(v___x_591_);
lean_inc_ref(v_f_580_);
v___x_600_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_580_, v_replaceUDecInsts_581_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
if (lean_obj_tag(v___x_600_) == 0)
{
if (v_replaceUDecInsts_581_ == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_632_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_632_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_632_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_632_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v_share_606_; lean_object* v_maxFVar_607_; lean_object* v_proofInstInfo_608_; lean_object* v_proofInstInfoFVar_609_; lean_object* v_inferType_610_; lean_object* v_getLevel_611_; lean_object* v_congrInfo_612_; lean_object* v_congrInfoFixedUDec_613_; lean_object* v_defEqI_614_; lean_object* v_extensions_615_; lean_object* v_issues_616_; lean_object* v_canon_617_; lean_object* v_instanceOverrides_618_; uint8_t v_debug_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_631_; 
v___x_605_ = lean_st_ref_take(v_a_582_);
v_share_606_ = lean_ctor_get(v___x_605_, 0);
v_maxFVar_607_ = lean_ctor_get(v___x_605_, 1);
v_proofInstInfo_608_ = lean_ctor_get(v___x_605_, 2);
v_proofInstInfoFVar_609_ = lean_ctor_get(v___x_605_, 3);
v_inferType_610_ = lean_ctor_get(v___x_605_, 4);
v_getLevel_611_ = lean_ctor_get(v___x_605_, 5);
v_congrInfo_612_ = lean_ctor_get(v___x_605_, 6);
v_congrInfoFixedUDec_613_ = lean_ctor_get(v___x_605_, 7);
v_defEqI_614_ = lean_ctor_get(v___x_605_, 8);
v_extensions_615_ = lean_ctor_get(v___x_605_, 9);
v_issues_616_ = lean_ctor_get(v___x_605_, 10);
v_canon_617_ = lean_ctor_get(v___x_605_, 11);
v_instanceOverrides_618_ = lean_ctor_get(v___x_605_, 12);
v_debug_619_ = lean_ctor_get_uint8(v___x_605_, sizeof(void*)*13);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_631_ == 0)
{
v___x_621_ = v___x_605_;
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_instanceOverrides_618_);
lean_inc(v_canon_617_);
lean_inc(v_issues_616_);
lean_inc(v_extensions_615_);
lean_inc(v_defEqI_614_);
lean_inc(v_congrInfoFixedUDec_613_);
lean_inc(v_congrInfo_612_);
lean_inc(v_getLevel_611_);
lean_inc(v_inferType_610_);
lean_inc(v_proofInstInfoFVar_609_);
lean_inc(v_proofInstInfo_608_);
lean_inc(v_maxFVar_607_);
lean_inc(v_share_606_);
lean_dec(v___x_605_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
lean_inc(v_a_601_);
v___x_623_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_congrInfoFixedUDec_613_, v_f_580_, v_a_601_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 7, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_share_606_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_maxFVar_607_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_proofInstInfo_608_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v_proofInstInfoFVar_609_);
lean_ctor_set(v_reuseFailAlloc_630_, 4, v_inferType_610_);
lean_ctor_set(v_reuseFailAlloc_630_, 5, v_getLevel_611_);
lean_ctor_set(v_reuseFailAlloc_630_, 6, v_congrInfo_612_);
lean_ctor_set(v_reuseFailAlloc_630_, 7, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_630_, 8, v_defEqI_614_);
lean_ctor_set(v_reuseFailAlloc_630_, 9, v_extensions_615_);
lean_ctor_set(v_reuseFailAlloc_630_, 10, v_issues_616_);
lean_ctor_set(v_reuseFailAlloc_630_, 11, v_canon_617_);
lean_ctor_set(v_reuseFailAlloc_630_, 12, v_instanceOverrides_618_);
lean_ctor_set_uint8(v_reuseFailAlloc_630_, sizeof(void*)*13, v_debug_619_);
v___x_625_ = v_reuseFailAlloc_630_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_st_ref_put(v_a_582_, v___x_625_);
if (v_isShared_604_ == 0)
{
v___x_628_ = v___x_603_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_601_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_664_; 
v_a_633_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_664_ == 0)
{
v___x_635_ = v___x_600_;
v_isShared_636_ = v_isSharedCheck_664_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_600_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_664_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v_share_638_; lean_object* v_maxFVar_639_; lean_object* v_proofInstInfo_640_; lean_object* v_proofInstInfoFVar_641_; lean_object* v_inferType_642_; lean_object* v_getLevel_643_; lean_object* v_congrInfo_644_; lean_object* v_congrInfoFixedUDec_645_; lean_object* v_defEqI_646_; lean_object* v_extensions_647_; lean_object* v_issues_648_; lean_object* v_canon_649_; lean_object* v_instanceOverrides_650_; uint8_t v_debug_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_663_; 
v___x_637_ = lean_st_ref_take(v_a_582_);
v_share_638_ = lean_ctor_get(v___x_637_, 0);
v_maxFVar_639_ = lean_ctor_get(v___x_637_, 1);
v_proofInstInfo_640_ = lean_ctor_get(v___x_637_, 2);
v_proofInstInfoFVar_641_ = lean_ctor_get(v___x_637_, 3);
v_inferType_642_ = lean_ctor_get(v___x_637_, 4);
v_getLevel_643_ = lean_ctor_get(v___x_637_, 5);
v_congrInfo_644_ = lean_ctor_get(v___x_637_, 6);
v_congrInfoFixedUDec_645_ = lean_ctor_get(v___x_637_, 7);
v_defEqI_646_ = lean_ctor_get(v___x_637_, 8);
v_extensions_647_ = lean_ctor_get(v___x_637_, 9);
v_issues_648_ = lean_ctor_get(v___x_637_, 10);
v_canon_649_ = lean_ctor_get(v___x_637_, 11);
v_instanceOverrides_650_ = lean_ctor_get(v___x_637_, 12);
v_debug_651_ = lean_ctor_get_uint8(v___x_637_, sizeof(void*)*13);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_663_ == 0)
{
v___x_653_ = v___x_637_;
v_isShared_654_ = v_isSharedCheck_663_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_instanceOverrides_650_);
lean_inc(v_canon_649_);
lean_inc(v_issues_648_);
lean_inc(v_extensions_647_);
lean_inc(v_defEqI_646_);
lean_inc(v_congrInfoFixedUDec_645_);
lean_inc(v_congrInfo_644_);
lean_inc(v_getLevel_643_);
lean_inc(v_inferType_642_);
lean_inc(v_proofInstInfoFVar_641_);
lean_inc(v_proofInstInfo_640_);
lean_inc(v_maxFVar_639_);
lean_inc(v_share_638_);
lean_dec(v___x_637_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_663_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
lean_inc(v_a_633_);
v___x_655_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_congrInfo_644_, v_f_580_, v_a_633_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 6, v___x_655_);
v___x_657_ = v___x_653_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_share_638_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_maxFVar_639_);
lean_ctor_set(v_reuseFailAlloc_662_, 2, v_proofInstInfo_640_);
lean_ctor_set(v_reuseFailAlloc_662_, 3, v_proofInstInfoFVar_641_);
lean_ctor_set(v_reuseFailAlloc_662_, 4, v_inferType_642_);
lean_ctor_set(v_reuseFailAlloc_662_, 5, v_getLevel_643_);
lean_ctor_set(v_reuseFailAlloc_662_, 6, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_662_, 7, v_congrInfoFixedUDec_645_);
lean_ctor_set(v_reuseFailAlloc_662_, 8, v_defEqI_646_);
lean_ctor_set(v_reuseFailAlloc_662_, 9, v_extensions_647_);
lean_ctor_set(v_reuseFailAlloc_662_, 10, v_issues_648_);
lean_ctor_set(v_reuseFailAlloc_662_, 11, v_canon_649_);
lean_ctor_set(v_reuseFailAlloc_662_, 12, v_instanceOverrides_650_);
lean_ctor_set_uint8(v_reuseFailAlloc_662_, sizeof(void*)*13, v_debug_651_);
v___x_657_ = v_reuseFailAlloc_662_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_658_ = lean_st_ref_put(v_a_582_, v___x_657_);
if (v_isShared_636_ == 0)
{
v___x_660_ = v___x_635_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_633_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_f_580_);
return v___x_600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object* v_f_667_, lean_object* v_replaceUDecInsts_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
uint8_t v_replaceUDecInsts_boxed_675_; lean_object* v_res_676_; 
v_replaceUDecInsts_boxed_675_ = lean_unbox(v_replaceUDecInsts_668_);
v_res_676_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_667_, v_replaceUDecInsts_boxed_675_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
lean_dec(v_a_669_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object* v_f_677_, uint8_t v_replaceUDecInsts_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_677_, v_replaceUDecInsts_678_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object* v_f_687_, lean_object* v_replaceUDecInsts_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
uint8_t v_replaceUDecInsts_boxed_696_; lean_object* v_res_697_; 
v_replaceUDecInsts_boxed_696_ = lean_unbox(v_replaceUDecInsts_688_);
v_res_697_ = l_Lean_Meta_Sym_getCongrInfo(v_f_687_, v_replaceUDecInsts_boxed_696_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object* v_00_u03b2_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object* v_00_u03b2_702_, lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(v_00_u03b2_702_, v_x_703_, v_x_704_);
lean_dec_ref(v_x_704_);
lean_dec_ref(v_x_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object* v_00_u03b2_706_, lean_object* v_x_707_, lean_object* v_x_708_, lean_object* v_x_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_x_707_, v_x_708_, v_x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object* v_00_u03b2_711_, lean_object* v_x_712_, size_t v_x_713_, lean_object* v_x_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_712_, v_x_713_, v_x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_716_, lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_){
_start:
{
size_t v_x_4093__boxed_720_; lean_object* v_res_721_; 
v_x_4093__boxed_720_ = lean_unbox_usize(v_x_718_);
lean_dec(v_x_718_);
v_res_721_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(v_00_u03b2_716_, v_x_717_, v_x_4093__boxed_720_, v_x_719_);
lean_dec_ref(v_x_719_);
lean_dec_ref(v_x_717_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object* v_00_u03b2_722_, lean_object* v_x_723_, size_t v_x_724_, size_t v_x_725_, lean_object* v_x_726_, lean_object* v_x_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_723_, v_x_724_, v_x_725_, v_x_726_, v_x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object* v_00_u03b2_729_, lean_object* v_x_730_, lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v_x_733_, lean_object* v_x_734_){
_start:
{
size_t v_x_4104__boxed_735_; size_t v_x_4105__boxed_736_; lean_object* v_res_737_; 
v_x_4104__boxed_735_ = lean_unbox_usize(v_x_731_);
lean_dec(v_x_731_);
v_x_4105__boxed_736_ = lean_unbox_usize(v_x_732_);
lean_dec(v_x_732_);
v_res_737_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(v_00_u03b2_729_, v_x_730_, v_x_4104__boxed_735_, v_x_4105__boxed_736_, v_x_733_, v_x_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_738_, lean_object* v_keys_739_, lean_object* v_vals_740_, lean_object* v_heq_741_, lean_object* v_i_742_, lean_object* v_k_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_739_, v_vals_740_, v_i_742_, v_k_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_745_, lean_object* v_keys_746_, lean_object* v_vals_747_, lean_object* v_heq_748_, lean_object* v_i_749_, lean_object* v_k_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(v_00_u03b2_745_, v_keys_746_, v_vals_747_, v_heq_748_, v_i_749_, v_k_750_);
lean_dec_ref(v_k_750_);
lean_dec_ref(v_vals_747_);
lean_dec_ref(v_keys_746_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_752_, lean_object* v_n_753_, lean_object* v_k_754_, lean_object* v_v_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v_n_753_, v_k_754_, v_v_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_757_, size_t v_depth_758_, lean_object* v_keys_759_, lean_object* v_vals_760_, lean_object* v_heq_761_, lean_object* v_i_762_, lean_object* v_entries_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_758_, v_keys_759_, v_vals_760_, v_i_762_, v_entries_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_765_, lean_object* v_depth_766_, lean_object* v_keys_767_, lean_object* v_vals_768_, lean_object* v_heq_769_, lean_object* v_i_770_, lean_object* v_entries_771_){
_start:
{
size_t v_depth_boxed_772_; lean_object* v_res_773_; 
v_depth_boxed_772_ = lean_unbox_usize(v_depth_766_);
lean_dec(v_depth_766_);
v_res_773_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(v_00_u03b2_765_, v_depth_boxed_772_, v_keys_767_, v_vals_768_, v_heq_769_, v_i_770_, v_entries_771_);
lean_dec_ref(v_vals_768_);
lean_dec_ref(v_keys_767_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_774_, lean_object* v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_x_775_, v_x_776_, v_x_777_, v_x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
if (lean_obj_tag(v_a_782_) == 0)
{
lean_object* v___x_784_; 
v___x_784_ = l_List_reverse___redArg(v_a_783_);
return v___x_784_;
}
else
{
lean_object* v_head_785_; lean_object* v_tail_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_801_; 
v_head_785_ = lean_ctor_get(v_a_782_, 0);
v_tail_786_ = lean_ctor_get(v_a_782_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_a_782_);
if (v_isSharedCheck_801_ == 0)
{
v___x_788_ = v_a_782_;
v_isShared_789_ = v_isSharedCheck_801_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_tail_786_);
lean_inc(v_head_785_);
lean_dec(v_a_782_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_801_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___y_791_; uint8_t v___x_798_; 
v___x_798_ = lean_unbox(v_head_785_);
lean_dec(v_head_785_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0));
v___y_791_ = v___x_799_;
goto v___jp_790_;
}
else
{
lean_object* v___x_800_; 
v___x_800_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1));
v___y_791_ = v___x_800_;
goto v___jp_790_;
}
v___jp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_795_; 
lean_inc_ref(v___y_791_);
v___x_792_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_792_, 0, v___y_791_);
v___x_793_ = l_Lean_MessageData_ofFormat(v___x_792_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 1, v_a_783_);
lean_ctor_set(v___x_788_, 0, v___x_793_);
v___x_795_ = v___x_788_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_a_783_);
v___x_795_ = v_reuseFailAlloc_797_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v_a_782_ = v_tail_786_;
v_a_783_ = v___x_795_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1));
v___x_806_ = l_Lean_MessageData_ofFormat(v___x_805_);
return v___x_806_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3));
v___x_809_ = l_Lean_stringToMessageData(v___x_808_);
return v___x_809_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5));
v___x_812_ = l_Lean_stringToMessageData(v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7));
v___x_815_ = l_Lean_stringToMessageData(v___x_814_);
return v___x_815_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9));
v___x_818_ = l_Lean_stringToMessageData(v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object* v_x_819_){
_start:
{
switch(lean_obj_tag(v_x_819_))
{
case 0:
{
lean_object* v___x_820_; 
v___x_820_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2);
return v___x_820_;
}
case 1:
{
lean_object* v_prefixSize_821_; lean_object* v_suffixSize_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_839_; 
v_prefixSize_821_ = lean_ctor_get(v_x_819_, 0);
v_suffixSize_822_ = lean_ctor_get(v_x_819_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_x_819_);
if (v_isSharedCheck_839_ == 0)
{
v___x_824_ = v_x_819_;
v_isShared_825_ = v_isSharedCheck_839_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_suffixSize_822_);
lean_inc(v_prefixSize_821_);
lean_dec(v_x_819_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_839_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_826_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4);
v___x_827_ = l_Nat_reprFast(v_prefixSize_821_);
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = l_Lean_MessageData_ofFormat(v___x_828_);
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 7);
lean_ctor_set(v___x_824_, 1, v___x_829_);
lean_ctor_set(v___x_824_, 0, v___x_826_);
v___x_831_ = v___x_824_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v___x_829_);
v___x_831_ = v_reuseFailAlloc_838_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_832_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6);
v___x_833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = l_Nat_reprFast(v_suffixSize_822_);
v___x_835_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
v___x_836_ = l_Lean_MessageData_ofFormat(v___x_835_);
v___x_837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_833_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
}
}
case 2:
{
lean_object* v_rewritable_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_rewritable_840_ = lean_ctor_get(v_x_819_, 0);
lean_inc_ref(v_rewritable_840_);
lean_dec_ref_known(v_x_819_, 1);
v___x_841_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8);
v___x_842_ = lean_array_to_list(v_rewritable_840_);
v___x_843_ = lean_box(0);
v___x_844_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(v___x_842_, v___x_843_);
v___x_845_ = l_Lean_MessageData_ofList(v___x_844_);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_841_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
return v___x_846_;
}
default: 
{
lean_object* v_thm_847_; lean_object* v_proof_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_thm_847_ = lean_ctor_get(v_x_819_, 0);
lean_inc_ref(v_thm_847_);
lean_dec_ref_known(v_x_819_, 1);
v_proof_848_ = lean_ctor_get(v_thm_847_, 1);
lean_inc_ref(v_proof_848_);
lean_dec_ref(v_thm_847_);
v___x_849_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10);
v___x_850_ = l_Lean_MessageData_ofExpr(v_proof_848_);
v___x_851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_849_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
return v___x_851_;
}
}
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
}
#ifdef __cplusplus
}
#endif
