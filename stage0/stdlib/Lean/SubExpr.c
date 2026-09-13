// Lean compiler output
// Module: Lean.SubExpr
// Imports: public import Lean.Meta.Basic public import Init.Data.Format.Macro
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
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_instDecidableEqPos_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_instDecidableEqPos_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_instDecidableEqPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_instDecidableEqPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_maxChildren;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_typeCoord;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_root;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instInhabited;
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_isRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_isRoot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_head_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.SubExpr"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__0_value;
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.head"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__1_value;
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "already at top"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__2 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__2_value;
static lean_once_cell_t l_Lean_SubExpr_Pos_head___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_Pos_head___closed__3;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_tail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.tail"};
static const lean_object* l_Lean_SubExpr_Pos_tail___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_tail___closed__0_value;
static lean_once_cell_t l_Lean_SubExpr_Pos_tail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_Pos_tail___closed__1;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail___boxed(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_push___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.push"};
static const lean_object* l_Lean_SubExpr_Pos_push___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_push___closed__0_value;
static const lean_string_object l_Lean_SubExpr_Pos_push___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid coordinate "};
static const lean_object* l_Lean_SubExpr_Pos_push___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_push___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_depth___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_depth___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_depth___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_depth___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_push___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_append___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_append___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray___boxed(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_toArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_SubExpr_Pos_toArray___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_toArray___closed__0_value;
static const lean_array_object l_Lean_SubExpr_Pos_toArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_Pos_toArray___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_toArray___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lean_SubExpr_Pos_toString___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString___boxed(lean_object*);
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "1"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "2"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Invalid coordinate "};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "malformed "};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__0_value;
static const lean_array_object l_Lean_SubExpr_Pos_fromString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__1_value;
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__2 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.SubExpr.Pos.fromString!"};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x21(lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_instOrd___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instOrd___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instOrd___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instOrd___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instOrd = (const lean_object*)&l_Lean_SubExpr_Pos_instOrd___closed__0_value;
static const lean_closure_object l_Lean_SubExpr_Pos_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instToString___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instToString = (const lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instEmptyCollection;
static const lean_string_object l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Pos.fromString! "};
static const lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instRepr___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instRepr = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instToJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__0_value;
static const lean_closure_object l_Lean_SubExpr_Pos_instToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__0_value),((lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value)} };
static const lean_object* l_Lean_SubExpr_Pos_instToJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instToJson = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instFromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instFromJson = (const lean_object*)&l_Lean_SubExpr_Pos_instFromJson___closed__0_value;
static const lean_string_object l_Lean_instInhabitedSubExpr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedSubExpr_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedSubExpr_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedSubExpr_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedSubExpr_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedSubExpr_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedSubExpr_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedSubExpr_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedSubExpr_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedSubExpr;
LEAN_EXPORT lean_object* l_Lean_SubExpr_mkRoot(lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_isRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_isRoot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_bindingBody_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.SubExpr.bindingBody!"};
static const lean_object* l_Lean_SubExpr_bindingBody_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_bindingBody_x21___closed__0_value;
static const lean_string_object l_Lean_SubExpr_bindingBody_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "subexpr is not a binder"};
static const lean_object* l_Lean_SubExpr_bindingBody_x21___closed__1 = (const lean_object*)&l_Lean_SubExpr_bindingBody_x21___closed__1_value;
static lean_once_cell_t l_Lean_SubExpr_bindingBody_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_bindingBody_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingBody_x21(lean_object*);
static const lean_string_object l_Lean_SubExpr_bindingDomain_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.SubExpr.bindingDomain!"};
static const lean_object* l_Lean_SubExpr_bindingDomain_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_bindingDomain_x21___closed__0_value;
static lean_once_cell_t l_Lean_SubExpr_bindingDomain_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_bindingDomain_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingDomain_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonFVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonFVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonFVarId___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonFVarId = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonMVarId = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonFVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonFVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonFVarId___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonFVarId = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonMVarId = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hyp"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hypType"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hypValue"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonGoalLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonGoalLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonGoalLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonGoalLocation = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvarId"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SubExpr"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "GoalsLocation"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 131, 175, 90, 105, 49, 153, 209)}};
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(156, 32, 46, 203, 174, 149, 194, 69)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 8, 121, 101, 233, 69, 204, 89)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "loc"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 214, 13, 195, 223, 166, 82, 163)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonGoalsLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_instDecidableEqPos_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = lean_nat_dec_eq(v_x_1_, v_x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instDecidableEqPos_decEq___boxed(lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l_Lean_SubExpr_instDecidableEqPos_decEq(v_x_4_, v_x_5_);
lean_dec(v_x_5_);
lean_dec(v_x_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_instDecidableEqPos(lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
uint8_t v___x_10_; 
v___x_10_ = lean_nat_dec_eq(v_x_8_, v_x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instDecidableEqPos___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_SubExpr_instDecidableEqPos(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_maxChildren(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(4u);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_typeCoord(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(3u);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_root(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1u);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_instInhabited(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1u);
return v___x_18_;
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_isRoot(lean_object* v_p_19_){
_start:
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(4u);
v___x_21_ = lean_nat_dec_lt(v_p_19_, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_isRoot___boxed(lean_object* v_p_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_Lean_SubExpr_Pos_isRoot(v_p_22_);
lean_dec(v_p_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_head_spec__0(lean_object* v_msg_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = lean_panic_fn_borrowed(v___x_26_, v_msg_25_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_head___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_31_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__2));
v___x_32_ = lean_unsigned_to_nat(19u);
v___x_33_ = lean_unsigned_to_nat(46u);
v___x_34_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__1));
v___x_35_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_36_ = l_mkPanicMessageWithDecl(v___x_35_, v___x_34_, v___x_33_, v___x_32_, v___x_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head(lean_object* v_p_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = l_Lean_SubExpr_Pos_isRoot(v_p_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(4u);
v___x_40_ = lean_nat_mod(v_p_37_, v___x_39_);
return v___x_40_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_obj_once(&l_Lean_SubExpr_Pos_head___closed__3, &l_Lean_SubExpr_Pos_head___closed__3_once, _init_l_Lean_SubExpr_Pos_head___closed__3);
v___x_42_ = l_panic___at___00Lean_SubExpr_Pos_head_spec__0(v___x_41_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head___boxed(lean_object* v_p_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_SubExpr_Pos_head(v_p_43_);
lean_dec(v_p_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(lean_object* v_msg_45_){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = lean_panic_fn_borrowed(v___x_46_, v_msg_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_tail___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_49_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__2));
v___x_50_ = lean_unsigned_to_nat(19u);
v___x_51_ = lean_unsigned_to_nat(50u);
v___x_52_ = ((lean_object*)(l_Lean_SubExpr_Pos_tail___closed__0));
v___x_53_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_54_ = l_mkPanicMessageWithDecl(v___x_53_, v___x_52_, v___x_51_, v___x_50_, v___x_49_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail(lean_object* v_p_55_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = l_Lean_SubExpr_Pos_isRoot(v_p_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = l_Lean_SubExpr_Pos_head(v_p_55_);
v___x_58_ = lean_nat_sub(v_p_55_, v___x_57_);
lean_dec(v___x_57_);
v___x_59_ = lean_unsigned_to_nat(2u);
v___x_60_ = lean_nat_shiftr(v___x_58_, v___x_59_);
lean_dec(v___x_58_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_SubExpr_Pos_tail___closed__1, &l_Lean_SubExpr_Pos_tail___closed__1_once, _init_l_Lean_SubExpr_Pos_tail___closed__1);
v___x_62_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_61_);
return v___x_62_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail___boxed(lean_object* v_p_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_SubExpr_Pos_tail(v_p_63_);
lean_dec(v_p_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push(lean_object* v_p_67_, lean_object* v_c_68_){
_start:
{
lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_69_ = lean_unsigned_to_nat(4u);
v___x_70_ = lean_nat_dec_le(v___x_69_, v_c_68_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_nat_mul(v_p_67_, v___x_69_);
v___x_72_ = lean_nat_add(v___x_71_, v_c_68_);
lean_dec(v_c_68_);
lean_dec(v___x_71_);
return v___x_72_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_73_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_74_ = ((lean_object*)(l_Lean_SubExpr_Pos_push___closed__0));
v___x_75_ = lean_unsigned_to_nat(54u);
v___x_76_ = lean_unsigned_to_nat(27u);
v___x_77_ = ((lean_object*)(l_Lean_SubExpr_Pos_push___closed__1));
v___x_78_ = l_Nat_reprFast(v_c_68_);
v___x_79_ = lean_string_append(v___x_77_, v___x_78_);
lean_dec_ref(v___x_78_);
v___x_80_ = l_mkPanicMessageWithDecl(v___x_73_, v___x_74_, v___x_75_, v___x_76_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push___boxed(lean_object* v_p_82_, lean_object* v_c_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_SubExpr_Pos_push(v_p_82_, v_c_83_);
lean_dec(v_p_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg(lean_object* v_f_85_, lean_object* v_init_86_, lean_object* v_p_87_){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = l_Lean_SubExpr_Pos_isRoot(v_p_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_89_ = l_Lean_SubExpr_Pos_tail(v_p_87_);
lean_inc(v_f_85_);
v___x_90_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_85_, v_init_86_, v___x_89_);
lean_dec(v___x_89_);
v___x_91_ = l_Lean_SubExpr_Pos_head(v_p_87_);
v___x_92_ = lean_apply_2(v_f_85_, v___x_90_, v___x_91_);
return v___x_92_;
}
else
{
lean_dec(v_f_85_);
lean_inc(v_init_86_);
return v_init_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg___boxed(lean_object* v_f_93_, lean_object* v_init_94_, lean_object* v_p_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_93_, v_init_94_, v_p_95_);
lean_dec(v_p_95_);
lean_dec(v_init_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl(lean_object* v_00_u03b1_97_, lean_object* v_f_98_, lean_object* v_init_99_, lean_object* v_p_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_98_, v_init_99_, v_p_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___boxed(lean_object* v_00_u03b1_102_, lean_object* v_f_103_, lean_object* v_init_104_, lean_object* v_p_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_SubExpr_Pos_foldl(v_00_u03b1_102_, v_f_103_, v_init_104_, v_p_105_);
lean_dec(v_p_105_);
lean_dec(v_init_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr___redArg(lean_object* v_f_107_, lean_object* v_p_108_, lean_object* v_init_109_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = l_Lean_SubExpr_Pos_isRoot(v_p_108_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Lean_SubExpr_Pos_tail(v_p_108_);
v___x_112_ = l_Lean_SubExpr_Pos_head(v_p_108_);
lean_dec(v_p_108_);
lean_inc(v_f_107_);
v___x_113_ = lean_apply_2(v_f_107_, v___x_112_, v_init_109_);
v_p_108_ = v___x_111_;
v_init_109_ = v___x_113_;
goto _start;
}
else
{
lean_dec(v_p_108_);
lean_dec(v_f_107_);
return v_init_109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr(lean_object* v_00_u03b1_115_, lean_object* v_f_116_, lean_object* v_p_117_, lean_object* v_init_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_SubExpr_Pos_foldr___redArg(v_f_116_, v_p_117_, v_init_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(lean_object* v_p_120_, lean_object* v_f_121_, lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = l_Lean_SubExpr_Pos_head(v_p_120_);
v___x_124_ = lean_apply_2(v_f_121_, v_x_122_, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed(lean_object* v_p_125_, lean_object* v_f_126_, lean_object* v_x_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(v_p_125_, v_f_126_, v_x_127_);
lean_dec(v_p_125_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg(lean_object* v_inst_129_, lean_object* v_f_130_, lean_object* v_init_131_, lean_object* v_p_132_){
_start:
{
lean_object* v_toApplicative_133_; lean_object* v_toBind_134_; lean_object* v_toPure_135_; uint8_t v___x_136_; 
v_toApplicative_133_ = lean_ctor_get(v_inst_129_, 0);
v_toBind_134_ = lean_ctor_get(v_inst_129_, 1);
lean_inc(v_toBind_134_);
v_toPure_135_ = lean_ctor_get(v_toApplicative_133_, 1);
v___x_136_ = l_Lean_SubExpr_Pos_isRoot(v_p_132_);
if (v___x_136_ == 0)
{
lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
lean_inc(v_f_130_);
lean_inc(v_p_132_);
v___f_137_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_137_, 0, v_p_132_);
lean_closure_set(v___f_137_, 1, v_f_130_);
v___x_138_ = l_Lean_SubExpr_Pos_tail(v_p_132_);
lean_dec(v_p_132_);
v___x_139_ = l_Lean_SubExpr_Pos_foldlM___redArg(v_inst_129_, v_f_130_, v_init_131_, v___x_138_);
v___x_140_ = lean_apply_4(v_toBind_134_, lean_box(0), lean_box(0), v___x_139_, v___f_137_);
return v___x_140_;
}
else
{
lean_object* v___x_141_; 
lean_inc(v_toPure_135_);
lean_dec(v_toBind_134_);
lean_dec(v_p_132_);
lean_dec(v_f_130_);
lean_dec_ref(v_inst_129_);
v___x_141_ = lean_apply_2(v_toPure_135_, lean_box(0), v_init_131_);
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM(lean_object* v_00_u03b1_142_, lean_object* v_inst_143_, lean_object* v_M_144_, lean_object* v_inst_145_, lean_object* v_f_146_, lean_object* v_init_147_, lean_object* v_p_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_SubExpr_Pos_foldlM___redArg(v_inst_145_, v_f_146_, v_init_147_, v_p_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___boxed(lean_object* v_00_u03b1_150_, lean_object* v_inst_151_, lean_object* v_M_152_, lean_object* v_inst_153_, lean_object* v_f_154_, lean_object* v_init_155_, lean_object* v_p_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lean_SubExpr_Pos_foldlM(v_00_u03b1_150_, v_inst_151_, v_M_152_, v_inst_153_, v_f_154_, v_init_155_, v_p_156_);
lean_dec(v_inst_151_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg___boxed(lean_object* v_inst_158_, lean_object* v_f_159_, lean_object* v_p_160_, lean_object* v_init_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_SubExpr_Pos_foldrM___redArg(v_inst_158_, v_f_159_, v_p_160_, v_init_161_);
lean_dec(v_p_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg(lean_object* v_inst_163_, lean_object* v_f_164_, lean_object* v_p_165_, lean_object* v_init_166_){
_start:
{
lean_object* v_toApplicative_167_; lean_object* v_toBind_168_; lean_object* v_toPure_169_; uint8_t v___x_170_; 
v_toApplicative_167_ = lean_ctor_get(v_inst_163_, 0);
v_toBind_168_ = lean_ctor_get(v_inst_163_, 1);
lean_inc(v_toBind_168_);
v_toPure_169_ = lean_ctor_get(v_toApplicative_167_, 1);
v___x_170_ = l_Lean_SubExpr_Pos_isRoot(v_p_165_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_171_ = l_Lean_SubExpr_Pos_head(v_p_165_);
lean_inc(v_f_164_);
v___x_172_ = lean_apply_2(v_f_164_, v___x_171_, v_init_166_);
v___x_173_ = l_Lean_SubExpr_Pos_tail(v_p_165_);
v___x_174_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_foldrM___redArg___boxed), 4, 3);
lean_closure_set(v___x_174_, 0, v_inst_163_);
lean_closure_set(v___x_174_, 1, v_f_164_);
lean_closure_set(v___x_174_, 2, v___x_173_);
v___x_175_ = lean_apply_4(v_toBind_168_, lean_box(0), lean_box(0), v___x_172_, v___x_174_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
lean_inc(v_toPure_169_);
lean_dec(v_toBind_168_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_176_ = lean_apply_2(v_toPure_169_, lean_box(0), v_init_166_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM(lean_object* v_00_u03b1_177_, lean_object* v_M_178_, lean_object* v_inst_179_, lean_object* v_f_180_, lean_object* v_p_181_, lean_object* v_init_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_SubExpr_Pos_foldrM___redArg(v_inst_179_, v_f_180_, v_p_181_, v_init_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___boxed(lean_object* v_00_u03b1_184_, lean_object* v_M_185_, lean_object* v_inst_186_, lean_object* v_f_187_, lean_object* v_p_188_, lean_object* v_init_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_SubExpr_Pos_foldrM(v_00_u03b1_184_, v_M_185_, v_inst_186_, v_f_187_, v_p_188_, v_init_189_);
lean_dec(v_p_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0(lean_object* v_x_191_, lean_object* v___y_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = lean_nat_add(v___y_192_, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0___boxed(lean_object* v_x_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_SubExpr_Pos_depth___lam__0(v_x_195_, v___y_196_);
lean_dec(v___y_196_);
lean_dec(v_x_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth(lean_object* v_p_199_){
_start:
{
lean_object* v___f_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___f_200_ = ((lean_object*)(l_Lean_SubExpr_Pos_depth___closed__0));
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = l_Lean_SubExpr_Pos_foldr___redArg(v___f_200_, v_p_199_, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___lam__0(lean_object* v_pred_203_, lean_object* v_n_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_apply_1(v_pred_203_, v_n_204_);
v___x_207_ = lean_unbox(v___x_206_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v_a_205_);
return v___x_209_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(lean_object* v_f_210_, lean_object* v_p_211_, lean_object* v_init_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = l_Lean_SubExpr_Pos_isRoot(v_p_211_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = l_Lean_SubExpr_Pos_head(v_p_211_);
lean_inc_ref(v_f_210_);
v___x_215_ = lean_apply_2(v_f_210_, v___x_214_, v_init_212_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_dec(v_p_211_);
lean_dec_ref(v_f_210_);
return v___x_215_;
}
else
{
lean_object* v_val_216_; lean_object* v___x_217_; 
v_val_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_val_216_);
lean_dec_ref_known(v___x_215_, 1);
v___x_217_ = l_Lean_SubExpr_Pos_tail(v_p_211_);
lean_dec(v_p_211_);
v_p_211_ = v___x_217_;
v_init_212_ = v_val_216_;
goto _start;
}
}
else
{
lean_object* v___x_219_; 
lean_dec(v_p_211_);
lean_dec_ref(v_f_210_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v_init_212_);
return v___x_219_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_all(lean_object* v_pred_220_, lean_object* v_p_221_){
_start:
{
lean_object* v___f_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___f_222_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_all___lam__0), 3, 1);
lean_closure_set(v___f_222_, 0, v_pred_220_);
v___x_223_ = lean_box(0);
v___x_224_ = l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(v___f_222_, v_p_221_, v___x_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
uint8_t v___x_225_; 
v___x_225_ = 0;
return v___x_225_;
}
else
{
uint8_t v___x_226_; 
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = 1;
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___boxed(lean_object* v_pred_227_, lean_object* v_p_228_){
_start:
{
uint8_t v_res_229_; lean_object* v_r_230_; 
v_res_229_ = l_Lean_SubExpr_Pos_all(v_pred_227_, v_p_228_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0(lean_object* v_00_u03b1_231_, lean_object* v_f_232_, lean_object* v_p_233_, lean_object* v_init_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(v_f_232_, v_p_233_, v_init_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append(lean_object* v_init_237_, lean_object* v_p_238_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l_Lean_SubExpr_Pos_append___closed__0));
v___x_240_ = l_Lean_SubExpr_Pos_foldl___redArg(v___x_239_, v_init_237_, v_p_238_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append___boxed(lean_object* v_init_241_, lean_object* v_p_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_SubExpr_Pos_append(v_init_241_, v_p_242_);
lean_dec(v_p_242_);
lean_dec(v_init_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(lean_object* v_as_244_, size_t v_i_245_, size_t v_stop_246_, lean_object* v_b_247_){
_start:
{
uint8_t v___x_248_; 
v___x_248_ = lean_usize_dec_eq(v_i_245_, v_stop_246_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; size_t v___x_251_; size_t v___x_252_; 
v___x_249_ = lean_array_uget_borrowed(v_as_244_, v_i_245_);
lean_inc(v___x_249_);
v___x_250_ = l_Lean_SubExpr_Pos_push(v_b_247_, v___x_249_);
lean_dec(v_b_247_);
v___x_251_ = ((size_t)1ULL);
v___x_252_ = lean_usize_add(v_i_245_, v___x_251_);
v_i_245_ = v___x_252_;
v_b_247_ = v___x_250_;
goto _start;
}
else
{
return v_b_247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0___boxed(lean_object* v_as_254_, lean_object* v_i_255_, lean_object* v_stop_256_, lean_object* v_b_257_){
_start:
{
size_t v_i_boxed_258_; size_t v_stop_boxed_259_; lean_object* v_res_260_; 
v_i_boxed_258_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_stop_boxed_259_ = lean_unbox_usize(v_stop_256_);
lean_dec(v_stop_256_);
v_res_260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_as_254_, v_i_boxed_258_, v_stop_boxed_259_, v_b_257_);
lean_dec_ref(v_as_254_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray(lean_object* v_ps_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_array_get_size(v_ps_261_);
v___x_265_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
return v___x_262_;
}
else
{
uint8_t v___x_266_; 
v___x_266_ = lean_nat_dec_le(v___x_264_, v___x_264_);
if (v___x_266_ == 0)
{
if (v___x_265_ == 0)
{
return v___x_262_;
}
else
{
size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; 
v___x_267_ = ((size_t)0ULL);
v___x_268_ = lean_usize_of_nat(v___x_264_);
v___x_269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_ps_261_, v___x_267_, v___x_268_, v___x_262_);
return v___x_269_;
}
}
else
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((size_t)0ULL);
v___x_271_ = lean_usize_of_nat(v___x_264_);
v___x_272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_ps_261_, v___x_270_, v___x_271_, v___x_262_);
return v___x_272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray___boxed(lean_object* v_ps_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_SubExpr_Pos_ofArray(v_ps_273_);
lean_dec_ref(v_ps_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray(lean_object* v_p_278_){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = ((lean_object*)(l_Lean_SubExpr_Pos_toArray___closed__0));
v___x_280_ = ((lean_object*)(l_Lean_SubExpr_Pos_toArray___closed__1));
v___x_281_ = l_Lean_SubExpr_Pos_foldl___redArg(v___x_279_, v___x_280_, v_p_278_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray___boxed(lean_object* v_p_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_SubExpr_Pos_toArray(v_p_282_);
lean_dec(v_p_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object* v_p_284_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = l_Lean_SubExpr_Pos_push(v_p_284_, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain___boxed(lean_object* v_p_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_p_287_);
lean_dec(v_p_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object* v_p_289_){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = l_Lean_SubExpr_Pos_push(v_p_289_, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody___boxed(lean_object* v_p_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_SubExpr_Pos_pushBindingBody(v_p_292_);
lean_dec(v_p_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType(lean_object* v_p_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = l_Lean_SubExpr_Pos_push(v_p_294_, v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType___boxed(lean_object* v_p_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_SubExpr_Pos_pushLetVarType(v_p_297_);
lean_dec(v_p_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue(lean_object* v_p_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(1u);
v___x_301_ = l_Lean_SubExpr_Pos_push(v_p_299_, v___x_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue___boxed(lean_object* v_p_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_SubExpr_Pos_pushLetValue(v_p_302_);
lean_dec(v_p_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody(lean_object* v_p_304_){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(2u);
v___x_306_ = l_Lean_SubExpr_Pos_push(v_p_304_, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody___boxed(lean_object* v_p_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_SubExpr_Pos_pushLetBody(v_p_307_);
lean_dec(v_p_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn(lean_object* v_p_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = l_Lean_SubExpr_Pos_push(v_p_309_, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn___boxed(lean_object* v_p_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_SubExpr_Pos_pushAppFn(v_p_312_);
lean_dec(v_p_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg(lean_object* v_p_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1u);
v___x_316_ = l_Lean_SubExpr_Pos_push(v_p_314_, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg___boxed(lean_object* v_p_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_SubExpr_Pos_pushAppArg(v_p_317_);
lean_dec(v_p_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object* v_p_319_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(0u);
v___x_321_ = l_Lean_SubExpr_Pos_push(v_p_319_, v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj___boxed(lean_object* v_p_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_SubExpr_Pos_pushProj(v_p_322_);
lean_dec(v_p_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType(lean_object* v_p_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(3u);
v___x_326_ = l_Lean_SubExpr_Pos_push(v_p_324_, v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType___boxed(lean_object* v_p_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_SubExpr_Pos_pushType(v_p_327_);
lean_dec(v_p_327_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn(lean_object* v_numArgs_329_, lean_object* v_p_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_unsigned_to_nat(4u);
v___x_332_ = lean_nat_pow(v___x_331_, v_numArgs_329_);
v___x_333_ = lean_nat_mul(v_p_330_, v___x_332_);
lean_dec(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn___boxed(lean_object* v_numArgs_334_, lean_object* v_p_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_SubExpr_Pos_pushNaryFn(v_numArgs_334_, v_p_335_);
lean_dec(v_p_335_);
lean_dec(v_numArgs_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object* v_numArgs_337_, lean_object* v_argIdx_338_, lean_object* v_p_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_340_ = lean_unsigned_to_nat(4u);
v___x_341_ = lean_nat_sub(v_numArgs_337_, v_argIdx_338_);
v___x_342_ = lean_nat_pow(v___x_340_, v___x_341_);
lean_dec(v___x_341_);
v___x_343_ = lean_nat_mul(v_p_339_, v___x_342_);
lean_dec(v___x_342_);
v___x_344_ = lean_unsigned_to_nat(1u);
v___x_345_ = lean_nat_add(v___x_343_, v___x_344_);
lean_dec(v___x_343_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg___boxed(lean_object* v_numArgs_346_, lean_object* v_argIdx_347_, lean_object* v_p_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_SubExpr_Pos_pushNaryArg(v_numArgs_346_, v_argIdx_347_, v_p_348_);
lean_dec(v_p_348_);
lean_dec(v_argIdx_347_);
lean_dec(v_numArgs_346_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
lean_object* v_zero_352_; uint8_t v_isZero_353_; 
v_zero_352_ = lean_unsigned_to_nat(0u);
v_isZero_353_ = lean_nat_dec_eq(v_x_350_, v_zero_352_);
if (v_isZero_353_ == 1)
{
lean_object* v___x_354_; 
lean_dec(v_x_350_);
v___x_354_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_x_351_);
lean_dec(v_x_351_);
return v___x_354_;
}
else
{
lean_object* v_one_355_; lean_object* v_n_356_; lean_object* v___x_357_; 
v_one_355_ = lean_unsigned_to_nat(1u);
v_n_356_ = lean_nat_sub(v_x_350_, v_one_355_);
lean_dec(v_x_350_);
v___x_357_ = l_Lean_SubExpr_Pos_pushBindingBody(v_x_351_);
lean_dec(v_x_351_);
v_x_350_ = v_n_356_;
v_x_351_ = v___x_357_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object* v_x_359_, lean_object* v_x_360_){
_start:
{
lean_object* v_zero_361_; uint8_t v_isZero_362_; 
v_zero_361_ = lean_unsigned_to_nat(0u);
v_isZero_362_ = lean_nat_dec_eq(v_x_359_, v_zero_361_);
if (v_isZero_362_ == 1)
{
lean_dec(v_x_359_);
return v_x_360_;
}
else
{
lean_object* v_one_363_; lean_object* v_n_364_; lean_object* v___x_365_; 
v_one_363_ = lean_unsigned_to_nat(1u);
v_n_364_ = lean_nat_sub(v_x_359_, v_one_363_);
lean_dec(v_x_359_);
v___x_365_ = l_Lean_SubExpr_Pos_pushBindingBody(v_x_360_);
lean_dec(v_x_360_);
v_x_359_ = v_n_364_;
v_x_360_ = v___x_365_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
if (lean_obj_tag(v_a_367_) == 0)
{
lean_object* v___x_369_; 
v___x_369_ = l_List_reverse___redArg(v_a_368_);
return v___x_369_;
}
else
{
lean_object* v_head_370_; lean_object* v_tail_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_380_; 
v_head_370_ = lean_ctor_get(v_a_367_, 0);
v_tail_371_ = lean_ctor_get(v_a_367_, 1);
v_isSharedCheck_380_ = !lean_is_exclusive(v_a_367_);
if (v_isSharedCheck_380_ == 0)
{
v___x_373_ = v_a_367_;
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_tail_371_);
lean_inc(v_head_370_);
lean_dec(v_a_367_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = l_Nat_reprFast(v_head_370_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_a_368_);
lean_ctor_set(v___x_373_, 0, v___x_375_);
v___x_377_ = v___x_373_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_a_368_);
v___x_377_ = v_reuseFailAlloc_379_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
v_a_367_ = v_tail_371_;
v_a_368_ = v___x_377_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString(lean_object* v_p_382_){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_383_ = ((lean_object*)(l_Lean_SubExpr_Pos_toString___closed__0));
v___x_384_ = l_Lean_SubExpr_Pos_toArray(v_p_382_);
v___x_385_ = lean_array_to_list(v___x_384_);
v___x_386_ = lean_box(0);
v___x_387_ = l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(v___x_385_, v___x_386_);
v___x_388_ = l_String_intercalate(v___x_383_, v___x_387_);
v___x_389_ = lean_string_append(v___x_383_, v___x_388_);
lean_dec_ref(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString___boxed(lean_object* v_p_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_SubExpr_Pos_toString(v_p_390_);
lean_dec(v_p_390_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(lean_object* v_x_405_){
_start:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0));
v___x_407_ = lean_string_dec_eq(v_x_405_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1));
v___x_409_ = lean_string_dec_eq(v_x_405_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2));
v___x_411_ = lean_string_dec_eq(v_x_405_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3));
v___x_413_ = lean_string_dec_eq(v_x_405_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4));
v___x_415_ = lean_string_append(v___x_414_, v_x_405_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; 
v___x_417_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5));
return v___x_417_;
}
}
else
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6));
return v___x_418_;
}
}
else
{
lean_object* v___x_419_; 
v___x_419_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7));
return v___x_419_;
}
}
else
{
lean_object* v___x_420_; 
v___x_420_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8));
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___boxed(lean_object* v_x_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(v_x_421_);
lean_dec_ref(v_x_421_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg(){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0));
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___boxed(lean_object* v___dummy_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
return v_res_428_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(lean_object* v_s_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___boxed(lean_object* v_s_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(v_s_432_);
lean_dec_ref(v_s_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(size_t v_sz_434_, size_t v_i_435_, lean_object* v_bs_436_){
_start:
{
uint8_t v___x_437_; 
v___x_437_ = lean_usize_dec_lt(v_i_435_, v_sz_434_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; 
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v_bs_436_);
return v___x_438_;
}
else
{
lean_object* v_v_439_; lean_object* v___x_440_; 
v_v_439_ = lean_array_uget_borrowed(v_bs_436_, v_i_435_);
v___x_440_ = l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(v_v_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec_ref(v_bs_436_);
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_450_; lean_object* v_bs_x27_451_; size_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
v_a_449_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_440_, 1);
v___x_450_ = lean_unsigned_to_nat(0u);
v_bs_x27_451_ = lean_array_uset(v_bs_436_, v_i_435_, v___x_450_);
v___x_452_ = ((size_t)1ULL);
v___x_453_ = lean_usize_add(v_i_435_, v___x_452_);
v___x_454_ = lean_array_uset(v_bs_x27_451_, v_i_435_, v_a_449_);
v_i_435_ = v___x_453_;
v_bs_436_ = v___x_454_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3___boxed(lean_object* v_sz_456_, lean_object* v_i_457_, lean_object* v_bs_458_){
_start:
{
size_t v_sz_boxed_459_; size_t v_i_boxed_460_; lean_object* v_res_461_; 
v_sz_boxed_459_ = lean_unbox_usize(v_sz_456_);
lean_dec(v_sz_456_);
v_i_boxed_460_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_res_461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(v_sz_boxed_459_, v_i_boxed_460_, v_bs_458_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
return v_x_463_;
}
else
{
lean_object* v_head_465_; lean_object* v_tail_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_head_465_ = lean_ctor_get(v_x_464_, 0);
v_tail_466_ = lean_ctor_get(v_x_464_, 1);
v___x_467_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0));
v___x_468_ = lean_string_append(v_x_463_, v___x_467_);
v___x_469_ = lean_string_append(v___x_468_, v_head_465_);
v_x_463_ = v___x_469_;
v_x_464_ = v_tail_466_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___boxed(lean_object* v_x_471_, lean_object* v_x_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(v_x_471_, v_x_472_);
lean_dec(v_x_472_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v___x_478_; 
v___x_478_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0));
return v___x_478_;
}
else
{
lean_object* v_tail_479_; 
v_tail_479_ = lean_ctor_get(v_x_477_, 1);
if (lean_obj_tag(v_tail_479_) == 0)
{
lean_object* v_head_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_head_480_ = lean_ctor_get(v_x_477_, 0);
v___x_481_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1));
v___x_482_ = lean_string_append(v___x_481_, v_head_480_);
v___x_483_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2));
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
return v___x_484_;
}
else
{
lean_object* v_head_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint32_t v___x_489_; lean_object* v___x_490_; 
v_head_485_ = lean_ctor_get(v_x_477_, 0);
v___x_486_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1));
v___x_487_ = lean_string_append(v___x_486_, v_head_485_);
v___x_488_ = l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(v___x_487_, v_tail_479_);
v___x_489_ = 93;
v___x_490_ = lean_string_push(v___x_488_, v___x_489_);
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___boxed(lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(v_x_491_);
lean_dec(v_x_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(lean_object* v_x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v_a_496_, lean_object* v_b_497_){
_start:
{
lean_object* v_it_499_; lean_object* v_startInclusive_500_; lean_object* v_endExclusive_501_; 
if (lean_obj_tag(v_a_496_) == 0)
{
lean_object* v_currPos_506_; lean_object* v_searcher_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_530_; 
v_currPos_506_ = lean_ctor_get(v_a_496_, 0);
v_searcher_507_ = lean_ctor_get(v_a_496_, 1);
v_isSharedCheck_530_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_530_ == 0)
{
v___x_509_ = v_a_496_;
v_isShared_510_ = v_isSharedCheck_530_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_searcher_507_);
lean_inc(v_currPos_506_);
lean_dec(v_a_496_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_530_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
uint8_t v_decide_511_; 
v_decide_511_ = lean_nat_dec_eq(v_searcher_507_, v___x_495_);
if (v_decide_511_ == 0)
{
uint32_t v___x_512_; uint32_t v___x_513_; uint8_t v___x_514_; 
v___x_512_ = 47;
v___x_513_ = lean_string_utf8_get_fast(v_x_493_, v_searcher_507_);
v___x_514_ = lean_uint32_dec_eq(v___x_513_, v___x_512_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_515_ = lean_string_utf8_next_fast(v_x_493_, v_searcher_507_);
lean_dec(v_searcher_507_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 1, v___x_515_);
v___x_517_ = v___x_509_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_currPos_506_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v___x_515_);
v___x_517_ = v_reuseFailAlloc_519_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
v_a_496_ = v___x_517_;
goto _start;
}
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_slice_523_; lean_object* v_nextIt_525_; 
v___x_520_ = lean_string_utf8_next_fast(v_x_493_, v_searcher_507_);
v___x_521_ = lean_nat_sub(v___x_520_, v_searcher_507_);
v___x_522_ = lean_nat_add(v_searcher_507_, v___x_521_);
lean_dec(v___x_521_);
v_slice_523_ = l_String_Slice_subslice_x21(v___x_494_, v_currPos_506_, v_searcher_507_);
lean_inc(v___x_522_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 1, v___x_522_);
lean_ctor_set(v___x_509_, 0, v___x_522_);
v_nextIt_525_ = v___x_509_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v___x_522_);
v_nextIt_525_ = v_reuseFailAlloc_528_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v_startInclusive_526_; lean_object* v_endExclusive_527_; 
v_startInclusive_526_ = lean_ctor_get(v_slice_523_, 0);
lean_inc(v_startInclusive_526_);
v_endExclusive_527_ = lean_ctor_get(v_slice_523_, 1);
lean_inc(v_endExclusive_527_);
lean_dec_ref(v_slice_523_);
v_it_499_ = v_nextIt_525_;
v_startInclusive_500_ = v_startInclusive_526_;
v_endExclusive_501_ = v_endExclusive_527_;
goto v___jp_498_;
}
}
}
else
{
lean_object* v___x_529_; 
lean_del_object(v___x_509_);
lean_dec(v_searcher_507_);
v___x_529_ = lean_box(1);
lean_inc(v___x_495_);
v_it_499_ = v___x_529_;
v_startInclusive_500_ = v_currPos_506_;
v_endExclusive_501_ = v___x_495_;
goto v___jp_498_;
}
}
}
else
{
lean_dec(v___x_495_);
lean_dec_ref(v_x_493_);
return v_b_497_;
}
v___jp_498_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
lean_inc_ref(v_x_493_);
v___x_502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_502_, 0, v_x_493_);
lean_ctor_set(v___x_502_, 1, v_startInclusive_500_);
lean_ctor_set(v___x_502_, 2, v_endExclusive_501_);
v___x_503_ = l_String_Slice_toString(v___x_502_);
lean_dec_ref_known(v___x_502_, 3);
v___x_504_ = lean_array_push(v_b_497_, v___x_503_);
v_a_496_ = v_it_499_;
v_b_497_ = v___x_504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg___boxed(lean_object* v_x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v_a_534_, lean_object* v_b_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_531_, v___x_532_, v___x_533_, v_a_534_, v_b_535_);
lean_dec_ref(v___x_532_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x3f(lean_object* v_x_541_){
_start:
{
lean_object* v_ss_543_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = ((lean_object*)(l_Lean_SubExpr_Pos_toString___closed__0));
v___x_549_ = lean_string_dec_eq(v_x_541_, v___x_548_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_string_utf8_byte_size(v_x_541_);
lean_inc_ref(v_x_541_);
v___x_552_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_552_, 0, v_x_541_);
lean_ctor_set(v___x_552_, 1, v___x_550_);
lean_ctor_set(v___x_552_, 2, v___x_551_);
v___x_553_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0);
v___x_554_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__1));
v___x_555_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_541_, v___x_552_, v___x_551_, v___x_553_, v___x_554_);
lean_dec_ref_known(v___x_552_, 3);
v___x_556_ = lean_array_to_list(v___x_555_);
if (lean_obj_tag(v___x_556_) == 1)
{
lean_object* v_head_557_; lean_object* v_tail_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_head_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_head_557_);
v_tail_558_ = lean_ctor_get(v___x_556_, 1);
lean_inc(v_tail_558_);
v___x_559_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__2));
v___x_560_ = lean_string_dec_eq(v_head_557_, v___x_559_);
lean_dec(v_head_557_);
if (v___x_560_ == 0)
{
lean_dec(v_tail_558_);
v_ss_543_ = v___x_556_;
goto v___jp_542_;
}
else
{
lean_object* v___x_561_; size_t v_sz_562_; size_t v___x_563_; lean_object* v___x_564_; 
lean_dec_ref_known(v___x_556_, 2);
v___x_561_ = lean_array_mk(v_tail_558_);
v_sz_562_ = lean_array_size(v___x_561_);
v___x_563_ = ((size_t)0ULL);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(v_sz_562_, v___x_563_, v___x_561_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_564_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_564_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_581_; 
v_a_573_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_581_ == 0)
{
v___x_575_ = v___x_564_;
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_564_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_577_ = l_Lean_SubExpr_Pos_ofArray(v_a_573_);
lean_dec(v_a_573_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_577_);
v___x_579_ = v___x_575_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
else
{
v_ss_543_ = v___x_556_;
goto v___jp_542_;
}
}
else
{
lean_object* v___x_582_; 
lean_dec_ref(v_x_541_);
v___x_582_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7));
return v___x_582_;
}
v___jp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_544_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__0));
v___x_545_ = l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(v_ss_543_);
lean_dec(v_ss_543_);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
lean_dec_ref(v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(lean_object* v_x_583_, lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v_inst_586_, lean_object* v_R_587_, lean_object* v_a_588_, lean_object* v_b_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_583_, v___x_584_, v___x_585_, v_a_588_, v_b_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___boxed(lean_object* v_x_591_, lean_object* v___x_592_, lean_object* v___x_593_, lean_object* v_inst_594_, lean_object* v_R_595_, lean_object* v_a_596_, lean_object* v_b_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(v_x_591_, v___x_592_, v___x_593_, v_inst_594_, v_R_595_, v_a_596_, v_b_597_);
lean_dec_ref(v___x_592_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x21(lean_object* v_s_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_SubExpr_Pos_fromString_x3f(v_s_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_604_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x21___closed__0));
v___x_605_ = lean_unsigned_to_nat(140u);
v___x_606_ = lean_unsigned_to_nat(16u);
v___x_607_ = l_mkPanicMessageWithDecl(v___x_603_, v___x_604_, v___x_605_, v___x_606_, v_a_602_);
lean_dec(v_a_602_);
v___x_608_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_607_);
return v___x_608_;
}
else
{
lean_object* v_a_609_; 
v_a_609_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_601_, 1);
return v_a_609_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_instOrd___lam__0(lean_object* v_p_610_, lean_object* v_q_611_){
_start:
{
uint8_t v___x_612_; 
v___x_612_ = lean_nat_dec_lt(v_p_610_, v_q_611_);
if (v___x_612_ == 0)
{
uint8_t v___x_613_; 
v___x_613_ = lean_nat_dec_eq(v_p_610_, v_q_611_);
if (v___x_613_ == 0)
{
uint8_t v___x_614_; 
v___x_614_ = 2;
return v___x_614_;
}
else
{
uint8_t v___x_615_; 
v___x_615_ = 1;
return v___x_615_;
}
}
else
{
uint8_t v___x_616_; 
v___x_616_ = 0;
return v___x_616_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instOrd___lam__0___boxed(lean_object* v_p_617_, lean_object* v_q_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = l_Lean_SubExpr_Pos_instOrd___lam__0(v_p_617_, v_q_618_);
lean_dec(v_q_618_);
lean_dec(v_p_617_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_instEmptyCollection(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_unsigned_to_nat(1u);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0(lean_object* v_p_629_, lean_object* v_x_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_631_ = ((lean_object*)(l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1));
v___x_632_ = l_Lean_SubExpr_Pos_toString(v_p_629_);
v___x_633_ = l_String_quote(v___x_632_);
v___x_634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_631_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___boxed(lean_object* v_p_636_, lean_object* v_x_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_SubExpr_Pos_instRepr___lam__0(v_p_636_, v_x_637_);
lean_dec(v_x_637_);
lean_dec(v_p_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instToJson___lam__0(lean_object* v_s_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_642_, 0, v_s_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instFromJson___lam__0(lean_object* v_j_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_Json_getStr_x3f(v_j_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_659_; 
v_a_658_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_649_, 1);
v___x_659_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_658_);
return v___x_659_;
}
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default___closed__2(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_box(0);
v___x_666_ = ((lean_object*)(l_Lean_instInhabitedSubExpr_default___closed__1));
v___x_667_ = l_Lean_Expr_const___override(v___x_666_, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default___closed__3(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = lean_obj_once(&l_Lean_instInhabitedSubExpr_default___closed__2, &l_Lean_instInhabitedSubExpr_default___closed__2_once, _init_l_Lean_instInhabitedSubExpr_default___closed__2);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_668_);
return v___x_670_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default(void){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lean_obj_once(&l_Lean_instInhabitedSubExpr_default___closed__3, &l_Lean_instInhabitedSubExpr_default___closed__3_once, _init_l_Lean_instInhabitedSubExpr_default___closed__3);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lean_instInhabitedSubExpr_default;
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_mkRoot(lean_object* v_e_673_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_unsigned_to_nat(1u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v_e_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_isRoot(lean_object* v_s_676_){
_start:
{
lean_object* v_pos_677_; uint8_t v___x_678_; 
v_pos_677_ = lean_ctor_get(v_s_676_, 1);
v___x_678_ = l_Lean_SubExpr_Pos_isRoot(v_pos_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_isRoot___boxed(lean_object* v_s_679_){
_start:
{
uint8_t v_res_680_; lean_object* v_r_681_; 
v_res_680_ = l_Lean_SubExpr_isRoot(v_s_679_);
lean_dec_ref(v_s_679_);
v_r_681_ = lean_box(v_res_680_);
return v_r_681_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(lean_object* v_msg_682_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = l_Lean_instInhabitedSubExpr_default;
v___x_684_ = lean_panic_fn_borrowed(v___x_683_, v_msg_682_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_SubExpr_bindingBody_x21___closed__2(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_687_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__1));
v___x_688_ = lean_unsigned_to_nat(9u);
v___x_689_ = lean_unsigned_to_nat(178u);
v___x_690_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__0));
v___x_691_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_692_ = l_mkPanicMessageWithDecl(v___x_691_, v___x_690_, v___x_689_, v___x_688_, v___x_687_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingBody_x21(lean_object* v_x_693_){
_start:
{
lean_object* v_expr_694_; lean_object* v_pos_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_709_; 
v_expr_694_ = lean_ctor_get(v_x_693_, 0);
v_pos_695_ = lean_ctor_get(v_x_693_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_x_693_);
if (v_isSharedCheck_709_ == 0)
{
v___x_697_ = v_x_693_;
v_isShared_698_ = v_isSharedCheck_709_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_pos_695_);
lean_inc(v_expr_694_);
lean_dec(v_x_693_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_709_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_b_700_; 
switch(lean_obj_tag(v_expr_694_))
{
case 7:
{
lean_object* v_body_705_; 
v_body_705_ = lean_ctor_get(v_expr_694_, 2);
lean_inc_ref(v_body_705_);
lean_dec_ref_known(v_expr_694_, 3);
v_b_700_ = v_body_705_;
goto v___jp_699_;
}
case 6:
{
lean_object* v_body_706_; 
v_body_706_ = lean_ctor_get(v_expr_694_, 2);
lean_inc_ref(v_body_706_);
lean_dec_ref_known(v_expr_694_, 3);
v_b_700_ = v_body_706_;
goto v___jp_699_;
}
default: 
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_del_object(v___x_697_);
lean_dec(v_pos_695_);
lean_dec_ref(v_expr_694_);
v___x_707_ = lean_obj_once(&l_Lean_SubExpr_bindingBody_x21___closed__2, &l_Lean_SubExpr_bindingBody_x21___closed__2_once, _init_l_Lean_SubExpr_bindingBody_x21___closed__2);
v___x_708_ = l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(v___x_707_);
return v___x_708_;
}
}
v___jp_699_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_695_);
lean_dec(v_pos_695_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 1, v___x_701_);
lean_ctor_set(v___x_697_, 0, v_b_700_);
v___x_703_ = v___x_697_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_b_700_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
static lean_object* _init_l_Lean_SubExpr_bindingDomain_x21___closed__1(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_711_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__1));
v___x_712_ = lean_unsigned_to_nat(9u);
v___x_713_ = lean_unsigned_to_nat(183u);
v___x_714_ = ((lean_object*)(l_Lean_SubExpr_bindingDomain_x21___closed__0));
v___x_715_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_716_ = l_mkPanicMessageWithDecl(v___x_715_, v___x_714_, v___x_713_, v___x_712_, v___x_711_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingDomain_x21(lean_object* v_x_717_){
_start:
{
lean_object* v_expr_718_; lean_object* v_pos_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_733_; 
v_expr_718_ = lean_ctor_get(v_x_717_, 0);
v_pos_719_ = lean_ctor_get(v_x_717_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_717_);
if (v_isSharedCheck_733_ == 0)
{
v___x_721_ = v_x_717_;
v_isShared_722_ = v_isSharedCheck_733_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_pos_719_);
lean_inc(v_expr_718_);
lean_dec(v_x_717_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_733_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_t_724_; 
switch(lean_obj_tag(v_expr_718_))
{
case 7:
{
lean_object* v_binderType_729_; 
v_binderType_729_ = lean_ctor_get(v_expr_718_, 1);
lean_inc_ref(v_binderType_729_);
lean_dec_ref_known(v_expr_718_, 3);
v_t_724_ = v_binderType_729_;
goto v___jp_723_;
}
case 6:
{
lean_object* v_binderType_730_; 
v_binderType_730_ = lean_ctor_get(v_expr_718_, 1);
lean_inc_ref(v_binderType_730_);
lean_dec_ref_known(v_expr_718_, 3);
v_t_724_ = v_binderType_730_;
goto v___jp_723_;
}
default: 
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_del_object(v___x_721_);
lean_dec(v_pos_719_);
lean_dec_ref(v_expr_718_);
v___x_731_ = lean_obj_once(&l_Lean_SubExpr_bindingDomain_x21___closed__1, &l_Lean_SubExpr_bindingDomain_x21___closed__1_once, _init_l_Lean_SubExpr_bindingDomain_x21___closed__1);
v___x_732_ = l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(v___x_731_);
return v___x_732_;
}
}
v___jp_723_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_725_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_719_);
lean_dec(v_pos_719_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 1, v___x_725_);
lean_ctor_set(v___x_721_, 0, v_t_724_);
v___x_727_ = v___x_721_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_t_724_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v___x_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonFVarId___lam__0(lean_object* v_f_734_){
_start:
{
uint8_t v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = 1;
v___x_736_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_f_734_, v___x_735_);
v___x_737_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonFVarId___lam__0(lean_object* v_j_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_Name_fromJson_x3f(v_j_741_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_742_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_742_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_742_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_742_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
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
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx(lean_object* v_x_762_){
_start:
{
switch(lean_obj_tag(v_x_762_))
{
case 0:
{
lean_object* v___x_763_; 
v___x_763_ = lean_unsigned_to_nat(0u);
return v___x_763_;
}
case 1:
{
lean_object* v___x_764_; 
v___x_764_ = lean_unsigned_to_nat(1u);
return v___x_764_;
}
case 2:
{
lean_object* v___x_765_; 
v___x_765_ = lean_unsigned_to_nat(2u);
return v___x_765_;
}
default: 
{
lean_object* v___x_766_; 
v___x_766_ = lean_unsigned_to_nat(3u);
return v___x_766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx___boxed(lean_object* v_x_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_SubExpr_GoalLocation_ctorIdx(v_x_767_);
lean_dec_ref(v_x_767_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___redArg(lean_object* v_t_769_, lean_object* v_k_770_){
_start:
{
switch(lean_obj_tag(v_t_769_))
{
case 1:
{
lean_object* v_a_771_; lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_771_ = lean_ctor_get(v_t_769_, 0);
lean_inc(v_a_771_);
v_a_772_ = lean_ctor_get(v_t_769_, 1);
lean_inc(v_a_772_);
lean_dec_ref_known(v_t_769_, 2);
v___x_773_ = lean_apply_2(v_k_770_, v_a_771_, v_a_772_);
return v___x_773_;
}
case 2:
{
lean_object* v_a_774_; lean_object* v_a_775_; lean_object* v___x_776_; 
v_a_774_ = lean_ctor_get(v_t_769_, 0);
lean_inc(v_a_774_);
v_a_775_ = lean_ctor_get(v_t_769_, 1);
lean_inc(v_a_775_);
lean_dec_ref_known(v_t_769_, 2);
v___x_776_ = lean_apply_2(v_k_770_, v_a_774_, v_a_775_);
return v___x_776_;
}
default: 
{
lean_object* v_a_777_; lean_object* v___x_778_; 
v_a_777_ = lean_ctor_get(v_t_769_, 0);
lean_inc(v_a_777_);
lean_dec_ref(v_t_769_);
v___x_778_ = lean_apply_1(v_k_770_, v_a_777_);
return v___x_778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim(lean_object* v_motive_779_, lean_object* v_ctorIdx_780_, lean_object* v_t_781_, lean_object* v_h_782_, lean_object* v_k_783_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_781_, v_k_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___boxed(lean_object* v_motive_785_, lean_object* v_ctorIdx_786_, lean_object* v_t_787_, lean_object* v_h_788_, lean_object* v_k_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_SubExpr_GoalLocation_ctorElim(v_motive_785_, v_ctorIdx_786_, v_t_787_, v_h_788_, v_k_789_);
lean_dec(v_ctorIdx_786_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim___redArg(lean_object* v_t_791_, lean_object* v_hyp_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_791_, v_hyp_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim(lean_object* v_motive_794_, lean_object* v_t_795_, lean_object* v_h_796_, lean_object* v_hyp_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_795_, v_hyp_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim___redArg(lean_object* v_t_799_, lean_object* v_hypType_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_799_, v_hypType_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim(lean_object* v_motive_802_, lean_object* v_t_803_, lean_object* v_h_804_, lean_object* v_hypType_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_803_, v_hypType_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim___redArg(lean_object* v_t_807_, lean_object* v_hypValue_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_807_, v_hypValue_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim(lean_object* v_motive_810_, lean_object* v_t_811_, lean_object* v_h_812_, lean_object* v_hypValue_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_811_, v_hypValue_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim___redArg(lean_object* v_t_815_, lean_object* v_target_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_815_, v_target_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim(lean_object* v_motive_818_, lean_object* v_t_819_, lean_object* v_h_820_, lean_object* v_target_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_819_, v_target_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(lean_object* v_json_833_){
_start:
{
lean_object* v___x_834_; 
lean_inc(v_json_833_);
v___x_834_ = l_Lean_Json_getTag_x3f(v_json_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v___x_835_; 
lean_dec(v_json_833_);
v___x_835_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1));
return v___x_835_;
}
else
{
lean_object* v_val_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_1036_; 
v_val_836_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_838_ = v___x_834_;
v_isShared_839_ = v_isSharedCheck_1036_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_val_836_);
lean_dec(v___x_834_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_1036_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_840_ = lean_box(0);
v___x_841_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2));
v___x_842_ = lean_string_dec_eq(v_val_836_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3));
v___x_844_ = lean_string_dec_eq(v_val_836_, v___x_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; uint8_t v___x_846_; 
lean_del_object(v___x_838_);
v___x_845_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4));
v___x_846_ = lean_string_dec_eq(v_val_836_, v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5));
v___x_848_ = lean_string_dec_eq(v_val_836_, v___x_847_);
lean_dec(v_val_836_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
lean_dec(v_json_833_);
v___x_849_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7));
return v___x_849_;
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = lean_unsigned_to_nat(2u);
v___x_851_ = lean_box(0);
v___x_852_ = l_Lean_Json_parseCtorFields(v_json_833_, v___x_847_, v___x_850_, v___x_851_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_853_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_852_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_852_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v_a_861_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_852_, 1);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_array_get_borrowed(v___x_840_, v_a_861_, v___x_862_);
lean_inc(v___x_863_);
v___x_864_ = l_Lean_Name_fromJson_x3f(v___x_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec(v_a_861_);
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_a_873_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_864_, 1);
v___x_874_ = lean_unsigned_to_nat(1u);
v___x_875_ = lean_array_get(v___x_840_, v_a_861_, v___x_874_);
lean_dec(v_a_861_);
v___x_876_ = l_Lean_Json_getStr_x3f(v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_873_);
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_876_, 1);
v___x_886_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_885_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_dec(v_a_873_);
v_a_887_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_886_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_886_);
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
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_903_; 
v_a_895_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_903_ == 0)
{
v___x_897_ = v___x_886_;
v_isShared_898_ = v_isSharedCheck_903_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_886_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_903_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_899_, 0, v_a_873_);
lean_ctor_set(v___x_899_, 1, v_a_895_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_899_);
v___x_901_ = v___x_897_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
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
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec(v_val_836_);
v___x_904_ = lean_unsigned_to_nat(2u);
v___x_905_ = lean_box(0);
v___x_906_ = l_Lean_Json_parseCtorFields(v_json_833_, v___x_845_, v___x_904_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
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
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v_a_915_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_906_, 1);
v___x_916_ = lean_unsigned_to_nat(0u);
v___x_917_ = lean_array_get_borrowed(v___x_840_, v_a_915_, v___x_916_);
lean_inc(v___x_917_);
v___x_918_ = l_Lean_Name_fromJson_x3f(v___x_917_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v_a_915_);
v_a_919_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_918_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_918_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_a_927_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_918_, 1);
v___x_928_ = lean_unsigned_to_nat(1u);
v___x_929_ = lean_array_get(v___x_840_, v_a_915_, v___x_928_);
lean_dec(v_a_915_);
v___x_930_ = l_Lean_Json_getStr_x3f(v___x_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_a_927_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
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
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_939_; lean_object* v___x_940_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_930_, 1);
v___x_940_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_939_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_a_927_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
v_a_949_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v___x_940_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_940_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_953_, 0, v_a_927_);
lean_ctor_set(v___x_953_, 1, v_a_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
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
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v_val_836_);
v___x_958_ = lean_unsigned_to_nat(1u);
v___x_959_ = lean_box(0);
v___x_960_ = l_Lean_Json_parseCtorFields(v_json_833_, v___x_843_, v___x_958_, v___x_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_del_object(v___x_838_);
v_a_961_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_960_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_960_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_a_969_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_960_, 1);
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_array_get(v___x_840_, v_a_969_, v___x_970_);
lean_dec(v_a_969_);
v___x_972_ = l_Lean_Name_fromJson_x3f(v___x_971_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_del_object(v___x_838_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_991_; 
v_a_981_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_991_ == 0)
{
v___x_983_ = v___x_972_;
v_isShared_984_ = v_isSharedCheck_991_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_972_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_991_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 0);
lean_ctor_set(v___x_838_, 0, v_a_981_);
v___x_986_ = v___x_838_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_990_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_988_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_986_);
v___x_988_ = v___x_983_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec(v_val_836_);
v___x_992_ = lean_unsigned_to_nat(1u);
v___x_993_ = lean_box(0);
v___x_994_ = l_Lean_Json_parseCtorFields(v_json_833_, v___x_841_, v___x_992_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_del_object(v___x_838_);
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v_a_1003_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_994_, 1);
v___x_1004_ = lean_unsigned_to_nat(0u);
v___x_1005_ = lean_array_get(v___x_840_, v_a_1003_, v___x_1004_);
lean_dec(v_a_1003_);
v___x_1006_ = l_Lean_Json_getStr_x3f(v___x_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_del_object(v___x_838_);
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1016_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1015_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1016_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_del_object(v___x_838_);
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1016_);
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
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1035_; 
v_a_1025_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1027_ = v___x_1016_;
v_isShared_1028_ = v_isSharedCheck_1035_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1016_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1035_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 3);
lean_ctor_set(v___x_838_, 0, v_a_1025_);
v___x_1030_ = v___x_838_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1030_);
v___x_1032_ = v___x_1027_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
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
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalLocation_toJson(lean_object* v_x_1039_){
_start:
{
switch(lean_obj_tag(v_x_1039_))
{
case 0:
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1054_; 
v_a_1040_ = lean_ctor_get(v_x_1039_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1042_ = v_x_1039_;
v_isShared_1043_ = v_isSharedCheck_1054_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v_x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1054_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1044_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3));
v___x_1045_ = 1;
v___x_1046_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1040_, v___x_1045_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set_tag(v___x_1042_, 3);
lean_ctor_set(v___x_1042_, 0, v___x_1046_);
v___x_1048_ = v___x_1042_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1044_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_box(0);
v___x_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_Json_mkObj(v___x_1051_);
lean_dec_ref_known(v___x_1051_, 2);
return v___x_1052_;
}
}
}
case 1:
{
lean_object* v_a_1055_; lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1077_; 
v_a_1055_ = lean_ctor_get(v_x_1039_, 0);
v_a_1056_ = lean_ctor_get(v_x_1039_, 1);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1058_ = v_x_1039_;
v_isShared_1059_ = v_isSharedCheck_1077_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_inc(v_a_1055_);
lean_dec(v_x_1039_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1077_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; uint8_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1060_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4));
v___x_1061_ = 1;
v___x_1062_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1055_, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
v___x_1064_ = l_Lean_SubExpr_Pos_toString(v_a_1056_);
lean_dec(v_a_1056_);
v___x_1065_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
v___x_1066_ = lean_unsigned_to_nat(2u);
v___x_1067_ = lean_mk_empty_array_with_capacity(v___x_1066_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_1063_);
v___x_1069_ = lean_array_push(v___x_1068_, v___x_1065_);
v___x_1070_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set_tag(v___x_1058_, 0);
lean_ctor_set(v___x_1058_, 1, v___x_1070_);
lean_ctor_set(v___x_1058_, 0, v___x_1060_);
v___x_1072_ = v___x_1058_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = lean_box(0);
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = l_Lean_Json_mkObj(v___x_1074_);
lean_dec_ref_known(v___x_1074_, 2);
return v___x_1075_;
}
}
}
case 2:
{
lean_object* v_a_1078_; lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1100_; 
v_a_1078_ = lean_ctor_get(v_x_1039_, 0);
v_a_1079_ = lean_ctor_get(v_x_1039_, 1);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1081_ = v_x_1039_;
v_isShared_1082_ = v_isSharedCheck_1100_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_inc(v_a_1078_);
lean_dec(v_x_1039_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1100_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1083_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5));
v___x_1084_ = 1;
v___x_1085_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1078_, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
v___x_1087_ = l_Lean_SubExpr_Pos_toString(v_a_1079_);
lean_dec(v_a_1079_);
v___x_1088_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
v___x_1089_ = lean_unsigned_to_nat(2u);
v___x_1090_ = lean_mk_empty_array_with_capacity(v___x_1089_);
v___x_1091_ = lean_array_push(v___x_1090_, v___x_1086_);
v___x_1092_ = lean_array_push(v___x_1091_, v___x_1088_);
v___x_1093_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set_tag(v___x_1081_, 0);
lean_ctor_set(v___x_1081_, 1, v___x_1093_);
lean_ctor_set(v___x_1081_, 0, v___x_1083_);
v___x_1095_ = v___x_1081_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = l_Lean_Json_mkObj(v___x_1097_);
lean_dec_ref_known(v___x_1097_, 2);
return v___x_1098_;
}
}
}
default: 
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1114_; 
v_a_1101_ = lean_ctor_get(v_x_1039_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1103_ = v_x_1039_;
v_isShared_1104_ = v_isSharedCheck_1114_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v_x_1039_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1114_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1105_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2));
v___x_1106_ = l_Lean_SubExpr_Pos_toString(v_a_1101_);
lean_dec(v_a_1101_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1106_);
v___x_1108_ = v___x_1103_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1105_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_box(0);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = l_Lean_Json_mkObj(v___x_1111_);
lean_dec_ref_known(v___x_1111_, 2);
return v___x_1112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(lean_object* v_j_1117_, lean_object* v_k_1118_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = l_Lean_Json_getObjValD(v_j_1117_, v_k_1118_);
v___x_1120_ = l_Lean_Name_fromJson_x3f(v___x_1119_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v_a_1129_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1120_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1120_);
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
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0___boxed(lean_object* v_j_1137_, lean_object* v_k_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(v_j_1137_, v_k_1138_);
lean_dec_ref(v_k_1138_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(lean_object* v_j_1140_, lean_object* v_k_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = l_Lean_Json_getObjValD(v_j_1140_, v_k_1141_);
v___x_1143_ = l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(v___x_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1___boxed(lean_object* v_j_1144_, lean_object* v_k_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(v_j_1144_, v_k_1145_);
lean_dec_ref(v_k_1145_);
return v_res_1146_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1155_ = 1;
v___x_1156_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4));
v___x_1157_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1156_, v___x_1155_);
return v___x_1157_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6));
v___x_1160_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5);
v___x_1161_ = lean_string_append(v___x_1160_, v___x_1159_);
return v___x_1161_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1164_ = 1;
v___x_1165_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8));
v___x_1166_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1165_, v___x_1164_);
return v___x_1166_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9);
v___x_1168_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7);
v___x_1169_ = lean_string_append(v___x_1168_, v___x_1167_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11));
v___x_1172_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10);
v___x_1173_ = lean_string_append(v___x_1172_, v___x_1171_);
return v___x_1173_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15(void){
_start:
{
uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = 1;
v___x_1178_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14));
v___x_1179_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1178_, v___x_1177_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15);
v___x_1181_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7);
v___x_1182_ = lean_string_append(v___x_1181_, v___x_1180_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1183_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11));
v___x_1184_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16);
v___x_1185_ = lean_string_append(v___x_1184_, v___x_1183_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson(lean_object* v_json_1186_){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0));
lean_inc(v_json_1186_);
v___x_1188_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(v_json_1186_, v___x_1187_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1198_; 
lean_dec(v_json_1186_);
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1198_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1198_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1193_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12);
v___x_1194_ = lean_string_append(v___x_1193_, v_a_1189_);
lean_dec(v_a_1189_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1194_);
v___x_1196_ = v___x_1191_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
else
{
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec(v_json_1186_);
v_a_1199_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1188_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1188_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
lean_ctor_set_tag(v___x_1201_, 0);
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_a_1207_ = lean_ctor_get(v___x_1188_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1188_, 1);
v___x_1208_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13));
v___x_1209_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(v_json_1186_, v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_a_1207_);
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1219_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1219_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1214_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17);
v___x_1215_ = lean_string_append(v___x_1214_, v_a_1210_);
lean_dec(v_a_1210_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1215_);
v___x_1217_ = v___x_1212_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
else
{
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1207_);
v_a_1220_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1209_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1209_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
lean_ctor_set_tag(v___x_1222_, 0);
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1236_; 
v_a_1228_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1230_ = v___x_1209_;
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1209_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v_a_1207_);
lean_ctor_set(v___x_1232_, 1, v_a_1228_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v___x_1232_);
v___x_1234_ = v___x_1230_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(lean_object* v_a_1239_, lean_object* v_a_1240_){
_start:
{
if (lean_obj_tag(v_a_1239_) == 0)
{
lean_object* v___x_1241_; 
v___x_1241_ = lean_array_to_list(v_a_1240_);
return v___x_1241_;
}
else
{
lean_object* v_head_1242_; lean_object* v_tail_1243_; lean_object* v___x_1244_; 
v_head_1242_ = lean_ctor_get(v_a_1239_, 0);
lean_inc(v_head_1242_);
v_tail_1243_ = lean_ctor_get(v_a_1239_, 1);
lean_inc(v_tail_1243_);
lean_dec_ref_known(v_a_1239_, 2);
v___x_1244_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1240_, v_head_1242_);
v_a_1239_ = v_tail_1243_;
v_a_1240_ = v___x_1244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson(lean_object* v_x_1248_){
_start:
{
lean_object* v_mvarId_1249_; lean_object* v_loc_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1272_; 
v_mvarId_1249_ = lean_ctor_get(v_x_1248_, 0);
v_loc_1250_ = lean_ctor_get(v_x_1248_, 1);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1248_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1252_ = v_x_1248_;
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_loc_1250_);
lean_inc(v_mvarId_1249_);
lean_dec(v_x_1248_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; uint8_t v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1254_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0));
v___x_1255_ = 1;
v___x_1256_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mvarId_1249_, v___x_1255_);
v___x_1257_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 1, v___x_1257_);
lean_ctor_set(v___x_1252_, 0, v___x_1254_);
v___x_1259_ = v___x_1252_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1260_ = lean_box(0);
v___x_1261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13));
v___x_1263_ = l_Lean_SubExpr_instToJsonGoalLocation_toJson(v_loc_1250_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set(v___x_1265_, 1, v___x_1260_);
v___x_1266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___x_1260_);
v___x_1267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1261_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = ((lean_object*)(l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0));
v___x_1269_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(v___x_1267_, v___x_1268_);
v___x_1270_ = l_Lean_Json_mkObj(v___x_1269_);
lean_dec(v___x_1269_);
return v___x_1270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0(lean_object* v_p_1275_, lean_object* v_visit_1276_, lean_object* v_arg_1277_, lean_object* v_x_1278_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = l_Lean_SubExpr_Pos_pushAppArg(v_p_1275_);
v___x_1280_ = lean_apply_2(v_visit_1276_, v___x_1279_, v_arg_1277_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed(lean_object* v_p_1281_, lean_object* v_visit_1282_, lean_object* v_arg_1283_, lean_object* v_x_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_Expr_traverseAppWithPos___redArg___lam__0(v_p_1281_, v_visit_1282_, v_arg_1283_, v_x_1284_);
lean_dec(v_p_1281_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg(lean_object* v_inst_1286_, lean_object* v_visit_1287_, lean_object* v_p_1288_, lean_object* v_e_1289_){
_start:
{
if (lean_obj_tag(v_e_1289_) == 5)
{
lean_object* v_toApplicative_1290_; lean_object* v_toFunctor_1291_; lean_object* v_toSeq_1292_; lean_object* v_fn_1293_; lean_object* v_arg_1294_; lean_object* v_map_1295_; lean_object* v___f_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v_toApplicative_1290_ = lean_ctor_get(v_inst_1286_, 0);
v_toFunctor_1291_ = lean_ctor_get(v_toApplicative_1290_, 0);
v_toSeq_1292_ = lean_ctor_get(v_toApplicative_1290_, 2);
lean_inc(v_toSeq_1292_);
v_fn_1293_ = lean_ctor_get(v_e_1289_, 0);
lean_inc_ref(v_fn_1293_);
v_arg_1294_ = lean_ctor_get(v_e_1289_, 1);
v_map_1295_ = lean_ctor_get(v_toFunctor_1291_, 0);
lean_inc(v_map_1295_);
lean_inc_ref(v_arg_1294_);
lean_inc(v_visit_1287_);
lean_inc(v_p_1288_);
v___f_1296_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1296_, 0, v_p_1288_);
lean_closure_set(v___f_1296_, 1, v_visit_1287_);
lean_closure_set(v___f_1296_, 2, v_arg_1294_);
v___x_1297_ = lean_alloc_closure((void*)(l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed), 3, 1);
lean_closure_set(v___x_1297_, 0, v_e_1289_);
v___x_1298_ = l_Lean_SubExpr_Pos_pushAppFn(v_p_1288_);
lean_dec(v_p_1288_);
v___x_1299_ = l_Lean_Expr_traverseAppWithPos___redArg(v_inst_1286_, v_visit_1287_, v___x_1298_, v_fn_1293_);
v___x_1300_ = lean_apply_4(v_map_1295_, lean_box(0), lean_box(0), v___x_1297_, v___x_1299_);
v___x_1301_ = lean_apply_4(v_toSeq_1292_, lean_box(0), lean_box(0), v___x_1300_, v___f_1296_);
return v___x_1301_;
}
else
{
lean_object* v___x_1302_; 
lean_dec_ref(v_inst_1286_);
v___x_1302_ = lean_apply_2(v_visit_1287_, v_p_1288_, v_e_1289_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos(lean_object* v_M_1303_, lean_object* v_inst_1304_, lean_object* v_visit_1305_, lean_object* v_p_1306_, lean_object* v_e_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_Expr_traverseAppWithPos___redArg(v_inst_1304_, v_visit_1305_, v_p_1306_, v_e_1307_);
return v___x_1308_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_SubExpr_Pos_maxChildren = _init_l_Lean_SubExpr_Pos_maxChildren();
lean_mark_persistent(l_Lean_SubExpr_Pos_maxChildren);
l_Lean_SubExpr_Pos_typeCoord = _init_l_Lean_SubExpr_Pos_typeCoord();
lean_mark_persistent(l_Lean_SubExpr_Pos_typeCoord);
l_Lean_SubExpr_Pos_root = _init_l_Lean_SubExpr_Pos_root();
lean_mark_persistent(l_Lean_SubExpr_Pos_root);
l_Lean_SubExpr_Pos_instInhabited = _init_l_Lean_SubExpr_Pos_instInhabited();
lean_mark_persistent(l_Lean_SubExpr_Pos_instInhabited);
l_Lean_SubExpr_Pos_instEmptyCollection = _init_l_Lean_SubExpr_Pos_instEmptyCollection();
lean_mark_persistent(l_Lean_SubExpr_Pos_instEmptyCollection);
l_Lean_instInhabitedSubExpr_default = _init_l_Lean_instInhabitedSubExpr_default();
lean_mark_persistent(l_Lean_instInhabitedSubExpr_default);
l_Lean_instInhabitedSubExpr = _init_l_Lean_instInhabitedSubExpr();
lean_mark_persistent(l_Lean_instInhabitedSubExpr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_SubExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_SubExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_SubExpr(builtin);
}
#ifdef __cplusplus
}
#endif
