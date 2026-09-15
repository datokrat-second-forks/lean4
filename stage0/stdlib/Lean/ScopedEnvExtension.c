// Lean compiler output
// Module: Lean.ScopedEnvExtension
// Imports: public import Lean.Attributes
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
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_EST_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4_value;
static const lean_array_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16_value;
static const lean_string_object l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17 = (const lean_object*)&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27;
static lean_once_cell_t l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Descr_name___autoParam;
static const lean_string_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0();
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EST_mk___boxed, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__0_value)} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_mk___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__4_value)} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5_value;
static const lean_closure_object l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__6 = (const lean_object*)&l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value;
static const lean_ctor_object l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__1_value)}};
static const lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value),((lean_object*)&l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4;
static lean_once_cell_t l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_scopedEnvExtensionsRef;
static const lean_string_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1 = (const lean_object*)&l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ScopedEnvExtension_popScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ScopedEnvExtension_popScope___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_popScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_stateStackModify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_stateStackModify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ScopedEnvExtension"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__0 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__0_value;
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.ScopedEnvExtension.getState"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__1 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__1_value;
static const lean_string_object l_Lean_ScopedEnvExtension_getState___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__2 = (const lean_object*)&l_Lean_ScopedEnvExtension_getState___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ScopedEnvExtension_getState___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_getState___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_pushScope___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_pushScope___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_pushScope(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_popScope(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_activateScoped(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam;
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0 = (const lean_object*)&l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1 = (const lean_object*)&l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx(lean_object* v_00_u03b1_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorIdx___boxed(lean_object* v_00_u03b1_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_ScopedEnvExtension_Entry_ctorIdx(v_00_u03b1_9_, v_x_10_);
lean_dec_ref(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
if (lean_obj_tag(v_t_12_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v_t_12_, 1);
v___x_15_ = lean_apply_1(v_k_13_, v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_12_, 1);
lean_inc(v_a_17_);
lean_dec_ref_known(v_t_12_, 2);
v___x_18_ = lean_apply_2(v_k_13_, v_a_16_, v_a_17_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim(lean_object* v_00_u03b1_19_, lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_ctorElim___boxed(lean_object* v_00_u03b1_26_, lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_ScopedEnvExtension_Entry_ctorElim(v_00_u03b1_26_, v_motive_27_, v_ctorIdx_28_, v_t_29_, v_h_30_, v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim___redArg(lean_object* v_t_33_, lean_object* v_global_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_33_, v_global_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_global_elim(lean_object* v_00_u03b1_36_, lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_global_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_38_, v_global_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim___redArg(lean_object* v_t_42_, lean_object* v_scoped_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_42_, v_scoped_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_Entry_scoped_elim(lean_object* v_00_u03b1_45_, lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_scoped_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_ScopedEnvExtension_Entry_ctorElim___redArg(v_t_47_, v_scoped_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_unsigned_to_nat(16u);
v___x_53_ = lean_mk_array(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__0);
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_57_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__2);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__3);
v___x_61_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__1);
v___x_62_ = 1;
v___x_63_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_60_);
lean_ctor_set_uint8(v___x_63_, sizeof(void*)*2, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg(){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___boxed(lean_object* v___dummy_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
return v_res_67_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg();
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default(lean_object* v_00_u03b2_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg(){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg___boxed(lean_object* v___dummy_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_ScopedEnvExtension_instInhabitedScopedEntries___redArg();
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedScopedEntries(lean_object* v_a_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___closed__0);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_78_ = lean_box(0);
v___x_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg(){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___closed__0);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg___boxed(lean_object* v___dummy_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v_res_83_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_object* v_00_u03b1_85_, lean_object* v_00_u03b2_86_, lean_object* v_00_u03c3_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg(){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg___boxed(lean_object* v___dummy_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack___redArg();
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack(lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__10));
v___x_124_ = l_Lean_mkAtom(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__12);
v___x_126_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_127_ = lean_array_push(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__17));
v___x_137_ = l_Lean_mkAtom(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_138_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__18);
v___x_139_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_140_ = lean_array_push(v___x_139_, v___x_138_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__19);
v___x_142_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__16));
v___x_143_ = lean_box(2);
v___x_144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
lean_ctor_set(v___x_144_, 2, v___x_141_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__20);
v___x_146_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__13);
v___x_147_ = lean_array_push(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_148_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__21);
v___x_149_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__11));
v___x_150_ = lean_box(2);
v___x_151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_149_);
lean_ctor_set(v___x_151_, 2, v___x_148_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__22);
v___x_153_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_154_ = lean_array_push(v___x_153_, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__23);
v___x_156_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__9));
v___x_157_ = lean_box(2);
v___x_158_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
lean_ctor_set(v___x_158_, 2, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__24);
v___x_160_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_161_ = lean_array_push(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__25);
v___x_163_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__7));
v___x_164_ = lean_box(2);
v___x_165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__26);
v___x_167_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__5));
v___x_168_ = lean_array_push(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_169_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__27);
v___x_170_ = ((lean_object*)(l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__4));
v___x_171_ = lean_box(2);
v___x_172_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
lean_ctor_set(v___x_172_, 2, v___x_169_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0(){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1));
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___boxed(lean_object* v_s_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0();
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(lean_object* v_x_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1));
v___x_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1___boxed(lean_object* v_x_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__1(v_x_188_, v___y_189_, v___y_190_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec(v_x_188_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(lean_object* v_inst_193_, lean_object* v_x_194_){
_start:
{
lean_inc(v_inst_193_);
return v_inst_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed(lean_object* v_inst_195_, lean_object* v_x_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2(v_inst_195_, v_x_196_);
lean_dec(v_x_196_);
lean_dec(v_inst_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(lean_object* v_s_198_, lean_object* v_x_199_){
_start:
{
lean_inc(v_s_198_);
return v_s_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3___boxed(lean_object* v_s_200_, lean_object* v_x_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__3(v_s_200_, v_x_201_);
lean_dec(v_x_201_);
lean_dec(v_s_200_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4(lean_object* v_x_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v_a_204_);
lean_inc_ref_n(v___x_205_, 2);
v___x_206_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
lean_ctor_set(v___x_206_, 2, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4___boxed(lean_object* v_x_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__4(v_x_207_, v_a_208_);
lean_dec_ref(v_x_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(lean_object* v_inst_219_){
_start:
{
lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___f_220_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1));
v___f_221_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_221_, 0, v_inst_219_);
v___f_222_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2));
v___f_223_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3));
v___x_224_ = lean_box(0);
v___x_225_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5));
v___x_226_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__6));
v___x_227_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_227_, 0, v___x_224_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
lean_ctor_set(v___x_227_, 2, v___f_220_);
lean_ctor_set(v___x_227_, 3, v___f_221_);
lean_ctor_set(v___x_227_, 4, v___f_222_);
lean_ctor_set(v___x_227_, 5, v___x_226_);
lean_ctor_set(v___x_227_, 6, v___f_223_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr(lean_object* v_00_u03b1_228_, lean_object* v_00_u03b2_229_, lean_object* v_00_u03c3_230_, lean_object* v_inst_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg(v_inst_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg(lean_object* v_descr_233_){
_start:
{
lean_object* v_mkInitial_235_; lean_object* v___x_236_; 
v_mkInitial_235_ = lean_ctor_get(v_descr_233_, 1);
lean_inc_ref(v_mkInitial_235_);
lean_dec_ref(v_descr_233_);
v___x_236_ = lean_apply_1(v_mkInitial_235_, lean_box(0));
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_251_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_251_ == 0)
{
v___x_239_ = v___x_236_;
v_isShared_240_ = v_isSharedCheck_251_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_236_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_251_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_241_ = l_Lean_NameSet_empty;
v___x_242_ = 1;
v___x_243_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_243_, 0, v_a_237_);
lean_ctor_set(v___x_243_, 1, v___x_241_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*2, v___x_242_);
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
lean_ctor_set(v___x_247_, 2, v___x_244_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_247_);
v___x_249_ = v___x_239_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_a_252_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_236_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_236_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___redArg___boxed(lean_object* v_descr_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_ScopedEnvExtension_mkInitial___redArg(v_descr_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial(lean_object* v_00_u03b1_263_, lean_object* v_00_u03b2_264_, lean_object* v_00_u03c3_265_, lean_object* v_descr_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_ScopedEnvExtension_mkInitial___redArg(v_descr_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_mkInitial___boxed(lean_object* v_00_u03b1_269_, lean_object* v_00_u03b2_270_, lean_object* v_00_u03c3_271_, lean_object* v_descr_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_ScopedEnvExtension_mkInitial(v_00_u03b1_269_, v_00_u03b2_270_, v_00_u03c3_271_, v_descr_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(lean_object* v_a_275_, lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
else
{
lean_object* v_key_278_; lean_object* v_value_279_; lean_object* v_tail_280_; uint8_t v___x_281_; 
v_key_278_ = lean_ctor_get(v_x_276_, 0);
v_value_279_ = lean_ctor_get(v_x_276_, 1);
v_tail_280_ = lean_ctor_get(v_x_276_, 2);
v___x_281_ = lean_name_eq(v_key_278_, v_a_275_);
if (v___x_281_ == 0)
{
v_x_276_ = v_tail_280_;
goto _start;
}
else
{
lean_object* v___x_283_; 
lean_inc(v_value_279_);
v___x_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_283_, 0, v_value_279_);
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_284_, lean_object* v_x_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_284_, v_x_285_);
lean_dec(v_x_285_);
lean_dec(v_a_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(lean_object* v_m_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_buckets_289_; lean_object* v___x_290_; uint64_t v___y_292_; 
v_buckets_289_ = lean_ctor_get(v_m_287_, 1);
v___x_290_ = lean_array_get_size(v_buckets_289_);
if (lean_obj_tag(v_a_288_) == 0)
{
uint64_t v___x_306_; 
v___x_306_ = 1723ULL;
v___y_292_ = v___x_306_;
goto v___jp_291_;
}
else
{
uint64_t v_hash_307_; 
v_hash_307_ = lean_ctor_get_uint64(v_a_288_, sizeof(void*)*2);
v___y_292_ = v_hash_307_;
goto v___jp_291_;
}
v___jp_291_:
{
uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v_fold_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_293_ = 32ULL;
v___x_294_ = lean_uint64_shift_right(v___y_292_, v___x_293_);
v_fold_295_ = lean_uint64_xor(v___y_292_, v___x_294_);
v___x_296_ = 16ULL;
v___x_297_ = lean_uint64_shift_right(v_fold_295_, v___x_296_);
v___x_298_ = lean_uint64_xor(v_fold_295_, v___x_297_);
v___x_299_ = lean_uint64_to_usize(v___x_298_);
v___x_300_ = lean_usize_of_nat(v___x_290_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_sub(v___x_300_, v___x_301_);
v___x_303_ = lean_usize_land(v___x_299_, v___x_302_);
v___x_304_ = lean_array_uget_borrowed(v_buckets_289_, v___x_303_);
v___x_305_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_288_, v___x_304_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg___boxed(lean_object* v_m_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_m_308_, v_a_309_);
lean_dec(v_a_309_);
lean_dec_ref(v_m_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_keys_311_, lean_object* v_vals_312_, lean_object* v_i_313_, lean_object* v_k_314_){
_start:
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_array_get_size(v_keys_311_);
v___x_316_ = lean_nat_dec_lt(v_i_313_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
lean_dec(v_i_313_);
v___x_317_ = lean_box(0);
return v___x_317_;
}
else
{
lean_object* v_k_x27_318_; uint8_t v___x_319_; 
v_k_x27_318_ = lean_array_fget_borrowed(v_keys_311_, v_i_313_);
v___x_319_ = lean_name_eq(v_k_314_, v_k_x27_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_add(v_i_313_, v___x_320_);
lean_dec(v_i_313_);
v_i_313_ = v___x_321_;
goto _start;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_array_fget_borrowed(v_vals_312_, v_i_313_);
lean_dec(v_i_313_);
lean_inc(v___x_323_);
v___x_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_keys_325_, lean_object* v_vals_326_, lean_object* v_i_327_, lean_object* v_k_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_325_, v_vals_326_, v_i_327_, v_k_328_);
lean_dec(v_k_328_);
lean_dec_ref(v_vals_326_);
lean_dec_ref(v_keys_325_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_x_330_, size_t v_x_331_, lean_object* v_x_332_){
_start:
{
if (lean_obj_tag(v_x_330_) == 0)
{
lean_object* v_es_333_; lean_object* v___x_334_; size_t v___x_335_; size_t v___x_336_; lean_object* v_j_337_; lean_object* v___x_338_; 
v_es_333_ = lean_ctor_get(v_x_330_, 0);
v___x_334_ = lean_box(2);
v___x_335_ = ((size_t)31ULL);
v___x_336_ = lean_usize_land(v_x_331_, v___x_335_);
v_j_337_ = lean_usize_to_nat(v___x_336_);
v___x_338_ = lean_array_get_borrowed(v___x_334_, v_es_333_, v_j_337_);
lean_dec(v_j_337_);
switch(lean_obj_tag(v___x_338_))
{
case 0:
{
lean_object* v_key_339_; lean_object* v_val_340_; uint8_t v___x_341_; 
v_key_339_ = lean_ctor_get(v___x_338_, 0);
v_val_340_ = lean_ctor_get(v___x_338_, 1);
v___x_341_ = lean_name_eq(v_x_332_, v_key_339_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
v___x_342_ = lean_box(0);
return v___x_342_;
}
else
{
lean_object* v___x_343_; 
lean_inc(v_val_340_);
v___x_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_343_, 0, v_val_340_);
return v___x_343_;
}
}
case 1:
{
lean_object* v_node_344_; size_t v___x_345_; size_t v___x_346_; 
v_node_344_ = lean_ctor_get(v___x_338_, 0);
v___x_345_ = ((size_t)5ULL);
v___x_346_ = lean_usize_shift_right(v_x_331_, v___x_345_);
v_x_330_ = v_node_344_;
v_x_331_ = v___x_346_;
goto _start;
}
default: 
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(0);
return v___x_348_;
}
}
}
else
{
lean_object* v_ks_349_; lean_object* v_vs_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_ks_349_ = lean_ctor_get(v_x_330_, 0);
v_vs_350_ = lean_ctor_get(v_x_330_, 1);
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_ks_349_, v_vs_350_, v___x_351_, v_x_332_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_353_, lean_object* v_x_354_, lean_object* v_x_355_){
_start:
{
size_t v_x_1059__boxed_356_; lean_object* v_res_357_; 
v_x_1059__boxed_356_ = lean_unbox_usize(v_x_354_);
lean_dec(v_x_354_);
v_res_357_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_353_, v_x_1059__boxed_356_, v_x_355_);
lean_dec(v_x_355_);
lean_dec_ref(v_x_353_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(lean_object* v_x_358_, lean_object* v_x_359_){
_start:
{
uint64_t v___y_361_; 
if (lean_obj_tag(v_x_359_) == 0)
{
uint64_t v___x_364_; 
v___x_364_ = 1723ULL;
v___y_361_ = v___x_364_;
goto v___jp_360_;
}
else
{
uint64_t v_hash_365_; 
v_hash_365_ = lean_ctor_get_uint64(v_x_359_, sizeof(void*)*2);
v___y_361_ = v_hash_365_;
goto v___jp_360_;
}
v___jp_360_:
{
size_t v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_uint64_to_usize(v___y_361_);
v___x_363_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_358_, v___x_362_, v_x_359_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_x_366_, v_x_367_);
lean_dec(v_x_367_);
lean_dec_ref(v_x_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
uint8_t v_stage_u2081_371_; 
v_stage_u2081_371_ = lean_ctor_get_uint8(v_x_369_, sizeof(void*)*2);
if (v_stage_u2081_371_ == 0)
{
lean_object* v_map_u2081_372_; lean_object* v_map_u2082_373_; lean_object* v___x_374_; 
v_map_u2081_372_ = lean_ctor_get(v_x_369_, 0);
v_map_u2082_373_ = lean_ctor_get(v_x_369_, 1);
v___x_374_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_map_u2082_373_, v_x_370_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v___x_375_; 
v___x_375_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_map_u2081_372_, v_x_370_);
return v___x_375_;
}
else
{
return v___x_374_;
}
}
else
{
lean_object* v_map_u2081_376_; lean_object* v___x_377_; 
v_map_u2081_376_ = lean_ctor_get(v_x_369_, 0);
v___x_377_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_map_u2081_376_, v_x_370_);
return v___x_377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg___boxed(lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_x_378_, v_x_379_);
lean_dec(v_x_379_);
lean_dec_ref(v_x_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(lean_object* v_a_381_, lean_object* v_b_382_, lean_object* v_x_383_){
_start:
{
if (lean_obj_tag(v_x_383_) == 0)
{
lean_dec(v_b_382_);
lean_dec(v_a_381_);
return v_x_383_;
}
else
{
lean_object* v_key_384_; lean_object* v_value_385_; lean_object* v_tail_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_398_; 
v_key_384_ = lean_ctor_get(v_x_383_, 0);
v_value_385_ = lean_ctor_get(v_x_383_, 1);
v_tail_386_ = lean_ctor_get(v_x_383_, 2);
v_isSharedCheck_398_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_398_ == 0)
{
v___x_388_ = v_x_383_;
v_isShared_389_ = v_isSharedCheck_398_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_tail_386_);
lean_inc(v_value_385_);
lean_inc(v_key_384_);
lean_dec(v_x_383_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_398_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
uint8_t v___x_390_; 
v___x_390_ = lean_name_eq(v_key_384_, v_a_381_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_391_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_381_, v_b_382_, v_tail_386_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 2, v___x_391_);
v___x_393_ = v___x_388_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_key_384_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_value_385_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
else
{
lean_object* v___x_396_; 
lean_dec(v_value_385_);
lean_dec(v_key_384_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v_b_382_);
lean_ctor_set(v___x_388_, 0, v_a_381_);
v___x_396_ = v___x_388_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_381_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_b_382_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v_tail_386_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(lean_object* v_x_399_, lean_object* v_x_400_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
return v_x_399_;
}
else
{
lean_object* v_key_401_; lean_object* v_value_402_; lean_object* v_tail_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_429_; 
v_key_401_ = lean_ctor_get(v_x_400_, 0);
v_value_402_ = lean_ctor_get(v_x_400_, 1);
v_tail_403_ = lean_ctor_get(v_x_400_, 2);
v_isSharedCheck_429_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_429_ == 0)
{
v___x_405_ = v_x_400_;
v_isShared_406_ = v_isSharedCheck_429_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_tail_403_);
lean_inc(v_value_402_);
lean_inc(v_key_401_);
lean_dec(v_x_400_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_429_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; uint64_t v___y_409_; 
v___x_407_ = lean_array_get_size(v_x_399_);
if (lean_obj_tag(v_key_401_) == 0)
{
uint64_t v___x_427_; 
v___x_427_ = 1723ULL;
v___y_409_ = v___x_427_;
goto v___jp_408_;
}
else
{
uint64_t v_hash_428_; 
v_hash_428_ = lean_ctor_get_uint64(v_key_401_, sizeof(void*)*2);
v___y_409_ = v_hash_428_;
goto v___jp_408_;
}
v___jp_408_:
{
uint64_t v___x_410_; uint64_t v___x_411_; uint64_t v_fold_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; size_t v___x_416_; size_t v___x_417_; size_t v___x_418_; size_t v___x_419_; size_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_410_ = 32ULL;
v___x_411_ = lean_uint64_shift_right(v___y_409_, v___x_410_);
v_fold_412_ = lean_uint64_xor(v___y_409_, v___x_411_);
v___x_413_ = 16ULL;
v___x_414_ = lean_uint64_shift_right(v_fold_412_, v___x_413_);
v___x_415_ = lean_uint64_xor(v_fold_412_, v___x_414_);
v___x_416_ = lean_uint64_to_usize(v___x_415_);
v___x_417_ = lean_usize_of_nat(v___x_407_);
v___x_418_ = ((size_t)1ULL);
v___x_419_ = lean_usize_sub(v___x_417_, v___x_418_);
v___x_420_ = lean_usize_land(v___x_416_, v___x_419_);
v___x_421_ = lean_array_uget_borrowed(v_x_399_, v___x_420_);
lean_inc(v___x_421_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 2, v___x_421_);
v___x_423_ = v___x_405_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_key_401_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_value_402_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v___x_421_);
v___x_423_ = v_reuseFailAlloc_426_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; 
v___x_424_ = lean_array_uset(v_x_399_, v___x_420_, v___x_423_);
v_x_399_ = v___x_424_;
v_x_400_ = v_tail_403_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(lean_object* v_i_430_, lean_object* v_source_431_, lean_object* v_target_432_){
_start:
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = lean_array_get_size(v_source_431_);
v___x_434_ = lean_nat_dec_lt(v_i_430_, v___x_433_);
if (v___x_434_ == 0)
{
lean_dec_ref(v_source_431_);
lean_dec(v_i_430_);
return v_target_432_;
}
else
{
lean_object* v_es_435_; lean_object* v___x_436_; lean_object* v_source_437_; lean_object* v_target_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_es_435_ = lean_array_fget(v_source_431_, v_i_430_);
v___x_436_ = lean_box(0);
v_source_437_ = lean_array_fset(v_source_431_, v_i_430_, v___x_436_);
v_target_438_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(v_target_432_, v_es_435_);
v___x_439_ = lean_unsigned_to_nat(1u);
v___x_440_ = lean_nat_add(v_i_430_, v___x_439_);
lean_dec(v_i_430_);
v_i_430_ = v___x_440_;
v_source_431_ = v_source_437_;
v_target_432_ = v_target_438_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(lean_object* v_data_442_){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_nbuckets_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_443_ = lean_array_get_size(v_data_442_);
v___x_444_ = lean_unsigned_to_nat(2u);
v_nbuckets_445_ = lean_nat_mul(v___x_443_, v___x_444_);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_box(0);
v___x_448_ = lean_mk_array(v_nbuckets_445_, v___x_447_);
v___x_449_ = lean_array_propagate_mark(v_data_442_, v___x_448_);
v___x_450_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(v___x_446_, v_data_442_, v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(lean_object* v_a_451_, lean_object* v_x_452_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
uint8_t v___x_453_; 
v___x_453_ = 0;
return v___x_453_;
}
else
{
lean_object* v_key_454_; lean_object* v_tail_455_; uint8_t v___x_456_; 
v_key_454_ = lean_ctor_get(v_x_452_, 0);
v_tail_455_ = lean_ctor_get(v_x_452_, 2);
v___x_456_ = lean_name_eq(v_key_454_, v_a_451_);
if (v___x_456_ == 0)
{
v_x_452_ = v_tail_455_;
goto _start;
}
else
{
return v___x_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_458_, lean_object* v_x_459_){
_start:
{
uint8_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_458_, v_x_459_);
lean_dec(v_x_459_);
lean_dec(v_a_458_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(lean_object* v_m_462_, lean_object* v_a_463_, lean_object* v_b_464_){
_start:
{
lean_object* v_size_465_; lean_object* v_buckets_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_512_; 
v_size_465_ = lean_ctor_get(v_m_462_, 0);
v_buckets_466_ = lean_ctor_get(v_m_462_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_m_462_);
if (v_isSharedCheck_512_ == 0)
{
v___x_468_ = v_m_462_;
v_isShared_469_ = v_isSharedCheck_512_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_buckets_466_);
lean_inc(v_size_465_);
lean_dec(v_m_462_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_512_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; uint64_t v___y_472_; 
v___x_470_ = lean_array_get_size(v_buckets_466_);
if (lean_obj_tag(v_a_463_) == 0)
{
uint64_t v___x_510_; 
v___x_510_ = 1723ULL;
v___y_472_ = v___x_510_;
goto v___jp_471_;
}
else
{
uint64_t v_hash_511_; 
v_hash_511_ = lean_ctor_get_uint64(v_a_463_, sizeof(void*)*2);
v___y_472_ = v_hash_511_;
goto v___jp_471_;
}
v___jp_471_:
{
uint64_t v___x_473_; uint64_t v___x_474_; uint64_t v_fold_475_; uint64_t v___x_476_; uint64_t v___x_477_; uint64_t v___x_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; size_t v___x_482_; size_t v___x_483_; lean_object* v_bkt_484_; uint8_t v___x_485_; 
v___x_473_ = 32ULL;
v___x_474_ = lean_uint64_shift_right(v___y_472_, v___x_473_);
v_fold_475_ = lean_uint64_xor(v___y_472_, v___x_474_);
v___x_476_ = 16ULL;
v___x_477_ = lean_uint64_shift_right(v_fold_475_, v___x_476_);
v___x_478_ = lean_uint64_xor(v_fold_475_, v___x_477_);
v___x_479_ = lean_uint64_to_usize(v___x_478_);
v___x_480_ = lean_usize_of_nat(v___x_470_);
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_sub(v___x_480_, v___x_481_);
v___x_483_ = lean_usize_land(v___x_479_, v___x_482_);
v_bkt_484_ = lean_array_uget_borrowed(v_buckets_466_, v___x_483_);
v___x_485_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_463_, v_bkt_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v_size_x27_487_; lean_object* v___x_488_; lean_object* v_buckets_x27_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_486_ = lean_unsigned_to_nat(1u);
v_size_x27_487_ = lean_nat_add(v_size_465_, v___x_486_);
lean_dec(v_size_465_);
lean_inc(v_bkt_484_);
v___x_488_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_488_, 0, v_a_463_);
lean_ctor_set(v___x_488_, 1, v_b_464_);
lean_ctor_set(v___x_488_, 2, v_bkt_484_);
v_buckets_x27_489_ = lean_array_uset(v_buckets_466_, v___x_483_, v___x_488_);
v___x_490_ = lean_unsigned_to_nat(4u);
v___x_491_ = lean_nat_mul(v_size_x27_487_, v___x_490_);
v___x_492_ = lean_unsigned_to_nat(3u);
v___x_493_ = lean_nat_div(v___x_491_, v___x_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_array_get_size(v_buckets_x27_489_);
v___x_495_ = lean_nat_dec_le(v___x_493_, v___x_494_);
lean_dec(v___x_493_);
if (v___x_495_ == 0)
{
lean_object* v_val_496_; lean_object* v___x_498_; 
v_val_496_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(v_buckets_x27_489_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v_val_496_);
lean_ctor_set(v___x_468_, 0, v_size_x27_487_);
v___x_498_ = v___x_468_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_size_x27_487_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_val_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
else
{
lean_object* v___x_501_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v_buckets_x27_489_);
lean_ctor_set(v___x_468_, 0, v_size_x27_487_);
v___x_501_ = v___x_468_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_size_x27_487_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_buckets_x27_489_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
else
{
lean_object* v___x_503_; lean_object* v_buckets_x27_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
lean_inc(v_bkt_484_);
v___x_503_ = lean_box(0);
v_buckets_x27_504_ = lean_array_uset(v_buckets_466_, v___x_483_, v___x_503_);
v___x_505_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_463_, v_b_464_, v_bkt_484_);
v___x_506_ = lean_array_uset(v_buckets_x27_504_, v___x_483_, v___x_505_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v___x_506_);
v___x_508_ = v___x_468_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_size_465_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
lean_object* v_ks_517_; lean_object* v_vs_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_542_; 
v_ks_517_ = lean_ctor_get(v_x_513_, 0);
v_vs_518_ = lean_ctor_get(v_x_513_, 1);
v_isSharedCheck_542_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_542_ == 0)
{
v___x_520_ = v_x_513_;
v_isShared_521_ = v_isSharedCheck_542_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_vs_518_);
lean_inc(v_ks_517_);
lean_dec(v_x_513_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_542_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = lean_array_get_size(v_ks_517_);
v___x_523_ = lean_nat_dec_lt(v_x_514_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
lean_dec(v_x_514_);
v___x_524_ = lean_array_push(v_ks_517_, v_x_515_);
v___x_525_ = lean_array_push(v_vs_518_, v_x_516_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_525_);
lean_ctor_set(v___x_520_, 0, v___x_524_);
v___x_527_ = v___x_520_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
else
{
lean_object* v_k_x27_529_; uint8_t v___x_530_; 
v_k_x27_529_ = lean_array_fget_borrowed(v_ks_517_, v_x_514_);
v___x_530_ = lean_name_eq(v_x_515_, v_k_x27_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_532_; 
if (v_isShared_521_ == 0)
{
v___x_532_ = v___x_520_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_ks_517_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_vs_518_);
v___x_532_ = v_reuseFailAlloc_536_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(1u);
v___x_534_ = lean_nat_add(v_x_514_, v___x_533_);
lean_dec(v_x_514_);
v_x_513_ = v___x_532_;
v_x_514_ = v___x_534_;
goto _start;
}
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_537_ = lean_array_fset(v_ks_517_, v_x_514_, v_x_515_);
v___x_538_ = lean_array_fset(v_vs_518_, v_x_514_, v_x_516_);
lean_dec(v_x_514_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_538_);
lean_ctor_set(v___x_520_, 0, v___x_537_);
v___x_540_ = v___x_520_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v___x_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_n_543_, lean_object* v_k_544_, lean_object* v_v_545_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(v_n_543_, v___x_546_, v_k_544_, v_v_545_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(lean_object* v_x_549_, size_t v_x_550_, size_t v_x_551_, lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_549_) == 0)
{
lean_object* v_es_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v_j_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_es_554_ = lean_ctor_get(v_x_549_, 0);
v___x_555_ = ((size_t)31ULL);
v___x_556_ = lean_usize_land(v_x_550_, v___x_555_);
v_j_557_ = lean_usize_to_nat(v___x_556_);
v___x_558_ = lean_array_get_size(v_es_554_);
v___x_559_ = lean_nat_dec_lt(v_j_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_dec(v_j_557_);
lean_dec(v_x_553_);
lean_dec(v_x_552_);
return v_x_549_;
}
else
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_598_; 
lean_inc_ref(v_es_554_);
v_isSharedCheck_598_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_x_549_, 0);
lean_dec(v_unused_599_);
v___x_561_ = v_x_549_;
v_isShared_562_ = v_isSharedCheck_598_;
goto v_resetjp_560_;
}
else
{
lean_dec(v_x_549_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_598_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v_v_563_; lean_object* v___x_564_; lean_object* v_xs_x27_565_; lean_object* v___y_567_; 
v_v_563_ = lean_array_fget(v_es_554_, v_j_557_);
v___x_564_ = lean_box(0);
v_xs_x27_565_ = lean_array_fset(v_es_554_, v_j_557_, v___x_564_);
switch(lean_obj_tag(v_v_563_))
{
case 0:
{
lean_object* v_key_572_; lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_583_; 
v_key_572_ = lean_ctor_get(v_v_563_, 0);
v_val_573_ = lean_ctor_get(v_v_563_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_583_ == 0)
{
v___x_575_ = v_v_563_;
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_inc(v_key_572_);
lean_dec(v_v_563_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_name_eq(v_x_552_, v_key_572_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_del_object(v___x_575_);
v___x_578_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_572_, v_val_573_, v_x_552_, v_x_553_);
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
v___y_567_ = v___x_579_;
goto v___jp_566_;
}
else
{
lean_object* v___x_581_; 
lean_dec(v_val_573_);
lean_dec(v_key_572_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v_x_553_);
lean_ctor_set(v___x_575_, 0, v_x_552_);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_x_552_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_x_553_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
v___y_567_ = v___x_581_;
goto v___jp_566_;
}
}
}
}
case 1:
{
lean_object* v_node_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_596_; 
v_node_584_ = lean_ctor_get(v_v_563_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_596_ == 0)
{
v___x_586_ = v_v_563_;
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_node_584_);
lean_dec(v_v_563_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
size_t v___x_588_; size_t v___x_589_; size_t v___x_590_; size_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_588_ = ((size_t)5ULL);
v___x_589_ = lean_usize_shift_right(v_x_550_, v___x_588_);
v___x_590_ = ((size_t)1ULL);
v___x_591_ = lean_usize_add(v_x_551_, v___x_590_);
v___x_592_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_node_584_, v___x_589_, v___x_591_, v_x_552_, v_x_553_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_592_);
v___x_594_ = v___x_586_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
v___y_567_ = v___x_594_;
goto v___jp_566_;
}
}
}
default: 
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_x_552_);
lean_ctor_set(v___x_597_, 1, v_x_553_);
v___y_567_ = v___x_597_;
goto v___jp_566_;
}
}
v___jp_566_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_array_fset(v_xs_x27_565_, v_j_557_, v___y_567_);
lean_dec(v_j_557_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_568_);
v___x_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
else
{
lean_object* v_ks_600_; lean_object* v_vs_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_619_; 
v_ks_600_ = lean_ctor_get(v_x_549_, 0);
v_vs_601_ = lean_ctor_get(v_x_549_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_619_ == 0)
{
v___x_603_ = v_x_549_;
v_isShared_604_ = v_isSharedCheck_619_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_vs_601_);
lean_inc(v_ks_600_);
lean_dec(v_x_549_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_619_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_ks_600_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_vs_601_);
v___x_606_ = v_reuseFailAlloc_618_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v_newNode_607_; size_t v___x_608_; uint8_t v___x_609_; 
v_newNode_607_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(v___x_606_, v_x_552_, v_x_553_);
v___x_608_ = ((size_t)7ULL);
v___x_609_ = lean_usize_dec_le(v___x_608_, v_x_551_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_607_);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = lean_nat_dec_lt(v___x_610_, v___x_611_);
lean_dec(v___x_610_);
if (v___x_612_ == 0)
{
lean_object* v_ks_613_; lean_object* v_vs_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_ks_613_ = lean_ctor_get(v_newNode_607_, 0);
lean_inc_ref(v_ks_613_);
v_vs_614_ = lean_ctor_get(v_newNode_607_, 1);
lean_inc_ref(v_vs_614_);
lean_dec_ref(v_newNode_607_);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___closed__0);
v___x_617_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_x_551_, v_ks_613_, v_vs_614_, v___x_615_, v___x_616_);
lean_dec_ref(v_vs_614_);
lean_dec_ref(v_ks_613_);
return v___x_617_;
}
else
{
return v_newNode_607_;
}
}
else
{
return v_newNode_607_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(size_t v_depth_620_, lean_object* v_keys_621_, lean_object* v_vals_622_, lean_object* v_i_623_, lean_object* v_entries_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_array_get_size(v_keys_621_);
v___x_626_ = lean_nat_dec_lt(v_i_623_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v_i_623_);
return v_entries_624_;
}
else
{
lean_object* v_k_627_; lean_object* v_v_628_; uint64_t v___y_630_; 
v_k_627_ = lean_array_fget_borrowed(v_keys_621_, v_i_623_);
v_v_628_ = lean_array_fget_borrowed(v_vals_622_, v_i_623_);
if (lean_obj_tag(v_k_627_) == 0)
{
uint64_t v___x_641_; 
v___x_641_ = 1723ULL;
v___y_630_ = v___x_641_;
goto v___jp_629_;
}
else
{
uint64_t v_hash_642_; 
v_hash_642_ = lean_ctor_get_uint64(v_k_627_, sizeof(void*)*2);
v___y_630_ = v_hash_642_;
goto v___jp_629_;
}
v___jp_629_:
{
size_t v_h_631_; size_t v___x_632_; lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; size_t v___x_636_; size_t v_h_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v_h_631_ = lean_uint64_to_usize(v___y_630_);
v___x_632_ = ((size_t)5ULL);
v___x_633_ = lean_unsigned_to_nat(1u);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_sub(v_depth_620_, v___x_634_);
v___x_636_ = lean_usize_mul(v___x_632_, v___x_635_);
v_h_637_ = lean_usize_shift_right(v_h_631_, v___x_636_);
v___x_638_ = lean_nat_add(v_i_623_, v___x_633_);
lean_dec(v_i_623_);
lean_inc(v_v_628_);
lean_inc(v_k_627_);
v___x_639_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_entries_624_, v_h_637_, v_depth_620_, v_k_627_, v_v_628_);
v_i_623_ = v___x_638_;
v_entries_624_ = v___x_639_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_depth_643_, lean_object* v_keys_644_, lean_object* v_vals_645_, lean_object* v_i_646_, lean_object* v_entries_647_){
_start:
{
size_t v_depth_boxed_648_; lean_object* v_res_649_; 
v_depth_boxed_648_ = lean_unbox_usize(v_depth_643_);
lean_dec(v_depth_643_);
v_res_649_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_depth_boxed_648_, v_keys_644_, v_vals_645_, v_i_646_, v_entries_647_);
lean_dec_ref(v_vals_645_);
lean_dec_ref(v_keys_644_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_650_, lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_){
_start:
{
size_t v_x_1435__boxed_655_; size_t v_x_1436__boxed_656_; lean_object* v_res_657_; 
v_x_1435__boxed_655_ = lean_unbox_usize(v_x_651_);
lean_dec(v_x_651_);
v_x_1436__boxed_656_ = lean_unbox_usize(v_x_652_);
lean_dec(v_x_652_);
v_res_657_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_650_, v_x_1435__boxed_655_, v_x_1436__boxed_656_, v_x_653_, v_x_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
uint64_t v___y_662_; 
if (lean_obj_tag(v_x_659_) == 0)
{
uint64_t v___x_666_; 
v___x_666_ = 1723ULL;
v___y_662_ = v___x_666_;
goto v___jp_661_;
}
else
{
uint64_t v_hash_667_; 
v_hash_667_ = lean_ctor_get_uint64(v_x_659_, sizeof(void*)*2);
v___y_662_ = v_hash_667_;
goto v___jp_661_;
}
v___jp_661_:
{
size_t v___x_663_; size_t v___x_664_; lean_object* v___x_665_; 
v___x_663_ = lean_uint64_to_usize(v___y_662_);
v___x_664_ = ((size_t)1ULL);
v___x_665_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_658_, v___x_663_, v___x_664_, v_x_659_, v_x_660_);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
uint8_t v_stage_u2081_671_; 
v_stage_u2081_671_ = lean_ctor_get_uint8(v_x_668_, sizeof(void*)*2);
if (v_stage_u2081_671_ == 0)
{
lean_object* v_map_u2081_672_; lean_object* v_map_u2082_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
v_map_u2081_672_ = lean_ctor_get(v_x_668_, 0);
v_map_u2082_673_ = lean_ctor_get(v_x_668_, 1);
v_isSharedCheck_681_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_681_ == 0)
{
v___x_675_ = v_x_668_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_map_u2082_673_);
lean_inc(v_map_u2081_672_);
lean_dec(v_x_668_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(v_map_u2082_673_, v_x_669_, v_x_670_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_map_u2081_672_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v___x_677_);
lean_ctor_set_uint8(v_reuseFailAlloc_680_, sizeof(void*)*2, v_stage_u2081_671_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
lean_object* v_map_u2081_682_; lean_object* v_map_u2082_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_691_; 
v_map_u2081_682_ = lean_ctor_get(v_x_668_, 0);
v_map_u2082_683_ = lean_ctor_get(v_x_668_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_691_ == 0)
{
v___x_685_ = v_x_668_;
v_isShared_686_ = v_isSharedCheck_691_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_map_u2082_683_);
lean_inc(v_map_u2081_682_);
lean_dec(v_x_668_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_691_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_687_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(v_map_u2081_682_, v_x_669_, v_x_670_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_687_);
v___x_689_ = v___x_685_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_map_u2082_683_);
lean_ctor_set_uint8(v_reuseFailAlloc_690_, sizeof(void*)*2, v_stage_u2081_671_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_unsigned_to_nat(32u);
v___x_693_ = lean_mk_empty_array_with_capacity(v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1(void){
_start:
{
size_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_695_ = ((size_t)5ULL);
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_unsigned_to_nat(32u);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_697_);
v___x_699_ = lean_obj_once(&l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0, &l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__0);
v___x_700_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
lean_ctor_set(v___x_700_, 2, v___x_696_);
lean_ctor_set(v___x_700_, 3, v___x_696_);
lean_ctor_set_usize(v___x_700_, 4, v___x_695_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(lean_object* v_scopedEntries_701_, lean_object* v_ns_702_, lean_object* v_b_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_scopedEntries_701_, v_ns_702_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_705_ = lean_obj_once(&l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1, &l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg___closed__1);
v___x_706_ = l_Lean_PersistentArray_push___redArg(v___x_705_, v_b_703_);
v___x_707_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_scopedEntries_701_, v_ns_702_, v___x_706_);
return v___x_707_;
}
else
{
lean_object* v_val_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_val_708_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_val_708_);
lean_dec_ref_known(v___x_704_, 1);
v___x_709_ = l_Lean_PersistentArray_push___redArg(v_val_708_, v_b_703_);
v___x_710_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_scopedEntries_701_, v_ns_702_, v___x_709_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_ScopedEntries_insert(lean_object* v_00_u03b2_711_, lean_object* v_scopedEntries_712_, lean_object* v_ns_713_, lean_object* v_b_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_scopedEntries_712_, v_ns_713_, v_b_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(lean_object* v_00_u03b2_716_, lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_x_717_, v_x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___boxed(lean_object* v_00_u03b2_720_, lean_object* v_x_721_, lean_object* v_x_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0(v_00_u03b2_720_, v_x_721_, v_x_722_);
lean_dec(v_x_722_);
lean_dec_ref(v_x_721_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1(lean_object* v_00_u03b2_724_, lean_object* v_x_725_, lean_object* v_x_726_, lean_object* v_x_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1___redArg(v_x_725_, v_x_726_, v_x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(lean_object* v_00_u03b2_729_, lean_object* v_x_730_, lean_object* v_x_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___redArg(v_x_730_, v_x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0(v_00_u03b2_733_, v_x_734_, v_x_735_);
lean_dec(v_x_735_);
lean_dec_ref(v_x_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(lean_object* v_00_u03b2_737_, lean_object* v_m_738_, lean_object* v_a_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___redArg(v_m_738_, v_a_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1___boxed(lean_object* v_00_u03b2_741_, lean_object* v_m_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1(v_00_u03b2_741_, v_m_742_, v_a_743_);
lean_dec(v_a_743_);
lean_dec_ref(v_m_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3(lean_object* v_00_u03b2_745_, lean_object* v_x_746_, lean_object* v_x_747_, lean_object* v_x_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3___redArg(v_x_746_, v_x_747_, v_x_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4(lean_object* v_00_u03b2_750_, lean_object* v_m_751_, lean_object* v_a_752_, lean_object* v_b_753_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4___redArg(v_m_751_, v_a_752_, v_b_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_755_, lean_object* v_x_756_, size_t v_x_757_, lean_object* v_x_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___redArg(v_x_756_, v_x_757_, v_x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_760_, lean_object* v_x_761_, lean_object* v_x_762_, lean_object* v_x_763_){
_start:
{
size_t v_x_1736__boxed_764_; lean_object* v_res_765_; 
v_x_1736__boxed_764_ = lean_unbox_usize(v_x_762_);
lean_dec(v_x_762_);
v_res_765_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1(v_00_u03b2_760_, v_x_761_, v_x_1736__boxed_764_, v_x_763_);
lean_dec(v_x_763_);
lean_dec_ref(v_x_761_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_766_, lean_object* v_a_767_, lean_object* v_x_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___redArg(v_a_767_, v_x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_770_, lean_object* v_a_771_, lean_object* v_x_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__1_spec__3(v_00_u03b2_770_, v_a_771_, v_x_772_);
lean_dec(v_x_772_);
lean_dec(v_a_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_774_, lean_object* v_x_775_, size_t v_x_776_, size_t v_x_777_, lean_object* v_x_778_, lean_object* v_x_779_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___redArg(v_x_775_, v_x_776_, v_x_777_, v_x_778_, v_x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_781_, lean_object* v_x_782_, lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_, lean_object* v_x_786_){
_start:
{
size_t v_x_1752__boxed_787_; size_t v_x_1753__boxed_788_; lean_object* v_res_789_; 
v_x_1752__boxed_787_ = lean_unbox_usize(v_x_783_);
lean_dec(v_x_783_);
v_x_1753__boxed_788_ = lean_unbox_usize(v_x_784_);
lean_dec(v_x_784_);
v_res_789_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6(v_00_u03b2_781_, v_x_782_, v_x_1752__boxed_787_, v_x_1753__boxed_788_, v_x_785_, v_x_786_);
return v_res_789_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_790_, lean_object* v_a_791_, lean_object* v_x_792_){
_start:
{
uint8_t v___x_793_; 
v___x_793_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___redArg(v_a_791_, v_x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_794_, lean_object* v_a_795_, lean_object* v_x_796_){
_start:
{
uint8_t v_res_797_; lean_object* v_r_798_; 
v_res_797_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__8(v_00_u03b2_794_, v_a_795_, v_x_796_);
lean_dec(v_x_796_);
lean_dec(v_a_795_);
v_r_798_ = lean_box(v_res_797_);
return v_r_798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_799_, lean_object* v_data_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9___redArg(v_data_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_802_, lean_object* v_a_803_, lean_object* v_b_804_, lean_object* v_x_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__10___redArg(v_a_803_, v_b_804_, v_x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_807_, lean_object* v_keys_808_, lean_object* v_vals_809_, lean_object* v_heq_810_, lean_object* v_i_811_, lean_object* v_k_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_808_, v_vals_809_, v_i_811_, v_k_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_814_, lean_object* v_keys_815_, lean_object* v_vals_816_, lean_object* v_heq_817_, lean_object* v_i_818_, lean_object* v_k_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_814_, v_keys_815_, v_vals_816_, v_heq_817_, v_i_818_, v_k_819_);
lean_dec(v_k_819_);
lean_dec_ref(v_vals_816_);
lean_dec_ref(v_keys_815_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_821_, lean_object* v_n_822_, lean_object* v_k_823_, lean_object* v_v_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8___redArg(v_n_822_, v_k_823_, v_v_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_826_, size_t v_depth_827_, lean_object* v_keys_828_, lean_object* v_vals_829_, lean_object* v_heq_830_, lean_object* v_i_831_, lean_object* v_entries_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___redArg(v_depth_827_, v_keys_828_, v_vals_829_, v_i_831_, v_entries_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_834_, lean_object* v_depth_835_, lean_object* v_keys_836_, lean_object* v_vals_837_, lean_object* v_heq_838_, lean_object* v_i_839_, lean_object* v_entries_840_){
_start:
{
size_t v_depth_boxed_841_; lean_object* v_res_842_; 
v_depth_boxed_841_ = lean_unbox_usize(v_depth_835_);
lean_dec(v_depth_835_);
v_res_842_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__9(v_00_u03b2_834_, v_depth_boxed_841_, v_keys_836_, v_vals_837_, v_heq_838_, v_i_839_, v_entries_840_);
lean_dec_ref(v_vals_837_);
lean_dec_ref(v_keys_836_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13(lean_object* v_00_u03b2_843_, lean_object* v_i_844_, lean_object* v_source_845_, lean_object* v_target_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13___redArg(v_i_844_, v_source_845_, v_target_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_848_, lean_object* v_x_849_, lean_object* v_x_850_, lean_object* v_x_851_, lean_object* v_x_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__3_spec__6_spec__8_spec__10___redArg(v_x_849_, v_x_850_, v_x_851_, v_x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__1_spec__4_spec__9_spec__13_spec__15___redArg(v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(lean_object* v_descr_858_, lean_object* v_as_859_, size_t v_sz_860_, size_t v_i_861_, lean_object* v_b_862_, lean_object* v___y_863_){
_start:
{
lean_object* v_a_866_; uint8_t v___x_870_; 
v___x_870_ = lean_usize_dec_lt(v_i_861_, v_sz_860_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; 
lean_dec_ref(v_descr_858_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v_b_862_);
return v___x_871_;
}
else
{
lean_object* v_fst_872_; lean_object* v_snd_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_912_; 
v_fst_872_ = lean_ctor_get(v_b_862_, 0);
v_snd_873_ = lean_ctor_get(v_b_862_, 1);
v_isSharedCheck_912_ = !lean_is_exclusive(v_b_862_);
if (v_isSharedCheck_912_ == 0)
{
v___x_875_ = v_b_862_;
v_isShared_876_ = v_isSharedCheck_912_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_snd_873_);
lean_inc(v_fst_872_);
lean_dec(v_b_862_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_912_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_a_877_; 
v_a_877_ = lean_array_uget_borrowed(v_as_859_, v_i_861_);
if (lean_obj_tag(v_a_877_) == 0)
{
lean_object* v_a_878_; lean_object* v_ofOLeanEntry_879_; lean_object* v_addEntry_880_; lean_object* v___x_881_; 
v_a_878_ = lean_ctor_get(v_a_877_, 0);
v_ofOLeanEntry_879_ = lean_ctor_get(v_descr_858_, 2);
v_addEntry_880_ = lean_ctor_get(v_descr_858_, 4);
lean_inc_ref(v_ofOLeanEntry_879_);
lean_inc_ref(v___y_863_);
lean_inc(v_a_878_);
lean_inc(v_fst_872_);
v___x_881_ = lean_apply_4(v_ofOLeanEntry_879_, v_fst_872_, v_a_878_, v___y_863_, lean_box(0));
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
lean_inc(v_addEntry_880_);
v___x_883_ = lean_apply_2(v_addEntry_880_, v_fst_872_, v_a_882_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_883_);
v___x_885_ = v___x_875_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_snd_873_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
v_a_866_ = v___x_885_;
goto v___jp_865_;
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_del_object(v___x_875_);
lean_dec(v_snd_873_);
lean_dec(v_fst_872_);
lean_dec_ref(v_descr_858_);
v_a_887_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_881_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_881_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v_a_896_; lean_object* v_ofOLeanEntry_897_; lean_object* v___x_898_; 
v_a_895_ = lean_ctor_get(v_a_877_, 0);
v_a_896_ = lean_ctor_get(v_a_877_, 1);
v_ofOLeanEntry_897_ = lean_ctor_get(v_descr_858_, 2);
lean_inc_ref(v_ofOLeanEntry_897_);
lean_inc_ref(v___y_863_);
lean_inc(v_a_896_);
lean_inc(v_fst_872_);
v___x_898_ = lean_apply_4(v_ofOLeanEntry_897_, v_fst_872_, v_a_896_, v___y_863_, lean_box(0));
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
lean_inc(v_a_895_);
v___x_900_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_snd_873_, v_a_895_, v_a_899_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 1, v___x_900_);
v___x_902_ = v___x_875_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_fst_872_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
v_a_866_ = v___x_902_;
goto v___jp_865_;
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_del_object(v___x_875_);
lean_dec(v_snd_873_);
lean_dec(v_fst_872_);
lean_dec_ref(v_descr_858_);
v_a_904_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_898_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_898_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
}
v___jp_865_:
{
size_t v___x_867_; size_t v___x_868_; 
v___x_867_ = ((size_t)1ULL);
v___x_868_ = lean_usize_add(v_i_861_, v___x_867_);
v_i_861_ = v___x_868_;
v_b_862_ = v_a_866_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg___boxed(lean_object* v_descr_913_, lean_object* v_as_914_, lean_object* v_sz_915_, lean_object* v_i_916_, lean_object* v_b_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
size_t v_sz_boxed_920_; size_t v_i_boxed_921_; lean_object* v_res_922_; 
v_sz_boxed_920_ = lean_unbox_usize(v_sz_915_);
lean_dec(v_sz_915_);
v_i_boxed_921_ = lean_unbox_usize(v_i_916_);
lean_dec(v_i_916_);
v_res_922_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_913_, v_as_914_, v_sz_boxed_920_, v_i_boxed_921_, v_b_917_, v___y_918_);
lean_dec_ref(v___y_918_);
lean_dec_ref(v_as_914_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(lean_object* v_descr_923_, lean_object* v_as_924_, size_t v_sz_925_, size_t v_i_926_, lean_object* v_b_927_, lean_object* v___y_928_){
_start:
{
uint8_t v___x_930_; 
v___x_930_ = lean_usize_dec_lt(v_i_926_, v_sz_925_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
lean_dec_ref(v_descr_923_);
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_b_927_);
return v___x_931_;
}
else
{
lean_object* v_fst_932_; lean_object* v_snd_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_957_; 
v_fst_932_ = lean_ctor_get(v_b_927_, 0);
v_snd_933_ = lean_ctor_get(v_b_927_, 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v_b_927_);
if (v_isSharedCheck_957_ == 0)
{
v___x_935_ = v_b_927_;
v_isShared_936_ = v_isSharedCheck_957_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_snd_933_);
lean_inc(v_fst_932_);
lean_dec(v_b_927_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_957_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v_a_937_; lean_object* v___x_939_; 
v_a_937_ = lean_array_uget_borrowed(v_as_924_, v_i_926_);
if (v_isShared_936_ == 0)
{
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_fst_932_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_snd_933_);
v___x_939_ = v_reuseFailAlloc_956_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
size_t v_sz_940_; size_t v___x_941_; lean_object* v___x_942_; 
v_sz_940_ = lean_array_size(v_a_937_);
v___x_941_ = ((size_t)0ULL);
lean_inc_ref(v_descr_923_);
v___x_942_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_923_, v_a_937_, v_sz_940_, v___x_941_, v___x_939_, v___y_928_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v_fst_944_; lean_object* v_snd_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_955_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v_fst_944_ = lean_ctor_get(v_a_943_, 0);
v_snd_945_ = lean_ctor_get(v_a_943_, 1);
v_isSharedCheck_955_ = !lean_is_exclusive(v_a_943_);
if (v_isSharedCheck_955_ == 0)
{
v___x_947_ = v_a_943_;
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_snd_945_);
lean_inc(v_fst_944_);
lean_dec(v_a_943_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_fst_944_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_snd_945_);
v___x_950_ = v_reuseFailAlloc_954_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
size_t v___x_951_; size_t v___x_952_; 
v___x_951_ = ((size_t)1ULL);
v___x_952_ = lean_usize_add(v_i_926_, v___x_951_);
v_i_926_ = v___x_952_;
v_b_927_ = v___x_950_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_descr_923_);
return v___x_942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg___boxed(lean_object* v_descr_958_, lean_object* v_as_959_, lean_object* v_sz_960_, lean_object* v_i_961_, lean_object* v_b_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
size_t v_sz_boxed_965_; size_t v_i_boxed_966_; lean_object* v_res_967_; 
v_sz_boxed_965_ = lean_unbox_usize(v_sz_960_);
lean_dec(v_sz_960_);
v_i_boxed_966_ = lean_unbox_usize(v_i_961_);
lean_dec(v_i_961_);
v_res_967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_958_, v_as_959_, v_sz_boxed_965_, v_i_boxed_966_, v_b_962_, v___y_963_);
lean_dec_ref(v___y_963_);
lean_dec_ref(v_as_959_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg(lean_object* v_descr_968_, lean_object* v_as_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_mkInitial_972_; lean_object* v_finalizeImport_973_; lean_object* v___x_974_; 
v_mkInitial_972_ = lean_ctor_get(v_descr_968_, 1);
v_finalizeImport_973_ = lean_ctor_get(v_descr_968_, 5);
lean_inc(v_finalizeImport_973_);
lean_inc_ref(v_mkInitial_972_);
v___x_974_ = lean_apply_1(v_mkInitial_972_, lean_box(0));
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; size_t v_sz_979_; size_t v___x_980_; lean_object* v___x_981_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = 1;
v___x_977_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4, &l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_instInhabitedScopedEntries_default___redArg___closed__4);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v_a_975_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v_sz_979_ = lean_array_size(v_as_969_);
v___x_980_ = ((size_t)0ULL);
v___x_981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_968_, v_as_969_, v_sz_979_, v___x_980_, v___x_978_, v___y_970_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1003_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_1003_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1003_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v_fst_986_; lean_object* v_snd_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1002_; 
v_fst_986_ = lean_ctor_get(v_a_982_, 0);
v_snd_987_ = lean_ctor_get(v_a_982_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_a_982_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_989_ = v_a_982_;
v_isShared_990_ = v_isSharedCheck_1002_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_snd_987_);
lean_inc(v_fst_986_);
lean_dec(v_a_982_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1002_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_991_ = lean_apply_1(v_finalizeImport_973_, v_fst_986_);
v___x_992_ = l_Lean_NameSet_empty;
v___x_993_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
lean_ctor_set_uint8(v___x_993_, sizeof(void*)*2, v___x_976_);
v___x_994_ = lean_box(0);
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 1);
lean_ctor_set(v___x_989_, 1, v___x_994_);
lean_ctor_set(v___x_989_, 0, v___x_993_);
v___x_996_ = v___x_989_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v___x_994_);
v___x_996_ = v_reuseFailAlloc_1001_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_997_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v_snd_987_);
lean_ctor_set(v___x_997_, 2, v___x_994_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v___x_997_);
v___x_999_ = v___x_984_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_finalizeImport_973_);
v_a_1004_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_981_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_981_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec(v_finalizeImport_973_);
lean_dec_ref(v_descr_968_);
v_a_1012_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_974_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_974_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___redArg___boxed(lean_object* v_descr_1020_, lean_object* v_as_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_ScopedEnvExtension_addImportedFn___redArg(v_descr_1020_, v_as_1021_, v___y_1022_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_as_1021_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn(lean_object* v_00_u03b1_1025_, lean_object* v_00_u03b2_1026_, lean_object* v_00_u03c3_1027_, lean_object* v_descr_1028_, lean_object* v_as_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_ScopedEnvExtension_addImportedFn___redArg(v_descr_1028_, v_as_1029_, v___y_1030_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addImportedFn___boxed(lean_object* v_00_u03b1_1033_, lean_object* v_00_u03b2_1034_, lean_object* v_00_u03c3_1035_, lean_object* v_descr_1036_, lean_object* v_as_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_ScopedEnvExtension_addImportedFn(v_00_u03b1_1033_, v_00_u03b2_1034_, v_00_u03c3_1035_, v_descr_1036_, v_as_1037_, v___y_1038_);
lean_dec_ref(v___y_1038_);
lean_dec_ref(v_as_1037_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(lean_object* v_00_u03b1_1041_, lean_object* v_00_u03c3_1042_, lean_object* v_00_u03b2_1043_, lean_object* v_descr_1044_, lean_object* v_as_1045_, size_t v_sz_1046_, size_t v_i_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___redArg(v_descr_1044_, v_as_1045_, v_sz_1046_, v_i_1047_, v_b_1048_, v___y_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0___boxed(lean_object* v_00_u03b1_1052_, lean_object* v_00_u03c3_1053_, lean_object* v_00_u03b2_1054_, lean_object* v_descr_1055_, lean_object* v_as_1056_, lean_object* v_sz_1057_, lean_object* v_i_1058_, lean_object* v_b_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
size_t v_sz_boxed_1062_; size_t v_i_boxed_1063_; lean_object* v_res_1064_; 
v_sz_boxed_1062_ = lean_unbox_usize(v_sz_1057_);
lean_dec(v_sz_1057_);
v_i_boxed_1063_ = lean_unbox_usize(v_i_1058_);
lean_dec(v_i_1058_);
v_res_1064_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__0(v_00_u03b1_1052_, v_00_u03c3_1053_, v_00_u03b2_1054_, v_descr_1055_, v_as_1056_, v_sz_boxed_1062_, v_i_boxed_1063_, v_b_1059_, v___y_1060_);
lean_dec_ref(v___y_1060_);
lean_dec_ref(v_as_1056_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(lean_object* v_00_u03b1_1065_, lean_object* v_00_u03c3_1066_, lean_object* v_00_u03b2_1067_, lean_object* v_descr_1068_, lean_object* v_as_1069_, size_t v_sz_1070_, size_t v_i_1071_, lean_object* v_b_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___redArg(v_descr_1068_, v_as_1069_, v_sz_1070_, v_i_1071_, v_b_1072_, v___y_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1___boxed(lean_object* v_00_u03b1_1076_, lean_object* v_00_u03c3_1077_, lean_object* v_00_u03b2_1078_, lean_object* v_descr_1079_, lean_object* v_as_1080_, lean_object* v_sz_1081_, lean_object* v_i_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
size_t v_sz_boxed_1086_; size_t v_i_boxed_1087_; lean_object* v_res_1088_; 
v_sz_boxed_1086_ = lean_unbox_usize(v_sz_1081_);
lean_dec(v_sz_1081_);
v_i_boxed_1087_ = lean_unbox_usize(v_i_1082_);
lean_dec(v_i_1082_);
v_res_1088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_addImportedFn_spec__1(v_00_u03b1_1076_, v_00_u03c3_1077_, v_00_u03b2_1078_, v_descr_1079_, v_as_1080_, v_sz_boxed_1086_, v_i_boxed_1087_, v_b_1083_, v___y_1084_);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_as_1080_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(lean_object* v_a_1089_, lean_object* v_descr_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
if (lean_obj_tag(v_a_1092_) == 0)
{
lean_object* v___x_1094_; 
lean_dec(v_a_1091_);
lean_dec_ref(v_descr_1090_);
v___x_1094_ = l_List_reverse___redArg(v_a_1093_);
return v___x_1094_;
}
else
{
lean_object* v_head_1095_; lean_object* v_tail_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1121_; 
v_head_1095_ = lean_ctor_get(v_a_1092_, 0);
v_tail_1096_ = lean_ctor_get(v_a_1092_, 1);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_a_1092_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1098_ = v_a_1092_;
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_tail_1096_);
lean_inc(v_head_1095_);
lean_dec(v_a_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___y_1101_; lean_object* v_state_1106_; lean_object* v_activeScopes_1107_; uint8_t v_delimitsLocal_1108_; uint8_t v___x_1109_; 
v_state_1106_ = lean_ctor_get(v_head_1095_, 0);
v_activeScopes_1107_ = lean_ctor_get(v_head_1095_, 1);
v_delimitsLocal_1108_ = lean_ctor_get_uint8(v_head_1095_, sizeof(void*)*2);
v___x_1109_ = l_Lean_NameSet_contains(v_activeScopes_1107_, v_a_1089_);
if (v___x_1109_ == 0)
{
v___y_1101_ = v_head_1095_;
goto v___jp_1100_;
}
else
{
lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1118_; 
lean_inc(v_activeScopes_1107_);
lean_inc(v_state_1106_);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_head_1095_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; lean_object* v_unused_1120_; 
v_unused_1119_ = lean_ctor_get(v_head_1095_, 1);
lean_dec(v_unused_1119_);
v_unused_1120_ = lean_ctor_get(v_head_1095_, 0);
lean_dec(v_unused_1120_);
v___x_1111_ = v_head_1095_;
v_isShared_1112_ = v_isSharedCheck_1118_;
goto v_resetjp_1110_;
}
else
{
lean_dec(v_head_1095_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1118_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_addEntry_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v_addEntry_1113_ = lean_ctor_get(v_descr_1090_, 4);
lean_inc(v_addEntry_1113_);
lean_inc(v_a_1091_);
v___x_1114_ = lean_apply_2(v_addEntry_1113_, v_state_1106_, v_a_1091_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1114_);
v___x_1116_ = v___x_1111_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_activeScopes_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1117_, sizeof(void*)*2, v_delimitsLocal_1108_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v___y_1101_ = v___x_1116_;
goto v___jp_1100_;
}
}
}
v___jp_1100_:
{
lean_object* v___x_1103_; 
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 1, v_a_1093_);
lean_ctor_set(v___x_1098_, 0, v___y_1101_);
v___x_1103_ = v___x_1098_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___y_1101_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_a_1093_);
v___x_1103_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v_a_1092_ = v_tail_1096_;
v_a_1093_ = v___x_1103_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg___boxed(lean_object* v_a_1122_, lean_object* v_descr_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1122_, v_descr_1123_, v_a_1124_, v_a_1125_, v_a_1126_);
lean_dec(v_a_1122_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(lean_object* v_descr_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
if (lean_obj_tag(v_a_1130_) == 0)
{
lean_object* v___x_1132_; 
lean_dec(v_a_1129_);
lean_dec_ref(v_descr_1128_);
v___x_1132_ = l_List_reverse___redArg(v_a_1131_);
return v___x_1132_;
}
else
{
lean_object* v_head_1133_; lean_object* v_tail_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1154_; 
v_head_1133_ = lean_ctor_get(v_a_1130_, 0);
v_tail_1134_ = lean_ctor_get(v_a_1130_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_a_1130_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1136_ = v_a_1130_;
v_isShared_1137_ = v_isSharedCheck_1154_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_tail_1134_);
lean_inc(v_head_1133_);
lean_dec(v_a_1130_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1154_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v_addEntry_1138_; lean_object* v_state_1139_; lean_object* v_activeScopes_1140_; uint8_t v_delimitsLocal_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1153_; 
v_addEntry_1138_ = lean_ctor_get(v_descr_1128_, 4);
v_state_1139_ = lean_ctor_get(v_head_1133_, 0);
v_activeScopes_1140_ = lean_ctor_get(v_head_1133_, 1);
v_delimitsLocal_1141_ = lean_ctor_get_uint8(v_head_1133_, sizeof(void*)*2);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_head_1133_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1143_ = v_head_1133_;
v_isShared_1144_ = v_isSharedCheck_1153_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_activeScopes_1140_);
lean_inc(v_state_1139_);
lean_dec(v_head_1133_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1153_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1147_; 
lean_inc(v_addEntry_1138_);
lean_inc(v_a_1129_);
v___x_1145_ = lean_apply_2(v_addEntry_1138_, v_state_1139_, v_a_1129_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1145_);
v___x_1147_ = v___x_1143_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_activeScopes_1140_);
lean_ctor_set_uint8(v_reuseFailAlloc_1152_, sizeof(void*)*2, v_delimitsLocal_1141_);
v___x_1147_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1149_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 1, v_a_1131_);
lean_ctor_set(v___x_1136_, 0, v___x_1147_);
v___x_1149_ = v___x_1136_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_a_1131_);
v___x_1149_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
v_a_1130_ = v_tail_1134_;
v_a_1131_ = v___x_1149_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn___redArg(lean_object* v_descr_1155_, lean_object* v_s_1156_, lean_object* v_e_1157_){
_start:
{
if (lean_obj_tag(v_e_1157_) == 0)
{
lean_object* v_stateStack_1158_; lean_object* v_scopedEntries_1159_; lean_object* v_newEntries_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1180_; 
v_stateStack_1158_ = lean_ctor_get(v_s_1156_, 0);
v_scopedEntries_1159_ = lean_ctor_get(v_s_1156_, 1);
v_newEntries_1160_ = lean_ctor_get(v_s_1156_, 2);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_s_1156_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1162_ = v_s_1156_;
v_isShared_1163_ = v_isSharedCheck_1180_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_newEntries_1160_);
lean_inc(v_scopedEntries_1159_);
lean_inc(v_stateStack_1158_);
lean_dec(v_s_1156_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1180_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1179_; 
v_a_1164_ = lean_ctor_get(v_e_1157_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_e_1157_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1166_ = v_e_1157_;
v_isShared_1167_ = v_isSharedCheck_1179_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v_e_1157_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1179_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v_toOLeanEntry_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
v_toOLeanEntry_1168_ = lean_ctor_get(v_descr_1155_, 3);
lean_inc(v_toOLeanEntry_1168_);
v___x_1169_ = lean_box(0);
lean_inc(v_a_1164_);
v___x_1170_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(v_descr_1155_, v_a_1164_, v_stateStack_1158_, v___x_1169_);
v___x_1171_ = lean_apply_1(v_toOLeanEntry_1168_, v_a_1164_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v___x_1171_);
v___x_1173_ = v___x_1166_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1171_);
v___x_1173_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
lean_ctor_set(v___x_1174_, 1, v_newEntries_1160_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 2, v___x_1174_);
lean_ctor_set(v___x_1162_, 0, v___x_1170_);
v___x_1176_ = v___x_1162_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_scopedEntries_1159_);
lean_ctor_set(v_reuseFailAlloc_1177_, 2, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
else
{
lean_object* v_stateStack_1181_; lean_object* v_scopedEntries_1182_; lean_object* v_newEntries_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1205_; 
v_stateStack_1181_ = lean_ctor_get(v_s_1156_, 0);
v_scopedEntries_1182_ = lean_ctor_get(v_s_1156_, 1);
v_newEntries_1183_ = lean_ctor_get(v_s_1156_, 2);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_s_1156_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1185_ = v_s_1156_;
v_isShared_1186_ = v_isSharedCheck_1205_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_newEntries_1183_);
lean_inc(v_scopedEntries_1182_);
lean_inc(v_stateStack_1181_);
lean_dec(v_s_1156_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1205_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v_a_1187_; lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1204_; 
v_a_1187_ = lean_ctor_get(v_e_1157_, 0);
v_a_1188_ = lean_ctor_get(v_e_1157_, 1);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_e_1157_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1190_ = v_e_1157_;
v_isShared_1191_ = v_isSharedCheck_1204_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_inc(v_a_1187_);
lean_dec(v_e_1157_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1204_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v_toOLeanEntry_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v_toOLeanEntry_1192_ = lean_ctor_get(v_descr_1155_, 3);
lean_inc(v_toOLeanEntry_1192_);
v___x_1193_ = lean_box(0);
lean_inc_n(v_a_1188_, 2);
v___x_1194_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1187_, v_descr_1155_, v_a_1188_, v_stateStack_1181_, v___x_1193_);
lean_inc(v_a_1187_);
v___x_1195_ = l_Lean_ScopedEnvExtension_ScopedEntries_insert___redArg(v_scopedEntries_1182_, v_a_1187_, v_a_1188_);
v___x_1196_ = lean_apply_1(v_toOLeanEntry_1192_, v_a_1188_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 1, v___x_1196_);
v___x_1198_ = v___x_1190_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1187_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1201_; 
v___x_1199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v_newEntries_1183_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 2, v___x_1199_);
lean_ctor_set(v___x_1185_, 1, v___x_1195_);
lean_ctor_set(v___x_1185_, 0, v___x_1194_);
v___x_1201_ = v___x_1185_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1202_, 2, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntryFn(lean_object* v_00_u03b1_1206_, lean_object* v_00_u03b2_1207_, lean_object* v_00_u03c3_1208_, lean_object* v_descr_1209_, lean_object* v_s_1210_, lean_object* v_e_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_ScopedEnvExtension_addEntryFn___redArg(v_descr_1209_, v_s_1210_, v_e_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0(lean_object* v_00_u03c3_1213_, lean_object* v_00_u03b2_1214_, lean_object* v_00_u03b1_1215_, lean_object* v_descr_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__0___redArg(v_descr_1216_, v_a_1217_, v_a_1218_, v_a_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(lean_object* v_00_u03c3_1221_, lean_object* v_a_1222_, lean_object* v_00_u03b2_1223_, lean_object* v_00_u03b1_1224_, lean_object* v_descr_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___redArg(v_a_1222_, v_descr_1225_, v_a_1226_, v_a_1227_, v_a_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1___boxed(lean_object* v_00_u03c3_1230_, lean_object* v_a_1231_, lean_object* v_00_u03b2_1232_, lean_object* v_00_u03b1_1233_, lean_object* v_descr_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_List_mapTR_loop___at___00Lean_ScopedEnvExtension_addEntryFn_spec__1(v_00_u03c3_1230_, v_a_1231_, v_00_u03b2_1232_, v_00_u03b1_1233_, v_descr_1234_, v_a_1235_, v_a_1236_, v_a_1237_);
lean_dec(v_a_1231_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(lean_object* v_descr_1239_, lean_object* v_env_1240_, lean_object* v_as_1241_, size_t v_sz_1242_, size_t v_i_1243_, lean_object* v_b_1244_){
_start:
{
lean_object* v_a_1246_; uint8_t v___x_1250_; 
v___x_1250_ = lean_usize_dec_lt(v_i_1243_, v_sz_1242_);
if (v___x_1250_ == 0)
{
lean_dec_ref(v_env_1240_);
lean_dec_ref(v_descr_1239_);
return v_b_1244_;
}
else
{
lean_object* v_snd_1251_; lean_object* v_fst_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1352_; 
v_snd_1251_ = lean_ctor_get(v_b_1244_, 1);
v_fst_1252_ = lean_ctor_get(v_b_1244_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_b_1244_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1254_ = v_b_1244_;
v_isShared_1255_ = v_isSharedCheck_1352_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_snd_1251_);
lean_inc(v_fst_1252_);
lean_dec(v_b_1244_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1352_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v_fst_1256_; lean_object* v_snd_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1351_; 
v_fst_1256_ = lean_ctor_get(v_snd_1251_, 0);
v_snd_1257_ = lean_ctor_get(v_snd_1251_, 1);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_snd_1251_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1259_ = v_snd_1251_;
v_isShared_1260_ = v_isSharedCheck_1351_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_snd_1257_);
lean_inc(v_fst_1256_);
lean_dec(v_snd_1251_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1351_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v_a_1261_; 
v_a_1261_ = lean_array_uget(v_as_1241_, v_i_1243_);
if (lean_obj_tag(v_a_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1311_; 
v_a_1262_ = lean_ctor_get(v_a_1261_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_a_1261_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1264_ = v_a_1261_;
v_isShared_1265_ = v_isSharedCheck_1311_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v_a_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1311_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v_exportEntry_x3f_1266_; lean_object* v___x_1267_; lean_object* v_exported_1268_; lean_object* v_server_1269_; lean_object* v_private_1270_; lean_object* v___y_1272_; lean_object* v_server_1273_; lean_object* v_exported_1292_; 
v_exportEntry_x3f_1266_ = lean_ctor_get(v_descr_1239_, 6);
lean_inc_ref(v_exportEntry_x3f_1266_);
lean_inc_ref(v_env_1240_);
v___x_1267_ = lean_apply_2(v_exportEntry_x3f_1266_, v_env_1240_, v_a_1262_);
v_exported_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_exported_1268_);
v_server_1269_ = lean_ctor_get(v___x_1267_, 1);
lean_inc(v_server_1269_);
v_private_1270_ = lean_ctor_get(v___x_1267_, 2);
lean_inc(v_private_1270_);
lean_dec_ref(v___x_1267_);
if (lean_obj_tag(v_exported_1268_) == 1)
{
lean_object* v_val_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_val_1302_ = lean_ctor_get(v_exported_1268_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_exported_1268_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1304_ = v_exported_1268_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_val_1302_);
lean_dec(v_exported_1268_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
lean_ctor_set_tag(v___x_1304_, 0);
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_val_1302_);
v___x_1307_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_array_push(v_fst_1252_, v___x_1307_);
v_exported_1292_ = v___x_1308_;
goto v___jp_1291_;
}
}
}
else
{
lean_dec(v_exported_1268_);
v_exported_1292_ = v_fst_1252_;
goto v___jp_1291_;
}
v___jp_1271_:
{
if (lean_obj_tag(v_private_1270_) == 1)
{
lean_object* v_val_1274_; lean_object* v___x_1276_; 
v_val_1274_ = lean_ctor_get(v_private_1270_, 0);
lean_inc(v_val_1274_);
lean_dec_ref_known(v_private_1270_, 1);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_val_1274_);
v___x_1276_ = v___x_1264_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_val_1274_);
v___x_1276_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1279_; 
v___x_1277_ = lean_array_push(v_snd_1257_, v___x_1276_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v___x_1277_);
lean_ctor_set(v___x_1259_, 0, v_server_1273_);
v___x_1279_ = v___x_1259_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_server_1273_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v___x_1277_);
v___x_1279_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1281_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1279_);
lean_ctor_set(v___x_1254_, 0, v___y_1272_);
v___x_1281_ = v___x_1254_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___y_1272_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
v_a_1246_ = v___x_1281_;
goto v___jp_1245_;
}
}
}
}
else
{
lean_object* v___x_1286_; 
lean_dec(v_private_1270_);
lean_del_object(v___x_1264_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_server_1273_);
v___x_1286_ = v___x_1259_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_server_1273_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v_snd_1257_);
v___x_1286_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1288_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1286_);
lean_ctor_set(v___x_1254_, 0, v___y_1272_);
v___x_1288_ = v___x_1254_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___y_1272_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
v_a_1246_ = v___x_1288_;
goto v___jp_1245_;
}
}
}
}
v___jp_1291_:
{
if (lean_obj_tag(v_server_1269_) == 1)
{
lean_object* v_val_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1301_; 
v_val_1293_ = lean_ctor_get(v_server_1269_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v_server_1269_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1295_ = v_server_1269_;
v_isShared_1296_ = v_isSharedCheck_1301_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_val_1293_);
lean_dec(v_server_1269_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1301_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set_tag(v___x_1295_, 0);
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_val_1293_);
v___x_1298_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_array_push(v_fst_1256_, v___x_1298_);
v___y_1272_ = v_exported_1292_;
v_server_1273_ = v___x_1299_;
goto v___jp_1271_;
}
}
}
else
{
lean_dec(v_server_1269_);
v___y_1272_ = v_exported_1292_;
v_server_1273_ = v_fst_1256_;
goto v___jp_1271_;
}
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1350_; 
v_a_1312_ = lean_ctor_get(v_a_1261_, 0);
v_a_1313_ = lean_ctor_get(v_a_1261_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_a_1261_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1315_ = v_a_1261_;
v_isShared_1316_ = v_isSharedCheck_1350_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_inc(v_a_1312_);
lean_dec(v_a_1261_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1350_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v_exportEntry_x3f_1317_; lean_object* v___x_1318_; lean_object* v_exported_1319_; lean_object* v_server_1320_; lean_object* v_private_1321_; lean_object* v___y_1323_; lean_object* v_server_1324_; lean_object* v_exported_1343_; 
v_exportEntry_x3f_1317_ = lean_ctor_get(v_descr_1239_, 6);
lean_inc_ref(v_exportEntry_x3f_1317_);
lean_inc_ref(v_env_1240_);
v___x_1318_ = lean_apply_2(v_exportEntry_x3f_1317_, v_env_1240_, v_a_1313_);
v_exported_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_exported_1319_);
v_server_1320_ = lean_ctor_get(v___x_1318_, 1);
lean_inc(v_server_1320_);
v_private_1321_ = lean_ctor_get(v___x_1318_, 2);
lean_inc(v_private_1321_);
lean_dec_ref(v___x_1318_);
if (lean_obj_tag(v_exported_1319_) == 1)
{
lean_object* v_val_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v_val_1347_ = lean_ctor_get(v_exported_1319_, 0);
lean_inc(v_val_1347_);
lean_dec_ref_known(v_exported_1319_, 1);
lean_inc(v_a_1312_);
v___x_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1348_, 0, v_a_1312_);
lean_ctor_set(v___x_1348_, 1, v_val_1347_);
v___x_1349_ = lean_array_push(v_fst_1252_, v___x_1348_);
v_exported_1343_ = v___x_1349_;
goto v___jp_1342_;
}
else
{
lean_dec(v_exported_1319_);
v_exported_1343_ = v_fst_1252_;
goto v___jp_1342_;
}
v___jp_1322_:
{
if (lean_obj_tag(v_private_1321_) == 1)
{
lean_object* v_val_1325_; lean_object* v___x_1327_; 
v_val_1325_ = lean_ctor_get(v_private_1321_, 0);
lean_inc(v_val_1325_);
lean_dec_ref_known(v_private_1321_, 1);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v_val_1325_);
v___x_1327_ = v___x_1315_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1312_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_val_1325_);
v___x_1327_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1328_ = lean_array_push(v_snd_1257_, v___x_1327_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v___x_1328_);
lean_ctor_set(v___x_1259_, 0, v_server_1324_);
v___x_1330_ = v___x_1259_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_server_1324_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1332_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1330_);
lean_ctor_set(v___x_1254_, 0, v___y_1323_);
v___x_1332_ = v___x_1254_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___y_1323_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
v_a_1246_ = v___x_1332_;
goto v___jp_1245_;
}
}
}
}
else
{
lean_object* v___x_1337_; 
lean_dec(v_private_1321_);
lean_del_object(v___x_1315_);
lean_dec(v_a_1312_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_server_1324_);
v___x_1337_ = v___x_1259_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_server_1324_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_snd_1257_);
v___x_1337_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1339_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1337_);
lean_ctor_set(v___x_1254_, 0, v___y_1323_);
v___x_1339_ = v___x_1254_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___y_1323_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
v_a_1246_ = v___x_1339_;
goto v___jp_1245_;
}
}
}
}
v___jp_1342_:
{
if (lean_obj_tag(v_server_1320_) == 1)
{
lean_object* v_val_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_val_1344_ = lean_ctor_get(v_server_1320_, 0);
lean_inc(v_val_1344_);
lean_dec_ref_known(v_server_1320_, 1);
lean_inc(v_a_1312_);
v___x_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1345_, 0, v_a_1312_);
lean_ctor_set(v___x_1345_, 1, v_val_1344_);
v___x_1346_ = lean_array_push(v_fst_1256_, v___x_1345_);
v___y_1323_ = v_exported_1343_;
v_server_1324_ = v___x_1346_;
goto v___jp_1322_;
}
else
{
lean_dec(v_server_1320_);
v___y_1323_ = v_exported_1343_;
v_server_1324_ = v_fst_1256_;
goto v___jp_1322_;
}
}
}
}
}
}
}
v___jp_1245_:
{
size_t v___x_1247_; size_t v___x_1248_; 
v___x_1247_ = ((size_t)1ULL);
v___x_1248_ = lean_usize_add(v_i_1243_, v___x_1247_);
v_i_1243_ = v___x_1248_;
v_b_1244_ = v_a_1246_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg___boxed(lean_object* v_descr_1353_, lean_object* v_env_1354_, lean_object* v_as_1355_, lean_object* v_sz_1356_, lean_object* v_i_1357_, lean_object* v_b_1358_){
_start:
{
size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1356_);
lean_dec(v_sz_1356_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1357_);
lean_dec(v_i_1357_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1353_, v_env_1354_, v_as_1355_, v_sz_boxed_1359_, v_i_boxed_1360_, v_b_1358_);
lean_dec_ref(v_as_1355_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(lean_object* v_descr_1369_, lean_object* v_env_1370_, lean_object* v_s_1371_){
_start:
{
lean_object* v_newEntries_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1389_; 
v_newEntries_1372_ = lean_ctor_get(v_s_1371_, 2);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_s_1371_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; lean_object* v_unused_1391_; 
v_unused_1390_ = lean_ctor_get(v_s_1371_, 1);
lean_dec(v_unused_1390_);
v_unused_1391_ = lean_ctor_get(v_s_1371_, 0);
lean_dec(v_unused_1391_);
v___x_1374_ = v_s_1371_;
v_isShared_1375_ = v_isSharedCheck_1389_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_newEntries_1372_);
lean_dec(v_s_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1389_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; size_t v_sz_1379_; size_t v___x_1380_; lean_object* v___x_1381_; lean_object* v_snd_1382_; lean_object* v_fst_1383_; lean_object* v_fst_1384_; lean_object* v_snd_1385_; lean_object* v___x_1387_; 
v___x_1376_ = lean_array_mk(v_newEntries_1372_);
v___x_1377_ = l_Array_reverse___redArg(v___x_1376_);
v___x_1378_ = ((lean_object*)(l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__2));
v_sz_1379_ = lean_array_size(v___x_1377_);
v___x_1380_ = ((size_t)0ULL);
v___x_1381_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1369_, v_env_1370_, v___x_1377_, v_sz_1379_, v___x_1380_, v___x_1378_);
lean_dec_ref(v___x_1377_);
v_snd_1382_ = lean_ctor_get(v___x_1381_, 1);
lean_inc(v_snd_1382_);
v_fst_1383_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_fst_1383_);
lean_dec_ref(v___x_1381_);
v_fst_1384_ = lean_ctor_get(v_snd_1382_, 0);
lean_inc(v_fst_1384_);
v_snd_1385_ = lean_ctor_get(v_snd_1382_, 1);
lean_inc(v_snd_1385_);
lean_dec(v_snd_1382_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 2, v_snd_1385_);
lean_ctor_set(v___x_1374_, 1, v_fst_1384_);
lean_ctor_set(v___x_1374_, 0, v_fst_1383_);
v___x_1387_ = v___x_1374_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_fst_1383_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_fst_1384_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_snd_1385_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_exportEntriesFn(lean_object* v_00_u03b1_1392_, lean_object* v_00_u03b2_1393_, lean_object* v_00_u03c3_1394_, lean_object* v_descr_1395_, lean_object* v_env_1396_, lean_object* v_s_1397_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_ScopedEnvExtension_exportEntriesFn___redArg(v_descr_1395_, v_env_1396_, v_s_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(lean_object* v_00_u03b1_1399_, lean_object* v_00_u03b2_1400_, lean_object* v_00_u03c3_1401_, lean_object* v_descr_1402_, lean_object* v_env_1403_, lean_object* v_as_1404_, size_t v_sz_1405_, size_t v_i_1406_, lean_object* v_b_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___redArg(v_descr_1402_, v_env_1403_, v_as_1404_, v_sz_1405_, v_i_1406_, v_b_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0___boxed(lean_object* v_00_u03b1_1409_, lean_object* v_00_u03b2_1410_, lean_object* v_00_u03c3_1411_, lean_object* v_descr_1412_, lean_object* v_env_1413_, lean_object* v_as_1414_, lean_object* v_sz_1415_, lean_object* v_i_1416_, lean_object* v_b_1417_){
_start:
{
size_t v_sz_boxed_1418_; size_t v_i_boxed_1419_; lean_object* v_res_1420_; 
v_sz_boxed_1418_ = lean_unbox_usize(v_sz_1415_);
lean_dec(v_sz_1415_);
v_i_boxed_1419_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_res_1420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ScopedEnvExtension_exportEntriesFn_spec__0(v_00_u03b1_1409_, v_00_u03b2_1410_, v_00_u03c3_1411_, v_descr_1412_, v_env_1413_, v_as_1414_, v_sz_boxed_1418_, v_i_boxed_1419_, v_b_1417_);
lean_dec_ref(v_as_1414_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5(lean_object* v_x_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__0___closed__1));
v___x_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5___boxed(lean_object* v_x_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__5(v_x_1426_, v___y_1427_);
lean_dec_ref(v___y_1427_);
lean_dec_ref(v_x_1426_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(lean_object* v_s_1430_, lean_object* v_x_1431_){
_start:
{
lean_inc_ref(v_s_1430_);
return v_s_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0___boxed(lean_object* v_s_1432_, lean_object* v_x_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__0(v_s_1432_, v_x_1433_);
lean_dec_ref(v_x_1433_);
lean_dec_ref(v_s_1432_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(lean_object* v_x_1437_, lean_object* v_x_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___closed__0));
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1___boxed(lean_object* v_x_1440_, lean_object* v_x_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__1(v_x_1440_, v_x_1441_);
lean_dec_ref(v_x_1441_);
lean_dec_ref(v_x_1440_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(lean_object* v_x_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_box(0);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2___boxed(lean_object* v_x_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg___lam__2(v_x_1445_);
lean_dec_ref(v_x_1445_);
return v_res_1446_;
}
}
static lean_object* _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_1451_;
}
}
static lean_object* _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5(void){
_start:
{
lean_object* v___f_1452_; lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___f_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___f_1452_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__3));
v___f_1453_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__2));
v___f_1454_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__1));
v___f_1455_ = ((lean_object*)(l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__0));
v___x_1456_ = lean_box(0);
v___x_1457_ = lean_obj_once(&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4, &l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4_once, _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__4);
v___x_1458_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
lean_ctor_set(v___x_1458_, 1, v___x_1456_);
lean_ctor_set(v___x_1458_, 2, v___f_1455_);
lean_ctor_set(v___x_1458_, 3, v___f_1454_);
lean_ctor_set(v___x_1458_, 4, v___f_1453_);
lean_ctor_set(v___x_1458_, 5, v___f_1452_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default___redArg(lean_object* v_inst_1459_){
_start:
{
lean_object* v___f_1460_; lean_object* v___f_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___f_1460_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__1));
v___f_1461_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1461_, 0, v_inst_1459_);
v___f_1462_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__2));
v___f_1463_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__3));
v___x_1464_ = lean_box(0);
v___x_1465_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__5));
v___x_1466_ = ((lean_object*)(l_Lean_ScopedEnvExtension_instInhabitedDescr___redArg___closed__6));
v___x_1467_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1464_);
lean_ctor_set(v___x_1467_, 1, v___x_1465_);
lean_ctor_set(v___x_1467_, 2, v___f_1460_);
lean_ctor_set(v___x_1467_, 3, v___f_1461_);
lean_ctor_set(v___x_1467_, 4, v___f_1462_);
lean_ctor_set(v___x_1467_, 5, v___x_1466_);
lean_ctor_set(v___x_1467_, 6, v___f_1463_);
v___x_1468_ = lean_obj_once(&l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5, &l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5_once, _init_l_Lean_instInhabitedScopedEnvExtension_default___redArg___closed__5);
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1467_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension_default(lean_object* v_00_u03b1_1470_, lean_object* v_00_u03b2_1471_, lean_object* v_00_u03c3_1472_, lean_object* v_inst_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension___redArg(lean_object* v_inst_1475_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedScopedEnvExtension(lean_object* v_a_1477_, lean_object* v_inst_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lean_instInhabitedScopedEnvExtension_default___redArg(v_inst_1478_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1485_ = ((lean_object*)(l___private_Lean_ScopedEnvExtension_0__Lean_initFn___closed__0_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_));
v___x_1486_ = lean_st_mk_ref(v___x_1485_);
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2____boxed(lean_object* v___y_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(lean_object* v_s_1493_){
_start:
{
lean_object* v_newEntries_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v_newEntries_1494_ = lean_ctor_get(v_s_1493_, 2);
v___x_1495_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___closed__1));
v___x_1496_ = l_List_lengthTR___redArg(v_newEntries_1494_);
v___x_1497_ = l_Nat_reprFast(v___x_1496_);
v___x_1498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1495_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0___boxed(lean_object* v_s_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__0(v_s_1500_);
lean_dec_ref(v_s_1500_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(lean_object* v_x_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = ((lean_object*)(l_Lean_ScopedEnvExtension_exportEntriesFn___redArg___closed__0));
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1___boxed(lean_object* v_x_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg___lam__1(v_x_1504_);
lean_dec_ref(v_x_1504_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object* v_descr_1508_){
_start:
{
lean_object* v_name_1510_; lean_object* v___f_1511_; lean_object* v___f_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_name_1510_ = lean_ctor_get(v_descr_1508_, 0);
v___f_1511_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__0));
v___f_1512_ = ((lean_object*)(l_Lean_registerScopedEnvExtensionUnsafe___redArg___closed__1));
lean_inc_ref_n(v_descr_1508_, 4);
v___x_1513_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_mkInitial___boxed), 5, 4);
lean_closure_set(v___x_1513_, 0, lean_box(0));
lean_closure_set(v___x_1513_, 1, lean_box(0));
lean_closure_set(v___x_1513_, 2, lean_box(0));
lean_closure_set(v___x_1513_, 3, v_descr_1508_);
v___x_1514_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addImportedFn___boxed), 7, 4);
lean_closure_set(v___x_1514_, 0, lean_box(0));
lean_closure_set(v___x_1514_, 1, lean_box(0));
lean_closure_set(v___x_1514_, 2, lean_box(0));
lean_closure_set(v___x_1514_, 3, v_descr_1508_);
v___x_1515_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addEntryFn), 6, 4);
lean_closure_set(v___x_1515_, 0, lean_box(0));
lean_closure_set(v___x_1515_, 1, lean_box(0));
lean_closure_set(v___x_1515_, 2, lean_box(0));
lean_closure_set(v___x_1515_, 3, v_descr_1508_);
v___x_1516_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_exportEntriesFn), 6, 4);
lean_closure_set(v___x_1516_, 0, lean_box(0));
lean_closure_set(v___x_1516_, 1, lean_box(0));
lean_closure_set(v___x_1516_, 2, lean_box(0));
lean_closure_set(v___x_1516_, 3, v_descr_1508_);
v___x_1517_ = lean_box(2);
v___x_1518_ = lean_box(0);
lean_inc(v_name_1510_);
v___x_1519_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1519_, 0, v_name_1510_);
lean_ctor_set(v___x_1519_, 1, v___x_1513_);
lean_ctor_set(v___x_1519_, 2, v___x_1514_);
lean_ctor_set(v___x_1519_, 3, v___x_1515_);
lean_ctor_set(v___x_1519_, 4, v___x_1516_);
lean_ctor_set(v___x_1519_, 5, v___f_1511_);
lean_ctor_set(v___x_1519_, 6, v___x_1517_);
lean_ctor_set(v___x_1519_, 7, v___x_1518_);
v___x_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
lean_ctor_set(v___x_1520_, 1, v___f_1512_);
v___x_1521_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1520_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1534_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1524_ = v___x_1521_;
v_isShared_1525_ = v_isSharedCheck_1534_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1521_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1534_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_descr_1508_);
lean_ctor_set(v___x_1526_, 1, v_a_1522_);
v___x_1527_ = l_Lean_scopedEnvExtensionsRef;
v___x_1528_ = lean_st_ref_take(v___x_1527_);
lean_inc_ref(v___x_1526_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1526_);
v___x_1530_ = lean_st_ref_put(v___x_1527_, v___x_1529_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1526_);
v___x_1532_ = v___x_1524_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1526_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref(v_descr_1508_);
v_a_1535_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1521_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1521_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
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
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg___boxed(lean_object* v_descr_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v_descr_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe(lean_object* v_00_u03b1_1546_, lean_object* v_00_u03b2_1547_, lean_object* v_00_u03c3_1548_, lean_object* v_descr_1549_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v_descr_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerScopedEnvExtensionUnsafe___boxed(lean_object* v_00_u03b1_1552_, lean_object* v_00_u03b2_1553_, lean_object* v_00_u03c3_1554_, lean_object* v_descr_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_registerScopedEnvExtensionUnsafe(v_00_u03b1_1552_, v_00_u03b2_1553_, v_00_u03c3_1554_, v_descr_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg___lam__0(lean_object* v_s_1558_){
_start:
{
lean_object* v_stateStack_1559_; 
v_stateStack_1559_ = lean_ctor_get(v_s_1558_, 0);
if (lean_obj_tag(v_stateStack_1559_) == 0)
{
return v_s_1558_;
}
else
{
lean_object* v_head_1560_; lean_object* v_scopedEntries_1561_; lean_object* v_newEntries_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1580_; 
lean_inc_ref(v_stateStack_1559_);
v_head_1560_ = lean_ctor_get(v_stateStack_1559_, 0);
lean_inc(v_head_1560_);
v_scopedEntries_1561_ = lean_ctor_get(v_s_1558_, 1);
v_newEntries_1562_ = lean_ctor_get(v_s_1558_, 2);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_s_1558_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; 
v_unused_1581_ = lean_ctor_get(v_s_1558_, 0);
lean_dec(v_unused_1581_);
v___x_1564_ = v_s_1558_;
v_isShared_1565_ = v_isSharedCheck_1580_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_newEntries_1562_);
lean_inc(v_scopedEntries_1561_);
lean_dec(v_s_1558_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1580_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v_state_1566_; lean_object* v_activeScopes_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1579_; 
v_state_1566_ = lean_ctor_get(v_head_1560_, 0);
v_activeScopes_1567_ = lean_ctor_get(v_head_1560_, 1);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_head_1560_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1569_ = v_head_1560_;
v_isShared_1570_ = v_isSharedCheck_1579_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_activeScopes_1567_);
lean_inc(v_state_1566_);
lean_dec(v_head_1560_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1579_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
uint8_t v___x_1571_; lean_object* v___x_1573_; 
v___x_1571_ = 1;
if (v_isShared_1570_ == 0)
{
v___x_1573_ = v___x_1569_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_state_1566_);
lean_ctor_set(v_reuseFailAlloc_1578_, 1, v_activeScopes_1567_);
v___x_1573_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
lean_ctor_set_uint8(v___x_1573_, sizeof(void*)*2, v___x_1571_);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v_stateStack_1559_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v___x_1574_);
v___x_1576_ = v___x_1564_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_scopedEntries_1561_);
lean_ctor_set(v_reuseFailAlloc_1577_, 2, v_newEntries_1562_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object* v_ext_1583_, lean_object* v_env_1584_){
_start:
{
lean_object* v_ext_1585_; lean_object* v___f_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_ext_1585_ = lean_ctor_get(v_ext_1583_, 1);
lean_inc_ref(v_ext_1585_);
lean_dec_ref(v_ext_1583_);
v___f_1586_ = ((lean_object*)(l_Lean_ScopedEnvExtension_pushScope___redArg___closed__0));
v___x_1587_ = lean_box(1);
v___x_1588_ = lean_box(0);
v___x_1589_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1585_, v_env_1584_, v___f_1586_, v___x_1587_, v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object* v_00_u03b1_1590_, lean_object* v_00_u03b2_1591_, lean_object* v_00_u03c3_1592_, lean_object* v_ext_1593_, lean_object* v_env_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_ScopedEnvExtension_pushScope___redArg(v_ext_1593_, v_env_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg___lam__0(lean_object* v_s_1596_){
_start:
{
lean_object* v_stateStack_1597_; 
v_stateStack_1597_ = lean_ctor_get(v_s_1596_, 0);
if (lean_obj_tag(v_stateStack_1597_) == 1)
{
lean_object* v_tail_1598_; 
v_tail_1598_ = lean_ctor_get(v_stateStack_1597_, 1);
if (lean_obj_tag(v_tail_1598_) == 1)
{
lean_object* v_scopedEntries_1599_; lean_object* v_newEntries_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_inc_ref(v_tail_1598_);
v_scopedEntries_1599_ = lean_ctor_get(v_s_1596_, 1);
v_newEntries_1600_ = lean_ctor_get(v_s_1596_, 2);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_s_1596_);
if (v_isSharedCheck_1607_ == 0)
{
lean_object* v_unused_1608_; 
v_unused_1608_ = lean_ctor_get(v_s_1596_, 0);
lean_dec(v_unused_1608_);
v___x_1602_ = v_s_1596_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_newEntries_1600_);
lean_inc(v_scopedEntries_1599_);
lean_dec(v_s_1596_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v_tail_1598_);
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_tail_1598_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_scopedEntries_1599_);
lean_ctor_set(v_reuseFailAlloc_1606_, 2, v_newEntries_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
else
{
return v_s_1596_;
}
}
else
{
return v_s_1596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object* v_ext_1610_, lean_object* v_env_1611_){
_start:
{
lean_object* v_ext_1612_; lean_object* v___f_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v_ext_1612_ = lean_ctor_get(v_ext_1610_, 1);
lean_inc_ref(v_ext_1612_);
lean_dec_ref(v_ext_1610_);
v___f_1613_ = ((lean_object*)(l_Lean_ScopedEnvExtension_popScope___redArg___closed__0));
v___x_1614_ = lean_box(1);
v___x_1615_ = lean_box(0);
v___x_1616_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1612_, v_env_1611_, v___f_1613_, v___x_1614_, v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object* v_00_u03b1_1617_, lean_object* v_00_u03b2_1618_, lean_object* v_00_u03c3_1619_, lean_object* v_ext_1620_, lean_object* v_env_1621_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_ScopedEnvExtension_popScope___redArg(v_ext_1620_, v_env_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_zero_1625_; uint8_t v_isZero_1626_; 
v_zero_1625_ = lean_unsigned_to_nat(0u);
v_isZero_1626_ = lean_nat_dec_eq(v_a_1623_, v_zero_1625_);
if (v_isZero_1626_ == 1)
{
return v_a_1624_;
}
else
{
if (lean_obj_tag(v_a_1624_) == 0)
{
return v_a_1624_;
}
else
{
lean_object* v_head_1627_; lean_object* v_tail_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1647_; 
v_head_1627_ = lean_ctor_get(v_a_1624_, 0);
v_tail_1628_ = lean_ctor_get(v_a_1624_, 1);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_a_1624_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1630_ = v_a_1624_;
v_isShared_1631_ = v_isSharedCheck_1647_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_tail_1628_);
lean_inc(v_head_1627_);
lean_dec(v_a_1624_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1647_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v_state_1632_; lean_object* v_activeScopes_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1646_; 
v_state_1632_ = lean_ctor_get(v_head_1627_, 0);
v_activeScopes_1633_ = lean_ctor_get(v_head_1627_, 1);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_head_1627_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1635_ = v_head_1627_;
v_isShared_1636_ = v_isSharedCheck_1646_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_activeScopes_1633_);
lean_inc(v_state_1632_);
lean_dec(v_head_1627_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1646_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v_one_1637_; lean_object* v_n_1638_; lean_object* v___x_1640_; 
v_one_1637_ = lean_unsigned_to_nat(1u);
v_n_1638_ = lean_nat_sub(v_a_1623_, v_one_1637_);
if (v_isShared_1636_ == 0)
{
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_state_1632_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_activeScopes_1633_);
v___x_1640_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
lean_ctor_set_uint8(v___x_1640_, sizeof(void*)*2, v_isZero_1626_);
v___x_1641_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_n_1638_, v_tail_1628_);
lean_dec(v_n_1638_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 1, v___x_1641_);
lean_ctor_set(v___x_1630_, 0, v___x_1640_);
v___x_1643_ = v___x_1630_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1640_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg___boxed(lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_a_1648_, v_a_1649_);
lean_dec(v_a_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(lean_object* v_00_u03c3_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_a_1652_, v_a_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___boxed(lean_object* v_00_u03c3_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go(v_00_u03c3_1655_, v_a_1656_, v_a_1657_);
lean_dec(v_a_1656_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(lean_object* v_depth_1659_, lean_object* v_s_1660_){
_start:
{
lean_object* v_stateStack_1661_; lean_object* v_scopedEntries_1662_; lean_object* v_newEntries_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1671_; 
v_stateStack_1661_ = lean_ctor_get(v_s_1660_, 0);
v_scopedEntries_1662_ = lean_ctor_get(v_s_1660_, 1);
v_newEntries_1663_ = lean_ctor_get(v_s_1660_, 2);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_s_1660_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1665_ = v_s_1660_;
v_isShared_1666_ = v_isSharedCheck_1671_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_newEntries_1663_);
lean_inc(v_scopedEntries_1662_);
lean_inc(v_stateStack_1661_);
lean_dec(v_s_1660_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1671_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1667_ = l___private_Lean_ScopedEnvExtension_0__Lean_ScopedEnvExtension_setDelimitsLocal_go___redArg(v_depth_1659_, v_stateStack_1661_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1667_);
v___x_1669_ = v___x_1665_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_scopedEntries_1662_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_newEntries_1663_);
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
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed(lean_object* v_depth_1672_, lean_object* v_s_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0(v_depth_1672_, v_s_1673_);
lean_dec(v_depth_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(lean_object* v_ext_1675_, lean_object* v_env_1676_, lean_object* v_depth_1677_){
_start:
{
lean_object* v_ext_1678_; lean_object* v___f_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v_ext_1678_ = lean_ctor_get(v_ext_1675_, 1);
lean_inc_ref(v_ext_1678_);
lean_dec_ref(v_ext_1675_);
v___f_1679_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1679_, 0, v_depth_1677_);
v___x_1680_ = lean_box(1);
v___x_1681_ = lean_box(0);
v___x_1682_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1678_, v_env_1676_, v___f_1679_, v___x_1680_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_setDelimitsLocal(lean_object* v_00_u03b1_1683_, lean_object* v_00_u03b2_1684_, lean_object* v_00_u03c3_1685_, lean_object* v_ext_1686_, lean_object* v_env_1687_, lean_object* v_depth_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(v_ext_1686_, v_env_1687_, v_depth_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object* v_ext_1690_, lean_object* v_env_1691_, lean_object* v_b_1692_){
_start:
{
lean_object* v_ext_1693_; lean_object* v_toEnvExtension_1694_; lean_object* v_asyncMode_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v_ext_1693_ = lean_ctor_get(v_ext_1690_, 1);
lean_inc_ref(v_ext_1693_);
lean_dec_ref(v_ext_1690_);
v_toEnvExtension_1694_ = lean_ctor_get(v_ext_1693_, 0);
v_asyncMode_1695_ = lean_ctor_get(v_toEnvExtension_1694_, 2);
lean_inc(v_asyncMode_1695_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_b_1692_);
v___x_1697_ = lean_box(0);
v___x_1698_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_1693_, v_env_1691_, v___x_1696_, v_asyncMode_1695_, v___x_1697_);
lean_dec(v_asyncMode_1695_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addEntry(lean_object* v_00_u03b1_1699_, lean_object* v_00_u03b2_1700_, lean_object* v_00_u03c3_1701_, lean_object* v_ext_1702_, lean_object* v_env_1703_, lean_object* v_b_1704_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v_ext_1702_, v_env_1703_, v_b_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry___redArg(lean_object* v_ext_1706_, lean_object* v_env_1707_, lean_object* v_namespaceName_1708_, lean_object* v_b_1709_){
_start:
{
lean_object* v_ext_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1721_; 
v_ext_1710_ = lean_ctor_get(v_ext_1706_, 1);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_ext_1706_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v_ext_1706_, 0);
lean_dec(v_unused_1722_);
v___x_1712_ = v_ext_1706_;
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_ext_1710_);
lean_dec(v_ext_1706_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v_toEnvExtension_1714_; lean_object* v_asyncMode_1715_; lean_object* v___x_1717_; 
v_toEnvExtension_1714_ = lean_ctor_get(v_ext_1710_, 0);
v_asyncMode_1715_ = lean_ctor_get(v_toEnvExtension_1714_, 2);
lean_inc(v_asyncMode_1715_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 1);
lean_ctor_set(v___x_1712_, 1, v_b_1709_);
lean_ctor_set(v___x_1712_, 0, v_namespaceName_1708_);
v___x_1717_ = v___x_1712_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_namespaceName_1708_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_b_1709_);
v___x_1717_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = lean_box(0);
v___x_1719_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_1710_, v_env_1707_, v___x_1717_, v_asyncMode_1715_, v___x_1718_);
lean_dec(v_asyncMode_1715_);
return v___x_1719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addScopedEntry(lean_object* v_00_u03b1_1723_, lean_object* v_00_u03b2_1724_, lean_object* v_00_u03c3_1725_, lean_object* v_ext_1726_, lean_object* v_env_1727_, lean_object* v_namespaceName_1728_, lean_object* v_b_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_ScopedEnvExtension_addScopedEntry___redArg(v_ext_1726_, v_env_1727_, v_namespaceName_1728_, v_b_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_stateStackModify___redArg(lean_object* v_ext_1731_, lean_object* v_states_1732_, lean_object* v_b_1733_){
_start:
{
if (lean_obj_tag(v_states_1732_) == 0)
{
lean_dec(v_b_1733_);
lean_dec_ref(v_ext_1731_);
return v_states_1732_;
}
else
{
lean_object* v_descr_1734_; lean_object* v_head_1735_; lean_object* v_tail_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1759_; 
v_descr_1734_ = lean_ctor_get(v_ext_1731_, 0);
v_head_1735_ = lean_ctor_get(v_states_1732_, 0);
v_tail_1736_ = lean_ctor_get(v_states_1732_, 1);
v_isSharedCheck_1759_ = !lean_is_exclusive(v_states_1732_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1738_ = v_states_1732_;
v_isShared_1739_ = v_isSharedCheck_1759_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_tail_1736_);
lean_inc(v_head_1735_);
lean_dec(v_states_1732_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1759_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_addEntry_1740_; lean_object* v_state_1741_; lean_object* v_activeScopes_1742_; uint8_t v_delimitsLocal_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1758_; 
v_addEntry_1740_ = lean_ctor_get(v_descr_1734_, 4);
v_state_1741_ = lean_ctor_get(v_head_1735_, 0);
v_activeScopes_1742_ = lean_ctor_get(v_head_1735_, 1);
v_delimitsLocal_1743_ = lean_ctor_get_uint8(v_head_1735_, sizeof(void*)*2);
v_isSharedCheck_1758_ = !lean_is_exclusive(v_head_1735_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1745_ = v_head_1735_;
v_isShared_1746_ = v_isSharedCheck_1758_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_activeScopes_1742_);
lean_inc(v_state_1741_);
lean_dec(v_head_1735_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1758_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v_top_1749_; 
lean_inc(v_addEntry_1740_);
lean_inc(v_b_1733_);
v___x_1747_ = lean_apply_2(v_addEntry_1740_, v_state_1741_, v_b_1733_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1747_);
v_top_1749_ = v___x_1745_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1747_);
lean_ctor_set(v_reuseFailAlloc_1757_, 1, v_activeScopes_1742_);
lean_ctor_set_uint8(v_reuseFailAlloc_1757_, sizeof(void*)*2, v_delimitsLocal_1743_);
v_top_1749_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
if (v_delimitsLocal_1743_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1750_ = l_Lean_stateStackModify___redArg(v_ext_1731_, v_tail_1736_, v_b_1733_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v___x_1750_);
lean_ctor_set(v___x_1738_, 0, v_top_1749_);
v___x_1752_ = v___x_1738_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_top_1749_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
else
{
lean_object* v___x_1755_; 
lean_dec(v_b_1733_);
lean_dec_ref(v_ext_1731_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v_top_1749_);
v___x_1755_ = v___x_1738_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_top_1749_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_tail_1736_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_stateStackModify(lean_object* v_00_u03b1_1760_, lean_object* v_00_u03b2_1761_, lean_object* v_00_u03c3_1762_, lean_object* v_ext_1763_, lean_object* v_states_1764_, lean_object* v_b_1765_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_stateStackModify___redArg(v_ext_1763_, v_states_1764_, v_b_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0(lean_object* v_ext_1767_, lean_object* v_b_1768_, lean_object* v_s_1769_){
_start:
{
lean_object* v_stateStack_1770_; lean_object* v_scopedEntries_1771_; lean_object* v_newEntries_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1780_; 
v_stateStack_1770_ = lean_ctor_get(v_s_1769_, 0);
v_scopedEntries_1771_ = lean_ctor_get(v_s_1769_, 1);
v_newEntries_1772_ = lean_ctor_get(v_s_1769_, 2);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_s_1769_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1774_ = v_s_1769_;
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_newEntries_1772_);
lean_inc(v_scopedEntries_1771_);
lean_inc(v_stateStack_1770_);
lean_dec(v_s_1769_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1776_ = l_Lean_stateStackModify___redArg(v_ext_1767_, v_stateStack_1770_, v_b_1768_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1776_);
v___x_1778_ = v___x_1774_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_scopedEntries_1771_);
lean_ctor_set(v_reuseFailAlloc_1779_, 2, v_newEntries_1772_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___redArg(lean_object* v_ext_1781_, lean_object* v_env_1782_, lean_object* v_b_1783_){
_start:
{
lean_object* v_ext_1784_; lean_object* v___f_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_ext_1784_ = lean_ctor_get(v_ext_1781_, 1);
lean_inc_ref(v_ext_1784_);
v___f_1785_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_addLocalEntry___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1785_, 0, v_ext_1781_);
lean_closure_set(v___f_1785_, 1, v_b_1783_);
v___x_1786_ = lean_box(1);
v___x_1787_ = lean_box(0);
v___x_1788_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_1784_, v_env_1782_, v___f_1785_, v___x_1786_, v___x_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addLocalEntry(lean_object* v_00_u03b1_1789_, lean_object* v_00_u03b2_1790_, lean_object* v_00_u03c3_1791_, lean_object* v_ext_1792_, lean_object* v_env_1793_, lean_object* v_b_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_ScopedEnvExtension_addLocalEntry___redArg(v_ext_1792_, v_env_1793_, v_b_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object* v_env_1796_, lean_object* v_ext_1797_, lean_object* v_b_1798_, uint8_t v_kind_1799_, lean_object* v_namespaceName_1800_){
_start:
{
switch(v_kind_1799_)
{
case 0:
{
lean_object* v___x_1801_; 
lean_dec(v_namespaceName_1800_);
v___x_1801_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v_ext_1797_, v_env_1796_, v_b_1798_);
return v___x_1801_;
}
case 1:
{
lean_object* v___x_1802_; 
lean_dec(v_namespaceName_1800_);
v___x_1802_ = l_Lean_ScopedEnvExtension_addLocalEntry___redArg(v_ext_1797_, v_env_1796_, v_b_1798_);
return v___x_1802_;
}
default: 
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_ScopedEnvExtension_addScopedEntry___redArg(v_ext_1797_, v_env_1796_, v_namespaceName_1800_, v_b_1798_);
return v___x_1803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___redArg___boxed(lean_object* v_env_1804_, lean_object* v_ext_1805_, lean_object* v_b_1806_, lean_object* v_kind_1807_, lean_object* v_namespaceName_1808_){
_start:
{
uint8_t v_kind_boxed_1809_; lean_object* v_res_1810_; 
v_kind_boxed_1809_ = lean_unbox(v_kind_1807_);
v_res_1810_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1804_, v_ext_1805_, v_b_1806_, v_kind_boxed_1809_, v_namespaceName_1808_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore(lean_object* v_00_u03b1_1811_, lean_object* v_00_u03b2_1812_, lean_object* v_00_u03c3_1813_, lean_object* v_env_1814_, lean_object* v_ext_1815_, lean_object* v_b_1816_, uint8_t v_kind_1817_, lean_object* v_namespaceName_1818_){
_start:
{
lean_object* v___x_1819_; 
v___x_1819_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1814_, v_ext_1815_, v_b_1816_, v_kind_1817_, v_namespaceName_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_addCore___boxed(lean_object* v_00_u03b1_1820_, lean_object* v_00_u03b2_1821_, lean_object* v_00_u03c3_1822_, lean_object* v_env_1823_, lean_object* v_ext_1824_, lean_object* v_b_1825_, lean_object* v_kind_1826_, lean_object* v_namespaceName_1827_){
_start:
{
uint8_t v_kind_boxed_1828_; lean_object* v_res_1829_; 
v_kind_boxed_1828_ = lean_unbox(v_kind_1826_);
v_res_1829_ = l_Lean_ScopedEnvExtension_addCore(v_00_u03b1_1820_, v_00_u03b2_1821_, v_00_u03c3_1822_, v_env_1823_, v_ext_1824_, v_b_1825_, v_kind_boxed_1828_, v_namespaceName_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0(lean_object* v_ext_1830_, lean_object* v_b_1831_, uint8_t v_kind_1832_, lean_object* v_ns_1833_, lean_object* v_x_1834_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_x_1834_, v_ext_1830_, v_b_1831_, v_kind_1832_, v_ns_1833_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed(lean_object* v_ext_1836_, lean_object* v_b_1837_, lean_object* v_kind_1838_, lean_object* v_ns_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v_kind_boxed_1841_; lean_object* v_res_1842_; 
v_kind_boxed_1841_ = lean_unbox(v_kind_1838_);
v_res_1842_ = l_Lean_ScopedEnvExtension_add___redArg___lam__0(v_ext_1836_, v_b_1837_, v_kind_boxed_1841_, v_ns_1839_, v_x_1840_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1(lean_object* v_inst_1843_, lean_object* v_ext_1844_, lean_object* v_b_1845_, uint8_t v_kind_1846_, lean_object* v_ns_1847_){
_start:
{
lean_object* v_modifyEnv_1848_; lean_object* v___x_1849_; lean_object* v___f_1850_; lean_object* v___x_1851_; 
v_modifyEnv_1848_ = lean_ctor_get(v_inst_1843_, 1);
lean_inc(v_modifyEnv_1848_);
lean_dec_ref(v_inst_1843_);
v___x_1849_ = lean_box(v_kind_1846_);
v___f_1850_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_add___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1850_, 0, v_ext_1844_);
lean_closure_set(v___f_1850_, 1, v_b_1845_);
lean_closure_set(v___f_1850_, 2, v___x_1849_);
lean_closure_set(v___f_1850_, 3, v_ns_1847_);
v___x_1851_ = lean_apply_1(v_modifyEnv_1848_, v___f_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed(lean_object* v_inst_1852_, lean_object* v_ext_1853_, lean_object* v_b_1854_, lean_object* v_kind_1855_, lean_object* v_ns_1856_){
_start:
{
uint8_t v_kind_boxed_1857_; lean_object* v_res_1858_; 
v_kind_boxed_1857_ = lean_unbox(v_kind_1855_);
v_res_1858_ = l_Lean_ScopedEnvExtension_add___redArg___lam__1(v_inst_1852_, v_ext_1853_, v_b_1854_, v_kind_boxed_1857_, v_ns_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg(lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_inst_1861_, lean_object* v_ext_1862_, lean_object* v_b_1863_, uint8_t v_kind_1864_){
_start:
{
lean_object* v_toBind_1865_; lean_object* v_getCurrNamespace_1866_; lean_object* v___x_1867_; lean_object* v___f_1868_; lean_object* v___x_1869_; 
v_toBind_1865_ = lean_ctor_get(v_inst_1859_, 1);
lean_inc(v_toBind_1865_);
lean_dec_ref(v_inst_1859_);
v_getCurrNamespace_1866_ = lean_ctor_get(v_inst_1860_, 0);
lean_inc(v_getCurrNamespace_1866_);
lean_dec_ref(v_inst_1860_);
v___x_1867_ = lean_box(v_kind_1864_);
v___f_1868_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_add___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_1868_, 0, v_inst_1861_);
lean_closure_set(v___f_1868_, 1, v_ext_1862_);
lean_closure_set(v___f_1868_, 2, v_b_1863_);
lean_closure_set(v___f_1868_, 3, v___x_1867_);
v___x_1869_ = lean_apply_4(v_toBind_1865_, lean_box(0), lean_box(0), v_getCurrNamespace_1866_, v___f_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___redArg___boxed(lean_object* v_inst_1870_, lean_object* v_inst_1871_, lean_object* v_inst_1872_, lean_object* v_ext_1873_, lean_object* v_b_1874_, lean_object* v_kind_1875_){
_start:
{
uint8_t v_kind_boxed_1876_; lean_object* v_res_1877_; 
v_kind_boxed_1876_ = lean_unbox(v_kind_1875_);
v_res_1877_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_1870_, v_inst_1871_, v_inst_1872_, v_ext_1873_, v_b_1874_, v_kind_boxed_1876_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add(lean_object* v_m_1878_, lean_object* v_00_u03b1_1879_, lean_object* v_00_u03b2_1880_, lean_object* v_00_u03c3_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_ext_1885_, lean_object* v_b_1886_, uint8_t v_kind_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lean_ScopedEnvExtension_add___redArg(v_inst_1882_, v_inst_1883_, v_inst_1884_, v_ext_1885_, v_b_1886_, v_kind_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___boxed(lean_object* v_m_1889_, lean_object* v_00_u03b1_1890_, lean_object* v_00_u03b2_1891_, lean_object* v_00_u03c3_1892_, lean_object* v_inst_1893_, lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_ext_1896_, lean_object* v_b_1897_, lean_object* v_kind_1898_){
_start:
{
uint8_t v_kind_boxed_1899_; lean_object* v_res_1900_; 
v_kind_boxed_1899_ = lean_unbox(v_kind_1898_);
v_res_1900_ = l_Lean_ScopedEnvExtension_add(v_m_1889_, v_00_u03b1_1890_, v_00_u03b2_1891_, v_00_u03c3_1892_, v_inst_1893_, v_inst_1894_, v_inst_1895_, v_ext_1896_, v_b_1897_, v_kind_boxed_1899_);
return v_res_1900_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_getState___redArg___closed__3(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1904_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__2));
v___x_1905_ = lean_unsigned_to_nat(16u);
v___x_1906_ = lean_unsigned_to_nat(209u);
v___x_1907_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__1));
v___x_1908_ = ((lean_object*)(l_Lean_ScopedEnvExtension_getState___redArg___closed__0));
v___x_1909_ = l_mkPanicMessageWithDecl(v___x_1908_, v___x_1907_, v___x_1906_, v___x_1905_, v___x_1904_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object* v_inst_1910_, lean_object* v_ext_1911_, lean_object* v_env_1912_, lean_object* v_asyncMode_1913_){
_start:
{
lean_object* v_ext_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v_stateStack_1918_; 
v_ext_1914_ = lean_ctor_get(v_ext_1911_, 1);
v___x_1915_ = lean_obj_once(&l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0, &l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0_once, _init_l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___closed__0);
v___x_1916_ = lean_box(0);
v___x_1917_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1915_, v_ext_1914_, v_env_1912_, v_asyncMode_1913_, v___x_1916_);
v_stateStack_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_stateStack_1918_);
lean_dec(v___x_1917_);
if (lean_obj_tag(v_stateStack_1918_) == 1)
{
lean_object* v_head_1919_; lean_object* v_state_1920_; 
v_head_1919_ = lean_ctor_get(v_stateStack_1918_, 0);
lean_inc(v_head_1919_);
lean_dec_ref_known(v_stateStack_1918_, 2);
v_state_1920_ = lean_ctor_get(v_head_1919_, 0);
lean_inc(v_state_1920_);
lean_dec(v_head_1919_);
return v_state_1920_;
}
else
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
lean_dec(v_stateStack_1918_);
v___x_1921_ = lean_obj_once(&l_Lean_ScopedEnvExtension_getState___redArg___closed__3, &l_Lean_ScopedEnvExtension_getState___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_getState___redArg___closed__3);
v___x_1922_ = l_panic___redArg(v_inst_1910_, v___x_1921_);
return v___x_1922_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___redArg___boxed(lean_object* v_inst_1923_, lean_object* v_ext_1924_, lean_object* v_env_1925_, lean_object* v_asyncMode_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_ScopedEnvExtension_getState___redArg(v_inst_1923_, v_ext_1924_, v_env_1925_, v_asyncMode_1926_);
lean_dec(v_asyncMode_1926_);
lean_dec_ref(v_ext_1924_);
lean_dec(v_inst_1923_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState(lean_object* v_00_u03c3_1928_, lean_object* v_00_u03b1_1929_, lean_object* v_00_u03b2_1930_, lean_object* v_inst_1931_, lean_object* v_ext_1932_, lean_object* v_env_1933_, lean_object* v_asyncMode_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_ScopedEnvExtension_getState___redArg(v_inst_1931_, v_ext_1932_, v_env_1933_, v_asyncMode_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_getState___boxed(lean_object* v_00_u03c3_1936_, lean_object* v_00_u03b1_1937_, lean_object* v_00_u03b2_1938_, lean_object* v_inst_1939_, lean_object* v_ext_1940_, lean_object* v_env_1941_, lean_object* v_asyncMode_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_ScopedEnvExtension_getState(v_00_u03c3_1936_, v_00_u03b1_1937_, v_00_u03b2_1938_, v_inst_1939_, v_ext_1940_, v_env_1941_, v_asyncMode_1942_);
lean_dec(v_asyncMode_1942_);
lean_dec_ref(v_ext_1940_);
lean_dec(v_inst_1939_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_ext_1944_, lean_object* v_as_1945_, size_t v_sz_1946_, size_t v_i_1947_, lean_object* v_b_1948_){
_start:
{
uint8_t v___x_1949_; 
v___x_1949_ = lean_usize_dec_lt(v_i_1947_, v_sz_1946_);
if (v___x_1949_ == 0)
{
lean_dec_ref(v_ext_1944_);
return v_b_1948_;
}
else
{
lean_object* v_descr_1950_; lean_object* v_snd_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1965_; 
v_descr_1950_ = lean_ctor_get(v_ext_1944_, 0);
v_snd_1951_ = lean_ctor_get(v_b_1948_, 1);
v_isSharedCheck_1965_ = !lean_is_exclusive(v_b_1948_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; 
v_unused_1966_ = lean_ctor_get(v_b_1948_, 0);
lean_dec(v_unused_1966_);
v___x_1953_ = v_b_1948_;
v_isShared_1954_ = v_isSharedCheck_1965_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_snd_1951_);
lean_dec(v_b_1948_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1965_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v_addEntry_1955_; lean_object* v___x_1956_; lean_object* v_a_1957_; lean_object* v_state_1958_; lean_object* v___x_1960_; 
v_addEntry_1955_ = lean_ctor_get(v_descr_1950_, 4);
v___x_1956_ = lean_box(0);
v_a_1957_ = lean_array_uget_borrowed(v_as_1945_, v_i_1947_);
lean_inc(v_addEntry_1955_);
lean_inc(v_a_1957_);
v_state_1958_ = lean_apply_2(v_addEntry_1955_, v_snd_1951_, v_a_1957_);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 1, v_state_1958_);
lean_ctor_set(v___x_1953_, 0, v___x_1956_);
v___x_1960_ = v___x_1953_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1956_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v_state_1958_);
v___x_1960_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
size_t v___x_1961_; size_t v___x_1962_; 
v___x_1961_ = ((size_t)1ULL);
v___x_1962_ = lean_usize_add(v_i_1947_, v___x_1961_);
v_i_1947_ = v___x_1962_;
v_b_1948_ = v___x_1960_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_ext_1967_, lean_object* v_as_1968_, lean_object* v_sz_1969_, lean_object* v_i_1970_, lean_object* v_b_1971_){
_start:
{
size_t v_sz_boxed_1972_; size_t v_i_boxed_1973_; lean_object* v_res_1974_; 
v_sz_boxed_1972_ = lean_unbox_usize(v_sz_1969_);
lean_dec(v_sz_1969_);
v_i_boxed_1973_ = lean_unbox_usize(v_i_1970_);
lean_dec(v_i_1970_);
v_res_1974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_1967_, v_as_1968_, v_sz_boxed_1972_, v_i_boxed_1973_, v_b_1971_);
lean_dec_ref(v_as_1968_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(lean_object* v_ext_1975_, lean_object* v_as_1976_, size_t v_sz_1977_, size_t v_i_1978_, lean_object* v_b_1979_){
_start:
{
uint8_t v___x_1980_; 
v___x_1980_ = lean_usize_dec_lt(v_i_1978_, v_sz_1977_);
if (v___x_1980_ == 0)
{
lean_dec_ref(v_ext_1975_);
return v_b_1979_;
}
else
{
lean_object* v_descr_1981_; lean_object* v_snd_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1996_; 
v_descr_1981_ = lean_ctor_get(v_ext_1975_, 0);
v_snd_1982_ = lean_ctor_get(v_b_1979_, 1);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_b_1979_);
if (v_isSharedCheck_1996_ == 0)
{
lean_object* v_unused_1997_; 
v_unused_1997_ = lean_ctor_get(v_b_1979_, 0);
lean_dec(v_unused_1997_);
v___x_1984_ = v_b_1979_;
v_isShared_1985_ = v_isSharedCheck_1996_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_snd_1982_);
lean_dec(v_b_1979_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1996_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v_addEntry_1986_; lean_object* v___x_1987_; lean_object* v_a_1988_; lean_object* v_state_1989_; lean_object* v___x_1991_; 
v_addEntry_1986_ = lean_ctor_get(v_descr_1981_, 4);
v___x_1987_ = lean_box(0);
v_a_1988_ = lean_array_uget_borrowed(v_as_1976_, v_i_1978_);
lean_inc(v_addEntry_1986_);
lean_inc(v_a_1988_);
v_state_1989_ = lean_apply_2(v_addEntry_1986_, v_snd_1982_, v_a_1988_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v_state_1989_);
lean_ctor_set(v___x_1984_, 0, v___x_1987_);
v___x_1991_ = v___x_1984_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_state_1989_);
v___x_1991_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
size_t v___x_1992_; size_t v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = ((size_t)1ULL);
v___x_1993_ = lean_usize_add(v_i_1978_, v___x_1992_);
v___x_1994_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_1975_, v_as_1976_, v_sz_1977_, v___x_1993_, v___x_1991_);
return v___x_1994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ext_1998_, lean_object* v_as_1999_, lean_object* v_sz_2000_, lean_object* v_i_2001_, lean_object* v_b_2002_){
_start:
{
size_t v_sz_boxed_2003_; size_t v_i_boxed_2004_; lean_object* v_res_2005_; 
v_sz_boxed_2003_ = lean_unbox_usize(v_sz_2000_);
lean_dec(v_sz_2000_);
v_i_boxed_2004_ = lean_unbox_usize(v_i_2001_);
lean_dec(v_i_2001_);
v_res_2005_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_1998_, v_as_1999_, v_sz_boxed_2003_, v_i_boxed_2004_, v_b_2002_);
lean_dec_ref(v_as_1999_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(lean_object* v_init_2006_, lean_object* v_ext_2007_, lean_object* v_n_2008_, lean_object* v_b_2009_){
_start:
{
if (lean_obj_tag(v_n_2008_) == 0)
{
lean_object* v_cs_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; size_t v_sz_2013_; size_t v___x_2014_; lean_object* v___x_2015_; lean_object* v_fst_2016_; 
v_cs_2010_ = lean_ctor_get(v_n_2008_, 0);
v___x_2011_ = lean_box(0);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2011_);
lean_ctor_set(v___x_2012_, 1, v_b_2009_);
v_sz_2013_ = lean_array_size(v_cs_2010_);
v___x_2014_ = ((size_t)0ULL);
v___x_2015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2006_, v_ext_2007_, v_cs_2010_, v_sz_2013_, v___x_2014_, v___x_2012_);
v_fst_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_fst_2016_);
if (lean_obj_tag(v_fst_2016_) == 0)
{
lean_object* v_snd_2017_; lean_object* v___x_2018_; 
v_snd_2017_ = lean_ctor_get(v___x_2015_, 1);
lean_inc(v_snd_2017_);
lean_dec_ref(v___x_2015_);
v___x_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_snd_2017_);
return v___x_2018_;
}
else
{
lean_object* v_val_2019_; 
lean_dec_ref(v___x_2015_);
v_val_2019_ = lean_ctor_get(v_fst_2016_, 0);
lean_inc(v_val_2019_);
lean_dec_ref_known(v_fst_2016_, 1);
return v_val_2019_;
}
}
else
{
lean_object* v_vs_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; size_t v_sz_2023_; size_t v___x_2024_; lean_object* v___x_2025_; lean_object* v_fst_2026_; 
v_vs_2020_ = lean_ctor_get(v_n_2008_, 0);
v___x_2021_ = lean_box(0);
v___x_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
lean_ctor_set(v___x_2022_, 1, v_b_2009_);
v_sz_2023_ = lean_array_size(v_vs_2020_);
v___x_2024_ = ((size_t)0ULL);
v___x_2025_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_2007_, v_vs_2020_, v_sz_2023_, v___x_2024_, v___x_2022_);
v_fst_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_fst_2026_);
if (lean_obj_tag(v_fst_2026_) == 0)
{
lean_object* v_snd_2027_; lean_object* v___x_2028_; 
v_snd_2027_ = lean_ctor_get(v___x_2025_, 1);
lean_inc(v_snd_2027_);
lean_dec_ref(v___x_2025_);
v___x_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2028_, 0, v_snd_2027_);
return v___x_2028_;
}
else
{
lean_object* v_val_2029_; 
lean_dec_ref(v___x_2025_);
v_val_2029_ = lean_ctor_get(v_fst_2026_, 0);
lean_inc(v_val_2029_);
lean_dec_ref_known(v_fst_2026_, 1);
return v_val_2029_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(lean_object* v_init_2030_, lean_object* v_ext_2031_, lean_object* v_as_2032_, size_t v_sz_2033_, size_t v_i_2034_, lean_object* v_b_2035_){
_start:
{
uint8_t v___x_2036_; 
v___x_2036_ = lean_usize_dec_lt(v_i_2034_, v_sz_2033_);
if (v___x_2036_ == 0)
{
lean_dec_ref(v_ext_2031_);
return v_b_2035_;
}
else
{
lean_object* v_snd_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2055_; 
v_snd_2037_ = lean_ctor_get(v_b_2035_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_b_2035_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v_b_2035_, 0);
lean_dec(v_unused_2056_);
v___x_2039_ = v_b_2035_;
v_isShared_2040_ = v_isSharedCheck_2055_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_snd_2037_);
lean_dec(v_b_2035_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2055_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_array_uget_borrowed(v_as_2032_, v_i_2034_);
lean_inc(v_snd_2037_);
lean_inc_ref(v_ext_2031_);
v___x_2042_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2030_, v_ext_2031_, v_a_2041_, v_snd_2037_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v___x_2043_; lean_object* v___x_2045_; 
lean_dec_ref(v_ext_2031_);
v___x_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v___x_2043_);
v___x_2045_ = v___x_2039_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_snd_2037_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2048_; lean_object* v___x_2050_; 
lean_dec(v_snd_2037_);
v_a_2047_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2042_, 1);
v___x_2048_ = lean_box(0);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 1, v_a_2047_);
lean_ctor_set(v___x_2039_, 0, v___x_2048_);
v___x_2050_ = v___x_2039_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v_a_2047_);
v___x_2050_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
size_t v___x_2051_; size_t v___x_2052_; 
v___x_2051_ = ((size_t)1ULL);
v___x_2052_ = lean_usize_add(v_i_2034_, v___x_2051_);
v_i_2034_ = v___x_2052_;
v_b_2035_ = v___x_2050_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_init_2057_, lean_object* v_ext_2058_, lean_object* v_as_2059_, lean_object* v_sz_2060_, lean_object* v_i_2061_, lean_object* v_b_2062_){
_start:
{
size_t v_sz_boxed_2063_; size_t v_i_boxed_2064_; lean_object* v_res_2065_; 
v_sz_boxed_2063_ = lean_unbox_usize(v_sz_2060_);
lean_dec(v_sz_2060_);
v_i_boxed_2064_ = lean_unbox_usize(v_i_2061_);
lean_dec(v_i_2061_);
v_res_2065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2057_, v_ext_2058_, v_as_2059_, v_sz_boxed_2063_, v_i_boxed_2064_, v_b_2062_);
lean_dec_ref(v_as_2059_);
lean_dec(v_init_2057_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg___boxed(lean_object* v_init_2066_, lean_object* v_ext_2067_, lean_object* v_n_2068_, lean_object* v_b_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2066_, v_ext_2067_, v_n_2068_, v_b_2069_);
lean_dec_ref(v_n_2068_);
lean_dec(v_init_2066_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(lean_object* v_ext_2071_, lean_object* v_as_2072_, size_t v_sz_2073_, size_t v_i_2074_, lean_object* v_b_2075_){
_start:
{
uint8_t v___x_2076_; 
v___x_2076_ = lean_usize_dec_lt(v_i_2074_, v_sz_2073_);
if (v___x_2076_ == 0)
{
lean_dec_ref(v_ext_2071_);
return v_b_2075_;
}
else
{
lean_object* v_descr_2077_; lean_object* v_snd_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2092_; 
v_descr_2077_ = lean_ctor_get(v_ext_2071_, 0);
v_snd_2078_ = lean_ctor_get(v_b_2075_, 1);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_b_2075_);
if (v_isSharedCheck_2092_ == 0)
{
lean_object* v_unused_2093_; 
v_unused_2093_ = lean_ctor_get(v_b_2075_, 0);
lean_dec(v_unused_2093_);
v___x_2080_ = v_b_2075_;
v_isShared_2081_ = v_isSharedCheck_2092_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_snd_2078_);
lean_dec(v_b_2075_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2092_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v_addEntry_2082_; lean_object* v___x_2083_; lean_object* v_a_2084_; lean_object* v_state_2085_; lean_object* v___x_2087_; 
v_addEntry_2082_ = lean_ctor_get(v_descr_2077_, 4);
v___x_2083_ = lean_box(0);
v_a_2084_ = lean_array_uget_borrowed(v_as_2072_, v_i_2074_);
lean_inc(v_addEntry_2082_);
lean_inc(v_a_2084_);
v_state_2085_ = lean_apply_2(v_addEntry_2082_, v_snd_2078_, v_a_2084_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v_state_2085_);
lean_ctor_set(v___x_2080_, 0, v___x_2083_);
v___x_2087_ = v___x_2080_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2083_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_state_2085_);
v___x_2087_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
size_t v___x_2088_; size_t v___x_2089_; 
v___x_2088_ = ((size_t)1ULL);
v___x_2089_ = lean_usize_add(v_i_2074_, v___x_2088_);
v_i_2074_ = v___x_2089_;
v_b_2075_ = v___x_2087_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ext_2094_, lean_object* v_as_2095_, lean_object* v_sz_2096_, lean_object* v_i_2097_, lean_object* v_b_2098_){
_start:
{
size_t v_sz_boxed_2099_; size_t v_i_boxed_2100_; lean_object* v_res_2101_; 
v_sz_boxed_2099_ = lean_unbox_usize(v_sz_2096_);
lean_dec(v_sz_2096_);
v_i_boxed_2100_ = lean_unbox_usize(v_i_2097_);
lean_dec(v_i_2097_);
v_res_2101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2094_, v_as_2095_, v_sz_boxed_2099_, v_i_boxed_2100_, v_b_2098_);
lean_dec_ref(v_as_2095_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(lean_object* v_ext_2102_, lean_object* v_as_2103_, size_t v_sz_2104_, size_t v_i_2105_, lean_object* v_b_2106_){
_start:
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_usize_dec_lt(v_i_2105_, v_sz_2104_);
if (v___x_2107_ == 0)
{
lean_dec_ref(v_ext_2102_);
return v_b_2106_;
}
else
{
lean_object* v_descr_2108_; lean_object* v_snd_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2123_; 
v_descr_2108_ = lean_ctor_get(v_ext_2102_, 0);
v_snd_2109_ = lean_ctor_get(v_b_2106_, 1);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_b_2106_);
if (v_isSharedCheck_2123_ == 0)
{
lean_object* v_unused_2124_; 
v_unused_2124_ = lean_ctor_get(v_b_2106_, 0);
lean_dec(v_unused_2124_);
v___x_2111_ = v_b_2106_;
v_isShared_2112_ = v_isSharedCheck_2123_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_snd_2109_);
lean_dec(v_b_2106_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2123_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v_addEntry_2113_; lean_object* v___x_2114_; lean_object* v_a_2115_; lean_object* v_state_2116_; lean_object* v___x_2118_; 
v_addEntry_2113_ = lean_ctor_get(v_descr_2108_, 4);
v___x_2114_ = lean_box(0);
v_a_2115_ = lean_array_uget_borrowed(v_as_2103_, v_i_2105_);
lean_inc(v_addEntry_2113_);
lean_inc(v_a_2115_);
v_state_2116_ = lean_apply_2(v_addEntry_2113_, v_snd_2109_, v_a_2115_);
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 1, v_state_2116_);
lean_ctor_set(v___x_2111_, 0, v___x_2114_);
v___x_2118_ = v___x_2111_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2122_, 1, v_state_2116_);
v___x_2118_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
size_t v___x_2119_; size_t v___x_2120_; lean_object* v___x_2121_; 
v___x_2119_ = ((size_t)1ULL);
v___x_2120_ = lean_usize_add(v_i_2105_, v___x_2119_);
v___x_2121_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2102_, v_as_2103_, v_sz_2104_, v___x_2120_, v___x_2118_);
return v___x_2121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg___boxed(lean_object* v_ext_2125_, lean_object* v_as_2126_, lean_object* v_sz_2127_, lean_object* v_i_2128_, lean_object* v_b_2129_){
_start:
{
size_t v_sz_boxed_2130_; size_t v_i_boxed_2131_; lean_object* v_res_2132_; 
v_sz_boxed_2130_ = lean_unbox_usize(v_sz_2127_);
lean_dec(v_sz_2127_);
v_i_boxed_2131_ = lean_unbox_usize(v_i_2128_);
lean_dec(v_i_2128_);
v_res_2132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2125_, v_as_2126_, v_sz_boxed_2130_, v_i_boxed_2131_, v_b_2129_);
lean_dec_ref(v_as_2126_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(lean_object* v_ext_2133_, lean_object* v_t_2134_, lean_object* v_init_2135_){
_start:
{
lean_object* v_root_2136_; lean_object* v_tail_2137_; lean_object* v___x_2138_; 
v_root_2136_ = lean_ctor_get(v_t_2134_, 0);
v_tail_2137_ = lean_ctor_get(v_t_2134_, 1);
lean_inc_ref(v_ext_2133_);
lean_inc(v_init_2135_);
v___x_2138_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2135_, v_ext_2133_, v_root_2136_, v_init_2135_);
lean_dec(v_init_2135_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; 
lean_dec_ref(v_ext_2133_);
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
return v_a_2139_;
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; size_t v_sz_2143_; size_t v___x_2144_; lean_object* v___x_2145_; lean_object* v_fst_2146_; 
v_a_2140_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2138_, 1);
v___x_2141_ = lean_box(0);
v___x_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
lean_ctor_set(v___x_2142_, 1, v_a_2140_);
v_sz_2143_ = lean_array_size(v_tail_2137_);
v___x_2144_ = ((size_t)0ULL);
v___x_2145_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2133_, v_tail_2137_, v_sz_2143_, v___x_2144_, v___x_2142_);
v_fst_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_fst_2146_);
if (lean_obj_tag(v_fst_2146_) == 0)
{
lean_object* v_snd_2147_; 
v_snd_2147_ = lean_ctor_get(v___x_2145_, 1);
lean_inc(v_snd_2147_);
lean_dec_ref(v___x_2145_);
return v_snd_2147_;
}
else
{
lean_object* v_val_2148_; 
lean_dec_ref(v___x_2145_);
v_val_2148_ = lean_ctor_get(v_fst_2146_, 0);
lean_inc(v_val_2148_);
lean_dec_ref_known(v_fst_2146_, 1);
return v_val_2148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg___boxed(lean_object* v_ext_2149_, lean_object* v_t_2150_, lean_object* v_init_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2149_, v_t_2150_, v_init_2151_);
lean_dec_ref(v_t_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0(lean_object* v_namespaceName_2153_, lean_object* v_ext_2154_, lean_object* v_s_2155_){
_start:
{
lean_object* v_stateStack_2156_; 
v_stateStack_2156_ = lean_ctor_get(v_s_2155_, 0);
lean_inc(v_stateStack_2156_);
if (lean_obj_tag(v_stateStack_2156_) == 1)
{
lean_object* v_scopedEntries_2157_; lean_object* v_newEntries_2158_; lean_object* v_head_2159_; lean_object* v_tail_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2189_; 
v_scopedEntries_2157_ = lean_ctor_get(v_s_2155_, 1);
v_newEntries_2158_ = lean_ctor_get(v_s_2155_, 2);
v_head_2159_ = lean_ctor_get(v_stateStack_2156_, 0);
v_tail_2160_ = lean_ctor_get(v_stateStack_2156_, 1);
v_isSharedCheck_2189_ = !lean_is_exclusive(v_stateStack_2156_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2162_ = v_stateStack_2156_;
v_isShared_2163_ = v_isSharedCheck_2189_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_tail_2160_);
lean_inc(v_head_2159_);
lean_dec(v_stateStack_2156_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2189_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___y_2165_; lean_object* v_state_2170_; lean_object* v_activeScopes_2171_; uint8_t v_delimitsLocal_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2188_; 
v_state_2170_ = lean_ctor_get(v_head_2159_, 0);
v_activeScopes_2171_ = lean_ctor_get(v_head_2159_, 1);
v_delimitsLocal_2172_ = lean_ctor_get_uint8(v_head_2159_, sizeof(void*)*2);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_head_2159_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2174_ = v_head_2159_;
v_isShared_2175_ = v_isSharedCheck_2188_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_activeScopes_2171_);
lean_inc(v_state_2170_);
lean_dec(v_head_2159_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2188_;
goto v_resetjp_2173_;
}
v___jp_2164_:
{
lean_object* v___x_2167_; 
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 0, v___y_2165_);
v___x_2167_ = v___x_2162_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___y_2165_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_tail_2160_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
lean_ctor_set(v___x_2168_, 1, v_scopedEntries_2157_);
lean_ctor_set(v___x_2168_, 2, v_newEntries_2158_);
return v___x_2168_;
}
}
v_resetjp_2173_:
{
uint8_t v___x_2176_; 
v___x_2176_ = l_Lean_NameSet_contains(v_activeScopes_2171_, v_namespaceName_2153_);
if (v___x_2176_ == 0)
{
lean_object* v_activeScopes_2177_; lean_object* v___x_2178_; 
lean_inc(v_newEntries_2158_);
lean_inc_ref(v_scopedEntries_2157_);
lean_dec_ref(v_s_2155_);
lean_inc(v_namespaceName_2153_);
v_activeScopes_2177_ = l_Lean_NameSet_insert(v_activeScopes_2171_, v_namespaceName_2153_);
v___x_2178_ = l_Lean_SMap_find_x3f___at___00Lean_ScopedEnvExtension_ScopedEntries_insert_spec__0___redArg(v_scopedEntries_2157_, v_namespaceName_2153_);
lean_dec(v_namespaceName_2153_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v___x_2180_; 
lean_dec_ref(v_ext_2154_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 1, v_activeScopes_2177_);
v___x_2180_ = v___x_2174_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_state_2170_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v_activeScopes_2177_);
lean_ctor_set_uint8(v_reuseFailAlloc_2181_, sizeof(void*)*2, v_delimitsLocal_2172_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
v___y_2165_ = v___x_2180_;
goto v___jp_2164_;
}
}
else
{
lean_object* v_val_2182_; uint8_t v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2186_; 
v_val_2182_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2183_ = 1;
v___x_2184_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2154_, v_val_2182_, v_state_2170_);
lean_dec(v_val_2182_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 1, v_activeScopes_2177_);
lean_ctor_set(v___x_2174_, 0, v___x_2184_);
v___x_2186_ = v___x_2174_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_activeScopes_2177_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*2, v___x_2183_);
v___y_2165_ = v___x_2186_;
goto v___jp_2164_;
}
}
}
else
{
lean_del_object(v___x_2174_);
lean_dec(v_activeScopes_2171_);
lean_dec(v_state_2170_);
lean_del_object(v___x_2162_);
lean_dec(v_tail_2160_);
lean_dec_ref(v_ext_2154_);
lean_dec(v_namespaceName_2153_);
return v_s_2155_;
}
}
}
}
else
{
lean_dec(v_stateStack_2156_);
lean_dec_ref(v_ext_2154_);
lean_dec(v_namespaceName_2153_);
return v_s_2155_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped___redArg(lean_object* v_ext_2190_, lean_object* v_env_2191_, lean_object* v_namespaceName_2192_){
_start:
{
lean_object* v_ext_2193_; lean_object* v___f_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_ext_2193_ = lean_ctor_get(v_ext_2190_, 1);
lean_inc_ref(v_ext_2193_);
v___f_2194_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_activateScoped___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2194_, 0, v_namespaceName_2192_);
lean_closure_set(v___f_2194_, 1, v_ext_2190_);
v___x_2195_ = lean_box(1);
v___x_2196_ = lean_box(0);
v___x_2197_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_2193_, v_env_2191_, v___f_2194_, v___x_2195_, v___x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_activateScoped(lean_object* v_00_u03b1_2198_, lean_object* v_00_u03b2_2199_, lean_object* v_00_u03c3_2200_, lean_object* v_ext_2201_, lean_object* v_env_2202_, lean_object* v_namespaceName_2203_){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lean_ScopedEnvExtension_activateScoped___redArg(v_ext_2201_, v_env_2202_, v_namespaceName_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(lean_object* v_00_u03b2_2205_, lean_object* v_00_u03c3_2206_, lean_object* v_00_u03b1_2207_, lean_object* v_ext_2208_, lean_object* v_t_2209_, lean_object* v_init_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___redArg(v_ext_2208_, v_t_2209_, v_init_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0___boxed(lean_object* v_00_u03b2_2212_, lean_object* v_00_u03c3_2213_, lean_object* v_00_u03b1_2214_, lean_object* v_ext_2215_, lean_object* v_t_2216_, lean_object* v_init_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0(v_00_u03b2_2212_, v_00_u03c3_2213_, v_00_u03b1_2214_, v_ext_2215_, v_t_2216_, v_init_2217_);
lean_dec_ref(v_t_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(lean_object* v_00_u03b2_2219_, lean_object* v_00_u03c3_2220_, lean_object* v_init_2221_, lean_object* v_00_u03b1_2222_, lean_object* v_ext_2223_, lean_object* v_n_2224_, lean_object* v_b_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___redArg(v_init_2221_, v_ext_2223_, v_n_2224_, v_b_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2227_, lean_object* v_00_u03c3_2228_, lean_object* v_init_2229_, lean_object* v_00_u03b1_2230_, lean_object* v_ext_2231_, lean_object* v_n_2232_, lean_object* v_b_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0(v_00_u03b2_2227_, v_00_u03c3_2228_, v_init_2229_, v_00_u03b1_2230_, v_ext_2231_, v_n_2232_, v_b_2233_);
lean_dec_ref(v_n_2232_);
lean_dec(v_init_2229_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(lean_object* v_00_u03b2_2235_, lean_object* v_00_u03c3_2236_, lean_object* v_00_u03b1_2237_, lean_object* v_ext_2238_, lean_object* v_as_2239_, size_t v_sz_2240_, size_t v_i_2241_, lean_object* v_b_2242_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___redArg(v_ext_2238_, v_as_2239_, v_sz_2240_, v_i_2241_, v_b_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2244_, lean_object* v_00_u03c3_2245_, lean_object* v_00_u03b1_2246_, lean_object* v_ext_2247_, lean_object* v_as_2248_, lean_object* v_sz_2249_, lean_object* v_i_2250_, lean_object* v_b_2251_){
_start:
{
size_t v_sz_boxed_2252_; size_t v_i_boxed_2253_; lean_object* v_res_2254_; 
v_sz_boxed_2252_ = lean_unbox_usize(v_sz_2249_);
lean_dec(v_sz_2249_);
v_i_boxed_2253_ = lean_unbox_usize(v_i_2250_);
lean_dec(v_i_2250_);
v_res_2254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1(v_00_u03b2_2244_, v_00_u03c3_2245_, v_00_u03b1_2246_, v_ext_2247_, v_as_2248_, v_sz_boxed_2252_, v_i_boxed_2253_, v_b_2251_);
lean_dec_ref(v_as_2248_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2255_, lean_object* v_00_u03c3_2256_, lean_object* v_init_2257_, lean_object* v_00_u03b1_2258_, lean_object* v_ext_2259_, lean_object* v_as_2260_, size_t v_sz_2261_, size_t v_i_2262_, lean_object* v_b_2263_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___redArg(v_init_2257_, v_ext_2259_, v_as_2260_, v_sz_2261_, v_i_2262_, v_b_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2265_, lean_object* v_00_u03c3_2266_, lean_object* v_init_2267_, lean_object* v_00_u03b1_2268_, lean_object* v_ext_2269_, lean_object* v_as_2270_, lean_object* v_sz_2271_, lean_object* v_i_2272_, lean_object* v_b_2273_){
_start:
{
size_t v_sz_boxed_2274_; size_t v_i_boxed_2275_; lean_object* v_res_2276_; 
v_sz_boxed_2274_ = lean_unbox_usize(v_sz_2271_);
lean_dec(v_sz_2271_);
v_i_boxed_2275_ = lean_unbox_usize(v_i_2272_);
lean_dec(v_i_2272_);
v_res_2276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__1(v_00_u03b2_2265_, v_00_u03c3_2266_, v_init_2267_, v_00_u03b1_2268_, v_ext_2269_, v_as_2270_, v_sz_boxed_2274_, v_i_boxed_2275_, v_b_2273_);
lean_dec_ref(v_as_2270_);
lean_dec(v_init_2267_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2277_, lean_object* v_00_u03c3_2278_, lean_object* v_00_u03b1_2279_, lean_object* v_ext_2280_, lean_object* v_as_2281_, size_t v_sz_2282_, size_t v_i_2283_, lean_object* v_b_2284_){
_start:
{
lean_object* v___x_2285_; 
v___x_2285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___redArg(v_ext_2280_, v_as_2281_, v_sz_2282_, v_i_2283_, v_b_2284_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2286_, lean_object* v_00_u03c3_2287_, lean_object* v_00_u03b1_2288_, lean_object* v_ext_2289_, lean_object* v_as_2290_, lean_object* v_sz_2291_, lean_object* v_i_2292_, lean_object* v_b_2293_){
_start:
{
size_t v_sz_boxed_2294_; size_t v_i_boxed_2295_; lean_object* v_res_2296_; 
v_sz_boxed_2294_ = lean_unbox_usize(v_sz_2291_);
lean_dec(v_sz_2291_);
v_i_boxed_2295_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2(v_00_u03b2_2286_, v_00_u03c3_2287_, v_00_u03b1_2288_, v_ext_2289_, v_as_2290_, v_sz_boxed_2294_, v_i_boxed_2295_, v_b_2293_);
lean_dec_ref(v_as_2290_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_2297_, lean_object* v_00_u03c3_2298_, lean_object* v_00_u03b1_2299_, lean_object* v_ext_2300_, lean_object* v_as_2301_, size_t v_sz_2302_, size_t v_i_2303_, lean_object* v_b_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___redArg(v_ext_2300_, v_as_2301_, v_sz_2302_, v_i_2303_, v_b_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2306_, lean_object* v_00_u03c3_2307_, lean_object* v_00_u03b1_2308_, lean_object* v_ext_2309_, lean_object* v_as_2310_, lean_object* v_sz_2311_, lean_object* v_i_2312_, lean_object* v_b_2313_){
_start:
{
size_t v_sz_boxed_2314_; size_t v_i_boxed_2315_; lean_object* v_res_2316_; 
v_sz_boxed_2314_ = lean_unbox_usize(v_sz_2311_);
lean_dec(v_sz_2311_);
v_i_boxed_2315_ = lean_unbox_usize(v_i_2312_);
lean_dec(v_i_2312_);
v_res_2316_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__1_spec__4(v_00_u03b2_2306_, v_00_u03c3_2307_, v_00_u03b1_2308_, v_ext_2309_, v_as_2310_, v_sz_boxed_2314_, v_i_boxed_2315_, v_b_2313_);
lean_dec_ref(v_as_2310_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_2317_, lean_object* v_00_u03c3_2318_, lean_object* v_00_u03b1_2319_, lean_object* v_ext_2320_, lean_object* v_as_2321_, size_t v_sz_2322_, size_t v_i_2323_, lean_object* v_b_2324_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___redArg(v_ext_2320_, v_as_2321_, v_sz_2322_, v_i_2323_, v_b_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2326_, lean_object* v_00_u03c3_2327_, lean_object* v_00_u03b1_2328_, lean_object* v_ext_2329_, lean_object* v_as_2330_, lean_object* v_sz_2331_, lean_object* v_i_2332_, lean_object* v_b_2333_){
_start:
{
size_t v_sz_boxed_2334_; size_t v_i_boxed_2335_; lean_object* v_res_2336_; 
v_sz_boxed_2334_ = lean_unbox_usize(v_sz_2331_);
lean_dec(v_sz_2331_);
v_i_boxed_2335_ = lean_unbox_usize(v_i_2332_);
lean_dec(v_i_2332_);
v_res_2336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_ScopedEnvExtension_activateScoped_spec__0_spec__0_spec__2_spec__3(v_00_u03b2_2326_, v_00_u03c3_2327_, v_00_u03b1_2328_, v_ext_2329_, v_as_2330_, v_sz_boxed_2334_, v_i_boxed_2335_, v_b_2333_);
lean_dec_ref(v_as_2330_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0(lean_object* v_f_2337_, lean_object* v_s_2338_){
_start:
{
lean_object* v_stateStack_2339_; 
v_stateStack_2339_ = lean_ctor_get(v_s_2338_, 0);
lean_inc(v_stateStack_2339_);
if (lean_obj_tag(v_stateStack_2339_) == 1)
{
lean_object* v_head_2340_; lean_object* v_scopedEntries_2341_; lean_object* v_newEntries_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2369_; 
v_head_2340_ = lean_ctor_get(v_stateStack_2339_, 0);
lean_inc(v_head_2340_);
v_scopedEntries_2341_ = lean_ctor_get(v_s_2338_, 1);
v_newEntries_2342_ = lean_ctor_get(v_s_2338_, 2);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_s_2338_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v_s_2338_, 0);
lean_dec(v_unused_2370_);
v___x_2344_ = v_s_2338_;
v_isShared_2345_ = v_isSharedCheck_2369_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_newEntries_2342_);
lean_inc(v_scopedEntries_2341_);
lean_dec(v_s_2338_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2369_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v_tail_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2367_; 
v_tail_2346_ = lean_ctor_get(v_stateStack_2339_, 1);
v_isSharedCheck_2367_ = !lean_is_exclusive(v_stateStack_2339_);
if (v_isSharedCheck_2367_ == 0)
{
lean_object* v_unused_2368_; 
v_unused_2368_ = lean_ctor_get(v_stateStack_2339_, 0);
lean_dec(v_unused_2368_);
v___x_2348_ = v_stateStack_2339_;
v_isShared_2349_ = v_isSharedCheck_2367_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_tail_2346_);
lean_dec(v_stateStack_2339_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2367_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v_state_2350_; lean_object* v_activeScopes_2351_; uint8_t v_delimitsLocal_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2366_; 
v_state_2350_ = lean_ctor_get(v_head_2340_, 0);
v_activeScopes_2351_ = lean_ctor_get(v_head_2340_, 1);
v_delimitsLocal_2352_ = lean_ctor_get_uint8(v_head_2340_, sizeof(void*)*2);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_head_2340_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2354_ = v_head_2340_;
v_isShared_2355_ = v_isSharedCheck_2366_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_activeScopes_2351_);
lean_inc(v_state_2350_);
lean_dec(v_head_2340_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2366_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
v___x_2356_ = lean_apply_1(v_f_2337_, v_state_2350_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2356_);
v___x_2358_ = v___x_2354_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2356_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v_activeScopes_2351_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*2, v_delimitsLocal_2352_);
v___x_2358_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
lean_object* v___x_2360_; 
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2358_);
v___x_2360_ = v___x_2348_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v_tail_2346_);
v___x_2360_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2362_; 
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___x_2360_);
v___x_2362_ = v___x_2344_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_scopedEntries_2341_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v_newEntries_2342_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
}
}
}
else
{
lean_dec(v_stateStack_2339_);
lean_dec(v_f_2337_);
return v_s_2338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object* v_ext_2371_, lean_object* v_env_2372_, lean_object* v_f_2373_){
_start:
{
lean_object* v_ext_2374_; lean_object* v_toEnvExtension_2375_; lean_object* v_asyncMode_2376_; lean_object* v___f_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_ext_2374_ = lean_ctor_get(v_ext_2371_, 1);
lean_inc_ref(v_ext_2374_);
lean_dec_ref(v_ext_2371_);
v_toEnvExtension_2375_ = lean_ctor_get(v_ext_2374_, 0);
v_asyncMode_2376_ = lean_ctor_get(v_toEnvExtension_2375_, 2);
lean_inc(v_asyncMode_2376_);
v___f_2377_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_modifyState___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2377_, 0, v_f_2373_);
v___x_2378_ = lean_box(0);
v___x_2379_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_2374_, v_env_2372_, v___f_2377_, v_asyncMode_2376_, v___x_2378_);
lean_dec(v_asyncMode_2376_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_modifyState(lean_object* v_00_u03b1_2380_, lean_object* v_00_u03b2_2381_, lean_object* v_00_u03c3_2382_, lean_object* v_ext_2383_, lean_object* v_env_2384_, lean_object* v_f_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2383_, v_env_2384_, v_f_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__0(lean_object* v_toPure_2387_, lean_object* v_____s_2388_){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_box(0);
v___x_2390_ = lean_apply_2(v_toPure_2387_, lean_box(0), v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__1(lean_object* v___x_2391_, lean_object* v_toPure_2392_, lean_object* v_r_2393_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2391_);
v___x_2395_ = lean_apply_2(v_toPure_2392_, lean_box(0), v___x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__2(lean_object* v_inst_2396_, lean_object* v_toBind_2397_, lean_object* v___f_2398_, lean_object* v_a_2399_, lean_object* v_x_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_modifyEnv_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v_modifyEnv_2402_ = lean_ctor_get(v_inst_2396_, 1);
lean_inc(v_modifyEnv_2402_);
lean_dec_ref(v_inst_2396_);
v___x_2403_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_pushScope), 5, 4);
lean_closure_set(v___x_2403_, 0, lean_box(0));
lean_closure_set(v___x_2403_, 1, lean_box(0));
lean_closure_set(v___x_2403_, 2, lean_box(0));
lean_closure_set(v___x_2403_, 3, v_a_2399_);
v___x_2404_ = lean_apply_1(v_modifyEnv_2402_, v___x_2403_);
v___x_2405_ = lean_apply_4(v_toBind_2397_, lean_box(0), lean_box(0), v___x_2404_, v___f_2398_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg___lam__3(lean_object* v_toPure_2406_, lean_object* v_inst_2407_, lean_object* v_toBind_2408_, lean_object* v_inst_2409_, lean_object* v___f_2410_, lean_object* v_____do__lift_2411_){
_start:
{
lean_object* v___x_2412_; lean_object* v___f_2413_; lean_object* v___f_2414_; size_t v_sz_2415_; size_t v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2412_ = lean_box(0);
v___f_2413_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2413_, 0, v___x_2412_);
lean_closure_set(v___f_2413_, 1, v_toPure_2406_);
lean_inc(v_toBind_2408_);
v___f_2414_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__2), 6, 3);
lean_closure_set(v___f_2414_, 0, v_inst_2407_);
lean_closure_set(v___f_2414_, 1, v_toBind_2408_);
lean_closure_set(v___f_2414_, 2, v___f_2413_);
v_sz_2415_ = lean_array_size(v_____do__lift_2411_);
v___x_2416_ = ((size_t)0ULL);
v___x_2417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2409_, v_____do__lift_2411_, v___f_2414_, v_sz_2415_, v___x_2416_, v___x_2412_);
v___x_2418_ = lean_apply_4(v_toBind_2408_, lean_box(0), lean_box(0), v___x_2417_, v___f_2410_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_pushScope___redArg___closed__0(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = l_Lean_scopedEnvExtensionsRef;
v___x_2420_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2420_, 0, lean_box(0));
lean_closure_set(v___x_2420_, 1, lean_box(0));
lean_closure_set(v___x_2420_, 2, v___x_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope___redArg(lean_object* v_inst_2421_, lean_object* v_inst_2422_, lean_object* v_inst_2423_){
_start:
{
lean_object* v_toApplicative_2424_; lean_object* v_toBind_2425_; lean_object* v_toPure_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___f_2429_; lean_object* v___f_2430_; lean_object* v___x_2431_; 
v_toApplicative_2424_ = lean_ctor_get(v_inst_2421_, 0);
v_toBind_2425_ = lean_ctor_get(v_inst_2421_, 1);
lean_inc_n(v_toBind_2425_, 2);
v_toPure_2426_ = lean_ctor_get(v_toApplicative_2424_, 1);
lean_inc_n(v_toPure_2426_, 2);
v___x_2427_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2428_ = lean_apply_2(v_inst_2423_, lean_box(0), v___x_2427_);
v___f_2429_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2429_, 0, v_toPure_2426_);
v___f_2430_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2430_, 0, v_toPure_2426_);
lean_closure_set(v___f_2430_, 1, v_inst_2422_);
lean_closure_set(v___f_2430_, 2, v_toBind_2425_);
lean_closure_set(v___f_2430_, 3, v_inst_2421_);
lean_closure_set(v___f_2430_, 4, v___f_2429_);
v___x_2431_ = lean_apply_4(v_toBind_2425_, lean_box(0), lean_box(0), v___x_2428_, v___f_2430_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_pushScope(lean_object* v_m_2432_, lean_object* v_inst_2433_, lean_object* v_inst_2434_, lean_object* v_inst_2435_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lean_pushScope___redArg(v_inst_2433_, v_inst_2434_, v_inst_2435_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__2(lean_object* v_inst_2437_, lean_object* v_toBind_2438_, lean_object* v___f_2439_, lean_object* v_a_2440_, lean_object* v_x_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_modifyEnv_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v_modifyEnv_2443_ = lean_ctor_get(v_inst_2437_, 1);
lean_inc(v_modifyEnv_2443_);
lean_dec_ref(v_inst_2437_);
v___x_2444_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_popScope), 5, 4);
lean_closure_set(v___x_2444_, 0, lean_box(0));
lean_closure_set(v___x_2444_, 1, lean_box(0));
lean_closure_set(v___x_2444_, 2, lean_box(0));
lean_closure_set(v___x_2444_, 3, v_a_2440_);
v___x_2445_ = lean_apply_1(v_modifyEnv_2443_, v___x_2444_);
v___x_2446_ = lean_apply_4(v_toBind_2438_, lean_box(0), lean_box(0), v___x_2445_, v___f_2439_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg___lam__0(lean_object* v_toPure_2447_, lean_object* v_inst_2448_, lean_object* v_toBind_2449_, lean_object* v_inst_2450_, lean_object* v___f_2451_, lean_object* v_____do__lift_2452_){
_start:
{
lean_object* v___x_2453_; lean_object* v___f_2454_; lean_object* v___f_2455_; size_t v_sz_2456_; size_t v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2453_ = lean_box(0);
v___f_2454_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2454_, 0, v___x_2453_);
lean_closure_set(v___f_2454_, 1, v_toPure_2447_);
lean_inc(v_toBind_2449_);
v___f_2455_ = lean_alloc_closure((void*)(l_Lean_popScope___redArg___lam__2), 6, 3);
lean_closure_set(v___f_2455_, 0, v_inst_2448_);
lean_closure_set(v___f_2455_, 1, v_toBind_2449_);
lean_closure_set(v___f_2455_, 2, v___f_2454_);
v_sz_2456_ = lean_array_size(v_____do__lift_2452_);
v___x_2457_ = ((size_t)0ULL);
v___x_2458_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2450_, v_____do__lift_2452_, v___f_2455_, v_sz_2456_, v___x_2457_, v___x_2453_);
v___x_2459_ = lean_apply_4(v_toBind_2449_, lean_box(0), lean_box(0), v___x_2458_, v___f_2451_);
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope___redArg(lean_object* v_inst_2460_, lean_object* v_inst_2461_, lean_object* v_inst_2462_){
_start:
{
lean_object* v_toApplicative_2463_; lean_object* v_toBind_2464_; lean_object* v_toPure_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___f_2468_; lean_object* v___f_2469_; lean_object* v___x_2470_; 
v_toApplicative_2463_ = lean_ctor_get(v_inst_2460_, 0);
v_toBind_2464_ = lean_ctor_get(v_inst_2460_, 1);
lean_inc_n(v_toBind_2464_, 2);
v_toPure_2465_ = lean_ctor_get(v_toApplicative_2463_, 1);
lean_inc_n(v_toPure_2465_, 2);
v___x_2466_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2467_ = lean_apply_2(v_inst_2462_, lean_box(0), v___x_2466_);
v___f_2468_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2468_, 0, v_toPure_2465_);
v___f_2469_ = lean_alloc_closure((void*)(l_Lean_popScope___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2469_, 0, v_toPure_2465_);
lean_closure_set(v___f_2469_, 1, v_inst_2461_);
lean_closure_set(v___f_2469_, 2, v_toBind_2464_);
lean_closure_set(v___f_2469_, 3, v_inst_2460_);
lean_closure_set(v___f_2469_, 4, v___f_2468_);
v___x_2470_ = lean_apply_4(v_toBind_2464_, lean_box(0), lean_box(0), v___x_2467_, v___f_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_popScope(lean_object* v_m_2471_, lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_inst_2474_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Lean_popScope___redArg(v_inst_2472_, v_inst_2473_, v_inst_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__2(lean_object* v_a_2476_, lean_object* v_depth_2477_, lean_object* v_x_2478_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Lean_ScopedEnvExtension_setDelimitsLocal___redArg(v_a_2476_, v_x_2478_, v_depth_2477_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__0(lean_object* v_inst_2480_, lean_object* v_depth_2481_, lean_object* v_toBind_2482_, lean_object* v___f_2483_, lean_object* v_a_2484_, lean_object* v_x_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v_modifyEnv_2487_; lean_object* v___f_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_modifyEnv_2487_ = lean_ctor_get(v_inst_2480_, 1);
lean_inc(v_modifyEnv_2487_);
lean_dec_ref(v_inst_2480_);
v___f_2488_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2488_, 0, v_a_2484_);
lean_closure_set(v___f_2488_, 1, v_depth_2481_);
v___x_2489_ = lean_apply_1(v_modifyEnv_2487_, v___f_2488_);
v___x_2490_ = lean_apply_4(v_toBind_2482_, lean_box(0), lean_box(0), v___x_2489_, v___f_2483_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg___lam__1(lean_object* v_toPure_2491_, lean_object* v_inst_2492_, lean_object* v_depth_2493_, lean_object* v_toBind_2494_, lean_object* v_inst_2495_, lean_object* v___f_2496_, lean_object* v_____do__lift_2497_){
_start:
{
lean_object* v___x_2498_; lean_object* v___f_2499_; lean_object* v___f_2500_; size_t v_sz_2501_; size_t v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2498_ = lean_box(0);
v___f_2499_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2499_, 0, v___x_2498_);
lean_closure_set(v___f_2499_, 1, v_toPure_2491_);
lean_inc(v_toBind_2494_);
v___f_2500_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__0), 7, 4);
lean_closure_set(v___f_2500_, 0, v_inst_2492_);
lean_closure_set(v___f_2500_, 1, v_depth_2493_);
lean_closure_set(v___f_2500_, 2, v_toBind_2494_);
lean_closure_set(v___f_2500_, 3, v___f_2499_);
v_sz_2501_ = lean_array_size(v_____do__lift_2497_);
v___x_2502_ = ((size_t)0ULL);
v___x_2503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2495_, v_____do__lift_2497_, v___f_2500_, v_sz_2501_, v___x_2502_, v___x_2498_);
v___x_2504_ = lean_apply_4(v_toBind_2494_, lean_box(0), lean_box(0), v___x_2503_, v___f_2496_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal___redArg(lean_object* v_inst_2505_, lean_object* v_inst_2506_, lean_object* v_inst_2507_, lean_object* v_depth_2508_){
_start:
{
lean_object* v_toApplicative_2509_; lean_object* v_toBind_2510_; lean_object* v_toPure_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___f_2514_; lean_object* v___f_2515_; lean_object* v___x_2516_; 
v_toApplicative_2509_ = lean_ctor_get(v_inst_2505_, 0);
v_toBind_2510_ = lean_ctor_get(v_inst_2505_, 1);
lean_inc_n(v_toBind_2510_, 2);
v_toPure_2511_ = lean_ctor_get(v_toApplicative_2509_, 1);
lean_inc_n(v_toPure_2511_, 2);
v___x_2512_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2513_ = lean_apply_2(v_inst_2507_, lean_box(0), v___x_2512_);
v___f_2514_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2514_, 0, v_toPure_2511_);
v___f_2515_ = lean_alloc_closure((void*)(l_Lean_setDelimitsLocal___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2515_, 0, v_toPure_2511_);
lean_closure_set(v___f_2515_, 1, v_inst_2506_);
lean_closure_set(v___f_2515_, 2, v_depth_2508_);
lean_closure_set(v___f_2515_, 3, v_toBind_2510_);
lean_closure_set(v___f_2515_, 4, v_inst_2505_);
lean_closure_set(v___f_2515_, 5, v___f_2514_);
v___x_2516_ = lean_apply_4(v_toBind_2510_, lean_box(0), lean_box(0), v___x_2513_, v___f_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_setDelimitsLocal(lean_object* v_m_2517_, lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_inst_2520_, lean_object* v_depth_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Lean_setDelimitsLocal___redArg(v_inst_2518_, v_inst_2519_, v_inst_2520_, v_depth_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__2(lean_object* v_a_2523_, lean_object* v_namespaceName_2524_, lean_object* v_x_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_ScopedEnvExtension_activateScoped___redArg(v_a_2523_, v_x_2525_, v_namespaceName_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__0(lean_object* v_inst_2527_, lean_object* v_namespaceName_2528_, lean_object* v_toBind_2529_, lean_object* v___f_2530_, lean_object* v_a_2531_, lean_object* v_x_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v_modifyEnv_2534_; lean_object* v___f_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v_modifyEnv_2534_ = lean_ctor_get(v_inst_2527_, 1);
lean_inc(v_modifyEnv_2534_);
lean_dec_ref(v_inst_2527_);
v___f_2535_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2535_, 0, v_a_2531_);
lean_closure_set(v___f_2535_, 1, v_namespaceName_2528_);
v___x_2536_ = lean_apply_1(v_modifyEnv_2534_, v___f_2535_);
v___x_2537_ = lean_apply_4(v_toBind_2529_, lean_box(0), lean_box(0), v___x_2536_, v___f_2530_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg___lam__1(lean_object* v_toPure_2538_, lean_object* v_inst_2539_, lean_object* v_namespaceName_2540_, lean_object* v_toBind_2541_, lean_object* v_inst_2542_, lean_object* v___f_2543_, lean_object* v_____do__lift_2544_){
_start:
{
lean_object* v___x_2545_; lean_object* v___f_2546_; lean_object* v___f_2547_; size_t v_sz_2548_; size_t v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2545_ = lean_box(0);
v___f_2546_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2546_, 0, v___x_2545_);
lean_closure_set(v___f_2546_, 1, v_toPure_2538_);
lean_inc(v_toBind_2541_);
v___f_2547_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__0), 7, 4);
lean_closure_set(v___f_2547_, 0, v_inst_2539_);
lean_closure_set(v___f_2547_, 1, v_namespaceName_2540_);
lean_closure_set(v___f_2547_, 2, v_toBind_2541_);
lean_closure_set(v___f_2547_, 3, v___f_2546_);
v_sz_2548_ = lean_array_size(v_____do__lift_2544_);
v___x_2549_ = ((size_t)0ULL);
v___x_2550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2542_, v_____do__lift_2544_, v___f_2547_, v_sz_2548_, v___x_2549_, v___x_2545_);
v___x_2551_ = lean_apply_4(v_toBind_2541_, lean_box(0), lean_box(0), v___x_2550_, v___f_2543_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped___redArg(lean_object* v_inst_2552_, lean_object* v_inst_2553_, lean_object* v_inst_2554_, lean_object* v_namespaceName_2555_){
_start:
{
lean_object* v_toApplicative_2556_; lean_object* v_toBind_2557_; lean_object* v_toPure_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___f_2561_; lean_object* v___f_2562_; lean_object* v___x_2563_; 
v_toApplicative_2556_ = lean_ctor_get(v_inst_2552_, 0);
v_toBind_2557_ = lean_ctor_get(v_inst_2552_, 1);
lean_inc_n(v_toBind_2557_, 2);
v_toPure_2558_ = lean_ctor_get(v_toApplicative_2556_, 1);
lean_inc_n(v_toPure_2558_, 2);
v___x_2559_ = lean_obj_once(&l_Lean_pushScope___redArg___closed__0, &l_Lean_pushScope___redArg___closed__0_once, _init_l_Lean_pushScope___redArg___closed__0);
v___x_2560_ = lean_apply_2(v_inst_2554_, lean_box(0), v___x_2559_);
v___f_2561_ = lean_alloc_closure((void*)(l_Lean_pushScope___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2561_, 0, v_toPure_2558_);
v___f_2562_ = lean_alloc_closure((void*)(l_Lean_activateScoped___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2562_, 0, v_toPure_2558_);
lean_closure_set(v___f_2562_, 1, v_inst_2553_);
lean_closure_set(v___f_2562_, 2, v_namespaceName_2555_);
lean_closure_set(v___f_2562_, 3, v_toBind_2557_);
lean_closure_set(v___f_2562_, 4, v_inst_2552_);
lean_closure_set(v___f_2562_, 5, v___f_2561_);
v___x_2563_ = lean_apply_4(v_toBind_2557_, lean_box(0), lean_box(0), v___x_2560_, v___f_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_activateScoped(lean_object* v_m_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_inst_2567_, lean_object* v_namespaceName_2568_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lean_activateScoped___redArg(v_inst_2565_, v_inst_2566_, v_inst_2567_, v_namespaceName_2568_);
return v___x_2569_;
}
}
static lean_object* _init_l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam(void){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_obj_once(&l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28, &l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28_once, _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam___closed__28);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(lean_object* v___y_2571_){
_start:
{
lean_inc(v___y_2571_);
return v___y_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0___boxed(lean_object* v___y_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__0(v___y_2572_);
lean_dec(v___y_2572_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(lean_object* v_x_2574_, lean_object* v_a_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2578_, 0, v_a_2575_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1___boxed(lean_object* v_x_2579_, lean_object* v_a_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__1(v_x_2579_, v_a_2580_, v___y_2581_);
lean_dec_ref(v___y_2581_);
lean_dec(v_x_2579_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(lean_object* v_initial_2584_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_initial_2584_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed(lean_object* v_initial_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2(v_initial_2587_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object* v_descr_2592_){
_start:
{
lean_object* v_name_2594_; lean_object* v_addEntry_2595_; lean_object* v_initial_2596_; lean_object* v_finalizeImport_2597_; lean_object* v_exportEntry_x3f_2598_; lean_object* v___f_2599_; lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_name_2594_ = lean_ctor_get(v_descr_2592_, 0);
lean_inc(v_name_2594_);
v_addEntry_2595_ = lean_ctor_get(v_descr_2592_, 1);
lean_inc(v_addEntry_2595_);
v_initial_2596_ = lean_ctor_get(v_descr_2592_, 2);
lean_inc(v_initial_2596_);
v_finalizeImport_2597_ = lean_ctor_get(v_descr_2592_, 3);
lean_inc(v_finalizeImport_2597_);
v_exportEntry_x3f_2598_ = lean_ctor_get(v_descr_2592_, 4);
lean_inc_ref(v_exportEntry_x3f_2598_);
lean_dec_ref(v_descr_2592_);
v___f_2599_ = ((lean_object*)(l_Lean_registerSimpleScopedEnvExtension___redArg___closed__0));
v___f_2600_ = ((lean_object*)(l_Lean_registerSimpleScopedEnvExtension___redArg___closed__1));
v___f_2601_ = lean_alloc_closure((void*)(l_Lean_registerSimpleScopedEnvExtension___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2601_, 0, v_initial_2596_);
v___x_2602_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2602_, 0, v_name_2594_);
lean_ctor_set(v___x_2602_, 1, v___f_2601_);
lean_ctor_set(v___x_2602_, 2, v___f_2600_);
lean_ctor_set(v___x_2602_, 3, v___f_2599_);
lean_ctor_set(v___x_2602_, 4, v_addEntry_2595_);
lean_ctor_set(v___x_2602_, 5, v_finalizeImport_2597_);
lean_ctor_set(v___x_2602_, 6, v_exportEntry_x3f_2598_);
v___x_2603_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg___boxed(lean_object* v_descr_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v_descr_2604_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension(lean_object* v_00_u03b1_2607_, lean_object* v_00_u03c3_2608_, lean_object* v_descr_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v_descr_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimpleScopedEnvExtension___boxed(lean_object* v_00_u03b1_2612_, lean_object* v_00_u03c3_2613_, lean_object* v_descr_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Lean_registerSimpleScopedEnvExtension(v_00_u03b1_2612_, v_00_u03c3_2613_, v_descr_2614_);
return v_res_2616_;
}
}
lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ScopedEnvExtension_0__Lean_initFn_00___x40_Lean_ScopedEnvExtension_3284267871____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_scopedEnvExtensionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_scopedEnvExtensionsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_ScopedEnvExtension_Descr_name___autoParam = _init_l_Lean_ScopedEnvExtension_Descr_name___autoParam();
lean_mark_persistent(l_Lean_ScopedEnvExtension_Descr_name___autoParam);
l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam = _init_l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam();
lean_mark_persistent(l_Lean_SimpleScopedEnvExtension_Descr_name___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Attributes(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ScopedEnvExtension(builtin);
}
#ifdef __cplusplus
}
#endif
