// Lean compiler output
// Module: Lean.Parser.Types
// Imports: public import Lean.Data.Trie public import Lean.DocString.Extension import Init.Data.String.OrderInstances
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
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_String_Pos_Raw_instLinearOrderPackage;
uint8_t l_Std_instUDecidableLE___redArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_instDecidableEqRaw___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseRepsBy___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_maxPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_argPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_leadPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_minPrec;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value;
static const lean_array_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam;
static const lean_string_object l_Lean_Parser_instInhabitedInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_instInhabitedInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value;
static lean_once_cell_t l_Lean_Parser_instInhabitedInputContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedInputContext___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedInputContext;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqCacheableParserContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value)} };
static const lean_object* l_Lean_Parser_instBEqCacheableParserContext___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqCacheableParserContext = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeParserContextInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeParserContextInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeParserContextInputContext = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedError_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedError_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError_default = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqError___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqError = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Error_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Lean_Parser_Error_toString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__0_value;
static const lean_string_object l_Lean_Parser_Error_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "expected "};
static const lean_object* l_Lean_Parser_Error_toString___closed__1 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Error_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Error_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Error_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Error_instToString = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqParserCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqParserCacheKey = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instHashableParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instHashableParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instHashableParserCacheKey = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__0;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
static const lean_array_object l_Lean_Parser_SyntaxStack_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value;
static const lean_ctor_object l_Lean_Parser_SyntaxStack_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_empty = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Parser.Types"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.back"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__1_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.back: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__2 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__2_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_back___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_back___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.get!"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.get!: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__1_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_ParserState_allErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_ParserState_allErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_allErrors___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkEOIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkEOIError___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value;
static lean_once_cell_t l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserFn = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens_default;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "epsilon"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__0_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__1 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__1_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__2 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_FirstTokens_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_FirstTokens_toStr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_FirstTokens_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_FirstTokens_instToString = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value;
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__1 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value),((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__2 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo_default = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParser_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value),((lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value)}};
static const lean_object* l_Lean_Parser_instInhabitedParser_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser_default = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "withCache"};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 241, 193, 7, 69, 147, 159, 180)}};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 541, .m_capacity = 541, .m_length = 540, .m_data = "Run `p` and record result in parser cache for any further invocation with this `parserName`, parser context, and parser state.\n`p` cannot access syntax stack elements pushed before the invocation in order to make caching independent of parser history.\nAs this excludes trailing parsers from being cached, we also reset `lhsPrec`, which is not read but set by leading parsers, to 0\nin order to increase cache hits. Finally, `errorMsg` is also reset to `none` as a leading parser should not be called in the first\nplace if there was an error."};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object*);
static const lean_array_object l_Lean_Parser_ParserFn_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_ParserFn_run___closed__0 = (const lean_object*)&l_Lean_Parser_ParserFn_run___closed__0_value;
static const lean_ctor_object l_Lean_Parser_ParserFn_run___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_ParserFn_run___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_ParserFn_run___closed__1 = (const lean_object*)&l_Lean_Parser_ParserFn_run___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object* v_info_1_, lean_object* v_val_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3_, 0, v_info_1_);
lean_ctor_set(v___x_3_, 1, v_val_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object* v_info_4_, lean_object* v_rawVal_5_, lean_object* v_val_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_8_, 0, v_info_4_);
lean_ctor_set(v___x_8_, 1, v_rawVal_5_);
lean_ctor_set(v___x_8_, 2, v_val_6_);
lean_ctor_set(v___x_8_, 3, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object* v_input_9_, lean_object* v_pos_10_){
_start:
{
lean_object* v___x_11_; uint32_t v___x_12_; 
v___x_11_ = lean_string_utf8_next(v_input_9_, v_pos_10_);
v___x_12_ = lean_string_utf8_get(v_input_9_, v___x_11_);
lean_dec(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object* v_input_13_, lean_object* v_pos_14_){
_start:
{
uint32_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Parser_getNext(v_input_13_, v_pos_14_);
lean_dec(v_pos_14_);
lean_dec_ref(v_input_13_);
v_r_16_ = lean_box_uint32(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_Lean_Parser_maxPrec(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1024u);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Parser_argPrec(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1023u);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Parser_leadPrec(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(1022u);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Parser_minPrec(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(10u);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
lean_object* v_ks_25_; lean_object* v_vs_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_50_; 
v_ks_25_ = lean_ctor_get(v_x_21_, 0);
v_vs_26_ = lean_ctor_get(v_x_21_, 1);
v_isSharedCheck_50_ = !lean_is_exclusive(v_x_21_);
if (v_isSharedCheck_50_ == 0)
{
v___x_28_ = v_x_21_;
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_vs_26_);
lean_inc(v_ks_25_);
lean_dec(v_x_21_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_array_get_size(v_ks_25_);
v___x_31_ = lean_nat_dec_lt(v_x_22_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec(v_x_22_);
v___x_32_ = lean_array_push(v_ks_25_, v_x_23_);
v___x_33_ = lean_array_push(v_vs_26_, v_x_24_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_33_);
lean_ctor_set(v___x_28_, 0, v___x_32_);
v___x_35_ = v___x_28_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v_k_x27_37_; uint8_t v___x_38_; 
v_k_x27_37_ = lean_array_fget_borrowed(v_ks_25_, v_x_22_);
v___x_38_ = lean_name_eq(v_x_23_, v_k_x27_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_40_; 
if (v_isShared_29_ == 0)
{
v___x_40_ = v___x_28_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_ks_25_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_vs_26_);
v___x_40_ = v_reuseFailAlloc_44_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_add(v_x_22_, v___x_41_);
lean_dec(v_x_22_);
v_x_21_ = v___x_40_;
v_x_22_ = v___x_42_;
goto _start;
}
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = lean_array_fset(v_ks_25_, v_x_22_, v_x_23_);
v___x_46_ = lean_array_fset(v_vs_26_, v_x_22_, v_x_24_);
lean_dec(v_x_22_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_46_);
lean_ctor_set(v___x_28_, 0, v___x_45_);
v___x_48_ = v___x_28_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_51_, lean_object* v_k_52_, lean_object* v_v_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_51_, v___x_54_, v_k_52_, v_v_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object* v_x_57_, size_t v_x_58_, size_t v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v_es_62_; size_t v___x_63_; size_t v___x_64_; lean_object* v_j_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v_es_62_ = lean_ctor_get(v_x_57_, 0);
v___x_63_ = ((size_t)31ULL);
v___x_64_ = lean_usize_land(v_x_58_, v___x_63_);
v_j_65_ = lean_usize_to_nat(v___x_64_);
v___x_66_ = lean_array_get_size(v_es_62_);
v___x_67_ = lean_nat_dec_lt(v_j_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_dec(v_j_65_);
lean_dec(v_x_61_);
lean_dec(v_x_60_);
return v_x_57_;
}
else
{
lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_106_; 
lean_inc_ref(v_es_62_);
v_isSharedCheck_106_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v_x_57_, 0);
lean_dec(v_unused_107_);
v___x_69_ = v_x_57_;
v_isShared_70_ = v_isSharedCheck_106_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_x_57_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_106_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v_v_71_; lean_object* v___x_72_; lean_object* v_xs_x27_73_; lean_object* v___y_75_; 
v_v_71_ = lean_array_fget(v_es_62_, v_j_65_);
v___x_72_ = lean_box(0);
v_xs_x27_73_ = lean_array_fset(v_es_62_, v_j_65_, v___x_72_);
switch(lean_obj_tag(v_v_71_))
{
case 0:
{
lean_object* v_key_80_; lean_object* v_val_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_91_; 
v_key_80_ = lean_ctor_get(v_v_71_, 0);
v_val_81_ = lean_ctor_get(v_v_71_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_v_71_);
if (v_isSharedCheck_91_ == 0)
{
v___x_83_ = v_v_71_;
v_isShared_84_ = v_isSharedCheck_91_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_val_81_);
lean_inc(v_key_80_);
lean_dec(v_v_71_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_91_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
uint8_t v___x_85_; 
v___x_85_ = lean_name_eq(v_x_60_, v_key_80_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_del_object(v___x_83_);
v___x_86_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_80_, v_val_81_, v_x_60_, v_x_61_);
v___x_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___y_75_ = v___x_87_;
goto v___jp_74_;
}
else
{
lean_object* v___x_89_; 
lean_dec(v_val_81_);
lean_dec(v_key_80_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 1, v_x_61_);
lean_ctor_set(v___x_83_, 0, v_x_60_);
v___x_89_ = v___x_83_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_x_60_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_x_61_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
v___y_75_ = v___x_89_;
goto v___jp_74_;
}
}
}
}
case 1:
{
lean_object* v_node_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_104_; 
v_node_92_ = lean_ctor_get(v_v_71_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v_v_71_);
if (v_isSharedCheck_104_ == 0)
{
v___x_94_ = v_v_71_;
v_isShared_95_ = v_isSharedCheck_104_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_node_92_);
lean_dec(v_v_71_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_104_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
size_t v___x_96_; size_t v___x_97_; size_t v___x_98_; size_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_96_ = ((size_t)5ULL);
v___x_97_ = lean_usize_shift_right(v_x_58_, v___x_96_);
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_add(v_x_59_, v___x_98_);
v___x_100_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_node_92_, v___x_97_, v___x_99_, v_x_60_, v_x_61_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_100_);
v___x_102_ = v___x_94_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
v___y_75_ = v___x_102_;
goto v___jp_74_;
}
}
}
default: 
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v_x_60_);
lean_ctor_set(v___x_105_, 1, v_x_61_);
v___y_75_ = v___x_105_;
goto v___jp_74_;
}
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_array_fset(v_xs_x27_73_, v_j_65_, v___y_75_);
lean_dec(v_j_65_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_76_);
v___x_78_ = v___x_69_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
}
else
{
lean_object* v_ks_108_; lean_object* v_vs_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_127_; 
v_ks_108_ = lean_ctor_get(v_x_57_, 0);
v_vs_109_ = lean_ctor_get(v_x_57_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_127_ == 0)
{
v___x_111_ = v_x_57_;
v_isShared_112_ = v_isSharedCheck_127_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_vs_109_);
lean_inc(v_ks_108_);
lean_dec(v_x_57_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_127_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_ks_108_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_vs_109_);
v___x_114_ = v_reuseFailAlloc_126_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v_newNode_115_; size_t v___x_116_; uint8_t v___x_117_; 
v_newNode_115_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v___x_114_, v_x_60_, v_x_61_);
v___x_116_ = ((size_t)7ULL);
v___x_117_ = lean_usize_dec_le(v___x_116_, v_x_59_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_115_);
v___x_119_ = lean_unsigned_to_nat(4u);
v___x_120_ = lean_nat_dec_lt(v___x_118_, v___x_119_);
lean_dec(v___x_118_);
if (v___x_120_ == 0)
{
lean_object* v_ks_121_; lean_object* v_vs_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v_ks_121_ = lean_ctor_get(v_newNode_115_, 0);
lean_inc_ref(v_ks_121_);
v_vs_122_ = lean_ctor_get(v_newNode_115_, 1);
lean_inc_ref(v_vs_122_);
lean_dec_ref(v_newNode_115_);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0);
v___x_125_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_x_59_, v_ks_121_, v_vs_122_, v___x_123_, v___x_124_);
lean_dec_ref(v_vs_122_);
lean_dec_ref(v_ks_121_);
return v___x_125_;
}
else
{
return v_newNode_115_;
}
}
else
{
return v_newNode_115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_128_, lean_object* v_keys_129_, lean_object* v_vals_130_, lean_object* v_i_131_, lean_object* v_entries_132_){
_start:
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = lean_array_get_size(v_keys_129_);
v___x_134_ = lean_nat_dec_lt(v_i_131_, v___x_133_);
if (v___x_134_ == 0)
{
lean_dec(v_i_131_);
return v_entries_132_;
}
else
{
lean_object* v_k_135_; lean_object* v_v_136_; uint64_t v___y_138_; 
v_k_135_ = lean_array_fget_borrowed(v_keys_129_, v_i_131_);
v_v_136_ = lean_array_fget_borrowed(v_vals_130_, v_i_131_);
if (lean_obj_tag(v_k_135_) == 0)
{
uint64_t v___x_149_; 
v___x_149_ = 1723ULL;
v___y_138_ = v___x_149_;
goto v___jp_137_;
}
else
{
uint64_t v_hash_150_; 
v_hash_150_ = lean_ctor_get_uint64(v_k_135_, sizeof(void*)*2);
v___y_138_ = v_hash_150_;
goto v___jp_137_;
}
v___jp_137_:
{
size_t v_h_139_; size_t v___x_140_; lean_object* v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v_h_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_h_139_ = lean_uint64_to_usize(v___y_138_);
v___x_140_ = ((size_t)5ULL);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = ((size_t)1ULL);
v___x_143_ = lean_usize_sub(v_depth_128_, v___x_142_);
v___x_144_ = lean_usize_mul(v___x_140_, v___x_143_);
v_h_145_ = lean_usize_shift_right(v_h_139_, v___x_144_);
v___x_146_ = lean_nat_add(v_i_131_, v___x_141_);
lean_dec(v_i_131_);
lean_inc(v_v_136_);
lean_inc(v_k_135_);
v___x_147_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_entries_132_, v_h_145_, v_depth_128_, v_k_135_, v_v_136_);
v_i_131_ = v___x_146_;
v_entries_132_ = v___x_147_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_151_, lean_object* v_keys_152_, lean_object* v_vals_153_, lean_object* v_i_154_, lean_object* v_entries_155_){
_start:
{
size_t v_depth_boxed_156_; lean_object* v_res_157_; 
v_depth_boxed_156_ = lean_unbox_usize(v_depth_151_);
lean_dec(v_depth_151_);
v_res_157_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_156_, v_keys_152_, v_vals_153_, v_i_154_, v_entries_155_);
lean_dec_ref(v_vals_153_);
lean_dec_ref(v_keys_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
size_t v_x_356__boxed_163_; size_t v_x_357__boxed_164_; lean_object* v_res_165_; 
v_x_356__boxed_163_ = lean_unbox_usize(v_x_159_);
lean_dec(v_x_159_);
v_x_357__boxed_164_ = lean_unbox_usize(v_x_160_);
lean_dec(v_x_160_);
v_res_165_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_158_, v_x_356__boxed_163_, v_x_357__boxed_164_, v_x_161_, v_x_162_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object* v_x_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
uint64_t v___y_170_; 
if (lean_obj_tag(v_x_167_) == 0)
{
uint64_t v___x_174_; 
v___x_174_ = 1723ULL;
v___y_170_ = v___x_174_;
goto v___jp_169_;
}
else
{
uint64_t v_hash_175_; 
v_hash_175_ = lean_ctor_get_uint64(v_x_167_, sizeof(void*)*2);
v___y_170_ = v_hash_175_;
goto v___jp_169_;
}
v___jp_169_:
{
size_t v___x_171_; size_t v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_uint64_to_usize(v___y_170_);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_166_, v___x_171_, v___x_172_, v_x_167_, v_x_168_);
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object* v_s_176_, lean_object* v_k_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_box(0);
v___x_179_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_s_176_, v_k_177_, v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object* v_00_u03b2_180_, lean_object* v_x_181_, lean_object* v_x_182_, lean_object* v_x_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_x_181_, v_x_182_, v_x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object* v_00_u03b2_185_, lean_object* v_x_186_, size_t v_x_187_, size_t v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_186_, v_x_187_, v_x_188_, v_x_189_, v_x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_192_, lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
size_t v_x_540__boxed_198_; size_t v_x_541__boxed_199_; lean_object* v_res_200_; 
v_x_540__boxed_198_ = lean_unbox_usize(v_x_194_);
lean_dec(v_x_194_);
v_x_541__boxed_199_ = lean_unbox_usize(v_x_195_);
lean_dec(v_x_195_);
v_res_200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(v_00_u03b2_192_, v_x_193_, v_x_540__boxed_198_, v_x_541__boxed_199_, v_x_196_, v_x_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_201_, lean_object* v_n_202_, lean_object* v_k_203_, lean_object* v_v_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v_n_202_, v_k_203_, v_v_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_206_, size_t v_depth_207_, lean_object* v_keys_208_, lean_object* v_vals_209_, lean_object* v_heq_210_, lean_object* v_i_211_, lean_object* v_entries_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_207_, v_keys_208_, v_vals_209_, v_i_211_, v_entries_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_214_, lean_object* v_depth_215_, lean_object* v_keys_216_, lean_object* v_vals_217_, lean_object* v_heq_218_, lean_object* v_i_219_, lean_object* v_entries_220_){
_start:
{
size_t v_depth_boxed_221_; lean_object* v_res_222_; 
v_depth_boxed_221_ = lean_unbox_usize(v_depth_215_);
lean_dec(v_depth_215_);
v_res_222_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(v_00_u03b2_214_, v_depth_boxed_221_, v_keys_216_, v_vals_217_, v_heq_218_, v_i_219_, v_entries_220_);
lean_dec_ref(v_vals_217_);
lean_dec_ref(v_keys_216_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_223_, lean_object* v_x_224_, lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_224_, v_x_225_, v_x_226_, v_x_227_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10));
v___x_256_ = l_Lean_mkAtom(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12);
v___x_258_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_259_ = lean_array_push(v___x_258_, v___x_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_271_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_272_ = lean_array_push(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_273_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17);
v___x_274_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15));
v___x_275_ = lean_box(2);
v___x_276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
lean_ctor_set(v___x_276_, 2, v___x_273_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18);
v___x_278_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13);
v___x_279_ = lean_array_push(v___x_278_, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_281_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19);
v___x_282_ = lean_array_push(v___x_281_, v___x_280_);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_284_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20);
v___x_285_ = lean_array_push(v___x_284_, v___x_283_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_287_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21);
v___x_288_ = lean_array_push(v___x_287_, v___x_286_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_290_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22);
v___x_291_ = lean_array_push(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_292_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23);
v___x_293_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11));
v___x_294_ = lean_box(2);
v___x_295_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_293_);
lean_ctor_set(v___x_295_, 2, v___x_292_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24);
v___x_297_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_298_ = lean_array_push(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25);
v___x_300_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9));
v___x_301_ = lean_box(2);
v___x_302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v___x_300_);
lean_ctor_set(v___x_302_, 2, v___x_299_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26);
v___x_304_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_305_ = lean_array_push(v___x_304_, v___x_303_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_306_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27);
v___x_307_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7));
v___x_308_ = lean_box(2);
v___x_309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_307_);
lean_ctor_set(v___x_309_, 2, v___x_306_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28);
v___x_311_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_312_ = lean_array_push(v___x_311_, v___x_310_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_313_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29);
v___x_314_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4));
v___x_315_ = lean_box(2);
v___x_316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_314_);
lean_ctor_set(v___x_316_, 2, v___x_313_);
return v___x_316_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_317_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext___closed__1(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = l_Lean_instInhabitedFileMap_default;
v___x_321_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_322_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
lean_ctor_set(v___x_322_, 2, v___x_320_);
lean_ctor_set(v___x_322_, 3, v___x_319_);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext(void){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lean_obj_once(&l_Lean_Parser_instInhabitedInputContext___closed__1, &l_Lean_Parser_instInhabitedInputContext___closed__1_once, _init_l_Lean_Parser_instInhabitedInputContext___closed__1);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_mk___auto__1(void){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object* v_input_325_, lean_object* v_fileName_326_, lean_object* v_endPos_327_, lean_object* v_fileMap_328_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_329_, 0, v_input_325_);
lean_ctor_set(v___x_329_, 1, v_fileName_326_);
lean_ctor_set(v___x_329_, 2, v_fileMap_328_);
lean_ctor_set(v___x_329_, 3, v_endPos_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object* v_input_330_, lean_object* v_fileName_331_, lean_object* v_endPos_332_, lean_object* v_endPos__valid_333_, lean_object* v_fileMap_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_335_, 0, v_input_330_);
lean_ctor_set(v___x_335_, 1, v_fileName_331_);
lean_ctor_set(v___x_335_, 2, v_fileMap_334_);
lean_ctor_set(v___x_335_, 3, v_endPos_332_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object* v_c_336_){
_start:
{
lean_object* v_inputString_337_; lean_object* v_endPos_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_inputString_337_ = lean_ctor_get(v_c_336_, 0);
v_endPos_338_ = lean_ctor_get(v_c_336_, 3);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_string_utf8_extract(v_inputString_337_, v___x_339_, v_endPos_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object* v_c_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Parser_InputContext_input(v_c_341_);
lean_dec_ref(v_c_341_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object* v_c_343_, lean_object* v_p_344_){
_start:
{
lean_object* v___x_345_; lean_object* v_toLinearPreorderPackage_346_; lean_object* v_toPreorderPackage_347_; lean_object* v_endPos_348_; uint8_t v___x_349_; 
v___x_345_ = l_String_Pos_Raw_instLinearOrderPackage;
v_toLinearPreorderPackage_346_ = lean_ctor_get(v___x_345_, 0);
v_toPreorderPackage_347_ = lean_ctor_get(v_toLinearPreorderPackage_346_, 0);
v_endPos_348_ = lean_ctor_get(v_c_343_, 3);
lean_inc(v_endPos_348_);
lean_dec_ref(v_c_343_);
lean_inc_ref(v_toPreorderPackage_347_);
v___x_349_ = l_Std_instUDecidableLE___redArg(v_toPreorderPackage_347_, v_endPos_348_, v_p_344_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object* v_c_350_, lean_object* v_p_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = l_Lean_Parser_InputContext_atEnd(v_c_350_, v_p_351_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object* v_c_354_, lean_object* v_p_355_){
_start:
{
lean_object* v_inputString_356_; uint32_t v___x_357_; 
v_inputString_356_ = lean_ctor_get(v_c_354_, 0);
v___x_357_ = lean_string_utf8_get(v_inputString_356_, v_p_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object* v_c_358_, lean_object* v_p_359_){
_start:
{
uint32_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Lean_Parser_InputContext_get(v_c_358_, v_p_359_);
lean_dec(v_p_359_);
lean_dec_ref(v_c_358_);
v_r_361_ = lean_box_uint32(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object* v_c_362_, lean_object* v_p_363_){
_start:
{
lean_object* v_inputString_364_; uint32_t v___x_365_; 
v_inputString_364_ = lean_ctor_get(v_c_362_, 0);
v___x_365_ = lean_string_utf8_get_fast(v_inputString_364_, v_p_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object* v_c_366_, lean_object* v_p_367_){
_start:
{
uint32_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Lean_Parser_InputContext_get_x27___redArg(v_c_366_, v_p_367_);
lean_dec(v_p_367_);
lean_dec_ref(v_c_366_);
v_r_369_ = lean_box_uint32(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object* v_c_370_, lean_object* v_p_371_, lean_object* v_h_372_){
_start:
{
lean_object* v_inputString_373_; uint32_t v___x_374_; 
v_inputString_373_ = lean_ctor_get(v_c_370_, 0);
v___x_374_ = lean_string_utf8_get_fast(v_inputString_373_, v_p_371_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object* v_c_375_, lean_object* v_p_376_, lean_object* v_h_377_){
_start:
{
uint32_t v_res_378_; lean_object* v_r_379_; 
v_res_378_ = l_Lean_Parser_InputContext_get_x27(v_c_375_, v_p_376_, v_h_377_);
lean_dec(v_p_376_);
lean_dec_ref(v_c_375_);
v_r_379_ = lean_box_uint32(v_res_378_);
return v_r_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object* v_c_380_, lean_object* v_p_381_){
_start:
{
lean_object* v_inputString_382_; lean_object* v___x_383_; 
v_inputString_382_ = lean_ctor_get(v_c_380_, 0);
v___x_383_ = lean_string_utf8_next(v_inputString_382_, v_p_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object* v_c_384_, lean_object* v_p_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Parser_InputContext_next(v_c_384_, v_p_385_);
lean_dec(v_p_385_);
lean_dec_ref(v_c_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object* v_c_387_, lean_object* v_p_388_){
_start:
{
lean_object* v_inputString_389_; lean_object* v___x_390_; 
v_inputString_389_ = lean_ctor_get(v_c_387_, 0);
v___x_390_ = lean_string_utf8_next_fast(v_inputString_389_, v_p_388_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object* v_c_391_, lean_object* v_p_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Parser_InputContext_next_x27___redArg(v_c_391_, v_p_392_);
lean_dec(v_p_392_);
lean_dec_ref(v_c_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object* v_c_394_, lean_object* v_p_395_, lean_object* v_h_396_){
_start:
{
lean_object* v_inputString_397_; lean_object* v___x_398_; 
v_inputString_397_ = lean_ctor_get(v_c_394_, 0);
v___x_398_ = lean_string_utf8_next_fast(v_inputString_397_, v_p_395_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object* v_c_399_, lean_object* v_p_400_, lean_object* v_h_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lean_Parser_InputContext_next_x27(v_c_399_, v_p_400_, v_h_401_);
lean_dec(v_p_400_);
lean_dec_ref(v_c_399_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object* v_c_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_inputString_406_; lean_object* v___x_407_; 
v_inputString_406_ = lean_ctor_get(v_c_403_, 0);
v___x_407_ = lean_string_utf8_extract(v_inputString_406_, v_a_404_, v_a_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object* v_c_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_Parser_InputContext_extract(v_c_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_c_408_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object* v_c_412_, lean_object* v_startPos_413_, lean_object* v_stopPos_414_){
_start:
{
lean_object* v_inputString_415_; lean_object* v_endPos_416_; uint8_t v___x_417_; 
v_inputString_415_ = lean_ctor_get(v_c_412_, 0);
v_endPos_416_ = lean_ctor_get(v_c_412_, 3);
v___x_417_ = lean_nat_dec_le(v_stopPos_414_, v_endPos_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
lean_dec(v_stopPos_414_);
lean_inc(v_endPos_416_);
lean_inc_ref(v_inputString_415_);
v___x_418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_418_, 0, v_inputString_415_);
lean_ctor_set(v___x_418_, 1, v_startPos_413_);
lean_ctor_set(v___x_418_, 2, v_endPos_416_);
return v___x_418_;
}
else
{
lean_object* v___x_419_; 
lean_inc_ref(v_inputString_415_);
v___x_419_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_419_, 0, v_inputString_415_);
lean_ctor_set(v___x_419_, 1, v_startPos_413_);
lean_ctor_set(v___x_419_, 2, v_stopPos_414_);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object* v_c_420_, lean_object* v_startPos_421_, lean_object* v_stopPos_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Parser_InputContext_substring(v_c_420_, v_startPos_421_, v_stopPos_422_);
lean_dec_ref(v_c_420_);
return v_res_423_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object* v_input_424_, lean_object* v_pos_425_){
_start:
{
lean_object* v_inputString_426_; lean_object* v___x_427_; uint32_t v___x_428_; 
v_inputString_426_ = lean_ctor_get(v_input_424_, 0);
v___x_427_ = lean_string_utf8_next(v_inputString_426_, v_pos_425_);
v___x_428_ = lean_string_utf8_get(v_inputString_426_, v___x_427_);
lean_dec(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object* v_input_429_, lean_object* v_pos_430_){
_start:
{
uint32_t v_res_431_; lean_object* v_r_432_; 
v_res_431_ = l_Lean_Parser_InputContext_getNext(v_input_429_, v_pos_430_);
lean_dec(v_pos_430_);
lean_dec_ref(v_input_429_);
v_r_432_ = lean_box_uint32(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object* v_c_433_, lean_object* v_pos_434_){
_start:
{
lean_object* v_inputString_435_; lean_object* v___x_436_; 
v_inputString_435_ = lean_ctor_get(v_c_433_, 0);
v___x_436_ = lean_string_utf8_prev(v_inputString_435_, v_pos_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object* v_c_437_, lean_object* v_pos_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Parser_InputContext_prev(v_c_437_, v_pos_438_);
lean_dec(v_pos_438_);
lean_dec_ref(v_c_437_);
return v_res_439_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(lean_object* v_a_441_, lean_object* v_b_442_){
_start:
{
lean_object* v_forbiddenTks_443_; lean_object* v_forbiddenTks_444_; size_t v___x_445_; size_t v___x_446_; uint8_t v___x_447_; 
v_forbiddenTks_443_ = lean_ctor_get(v_a_441_, 3);
v_forbiddenTks_444_ = lean_ctor_get(v_b_442_, 3);
v___x_445_ = lean_ptr_addr(v_forbiddenTks_443_);
v___x_446_ = lean_ptr_addr(v_forbiddenTks_444_);
v___x_447_ = lean_usize_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_448_ = lean_array_get_size(v_forbiddenTks_443_);
v___x_449_ = lean_array_get_size(v_forbiddenTks_444_);
v___x_450_ = lean_nat_dec_eq(v___x_448_, v___x_449_);
if (v___x_450_ == 0)
{
return v___x_450_;
}
else
{
lean_object* v___f_451_; uint8_t v___x_452_; 
v___f_451_ = ((lean_object*)(l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0));
v___x_452_ = l_Array_isEqvAux___redArg(v_forbiddenTks_443_, v_forbiddenTks_444_, v___f_451_, v___x_448_);
return v___x_452_;
}
}
else
{
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___boxed(lean_object* v_a_453_, lean_object* v_b_454_){
_start:
{
uint8_t v_res_455_; lean_object* v_r_456_; 
v_res_455_ = l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(v_a_453_, v_b_454_);
lean_dec_ref(v_b_454_);
lean_dec_ref(v_a_453_);
v_r_456_ = lean_box(v_res_455_);
return v_r_456_;
}
}
static lean_object* _init_l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0(void){
_start:
{
lean_object* v___x_457_; lean_object* v___f_458_; 
v___x_457_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_458_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_458_, 0, v___x_457_);
return v___f_458_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext___lam__0(lean_object* v___f_459_, lean_object* v_a_460_, lean_object* v_b_461_){
_start:
{
lean_object* v_prec_462_; lean_object* v_quotDepth_463_; uint8_t v_suppressInsideQuot_464_; lean_object* v_savedPos_x3f_465_; lean_object* v_forbiddenTks_466_; lean_object* v_prec_467_; lean_object* v_quotDepth_468_; uint8_t v_suppressInsideQuot_469_; lean_object* v_savedPos_x3f_470_; lean_object* v_forbiddenTks_471_; uint8_t v___x_482_; 
v_prec_462_ = lean_ctor_get(v_a_460_, 0);
lean_inc(v_prec_462_);
v_quotDepth_463_ = lean_ctor_get(v_a_460_, 1);
lean_inc(v_quotDepth_463_);
v_suppressInsideQuot_464_ = lean_ctor_get_uint8(v_a_460_, sizeof(void*)*4);
v_savedPos_x3f_465_ = lean_ctor_get(v_a_460_, 2);
lean_inc(v_savedPos_x3f_465_);
v_forbiddenTks_466_ = lean_ctor_get(v_a_460_, 3);
lean_inc_ref(v_forbiddenTks_466_);
lean_dec_ref(v_a_460_);
v_prec_467_ = lean_ctor_get(v_b_461_, 0);
lean_inc(v_prec_467_);
v_quotDepth_468_ = lean_ctor_get(v_b_461_, 1);
lean_inc(v_quotDepth_468_);
v_suppressInsideQuot_469_ = lean_ctor_get_uint8(v_b_461_, sizeof(void*)*4);
v_savedPos_x3f_470_ = lean_ctor_get(v_b_461_, 2);
lean_inc(v_savedPos_x3f_470_);
v_forbiddenTks_471_ = lean_ctor_get(v_b_461_, 3);
lean_inc_ref(v_forbiddenTks_471_);
lean_dec_ref(v_b_461_);
v___x_482_ = lean_nat_dec_eq(v_prec_462_, v_prec_467_);
lean_dec(v_prec_467_);
lean_dec(v_prec_462_);
if (v___x_482_ == 0)
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec(v_savedPos_x3f_470_);
lean_dec(v_quotDepth_468_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec(v_savedPos_x3f_465_);
lean_dec(v_quotDepth_463_);
lean_dec_ref(v___f_459_);
return v___x_482_;
}
else
{
uint8_t v___x_483_; 
v___x_483_ = lean_nat_dec_eq(v_quotDepth_463_, v_quotDepth_468_);
lean_dec(v_quotDepth_468_);
lean_dec(v_quotDepth_463_);
if (v___x_483_ == 0)
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec(v_savedPos_x3f_470_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec(v_savedPos_x3f_465_);
lean_dec_ref(v___f_459_);
return v___x_483_;
}
else
{
if (v_suppressInsideQuot_469_ == 0)
{
if (v_suppressInsideQuot_464_ == 0)
{
goto v___jp_472_;
}
else
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec(v_savedPos_x3f_470_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec(v_savedPos_x3f_465_);
lean_dec_ref(v___f_459_);
return v_suppressInsideQuot_469_;
}
}
else
{
if (v_suppressInsideQuot_464_ == 0)
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec(v_savedPos_x3f_470_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec(v_savedPos_x3f_465_);
lean_dec_ref(v___f_459_);
return v_suppressInsideQuot_464_;
}
else
{
goto v___jp_472_;
}
}
}
}
v___jp_472_:
{
lean_object* v___f_473_; uint8_t v___x_474_; 
v___f_473_ = lean_obj_once(&l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0, &l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0_once, _init_l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0);
v___x_474_ = l_instBEqOption_beq___redArg(v___f_473_, v_savedPos_x3f_465_, v_savedPos_x3f_470_);
if (v___x_474_ == 0)
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec_ref(v___f_459_);
return v___x_474_;
}
else
{
size_t v___x_475_; size_t v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_ptr_addr(v_forbiddenTks_466_);
v___x_476_ = lean_ptr_addr(v_forbiddenTks_471_);
v___x_477_ = lean_usize_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_478_ = lean_array_get_size(v_forbiddenTks_466_);
v___x_479_ = lean_array_get_size(v_forbiddenTks_471_);
v___x_480_ = lean_nat_dec_eq(v___x_478_, v___x_479_);
if (v___x_480_ == 0)
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec_ref(v___f_459_);
return v___x_480_;
}
else
{
uint8_t v___x_481_; 
v___x_481_ = l_Array_isEqvAux___redArg(v_forbiddenTks_466_, v_forbiddenTks_471_, v___f_459_, v___x_478_);
lean_dec_ref(v_forbiddenTks_471_);
lean_dec_ref(v_forbiddenTks_466_);
return v___x_481_;
}
}
else
{
lean_dec_ref(v_forbiddenTks_471_);
lean_dec_ref(v_forbiddenTks_466_);
lean_dec_ref(v___f_459_);
return v___x_477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed(lean_object* v___f_484_, lean_object* v_a_485_, lean_object* v_b_486_){
_start:
{
uint8_t v_res_487_; lean_object* v_r_488_; 
v_res_487_ = l_Lean_Parser_instBEqCacheableParserContext___lam__0(v___f_484_, v_a_485_, v_b_486_);
v_r_488_ = lean_box(v_res_487_);
return v_r_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object* v_x_492_){
_start:
{
lean_object* v_toInputContext_493_; 
v_toInputContext_493_ = lean_ctor_get(v_x_492_, 0);
lean_inc_ref(v_toInputContext_493_);
return v_toInputContext_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object* v_x_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_Parser_instCoeParserContextInputContext___lam__0(v_x_494_);
lean_dec_ref(v_x_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object* v_c_498_, lean_object* v_endPos_499_){
_start:
{
lean_object* v_toInputContext_500_; lean_object* v_toParserModuleContext_501_; lean_object* v_toCacheableParserContext_502_; lean_object* v_tokens_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_521_; 
v_toInputContext_500_ = lean_ctor_get(v_c_498_, 0);
v_toParserModuleContext_501_ = lean_ctor_get(v_c_498_, 1);
v_toCacheableParserContext_502_ = lean_ctor_get(v_c_498_, 2);
v_tokens_503_ = lean_ctor_get(v_c_498_, 3);
v_isSharedCheck_521_ = !lean_is_exclusive(v_c_498_);
if (v_isSharedCheck_521_ == 0)
{
v___x_505_ = v_c_498_;
v_isShared_506_ = v_isSharedCheck_521_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_tokens_503_);
lean_inc(v_toCacheableParserContext_502_);
lean_inc(v_toParserModuleContext_501_);
lean_inc(v_toInputContext_500_);
lean_dec(v_c_498_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_521_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v_inputString_507_; lean_object* v_fileName_508_; lean_object* v_fileMap_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_519_; 
v_inputString_507_ = lean_ctor_get(v_toInputContext_500_, 0);
v_fileName_508_ = lean_ctor_get(v_toInputContext_500_, 1);
v_fileMap_509_ = lean_ctor_get(v_toInputContext_500_, 2);
v_isSharedCheck_519_ = !lean_is_exclusive(v_toInputContext_500_);
if (v_isSharedCheck_519_ == 0)
{
lean_object* v_unused_520_; 
v_unused_520_ = lean_ctor_get(v_toInputContext_500_, 3);
lean_dec(v_unused_520_);
v___x_511_ = v_toInputContext_500_;
v_isShared_512_ = v_isSharedCheck_519_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_fileMap_509_);
lean_inc(v_fileName_508_);
lean_inc(v_inputString_507_);
lean_dec(v_toInputContext_500_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_519_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 3, v_endPos_499_);
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_inputString_507_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_fileName_508_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_fileMap_509_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_endPos_499_);
v___x_514_ = v_reuseFailAlloc_518_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_516_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_514_);
v___x_516_ = v___x_505_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_toParserModuleContext_501_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_toCacheableParserContext_502_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_tokens_503_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object* v_c_522_, lean_object* v_endPos_523_, lean_object* v_endPos__valid_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_Parser_ParserContext_setEndPos___redArg(v_c_522_, v_endPos_523_);
return v___x_525_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object* v_x_532_, lean_object* v_x_533_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
if (lean_obj_tag(v_x_533_) == 0)
{
uint8_t v___x_534_; 
v___x_534_ = 1;
return v___x_534_;
}
else
{
uint8_t v___x_535_; 
v___x_535_ = 0;
return v___x_535_;
}
}
else
{
if (lean_obj_tag(v_x_533_) == 0)
{
uint8_t v___x_536_; 
v___x_536_ = 0;
return v___x_536_;
}
else
{
lean_object* v_head_537_; lean_object* v_tail_538_; lean_object* v_head_539_; lean_object* v_tail_540_; uint8_t v___x_541_; 
v_head_537_ = lean_ctor_get(v_x_532_, 0);
v_tail_538_ = lean_ctor_get(v_x_532_, 1);
v_head_539_ = lean_ctor_get(v_x_533_, 0);
v_tail_540_ = lean_ctor_get(v_x_533_, 1);
v___x_541_ = lean_string_dec_eq(v_head_537_, v_head_539_);
if (v___x_541_ == 0)
{
return v___x_541_;
}
else
{
v_x_532_ = v_tail_538_;
v_x_533_ = v_tail_540_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
uint8_t v_res_545_; lean_object* v_r_546_; 
v_res_545_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_x_543_, v_x_544_);
lean_dec(v_x_544_);
lean_dec(v_x_543_);
v_r_546_ = lean_box(v_res_545_);
return v_r_546_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object* v_x_547_, lean_object* v_x_548_){
_start:
{
lean_object* v_unexpectedTk_549_; lean_object* v_unexpected_550_; lean_object* v_expected_551_; lean_object* v_unexpectedTk_552_; lean_object* v_unexpected_553_; lean_object* v_expected_554_; uint8_t v___x_555_; 
v_unexpectedTk_549_ = lean_ctor_get(v_x_547_, 0);
v_unexpected_550_ = lean_ctor_get(v_x_547_, 1);
v_expected_551_ = lean_ctor_get(v_x_547_, 2);
v_unexpectedTk_552_ = lean_ctor_get(v_x_548_, 0);
v_unexpected_553_ = lean_ctor_get(v_x_548_, 1);
v_expected_554_ = lean_ctor_get(v_x_548_, 2);
v___x_555_ = l_Lean_Syntax_structEq(v_unexpectedTk_549_, v_unexpectedTk_552_);
if (v___x_555_ == 0)
{
return v___x_555_;
}
else
{
uint8_t v___x_556_; 
v___x_556_ = lean_string_dec_eq(v_unexpected_550_, v_unexpected_553_);
if (v___x_556_ == 0)
{
return v___x_556_;
}
else
{
uint8_t v___x_557_; 
v___x_557_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_551_, v_expected_554_);
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
uint8_t v_res_560_; lean_object* v_r_561_; 
v_res_560_ = l_Lean_Parser_instBEqError_beq(v_x_558_, v_x_559_);
lean_dec_ref(v_x_559_);
lean_dec_ref(v_x_558_);
v_r_561_ = lean_box(v_res_560_);
return v_r_561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object* v_x_566_){
_start:
{
if (lean_obj_tag(v_x_566_) == 0)
{
lean_object* v___x_567_; 
v___x_567_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
return v___x_567_;
}
else
{
lean_object* v_tail_568_; 
v_tail_568_ = lean_ctor_get(v_x_566_, 1);
if (lean_obj_tag(v_tail_568_) == 0)
{
lean_object* v_head_569_; 
v_head_569_ = lean_ctor_get(v_x_566_, 0);
lean_inc(v_head_569_);
lean_dec_ref_known(v_x_566_, 2);
return v_head_569_;
}
else
{
lean_object* v_tail_570_; 
lean_inc_ref(v_tail_568_);
v_tail_570_ = lean_ctor_get(v_tail_568_, 1);
if (lean_obj_tag(v_tail_570_) == 0)
{
lean_object* v_head_571_; lean_object* v_head_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_head_571_ = lean_ctor_get(v_x_566_, 0);
lean_inc(v_head_571_);
lean_dec_ref_known(v_x_566_, 2);
v_head_572_ = lean_ctor_get(v_tail_568_, 0);
lean_inc(v_head_572_);
lean_dec_ref_known(v_tail_568_, 2);
v___x_573_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0));
v___x_574_ = lean_string_append(v_head_571_, v___x_573_);
v___x_575_ = lean_string_append(v___x_574_, v_head_572_);
lean_dec(v_head_572_);
return v___x_575_;
}
else
{
lean_object* v_head_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_head_576_ = lean_ctor_get(v_x_566_, 0);
lean_inc(v_head_576_);
lean_dec_ref_known(v_x_566_, 2);
v___x_577_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_578_ = lean_string_append(v_head_576_, v___x_577_);
v___x_579_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_tail_568_);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
lean_dec_ref(v___x_579_);
return v___x_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object* v_as_581_){
_start:
{
lean_object* v___f_582_; lean_object* v___x_583_; 
v___f_582_ = ((lean_object*)(l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0));
v___x_583_ = l_List_eraseRepsBy___redArg(v___f_582_, v_as_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object* v_hi_584_, lean_object* v_pivot_585_, lean_object* v_as_586_, lean_object* v_i_587_, lean_object* v_k_588_){
_start:
{
uint8_t v___x_589_; 
v___x_589_ = lean_nat_dec_lt(v_k_588_, v_hi_584_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; lean_object* v___x_591_; 
lean_dec(v_k_588_);
v___x_590_ = lean_array_fswap(v_as_586_, v_i_587_, v_hi_584_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v_i_587_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
return v___x_591_;
}
else
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_array_fget_borrowed(v_as_586_, v_k_588_);
v___x_593_ = lean_string_dec_lt(v___x_592_, v_pivot_585_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_unsigned_to_nat(1u);
v___x_595_ = lean_nat_add(v_k_588_, v___x_594_);
lean_dec(v_k_588_);
v_k_588_ = v___x_595_;
goto _start;
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_597_ = lean_array_fswap(v_as_586_, v_i_587_, v_k_588_);
v___x_598_ = lean_unsigned_to_nat(1u);
v___x_599_ = lean_nat_add(v_i_587_, v___x_598_);
lean_dec(v_i_587_);
v___x_600_ = lean_nat_add(v_k_588_, v___x_598_);
lean_dec(v_k_588_);
v_as_586_ = v___x_597_;
v_i_587_ = v___x_599_;
v_k_588_ = v___x_600_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object* v_hi_602_, lean_object* v_pivot_603_, lean_object* v_as_604_, lean_object* v_i_605_, lean_object* v_k_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_602_, v_pivot_603_, v_as_604_, v_i_605_, v_k_606_);
lean_dec_ref(v_pivot_603_);
lean_dec(v_hi_602_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object* v_n_608_, lean_object* v_as_609_, lean_object* v_lo_610_, lean_object* v_hi_611_){
_start:
{
lean_object* v___y_613_; uint8_t v___x_623_; 
v___x_623_ = lean_nat_dec_lt(v_lo_610_, v_hi_611_);
if (v___x_623_ == 0)
{
lean_dec(v_lo_610_);
return v_as_609_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v_mid_626_; lean_object* v___y_628_; lean_object* v___y_634_; lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_624_ = lean_nat_add(v_lo_610_, v_hi_611_);
v___x_625_ = lean_unsigned_to_nat(1u);
v_mid_626_ = lean_nat_shiftr(v___x_624_, v___x_625_);
lean_dec(v___x_624_);
v___x_639_ = lean_array_fget_borrowed(v_as_609_, v_mid_626_);
v___x_640_ = lean_array_fget_borrowed(v_as_609_, v_lo_610_);
v___x_641_ = lean_string_dec_lt(v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
v___y_634_ = v_as_609_;
goto v___jp_633_;
}
else
{
lean_object* v___x_642_; 
v___x_642_ = lean_array_fswap(v_as_609_, v_lo_610_, v_mid_626_);
v___y_634_ = v___x_642_;
goto v___jp_633_;
}
v___jp_627_:
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_629_ = lean_array_fget_borrowed(v___y_628_, v_mid_626_);
v___x_630_ = lean_array_fget_borrowed(v___y_628_, v_hi_611_);
v___x_631_ = lean_string_dec_lt(v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
lean_dec(v_mid_626_);
v___y_613_ = v___y_628_;
goto v___jp_612_;
}
else
{
lean_object* v___x_632_; 
v___x_632_ = lean_array_fswap(v___y_628_, v_mid_626_, v_hi_611_);
lean_dec(v_mid_626_);
v___y_613_ = v___x_632_;
goto v___jp_612_;
}
}
v___jp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_635_ = lean_array_fget_borrowed(v___y_634_, v_hi_611_);
v___x_636_ = lean_array_fget_borrowed(v___y_634_, v_lo_610_);
v___x_637_ = lean_string_dec_lt(v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
v___y_628_ = v___y_634_;
goto v___jp_627_;
}
else
{
lean_object* v___x_638_; 
v___x_638_ = lean_array_fswap(v___y_634_, v_lo_610_, v_hi_611_);
v___y_628_ = v___x_638_;
goto v___jp_627_;
}
}
}
v___jp_612_:
{
lean_object* v_pivot_614_; lean_object* v___x_615_; lean_object* v_fst_616_; lean_object* v_snd_617_; uint8_t v___x_618_; 
v_pivot_614_ = lean_array_fget(v___y_613_, v_hi_611_);
lean_inc_n(v_lo_610_, 2);
v___x_615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_611_, v_pivot_614_, v___y_613_, v_lo_610_, v_lo_610_);
lean_dec(v_pivot_614_);
v_fst_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_fst_616_);
v_snd_617_ = lean_ctor_get(v___x_615_, 1);
lean_inc(v_snd_617_);
lean_dec_ref(v___x_615_);
v___x_618_ = lean_nat_dec_le(v_hi_611_, v_fst_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_608_, v_snd_617_, v_lo_610_, v_fst_616_);
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_nat_add(v_fst_616_, v___x_620_);
lean_dec(v_fst_616_);
v_as_609_ = v___x_619_;
v_lo_610_ = v___x_621_;
goto _start;
}
else
{
lean_dec(v_fst_616_);
lean_dec(v_lo_610_);
return v_snd_617_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object* v_n_643_, lean_object* v_as_644_, lean_object* v_lo_645_, lean_object* v_hi_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_643_, v_as_644_, v_lo_645_, v_hi_646_);
lean_dec(v_hi_646_);
lean_dec(v_n_643_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object* v_e_650_){
_start:
{
lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v_unexpected_683_; lean_object* v_expected_684_; lean_object* v___y_686_; lean_object* v___x_696_; uint8_t v___x_697_; 
v_unexpected_683_ = lean_ctor_get(v_e_650_, 1);
lean_inc_ref(v_unexpected_683_);
v_expected_684_ = lean_ctor_get(v_e_650_, 2);
lean_inc(v_expected_684_);
lean_dec_ref(v_e_650_);
v___x_696_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_697_ = lean_string_dec_eq(v_unexpected_683_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_box(0);
v___x_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_699_, 0, v_unexpected_683_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___y_686_ = v___x_699_;
goto v___jp_685_;
}
else
{
lean_object* v___x_700_; 
lean_dec_ref(v_unexpected_683_);
v___x_700_ = lean_box(0);
v___y_686_ = v___x_700_;
goto v___jp_685_;
}
v___jp_651_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__0));
v___x_655_ = l_List_appendTR___redArg(v___y_652_, v___y_653_);
v___x_656_ = l_String_intercalate(v___x_654_, v___x_655_);
return v___x_656_;
}
v___jp_657_:
{
lean_object* v___x_661_; lean_object* v_expected_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_661_ = lean_array_to_list(v___y_660_);
v_expected_662_ = l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(v___x_661_);
v___x_663_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__1));
v___x_664_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_expected_662_);
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
lean_dec_ref(v___x_664_);
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
lean_ctor_set(v___x_666_, 1, v___y_659_);
v___y_652_ = v___y_658_;
v___y_653_ = v___x_666_;
goto v___jp_651_;
}
v___jp_667_:
{
lean_object* v___x_674_; 
v___x_674_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v___y_670_, v___y_672_, v___y_668_, v___y_673_);
lean_dec(v___y_673_);
lean_dec(v___y_670_);
v___y_658_ = v___y_669_;
v___y_659_ = v___y_671_;
v___y_660_ = v___x_674_;
goto v___jp_657_;
}
v___jp_675_:
{
uint8_t v___x_682_; 
v___x_682_ = lean_nat_dec_le(v___y_681_, v___y_679_);
if (v___x_682_ == 0)
{
lean_dec(v___y_679_);
lean_inc(v___y_681_);
v___y_668_ = v___y_681_;
v___y_669_ = v___y_677_;
v___y_670_ = v___y_676_;
v___y_671_ = v___y_678_;
v___y_672_ = v___y_680_;
v___y_673_ = v___y_681_;
goto v___jp_667_;
}
else
{
v___y_668_ = v___y_681_;
v___y_669_ = v___y_677_;
v___y_670_ = v___y_676_;
v___y_671_ = v___y_678_;
v___y_672_ = v___y_680_;
v___y_673_ = v___y_679_;
goto v___jp_667_;
}
}
v___jp_685_:
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = lean_box(0);
v___x_688_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_684_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_689_ = lean_array_mk(v_expected_684_);
v___x_690_ = lean_array_get_size(v___x_689_);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_nat_dec_eq(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_693_ = lean_unsigned_to_nat(1u);
v___x_694_ = lean_nat_sub(v___x_690_, v___x_693_);
v___x_695_ = lean_nat_dec_le(v___x_691_, v___x_694_);
if (v___x_695_ == 0)
{
lean_inc(v___x_694_);
v___y_676_ = v___x_690_;
v___y_677_ = v___y_686_;
v___y_678_ = v___x_687_;
v___y_679_ = v___x_694_;
v___y_680_ = v___x_689_;
v___y_681_ = v___x_694_;
goto v___jp_675_;
}
else
{
v___y_676_ = v___x_690_;
v___y_677_ = v___y_686_;
v___y_678_ = v___x_687_;
v___y_679_ = v___x_694_;
v___y_680_ = v___x_689_;
v___y_681_ = v___x_691_;
goto v___jp_675_;
}
}
else
{
v___y_658_ = v___y_686_;
v___y_659_ = v___x_687_;
v___y_660_ = v___x_689_;
goto v___jp_657_;
}
}
else
{
lean_dec(v_expected_684_);
v___y_652_ = v___y_686_;
v___y_653_ = v___x_687_;
goto v___jp_651_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object* v_n_701_, lean_object* v_as_702_, lean_object* v_lo_703_, lean_object* v_hi_704_, lean_object* v_w_705_, lean_object* v_hlo_706_, lean_object* v_hhi_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_701_, v_as_702_, v_lo_703_, v_hi_704_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object* v_n_709_, lean_object* v_as_710_, lean_object* v_lo_711_, lean_object* v_hi_712_, lean_object* v_w_713_, lean_object* v_hlo_714_, lean_object* v_hhi_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(v_n_709_, v_as_710_, v_lo_711_, v_hi_712_, v_w_713_, v_hlo_714_, v_hhi_715_);
lean_dec(v_hi_712_);
lean_dec(v_n_709_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object* v_n_717_, lean_object* v_lo_718_, lean_object* v_hi_719_, lean_object* v_hhi_720_, lean_object* v_pivot_721_, lean_object* v_as_722_, lean_object* v_i_723_, lean_object* v_k_724_, lean_object* v_ilo_725_, lean_object* v_ik_726_, lean_object* v_w_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_719_, v_pivot_721_, v_as_722_, v_i_723_, v_k_724_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object* v_n_729_, lean_object* v_lo_730_, lean_object* v_hi_731_, lean_object* v_hhi_732_, lean_object* v_pivot_733_, lean_object* v_as_734_, lean_object* v_i_735_, lean_object* v_k_736_, lean_object* v_ilo_737_, lean_object* v_ik_738_, lean_object* v_w_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(v_n_729_, v_lo_730_, v_hi_731_, v_hhi_732_, v_pivot_733_, v_as_734_, v_i_735_, v_k_736_, v_ilo_737_, v_ik_738_, v_w_739_);
lean_dec_ref(v_pivot_733_);
lean_dec(v_hi_731_);
lean_dec(v_lo_730_);
lean_dec(v_n_729_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object* v_e_u2081_743_, lean_object* v_e_u2082_744_){
_start:
{
lean_object* v_unexpectedTk_745_; lean_object* v_unexpected_746_; lean_object* v_expected_747_; lean_object* v___y_749_; lean_object* v___x_761_; uint8_t v___x_762_; 
v_unexpectedTk_745_ = lean_ctor_get(v_e_u2082_744_, 0);
lean_inc(v_unexpectedTk_745_);
v_unexpected_746_ = lean_ctor_get(v_e_u2082_744_, 1);
lean_inc_ref(v_unexpected_746_);
v_expected_747_ = lean_ctor_get(v_e_u2082_744_, 2);
lean_inc(v_expected_747_);
lean_dec_ref(v_e_u2082_744_);
v___x_761_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_762_ = lean_string_dec_eq(v_unexpected_746_, v___x_761_);
if (v___x_762_ == 0)
{
v___y_749_ = v_unexpected_746_;
goto v___jp_748_;
}
else
{
lean_object* v_unexpected_763_; 
lean_dec_ref(v_unexpected_746_);
v_unexpected_763_ = lean_ctor_get(v_e_u2081_743_, 1);
lean_inc_ref(v_unexpected_763_);
v___y_749_ = v_unexpected_763_;
goto v___jp_748_;
}
v___jp_748_:
{
lean_object* v_expected_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_758_; 
v_expected_750_ = lean_ctor_get(v_e_u2081_743_, 2);
v_isSharedCheck_758_ = !lean_is_exclusive(v_e_u2081_743_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; lean_object* v_unused_760_; 
v_unused_759_ = lean_ctor_get(v_e_u2081_743_, 1);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_e_u2081_743_, 0);
lean_dec(v_unused_760_);
v___x_752_ = v_e_u2081_743_;
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_expected_750_);
lean_dec(v_e_u2081_743_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_754_ = l_List_appendTR___redArg(v_expected_750_, v_expected_747_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 2, v___x_754_);
lean_ctor_set(v___x_752_, 1, v___y_749_);
lean_ctor_set(v___x_752_, 0, v_unexpectedTk_745_);
v___x_756_ = v___x_752_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_unexpectedTk_745_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v___y_749_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
if (lean_obj_tag(v_x_764_) == 0)
{
if (lean_obj_tag(v_x_765_) == 0)
{
uint8_t v___x_766_; 
v___x_766_ = 1;
return v___x_766_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = 0;
return v___x_767_;
}
}
else
{
if (lean_obj_tag(v_x_765_) == 0)
{
uint8_t v___x_768_; 
v___x_768_ = 0;
return v___x_768_;
}
else
{
lean_object* v_val_769_; lean_object* v_val_770_; uint8_t v_decide_771_; 
v_val_769_ = lean_ctor_get(v_x_764_, 0);
v_val_770_ = lean_ctor_get(v_x_765_, 0);
v_decide_771_ = lean_nat_dec_eq(v_val_769_, v_val_770_);
return v_decide_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0___boxed(lean_object* v_x_772_, lean_object* v_x_773_){
_start:
{
uint8_t v_res_774_; lean_object* v_r_775_; 
v_res_774_ = l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(v_x_772_, v_x_773_);
lean_dec(v_x_773_);
lean_dec(v_x_772_);
v_r_775_ = lean_box(v_res_774_);
return v_r_775_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(lean_object* v_xs_776_, lean_object* v_ys_777_, lean_object* v_x_778_){
_start:
{
lean_object* v_zero_779_; uint8_t v_isZero_780_; 
v_zero_779_ = lean_unsigned_to_nat(0u);
v_isZero_780_ = lean_nat_dec_eq(v_x_778_, v_zero_779_);
if (v_isZero_780_ == 1)
{
lean_dec(v_x_778_);
return v_isZero_780_;
}
else
{
lean_object* v_one_781_; lean_object* v_n_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_one_781_ = lean_unsigned_to_nat(1u);
v_n_782_ = lean_nat_sub(v_x_778_, v_one_781_);
lean_dec(v_x_778_);
v___x_783_ = lean_array_fget_borrowed(v_xs_776_, v_n_782_);
v___x_784_ = lean_array_fget_borrowed(v_ys_777_, v_n_782_);
v___x_785_ = lean_string_dec_eq(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_dec(v_n_782_);
return v___x_785_;
}
else
{
v_x_778_ = v_n_782_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg___boxed(lean_object* v_xs_787_, lean_object* v_ys_788_, lean_object* v_x_789_){
_start:
{
uint8_t v_res_790_; lean_object* v_r_791_; 
v_res_790_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_xs_787_, v_ys_788_, v_x_789_);
lean_dec_ref(v_ys_788_);
lean_dec_ref(v_xs_787_);
v_r_791_ = lean_box(v_res_790_);
return v_r_791_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
lean_object* v_toCacheableParserContext_794_; lean_object* v_parserName_795_; lean_object* v_pos_796_; lean_object* v_toCacheableParserContext_797_; lean_object* v_parserName_798_; lean_object* v_pos_799_; lean_object* v_prec_803_; lean_object* v_quotDepth_804_; uint8_t v_suppressInsideQuot_805_; lean_object* v_savedPos_x3f_806_; lean_object* v_forbiddenTks_807_; lean_object* v_prec_808_; lean_object* v_quotDepth_809_; uint8_t v_suppressInsideQuot_810_; lean_object* v_savedPos_x3f_811_; lean_object* v_forbiddenTks_812_; uint8_t v___x_822_; 
v_toCacheableParserContext_794_ = lean_ctor_get(v_x_792_, 0);
v_parserName_795_ = lean_ctor_get(v_x_792_, 1);
v_pos_796_ = lean_ctor_get(v_x_792_, 2);
v_toCacheableParserContext_797_ = lean_ctor_get(v_x_793_, 0);
v_parserName_798_ = lean_ctor_get(v_x_793_, 1);
v_pos_799_ = lean_ctor_get(v_x_793_, 2);
v_prec_803_ = lean_ctor_get(v_toCacheableParserContext_794_, 0);
v_quotDepth_804_ = lean_ctor_get(v_toCacheableParserContext_794_, 1);
v_suppressInsideQuot_805_ = lean_ctor_get_uint8(v_toCacheableParserContext_794_, sizeof(void*)*4);
v_savedPos_x3f_806_ = lean_ctor_get(v_toCacheableParserContext_794_, 2);
v_forbiddenTks_807_ = lean_ctor_get(v_toCacheableParserContext_794_, 3);
v_prec_808_ = lean_ctor_get(v_toCacheableParserContext_797_, 0);
v_quotDepth_809_ = lean_ctor_get(v_toCacheableParserContext_797_, 1);
v_suppressInsideQuot_810_ = lean_ctor_get_uint8(v_toCacheableParserContext_797_, sizeof(void*)*4);
v_savedPos_x3f_811_ = lean_ctor_get(v_toCacheableParserContext_797_, 2);
v_forbiddenTks_812_ = lean_ctor_get(v_toCacheableParserContext_797_, 3);
v___x_822_ = lean_nat_dec_eq(v_prec_803_, v_prec_808_);
if (v___x_822_ == 0)
{
return v___x_822_;
}
else
{
uint8_t v___x_823_; 
v___x_823_ = lean_nat_dec_eq(v_quotDepth_804_, v_quotDepth_809_);
if (v___x_823_ == 0)
{
return v___x_823_;
}
else
{
if (v_suppressInsideQuot_810_ == 0)
{
if (v_suppressInsideQuot_805_ == 0)
{
goto v___jp_813_;
}
else
{
return v_suppressInsideQuot_810_;
}
}
else
{
if (v_suppressInsideQuot_805_ == 0)
{
return v_suppressInsideQuot_805_;
}
else
{
goto v___jp_813_;
}
}
}
}
v___jp_800_:
{
uint8_t v___x_801_; 
v___x_801_ = lean_name_eq(v_parserName_795_, v_parserName_798_);
if (v___x_801_ == 0)
{
return v___x_801_;
}
else
{
uint8_t v_decide_802_; 
v_decide_802_ = lean_nat_dec_eq(v_pos_796_, v_pos_799_);
return v_decide_802_;
}
}
v___jp_813_:
{
uint8_t v___x_814_; 
v___x_814_ = l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(v_savedPos_x3f_806_, v_savedPos_x3f_811_);
if (v___x_814_ == 0)
{
return v___x_814_;
}
else
{
size_t v___x_815_; size_t v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_ptr_addr(v_forbiddenTks_807_);
v___x_816_ = lean_ptr_addr(v_forbiddenTks_812_);
v___x_817_ = lean_usize_dec_eq(v___x_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_818_ = lean_array_get_size(v_forbiddenTks_807_);
v___x_819_ = lean_array_get_size(v_forbiddenTks_812_);
v___x_820_ = lean_nat_dec_eq(v___x_818_, v___x_819_);
if (v___x_820_ == 0)
{
return v___x_820_;
}
else
{
uint8_t v___x_821_; 
v___x_821_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_forbiddenTks_807_, v_forbiddenTks_812_, v___x_818_);
if (v___x_821_ == 0)
{
return v___x_821_;
}
else
{
goto v___jp_800_;
}
}
}
else
{
goto v___jp_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
uint8_t v_res_826_; lean_object* v_r_827_; 
v_res_826_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_x_824_, v_x_825_);
lean_dec_ref(v_x_825_);
lean_dec_ref(v_x_824_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(lean_object* v_xs_828_, lean_object* v_ys_829_, lean_object* v_hsz_830_, lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
uint8_t v___x_833_; 
v___x_833_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_xs_828_, v_ys_829_, v_x_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___boxed(lean_object* v_xs_834_, lean_object* v_ys_835_, lean_object* v_hsz_836_, lean_object* v_x_837_, lean_object* v_x_838_){
_start:
{
uint8_t v_res_839_; lean_object* v_r_840_; 
v_res_839_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(v_xs_834_, v_ys_835_, v_hsz_836_, v_x_837_, v_x_838_);
lean_dec_ref(v_ys_835_);
lean_dec_ref(v_xs_834_);
v_r_840_ = lean_box(v_res_839_);
return v_r_840_;
}
}
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object* v_k_843_){
_start:
{
lean_object* v_parserName_844_; lean_object* v_pos_845_; uint64_t v___x_846_; 
v_parserName_844_ = lean_ctor_get(v_k_843_, 1);
v_pos_845_ = lean_ctor_get(v_k_843_, 2);
v___x_846_ = l_String_instHashableRaw_hash(v_pos_845_);
if (lean_obj_tag(v_parserName_844_) == 0)
{
uint64_t v___x_847_; uint64_t v___x_848_; 
v___x_847_ = 1723ULL;
v___x_848_ = lean_uint64_mix_hash(v___x_846_, v___x_847_);
return v___x_848_;
}
else
{
uint64_t v_hash_849_; uint64_t v___x_850_; 
v_hash_849_ = lean_ctor_get_uint64(v_parserName_844_, sizeof(void*)*2);
v___x_850_ = lean_uint64_mix_hash(v___x_846_, v_hash_849_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object* v_k_851_){
_start:
{
uint64_t v_res_852_; lean_object* v_r_853_; 
v_res_852_ = l_Lean_Parser_instHashableParserCacheKey___lam__0(v_k_851_);
lean_dec_ref(v_k_851_);
v_r_853_ = lean_box_uint64(v_res_852_);
return v_r_853_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__0(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_box(0);
v___x_857_ = lean_unsigned_to_nat(16u);
v___x_858_ = lean_mk_array(v___x_857_, v___x_856_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__1(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__0, &l_Lean_Parser_initCacheForInput___closed__0_once, _init_l_Lean_Parser_initCacheForInput___closed__0);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_860_);
lean_ctor_set(v___x_861_, 1, v___x_859_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object* v_input_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_863_ = lean_string_utf8_byte_size(v_input_862_);
v___x_864_ = lean_unsigned_to_nat(1u);
v___x_865_ = lean_nat_add(v___x_863_, v___x_864_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_box(0);
v___x_868_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_868_, 0, v___x_865_);
lean_ctor_set(v___x_868_, 1, v___x_866_);
lean_ctor_set(v___x_868_, 2, v___x_867_);
v___x_869_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__1, &l_Lean_Parser_initCacheForInput___closed__1_once, _init_l_Lean_Parser_initCacheForInput___closed__1);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_868_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object* v_input_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Parser_initCacheForInput(v_input_871_);
lean_dec_ref(v_input_871_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object* v_stack_873_){
_start:
{
lean_object* v_raw_874_; lean_object* v_drop_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_raw_874_ = lean_ctor_get(v_stack_873_, 0);
lean_inc_ref(v_raw_874_);
v_drop_875_ = lean_ctor_get(v_stack_873_, 1);
lean_inc(v_drop_875_);
lean_dec_ref(v_stack_873_);
v___x_876_ = lean_array_get_size(v_raw_874_);
v___x_877_ = l_Array_toSubarray___redArg(v_raw_874_, v_drop_875_, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object* v_stack_884_){
_start:
{
lean_object* v_raw_885_; lean_object* v_drop_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_raw_885_ = lean_ctor_get(v_stack_884_, 0);
v_drop_886_ = lean_ctor_get(v_stack_884_, 1);
v___x_887_ = lean_array_get_size(v_raw_885_);
v___x_888_ = lean_nat_sub(v___x_887_, v_drop_886_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object* v_stack_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_Parser_SyntaxStack_size(v_stack_889_);
lean_dec_ref(v_stack_889_);
return v_res_890_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object* v_stack_891_){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_892_ = l_Lean_Parser_SyntaxStack_size(v_stack_891_);
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = lean_nat_dec_eq(v___x_892_, v___x_893_);
lean_dec(v___x_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object* v_stack_895_){
_start:
{
uint8_t v_res_896_; lean_object* v_r_897_; 
v_res_896_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stack_895_);
lean_dec_ref(v_stack_895_);
v_r_897_ = lean_box(v_res_896_);
return v_r_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object* v_stack_898_, lean_object* v_n_899_){
_start:
{
lean_object* v_raw_900_; lean_object* v_drop_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_910_; 
v_raw_900_ = lean_ctor_get(v_stack_898_, 0);
v_drop_901_ = lean_ctor_get(v_stack_898_, 1);
v_isSharedCheck_910_ = !lean_is_exclusive(v_stack_898_);
if (v_isSharedCheck_910_ == 0)
{
v___x_903_ = v_stack_898_;
v_isShared_904_ = v_isSharedCheck_910_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_drop_901_);
lean_inc(v_raw_900_);
lean_dec(v_stack_898_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_910_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_905_ = lean_nat_add(v_drop_901_, v_n_899_);
v___x_906_ = l_Array_shrink___redArg(v_raw_900_, v___x_905_);
lean_dec(v___x_905_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_906_);
v___x_908_ = v___x_903_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_drop_901_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object* v_stack_911_, lean_object* v_n_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Parser_SyntaxStack_shrink(v_stack_911_, v_n_912_);
lean_dec(v_n_912_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object* v_stack_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_raw_916_; lean_object* v_drop_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_raw_916_ = lean_ctor_get(v_stack_914_, 0);
v_drop_917_ = lean_ctor_get(v_stack_914_, 1);
v_isSharedCheck_925_ = !lean_is_exclusive(v_stack_914_);
if (v_isSharedCheck_925_ == 0)
{
v___x_919_ = v_stack_914_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_drop_917_);
lean_inc(v_raw_916_);
lean_dec(v_stack_914_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = lean_array_push(v_raw_916_, v_a_915_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_drop_917_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object* v_stack_926_){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_927_ = lean_unsigned_to_nat(0u);
v___x_928_ = l_Lean_Parser_SyntaxStack_size(v_stack_926_);
v___x_929_ = lean_nat_dec_lt(v___x_927_, v___x_928_);
lean_dec(v___x_928_);
if (v___x_929_ == 0)
{
return v_stack_926_;
}
else
{
lean_object* v_raw_930_; lean_object* v_drop_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_raw_930_ = lean_ctor_get(v_stack_926_, 0);
v_drop_931_ = lean_ctor_get(v_stack_926_, 1);
v_isSharedCheck_939_ = !lean_is_exclusive(v_stack_926_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v_stack_926_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_drop_931_);
lean_inc(v_raw_930_);
lean_dec(v_stack_926_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = lean_array_pop(v_raw_930_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_drop_931_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object* v_msg_940_){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = lean_box(0);
v___x_942_ = lean_panic_fn_borrowed(v___x_941_, v_msg_940_);
return v___x_942_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_back___closed__3(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_946_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__2));
v___x_947_ = lean_unsigned_to_nat(4u);
v___x_948_ = lean_unsigned_to_nat(315u);
v___x_949_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__1));
v___x_950_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_951_ = l_mkPanicMessageWithDecl(v___x_950_, v___x_949_, v___x_948_, v___x_947_, v___x_946_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object* v_stack_952_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_953_ = lean_unsigned_to_nat(0u);
v___x_954_ = l_Lean_Parser_SyntaxStack_size(v_stack_952_);
v___x_955_ = lean_nat_dec_lt(v___x_953_, v___x_954_);
lean_dec(v___x_954_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_back___closed__3, &l_Lean_Parser_SyntaxStack_back___closed__3_once, _init_l_Lean_Parser_SyntaxStack_back___closed__3);
v___x_957_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_956_);
return v___x_957_;
}
else
{
lean_object* v_raw_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_raw_958_ = lean_ctor_get(v_stack_952_, 0);
v___x_959_ = lean_box(0);
v___x_960_ = lean_array_get_size(v_raw_958_);
v___x_961_ = lean_unsigned_to_nat(1u);
v___x_962_ = lean_nat_sub(v___x_960_, v___x_961_);
v___x_963_ = lean_array_get_borrowed(v___x_959_, v_raw_958_, v___x_962_);
lean_dec(v___x_962_);
lean_inc(v___x_963_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object* v_stack_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_Parser_SyntaxStack_back(v_stack_964_);
lean_dec_ref(v_stack_964_);
return v_res_965_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_968_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__1));
v___x_969_ = lean_unsigned_to_nat(4u);
v___x_970_ = lean_unsigned_to_nat(321u);
v___x_971_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__0));
v___x_972_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_973_ = l_mkPanicMessageWithDecl(v___x_972_, v___x_971_, v___x_970_, v___x_969_, v___x_968_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object* v_stack_974_, lean_object* v_i_975_){
_start:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = l_Lean_Parser_SyntaxStack_size(v_stack_974_);
v___x_977_ = lean_nat_dec_lt(v_i_975_, v___x_976_);
lean_dec(v___x_976_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_get_x21___closed__2, &l_Lean_Parser_SyntaxStack_get_x21___closed__2_once, _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2);
v___x_979_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_978_);
return v___x_979_;
}
else
{
lean_object* v_raw_980_; lean_object* v_drop_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_raw_980_ = lean_ctor_get(v_stack_974_, 0);
v_drop_981_ = lean_ctor_get(v_stack_974_, 1);
v___x_982_ = lean_box(0);
v___x_983_ = lean_nat_add(v_drop_981_, v_i_975_);
v___x_984_ = lean_array_get_borrowed(v___x_982_, v_raw_980_, v___x_983_);
lean_dec(v___x_983_);
lean_inc(v___x_984_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object* v_stack_985_, lean_object* v_i_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lean_Parser_SyntaxStack_get_x21(v_stack_985_, v_i_986_);
lean_dec(v_i_986_);
lean_dec_ref(v_stack_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object* v_stack_988_, lean_object* v_start_989_, lean_object* v_stop_990_){
_start:
{
lean_object* v_raw_991_; lean_object* v_drop_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_raw_991_ = lean_ctor_get(v_stack_988_, 0);
v_drop_992_ = lean_ctor_get(v_stack_988_, 1);
v___x_993_ = lean_nat_add(v_drop_992_, v_start_989_);
v___x_994_ = lean_nat_add(v_drop_992_, v_stop_990_);
v___x_995_ = l_Array_extract___redArg(v_raw_991_, v___x_993_, v___x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object* v_stack_996_, lean_object* v_start_997_, lean_object* v_stop_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Lean_Parser_SyntaxStack_extract(v_stack_996_, v_start_997_, v_stop_998_);
lean_dec(v_stop_998_);
lean_dec(v_start_997_);
lean_dec_ref(v_stack_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object* v_stack_1000_, lean_object* v_stxs_1001_){
_start:
{
lean_object* v_raw_1002_; lean_object* v_drop_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
v_raw_1002_ = lean_ctor_get(v_stack_1000_, 0);
v_drop_1003_ = lean_ctor_get(v_stack_1000_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_stack_1000_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1005_ = v_stack_1000_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_drop_1003_);
lean_inc(v_raw_1002_);
lean_dec(v_stack_1000_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = l_Array_append___redArg(v_raw_1002_, v_stxs_1001_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_drop_1003_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object* v_stack_1012_, lean_object* v_stxs_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(v_stack_1012_, v_stxs_1013_);
lean_dec_ref(v_stxs_1013_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object* v_stack_1015_, lean_object* v_stxs_1016_){
_start:
{
lean_object* v_raw_1017_; lean_object* v_drop_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1026_; 
v_raw_1017_ = lean_ctor_get(v_stack_1015_, 0);
v_drop_1018_ = lean_ctor_get(v_stack_1015_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_stack_1015_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1020_ = v_stack_1015_;
v_isShared_1021_ = v_isSharedCheck_1026_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_drop_1018_);
lean_inc(v_raw_1017_);
lean_dec(v_stack_1015_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1026_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1022_ = l_Array_append___redArg(v_raw_1017_, v_stxs_1016_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1022_);
v___x_1024_ = v___x_1020_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_drop_1018_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object* v_stack_1027_, lean_object* v_stxs_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(v_stack_1027_, v_stxs_1028_);
lean_dec_ref(v_stxs_1028_);
return v_res_1029_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object* v_s_1032_){
_start:
{
lean_object* v_errorMsg_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_errorMsg_1033_ = lean_ctor_get(v_s_1032_, 4);
lean_inc(v_errorMsg_1033_);
lean_dec_ref(v_s_1032_);
v___x_1034_ = ((lean_object*)(l_Lean_Parser_instBEqError___closed__0));
v___x_1035_ = lean_box(0);
v___x_1036_ = l_instBEqOption_beq___redArg(v___x_1034_, v_errorMsg_1033_, v___x_1035_);
if (v___x_1036_ == 0)
{
uint8_t v___x_1037_; 
v___x_1037_ = 1;
return v___x_1037_;
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = 0;
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object* v_s_1039_){
_start:
{
uint8_t v_res_1040_; lean_object* v_r_1041_; 
v_res_1040_ = l_Lean_Parser_ParserState_hasError(v_s_1039_);
v_r_1041_ = lean_box(v_res_1040_);
return v_r_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object* v_s_1042_){
_start:
{
lean_object* v_stxStack_1043_; lean_object* v___x_1044_; 
v_stxStack_1043_ = lean_ctor_get(v_s_1042_, 0);
v___x_1044_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object* v_s_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lean_Parser_ParserState_stackSize(v_s_1045_);
lean_dec_ref(v_s_1045_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object* v_s_1047_, lean_object* v_iniStackSz_1048_, lean_object* v_iniPos_1049_){
_start:
{
lean_object* v_stxStack_1050_; lean_object* v_lhsPrec_1051_; lean_object* v_cache_1052_; lean_object* v_recoveredErrors_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1062_; 
v_stxStack_1050_ = lean_ctor_get(v_s_1047_, 0);
v_lhsPrec_1051_ = lean_ctor_get(v_s_1047_, 1);
v_cache_1052_ = lean_ctor_get(v_s_1047_, 3);
v_recoveredErrors_1053_ = lean_ctor_get(v_s_1047_, 5);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_s_1047_);
if (v_isSharedCheck_1062_ == 0)
{
lean_object* v_unused_1063_; lean_object* v_unused_1064_; 
v_unused_1063_ = lean_ctor_get(v_s_1047_, 4);
lean_dec(v_unused_1063_);
v_unused_1064_ = lean_ctor_get(v_s_1047_, 2);
lean_dec(v_unused_1064_);
v___x_1055_ = v_s_1047_;
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_recoveredErrors_1053_);
lean_inc(v_cache_1052_);
lean_inc(v_lhsPrec_1051_);
lean_inc(v_stxStack_1050_);
lean_dec(v_s_1047_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1057_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1050_, v_iniStackSz_1048_);
v___x_1058_ = lean_box(0);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 4, v___x_1058_);
lean_ctor_set(v___x_1055_, 2, v_iniPos_1049_);
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1060_ = v___x_1055_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v_lhsPrec_1051_);
lean_ctor_set(v_reuseFailAlloc_1061_, 2, v_iniPos_1049_);
lean_ctor_set(v_reuseFailAlloc_1061_, 3, v_cache_1052_);
lean_ctor_set(v_reuseFailAlloc_1061_, 4, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1061_, 5, v_recoveredErrors_1053_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object* v_s_1065_, lean_object* v_iniStackSz_1066_, lean_object* v_iniPos_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Parser_ParserState_restore(v_s_1065_, v_iniStackSz_1066_, v_iniPos_1067_);
lean_dec(v_iniStackSz_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object* v_s_1069_, lean_object* v_pos_1070_){
_start:
{
lean_object* v_stxStack_1071_; lean_object* v_lhsPrec_1072_; lean_object* v_cache_1073_; lean_object* v_errorMsg_1074_; lean_object* v_recoveredErrors_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_stxStack_1071_ = lean_ctor_get(v_s_1069_, 0);
v_lhsPrec_1072_ = lean_ctor_get(v_s_1069_, 1);
v_cache_1073_ = lean_ctor_get(v_s_1069_, 3);
v_errorMsg_1074_ = lean_ctor_get(v_s_1069_, 4);
v_recoveredErrors_1075_ = lean_ctor_get(v_s_1069_, 5);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_s_1069_);
if (v_isSharedCheck_1082_ == 0)
{
lean_object* v_unused_1083_; 
v_unused_1083_ = lean_ctor_get(v_s_1069_, 2);
lean_dec(v_unused_1083_);
v___x_1077_ = v_s_1069_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_recoveredErrors_1075_);
lean_inc(v_errorMsg_1074_);
lean_inc(v_cache_1073_);
lean_inc(v_lhsPrec_1072_);
lean_inc(v_stxStack_1071_);
lean_dec(v_s_1069_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 2, v_pos_1070_);
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_stxStack_1071_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_lhsPrec_1072_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v_pos_1070_);
lean_ctor_set(v_reuseFailAlloc_1081_, 3, v_cache_1073_);
lean_ctor_set(v_reuseFailAlloc_1081_, 4, v_errorMsg_1074_);
lean_ctor_set(v_reuseFailAlloc_1081_, 5, v_recoveredErrors_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object* v_s_1084_, lean_object* v_cache_1085_){
_start:
{
lean_object* v_stxStack_1086_; lean_object* v_lhsPrec_1087_; lean_object* v_pos_1088_; lean_object* v_errorMsg_1089_; lean_object* v_recoveredErrors_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_stxStack_1086_ = lean_ctor_get(v_s_1084_, 0);
v_lhsPrec_1087_ = lean_ctor_get(v_s_1084_, 1);
v_pos_1088_ = lean_ctor_get(v_s_1084_, 2);
v_errorMsg_1089_ = lean_ctor_get(v_s_1084_, 4);
v_recoveredErrors_1090_ = lean_ctor_get(v_s_1084_, 5);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_s_1084_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; 
v_unused_1098_ = lean_ctor_get(v_s_1084_, 3);
lean_dec(v_unused_1098_);
v___x_1092_ = v_s_1084_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_recoveredErrors_1090_);
lean_inc(v_errorMsg_1089_);
lean_inc(v_pos_1088_);
lean_inc(v_lhsPrec_1087_);
lean_inc(v_stxStack_1086_);
lean_dec(v_s_1084_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 3, v_cache_1085_);
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_stxStack_1086_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_lhsPrec_1087_);
lean_ctor_set(v_reuseFailAlloc_1096_, 2, v_pos_1088_);
lean_ctor_set(v_reuseFailAlloc_1096_, 3, v_cache_1085_);
lean_ctor_set(v_reuseFailAlloc_1096_, 4, v_errorMsg_1089_);
lean_ctor_set(v_reuseFailAlloc_1096_, 5, v_recoveredErrors_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object* v_s_1099_, lean_object* v_n_1100_){
_start:
{
lean_object* v_stxStack_1101_; lean_object* v_lhsPrec_1102_; lean_object* v_pos_1103_; lean_object* v_cache_1104_; lean_object* v_errorMsg_1105_; lean_object* v_recoveredErrors_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1114_; 
v_stxStack_1101_ = lean_ctor_get(v_s_1099_, 0);
v_lhsPrec_1102_ = lean_ctor_get(v_s_1099_, 1);
v_pos_1103_ = lean_ctor_get(v_s_1099_, 2);
v_cache_1104_ = lean_ctor_get(v_s_1099_, 3);
v_errorMsg_1105_ = lean_ctor_get(v_s_1099_, 4);
v_recoveredErrors_1106_ = lean_ctor_get(v_s_1099_, 5);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_s_1099_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1108_ = v_s_1099_;
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_recoveredErrors_1106_);
lean_inc(v_errorMsg_1105_);
lean_inc(v_cache_1104_);
lean_inc(v_pos_1103_);
lean_inc(v_lhsPrec_1102_);
lean_inc(v_stxStack_1101_);
lean_dec(v_s_1099_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1110_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1101_, v_n_1100_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1110_);
v___x_1112_ = v___x_1108_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_lhsPrec_1102_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_pos_1103_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v_cache_1104_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v_errorMsg_1105_);
lean_ctor_set(v_reuseFailAlloc_1113_, 5, v_recoveredErrors_1106_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object* v_s_1115_){
_start:
{
lean_object* v_stxStack_1116_; lean_object* v_lhsPrec_1117_; lean_object* v_pos_1118_; lean_object* v_cache_1119_; lean_object* v_errorMsg_1120_; lean_object* v_recoveredErrors_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1129_; 
v_stxStack_1116_ = lean_ctor_get(v_s_1115_, 0);
v_lhsPrec_1117_ = lean_ctor_get(v_s_1115_, 1);
v_pos_1118_ = lean_ctor_get(v_s_1115_, 2);
v_cache_1119_ = lean_ctor_get(v_s_1115_, 3);
v_errorMsg_1120_ = lean_ctor_get(v_s_1115_, 4);
v_recoveredErrors_1121_ = lean_ctor_get(v_s_1115_, 5);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_s_1115_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1123_ = v_s_1115_;
v_isShared_1124_ = v_isSharedCheck_1129_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_recoveredErrors_1121_);
lean_inc(v_errorMsg_1120_);
lean_inc(v_cache_1119_);
lean_inc(v_pos_1118_);
lean_inc(v_lhsPrec_1117_);
lean_inc(v_stxStack_1116_);
lean_dec(v_s_1115_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1129_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1125_ = l_Lean_Parser_SyntaxStack_pop(v_stxStack_1116_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1125_);
v___x_1127_ = v___x_1123_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v_lhsPrec_1117_);
lean_ctor_set(v_reuseFailAlloc_1128_, 2, v_pos_1118_);
lean_ctor_set(v_reuseFailAlloc_1128_, 3, v_cache_1119_);
lean_ctor_set(v_reuseFailAlloc_1128_, 4, v_errorMsg_1120_);
lean_ctor_set(v_reuseFailAlloc_1128_, 5, v_recoveredErrors_1121_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object* v_s_1130_, lean_object* v_iniStackSz_1131_){
_start:
{
lean_object* v_stxStack_1132_; lean_object* v_lhsPrec_1133_; lean_object* v_pos_1134_; lean_object* v_cache_1135_; lean_object* v_errorMsg_1136_; lean_object* v_recoveredErrors_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1145_; 
v_stxStack_1132_ = lean_ctor_get(v_s_1130_, 0);
v_lhsPrec_1133_ = lean_ctor_get(v_s_1130_, 1);
v_pos_1134_ = lean_ctor_get(v_s_1130_, 2);
v_cache_1135_ = lean_ctor_get(v_s_1130_, 3);
v_errorMsg_1136_ = lean_ctor_get(v_s_1130_, 4);
v_recoveredErrors_1137_ = lean_ctor_get(v_s_1130_, 5);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_s_1130_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1139_ = v_s_1130_;
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_recoveredErrors_1137_);
lean_inc(v_errorMsg_1136_);
lean_inc(v_cache_1135_);
lean_inc(v_pos_1134_);
lean_inc(v_lhsPrec_1133_);
lean_inc(v_stxStack_1132_);
lean_dec(v_s_1130_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1141_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1132_, v_iniStackSz_1131_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v___x_1141_);
v___x_1143_ = v___x_1139_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_lhsPrec_1133_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_pos_1134_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_cache_1135_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v_errorMsg_1136_);
lean_ctor_set(v_reuseFailAlloc_1144_, 5, v_recoveredErrors_1137_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object* v_s_1146_, lean_object* v_iniStackSz_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1146_, v_iniStackSz_1147_);
lean_dec(v_iniStackSz_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object* v_s_1149_, lean_object* v_c_1150_, lean_object* v_pos_1151_){
_start:
{
lean_object* v_toInputContext_1152_; lean_object* v_stxStack_1153_; lean_object* v_lhsPrec_1154_; lean_object* v_cache_1155_; lean_object* v_errorMsg_1156_; lean_object* v_recoveredErrors_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1166_; 
v_toInputContext_1152_ = lean_ctor_get(v_c_1150_, 0);
v_stxStack_1153_ = lean_ctor_get(v_s_1149_, 0);
v_lhsPrec_1154_ = lean_ctor_get(v_s_1149_, 1);
v_cache_1155_ = lean_ctor_get(v_s_1149_, 3);
v_errorMsg_1156_ = lean_ctor_get(v_s_1149_, 4);
v_recoveredErrors_1157_ = lean_ctor_get(v_s_1149_, 5);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_s_1149_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; 
v_unused_1167_ = lean_ctor_get(v_s_1149_, 2);
lean_dec(v_unused_1167_);
v___x_1159_ = v_s_1149_;
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_recoveredErrors_1157_);
lean_inc(v_errorMsg_1156_);
lean_inc(v_cache_1155_);
lean_inc(v_lhsPrec_1154_);
lean_inc(v_stxStack_1153_);
lean_dec(v_s_1149_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_inputString_1161_; lean_object* v___x_1162_; lean_object* v___x_1164_; 
v_inputString_1161_ = lean_ctor_get(v_toInputContext_1152_, 0);
v___x_1162_ = lean_string_utf8_next(v_inputString_1161_, v_pos_1151_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 2, v___x_1162_);
v___x_1164_ = v___x_1159_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_stxStack_1153_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_lhsPrec_1154_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v___x_1162_);
lean_ctor_set(v_reuseFailAlloc_1165_, 3, v_cache_1155_);
lean_ctor_set(v_reuseFailAlloc_1165_, 4, v_errorMsg_1156_);
lean_ctor_set(v_reuseFailAlloc_1165_, 5, v_recoveredErrors_1157_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object* v_s_1168_, lean_object* v_c_1169_, lean_object* v_pos_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_Parser_ParserState_next(v_s_1168_, v_c_1169_, v_pos_1170_);
lean_dec(v_pos_1170_);
lean_dec_ref(v_c_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object* v_s_1172_, lean_object* v_c_1173_, lean_object* v_pos_1174_){
_start:
{
lean_object* v_toInputContext_1175_; lean_object* v_stxStack_1176_; lean_object* v_lhsPrec_1177_; lean_object* v_cache_1178_; lean_object* v_errorMsg_1179_; lean_object* v_recoveredErrors_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1189_; 
v_toInputContext_1175_ = lean_ctor_get(v_c_1173_, 0);
v_stxStack_1176_ = lean_ctor_get(v_s_1172_, 0);
v_lhsPrec_1177_ = lean_ctor_get(v_s_1172_, 1);
v_cache_1178_ = lean_ctor_get(v_s_1172_, 3);
v_errorMsg_1179_ = lean_ctor_get(v_s_1172_, 4);
v_recoveredErrors_1180_ = lean_ctor_get(v_s_1172_, 5);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_s_1172_);
if (v_isSharedCheck_1189_ == 0)
{
lean_object* v_unused_1190_; 
v_unused_1190_ = lean_ctor_get(v_s_1172_, 2);
lean_dec(v_unused_1190_);
v___x_1182_ = v_s_1172_;
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_recoveredErrors_1180_);
lean_inc(v_errorMsg_1179_);
lean_inc(v_cache_1178_);
lean_inc(v_lhsPrec_1177_);
lean_inc(v_stxStack_1176_);
lean_dec(v_s_1172_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_inputString_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v_inputString_1184_ = lean_ctor_get(v_toInputContext_1175_, 0);
v___x_1185_ = lean_string_utf8_next_fast(v_inputString_1184_, v_pos_1174_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 2, v___x_1185_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_stxStack_1176_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_lhsPrec_1177_);
lean_ctor_set(v_reuseFailAlloc_1188_, 2, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1188_, 3, v_cache_1178_);
lean_ctor_set(v_reuseFailAlloc_1188_, 4, v_errorMsg_1179_);
lean_ctor_set(v_reuseFailAlloc_1188_, 5, v_recoveredErrors_1180_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object* v_s_1191_, lean_object* v_c_1192_, lean_object* v_pos_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1191_, v_c_1192_, v_pos_1193_);
lean_dec(v_pos_1193_);
lean_dec_ref(v_c_1192_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object* v_s_1195_, lean_object* v_c_1196_, lean_object* v_pos_1197_, lean_object* v_h_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1195_, v_c_1196_, v_pos_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object* v_s_1200_, lean_object* v_c_1201_, lean_object* v_pos_1202_, lean_object* v_h_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lean_Parser_ParserState_next_x27(v_s_1200_, v_c_1201_, v_pos_1202_, v_h_1203_);
lean_dec(v_pos_1202_);
lean_dec_ref(v_c_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object* v_x_1205_, lean_object* v_x_1206_){
_start:
{
if (lean_obj_tag(v_x_1205_) == 0)
{
if (lean_obj_tag(v_x_1206_) == 0)
{
uint8_t v___x_1207_; 
v___x_1207_ = 1;
return v___x_1207_;
}
else
{
uint8_t v___x_1208_; 
v___x_1208_ = 0;
return v___x_1208_;
}
}
else
{
if (lean_obj_tag(v_x_1206_) == 0)
{
uint8_t v___x_1209_; 
v___x_1209_ = 0;
return v___x_1209_;
}
else
{
lean_object* v_val_1210_; lean_object* v_val_1211_; uint8_t v___x_1212_; 
v_val_1210_ = lean_ctor_get(v_x_1205_, 0);
v_val_1211_ = lean_ctor_get(v_x_1206_, 0);
v___x_1212_ = l_Lean_Parser_instBEqError_beq(v_val_1210_, v_val_1211_);
return v___x_1212_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object* v_x_1213_, lean_object* v_x_1214_){
_start:
{
uint8_t v_res_1215_; lean_object* v_r_1216_; 
v_res_1215_ = l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_x_1213_, v_x_1214_);
lean_dec(v_x_1214_);
lean_dec(v_x_1213_);
v_r_1216_ = lean_box(v_res_1215_);
return v_r_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object* v_s_1217_, lean_object* v_k_1218_, lean_object* v_iniStackSz_1219_){
_start:
{
lean_object* v_stxStack_1220_; lean_object* v_lhsPrec_1221_; lean_object* v_pos_1222_; lean_object* v_cache_1223_; lean_object* v_errorMsg_1224_; lean_object* v_recoveredErrors_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1246_; 
v_stxStack_1220_ = lean_ctor_get(v_s_1217_, 0);
v_lhsPrec_1221_ = lean_ctor_get(v_s_1217_, 1);
v_pos_1222_ = lean_ctor_get(v_s_1217_, 2);
v_cache_1223_ = lean_ctor_get(v_s_1217_, 3);
v_errorMsg_1224_ = lean_ctor_get(v_s_1217_, 4);
v_recoveredErrors_1225_ = lean_ctor_get(v_s_1217_, 5);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_s_1217_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1227_ = v_s_1217_;
v_isShared_1228_ = v_isSharedCheck_1246_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_recoveredErrors_1225_);
lean_inc(v_errorMsg_1224_);
lean_inc(v_cache_1223_);
lean_inc(v_pos_1222_);
lean_inc(v_lhsPrec_1221_);
lean_inc(v_stxStack_1220_);
lean_dec(v_s_1217_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1246_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = lean_box(0);
v___x_1240_ = l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_errorMsg_1224_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1220_);
v___x_1242_ = lean_nat_dec_eq(v___x_1241_, v_iniStackSz_1219_);
lean_dec(v___x_1241_);
if (v___x_1242_ == 0)
{
goto v___jp_1229_;
}
else
{
lean_object* v___x_1243_; lean_object* v_stack_1244_; lean_object* v___x_1245_; 
lean_del_object(v___x_1227_);
lean_dec(v_k_1218_);
v___x_1243_ = lean_box(0);
v_stack_1244_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1220_, v___x_1243_);
v___x_1245_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1245_, 0, v_stack_1244_);
lean_ctor_set(v___x_1245_, 1, v_lhsPrec_1221_);
lean_ctor_set(v___x_1245_, 2, v_pos_1222_);
lean_ctor_set(v___x_1245_, 3, v_cache_1223_);
lean_ctor_set(v___x_1245_, 4, v_errorMsg_1224_);
lean_ctor_set(v___x_1245_, 5, v_recoveredErrors_1225_);
return v___x_1245_;
}
}
else
{
goto v___jp_1229_;
}
v___jp_1229_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_newNode_1233_; lean_object* v_stack_1234_; lean_object* v_stack_1235_; lean_object* v___x_1237_; 
v___x_1230_ = lean_box(2);
v___x_1231_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1220_);
v___x_1232_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1220_, v_iniStackSz_1219_, v___x_1231_);
lean_dec(v___x_1231_);
v_newNode_1233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1233_, 0, v___x_1230_);
lean_ctor_set(v_newNode_1233_, 1, v_k_1218_);
lean_ctor_set(v_newNode_1233_, 2, v___x_1232_);
v_stack_1234_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1220_, v_iniStackSz_1219_);
v_stack_1235_ = l_Lean_Parser_SyntaxStack_push(v_stack_1234_, v_newNode_1233_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v_stack_1235_);
v___x_1237_ = v___x_1227_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_stack_1235_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_lhsPrec_1221_);
lean_ctor_set(v_reuseFailAlloc_1238_, 2, v_pos_1222_);
lean_ctor_set(v_reuseFailAlloc_1238_, 3, v_cache_1223_);
lean_ctor_set(v_reuseFailAlloc_1238_, 4, v_errorMsg_1224_);
lean_ctor_set(v_reuseFailAlloc_1238_, 5, v_recoveredErrors_1225_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object* v_s_1247_, lean_object* v_k_1248_, lean_object* v_iniStackSz_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lean_Parser_ParserState_mkNode(v_s_1247_, v_k_1248_, v_iniStackSz_1249_);
lean_dec(v_iniStackSz_1249_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object* v_s_1251_, lean_object* v_k_1252_, lean_object* v_iniStackSz_1253_){
_start:
{
lean_object* v_stxStack_1254_; lean_object* v_lhsPrec_1255_; lean_object* v_pos_1256_; lean_object* v_cache_1257_; lean_object* v_errorMsg_1258_; lean_object* v_recoveredErrors_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1274_; 
v_stxStack_1254_ = lean_ctor_get(v_s_1251_, 0);
v_lhsPrec_1255_ = lean_ctor_get(v_s_1251_, 1);
v_pos_1256_ = lean_ctor_get(v_s_1251_, 2);
v_cache_1257_ = lean_ctor_get(v_s_1251_, 3);
v_errorMsg_1258_ = lean_ctor_get(v_s_1251_, 4);
v_recoveredErrors_1259_ = lean_ctor_get(v_s_1251_, 5);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_s_1251_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1261_ = v_s_1251_;
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_recoveredErrors_1259_);
lean_inc(v_errorMsg_1258_);
lean_inc(v_cache_1257_);
lean_inc(v_pos_1256_);
lean_inc(v_lhsPrec_1255_);
lean_inc(v_stxStack_1254_);
lean_dec(v_s_1251_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_newNode_1268_; lean_object* v_stack_1269_; lean_object* v_stack_1270_; lean_object* v___x_1272_; 
v___x_1263_ = lean_box(2);
v___x_1264_ = lean_unsigned_to_nat(1u);
v___x_1265_ = lean_nat_sub(v_iniStackSz_1253_, v___x_1264_);
v___x_1266_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1254_);
v___x_1267_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1254_, v___x_1265_, v___x_1266_);
lean_dec(v___x_1266_);
v_newNode_1268_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1268_, 0, v___x_1263_);
lean_ctor_set(v_newNode_1268_, 1, v_k_1252_);
lean_ctor_set(v_newNode_1268_, 2, v___x_1267_);
v_stack_1269_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1254_, v___x_1265_);
lean_dec(v___x_1265_);
v_stack_1270_ = l_Lean_Parser_SyntaxStack_push(v_stack_1269_, v_newNode_1268_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v_stack_1270_);
v___x_1272_ = v___x_1261_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_stack_1270_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_lhsPrec_1255_);
lean_ctor_set(v_reuseFailAlloc_1273_, 2, v_pos_1256_);
lean_ctor_set(v_reuseFailAlloc_1273_, 3, v_cache_1257_);
lean_ctor_set(v_reuseFailAlloc_1273_, 4, v_errorMsg_1258_);
lean_ctor_set(v_reuseFailAlloc_1273_, 5, v_recoveredErrors_1259_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object* v_s_1275_, lean_object* v_k_1276_, lean_object* v_iniStackSz_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_Parser_ParserState_mkTrailingNode(v_s_1275_, v_k_1276_, v_iniStackSz_1277_);
lean_dec(v_iniStackSz_1277_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object* v_s_1281_){
_start:
{
lean_object* v_errorMsg_1282_; 
v_errorMsg_1282_ = lean_ctor_get(v_s_1281_, 4);
if (lean_obj_tag(v_errorMsg_1282_) == 0)
{
lean_object* v_recoveredErrors_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_recoveredErrors_1283_ = lean_ctor_get(v_s_1281_, 5);
lean_inc_ref(v_recoveredErrors_1283_);
lean_dec_ref(v_s_1281_);
v___x_1284_ = ((lean_object*)(l_Lean_Parser_ParserState_allErrors___closed__0));
v___x_1285_ = l_Array_append___redArg(v_recoveredErrors_1283_, v___x_1284_);
return v___x_1285_;
}
else
{
lean_object* v_stxStack_1286_; lean_object* v_pos_1287_; lean_object* v_recoveredErrors_1288_; lean_object* v_val_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_inc_ref(v_errorMsg_1282_);
v_stxStack_1286_ = lean_ctor_get(v_s_1281_, 0);
lean_inc_ref(v_stxStack_1286_);
v_pos_1287_ = lean_ctor_get(v_s_1281_, 2);
lean_inc(v_pos_1287_);
v_recoveredErrors_1288_ = lean_ctor_get(v_s_1281_, 5);
lean_inc_ref(v_recoveredErrors_1288_);
lean_dec_ref(v_s_1281_);
v_val_1289_ = lean_ctor_get(v_errorMsg_1282_, 0);
lean_inc(v_val_1289_);
lean_dec_ref_known(v_errorMsg_1282_, 1);
v___x_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1290_, 0, v_stxStack_1286_);
lean_ctor_set(v___x_1290_, 1, v_val_1289_);
v___x_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1291_, 0, v_pos_1287_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_unsigned_to_nat(1u);
v___x_1293_ = lean_mk_empty_array_with_capacity(v___x_1292_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1291_);
v___x_1295_ = l_Array_append___redArg(v_recoveredErrors_1288_, v___x_1294_);
lean_dec_ref(v___x_1294_);
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object* v_s_1296_, lean_object* v_e_1297_){
_start:
{
lean_object* v_stxStack_1298_; lean_object* v_lhsPrec_1299_; lean_object* v_pos_1300_; lean_object* v_cache_1301_; lean_object* v_recoveredErrors_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_stxStack_1298_ = lean_ctor_get(v_s_1296_, 0);
v_lhsPrec_1299_ = lean_ctor_get(v_s_1296_, 1);
v_pos_1300_ = lean_ctor_get(v_s_1296_, 2);
v_cache_1301_ = lean_ctor_get(v_s_1296_, 3);
v_recoveredErrors_1302_ = lean_ctor_get(v_s_1296_, 5);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_s_1296_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v_s_1296_, 4);
lean_dec(v_unused_1311_);
v___x_1304_ = v_s_1296_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_recoveredErrors_1302_);
lean_inc(v_cache_1301_);
lean_inc(v_pos_1300_);
lean_inc(v_lhsPrec_1299_);
lean_inc(v_stxStack_1298_);
lean_dec(v_s_1296_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_e_1297_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 4, v___x_1306_);
v___x_1308_ = v___x_1304_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_stxStack_1298_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v_lhsPrec_1299_);
lean_ctor_set(v_reuseFailAlloc_1309_, 2, v_pos_1300_);
lean_ctor_set(v_reuseFailAlloc_1309_, 3, v_cache_1301_);
lean_ctor_set(v_reuseFailAlloc_1309_, 4, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1309_, 5, v_recoveredErrors_1302_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object* v_s_1312_, lean_object* v_msg_1313_){
_start:
{
lean_object* v_stxStack_1314_; lean_object* v_lhsPrec_1315_; lean_object* v_pos_1316_; lean_object* v_cache_1317_; lean_object* v_recoveredErrors_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1332_; 
v_stxStack_1314_ = lean_ctor_get(v_s_1312_, 0);
v_lhsPrec_1315_ = lean_ctor_get(v_s_1312_, 1);
v_pos_1316_ = lean_ctor_get(v_s_1312_, 2);
v_cache_1317_ = lean_ctor_get(v_s_1312_, 3);
v_recoveredErrors_1318_ = lean_ctor_get(v_s_1312_, 5);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_s_1312_);
if (v_isSharedCheck_1332_ == 0)
{
lean_object* v_unused_1333_; 
v_unused_1333_ = lean_ctor_get(v_s_1312_, 4);
lean_dec(v_unused_1333_);
v___x_1320_ = v_s_1312_;
v_isShared_1321_ = v_isSharedCheck_1332_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_recoveredErrors_1318_);
lean_inc(v_cache_1317_);
lean_inc(v_pos_1316_);
lean_inc(v_lhsPrec_1315_);
lean_inc(v_stxStack_1314_);
lean_dec(v_s_1312_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1332_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1322_ = lean_box(0);
v___x_1323_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1325_, 0, v_msg_1313_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1322_);
lean_ctor_set(v___x_1326_, 1, v___x_1323_);
lean_ctor_set(v___x_1326_, 2, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 4, v___x_1327_);
v___x_1329_ = v___x_1320_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_stxStack_1314_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_lhsPrec_1315_);
lean_ctor_set(v_reuseFailAlloc_1331_, 2, v_pos_1316_);
lean_ctor_set(v_reuseFailAlloc_1331_, 3, v_cache_1317_);
lean_ctor_set(v_reuseFailAlloc_1331_, 4, v___x_1327_);
lean_ctor_set(v_reuseFailAlloc_1331_, 5, v_recoveredErrors_1318_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1329_, v___x_1322_);
return v___x_1330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object* v_s_1334_, lean_object* v_msg_1335_, lean_object* v_expected_1336_, uint8_t v_pushMissing_1337_){
_start:
{
lean_object* v_stxStack_1338_; lean_object* v_lhsPrec_1339_; lean_object* v_pos_1340_; lean_object* v_cache_1341_; lean_object* v_recoveredErrors_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1353_; 
v_stxStack_1338_ = lean_ctor_get(v_s_1334_, 0);
v_lhsPrec_1339_ = lean_ctor_get(v_s_1334_, 1);
v_pos_1340_ = lean_ctor_get(v_s_1334_, 2);
v_cache_1341_ = lean_ctor_get(v_s_1334_, 3);
v_recoveredErrors_1342_ = lean_ctor_get(v_s_1334_, 5);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_s_1334_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; 
v_unused_1354_ = lean_ctor_get(v_s_1334_, 4);
lean_dec(v_unused_1354_);
v___x_1344_ = v_s_1334_;
v_isShared_1345_ = v_isSharedCheck_1353_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_recoveredErrors_1342_);
lean_inc(v_cache_1341_);
lean_inc(v_pos_1340_);
lean_inc(v_lhsPrec_1339_);
lean_inc(v_stxStack_1338_);
lean_dec(v_s_1334_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1353_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v_s_1350_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v_msg_1335_);
lean_ctor_set(v___x_1347_, 2, v_expected_1336_);
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 4, v___x_1348_);
v_s_1350_ = v___x_1344_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_stxStack_1338_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_lhsPrec_1339_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_pos_1340_);
lean_ctor_set(v_reuseFailAlloc_1352_, 3, v_cache_1341_);
lean_ctor_set(v_reuseFailAlloc_1352_, 4, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1352_, 5, v_recoveredErrors_1342_);
v_s_1350_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
if (v_pushMissing_1337_ == 0)
{
return v_s_1350_;
}
else
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1350_, v___x_1346_);
return v___x_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object* v_s_1355_, lean_object* v_msg_1356_, lean_object* v_expected_1357_, lean_object* v_pushMissing_1358_){
_start:
{
uint8_t v_pushMissing_boxed_1359_; lean_object* v_res_1360_; 
v_pushMissing_boxed_1359_ = lean_unbox(v_pushMissing_1358_);
v_res_1360_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1355_, v_msg_1356_, v_expected_1357_, v_pushMissing_boxed_1359_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object* v_s_1362_, lean_object* v_expected_1363_){
_start:
{
lean_object* v___x_1364_; uint8_t v___x_1365_; lean_object* v___x_1366_; 
v___x_1364_ = ((lean_object*)(l_Lean_Parser_ParserState_mkEOIError___closed__0));
v___x_1365_ = 1;
v___x_1366_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1362_, v___x_1364_, v_expected_1363_, v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object* v_s_1367_, lean_object* v_ex_1368_, lean_object* v_pos_1369_, lean_object* v_initStackSz_x3f_1370_){
_start:
{
lean_object* v_s_1372_; lean_object* v_s_1391_; 
v_s_1391_ = l_Lean_Parser_ParserState_setPos(v_s_1367_, v_pos_1369_);
if (lean_obj_tag(v_initStackSz_x3f_1370_) == 1)
{
lean_object* v_val_1392_; lean_object* v_s_1393_; 
v_val_1392_ = lean_ctor_get(v_initStackSz_x3f_1370_, 0);
v_s_1393_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1391_, v_val_1392_);
v_s_1372_ = v_s_1393_;
goto v___jp_1371_;
}
else
{
v_s_1372_ = v_s_1391_;
goto v___jp_1371_;
}
v___jp_1371_:
{
lean_object* v_stxStack_1373_; lean_object* v_lhsPrec_1374_; lean_object* v_pos_1375_; lean_object* v_cache_1376_; lean_object* v_recoveredErrors_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1389_; 
v_stxStack_1373_ = lean_ctor_get(v_s_1372_, 0);
v_lhsPrec_1374_ = lean_ctor_get(v_s_1372_, 1);
v_pos_1375_ = lean_ctor_get(v_s_1372_, 2);
v_cache_1376_ = lean_ctor_get(v_s_1372_, 3);
v_recoveredErrors_1377_ = lean_ctor_get(v_s_1372_, 5);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_s_1372_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v_s_1372_, 4);
lean_dec(v_unused_1390_);
v___x_1379_ = v_s_1372_;
v_isShared_1380_ = v_isSharedCheck_1389_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_recoveredErrors_1377_);
lean_inc(v_cache_1376_);
lean_inc(v_pos_1375_);
lean_inc(v_lhsPrec_1374_);
lean_inc(v_stxStack_1373_);
lean_dec(v_s_1372_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1389_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v_s_1386_; 
v___x_1381_ = lean_box(0);
v___x_1382_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1383_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1381_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
lean_ctor_set(v___x_1383_, 2, v_ex_1368_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 4, v___x_1384_);
v_s_1386_ = v___x_1379_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_stxStack_1373_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_lhsPrec_1374_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_pos_1375_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_cache_1376_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1388_, 5, v_recoveredErrors_1377_);
v_s_1386_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1386_, v___x_1381_);
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object* v_s_1394_, lean_object* v_ex_1395_, lean_object* v_pos_1396_, lean_object* v_initStackSz_x3f_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1394_, v_ex_1395_, v_pos_1396_, v_initStackSz_x3f_1397_);
lean_dec(v_initStackSz_x3f_1397_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object* v_s_1399_, lean_object* v_msg_1400_, lean_object* v_pos_1401_, lean_object* v_initStackSz_x3f_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = lean_box(0);
v___x_1404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1404_, 0, v_msg_1400_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1399_, v___x_1404_, v_pos_1401_, v_initStackSz_x3f_1402_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object* v_s_1406_, lean_object* v_msg_1407_, lean_object* v_pos_1408_, lean_object* v_initStackSz_x3f_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_1406_, v_msg_1407_, v_pos_1408_, v_initStackSz_x3f_1409_);
lean_dec(v_initStackSz_x3f_1409_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object* v_msg_1411_){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = lean_panic_fn_borrowed(v___x_1412_, v_msg_1411_);
return v___x_1413_;
}
}
static lean_object* _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3(void){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1417_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2));
v___x_1418_ = lean_unsigned_to_nat(14u);
v___x_1419_ = lean_unsigned_to_nat(22u);
v___x_1420_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1));
v___x_1421_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0));
v___x_1422_ = l_mkPanicMessageWithDecl(v___x_1421_, v___x_1420_, v___x_1419_, v___x_1418_, v___x_1417_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object* v_s_1423_, lean_object* v_ex_1424_, lean_object* v_iniPos_1425_){
_start:
{
lean_object* v_stxStack_1426_; lean_object* v_tk_1427_; lean_object* v___y_1429_; lean_object* v___x_1450_; uint8_t v___x_1451_; 
v_stxStack_1426_ = lean_ctor_get(v_s_1423_, 0);
v_tk_1427_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1426_);
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = lean_nat_dec_le(v___x_1450_, v_iniPos_1425_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; 
lean_dec(v_iniPos_1425_);
v___x_1452_ = l_Lean_Syntax_getPos_x3f(v_tk_1427_, v___x_1451_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = lean_obj_once(&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3, &l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once, _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3);
v___x_1454_ = l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(v___x_1453_);
v___y_1429_ = v___x_1454_;
goto v___jp_1428_;
}
else
{
lean_object* v_val_1455_; 
v_val_1455_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_val_1455_);
lean_dec_ref_known(v___x_1452_, 1);
v___y_1429_ = v_val_1455_;
goto v___jp_1428_;
}
}
else
{
v___y_1429_ = v_iniPos_1425_;
goto v___jp_1428_;
}
v___jp_1428_:
{
lean_object* v_s_1430_; lean_object* v_stxStack_1431_; lean_object* v_lhsPrec_1432_; lean_object* v_pos_1433_; lean_object* v_cache_1434_; lean_object* v_recoveredErrors_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1448_; 
v_s_1430_ = l_Lean_Parser_ParserState_setPos(v_s_1423_, v___y_1429_);
v_stxStack_1431_ = lean_ctor_get(v_s_1430_, 0);
v_lhsPrec_1432_ = lean_ctor_get(v_s_1430_, 1);
v_pos_1433_ = lean_ctor_get(v_s_1430_, 2);
v_cache_1434_ = lean_ctor_get(v_s_1430_, 3);
v_recoveredErrors_1435_ = lean_ctor_get(v_s_1430_, 5);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_s_1430_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; 
v_unused_1449_ = lean_ctor_get(v_s_1430_, 4);
lean_dec(v_unused_1449_);
v___x_1437_ = v_s_1430_;
v_isShared_1438_ = v_isSharedCheck_1448_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_recoveredErrors_1435_);
lean_inc(v_cache_1434_);
lean_inc(v_pos_1433_);
lean_inc(v_lhsPrec_1432_);
lean_inc(v_stxStack_1431_);
lean_dec(v_s_1430_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1448_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v_s_1443_; 
v___x_1439_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1440_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1440_, 0, v_tk_1427_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
lean_ctor_set(v___x_1440_, 2, v_ex_1424_);
v___x_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 4, v___x_1441_);
v_s_1443_ = v___x_1437_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_stxStack_1431_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_lhsPrec_1432_);
lean_ctor_set(v_reuseFailAlloc_1447_, 2, v_pos_1433_);
lean_ctor_set(v_reuseFailAlloc_1447_, 3, v_cache_1434_);
lean_ctor_set(v_reuseFailAlloc_1447_, 4, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1447_, 5, v_recoveredErrors_1435_);
v_s_1443_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1444_ = l_Lean_Parser_ParserState_popSyntax(v_s_1443_);
v___x_1445_ = lean_box(0);
v___x_1446_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1444_, v___x_1445_);
return v___x_1446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object* v_s_1456_, lean_object* v_msg_1457_, lean_object* v_iniPos_1458_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = lean_box(0);
v___x_1460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1460_, 0, v_msg_1457_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_1456_, v___x_1460_, v_iniPos_1458_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object* v_s_1462_, lean_object* v_msg_1463_, lean_object* v_pos_1464_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; lean_object* v___x_1468_; 
v___x_1465_ = l_Lean_Parser_ParserState_setPos(v_s_1462_, v_pos_1464_);
v___x_1466_ = lean_box(0);
v___x_1467_ = 1;
v___x_1468_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_1465_, v_msg_1463_, v___x_1466_, v___x_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object* v_ctx_1470_, lean_object* v_as_1471_, size_t v_sz_1472_, size_t v_i_1473_, lean_object* v_b_1474_){
_start:
{
uint8_t v___x_1475_; 
v___x_1475_ = lean_usize_dec_lt(v_i_1473_, v_sz_1472_);
if (v___x_1475_ == 0)
{
lean_dec_ref(v_ctx_1470_);
return v_b_1474_;
}
else
{
lean_object* v_a_1476_; lean_object* v_snd_1477_; lean_object* v_fst_1478_; lean_object* v_snd_1479_; lean_object* v_errStr_1481_; lean_object* v_errStr_1492_; uint8_t v___x_1493_; 
v_a_1476_ = lean_array_uget_borrowed(v_as_1471_, v_i_1473_);
v_snd_1477_ = lean_ctor_get(v_a_1476_, 1);
v_fst_1478_ = lean_ctor_get(v_a_1476_, 0);
v_snd_1479_ = lean_ctor_get(v_snd_1477_, 1);
v_errStr_1492_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1493_ = lean_string_dec_eq(v_b_1474_, v_errStr_1492_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0));
v___x_1495_ = lean_string_append(v_b_1474_, v___x_1494_);
v_errStr_1481_ = v___x_1495_;
goto v___jp_1480_;
}
else
{
v_errStr_1481_ = v_b_1474_;
goto v___jp_1480_;
}
v___jp_1480_:
{
lean_object* v_fileName_1482_; lean_object* v_fileMap_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; 
v_fileName_1482_ = lean_ctor_get(v_ctx_1470_, 1);
v_fileMap_1483_ = lean_ctor_get(v_ctx_1470_, 2);
lean_inc_ref(v_fileMap_1483_);
v___x_1484_ = l_Lean_FileMap_toPosition(v_fileMap_1483_, v_fst_1478_);
lean_inc(v_snd_1479_);
v___x_1485_ = l_Lean_Parser_Error_toString(v_snd_1479_);
v___x_1486_ = lean_box(0);
lean_inc_ref(v_fileName_1482_);
v___x_1487_ = l_Lean_mkErrorStringWithPos(v_fileName_1482_, v___x_1484_, v___x_1485_, v___x_1486_, v___x_1486_, v___x_1486_);
lean_dec_ref(v___x_1485_);
v___x_1488_ = lean_string_append(v_errStr_1481_, v___x_1487_);
lean_dec_ref(v___x_1487_);
v___x_1489_ = ((size_t)1ULL);
v___x_1490_ = lean_usize_add(v_i_1473_, v___x_1489_);
v_i_1473_ = v___x_1490_;
v_b_1474_ = v___x_1488_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object* v_ctx_1496_, lean_object* v_as_1497_, lean_object* v_sz_1498_, lean_object* v_i_1499_, lean_object* v_b_1500_){
_start:
{
size_t v_sz_boxed_1501_; size_t v_i_boxed_1502_; lean_object* v_res_1503_; 
v_sz_boxed_1501_ = lean_unbox_usize(v_sz_1498_);
lean_dec(v_sz_1498_);
v_i_boxed_1502_ = lean_unbox_usize(v_i_1499_);
lean_dec(v_i_1499_);
v_res_1503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1496_, v_as_1497_, v_sz_boxed_1501_, v_i_boxed_1502_, v_b_1500_);
lean_dec_ref(v_as_1497_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object* v_ctx_1504_, lean_object* v_s_1505_){
_start:
{
lean_object* v_errStr_1506_; lean_object* v___x_1507_; size_t v_sz_1508_; size_t v___x_1509_; lean_object* v___x_1510_; 
v_errStr_1506_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1507_ = l_Lean_Parser_ParserState_allErrors(v_s_1505_);
v_sz_1508_ = lean_array_size(v___x_1507_);
v___x_1509_ = ((size_t)0ULL);
v___x_1510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1504_, v___x_1507_, v_sz_1508_, v___x_1509_, v_errStr_1506_);
lean_dec_ref(v___x_1507_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object* v_x_1511_, lean_object* v_s_1512_){
_start:
{
lean_inc_ref(v_s_1512_);
return v_s_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object* v_x_1513_, lean_object* v_s_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v_x_1513_, v_s_1514_);
lean_dec_ref(v_s_1514_);
lean_dec_ref(v_x_1513_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl(lean_object* v_x_1518_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_obj_tag_nat(v_x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl___boxed(lean_object* v_x_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_Parser_FirstTokens_ctorIdx___impl(v_x_1520_);
lean_dec(v_x_1520_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object* v_t_1522_, lean_object* v_k_1523_){
_start:
{
switch(lean_obj_tag(v_t_1522_))
{
case 2:
{
lean_object* v_a_1524_; lean_object* v___x_1525_; 
v_a_1524_ = lean_ctor_get(v_t_1522_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v_t_1522_, 1);
v___x_1525_ = lean_apply_1(v_k_1523_, v_a_1524_);
return v___x_1525_;
}
case 3:
{
lean_object* v_a_1526_; lean_object* v___x_1527_; 
v_a_1526_ = lean_ctor_get(v_t_1522_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v_t_1522_, 1);
v___x_1527_ = lean_apply_1(v_k_1523_, v_a_1526_);
return v___x_1527_;
}
default: 
{
lean_dec(v_t_1522_);
return v_k_1523_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object* v_motive_1528_, lean_object* v_ctorIdx_1529_, lean_object* v_t_1530_, lean_object* v_h_1531_, lean_object* v_k_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1530_, v_k_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object* v_motive_1534_, lean_object* v_ctorIdx_1535_, lean_object* v_t_1536_, lean_object* v_h_1537_, lean_object* v_k_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Parser_FirstTokens_ctorElim(v_motive_1534_, v_ctorIdx_1535_, v_t_1536_, v_h_1537_, v_k_1538_);
lean_dec(v_ctorIdx_1535_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object* v_t_1540_, lean_object* v_epsilon_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1540_, v_epsilon_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object* v_motive_1543_, lean_object* v_t_1544_, lean_object* v_h_1545_, lean_object* v_epsilon_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1544_, v_epsilon_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object* v_t_1548_, lean_object* v_unknown_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1548_, v_unknown_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object* v_motive_1551_, lean_object* v_t_1552_, lean_object* v_h_1553_, lean_object* v_unknown_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1552_, v_unknown_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object* v_t_1556_, lean_object* v_tokens_1557_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1556_, v_tokens_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object* v_motive_1559_, lean_object* v_t_1560_, lean_object* v_h_1561_, lean_object* v_tokens_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1560_, v_tokens_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object* v_t_1564_, lean_object* v_optTokens_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1564_, v_optTokens_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object* v_motive_1567_, lean_object* v_t_1568_, lean_object* v_h_1569_, lean_object* v_optTokens_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1568_, v_optTokens_1570_);
return v___x_1571_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens_default(void){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_box(0);
return v___x_1572_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens(void){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_box(0);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object* v_x_1574_, lean_object* v_x_1575_){
_start:
{
switch(lean_obj_tag(v_x_1574_))
{
case 0:
{
return v_x_1575_;
}
case 3:
{
switch(lean_obj_tag(v_x_1575_))
{
case 3:
{
lean_object* v_a_1576_; lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_a_1576_ = lean_ctor_get(v_x_1574_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v_x_1574_, 1);
v_a_1577_ = lean_ctor_get(v_x_1575_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_x_1575_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1579_ = v_x_1575_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v_x_1575_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = l_List_appendTR___redArg(v_a_1576_, v_a_1577_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v___x_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
case 2:
{
lean_object* v_a_1586_; lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1595_; 
v_a_1586_ = lean_ctor_get(v_x_1574_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v_x_1574_, 1);
v_a_1587_ = lean_ctor_get(v_x_1575_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_x_1575_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1589_ = v_x_1575_;
v_isShared_1590_ = v_isSharedCheck_1595_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v_x_1575_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1595_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1591_ = l_List_appendTR___redArg(v_a_1586_, v_a_1587_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1591_);
v___x_1593_ = v___x_1589_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
case 1:
{
lean_dec_ref_known(v_x_1574_, 1);
return v_x_1575_;
}
default: 
{
lean_dec(v_x_1575_);
return v_x_1574_;
}
}
}
default: 
{
lean_dec(v_x_1575_);
return v_x_1574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object* v_x_1596_){
_start:
{
if (lean_obj_tag(v_x_1596_) == 2)
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
v_a_1597_ = lean_ctor_get(v_x_1596_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_x_1596_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v_x_1596_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v_x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set_tag(v___x_1599_, 3);
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1597_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
else
{
return v_x_1596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object* v_x_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v_s_u2081_1608_; lean_object* v_s_u2082_1609_; 
switch(lean_obj_tag(v_x_1605_))
{
case 0:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1606_);
return v___x_1612_;
}
case 2:
{
switch(lean_obj_tag(v_x_1606_))
{
case 0:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1605_);
return v___x_1613_;
}
case 2:
{
lean_object* v_a_1614_; lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1623_; 
v_a_1614_ = lean_ctor_get(v_x_1605_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v_x_1605_, 1);
v_a_1615_ = lean_ctor_get(v_x_1606_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_x_1606_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1617_ = v_x_1606_;
v_isShared_1618_ = v_isSharedCheck_1623_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v_x_1606_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1623_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1619_ = l_List_appendTR___redArg(v_a_1614_, v_a_1615_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v___x_1619_);
v___x_1621_ = v___x_1617_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
case 3:
{
lean_object* v_a_1624_; lean_object* v_a_1625_; 
v_a_1624_ = lean_ctor_get(v_x_1605_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v_x_1605_, 1);
v_a_1625_ = lean_ctor_get(v_x_1606_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v_x_1606_, 1);
v_s_u2081_1608_ = v_a_1624_;
v_s_u2082_1609_ = v_a_1625_;
goto v___jp_1607_;
}
default: 
{
lean_object* v___x_1626_; 
lean_dec_ref_known(v_x_1605_, 1);
lean_dec(v_x_1606_);
v___x_1626_ = lean_box(1);
return v___x_1626_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_x_1606_))
{
case 0:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1605_);
return v___x_1627_;
}
case 3:
{
lean_object* v_a_1628_; lean_object* v_a_1629_; 
v_a_1628_ = lean_ctor_get(v_x_1605_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v_x_1605_, 1);
v_a_1629_ = lean_ctor_get(v_x_1606_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v_x_1606_, 1);
v_s_u2081_1608_ = v_a_1628_;
v_s_u2082_1609_ = v_a_1629_;
goto v___jp_1607_;
}
case 2:
{
lean_object* v_a_1630_; lean_object* v_a_1631_; 
v_a_1630_ = lean_ctor_get(v_x_1605_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v_x_1605_, 1);
v_a_1631_ = lean_ctor_get(v_x_1606_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v_x_1606_, 1);
v_s_u2081_1608_ = v_a_1630_;
v_s_u2082_1609_ = v_a_1631_;
goto v___jp_1607_;
}
default: 
{
lean_object* v___x_1632_; 
lean_dec_ref_known(v_x_1605_, 1);
lean_dec(v_x_1606_);
v___x_1632_ = lean_box(1);
return v___x_1632_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_1606_) == 0)
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1605_);
return v___x_1633_;
}
else
{
lean_object* v___x_1634_; 
lean_dec(v_x_1606_);
lean_dec(v_x_1605_);
v___x_1634_ = lean_box(1);
return v___x_1634_;
}
}
}
v___jp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = l_List_appendTR___redArg(v_s_u2081_1608_, v_s_u2082_1609_);
v___x_1611_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object* v_x_1635_, lean_object* v_x_1636_){
_start:
{
if (lean_obj_tag(v_x_1636_) == 0)
{
return v_x_1635_;
}
else
{
lean_object* v_head_1637_; lean_object* v_tail_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_head_1637_ = lean_ctor_get(v_x_1636_, 0);
v_tail_1638_ = lean_ctor_get(v_x_1636_, 1);
v___x_1639_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_1640_ = lean_string_append(v_x_1635_, v___x_1639_);
v___x_1641_ = lean_string_append(v___x_1640_, v_head_1637_);
v_x_1635_ = v___x_1641_;
v_x_1636_ = v_tail_1638_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object* v_x_1643_, lean_object* v_x_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v_x_1643_, v_x_1644_);
lean_dec(v_x_1644_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object* v_x_1649_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 0)
{
lean_object* v___x_1650_; 
v___x_1650_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0));
return v___x_1650_;
}
else
{
lean_object* v_tail_1651_; 
v_tail_1651_ = lean_ctor_get(v_x_1649_, 1);
if (lean_obj_tag(v_tail_1651_) == 0)
{
lean_object* v_head_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_head_1652_ = lean_ctor_get(v_x_1649_, 0);
v___x_1653_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1654_ = lean_string_append(v___x_1653_, v_head_1652_);
v___x_1655_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2));
v___x_1656_ = lean_string_append(v___x_1654_, v___x_1655_);
return v___x_1656_;
}
else
{
lean_object* v_head_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; uint32_t v___x_1661_; lean_object* v___x_1662_; 
v_head_1657_ = lean_ctor_get(v_x_1649_, 0);
v___x_1658_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1659_ = lean_string_append(v___x_1658_, v_head_1657_);
v___x_1660_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v___x_1659_, v_tail_1651_);
v___x_1661_ = 93;
v___x_1662_ = lean_string_push(v___x_1660_, v___x_1661_);
return v___x_1662_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object* v_x_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_x_1663_);
lean_dec(v_x_1663_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object* v_x_1668_){
_start:
{
switch(lean_obj_tag(v_x_1668_))
{
case 0:
{
lean_object* v___x_1669_; 
v___x_1669_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__0));
return v___x_1669_;
}
case 1:
{
lean_object* v___x_1670_; 
v___x_1670_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__1));
return v___x_1670_;
}
case 2:
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v_x_1668_, 0);
v___x_1672_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1671_);
return v___x_1672_;
}
default: 
{
lean_object* v_a_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v_a_1673_ = lean_ctor_get(v_x_1668_, 0);
v___x_1674_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__2));
v___x_1675_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1673_);
v___x_1676_ = lean_string_append(v___x_1674_, v___x_1675_);
lean_dec_ref(v___x_1675_);
return v___x_1676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object* v_x_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_Parser_FirstTokens_toStr(v_x_1677_);
lean_dec(v_x_1677_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object* v___y_1681_){
_start:
{
lean_inc(v___y_1681_);
return v___y_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__0(v___y_1682_);
lean_dec(v___y_1682_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object* v___y_1684_){
_start:
{
lean_inc_ref(v___y_1684_);
return v___y_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object* v___y_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__1(v___y_1685_);
lean_dec_ref(v___y_1685_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object* v_f_1700_, lean_object* v_p_1701_){
_start:
{
lean_object* v_info_1702_; lean_object* v_fn_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1711_; 
v_info_1702_ = lean_ctor_get(v_p_1701_, 0);
v_fn_1703_ = lean_ctor_get(v_p_1701_, 1);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_p_1701_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1705_ = v_p_1701_;
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_fn_1703_);
lean_inc(v_info_1702_);
lean_dec(v_p_1701_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = lean_apply_1(v_f_1700_, v_fn_1703_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 1, v___x_1707_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_info_1702_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object* v_f_1712_, lean_object* v_p_1713_, lean_object* v_c_1714_, lean_object* v_s_1715_){
_start:
{
lean_object* v_toInputContext_1716_; lean_object* v_toParserModuleContext_1717_; lean_object* v_toCacheableParserContext_1718_; lean_object* v_tokens_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1728_; 
v_toInputContext_1716_ = lean_ctor_get(v_c_1714_, 0);
v_toParserModuleContext_1717_ = lean_ctor_get(v_c_1714_, 1);
v_toCacheableParserContext_1718_ = lean_ctor_get(v_c_1714_, 2);
v_tokens_1719_ = lean_ctor_get(v_c_1714_, 3);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_c_1714_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1721_ = v_c_1714_;
v_isShared_1722_ = v_isSharedCheck_1728_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_tokens_1719_);
lean_inc(v_toCacheableParserContext_1718_);
lean_inc(v_toParserModuleContext_1717_);
lean_inc(v_toInputContext_1716_);
lean_dec(v_c_1714_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1728_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1723_ = lean_apply_1(v_f_1712_, v_toCacheableParserContext_1718_);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 2, v___x_1723_);
v___x_1725_ = v___x_1721_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_toInputContext_1716_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_toParserModuleContext_1717_);
lean_ctor_set(v_reuseFailAlloc_1727_, 2, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1727_, 3, v_tokens_1719_);
v___x_1725_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_apply_2(v_p_1713_, v___x_1725_, v_s_1715_);
return v___x_1726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object* v_f_1729_, lean_object* v_p_1730_){
_start:
{
lean_object* v_info_1731_; lean_object* v_fn_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1740_; 
v_info_1731_ = lean_ctor_get(v_p_1730_, 0);
v_fn_1732_ = lean_ctor_get(v_p_1730_, 1);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_p_1730_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1734_ = v_p_1730_;
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_fn_1732_);
lean_inc(v_info_1731_);
lean_dec(v_p_1730_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1736_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_1736_, 0, v_f_1729_);
lean_closure_set(v___x_1736_, 1, v_fn_1732_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 1, v___x_1736_);
v___x_1738_ = v___x_1734_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_info_1731_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object* v_drop_1741_, lean_object* v_p_1742_, lean_object* v_c_1743_, lean_object* v_s_1744_){
_start:
{
lean_object* v_stxStack_1745_; lean_object* v_lhsPrec_1746_; lean_object* v_pos_1747_; lean_object* v_cache_1748_; lean_object* v_errorMsg_1749_; lean_object* v_recoveredErrors_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1789_; 
v_stxStack_1745_ = lean_ctor_get(v_s_1744_, 0);
v_lhsPrec_1746_ = lean_ctor_get(v_s_1744_, 1);
v_pos_1747_ = lean_ctor_get(v_s_1744_, 2);
v_cache_1748_ = lean_ctor_get(v_s_1744_, 3);
v_errorMsg_1749_ = lean_ctor_get(v_s_1744_, 4);
v_recoveredErrors_1750_ = lean_ctor_get(v_s_1744_, 5);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_s_1744_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1752_ = v_s_1744_;
v_isShared_1753_ = v_isSharedCheck_1789_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_recoveredErrors_1750_);
lean_inc(v_errorMsg_1749_);
lean_inc(v_cache_1748_);
lean_inc(v_pos_1747_);
lean_inc(v_lhsPrec_1746_);
lean_inc(v_stxStack_1745_);
lean_dec(v_s_1744_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1789_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_raw_1754_; lean_object* v_drop_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1788_; 
v_raw_1754_ = lean_ctor_get(v_stxStack_1745_, 0);
v_drop_1755_ = lean_ctor_get(v_stxStack_1745_, 1);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_stxStack_1745_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1757_ = v_stxStack_1745_;
v_isShared_1758_ = v_isSharedCheck_1788_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_drop_1755_);
lean_inc(v_raw_1754_);
lean_dec(v_stxStack_1745_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1788_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_drop_1741_);
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_raw_1754_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_drop_1741_);
v___x_1760_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1762_; 
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1760_);
v___x_1762_ = v___x_1752_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_lhsPrec_1746_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v_pos_1747_);
lean_ctor_set(v_reuseFailAlloc_1786_, 3, v_cache_1748_);
lean_ctor_set(v_reuseFailAlloc_1786_, 4, v_errorMsg_1749_);
lean_ctor_set(v_reuseFailAlloc_1786_, 5, v_recoveredErrors_1750_);
v___x_1762_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v_s_1763_; lean_object* v_stxStack_1764_; lean_object* v_lhsPrec_1765_; lean_object* v_pos_1766_; lean_object* v_cache_1767_; lean_object* v_errorMsg_1768_; lean_object* v_recoveredErrors_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1785_; 
v_s_1763_ = lean_apply_2(v_p_1742_, v_c_1743_, v___x_1762_);
v_stxStack_1764_ = lean_ctor_get(v_s_1763_, 0);
v_lhsPrec_1765_ = lean_ctor_get(v_s_1763_, 1);
v_pos_1766_ = lean_ctor_get(v_s_1763_, 2);
v_cache_1767_ = lean_ctor_get(v_s_1763_, 3);
v_errorMsg_1768_ = lean_ctor_get(v_s_1763_, 4);
v_recoveredErrors_1769_ = lean_ctor_get(v_s_1763_, 5);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_s_1763_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1771_ = v_s_1763_;
v_isShared_1772_ = v_isSharedCheck_1785_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_recoveredErrors_1769_);
lean_inc(v_errorMsg_1768_);
lean_inc(v_cache_1767_);
lean_inc(v_pos_1766_);
lean_inc(v_lhsPrec_1765_);
lean_inc(v_stxStack_1764_);
lean_dec(v_s_1763_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1785_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v_raw_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1783_; 
v_raw_1773_ = lean_ctor_get(v_stxStack_1764_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_stxStack_1764_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v_stxStack_1764_, 1);
lean_dec(v_unused_1784_);
v___x_1775_ = v_stxStack_1764_;
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_raw_1773_);
lean_dec(v_stxStack_1764_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 1, v_drop_1755_);
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_raw_1773_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_drop_1755_);
v___x_1778_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1778_);
v___x_1780_ = v___x_1771_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_lhsPrec_1765_);
lean_ctor_set(v_reuseFailAlloc_1781_, 2, v_pos_1766_);
lean_ctor_set(v_reuseFailAlloc_1781_, 3, v_cache_1767_);
lean_ctor_set(v_reuseFailAlloc_1781_, 4, v_errorMsg_1768_);
lean_ctor_set(v_reuseFailAlloc_1781_, 5, v_recoveredErrors_1769_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object* v_p_1790_, lean_object* v_c_1791_, lean_object* v_s_1792_){
_start:
{
lean_object* v_cache_1793_; lean_object* v_stxStack_1794_; lean_object* v_lhsPrec_1795_; lean_object* v_pos_1796_; lean_object* v_errorMsg_1797_; lean_object* v_recoveredErrors_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1838_; 
v_cache_1793_ = lean_ctor_get(v_s_1792_, 3);
v_stxStack_1794_ = lean_ctor_get(v_s_1792_, 0);
v_lhsPrec_1795_ = lean_ctor_get(v_s_1792_, 1);
v_pos_1796_ = lean_ctor_get(v_s_1792_, 2);
v_errorMsg_1797_ = lean_ctor_get(v_s_1792_, 4);
v_recoveredErrors_1798_ = lean_ctor_get(v_s_1792_, 5);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_s_1792_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1800_ = v_s_1792_;
v_isShared_1801_ = v_isSharedCheck_1838_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_recoveredErrors_1798_);
lean_inc(v_errorMsg_1797_);
lean_inc(v_cache_1793_);
lean_inc(v_pos_1796_);
lean_inc(v_lhsPrec_1795_);
lean_inc(v_stxStack_1794_);
lean_dec(v_s_1792_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1838_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v_tokenCache_1802_; lean_object* v_parserCache_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1837_; 
v_tokenCache_1802_ = lean_ctor_get(v_cache_1793_, 0);
v_parserCache_1803_ = lean_ctor_get(v_cache_1793_, 1);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_cache_1793_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1805_ = v_cache_1793_;
v_isShared_1806_ = v_isSharedCheck_1837_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_parserCache_1803_);
lean_inc(v_tokenCache_1802_);
lean_dec(v_cache_1793_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1837_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1807_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__1, &l_Lean_Parser_initCacheForInput___closed__1_once, _init_l_Lean_Parser_initCacheForInput___closed__1);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1807_);
v___x_1809_ = v___x_1805_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_tokenCache_1802_);
lean_ctor_set(v_reuseFailAlloc_1836_, 1, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1811_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 3, v___x_1809_);
v___x_1811_ = v___x_1800_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_stxStack_1794_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_lhsPrec_1795_);
lean_ctor_set(v_reuseFailAlloc_1835_, 2, v_pos_1796_);
lean_ctor_set(v_reuseFailAlloc_1835_, 3, v___x_1809_);
lean_ctor_set(v_reuseFailAlloc_1835_, 4, v_errorMsg_1797_);
lean_ctor_set(v_reuseFailAlloc_1835_, 5, v_recoveredErrors_1798_);
v___x_1811_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v_s_x27_1812_; lean_object* v_cache_1813_; lean_object* v_stxStack_1814_; lean_object* v_lhsPrec_1815_; lean_object* v_pos_1816_; lean_object* v_errorMsg_1817_; lean_object* v_recoveredErrors_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1834_; 
v_s_x27_1812_ = lean_apply_2(v_p_1790_, v_c_1791_, v___x_1811_);
v_cache_1813_ = lean_ctor_get(v_s_x27_1812_, 3);
v_stxStack_1814_ = lean_ctor_get(v_s_x27_1812_, 0);
v_lhsPrec_1815_ = lean_ctor_get(v_s_x27_1812_, 1);
v_pos_1816_ = lean_ctor_get(v_s_x27_1812_, 2);
v_errorMsg_1817_ = lean_ctor_get(v_s_x27_1812_, 4);
v_recoveredErrors_1818_ = lean_ctor_get(v_s_x27_1812_, 5);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_s_x27_1812_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1820_ = v_s_x27_1812_;
v_isShared_1821_ = v_isSharedCheck_1834_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_recoveredErrors_1818_);
lean_inc(v_errorMsg_1817_);
lean_inc(v_cache_1813_);
lean_inc(v_pos_1816_);
lean_inc(v_lhsPrec_1815_);
lean_inc(v_stxStack_1814_);
lean_dec(v_s_x27_1812_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1834_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_tokenCache_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1832_; 
v_tokenCache_1822_ = lean_ctor_get(v_cache_1813_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_cache_1813_);
if (v_isSharedCheck_1832_ == 0)
{
lean_object* v_unused_1833_; 
v_unused_1833_ = lean_ctor_get(v_cache_1813_, 1);
lean_dec(v_unused_1833_);
v___x_1824_ = v_cache_1813_;
v_isShared_1825_ = v_isSharedCheck_1832_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_tokenCache_1822_);
lean_dec(v_cache_1813_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1832_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v_parserCache_1803_);
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_tokenCache_1822_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_parserCache_1803_);
v___x_1827_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1829_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 3, v___x_1827_);
v___x_1829_ = v___x_1820_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_stxStack_1814_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_lhsPrec_1815_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_pos_1816_);
lean_ctor_set(v_reuseFailAlloc_1830_, 3, v___x_1827_);
lean_ctor_set(v_reuseFailAlloc_1830_, 4, v_errorMsg_1817_);
lean_ctor_set(v_reuseFailAlloc_1830_, 5, v_recoveredErrors_1818_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object* v_p_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_){
_start:
{
lean_object* v___f_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___f_1842_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn___lam__0), 3, 1);
lean_closure_set(v___f_1842_, 0, v_p_1839_);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v___x_1843_, v___f_1842_, v_a_1840_, v_a_1841_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object* v_p_1845_){
_start:
{
lean_object* v_info_1846_; lean_object* v_fn_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1855_; 
v_info_1846_ = lean_ctor_get(v_p_1845_, 0);
v_fn_1847_ = lean_ctor_get(v_p_1845_, 1);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_p_1845_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1849_ = v_p_1845_;
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_fn_1847_);
lean_inc(v_info_1846_);
lean_dec(v_p_1845_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1851_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn), 3, 1);
lean_closure_set(v___x_1851_, 0, v_fn_1847_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 1, v___x_1851_);
v___x_1853_ = v___x_1849_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_info_1846_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object* v_f_1856_, lean_object* v_p_1857_, lean_object* v_c_1858_, lean_object* v_s_1859_){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_apply_1(v_f_1856_, v_c_1858_);
v___x_1861_ = lean_apply_2(v_p_1857_, v___x_1860_, v_s_1859_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object* v_f_1862_, lean_object* v_p_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v___f_1866_; lean_object* v___x_1867_; 
v___f_1866_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptUncacheableContextFn___lam__0), 4, 2);
lean_closure_set(v___f_1866_, 0, v_f_1862_);
lean_closure_set(v___f_1866_, 1, v_p_1863_);
v___x_1867_ = l_Lean_Parser_withResetCacheFn(v___f_1866_, v_a_1864_, v_a_1865_);
return v___x_1867_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object* v_a_1868_, lean_object* v_x_1869_){
_start:
{
if (lean_obj_tag(v_x_1869_) == 0)
{
uint8_t v___x_1870_; 
v___x_1870_ = 0;
return v___x_1870_;
}
else
{
lean_object* v_key_1871_; lean_object* v_tail_1872_; uint8_t v___x_1873_; 
v_key_1871_ = lean_ctor_get(v_x_1869_, 0);
v_tail_1872_ = lean_ctor_get(v_x_1869_, 2);
v___x_1873_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_1871_, v_a_1868_);
if (v___x_1873_ == 0)
{
v_x_1869_ = v_tail_1872_;
goto _start;
}
else
{
return v___x_1873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object* v_a_1875_, lean_object* v_x_1876_){
_start:
{
uint8_t v_res_1877_; lean_object* v_r_1878_; 
v_res_1877_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_1875_, v_x_1876_);
lean_dec(v_x_1876_);
lean_dec_ref(v_a_1875_);
v_r_1878_ = lean_box(v_res_1877_);
return v_r_1878_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1879_, lean_object* v_x_1880_){
_start:
{
if (lean_obj_tag(v_x_1880_) == 0)
{
return v_x_1879_;
}
else
{
lean_object* v_key_1881_; lean_object* v_value_1882_; lean_object* v_tail_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1913_; 
v_key_1881_ = lean_ctor_get(v_x_1880_, 0);
v_value_1882_ = lean_ctor_get(v_x_1880_, 1);
v_tail_1883_ = lean_ctor_get(v_x_1880_, 2);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_x_1880_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1885_ = v_x_1880_;
v_isShared_1886_ = v_isSharedCheck_1913_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_tail_1883_);
lean_inc(v_value_1882_);
lean_inc(v_key_1881_);
lean_dec(v_x_1880_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1913_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v_parserName_1887_; lean_object* v_pos_1888_; lean_object* v___x_1889_; uint64_t v___x_1890_; uint64_t v___y_1892_; 
v_parserName_1887_ = lean_ctor_get(v_key_1881_, 1);
v_pos_1888_ = lean_ctor_get(v_key_1881_, 2);
v___x_1889_ = lean_array_get_size(v_x_1879_);
v___x_1890_ = l_String_instHashableRaw_hash(v_pos_1888_);
if (lean_obj_tag(v_parserName_1887_) == 0)
{
uint64_t v___x_1911_; 
v___x_1911_ = 1723ULL;
v___y_1892_ = v___x_1911_;
goto v___jp_1891_;
}
else
{
uint64_t v_hash_1912_; 
v_hash_1912_ = lean_ctor_get_uint64(v_parserName_1887_, sizeof(void*)*2);
v___y_1892_ = v_hash_1912_;
goto v___jp_1891_;
}
v___jp_1891_:
{
uint64_t v___x_1893_; uint64_t v___x_1894_; uint64_t v___x_1895_; uint64_t v_fold_1896_; uint64_t v___x_1897_; uint64_t v___x_1898_; uint64_t v___x_1899_; size_t v___x_1900_; size_t v___x_1901_; size_t v___x_1902_; size_t v___x_1903_; size_t v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1907_; 
v___x_1893_ = lean_uint64_mix_hash(v___x_1890_, v___y_1892_);
v___x_1894_ = 32ULL;
v___x_1895_ = lean_uint64_shift_right(v___x_1893_, v___x_1894_);
v_fold_1896_ = lean_uint64_xor(v___x_1893_, v___x_1895_);
v___x_1897_ = 16ULL;
v___x_1898_ = lean_uint64_shift_right(v_fold_1896_, v___x_1897_);
v___x_1899_ = lean_uint64_xor(v_fold_1896_, v___x_1898_);
v___x_1900_ = lean_uint64_to_usize(v___x_1899_);
v___x_1901_ = lean_usize_of_nat(v___x_1889_);
v___x_1902_ = ((size_t)1ULL);
v___x_1903_ = lean_usize_sub(v___x_1901_, v___x_1902_);
v___x_1904_ = lean_usize_land(v___x_1900_, v___x_1903_);
v___x_1905_ = lean_array_uget_borrowed(v_x_1879_, v___x_1904_);
lean_inc(v___x_1905_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 2, v___x_1905_);
v___x_1907_ = v___x_1885_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_key_1881_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_value_1882_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1908_; 
v___x_1908_ = lean_array_uset(v_x_1879_, v___x_1904_, v___x_1907_);
v_x_1879_ = v___x_1908_;
v_x_1880_ = v_tail_1883_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1914_, lean_object* v_source_1915_, lean_object* v_target_1916_){
_start:
{
lean_object* v___x_1917_; uint8_t v___x_1918_; 
v___x_1917_ = lean_array_get_size(v_source_1915_);
v___x_1918_ = lean_nat_dec_lt(v_i_1914_, v___x_1917_);
if (v___x_1918_ == 0)
{
lean_dec_ref(v_source_1915_);
lean_dec(v_i_1914_);
return v_target_1916_;
}
else
{
lean_object* v_es_1919_; lean_object* v___x_1920_; lean_object* v_source_1921_; lean_object* v_target_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_es_1919_ = lean_array_fget(v_source_1915_, v_i_1914_);
v___x_1920_ = lean_box(0);
v_source_1921_ = lean_array_fset(v_source_1915_, v_i_1914_, v___x_1920_);
v_target_1922_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_target_1916_, v_es_1919_);
v___x_1923_ = lean_unsigned_to_nat(1u);
v___x_1924_ = lean_nat_add(v_i_1914_, v___x_1923_);
lean_dec(v_i_1914_);
v_i_1914_ = v___x_1924_;
v_source_1915_ = v_source_1921_;
v_target_1916_ = v_target_1922_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object* v_data_1926_){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v_nbuckets_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1927_ = lean_array_get_size(v_data_1926_);
v___x_1928_ = lean_unsigned_to_nat(2u);
v_nbuckets_1929_ = lean_nat_mul(v___x_1927_, v___x_1928_);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = lean_box(0);
v___x_1932_ = lean_mk_array(v_nbuckets_1929_, v___x_1931_);
v___x_1933_ = lean_array_propagate_mark(v_data_1926_, v___x_1932_);
v___x_1934_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v___x_1930_, v_data_1926_, v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object* v_a_1935_, lean_object* v_b_1936_, lean_object* v_x_1937_){
_start:
{
if (lean_obj_tag(v_x_1937_) == 0)
{
lean_dec(v_b_1936_);
lean_dec_ref(v_a_1935_);
return v_x_1937_;
}
else
{
lean_object* v_key_1938_; lean_object* v_value_1939_; lean_object* v_tail_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1952_; 
v_key_1938_ = lean_ctor_get(v_x_1937_, 0);
v_value_1939_ = lean_ctor_get(v_x_1937_, 1);
v_tail_1940_ = lean_ctor_get(v_x_1937_, 2);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_x_1937_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1942_ = v_x_1937_;
v_isShared_1943_ = v_isSharedCheck_1952_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_tail_1940_);
lean_inc(v_value_1939_);
lean_inc(v_key_1938_);
lean_dec(v_x_1937_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1952_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
uint8_t v___x_1944_; 
v___x_1944_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_1938_, v_a_1935_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; lean_object* v___x_1947_; 
v___x_1945_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_1935_, v_b_1936_, v_tail_1940_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 2, v___x_1945_);
v___x_1947_ = v___x_1942_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_key_1938_);
lean_ctor_set(v_reuseFailAlloc_1948_, 1, v_value_1939_);
lean_ctor_set(v_reuseFailAlloc_1948_, 2, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
else
{
lean_object* v___x_1950_; 
lean_dec(v_value_1939_);
lean_dec(v_key_1938_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 1, v_b_1936_);
lean_ctor_set(v___x_1942_, 0, v_a_1935_);
v___x_1950_ = v___x_1942_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1935_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_b_1936_);
lean_ctor_set(v_reuseFailAlloc_1951_, 2, v_tail_1940_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object* v_m_1953_, lean_object* v_a_1954_, lean_object* v_b_1955_){
_start:
{
lean_object* v_size_1956_; lean_object* v_buckets_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_2007_; 
v_size_1956_ = lean_ctor_get(v_m_1953_, 0);
v_buckets_1957_ = lean_ctor_get(v_m_1953_, 1);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_m_1953_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1959_ = v_m_1953_;
v_isShared_1960_ = v_isSharedCheck_2007_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_buckets_1957_);
lean_inc(v_size_1956_);
lean_dec(v_m_1953_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_2007_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v_parserName_1961_; lean_object* v_pos_1962_; lean_object* v___x_1963_; uint64_t v___x_1964_; uint64_t v___y_1966_; 
v_parserName_1961_ = lean_ctor_get(v_a_1954_, 1);
v_pos_1962_ = lean_ctor_get(v_a_1954_, 2);
v___x_1963_ = lean_array_get_size(v_buckets_1957_);
v___x_1964_ = l_String_instHashableRaw_hash(v_pos_1962_);
if (lean_obj_tag(v_parserName_1961_) == 0)
{
uint64_t v___x_2005_; 
v___x_2005_ = 1723ULL;
v___y_1966_ = v___x_2005_;
goto v___jp_1965_;
}
else
{
uint64_t v_hash_2006_; 
v_hash_2006_ = lean_ctor_get_uint64(v_parserName_1961_, sizeof(void*)*2);
v___y_1966_ = v_hash_2006_;
goto v___jp_1965_;
}
v___jp_1965_:
{
uint64_t v___x_1967_; uint64_t v___x_1968_; uint64_t v___x_1969_; uint64_t v_fold_1970_; uint64_t v___x_1971_; uint64_t v___x_1972_; uint64_t v___x_1973_; size_t v___x_1974_; size_t v___x_1975_; size_t v___x_1976_; size_t v___x_1977_; size_t v___x_1978_; lean_object* v_bkt_1979_; uint8_t v___x_1980_; 
v___x_1967_ = lean_uint64_mix_hash(v___x_1964_, v___y_1966_);
v___x_1968_ = 32ULL;
v___x_1969_ = lean_uint64_shift_right(v___x_1967_, v___x_1968_);
v_fold_1970_ = lean_uint64_xor(v___x_1967_, v___x_1969_);
v___x_1971_ = 16ULL;
v___x_1972_ = lean_uint64_shift_right(v_fold_1970_, v___x_1971_);
v___x_1973_ = lean_uint64_xor(v_fold_1970_, v___x_1972_);
v___x_1974_ = lean_uint64_to_usize(v___x_1973_);
v___x_1975_ = lean_usize_of_nat(v___x_1963_);
v___x_1976_ = ((size_t)1ULL);
v___x_1977_ = lean_usize_sub(v___x_1975_, v___x_1976_);
v___x_1978_ = lean_usize_land(v___x_1974_, v___x_1977_);
v_bkt_1979_ = lean_array_uget_borrowed(v_buckets_1957_, v___x_1978_);
v___x_1980_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_1954_, v_bkt_1979_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; lean_object* v_size_x27_1982_; lean_object* v___x_1983_; lean_object* v_buckets_x27_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1981_ = lean_unsigned_to_nat(1u);
v_size_x27_1982_ = lean_nat_add(v_size_1956_, v___x_1981_);
lean_dec(v_size_1956_);
lean_inc(v_bkt_1979_);
v___x_1983_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1983_, 0, v_a_1954_);
lean_ctor_set(v___x_1983_, 1, v_b_1955_);
lean_ctor_set(v___x_1983_, 2, v_bkt_1979_);
v_buckets_x27_1984_ = lean_array_uset(v_buckets_1957_, v___x_1978_, v___x_1983_);
v___x_1985_ = lean_unsigned_to_nat(4u);
v___x_1986_ = lean_nat_mul(v_size_x27_1982_, v___x_1985_);
v___x_1987_ = lean_unsigned_to_nat(3u);
v___x_1988_ = lean_nat_div(v___x_1986_, v___x_1987_);
lean_dec(v___x_1986_);
v___x_1989_ = lean_array_get_size(v_buckets_x27_1984_);
v___x_1990_ = lean_nat_dec_le(v___x_1988_, v___x_1989_);
lean_dec(v___x_1988_);
if (v___x_1990_ == 0)
{
lean_object* v_val_1991_; lean_object* v___x_1993_; 
v_val_1991_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_buckets_x27_1984_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_val_1991_);
lean_ctor_set(v___x_1959_, 0, v_size_x27_1982_);
v___x_1993_ = v___x_1959_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_size_x27_1982_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_val_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
else
{
lean_object* v___x_1996_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_buckets_x27_1984_);
lean_ctor_set(v___x_1959_, 0, v_size_x27_1982_);
v___x_1996_ = v___x_1959_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_size_x27_1982_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_buckets_x27_1984_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
else
{
lean_object* v___x_1998_; lean_object* v_buckets_x27_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2003_; 
lean_inc(v_bkt_1979_);
v___x_1998_ = lean_box(0);
v_buckets_x27_1999_ = lean_array_uset(v_buckets_1957_, v___x_1978_, v___x_1998_);
v___x_2000_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_1954_, v_b_1955_, v_bkt_1979_);
v___x_2001_ = lean_array_uset(v_buckets_x27_1999_, v___x_1978_, v___x_2000_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___x_2001_);
v___x_2003_ = v___x_1959_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_size_1956_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v___x_2001_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object* v_a_2008_, lean_object* v_x_2009_){
_start:
{
if (lean_obj_tag(v_x_2009_) == 0)
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_box(0);
return v___x_2010_;
}
else
{
lean_object* v_key_2011_; lean_object* v_value_2012_; lean_object* v_tail_2013_; uint8_t v___x_2014_; 
v_key_2011_ = lean_ctor_get(v_x_2009_, 0);
v_value_2012_ = lean_ctor_get(v_x_2009_, 1);
v_tail_2013_ = lean_ctor_get(v_x_2009_, 2);
v___x_2014_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_2011_, v_a_2008_);
if (v___x_2014_ == 0)
{
v_x_2009_ = v_tail_2013_;
goto _start;
}
else
{
lean_object* v___x_2016_; 
lean_inc(v_value_2012_);
v___x_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_value_2012_);
return v___x_2016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object* v_a_2017_, lean_object* v_x_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2017_, v_x_2018_);
lean_dec(v_x_2018_);
lean_dec_ref(v_a_2017_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object* v_m_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_buckets_2022_; lean_object* v_parserName_2023_; lean_object* v_pos_2024_; lean_object* v___x_2025_; uint64_t v___x_2026_; uint64_t v___y_2028_; 
v_buckets_2022_ = lean_ctor_get(v_m_2020_, 1);
v_parserName_2023_ = lean_ctor_get(v_a_2021_, 1);
v_pos_2024_ = lean_ctor_get(v_a_2021_, 2);
v___x_2025_ = lean_array_get_size(v_buckets_2022_);
v___x_2026_ = l_String_instHashableRaw_hash(v_pos_2024_);
if (lean_obj_tag(v_parserName_2023_) == 0)
{
uint64_t v___x_2043_; 
v___x_2043_ = 1723ULL;
v___y_2028_ = v___x_2043_;
goto v___jp_2027_;
}
else
{
uint64_t v_hash_2044_; 
v_hash_2044_ = lean_ctor_get_uint64(v_parserName_2023_, sizeof(void*)*2);
v___y_2028_ = v_hash_2044_;
goto v___jp_2027_;
}
v___jp_2027_:
{
uint64_t v___x_2029_; uint64_t v___x_2030_; uint64_t v___x_2031_; uint64_t v_fold_2032_; uint64_t v___x_2033_; uint64_t v___x_2034_; uint64_t v___x_2035_; size_t v___x_2036_; size_t v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; size_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2029_ = lean_uint64_mix_hash(v___x_2026_, v___y_2028_);
v___x_2030_ = 32ULL;
v___x_2031_ = lean_uint64_shift_right(v___x_2029_, v___x_2030_);
v_fold_2032_ = lean_uint64_xor(v___x_2029_, v___x_2031_);
v___x_2033_ = 16ULL;
v___x_2034_ = lean_uint64_shift_right(v_fold_2032_, v___x_2033_);
v___x_2035_ = lean_uint64_xor(v_fold_2032_, v___x_2034_);
v___x_2036_ = lean_uint64_to_usize(v___x_2035_);
v___x_2037_ = lean_usize_of_nat(v___x_2025_);
v___x_2038_ = ((size_t)1ULL);
v___x_2039_ = lean_usize_sub(v___x_2037_, v___x_2038_);
v___x_2040_ = lean_usize_land(v___x_2036_, v___x_2039_);
v___x_2041_ = lean_array_uget_borrowed(v_buckets_2022_, v___x_2040_);
v___x_2042_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2021_, v___x_2041_);
return v___x_2042_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object* v_m_2045_, lean_object* v_a_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2045_, v_a_2046_);
lean_dec_ref(v_a_2046_);
lean_dec_ref(v_m_2045_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object* v_parserName_2048_, lean_object* v_p_2049_, lean_object* v_c_2050_, lean_object* v_s_2051_){
_start:
{
lean_object* v_cache_2052_; lean_object* v_toCacheableParserContext_2053_; lean_object* v_stxStack_2054_; lean_object* v_pos_2055_; lean_object* v_recoveredErrors_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2105_; 
v_cache_2052_ = lean_ctor_get(v_s_2051_, 3);
lean_inc_ref(v_cache_2052_);
v_toCacheableParserContext_2053_ = lean_ctor_get(v_c_2050_, 2);
v_stxStack_2054_ = lean_ctor_get(v_s_2051_, 0);
v_pos_2055_ = lean_ctor_get(v_s_2051_, 2);
v_recoveredErrors_2056_ = lean_ctor_get(v_s_2051_, 5);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_s_2051_);
if (v_isSharedCheck_2105_ == 0)
{
lean_object* v_unused_2106_; lean_object* v_unused_2107_; lean_object* v_unused_2108_; 
v_unused_2106_ = lean_ctor_get(v_s_2051_, 4);
lean_dec(v_unused_2106_);
v_unused_2107_ = lean_ctor_get(v_s_2051_, 3);
lean_dec(v_unused_2107_);
v_unused_2108_ = lean_ctor_get(v_s_2051_, 1);
lean_dec(v_unused_2108_);
v___x_2058_ = v_s_2051_;
v_isShared_2059_ = v_isSharedCheck_2105_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_recoveredErrors_2056_);
lean_inc(v_pos_2055_);
lean_inc(v_stxStack_2054_);
lean_dec(v_s_2051_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2105_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v_parserCache_2060_; lean_object* v_key_2061_; lean_object* v___x_2062_; 
v_parserCache_2060_ = lean_ctor_get(v_cache_2052_, 1);
lean_inc(v_pos_2055_);
lean_inc_ref(v_toCacheableParserContext_2053_);
v_key_2061_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_key_2061_, 0, v_toCacheableParserContext_2053_);
lean_ctor_set(v_key_2061_, 1, v_parserName_2048_);
lean_ctor_set(v_key_2061_, 2, v_pos_2055_);
v___x_2062_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_parserCache_2060_, v_key_2061_);
if (lean_obj_tag(v___x_2062_) == 1)
{
lean_object* v_val_2063_; lean_object* v_stx_2064_; lean_object* v_lhsPrec_2065_; lean_object* v_newPos_2066_; lean_object* v_errorMsg_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
lean_dec_ref_known(v_key_2061_, 3);
lean_dec(v_pos_2055_);
lean_dec_ref(v_c_2050_);
lean_dec_ref(v_p_2049_);
v_val_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_val_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v_stx_2064_ = lean_ctor_get(v_val_2063_, 0);
lean_inc(v_stx_2064_);
v_lhsPrec_2065_ = lean_ctor_get(v_val_2063_, 1);
lean_inc(v_lhsPrec_2065_);
v_newPos_2066_ = lean_ctor_get(v_val_2063_, 2);
lean_inc(v_newPos_2066_);
v_errorMsg_2067_ = lean_ctor_get(v_val_2063_, 3);
lean_inc(v_errorMsg_2067_);
lean_dec(v_val_2063_);
v___x_2068_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_2054_, v_stx_2064_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 4, v_errorMsg_2067_);
lean_ctor_set(v___x_2058_, 2, v_newPos_2066_);
lean_ctor_set(v___x_2058_, 1, v_lhsPrec_2065_);
lean_ctor_set(v___x_2058_, 0, v___x_2068_);
v___x_2070_ = v___x_2058_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_lhsPrec_2065_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v_newPos_2066_);
lean_ctor_set(v_reuseFailAlloc_2071_, 3, v_cache_2052_);
lean_ctor_set(v_reuseFailAlloc_2071_, 4, v_errorMsg_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 5, v_recoveredErrors_2056_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
else
{
lean_object* v_raw_2072_; lean_object* v_initStackSz_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2077_; 
lean_dec(v___x_2062_);
v_raw_2072_ = lean_ctor_get(v_stxStack_2054_, 0);
v_initStackSz_2073_ = lean_array_get_size(v_raw_2072_);
v___x_2074_ = lean_unsigned_to_nat(0u);
v___x_2075_ = lean_box(0);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 4, v___x_2075_);
lean_ctor_set(v___x_2058_, 1, v___x_2074_);
v___x_2077_ = v___x_2058_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_stxStack_2054_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v_pos_2055_);
lean_ctor_set(v_reuseFailAlloc_2104_, 3, v_cache_2052_);
lean_ctor_set(v_reuseFailAlloc_2104_, 4, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2104_, 5, v_recoveredErrors_2056_);
v___x_2077_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v_s_2078_; lean_object* v_cache_2079_; lean_object* v_stxStack_2080_; lean_object* v_lhsPrec_2081_; lean_object* v_pos_2082_; lean_object* v_errorMsg_2083_; lean_object* v_recoveredErrors_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2103_; 
v_s_2078_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v_initStackSz_2073_, v_p_2049_, v_c_2050_, v___x_2077_);
v_cache_2079_ = lean_ctor_get(v_s_2078_, 3);
v_stxStack_2080_ = lean_ctor_get(v_s_2078_, 0);
v_lhsPrec_2081_ = lean_ctor_get(v_s_2078_, 1);
v_pos_2082_ = lean_ctor_get(v_s_2078_, 2);
v_errorMsg_2083_ = lean_ctor_get(v_s_2078_, 4);
v_recoveredErrors_2084_ = lean_ctor_get(v_s_2078_, 5);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_s_2078_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2086_ = v_s_2078_;
v_isShared_2087_ = v_isSharedCheck_2103_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_recoveredErrors_2084_);
lean_inc(v_errorMsg_2083_);
lean_inc(v_cache_2079_);
lean_inc(v_pos_2082_);
lean_inc(v_lhsPrec_2081_);
lean_inc(v_stxStack_2080_);
lean_dec(v_s_2078_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2103_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v_tokenCache_2088_; lean_object* v_parserCache_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2102_; 
v_tokenCache_2088_ = lean_ctor_get(v_cache_2079_, 0);
v_parserCache_2089_ = lean_ctor_get(v_cache_2079_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_cache_2079_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2091_ = v_cache_2079_;
v_isShared_2092_ = v_isSharedCheck_2102_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_parserCache_2089_);
lean_inc(v_tokenCache_2088_);
lean_dec(v_cache_2079_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2102_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2093_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2080_);
lean_inc(v_errorMsg_2083_);
lean_inc(v_pos_2082_);
lean_inc(v_lhsPrec_2081_);
v___x_2094_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
lean_ctor_set(v___x_2094_, 1, v_lhsPrec_2081_);
lean_ctor_set(v___x_2094_, 2, v_pos_2082_);
lean_ctor_set(v___x_2094_, 3, v_errorMsg_2083_);
v___x_2095_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_parserCache_2089_, v_key_2061_, v___x_2094_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 1, v___x_2095_);
v___x_2097_ = v___x_2091_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_tokenCache_2088_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2099_; 
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 3, v___x_2097_);
v___x_2099_ = v___x_2086_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_stxStack_2080_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_lhsPrec_2081_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v_pos_2082_);
lean_ctor_set(v_reuseFailAlloc_2100_, 3, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2100_, 4, v_errorMsg_2083_);
lean_ctor_set(v_reuseFailAlloc_2100_, 5, v_recoveredErrors_2084_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object* v_00_u03b2_2109_, lean_object* v_m_2110_, lean_object* v_a_2111_){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2110_, v_a_2111_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object* v_00_u03b2_2113_, lean_object* v_m_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(v_00_u03b2_2113_, v_m_2114_, v_a_2115_);
lean_dec_ref(v_a_2115_);
lean_dec_ref(v_m_2114_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object* v_00_u03b2_2117_, lean_object* v_m_2118_, lean_object* v_a_2119_, lean_object* v_b_2120_){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_m_2118_, v_a_2119_, v_b_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object* v_00_u03b2_2122_, lean_object* v_a_2123_, lean_object* v_x_2124_){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2123_, v_x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2126_, lean_object* v_a_2127_, lean_object* v_x_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(v_00_u03b2_2126_, v_a_2127_, v_x_2128_);
lean_dec(v_x_2128_);
lean_dec_ref(v_a_2127_);
return v_res_2129_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object* v_00_u03b2_2130_, lean_object* v_a_2131_, lean_object* v_x_2132_){
_start:
{
uint8_t v___x_2133_; 
v___x_2133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_2131_, v_x_2132_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2134_, lean_object* v_a_2135_, lean_object* v_x_2136_){
_start:
{
uint8_t v_res_2137_; lean_object* v_r_2138_; 
v_res_2137_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(v_00_u03b2_2134_, v_a_2135_, v_x_2136_);
lean_dec(v_x_2136_);
lean_dec_ref(v_a_2135_);
v_r_2138_ = lean_box(v_res_2137_);
return v_r_2138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object* v_00_u03b2_2139_, lean_object* v_data_2140_){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_data_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object* v_00_u03b2_2142_, lean_object* v_a_2143_, lean_object* v_b_2144_, lean_object* v_x_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_2143_, v_b_2144_, v_x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2147_, lean_object* v_i_2148_, lean_object* v_source_2149_, lean_object* v_target_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v_i_2148_, v_source_2149_, v_target_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_2152_, lean_object* v_x_2153_, lean_object* v_x_2154_){
_start:
{
lean_object* v___x_2155_; 
v___x_2155_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_x_2153_, v_x_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object* v_parserName_2156_, lean_object* v_p_2157_){
_start:
{
lean_object* v_info_2158_; lean_object* v_fn_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2167_; 
v_info_2158_ = lean_ctor_get(v_p_2157_, 0);
v_fn_2159_ = lean_ctor_get(v_p_2157_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_p_2157_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2161_ = v_p_2157_;
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_fn_2159_);
lean_inc(v_info_2158_);
lean_dec(v_p_2157_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_2163_, 0, v_parserName_2156_);
lean_closure_set(v___x_2163_, 1, v_fn_2159_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 1, v___x_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_info_2158_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1(){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2175_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1));
v___x_2176_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2));
v___x_2177_ = l_Lean_addBuiltinDocString(v___x_2175_, v___x_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object* v_a_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object* v_p_2187_, lean_object* v_ictx_2188_, lean_object* v_pmctx_2189_, lean_object* v_tokens_2190_, lean_object* v_s_2191_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = ((lean_object*)(l_Lean_Parser_ParserFn_run___closed__1));
v___x_2193_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2193_, 0, v_ictx_2188_);
lean_ctor_set(v___x_2193_, 1, v_pmctx_2189_);
lean_ctor_set(v___x_2193_, 2, v___x_2192_);
lean_ctor_set(v___x_2193_, 3, v_tokens_2190_);
v___x_2194_ = lean_apply_2(v_p_2187_, v___x_2193_, v_s_2191_);
return v___x_2194_;
}
}
lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_OrderInstances(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_maxPrec = _init_l_Lean_Parser_maxPrec();
lean_mark_persistent(l_Lean_Parser_maxPrec);
l_Lean_Parser_argPrec = _init_l_Lean_Parser_argPrec();
lean_mark_persistent(l_Lean_Parser_argPrec);
l_Lean_Parser_leadPrec = _init_l_Lean_Parser_leadPrec();
lean_mark_persistent(l_Lean_Parser_leadPrec);
l_Lean_Parser_minPrec = _init_l_Lean_Parser_minPrec();
lean_mark_persistent(l_Lean_Parser_minPrec);
l_Lean_Parser_instInhabitedInputContext = _init_l_Lean_Parser_instInhabitedInputContext();
lean_mark_persistent(l_Lean_Parser_instInhabitedInputContext);
l_Lean_Parser_instInhabitedFirstTokens_default = _init_l_Lean_Parser_instInhabitedFirstTokens_default();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens_default);
l_Lean_Parser_instInhabitedFirstTokens = _init_l_Lean_Parser_instInhabitedFirstTokens();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens);
res = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_InputContext_endPos__valid___autoParam = _init_l_Lean_Parser_InputContext_endPos__valid___autoParam();
lean_mark_persistent(l_Lean_Parser_InputContext_endPos__valid___autoParam);
l_Lean_Parser_InputContext_mk___auto__1 = _init_l_Lean_Parser_InputContext_mk___auto__1();
lean_mark_persistent(l_Lean_Parser_InputContext_mk___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Init_Data_String_OrderInstances(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Types(builtin);
}
#ifdef __cplusplus
}
#endif
