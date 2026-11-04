// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareCommon
// Imports: public import Lean.Meta.Sym.ExprPtr public import Lean.Environment import Init.Grind.Util import Lean.ReducibilityAttrs import Lean.ProjFns
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "EqMatch"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 191, 100, 49, 216, 68, 143, 22)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchCond"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value),LEAN_SCALAR_PTR_LITERAL(109, 233, 187, 249, 156, 65, 204, 232)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "nestedUDecidable"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__8_value),LEAN_SCALAR_PTR_LITERAL(229, 50, 1, 76, 1, 27, 242, 138)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__9_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "__dummy__"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 141, 137, 132, 208, 124, 31, 129)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object* v_e_1_){
_start:
{
switch(lean_obj_tag(v_e_1_))
{
case 5:
{
size_t v___x_7_; size_t v___x_8_; size_t v___x_9_; uint64_t v___x_10_; 
v___x_7_ = lean_ptr_addr(v_e_1_);
v___x_8_ = ((size_t)3ULL);
v___x_9_ = lean_usize_shift_right(v___x_7_, v___x_8_);
v___x_10_ = lean_usize_to_uint64(v___x_9_);
return v___x_10_;
}
case 6:
{
goto v___jp_2_;
}
case 7:
{
goto v___jp_2_;
}
case 8:
{
size_t v___x_11_; size_t v___x_12_; size_t v___x_13_; uint64_t v___x_14_; 
v___x_11_ = lean_ptr_addr(v_e_1_);
v___x_12_ = ((size_t)3ULL);
v___x_13_ = lean_usize_shift_right(v___x_11_, v___x_12_);
v___x_14_ = lean_usize_to_uint64(v___x_13_);
return v___x_14_;
}
case 10:
{
size_t v___x_15_; size_t v___x_16_; size_t v___x_17_; uint64_t v___x_18_; 
v___x_15_ = lean_ptr_addr(v_e_1_);
v___x_16_ = ((size_t)3ULL);
v___x_17_ = lean_usize_shift_right(v___x_15_, v___x_16_);
v___x_18_ = lean_usize_to_uint64(v___x_17_);
return v___x_18_;
}
case 11:
{
size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; uint64_t v___x_22_; 
v___x_19_ = lean_ptr_addr(v_e_1_);
v___x_20_ = ((size_t)3ULL);
v___x_21_ = lean_usize_shift_right(v___x_19_, v___x_20_);
v___x_22_ = lean_usize_to_uint64(v___x_21_);
return v___x_22_;
}
default: 
{
uint64_t v___x_23_; 
v___x_23_ = l_Lean_Expr_hash(v_e_1_);
return v___x_23_;
}
}
v___jp_2_:
{
size_t v___x_3_; size_t v___x_4_; size_t v___x_5_; uint64_t v___x_6_; 
v___x_3_ = lean_ptr_addr(v_e_1_);
v___x_4_ = ((size_t)3ULL);
v___x_5_ = lean_usize_shift_right(v___x_3_, v___x_4_);
v___x_6_ = lean_usize_to_uint64(v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object* v_e_24_){
_start:
{
uint64_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_e_24_);
lean_dec_ref(v_e_24_);
v_r_26_ = lean_box_uint64(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object* v_e_27_){
_start:
{
lean_object* v_d_29_; lean_object* v_b_30_; 
switch(lean_obj_tag(v_e_27_))
{
case 5:
{
lean_object* v_fn_34_; lean_object* v_arg_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; 
v_fn_34_ = lean_ctor_get(v_e_27_, 0);
v_arg_35_ = lean_ctor_get(v_e_27_, 1);
v___x_36_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_fn_34_);
v___x_37_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_arg_35_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
return v___x_38_;
}
case 6:
{
lean_object* v_binderType_39_; lean_object* v_body_40_; 
v_binderType_39_ = lean_ctor_get(v_e_27_, 1);
v_body_40_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_39_;
v_b_30_ = v_body_40_;
goto v___jp_28_;
}
case 7:
{
lean_object* v_binderType_41_; lean_object* v_body_42_; 
v_binderType_41_ = lean_ctor_get(v_e_27_, 1);
v_body_42_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_41_;
v_b_30_ = v_body_42_;
goto v___jp_28_;
}
case 8:
{
lean_object* v_value_43_; lean_object* v_body_44_; uint8_t v_nondep_45_; uint64_t v___y_47_; 
v_value_43_ = lean_ctor_get(v_e_27_, 2);
v_body_44_ = lean_ctor_get(v_e_27_, 3);
v_nondep_45_ = lean_ctor_get_uint8(v_e_27_, sizeof(void*)*4 + 8);
if (v_nondep_45_ == 0)
{
uint64_t v___x_52_; 
v___x_52_ = 19ULL;
v___y_47_ = v___x_52_;
goto v___jp_46_;
}
else
{
uint64_t v___x_53_; 
v___x_53_ = 17ULL;
v___y_47_ = v___x_53_;
goto v___jp_46_;
}
v___jp_46_:
{
uint64_t v___x_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; 
v___x_48_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_value_43_);
v___x_49_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_body_44_);
v___x_50_ = lean_uint64_mix_hash(v___x_48_, v___x_49_);
v___x_51_ = lean_uint64_mix_hash(v___y_47_, v___x_50_);
return v___x_51_;
}
}
case 10:
{
lean_object* v_expr_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; 
v_expr_54_ = lean_ctor_get(v_e_27_, 1);
v___x_55_ = 13ULL;
v___x_56_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_expr_54_);
v___x_57_ = lean_uint64_mix_hash(v___x_55_, v___x_56_);
return v___x_57_;
}
case 11:
{
lean_object* v_typeName_58_; lean_object* v_idx_59_; lean_object* v_struct_60_; uint64_t v___y_62_; 
v_typeName_58_ = lean_ctor_get(v_e_27_, 0);
v_idx_59_ = lean_ctor_get(v_e_27_, 1);
v_struct_60_ = lean_ctor_get(v_e_27_, 2);
if (lean_obj_tag(v_typeName_58_) == 0)
{
uint64_t v___x_67_; 
v___x_67_ = 1723ULL;
v___y_62_ = v___x_67_;
goto v___jp_61_;
}
else
{
uint64_t v_hash_68_; 
v_hash_68_ = lean_ctor_get_uint64(v_typeName_58_, sizeof(void*)*2);
v___y_62_ = v_hash_68_;
goto v___jp_61_;
}
v___jp_61_:
{
uint64_t v___x_63_; uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; 
v___x_63_ = lean_uint64_of_nat(v_idx_59_);
v___x_64_ = lean_uint64_mix_hash(v___y_62_, v___x_63_);
v___x_65_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_struct_60_);
v___x_66_ = lean_uint64_mix_hash(v___x_64_, v___x_65_);
return v___x_66_;
}
}
default: 
{
uint64_t v___x_69_; 
v___x_69_ = l_Lean_Expr_hash(v_e_27_);
return v___x_69_;
}
}
v___jp_28_:
{
uint64_t v___x_31_; uint64_t v___x_32_; uint64_t v___x_33_; 
v___x_31_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_d_29_);
v___x_32_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_b_30_);
v___x_33_ = lean_uint64_mix_hash(v___x_31_, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object* v_e_70_){
_start:
{
uint64_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_70_);
lean_dec_ref(v_e_70_);
v_r_72_ = lean_box_uint64(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object* v_e_u2081_73_, lean_object* v_e_u2082_74_){
_start:
{
switch(lean_obj_tag(v_e_u2081_73_))
{
case 5:
{
if (lean_obj_tag(v_e_u2082_74_) == 5)
{
lean_object* v_fn_75_; lean_object* v_arg_76_; lean_object* v_fn_77_; lean_object* v_arg_78_; size_t v___x_79_; size_t v___x_80_; uint8_t v___x_81_; 
v_fn_75_ = lean_ctor_get(v_e_u2081_73_, 0);
v_arg_76_ = lean_ctor_get(v_e_u2081_73_, 1);
v_fn_77_ = lean_ctor_get(v_e_u2082_74_, 0);
v_arg_78_ = lean_ctor_get(v_e_u2082_74_, 1);
v___x_79_ = lean_ptr_addr(v_fn_75_);
v___x_80_ = lean_ptr_addr(v_fn_77_);
v___x_81_ = lean_usize_dec_eq(v___x_79_, v___x_80_);
if (v___x_81_ == 0)
{
return v___x_81_;
}
else
{
size_t v___x_82_; size_t v___x_83_; uint8_t v___x_84_; 
v___x_82_ = lean_ptr_addr(v_arg_76_);
v___x_83_ = lean_ptr_addr(v_arg_78_);
v___x_84_ = lean_usize_dec_eq(v___x_82_, v___x_83_);
return v___x_84_;
}
}
else
{
uint8_t v___x_85_; 
v___x_85_ = 0;
return v___x_85_;
}
}
case 6:
{
if (lean_obj_tag(v_e_u2082_74_) == 6)
{
lean_object* v_binderType_86_; lean_object* v_body_87_; lean_object* v_binderType_88_; lean_object* v_body_89_; size_t v___x_90_; size_t v___x_91_; uint8_t v___x_92_; 
v_binderType_86_ = lean_ctor_get(v_e_u2081_73_, 1);
v_body_87_ = lean_ctor_get(v_e_u2081_73_, 2);
v_binderType_88_ = lean_ctor_get(v_e_u2082_74_, 1);
v_body_89_ = lean_ctor_get(v_e_u2082_74_, 2);
v___x_90_ = lean_ptr_addr(v_binderType_86_);
v___x_91_ = lean_ptr_addr(v_binderType_88_);
v___x_92_ = lean_usize_dec_eq(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
return v___x_92_;
}
else
{
size_t v___x_93_; size_t v___x_94_; uint8_t v___x_95_; 
v___x_93_ = lean_ptr_addr(v_body_87_);
v___x_94_ = lean_ptr_addr(v_body_89_);
v___x_95_ = lean_usize_dec_eq(v___x_93_, v___x_94_);
return v___x_95_;
}
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_74_) == 7)
{
lean_object* v_binderType_97_; lean_object* v_body_98_; lean_object* v_binderType_99_; lean_object* v_body_100_; size_t v___x_101_; size_t v___x_102_; uint8_t v___x_103_; 
v_binderType_97_ = lean_ctor_get(v_e_u2081_73_, 1);
v_body_98_ = lean_ctor_get(v_e_u2081_73_, 2);
v_binderType_99_ = lean_ctor_get(v_e_u2082_74_, 1);
v_body_100_ = lean_ctor_get(v_e_u2082_74_, 2);
v___x_101_ = lean_ptr_addr(v_binderType_97_);
v___x_102_ = lean_ptr_addr(v_binderType_99_);
v___x_103_ = lean_usize_dec_eq(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
return v___x_103_;
}
else
{
size_t v___x_104_; size_t v___x_105_; uint8_t v___x_106_; 
v___x_104_ = lean_ptr_addr(v_body_98_);
v___x_105_ = lean_ptr_addr(v_body_100_);
v___x_106_ = lean_usize_dec_eq(v___x_104_, v___x_105_);
return v___x_106_;
}
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
}
case 8:
{
if (lean_obj_tag(v_e_u2082_74_) == 8)
{
lean_object* v_value_108_; lean_object* v_body_109_; uint8_t v_nondep_110_; lean_object* v_value_111_; lean_object* v_body_112_; uint8_t v_nondep_113_; 
v_value_108_ = lean_ctor_get(v_e_u2081_73_, 2);
v_body_109_ = lean_ctor_get(v_e_u2081_73_, 3);
v_nondep_110_ = lean_ctor_get_uint8(v_e_u2081_73_, sizeof(void*)*4 + 8);
v_value_111_ = lean_ctor_get(v_e_u2082_74_, 2);
v_body_112_ = lean_ctor_get(v_e_u2082_74_, 3);
v_nondep_113_ = lean_ctor_get_uint8(v_e_u2082_74_, sizeof(void*)*4 + 8);
if (v_nondep_113_ == 0)
{
if (v_nondep_110_ == 0)
{
goto v___jp_114_;
}
else
{
return v_nondep_113_;
}
}
else
{
if (v_nondep_110_ == 0)
{
return v_nondep_110_;
}
else
{
goto v___jp_114_;
}
}
v___jp_114_:
{
size_t v___x_115_; size_t v___x_116_; uint8_t v___x_117_; 
v___x_115_ = lean_ptr_addr(v_value_108_);
v___x_116_ = lean_ptr_addr(v_value_111_);
v___x_117_ = lean_usize_dec_eq(v___x_115_, v___x_116_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
size_t v___x_118_; size_t v___x_119_; uint8_t v___x_120_; 
v___x_118_ = lean_ptr_addr(v_body_109_);
v___x_119_ = lean_ptr_addr(v_body_112_);
v___x_120_ = lean_usize_dec_eq(v___x_118_, v___x_119_);
return v___x_120_;
}
}
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 0;
return v___x_121_;
}
}
case 10:
{
if (lean_obj_tag(v_e_u2082_74_) == 10)
{
lean_object* v_data_122_; lean_object* v_expr_123_; lean_object* v_data_124_; lean_object* v_expr_125_; size_t v___x_126_; size_t v___x_127_; uint8_t v___x_128_; 
v_data_122_ = lean_ctor_get(v_e_u2081_73_, 0);
v_expr_123_ = lean_ctor_get(v_e_u2081_73_, 1);
v_data_124_ = lean_ctor_get(v_e_u2082_74_, 0);
v_expr_125_ = lean_ctor_get(v_e_u2082_74_, 1);
v___x_126_ = lean_ptr_addr(v_expr_123_);
v___x_127_ = lean_ptr_addr(v_expr_125_);
v___x_128_ = lean_usize_dec_eq(v___x_126_, v___x_127_);
if (v___x_128_ == 0)
{
return v___x_128_;
}
else
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_KVMap_eqv(v_data_122_, v_data_124_);
return v___x_129_;
}
}
else
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
case 11:
{
if (lean_obj_tag(v_e_u2082_74_) == 11)
{
lean_object* v_typeName_131_; lean_object* v_idx_132_; lean_object* v_struct_133_; lean_object* v_typeName_134_; lean_object* v_idx_135_; lean_object* v_struct_136_; uint8_t v___x_137_; 
v_typeName_131_ = lean_ctor_get(v_e_u2081_73_, 0);
v_idx_132_ = lean_ctor_get(v_e_u2081_73_, 1);
v_struct_133_ = lean_ctor_get(v_e_u2081_73_, 2);
v_typeName_134_ = lean_ctor_get(v_e_u2082_74_, 0);
v_idx_135_ = lean_ctor_get(v_e_u2082_74_, 1);
v_struct_136_ = lean_ctor_get(v_e_u2082_74_, 2);
v___x_137_ = lean_name_eq(v_typeName_131_, v_typeName_134_);
if (v___x_137_ == 0)
{
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
v___x_138_ = lean_nat_dec_eq(v_idx_132_, v_idx_135_);
if (v___x_138_ == 0)
{
return v___x_138_;
}
else
{
size_t v___x_139_; size_t v___x_140_; uint8_t v___x_141_; 
v___x_139_ = lean_ptr_addr(v_struct_133_);
v___x_140_ = lean_ptr_addr(v_struct_136_);
v___x_141_ = lean_usize_dec_eq(v___x_139_, v___x_140_);
return v___x_141_;
}
}
}
else
{
uint8_t v___x_142_; 
v___x_142_ = 0;
return v___x_142_;
}
}
default: 
{
uint8_t v___x_143_; 
v___x_143_ = lean_expr_eqv(v_e_u2081_73_, v_e_u2082_74_);
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object* v_e_u2081_144_, lean_object* v_e_u2082_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_e_u2081_144_, v_e_u2082_145_);
lean_dec_ref(v_e_u2082_145_);
lean_dec_ref(v_e_u2081_144_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object* v_declName_170_){
_start:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__3));
v___x_172_ = lean_name_eq(v_declName_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__5));
v___x_174_ = lean_name_eq(v_declName_170_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__7));
v___x_176_ = lean_name_eq(v_declName_170_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__9));
v___x_178_ = lean_name_eq(v_declName_170_, v___x_177_);
return v___x_178_;
}
else
{
return v___x_176_;
}
}
else
{
return v___x_174_;
}
}
else
{
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object* v_declName_179_){
_start:
{
uint8_t v_res_180_; lean_object* v_r_181_; 
v_res_180_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_179_);
lean_dec(v_declName_179_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object* v_env_182_, lean_object* v_declName_183_){
_start:
{
uint8_t v___x_184_; 
lean_inc(v_declName_183_);
lean_inc_ref(v_env_182_);
v___x_184_ = l_Lean_getReducibilityStatusCore(v_env_182_, v_declName_183_);
if (v___x_184_ == 0)
{
uint8_t v___x_185_; 
v___x_185_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_183_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Environment_isProjectionFn(v_env_182_, v_declName_183_);
if (v___x_186_ == 0)
{
uint8_t v___x_187_; 
v___x_187_ = 1;
return v___x_187_;
}
else
{
return v___x_185_;
}
}
else
{
uint8_t v___x_188_; 
lean_dec(v_declName_183_);
lean_dec_ref(v_env_182_);
v___x_188_ = 0;
return v___x_188_;
}
}
else
{
uint8_t v___x_189_; 
lean_dec(v_declName_183_);
lean_dec_ref(v_env_182_);
v___x_189_ = 0;
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object* v_env_190_, lean_object* v_declName_191_){
_start:
{
uint8_t v_res_192_; lean_object* v_r_193_; 
v_res_192_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_190_, v_declName_191_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object* v_k_194_){
_start:
{
uint64_t v___x_195_; 
v___x_195_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object* v_k_196_){
_start:
{
uint64_t v_res_197_; lean_object* v_r_198_; 
v_res_197_ = l_Lean_Meta_Sym_instHashableAlphaKey___private__1(v_k_196_);
lean_dec_ref(v_k_196_);
v_r_198_ = lean_box_uint64(v_res_197_);
return v_r_198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object* v_k_u2081_201_, lean_object* v_k_u2082_202_){
_start:
{
uint8_t v___x_203_; 
v___x_203_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_u2081_201_, v_k_u2082_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object* v_k_u2081_204_, lean_object* v_k_u2082_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = l_Lean_Meta_Sym_instBEqAlphaKey___private__1(v_k_u2081_204_, v_k_u2082_205_);
lean_dec_ref(v_k_u2082_205_);
lean_dec_ref(v_k_u2081_204_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object* v_ctx_210_, lean_object* v_declName_211_){
_start:
{
uint8_t v_checkReducible_212_; 
v_checkReducible_212_ = lean_ctor_get_uint8(v_ctx_210_, sizeof(void*)*1);
if (v_checkReducible_212_ == 0)
{
lean_dec(v_declName_211_);
lean_dec_ref(v_ctx_210_);
return v_checkReducible_212_;
}
else
{
lean_object* v_env_213_; uint8_t v___x_214_; 
v_env_213_ = lean_ctor_get(v_ctx_210_, 0);
lean_inc_ref(v_env_213_);
lean_dec_ref(v_ctx_210_);
v___x_214_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_213_, v_declName_211_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object* v_ctx_215_, lean_object* v_declName_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_ctx_215_, v_declName_216_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_box(0);
v___x_223_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1));
v___x_224_ = l_Lean_mkConst(v___x_223_, v___x_222_);
return v___x_224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy(void){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object* v_keys_226_, lean_object* v_i_227_, lean_object* v_k_228_, lean_object* v_k_u2080_229_){
_start:
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_array_get_size(v_keys_226_);
v___x_231_ = lean_nat_dec_lt(v_i_227_, v___x_230_);
if (v___x_231_ == 0)
{
lean_dec(v_i_227_);
lean_inc_ref(v_k_u2080_229_);
return v_k_u2080_229_;
}
else
{
lean_object* v_k_x27_232_; uint8_t v___x_233_; 
v_k_x27_232_ = lean_array_fget_borrowed(v_keys_226_, v_i_227_);
v___x_233_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_228_, v_k_x27_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_add(v_i_227_, v___x_234_);
lean_dec(v_i_227_);
v_i_227_ = v___x_235_;
goto _start;
}
else
{
lean_dec(v_i_227_);
lean_inc(v_k_x27_232_);
return v_k_x27_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object* v_keys_237_, lean_object* v_i_238_, lean_object* v_k_239_, lean_object* v_k_u2080_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_237_, v_i_238_, v_k_239_, v_k_u2080_240_);
lean_dec_ref(v_k_u2080_240_);
lean_dec_ref(v_k_239_);
lean_dec_ref(v_keys_237_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object* v_x_242_, size_t v_x_243_, lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_242_) == 0)
{
lean_object* v_es_246_; lean_object* v___x_247_; size_t v___x_248_; size_t v___x_249_; lean_object* v_j_250_; lean_object* v___x_251_; 
v_es_246_ = lean_ctor_get(v_x_242_, 0);
v___x_247_ = lean_box(2);
v___x_248_ = ((size_t)31ULL);
v___x_249_ = lean_usize_land(v_x_243_, v___x_248_);
v_j_250_ = lean_usize_to_nat(v___x_249_);
v___x_251_ = lean_array_get_borrowed(v___x_247_, v_es_246_, v_j_250_);
lean_dec(v_j_250_);
switch(lean_obj_tag(v___x_251_))
{
case 0:
{
lean_object* v_key_252_; uint8_t v___x_253_; 
v_key_252_ = lean_ctor_get(v___x_251_, 0);
v___x_253_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_244_, v_key_252_);
if (v___x_253_ == 0)
{
lean_inc_ref(v_x_245_);
return v_x_245_;
}
else
{
lean_inc(v_key_252_);
return v_key_252_;
}
}
case 1:
{
lean_object* v_node_254_; size_t v___x_255_; size_t v___x_256_; 
v_node_254_ = lean_ctor_get(v___x_251_, 0);
v___x_255_ = ((size_t)5ULL);
v___x_256_ = lean_usize_shift_right(v_x_243_, v___x_255_);
v_x_242_ = v_node_254_;
v_x_243_ = v___x_256_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_245_);
return v_x_245_;
}
}
}
else
{
lean_object* v_ks_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_ks_258_ = lean_ctor_get(v_x_242_, 0);
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_ks_258_, v___x_259_, v_x_244_, v_x_245_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
size_t v_x_1911__boxed_265_; lean_object* v_res_266_; 
v_x_1911__boxed_265_ = lean_unbox_usize(v_x_262_);
lean_dec(v_x_262_);
v_res_266_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_261_, v_x_1911__boxed_265_, v_x_263_, v_x_264_);
lean_dec_ref(v_x_264_);
lean_dec_ref(v_x_263_);
lean_dec_ref(v_x_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object* v_x_267_, lean_object* v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_){
_start:
{
lean_object* v_ks_271_; lean_object* v_vs_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_296_; 
v_ks_271_ = lean_ctor_get(v_x_267_, 0);
v_vs_272_ = lean_ctor_get(v_x_267_, 1);
v_isSharedCheck_296_ = !lean_is_exclusive(v_x_267_);
if (v_isSharedCheck_296_ == 0)
{
v___x_274_ = v_x_267_;
v_isShared_275_ = v_isSharedCheck_296_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_vs_272_);
lean_inc(v_ks_271_);
lean_dec(v_x_267_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_296_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_array_get_size(v_ks_271_);
v___x_277_ = lean_nat_dec_lt(v_x_268_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
lean_dec(v_x_268_);
v___x_278_ = lean_array_push(v_ks_271_, v_x_269_);
v___x_279_ = lean_array_push(v_vs_272_, v_x_270_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_279_);
lean_ctor_set(v___x_274_, 0, v___x_278_);
v___x_281_ = v___x_274_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
else
{
lean_object* v_k_x27_283_; uint8_t v___x_284_; 
v_k_x27_283_ = lean_array_fget_borrowed(v_ks_271_, v_x_268_);
v___x_284_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_269_, v_k_x27_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_286_; 
if (v_isShared_275_ == 0)
{
v___x_286_ = v___x_274_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_ks_271_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_vs_272_);
v___x_286_ = v_reuseFailAlloc_290_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_nat_add(v_x_268_, v___x_287_);
lean_dec(v_x_268_);
v_x_267_ = v___x_286_;
v_x_268_ = v___x_288_;
goto _start;
}
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_291_ = lean_array_fset(v_ks_271_, v_x_268_, v_x_269_);
v___x_292_ = lean_array_fset(v_vs_272_, v_x_268_, v_x_270_);
lean_dec(v_x_268_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_292_);
lean_ctor_set(v___x_274_, 0, v___x_291_);
v___x_294_ = v___x_274_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object* v_n_297_, lean_object* v_k_298_, lean_object* v_v_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_n_297_, v___x_300_, v_k_298_, v_v_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object* v_x_303_, size_t v_x_304_, size_t v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_303_) == 0)
{
lean_object* v_es_308_; size_t v___x_309_; size_t v___x_310_; lean_object* v_j_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_es_308_ = lean_ctor_get(v_x_303_, 0);
v___x_309_ = ((size_t)31ULL);
v___x_310_ = lean_usize_land(v_x_304_, v___x_309_);
v_j_311_ = lean_usize_to_nat(v___x_310_);
v___x_312_ = lean_array_get_size(v_es_308_);
v___x_313_ = lean_nat_dec_lt(v_j_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_dec(v_j_311_);
lean_dec(v_x_307_);
lean_dec_ref(v_x_306_);
return v_x_303_;
}
else
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_352_; 
lean_inc_ref(v_es_308_);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_303_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; 
v_unused_353_ = lean_ctor_get(v_x_303_, 0);
lean_dec(v_unused_353_);
v___x_315_ = v_x_303_;
v_isShared_316_ = v_isSharedCheck_352_;
goto v_resetjp_314_;
}
else
{
lean_dec(v_x_303_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_352_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v_v_317_; lean_object* v___x_318_; lean_object* v_xs_x27_319_; lean_object* v___y_321_; 
v_v_317_ = lean_array_fget(v_es_308_, v_j_311_);
v___x_318_ = lean_box(0);
v_xs_x27_319_ = lean_array_fset(v_es_308_, v_j_311_, v___x_318_);
switch(lean_obj_tag(v_v_317_))
{
case 0:
{
lean_object* v_key_326_; lean_object* v_val_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_337_; 
v_key_326_ = lean_ctor_get(v_v_317_, 0);
v_val_327_ = lean_ctor_get(v_v_317_, 1);
v_isSharedCheck_337_ = !lean_is_exclusive(v_v_317_);
if (v_isSharedCheck_337_ == 0)
{
v___x_329_ = v_v_317_;
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_val_327_);
lean_inc(v_key_326_);
lean_dec(v_v_317_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
uint8_t v___x_331_; 
v___x_331_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_306_, v_key_326_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_del_object(v___x_329_);
v___x_332_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_326_, v_val_327_, v_x_306_, v_x_307_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
v___y_321_ = v___x_333_;
goto v___jp_320_;
}
else
{
lean_object* v___x_335_; 
lean_dec(v_val_327_);
lean_dec(v_key_326_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v_x_307_);
lean_ctor_set(v___x_329_, 0, v_x_306_);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_x_306_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_x_307_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
v___y_321_ = v___x_335_;
goto v___jp_320_;
}
}
}
}
case 1:
{
lean_object* v_node_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_350_; 
v_node_338_ = lean_ctor_get(v_v_317_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v_v_317_);
if (v_isSharedCheck_350_ == 0)
{
v___x_340_ = v_v_317_;
v_isShared_341_ = v_isSharedCheck_350_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_node_338_);
lean_dec(v_v_317_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_350_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
size_t v___x_342_; size_t v___x_343_; size_t v___x_344_; size_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_342_ = ((size_t)5ULL);
v___x_343_ = lean_usize_shift_right(v_x_304_, v___x_342_);
v___x_344_ = ((size_t)1ULL);
v___x_345_ = lean_usize_add(v_x_305_, v___x_344_);
v___x_346_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_node_338_, v___x_343_, v___x_345_, v_x_306_, v_x_307_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_346_);
v___x_348_ = v___x_340_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
v___y_321_ = v___x_348_;
goto v___jp_320_;
}
}
}
default: 
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_x_306_);
lean_ctor_set(v___x_351_, 1, v_x_307_);
v___y_321_ = v___x_351_;
goto v___jp_320_;
}
}
v___jp_320_:
{
lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_322_ = lean_array_fset(v_xs_x27_319_, v_j_311_, v___y_321_);
lean_dec(v_j_311_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_322_);
v___x_324_ = v___x_315_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
}
else
{
lean_object* v_ks_354_; lean_object* v_vs_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_373_; 
v_ks_354_ = lean_ctor_get(v_x_303_, 0);
v_vs_355_ = lean_ctor_get(v_x_303_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v_x_303_);
if (v_isSharedCheck_373_ == 0)
{
v___x_357_ = v_x_303_;
v_isShared_358_ = v_isSharedCheck_373_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_vs_355_);
lean_inc(v_ks_354_);
lean_dec(v_x_303_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_373_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_ks_354_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_vs_355_);
v___x_360_ = v_reuseFailAlloc_372_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v_newNode_361_; size_t v___x_362_; uint8_t v___x_363_; 
v_newNode_361_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v___x_360_, v_x_306_, v_x_307_);
v___x_362_ = ((size_t)7ULL);
v___x_363_ = lean_usize_dec_le(v___x_362_, v_x_305_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_364_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_361_);
v___x_365_ = lean_unsigned_to_nat(4u);
v___x_366_ = lean_nat_dec_lt(v___x_364_, v___x_365_);
lean_dec(v___x_364_);
if (v___x_366_ == 0)
{
lean_object* v_ks_367_; lean_object* v_vs_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_ks_367_ = lean_ctor_get(v_newNode_361_, 0);
lean_inc_ref(v_ks_367_);
v_vs_368_ = lean_ctor_get(v_newNode_361_, 1);
lean_inc_ref(v_vs_368_);
lean_dec_ref(v_newNode_361_);
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0);
v___x_371_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_x_305_, v_ks_367_, v_vs_368_, v___x_369_, v___x_370_);
lean_dec_ref(v_vs_368_);
lean_dec_ref(v_ks_367_);
return v___x_371_;
}
else
{
return v_newNode_361_;
}
}
else
{
return v_newNode_361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t v_depth_374_, lean_object* v_keys_375_, lean_object* v_vals_376_, lean_object* v_i_377_, lean_object* v_entries_378_){
_start:
{
lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_array_get_size(v_keys_375_);
v___x_380_ = lean_nat_dec_lt(v_i_377_, v___x_379_);
if (v___x_380_ == 0)
{
lean_dec(v_i_377_);
return v_entries_378_;
}
else
{
lean_object* v_k_381_; lean_object* v_v_382_; uint64_t v___x_383_; size_t v_h_384_; size_t v___x_385_; lean_object* v___x_386_; size_t v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v_h_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_k_381_ = lean_array_fget_borrowed(v_keys_375_, v_i_377_);
v_v_382_ = lean_array_fget_borrowed(v_vals_376_, v_i_377_);
v___x_383_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_381_);
v_h_384_ = lean_uint64_to_usize(v___x_383_);
v___x_385_ = ((size_t)5ULL);
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_sub(v_depth_374_, v___x_387_);
v___x_389_ = lean_usize_mul(v___x_385_, v___x_388_);
v_h_390_ = lean_usize_shift_right(v_h_384_, v___x_389_);
v___x_391_ = lean_nat_add(v_i_377_, v___x_386_);
lean_dec(v_i_377_);
lean_inc(v_v_382_);
lean_inc(v_k_381_);
v___x_392_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_entries_378_, v_h_390_, v_depth_374_, v_k_381_, v_v_382_);
v_i_377_ = v___x_391_;
v_entries_378_ = v___x_392_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object* v_depth_394_, lean_object* v_keys_395_, lean_object* v_vals_396_, lean_object* v_i_397_, lean_object* v_entries_398_){
_start:
{
size_t v_depth_boxed_399_; lean_object* v_res_400_; 
v_depth_boxed_399_ = lean_unbox_usize(v_depth_394_);
lean_dec(v_depth_394_);
v_res_400_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_boxed_399_, v_keys_395_, v_vals_396_, v_i_397_, v_entries_398_);
lean_dec_ref(v_vals_396_);
lean_dec_ref(v_keys_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_){
_start:
{
size_t v_x_2029__boxed_406_; size_t v_x_2030__boxed_407_; lean_object* v_res_408_; 
v_x_2029__boxed_406_ = lean_unbox_usize(v_x_402_);
lean_dec(v_x_402_);
v_x_2030__boxed_407_ = lean_unbox_usize(v_x_403_);
lean_dec(v_x_403_);
v_res_408_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_401_, v_x_2029__boxed_406_, v_x_2030__boxed_407_, v_x_404_, v_x_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object* v_x_409_, lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
uint64_t v___x_412_; size_t v___x_413_; size_t v___x_414_; lean_object* v___x_415_; 
v___x_412_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_410_);
v___x_413_ = lean_uint64_to_usize(v___x_412_);
v___x_414_ = ((size_t)1ULL);
v___x_415_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_409_, v___x_413_, v___x_414_, v_x_410_, v_x_411_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object* v_a_416_, lean_object* v_b_417_, lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
lean_dec(v_b_417_);
lean_dec_ref(v_a_416_);
return v_x_418_;
}
else
{
lean_object* v_key_419_; lean_object* v_value_420_; lean_object* v_tail_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_435_; 
v_key_419_ = lean_ctor_get(v_x_418_, 0);
v_value_420_ = lean_ctor_get(v_x_418_, 1);
v_tail_421_ = lean_ctor_get(v_x_418_, 2);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_435_ == 0)
{
v___x_423_ = v_x_418_;
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_tail_421_);
lean_inc(v_value_420_);
lean_inc(v_key_419_);
lean_dec(v_x_418_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_ptr_addr(v_key_419_);
v___x_426_ = lean_ptr_addr(v_a_416_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_416_, v_b_417_, v_tail_421_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 2, v___x_428_);
v___x_430_ = v___x_423_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_key_419_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_value_420_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
else
{
lean_object* v___x_433_; 
lean_dec(v_value_420_);
lean_dec(v_key_419_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v_b_417_);
lean_ctor_set(v___x_423_, 0, v_a_416_);
v___x_433_ = v___x_423_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_416_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_b_417_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_tail_421_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
if (lean_obj_tag(v_x_437_) == 0)
{
return v_x_436_;
}
else
{
lean_object* v_key_438_; lean_object* v_value_439_; lean_object* v_tail_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_466_; 
v_key_438_ = lean_ctor_get(v_x_437_, 0);
v_value_439_ = lean_ctor_get(v_x_437_, 1);
v_tail_440_ = lean_ctor_get(v_x_437_, 2);
v_isSharedCheck_466_ = !lean_is_exclusive(v_x_437_);
if (v_isSharedCheck_466_ == 0)
{
v___x_442_ = v_x_437_;
v_isShared_443_ = v_isSharedCheck_466_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_tail_440_);
lean_inc(v_value_439_);
lean_inc(v_key_438_);
lean_dec(v_x_437_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_466_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; size_t v___x_445_; size_t v___x_446_; size_t v___x_447_; uint64_t v___x_448_; uint64_t v___x_449_; uint64_t v___x_450_; uint64_t v_fold_451_; uint64_t v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; size_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_444_ = lean_array_get_size(v_x_436_);
v___x_445_ = lean_ptr_addr(v_key_438_);
v___x_446_ = ((size_t)3ULL);
v___x_447_ = lean_usize_shift_right(v___x_445_, v___x_446_);
v___x_448_ = lean_usize_to_uint64(v___x_447_);
v___x_449_ = 32ULL;
v___x_450_ = lean_uint64_shift_right(v___x_448_, v___x_449_);
v_fold_451_ = lean_uint64_xor(v___x_448_, v___x_450_);
v___x_452_ = 16ULL;
v___x_453_ = lean_uint64_shift_right(v_fold_451_, v___x_452_);
v___x_454_ = lean_uint64_xor(v_fold_451_, v___x_453_);
v___x_455_ = lean_uint64_to_usize(v___x_454_);
v___x_456_ = lean_usize_of_nat(v___x_444_);
v___x_457_ = ((size_t)1ULL);
v___x_458_ = lean_usize_sub(v___x_456_, v___x_457_);
v___x_459_ = lean_usize_land(v___x_455_, v___x_458_);
v___x_460_ = lean_array_uget_borrowed(v_x_436_, v___x_459_);
lean_inc(v___x_460_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 2, v___x_460_);
v___x_462_ = v___x_442_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_key_438_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v_value_439_);
lean_ctor_set(v_reuseFailAlloc_465_, 2, v___x_460_);
v___x_462_ = v_reuseFailAlloc_465_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; 
v___x_463_ = lean_array_uset(v_x_436_, v___x_459_, v___x_462_);
v_x_436_ = v___x_463_;
v_x_437_ = v_tail_440_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object* v_i_467_, lean_object* v_source_468_, lean_object* v_target_469_){
_start:
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = lean_array_get_size(v_source_468_);
v___x_471_ = lean_nat_dec_lt(v_i_467_, v___x_470_);
if (v___x_471_ == 0)
{
lean_dec_ref(v_source_468_);
lean_dec(v_i_467_);
return v_target_469_;
}
else
{
lean_object* v_es_472_; lean_object* v___x_473_; lean_object* v_source_474_; lean_object* v_target_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_es_472_ = lean_array_fget(v_source_468_, v_i_467_);
v___x_473_ = lean_box(0);
v_source_474_ = lean_array_fset(v_source_468_, v_i_467_, v___x_473_);
v_target_475_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_target_469_, v_es_472_);
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_add(v_i_467_, v___x_476_);
lean_dec(v_i_467_);
v_i_467_ = v___x_477_;
v_source_468_ = v_source_474_;
v_target_469_ = v_target_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object* v_data_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v_nbuckets_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_480_ = lean_array_get_size(v_data_479_);
v___x_481_ = lean_unsigned_to_nat(2u);
v_nbuckets_482_ = lean_nat_mul(v___x_480_, v___x_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_box(0);
v___x_485_ = lean_mk_array(v_nbuckets_482_, v___x_484_);
v___x_486_ = lean_array_propagate_mark(v_data_479_, v___x_485_);
v___x_487_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v___x_483_, v_data_479_, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object* v_a_488_, lean_object* v_x_489_){
_start:
{
if (lean_obj_tag(v_x_489_) == 0)
{
uint8_t v___x_490_; 
v___x_490_ = 0;
return v___x_490_;
}
else
{
lean_object* v_key_491_; lean_object* v_tail_492_; size_t v___x_493_; size_t v___x_494_; uint8_t v___x_495_; 
v_key_491_ = lean_ctor_get(v_x_489_, 0);
v_tail_492_ = lean_ctor_get(v_x_489_, 2);
v___x_493_ = lean_ptr_addr(v_key_491_);
v___x_494_ = lean_ptr_addr(v_a_488_);
v___x_495_ = lean_usize_dec_eq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
v_x_489_ = v_tail_492_;
goto _start;
}
else
{
return v___x_495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object* v_a_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_497_, v_x_498_);
lean_dec(v_x_498_);
lean_dec_ref(v_a_497_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object* v_m_501_, lean_object* v_a_502_, lean_object* v_b_503_){
_start:
{
lean_object* v_size_504_; lean_object* v_buckets_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_551_; 
v_size_504_ = lean_ctor_get(v_m_501_, 0);
v_buckets_505_ = lean_ctor_get(v_m_501_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_m_501_);
if (v_isSharedCheck_551_ == 0)
{
v___x_507_ = v_m_501_;
v_isShared_508_ = v_isSharedCheck_551_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_buckets_505_);
lean_inc(v_size_504_);
lean_dec(v_m_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_551_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; size_t v___x_510_; size_t v___x_511_; size_t v___x_512_; uint64_t v___x_513_; uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v_fold_516_; uint64_t v___x_517_; uint64_t v___x_518_; uint64_t v___x_519_; size_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_bkt_525_; uint8_t v___x_526_; 
v___x_509_ = lean_array_get_size(v_buckets_505_);
v___x_510_ = lean_ptr_addr(v_a_502_);
v___x_511_ = ((size_t)3ULL);
v___x_512_ = lean_usize_shift_right(v___x_510_, v___x_511_);
v___x_513_ = lean_usize_to_uint64(v___x_512_);
v___x_514_ = 32ULL;
v___x_515_ = lean_uint64_shift_right(v___x_513_, v___x_514_);
v_fold_516_ = lean_uint64_xor(v___x_513_, v___x_515_);
v___x_517_ = 16ULL;
v___x_518_ = lean_uint64_shift_right(v_fold_516_, v___x_517_);
v___x_519_ = lean_uint64_xor(v_fold_516_, v___x_518_);
v___x_520_ = lean_uint64_to_usize(v___x_519_);
v___x_521_ = lean_usize_of_nat(v___x_509_);
v___x_522_ = ((size_t)1ULL);
v___x_523_ = lean_usize_sub(v___x_521_, v___x_522_);
v___x_524_ = lean_usize_land(v___x_520_, v___x_523_);
v_bkt_525_ = lean_array_uget_borrowed(v_buckets_505_, v___x_524_);
v___x_526_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_502_, v_bkt_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; lean_object* v_size_x27_528_; lean_object* v___x_529_; lean_object* v_buckets_x27_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_527_ = lean_unsigned_to_nat(1u);
v_size_x27_528_ = lean_nat_add(v_size_504_, v___x_527_);
lean_dec(v_size_504_);
lean_inc(v_bkt_525_);
v___x_529_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_529_, 0, v_a_502_);
lean_ctor_set(v___x_529_, 1, v_b_503_);
lean_ctor_set(v___x_529_, 2, v_bkt_525_);
v_buckets_x27_530_ = lean_array_uset(v_buckets_505_, v___x_524_, v___x_529_);
v___x_531_ = lean_unsigned_to_nat(4u);
v___x_532_ = lean_nat_mul(v_size_x27_528_, v___x_531_);
v___x_533_ = lean_unsigned_to_nat(3u);
v___x_534_ = lean_nat_div(v___x_532_, v___x_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_array_get_size(v_buckets_x27_530_);
v___x_536_ = lean_nat_dec_le(v___x_534_, v___x_535_);
lean_dec(v___x_534_);
if (v___x_536_ == 0)
{
lean_object* v_val_537_; lean_object* v___x_539_; 
v_val_537_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_buckets_x27_530_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_val_537_);
lean_ctor_set(v___x_507_, 0, v_size_x27_528_);
v___x_539_ = v___x_507_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_size_x27_528_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_val_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
else
{
lean_object* v___x_542_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_buckets_x27_530_);
lean_ctor_set(v___x_507_, 0, v_size_x27_528_);
v___x_542_ = v___x_507_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_size_x27_528_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_buckets_x27_530_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v___x_544_; lean_object* v_buckets_x27_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
lean_inc(v_bkt_525_);
v___x_544_ = lean_box(0);
v_buckets_x27_545_ = lean_array_uset(v_buckets_505_, v___x_524_, v___x_544_);
v___x_546_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_502_, v_b_503_, v_bkt_525_);
v___x_547_ = lean_array_uset(v_buckets_x27_545_, v___x_524_, v___x_546_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v___x_547_);
v___x_549_ = v___x_507_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_size_504_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
static size_t _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0(void){
_start:
{
lean_object* v___x_552_; size_t v___x_553_; 
v___x_552_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_553_ = lean_ptr_addr(v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object* v_e_554_, lean_object* v_r_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_map_557_; lean_object* v_set_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_582_; 
v_map_557_ = lean_ctor_get(v_a_556_, 0);
v_set_558_ = lean_ctor_get(v_a_556_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_a_556_);
if (v_isSharedCheck_582_ == 0)
{
v___x_560_ = v_a_556_;
v_isShared_561_ = v_isSharedCheck_582_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_set_558_);
lean_inc(v_map_557_);
lean_dec(v_a_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_582_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; uint64_t v___x_563_; size_t v___x_564_; lean_object* v___x_565_; size_t v___x_566_; size_t v___x_567_; uint8_t v___x_568_; 
v___x_562_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_563_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_r_555_);
v___x_564_ = lean_uint64_to_usize(v___x_563_);
v___x_565_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_558_, v___x_564_, v_r_555_, v___x_562_);
v___x_566_ = lean_ptr_addr(v___x_565_);
v___x_567_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_568_ = lean_usize_dec_eq(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_571_; 
lean_dec_ref(v_r_555_);
lean_inc_ref(v___x_565_);
v___x_569_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_557_, v_e_554_, v___x_565_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_569_);
v___x_571_ = v___x_560_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_set_558_);
v___x_571_ = v_reuseFailAlloc_573_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_565_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
return v___x_572_;
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
lean_dec_ref(v___x_565_);
lean_inc_ref_n(v_r_555_, 4);
v___x_574_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_557_, v_e_554_, v_r_555_);
v___x_575_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v___x_574_, v_r_555_, v_r_555_);
v___x_576_ = lean_box(0);
v___x_577_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_558_, v_r_555_, v___x_576_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 1, v___x_577_);
lean_ctor_set(v___x_560_, 0, v___x_575_);
v___x_579_ = v___x_560_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v_r_555_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
return v___x_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object* v_e_583_, lean_object* v_r_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_583_, v_r_584_, v_a_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object* v_e_588_, lean_object* v_r_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_588_, v_r_589_, v_a_590_, v_a_591_);
lean_dec_ref(v_a_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object* v_00_u03b2_593_, lean_object* v_x_594_, size_t v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_594_, v_x_595_, v_x_596_, v_x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object* v_00_u03b2_599_, lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
size_t v_x_2482__boxed_604_; lean_object* v_res_605_; 
v_x_2482__boxed_604_ = lean_unbox_usize(v_x_601_);
lean_dec(v_x_601_);
v_res_605_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(v_00_u03b2_599_, v_x_600_, v_x_2482__boxed_604_, v_x_602_, v_x_603_);
lean_dec_ref(v_x_603_);
lean_dec_ref(v_x_602_);
lean_dec_ref(v_x_600_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object* v_00_u03b2_606_, lean_object* v_m_607_, lean_object* v_a_608_, lean_object* v_b_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_m_607_, v_a_608_, v_b_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object* v_00_u03b2_611_, lean_object* v_x_612_, lean_object* v_x_613_, lean_object* v_x_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_x_612_, v_x_613_, v_x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object* v_00_u03b2_616_, lean_object* v_keys_617_, lean_object* v_vals_618_, lean_object* v_heq_619_, lean_object* v_i_620_, lean_object* v_k_621_, lean_object* v_k_u2080_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_617_, v_i_620_, v_k_621_, v_k_u2080_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object* v_00_u03b2_624_, lean_object* v_keys_625_, lean_object* v_vals_626_, lean_object* v_heq_627_, lean_object* v_i_628_, lean_object* v_k_629_, lean_object* v_k_u2080_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(v_00_u03b2_624_, v_keys_625_, v_vals_626_, v_heq_627_, v_i_628_, v_k_629_, v_k_u2080_630_);
lean_dec_ref(v_k_u2080_630_);
lean_dec_ref(v_k_629_);
lean_dec_ref(v_vals_626_);
lean_dec_ref(v_keys_625_);
return v_res_631_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object* v_00_u03b2_632_, lean_object* v_a_633_, lean_object* v_x_634_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_633_, v_x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object* v_00_u03b2_636_, lean_object* v_a_637_, lean_object* v_x_638_){
_start:
{
uint8_t v_res_639_; lean_object* v_r_640_; 
v_res_639_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(v_00_u03b2_636_, v_a_637_, v_x_638_);
lean_dec(v_x_638_);
lean_dec_ref(v_a_637_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object* v_00_u03b2_641_, lean_object* v_data_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_data_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object* v_00_u03b2_644_, lean_object* v_a_645_, lean_object* v_b_646_, lean_object* v_x_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_645_, v_b_646_, v_x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object* v_00_u03b2_649_, lean_object* v_x_650_, size_t v_x_651_, size_t v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_650_, v_x_651_, v_x_652_, v_x_653_, v_x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object* v_00_u03b2_656_, lean_object* v_x_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
size_t v_x_2519__boxed_662_; size_t v_x_2520__boxed_663_; lean_object* v_res_664_; 
v_x_2519__boxed_662_ = lean_unbox_usize(v_x_658_);
lean_dec(v_x_658_);
v_x_2520__boxed_663_ = lean_unbox_usize(v_x_659_);
lean_dec(v_x_659_);
v_res_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(v_00_u03b2_656_, v_x_657_, v_x_2519__boxed_662_, v_x_2520__boxed_663_, v_x_660_, v_x_661_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_665_, lean_object* v_i_666_, lean_object* v_source_667_, lean_object* v_target_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v_i_666_, v_source_667_, v_target_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object* v_00_u03b2_670_, lean_object* v_n_671_, lean_object* v_k_672_, lean_object* v_v_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v_n_671_, v_k_672_, v_v_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object* v_00_u03b2_675_, size_t v_depth_676_, lean_object* v_keys_677_, lean_object* v_vals_678_, lean_object* v_heq_679_, lean_object* v_i_680_, lean_object* v_entries_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_676_, v_keys_677_, v_vals_678_, v_i_680_, v_entries_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object* v_00_u03b2_683_, lean_object* v_depth_684_, lean_object* v_keys_685_, lean_object* v_vals_686_, lean_object* v_heq_687_, lean_object* v_i_688_, lean_object* v_entries_689_){
_start:
{
size_t v_depth_boxed_690_; lean_object* v_res_691_; 
v_depth_boxed_690_ = lean_unbox_usize(v_depth_684_);
lean_dec(v_depth_684_);
v_res_691_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(v_00_u03b2_683_, v_depth_boxed_690_, v_keys_685_, v_vals_686_, v_heq_687_, v_i_688_, v_entries_689_);
lean_dec_ref(v_vals_686_);
lean_dec_ref(v_keys_685_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_x_693_, v_x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_696_, lean_object* v_x_697_, lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_x_697_, v_x_698_, v_x_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object* v_e_704_, lean_object* v_k_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_map_708_; lean_object* v_set_709_; lean_object* v___f_710_; lean_object* v___f_711_; lean_object* v___x_712_; 
v_map_708_ = lean_ctor_get(v_a_707_, 0);
v_set_709_ = lean_ctor_get(v_a_707_, 1);
v___f_710_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0));
v___f_711_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1));
lean_inc_ref(v_e_704_);
v___x_712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_710_, v___f_711_, v_map_708_, v_e_704_);
if (lean_obj_tag(v___x_712_) == 1)
{
lean_object* v_val_713_; lean_object* v___x_714_; 
lean_dec_ref(v_k_705_);
lean_dec_ref(v_e_704_);
v_val_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v_val_713_);
lean_ctor_set(v___x_714_, 1, v_a_707_);
return v___x_714_;
}
else
{
lean_object* v___f_715_; lean_object* v___x_716_; uint64_t v___x_717_; size_t v___x_718_; lean_object* v___x_719_; size_t v___x_720_; size_t v___x_721_; uint8_t v___x_722_; 
lean_dec(v___x_712_);
v___f_715_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_716_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_717_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_704_);
v___x_718_ = lean_uint64_to_usize(v___x_717_);
lean_inc_ref(v_e_704_);
lean_inc_ref(v_set_709_);
v___x_719_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_715_, v_set_709_, v___x_718_, v_e_704_, v___x_716_);
v___x_720_ = lean_ptr_addr(v___x_719_);
v___x_721_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_722_ = lean_usize_dec_eq(v___x_720_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec_ref(v_k_705_);
lean_dec_ref(v_e_704_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_719_);
lean_ctor_set(v___x_723_, 1, v_a_707_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; 
lean_dec(v___x_719_);
lean_inc_ref(v_a_706_);
v___x_724_ = lean_apply_2(v_k_705_, v_a_706_, v_a_707_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v_a_726_; lean_object* v___x_727_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
v_a_726_ = lean_ctor_get(v___x_724_, 1);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_724_, 2);
v___x_727_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_704_, v_a_725_, v_a_726_);
return v___x_727_;
}
else
{
lean_dec_ref(v_e_704_);
return v___x_724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object* v_e_728_, lean_object* v_k_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(v_e_728_, v_k_729_, v_a_730_, v_a_731_);
lean_dec_ref(v_a_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object* v_a_733_, lean_object* v_x_734_){
_start:
{
if (lean_obj_tag(v_x_734_) == 0)
{
lean_object* v___x_735_; 
v___x_735_ = lean_box(0);
return v___x_735_;
}
else
{
lean_object* v_key_736_; lean_object* v_value_737_; lean_object* v_tail_738_; size_t v___x_739_; size_t v___x_740_; uint8_t v___x_741_; 
v_key_736_ = lean_ctor_get(v_x_734_, 0);
v_value_737_ = lean_ctor_get(v_x_734_, 1);
v_tail_738_ = lean_ctor_get(v_x_734_, 2);
v___x_739_ = lean_ptr_addr(v_key_736_);
v___x_740_ = lean_ptr_addr(v_a_733_);
v___x_741_ = lean_usize_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
v_x_734_ = v_tail_738_;
goto _start;
}
else
{
lean_object* v___x_743_; 
lean_inc(v_value_737_);
v___x_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_743_, 0, v_value_737_);
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object* v_a_744_, lean_object* v_x_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_744_, v_x_745_);
lean_dec(v_x_745_);
lean_dec_ref(v_a_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object* v_m_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_buckets_749_; lean_object* v___x_750_; size_t v___x_751_; size_t v___x_752_; size_t v___x_753_; uint64_t v___x_754_; uint64_t v___x_755_; uint64_t v___x_756_; uint64_t v_fold_757_; uint64_t v___x_758_; uint64_t v___x_759_; uint64_t v___x_760_; size_t v___x_761_; size_t v___x_762_; size_t v___x_763_; size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_buckets_749_ = lean_ctor_get(v_m_747_, 1);
v___x_750_ = lean_array_get_size(v_buckets_749_);
v___x_751_ = lean_ptr_addr(v_a_748_);
v___x_752_ = ((size_t)3ULL);
v___x_753_ = lean_usize_shift_right(v___x_751_, v___x_752_);
v___x_754_ = lean_usize_to_uint64(v___x_753_);
v___x_755_ = 32ULL;
v___x_756_ = lean_uint64_shift_right(v___x_754_, v___x_755_);
v_fold_757_ = lean_uint64_xor(v___x_754_, v___x_756_);
v___x_758_ = 16ULL;
v___x_759_ = lean_uint64_shift_right(v_fold_757_, v___x_758_);
v___x_760_ = lean_uint64_xor(v_fold_757_, v___x_759_);
v___x_761_ = lean_uint64_to_usize(v___x_760_);
v___x_762_ = lean_usize_of_nat(v___x_750_);
v___x_763_ = ((size_t)1ULL);
v___x_764_ = lean_usize_sub(v___x_762_, v___x_763_);
v___x_765_ = lean_usize_land(v___x_761_, v___x_764_);
v___x_766_ = lean_array_uget_borrowed(v_buckets_749_, v___x_765_);
v___x_767_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_748_, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object* v_m_768_, lean_object* v_a_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_768_, v_a_769_);
lean_dec_ref(v_a_769_);
lean_dec_ref(v_m_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_771_, lean_object* v_vals_772_, lean_object* v_i_773_, lean_object* v_k_774_){
_start:
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = lean_array_get_size(v_keys_771_);
v___x_776_ = lean_nat_dec_lt(v_i_773_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v_i_773_);
v___x_777_ = lean_box(0);
return v___x_777_;
}
else
{
lean_object* v_k_x27_778_; uint8_t v___x_779_; 
v_k_x27_778_ = lean_array_fget_borrowed(v_keys_771_, v_i_773_);
v___x_779_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_774_, v_k_x27_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_unsigned_to_nat(1u);
v___x_781_ = lean_nat_add(v_i_773_, v___x_780_);
lean_dec(v_i_773_);
v_i_773_ = v___x_781_;
goto _start;
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_array_fget_borrowed(v_vals_772_, v_i_773_);
lean_dec(v_i_773_);
lean_inc(v___x_783_);
lean_inc(v_k_x27_778_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v_k_x27_778_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_786_, lean_object* v_vals_787_, lean_object* v_i_788_, lean_object* v_k_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_786_, v_vals_787_, v_i_788_, v_k_789_);
lean_dec_ref(v_k_789_);
lean_dec_ref(v_vals_787_);
lean_dec_ref(v_keys_786_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object* v_x_791_, size_t v_x_792_, lean_object* v_x_793_){
_start:
{
if (lean_obj_tag(v_x_791_) == 0)
{
lean_object* v_es_794_; lean_object* v___x_795_; size_t v___x_796_; size_t v___x_797_; lean_object* v_j_798_; lean_object* v___x_799_; 
v_es_794_ = lean_ctor_get(v_x_791_, 0);
v___x_795_ = lean_box(2);
v___x_796_ = ((size_t)31ULL);
v___x_797_ = lean_usize_land(v_x_792_, v___x_796_);
v_j_798_ = lean_usize_to_nat(v___x_797_);
v___x_799_ = lean_array_get_borrowed(v___x_795_, v_es_794_, v_j_798_);
lean_dec(v_j_798_);
switch(lean_obj_tag(v___x_799_))
{
case 0:
{
lean_object* v_key_800_; lean_object* v_val_801_; uint8_t v___x_802_; 
v_key_800_ = lean_ctor_get(v___x_799_, 0);
v_val_801_ = lean_ctor_get(v___x_799_, 1);
v___x_802_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_793_, v_key_800_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_box(0);
return v___x_803_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_inc(v_val_801_);
lean_inc(v_key_800_);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v_key_800_);
lean_ctor_set(v___x_804_, 1, v_val_801_);
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
case 1:
{
lean_object* v_node_806_; size_t v___x_807_; size_t v___x_808_; 
v_node_806_ = lean_ctor_get(v___x_799_, 0);
v___x_807_ = ((size_t)5ULL);
v___x_808_ = lean_usize_shift_right(v_x_792_, v___x_807_);
v_x_791_ = v_node_806_;
v_x_792_ = v___x_808_;
goto _start;
}
default: 
{
lean_object* v___x_810_; 
v___x_810_ = lean_box(0);
return v___x_810_;
}
}
}
else
{
lean_object* v_ks_811_; lean_object* v_vs_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_ks_811_ = lean_ctor_get(v_x_791_, 0);
v_vs_812_ = lean_ctor_get(v_x_791_, 1);
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_ks_811_, v_vs_812_, v___x_813_, v_x_793_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
size_t v_x_10480__boxed_818_; lean_object* v_res_819_; 
v_x_10480__boxed_818_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_res_819_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_815_, v_x_10480__boxed_818_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec_ref(v_x_815_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
uint64_t v___x_822_; size_t v___x_823_; lean_object* v___x_824_; 
v___x_822_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_821_);
v___x_823_ = lean_uint64_to_usize(v___x_822_);
v___x_824_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_820_, v___x_823_, v_x_821_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object* v_x_825_, lean_object* v_x_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_825_, v_x_826_);
lean_dec_ref(v_x_826_);
lean_dec_ref(v_x_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object* v_e_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
switch(lean_obj_tag(v_e_828_))
{
case 4:
{
lean_object* v_declName_831_; lean_object* v_map_832_; lean_object* v_set_833_; lean_object* v___x_834_; 
v_declName_831_ = lean_ctor_get(v_e_828_, 0);
v_map_832_ = lean_ctor_get(v_a_830_, 0);
v_set_833_ = lean_ctor_get(v_a_830_, 1);
v___x_834_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_833_, v_e_828_);
if (lean_obj_tag(v___x_834_) == 0)
{
uint8_t v___x_835_; 
lean_inc(v_declName_831_);
lean_inc_ref(v_a_829_);
v___x_835_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_829_, v_declName_831_);
if (v___x_835_ == 0)
{
lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_845_; 
lean_inc_ref(v_set_833_);
lean_inc_ref(v_map_832_);
v_isSharedCheck_845_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; lean_object* v_unused_847_; 
v_unused_846_ = lean_ctor_get(v_a_830_, 1);
lean_dec(v_unused_846_);
v_unused_847_ = lean_ctor_get(v_a_830_, 0);
lean_dec(v_unused_847_);
v___x_837_ = v_a_830_;
v_isShared_838_ = v_isSharedCheck_845_;
goto v_resetjp_836_;
}
else
{
lean_dec(v_a_830_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_845_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_839_ = lean_box(0);
lean_inc_ref(v_e_828_);
v___x_840_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_833_, v_e_828_, v___x_839_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v___x_840_);
v___x_842_ = v___x_837_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_map_832_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v___x_840_);
v___x_842_ = v_reuseFailAlloc_844_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; 
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v_e_828_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
return v___x_843_;
}
}
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_848_ = lean_box(0);
v___x_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v_a_830_);
return v___x_849_;
}
}
else
{
lean_object* v_val_850_; lean_object* v_fst_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_850_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_val_850_);
lean_dec_ref_known(v___x_834_, 1);
v_fst_851_ = lean_ctor_get(v_val_850_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v_val_850_);
if (v_isSharedCheck_858_ == 0)
{
lean_object* v_unused_859_; 
v_unused_859_ = lean_ctor_get(v_val_850_, 1);
lean_dec(v_unused_859_);
v___x_853_ = v_val_850_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_fst_851_);
lean_dec(v_val_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 1, v_a_830_);
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_fst_851_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_a_830_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
case 5:
{
lean_object* v_fn_860_; lean_object* v_arg_861_; lean_object* v_map_862_; lean_object* v_set_863_; lean_object* v___x_864_; 
v_fn_860_ = lean_ctor_get(v_e_828_, 0);
v_arg_861_ = lean_ctor_get(v_e_828_, 1);
v_map_862_ = lean_ctor_get(v_a_830_, 0);
v_set_863_ = lean_ctor_get(v_a_830_, 1);
v___x_864_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_862_, v_e_828_);
if (lean_obj_tag(v___x_864_) == 1)
{
lean_object* v_val_865_; lean_object* v___x_866_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_val_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_val_865_);
lean_ctor_set(v___x_866_, 1, v_a_830_);
return v___x_866_;
}
else
{
lean_object* v___x_867_; uint64_t v___x_868_; size_t v___x_869_; lean_object* v___x_870_; size_t v___x_871_; size_t v___x_872_; uint8_t v___x_873_; 
lean_dec(v___x_864_);
v___x_867_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_868_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_869_ = lean_uint64_to_usize(v___x_868_);
v___x_870_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_863_, v___x_869_, v_e_828_, v___x_867_);
v___x_871_ = lean_ptr_addr(v___x_870_);
v___x_872_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_873_ = lean_usize_dec_eq(v___x_871_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_870_);
lean_ctor_set(v___x_874_, 1, v_a_830_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; 
lean_dec_ref(v___x_870_);
lean_inc_ref(v_fn_860_);
v___x_875_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_fn_860_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
v_a_877_ = lean_ctor_get(v___x_875_, 1);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_875_, 2);
lean_inc_ref(v_arg_861_);
v___x_878_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_arg_861_, v_a_829_, v_a_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v_a_880_; size_t v___x_881_; size_t v___x_882_; uint8_t v___x_883_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
v_a_880_ = lean_ctor_get(v___x_878_, 1);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_878_, 2);
v___x_881_ = lean_ptr_addr(v_fn_860_);
v___x_882_ = lean_ptr_addr(v_a_876_);
v___x_883_ = lean_usize_dec_eq(v___x_881_, v___x_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = l_Lean_Expr_app___override(v_a_876_, v_a_879_);
v___x_885_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_884_, v_a_880_);
return v___x_885_;
}
else
{
size_t v___x_886_; size_t v___x_887_; uint8_t v___x_888_; 
v___x_886_ = lean_ptr_addr(v_arg_861_);
v___x_887_ = lean_ptr_addr(v_a_879_);
v___x_888_ = lean_usize_dec_eq(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = l_Lean_Expr_app___override(v_a_876_, v_a_879_);
v___x_890_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_889_, v_a_880_);
return v___x_890_;
}
else
{
lean_object* v___x_891_; 
lean_dec(v_a_879_);
lean_dec(v_a_876_);
lean_inc_ref(v_e_828_);
v___x_891_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_880_);
return v___x_891_;
}
}
}
else
{
lean_dec(v_a_876_);
lean_dec_ref_known(v_e_828_, 2);
return v___x_878_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 2);
return v___x_875_;
}
}
}
}
case 6:
{
lean_object* v_binderName_892_; lean_object* v_binderType_893_; lean_object* v_body_894_; uint8_t v_binderInfo_895_; lean_object* v_map_896_; lean_object* v_set_897_; lean_object* v___x_898_; 
v_binderName_892_ = lean_ctor_get(v_e_828_, 0);
v_binderType_893_ = lean_ctor_get(v_e_828_, 1);
v_body_894_ = lean_ctor_get(v_e_828_, 2);
v_binderInfo_895_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*3 + 8);
v_map_896_ = lean_ctor_get(v_a_830_, 0);
v_set_897_ = lean_ctor_get(v_a_830_, 1);
v___x_898_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_896_, v_e_828_);
if (lean_obj_tag(v___x_898_) == 1)
{
lean_object* v_val_899_; lean_object* v___x_900_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v_val_899_);
lean_ctor_set(v___x_900_, 1, v_a_830_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; uint64_t v___x_902_; size_t v___x_903_; lean_object* v___x_904_; size_t v___x_905_; size_t v___x_906_; uint8_t v___x_907_; 
lean_dec(v___x_898_);
v___x_901_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_902_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_903_ = lean_uint64_to_usize(v___x_902_);
v___x_904_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_897_, v___x_903_, v_e_828_, v___x_901_);
v___x_905_ = lean_ptr_addr(v___x_904_);
v___x_906_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_907_ = lean_usize_dec_eq(v___x_905_, v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_904_);
lean_ctor_set(v___x_908_, 1, v_a_830_);
return v___x_908_;
}
else
{
lean_object* v___x_909_; 
lean_dec_ref(v___x_904_);
lean_inc_ref(v_binderType_893_);
v___x_909_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_893_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v_a_911_; lean_object* v___x_912_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
v_a_911_ = lean_ctor_get(v___x_909_, 1);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_909_, 2);
lean_inc_ref(v_body_894_);
v___x_912_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_894_, v_a_829_, v_a_911_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v_a_913_; lean_object* v_a_914_; size_t v___x_915_; size_t v___x_916_; uint8_t v___x_917_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_913_);
v_a_914_ = lean_ctor_get(v___x_912_, 1);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_912_, 2);
v___x_915_ = lean_ptr_addr(v_binderType_893_);
v___x_916_ = lean_ptr_addr(v_a_910_);
v___x_917_ = lean_usize_dec_eq(v___x_915_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; lean_object* v___x_919_; 
lean_inc(v_binderName_892_);
v___x_918_ = l_Lean_Expr_lam___override(v_binderName_892_, v_a_910_, v_a_913_, v_binderInfo_895_);
v___x_919_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_918_, v_a_914_);
return v___x_919_;
}
else
{
size_t v___x_920_; size_t v___x_921_; uint8_t v___x_922_; 
v___x_920_ = lean_ptr_addr(v_body_894_);
v___x_921_ = lean_ptr_addr(v_a_913_);
v___x_922_ = lean_usize_dec_eq(v___x_920_, v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; 
lean_inc(v_binderName_892_);
v___x_923_ = l_Lean_Expr_lam___override(v_binderName_892_, v_a_910_, v_a_913_, v_binderInfo_895_);
v___x_924_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_923_, v_a_914_);
return v___x_924_;
}
else
{
uint8_t v___x_925_; 
v___x_925_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_895_, v_binderInfo_895_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; 
lean_inc(v_binderName_892_);
v___x_926_ = l_Lean_Expr_lam___override(v_binderName_892_, v_a_910_, v_a_913_, v_binderInfo_895_);
v___x_927_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_926_, v_a_914_);
return v___x_927_;
}
else
{
lean_object* v___x_928_; 
lean_dec(v_a_913_);
lean_dec(v_a_910_);
lean_inc_ref(v_e_828_);
v___x_928_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_914_);
return v___x_928_;
}
}
}
}
else
{
lean_dec(v_a_910_);
lean_dec_ref_known(v_e_828_, 3);
return v___x_912_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 3);
return v___x_909_;
}
}
}
}
case 7:
{
lean_object* v_binderName_929_; lean_object* v_binderType_930_; lean_object* v_body_931_; uint8_t v_binderInfo_932_; lean_object* v_map_933_; lean_object* v_set_934_; lean_object* v___x_935_; 
v_binderName_929_ = lean_ctor_get(v_e_828_, 0);
v_binderType_930_ = lean_ctor_get(v_e_828_, 1);
v_body_931_ = lean_ctor_get(v_e_828_, 2);
v_binderInfo_932_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*3 + 8);
v_map_933_ = lean_ctor_get(v_a_830_, 0);
v_set_934_ = lean_ctor_get(v_a_830_, 1);
v___x_935_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_933_, v_e_828_);
if (lean_obj_tag(v___x_935_) == 1)
{
lean_object* v_val_936_; lean_object* v___x_937_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_val_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v_val_936_);
lean_ctor_set(v___x_937_, 1, v_a_830_);
return v___x_937_;
}
else
{
lean_object* v___x_938_; uint64_t v___x_939_; size_t v___x_940_; lean_object* v___x_941_; size_t v___x_942_; size_t v___x_943_; uint8_t v___x_944_; 
lean_dec(v___x_935_);
v___x_938_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_939_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_940_ = lean_uint64_to_usize(v___x_939_);
v___x_941_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_934_, v___x_940_, v_e_828_, v___x_938_);
v___x_942_ = lean_ptr_addr(v___x_941_);
v___x_943_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_944_ = lean_usize_dec_eq(v___x_942_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_941_);
lean_ctor_set(v___x_945_, 1, v_a_830_);
return v___x_945_;
}
else
{
lean_object* v___x_946_; 
lean_dec_ref(v___x_941_);
lean_inc_ref(v_binderType_930_);
v___x_946_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_930_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v_a_948_; lean_object* v___x_949_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
v_a_948_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_946_, 2);
lean_inc_ref(v_body_931_);
v___x_949_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_931_, v_a_829_, v_a_948_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v_a_951_; size_t v___x_952_; size_t v___x_953_; uint8_t v___x_954_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
v_a_951_ = lean_ctor_get(v___x_949_, 1);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_949_, 2);
v___x_952_ = lean_ptr_addr(v_binderType_930_);
v___x_953_ = lean_ptr_addr(v_a_947_);
v___x_954_ = lean_usize_dec_eq(v___x_952_, v___x_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; lean_object* v___x_956_; 
lean_inc(v_binderName_929_);
v___x_955_ = l_Lean_Expr_forallE___override(v_binderName_929_, v_a_947_, v_a_950_, v_binderInfo_932_);
v___x_956_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_955_, v_a_951_);
return v___x_956_;
}
else
{
size_t v___x_957_; size_t v___x_958_; uint8_t v___x_959_; 
v___x_957_ = lean_ptr_addr(v_body_931_);
v___x_958_ = lean_ptr_addr(v_a_950_);
v___x_959_ = lean_usize_dec_eq(v___x_957_, v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v___x_961_; 
lean_inc(v_binderName_929_);
v___x_960_ = l_Lean_Expr_forallE___override(v_binderName_929_, v_a_947_, v_a_950_, v_binderInfo_932_);
v___x_961_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_960_, v_a_951_);
return v___x_961_;
}
else
{
uint8_t v___x_962_; 
v___x_962_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_932_, v_binderInfo_932_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_inc(v_binderName_929_);
v___x_963_ = l_Lean_Expr_forallE___override(v_binderName_929_, v_a_947_, v_a_950_, v_binderInfo_932_);
v___x_964_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_963_, v_a_951_);
return v___x_964_;
}
else
{
lean_object* v___x_965_; 
lean_dec(v_a_950_);
lean_dec(v_a_947_);
lean_inc_ref(v_e_828_);
v___x_965_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_951_);
return v___x_965_;
}
}
}
}
else
{
lean_dec(v_a_947_);
lean_dec_ref_known(v_e_828_, 3);
return v___x_949_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 3);
return v___x_946_;
}
}
}
}
case 8:
{
lean_object* v_declName_966_; lean_object* v_type_967_; lean_object* v_value_968_; lean_object* v_body_969_; uint8_t v_nondep_970_; lean_object* v_map_971_; lean_object* v_set_972_; lean_object* v___x_973_; 
v_declName_966_ = lean_ctor_get(v_e_828_, 0);
v_type_967_ = lean_ctor_get(v_e_828_, 1);
v_value_968_ = lean_ctor_get(v_e_828_, 2);
v_body_969_ = lean_ctor_get(v_e_828_, 3);
v_nondep_970_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*4 + 8);
v_map_971_ = lean_ctor_get(v_a_830_, 0);
v_set_972_ = lean_ctor_get(v_a_830_, 1);
v___x_973_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_971_, v_e_828_);
if (lean_obj_tag(v___x_973_) == 1)
{
lean_object* v_val_974_; lean_object* v___x_975_; 
lean_dec_ref_known(v_e_828_, 4);
v_val_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_val_974_);
lean_dec_ref_known(v___x_973_, 1);
v___x_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_975_, 0, v_val_974_);
lean_ctor_set(v___x_975_, 1, v_a_830_);
return v___x_975_;
}
else
{
lean_object* v___x_976_; uint64_t v___x_977_; size_t v___x_978_; lean_object* v___x_979_; size_t v___x_980_; size_t v___x_981_; uint8_t v___x_982_; 
lean_dec(v___x_973_);
v___x_976_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_977_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_978_ = lean_uint64_to_usize(v___x_977_);
v___x_979_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_972_, v___x_978_, v_e_828_, v___x_976_);
v___x_980_ = lean_ptr_addr(v___x_979_);
v___x_981_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_982_ = lean_usize_dec_eq(v___x_980_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; 
lean_dec_ref_known(v_e_828_, 4);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_979_);
lean_ctor_set(v___x_983_, 1, v_a_830_);
return v___x_983_;
}
else
{
lean_object* v___x_984_; 
lean_dec_ref(v___x_979_);
lean_inc_ref(v_type_967_);
v___x_984_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_type_967_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v_a_986_; lean_object* v___x_987_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
v_a_986_ = lean_ctor_get(v___x_984_, 1);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_984_, 2);
lean_inc_ref(v_value_968_);
v___x_987_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_value_968_, v_a_829_, v_a_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v_a_989_; lean_object* v___x_990_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
v_a_989_ = lean_ctor_get(v___x_987_, 1);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_987_, 2);
lean_inc_ref(v_body_969_);
v___x_990_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_969_, v_a_829_, v_a_989_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v_a_992_; size_t v___x_993_; size_t v___x_994_; uint8_t v___x_995_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
v_a_992_ = lean_ctor_get(v___x_990_, 1);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_990_, 2);
v___x_993_ = lean_ptr_addr(v_type_967_);
v___x_994_ = lean_ptr_addr(v_a_985_);
v___x_995_ = lean_usize_dec_eq(v___x_993_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; 
lean_inc(v_declName_966_);
v___x_996_ = l_Lean_Expr_letE___override(v_declName_966_, v_a_985_, v_a_988_, v_a_991_, v_nondep_970_);
v___x_997_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_996_, v_a_992_);
return v___x_997_;
}
else
{
size_t v___x_998_; size_t v___x_999_; uint8_t v___x_1000_; 
v___x_998_ = lean_ptr_addr(v_value_968_);
v___x_999_ = lean_ptr_addr(v_a_988_);
v___x_1000_ = lean_usize_dec_eq(v___x_998_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_inc(v_declName_966_);
v___x_1001_ = l_Lean_Expr_letE___override(v_declName_966_, v_a_985_, v_a_988_, v_a_991_, v_nondep_970_);
v___x_1002_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1001_, v_a_992_);
return v___x_1002_;
}
else
{
size_t v___x_1003_; size_t v___x_1004_; uint8_t v___x_1005_; 
v___x_1003_ = lean_ptr_addr(v_body_969_);
v___x_1004_ = lean_ptr_addr(v_a_991_);
v___x_1005_ = lean_usize_dec_eq(v___x_1003_, v___x_1004_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_inc(v_declName_966_);
v___x_1006_ = l_Lean_Expr_letE___override(v_declName_966_, v_a_985_, v_a_988_, v_a_991_, v_nondep_970_);
v___x_1007_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1006_, v_a_992_);
return v___x_1007_;
}
else
{
lean_object* v___x_1008_; 
lean_dec(v_a_991_);
lean_dec(v_a_988_);
lean_dec(v_a_985_);
lean_inc_ref(v_e_828_);
v___x_1008_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_992_);
return v___x_1008_;
}
}
}
}
else
{
lean_dec(v_a_988_);
lean_dec(v_a_985_);
lean_dec_ref_known(v_e_828_, 4);
return v___x_990_;
}
}
else
{
lean_dec(v_a_985_);
lean_dec_ref_known(v_e_828_, 4);
return v___x_987_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 4);
return v___x_984_;
}
}
}
}
case 10:
{
lean_object* v_data_1009_; lean_object* v_expr_1010_; lean_object* v_map_1011_; lean_object* v_set_1012_; lean_object* v___x_1013_; 
v_data_1009_ = lean_ctor_get(v_e_828_, 0);
v_expr_1010_ = lean_ctor_get(v_e_828_, 1);
v_map_1011_ = lean_ctor_get(v_a_830_, 0);
v_set_1012_ = lean_ctor_get(v_a_830_, 1);
v___x_1013_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1011_, v_e_828_);
if (lean_obj_tag(v___x_1013_) == 1)
{
lean_object* v_val_1014_; lean_object* v___x_1015_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_val_1014_);
lean_dec_ref_known(v___x_1013_, 1);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_val_1014_);
lean_ctor_set(v___x_1015_, 1, v_a_830_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; uint64_t v___x_1017_; size_t v___x_1018_; lean_object* v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; uint8_t v___x_1022_; 
lean_dec(v___x_1013_);
v___x_1016_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1017_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_1018_ = lean_uint64_to_usize(v___x_1017_);
v___x_1019_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1012_, v___x_1018_, v_e_828_, v___x_1016_);
v___x_1020_ = lean_ptr_addr(v___x_1019_);
v___x_1021_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1022_ = lean_usize_dec_eq(v___x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1019_);
lean_ctor_set(v___x_1023_, 1, v_a_830_);
return v___x_1023_;
}
else
{
lean_object* v___x_1024_; 
lean_dec_ref(v___x_1019_);
lean_inc_ref(v_expr_1010_);
v___x_1024_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_expr_1010_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v_a_1026_; size_t v___x_1027_; size_t v___x_1028_; uint8_t v___x_1029_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
v_a_1026_ = lean_ctor_get(v___x_1024_, 1);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1024_, 2);
v___x_1027_ = lean_ptr_addr(v_expr_1010_);
v___x_1028_ = lean_ptr_addr(v_a_1025_);
v___x_1029_ = lean_usize_dec_eq(v___x_1027_, v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
lean_inc(v_data_1009_);
v___x_1030_ = l_Lean_Expr_mdata___override(v_data_1009_, v_a_1025_);
v___x_1031_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1030_, v_a_1026_);
return v___x_1031_;
}
else
{
lean_object* v___x_1032_; 
lean_dec(v_a_1025_);
lean_inc_ref(v_e_828_);
v___x_1032_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_1026_);
return v___x_1032_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 2);
return v___x_1024_;
}
}
}
}
case 11:
{
lean_object* v_typeName_1033_; lean_object* v_idx_1034_; lean_object* v_struct_1035_; lean_object* v_map_1036_; lean_object* v_set_1037_; lean_object* v___x_1038_; 
v_typeName_1033_ = lean_ctor_get(v_e_828_, 0);
v_idx_1034_ = lean_ctor_get(v_e_828_, 1);
v_struct_1035_ = lean_ctor_get(v_e_828_, 2);
v_map_1036_ = lean_ctor_get(v_a_830_, 0);
v_set_1037_ = lean_ctor_get(v_a_830_, 1);
v___x_1038_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1036_, v_e_828_);
if (lean_obj_tag(v___x_1038_) == 1)
{
lean_object* v_val_1039_; lean_object* v___x_1040_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_val_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1040_, 0, v_val_1039_);
lean_ctor_set(v___x_1040_, 1, v_a_830_);
return v___x_1040_;
}
else
{
lean_object* v___x_1041_; uint64_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; size_t v___x_1045_; size_t v___x_1046_; uint8_t v___x_1047_; 
lean_dec(v___x_1038_);
v___x_1041_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1042_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_1043_ = lean_uint64_to_usize(v___x_1042_);
v___x_1044_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1037_, v___x_1043_, v_e_828_, v___x_1041_);
v___x_1045_ = lean_ptr_addr(v___x_1044_);
v___x_1046_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1047_ = lean_usize_dec_eq(v___x_1045_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1044_);
lean_ctor_set(v___x_1048_, 1, v_a_830_);
return v___x_1048_;
}
else
{
uint8_t v_checkProj_1049_; 
lean_dec_ref(v___x_1044_);
v_checkProj_1049_ = lean_ctor_get_uint8(v_a_829_, sizeof(void*)*1 + 1);
if (v_checkProj_1049_ == 0)
{
lean_object* v___x_1050_; 
lean_inc_ref(v_struct_1035_);
v___x_1050_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_struct_1035_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v_a_1052_; size_t v___x_1053_; size_t v___x_1054_; uint8_t v___x_1055_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
v_a_1052_ = lean_ctor_get(v___x_1050_, 1);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1050_, 2);
v___x_1053_ = lean_ptr_addr(v_struct_1035_);
v___x_1054_ = lean_ptr_addr(v_a_1051_);
v___x_1055_ = lean_usize_dec_eq(v___x_1053_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
lean_inc(v_idx_1034_);
lean_inc(v_typeName_1033_);
v___x_1056_ = l_Lean_Expr_proj___override(v_typeName_1033_, v_idx_1034_, v_a_1051_);
v___x_1057_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1056_, v_a_1052_);
return v___x_1057_;
}
else
{
lean_object* v___x_1058_; 
lean_dec(v_a_1051_);
lean_inc_ref(v_e_828_);
v___x_1058_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_1052_);
return v___x_1058_;
}
}
else
{
lean_dec_ref_known(v_e_828_, 3);
return v___x_1050_;
}
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_1059_ = lean_box(0);
v___x_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v_a_830_);
return v___x_1060_;
}
}
}
}
default: 
{
lean_object* v_map_1061_; lean_object* v_set_1062_; lean_object* v___x_1063_; 
v_map_1061_ = lean_ctor_get(v_a_830_, 0);
v_set_1062_ = lean_ctor_get(v_a_830_, 1);
v___x_1063_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_1062_, v_e_828_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1073_; 
lean_inc_ref(v_set_1062_);
lean_inc_ref(v_map_1061_);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; lean_object* v_unused_1075_; 
v_unused_1074_ = lean_ctor_get(v_a_830_, 1);
lean_dec(v_unused_1074_);
v_unused_1075_ = lean_ctor_get(v_a_830_, 0);
lean_dec(v_unused_1075_);
v___x_1065_ = v_a_830_;
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
else
{
lean_dec(v_a_830_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1067_ = lean_box(0);
lean_inc_ref(v_e_828_);
v___x_1068_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_1062_, v_e_828_, v___x_1067_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1068_);
v___x_1070_ = v___x_1065_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_map_1061_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_e_828_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
return v___x_1071_;
}
}
}
else
{
lean_object* v_val_1076_; lean_object* v_fst_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec_ref(v_e_828_);
v_val_1076_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_val_1076_);
lean_dec_ref_known(v___x_1063_, 1);
v_fst_1077_ = lean_ctor_get(v_val_1076_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_val_1076_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_val_1076_, 1);
lean_dec(v_unused_1085_);
v___x_1079_ = v_val_1076_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_fst_1077_);
lean_dec(v_val_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 1, v_a_830_);
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_fst_1077_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_a_830_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object* v_e_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1086_, v_a_1087_, v_a_1088_);
lean_dec_ref(v_a_1087_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object* v_00_u03b2_1090_, lean_object* v_x_1091_, lean_object* v_x_1092_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_1091_, v_x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object* v_00_u03b2_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(v_00_u03b2_1094_, v_x_1095_, v_x_1096_);
lean_dec_ref(v_x_1096_);
lean_dec_ref(v_x_1095_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object* v_00_u03b2_1098_, lean_object* v_m_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_1099_, v_a_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object* v_00_u03b2_1102_, lean_object* v_m_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(v_00_u03b2_1102_, v_m_1103_, v_a_1104_);
lean_dec_ref(v_a_1104_);
lean_dec_ref(v_m_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object* v_00_u03b2_1106_, lean_object* v_x_1107_, size_t v_x_1108_, lean_object* v_x_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_1107_, v_x_1108_, v_x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1111_, lean_object* v_x_1112_, lean_object* v_x_1113_, lean_object* v_x_1114_){
_start:
{
size_t v_x_11066__boxed_1115_; lean_object* v_res_1116_; 
v_x_11066__boxed_1115_ = lean_unbox_usize(v_x_1113_);
lean_dec(v_x_1113_);
v_res_1116_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(v_00_u03b2_1111_, v_x_1112_, v_x_11066__boxed_1115_, v_x_1114_);
lean_dec_ref(v_x_1114_);
lean_dec_ref(v_x_1112_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object* v_00_u03b2_1117_, lean_object* v_a_1118_, lean_object* v_x_1119_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_1118_, v_x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1121_, lean_object* v_a_1122_, lean_object* v_x_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(v_00_u03b2_1121_, v_a_1122_, v_x_1123_);
lean_dec(v_x_1123_);
lean_dec_ref(v_a_1122_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1125_, lean_object* v_keys_1126_, lean_object* v_vals_1127_, lean_object* v_heq_1128_, lean_object* v_i_1129_, lean_object* v_k_1130_){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_1126_, v_vals_1127_, v_i_1129_, v_k_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1132_, lean_object* v_keys_1133_, lean_object* v_vals_1134_, lean_object* v_heq_1135_, lean_object* v_i_1136_, lean_object* v_k_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(v_00_u03b2_1132_, v_keys_1133_, v_vals_1134_, v_heq_1135_, v_i_1136_, v_k_1137_);
lean_dec_ref(v_k_1137_);
lean_dec_ref(v_vals_1134_);
lean_dec_ref(v_keys_1133_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object* v_e_1139_, lean_object* v_cache_1140_, lean_object* v_ctx_1141_, lean_object* v_s_1142_){
_start:
{
lean_object* v___f_1143_; lean_object* v___f_1144_; lean_object* v___x_1145_; 
v___f_1143_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___f_1144_ = ((lean_object*)(l_Lean_Meta_Sym_instHashableAlphaKey___closed__0));
lean_inc_ref(v_e_1139_);
v___x_1145_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v___f_1143_, v___f_1144_, v_s_1142_, v_e_1139_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_cache_1140_);
lean_ctor_set(v___x_1146_, 1, v_s_1142_);
v___x_1147_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1139_, v_ctx_1141_, v___x_1146_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1157_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 1);
v_a_1149_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1151_ = v___x_1147_;
v_isShared_1152_ = v_isSharedCheck_1157_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1148_);
lean_inc(v_a_1149_);
lean_dec(v___x_1147_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1157_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v_set_1153_; lean_object* v___x_1155_; 
v_set_1153_ = lean_ctor_get(v_a_1148_, 1);
lean_inc_ref(v_set_1153_);
lean_dec(v_a_1148_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 1, v_set_1153_);
v___x_1155_ = v___x_1151_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1149_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_set_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1167_; 
v_a_1158_ = lean_ctor_get(v___x_1147_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; 
v_unused_1168_ = lean_ctor_get(v___x_1147_, 0);
lean_dec(v_unused_1168_);
v___x_1160_ = v___x_1147_;
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1147_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_map_1162_; lean_object* v_set_1163_; lean_object* v___x_1165_; 
v_map_1162_ = lean_ctor_get(v_a_1158_, 0);
lean_inc_ref(v_map_1162_);
v_set_1163_ = lean_ctor_get(v_a_1158_, 1);
lean_inc_ref(v_set_1163_);
lean_dec(v_a_1158_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 1, v_set_1163_);
lean_ctor_set(v___x_1160_, 0, v_map_1162_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_map_1162_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_set_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
else
{
lean_object* v_val_1169_; lean_object* v_fst_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec_ref(v_cache_1140_);
lean_dec_ref(v_e_1139_);
v_val_1169_ = lean_ctor_get(v___x_1145_, 0);
lean_inc(v_val_1169_);
lean_dec_ref_known(v___x_1145_, 1);
v_fst_1170_ = lean_ctor_get(v_val_1169_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_val_1169_);
if (v_isSharedCheck_1177_ == 0)
{
lean_object* v_unused_1178_; 
v_unused_1178_ = lean_ctor_get(v_val_1169_, 1);
lean_dec(v_unused_1178_);
v___x_1172_ = v_val_1169_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_fst_1170_);
lean_dec(v_val_1169_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 1, v_s_1142_);
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_fst_1170_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_s_1142_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object* v_e_1179_, lean_object* v_cache_1180_, lean_object* v_ctx_1181_, lean_object* v_s_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Meta_Sym_shareCommonAlpha(v_e_1179_, v_cache_1180_, v_ctx_1181_, v_s_1182_);
lean_dec_ref(v_ctx_1181_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object* v_e_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v___x_1186_; uint64_t v___x_1187_; size_t v___x_1188_; lean_object* v___x_1189_; size_t v___x_1190_; size_t v___x_1191_; uint8_t v___x_1192_; 
v___x_1186_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1187_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1184_);
v___x_1188_ = lean_uint64_to_usize(v___x_1187_);
v___x_1189_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1185_, v___x_1188_, v_e_1184_, v___x_1186_);
v___x_1190_ = lean_ptr_addr(v___x_1189_);
v___x_1191_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1192_ = lean_usize_dec_eq(v___x_1190_, v___x_1191_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; 
lean_dec_ref(v_e_1184_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1189_);
lean_ctor_set(v___x_1193_, 1, v_a_1185_);
return v___x_1193_;
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec_ref(v___x_1189_);
v___x_1194_ = lean_box(0);
lean_inc_ref(v_e_1184_);
v___x_1195_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1185_, v_e_1184_, v___x_1194_);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_e_1184_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object* v_e_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1197_, v_a_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object* v_e_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1201_, v_a_1202_, v_a_1203_);
lean_dec_ref(v_a_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object* v_e_1205_, lean_object* v_k_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v___f_1209_; lean_object* v___x_1210_; uint64_t v___x_1211_; size_t v___x_1212_; lean_object* v___x_1213_; size_t v___x_1214_; size_t v___x_1215_; uint8_t v___x_1216_; 
v___f_1209_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_1210_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1211_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1205_);
v___x_1212_ = lean_uint64_to_usize(v___x_1211_);
lean_inc_ref(v_a_1208_);
v___x_1213_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_1209_, v_a_1208_, v___x_1212_, v_e_1205_, v___x_1210_);
v___x_1214_ = lean_ptr_addr(v___x_1213_);
v___x_1215_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1216_ = lean_usize_dec_eq(v___x_1214_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_dec_ref(v_k_1206_);
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1213_);
lean_ctor_set(v___x_1217_, 1, v_a_1208_);
return v___x_1217_;
}
else
{
lean_object* v___x_1218_; 
lean_dec(v___x_1213_);
lean_inc_ref(v_a_1207_);
v___x_1218_ = lean_apply_2(v_k_1206_, v_a_1207_, v_a_1208_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v_a_1220_; lean_object* v___x_1221_; 
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1219_);
v_a_1220_ = lean_ctor_get(v___x_1218_, 1);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1218_, 2);
v___x_1221_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1219_, v_a_1220_);
return v___x_1221_;
}
else
{
return v___x_1218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object* v_e_1222_, lean_object* v_k_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(v_e_1222_, v_k_1223_, v_a_1224_, v_a_1225_);
lean_dec_ref(v_a_1224_);
return v_res_1226_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_unsigned_to_nat(16u);
v___x_1229_ = lean_mk_array(v___x_1228_, v___x_1227_);
return v___x_1229_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1230_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0);
v___x_1231_ = lean_unsigned_to_nat(0u);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set(v___x_1232_, 1, v___x_1230_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object* v_e_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
switch(lean_obj_tag(v_e_1233_))
{
case 4:
{
lean_object* v_declName_1236_; lean_object* v___x_1237_; uint64_t v___x_1238_; size_t v___x_1239_; lean_object* v___x_1240_; size_t v___x_1241_; size_t v___x_1242_; uint8_t v___x_1243_; 
v_declName_1236_ = lean_ctor_get(v_e_1233_, 0);
v___x_1237_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1238_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1239_ = lean_uint64_to_usize(v___x_1238_);
v___x_1240_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1239_, v_e_1233_, v___x_1237_);
v___x_1241_ = lean_ptr_addr(v___x_1240_);
v___x_1242_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1243_ = lean_usize_dec_eq(v___x_1241_, v___x_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1240_);
lean_ctor_set(v___x_1244_, 1, v_a_1235_);
return v___x_1244_;
}
else
{
uint8_t v___x_1245_; 
lean_dec_ref(v___x_1240_);
lean_inc(v_declName_1236_);
lean_inc_ref(v_a_1234_);
v___x_1245_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_1234_, v_declName_1236_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = lean_box(0);
lean_inc_ref(v_e_1233_);
v___x_1247_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1235_, v_e_1233_, v___x_1246_);
v___x_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_e_1233_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
return v___x_1248_;
}
else
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1249_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set(v___x_1250_, 1, v_a_1235_);
return v___x_1250_;
}
}
}
case 5:
{
lean_object* v_fn_1251_; lean_object* v_arg_1252_; lean_object* v___x_1253_; uint64_t v___x_1254_; size_t v___x_1255_; lean_object* v___x_1256_; size_t v___x_1257_; size_t v___x_1258_; uint8_t v___x_1259_; 
v_fn_1251_ = lean_ctor_get(v_e_1233_, 0);
v_arg_1252_ = lean_ctor_get(v_e_1233_, 1);
v___x_1253_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1254_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1255_ = lean_uint64_to_usize(v___x_1254_);
v___x_1256_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1255_, v_e_1233_, v___x_1253_);
v___x_1257_ = lean_ptr_addr(v___x_1256_);
v___x_1258_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1259_ = lean_usize_dec_eq(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1256_);
lean_ctor_set(v___x_1260_, 1, v_a_1235_);
return v___x_1260_;
}
else
{
lean_object* v___x_1261_; 
lean_dec_ref(v___x_1256_);
lean_inc_ref(v_fn_1251_);
v___x_1261_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_fn_1251_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v_a_1263_; lean_object* v___x_1264_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
v_a_1263_ = lean_ctor_get(v___x_1261_, 1);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1261_, 2);
lean_inc_ref(v_arg_1252_);
v___x_1264_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_arg_1252_, v_a_1234_, v_a_1263_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v_a_1266_; size_t v___x_1267_; size_t v___x_1268_; uint8_t v___x_1269_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
v_a_1266_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1264_, 2);
v___x_1267_ = lean_ptr_addr(v_fn_1251_);
v___x_1268_ = lean_ptr_addr(v_a_1262_);
v___x_1269_ = lean_usize_dec_eq(v___x_1267_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1270_ = l_Lean_Expr_app___override(v_a_1262_, v_a_1265_);
v___x_1271_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1270_, v_a_1266_);
return v___x_1271_;
}
else
{
size_t v___x_1272_; size_t v___x_1273_; uint8_t v___x_1274_; 
v___x_1272_ = lean_ptr_addr(v_arg_1252_);
v___x_1273_ = lean_ptr_addr(v_a_1265_);
v___x_1274_ = lean_usize_dec_eq(v___x_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1275_ = l_Lean_Expr_app___override(v_a_1262_, v_a_1265_);
v___x_1276_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1275_, v_a_1266_);
return v___x_1276_;
}
else
{
lean_object* v___x_1277_; 
lean_dec(v_a_1265_);
lean_dec(v_a_1262_);
v___x_1277_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1266_);
return v___x_1277_;
}
}
}
else
{
lean_dec(v_a_1262_);
lean_dec_ref_known(v_e_1233_, 2);
return v___x_1264_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 2);
return v___x_1261_;
}
}
}
case 6:
{
lean_object* v_binderName_1278_; lean_object* v_binderType_1279_; lean_object* v_body_1280_; uint8_t v_binderInfo_1281_; lean_object* v___x_1282_; uint64_t v___x_1283_; size_t v___x_1284_; lean_object* v___x_1285_; size_t v___x_1286_; size_t v___x_1287_; uint8_t v___x_1288_; 
v_binderName_1278_ = lean_ctor_get(v_e_1233_, 0);
v_binderType_1279_ = lean_ctor_get(v_e_1233_, 1);
v_body_1280_ = lean_ctor_get(v_e_1233_, 2);
v_binderInfo_1281_ = lean_ctor_get_uint8(v_e_1233_, sizeof(void*)*3 + 8);
v___x_1282_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1283_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1284_ = lean_uint64_to_usize(v___x_1283_);
v___x_1285_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1284_, v_e_1233_, v___x_1282_);
v___x_1286_ = lean_ptr_addr(v___x_1285_);
v___x_1287_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1288_ = lean_usize_dec_eq(v___x_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_dec_ref_known(v_e_1233_, 3);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1285_);
lean_ctor_set(v___x_1289_, 1, v_a_1235_);
return v___x_1289_;
}
else
{
lean_object* v___x_1290_; 
lean_dec_ref(v___x_1285_);
lean_inc_ref(v_binderType_1279_);
v___x_1290_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1279_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v_a_1292_; lean_object* v___x_1293_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
v_a_1292_ = lean_ctor_get(v___x_1290_, 1);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___x_1290_, 2);
lean_inc_ref(v_body_1280_);
v___x_1293_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1280_, v_a_1234_, v_a_1292_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; lean_object* v_a_1295_; size_t v___x_1296_; size_t v___x_1297_; uint8_t v___x_1298_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
v_a_1295_ = lean_ctor_get(v___x_1293_, 1);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1293_, 2);
v___x_1296_ = lean_ptr_addr(v_binderType_1279_);
v___x_1297_ = lean_ptr_addr(v_a_1291_);
v___x_1298_ = lean_usize_dec_eq(v___x_1296_, v___x_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_inc(v_binderName_1278_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1299_ = l_Lean_Expr_lam___override(v_binderName_1278_, v_a_1291_, v_a_1294_, v_binderInfo_1281_);
v___x_1300_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1299_, v_a_1295_);
return v___x_1300_;
}
else
{
size_t v___x_1301_; size_t v___x_1302_; uint8_t v___x_1303_; 
v___x_1301_ = lean_ptr_addr(v_body_1280_);
v___x_1302_ = lean_ptr_addr(v_a_1294_);
v___x_1303_ = lean_usize_dec_eq(v___x_1301_, v___x_1302_);
if (v___x_1303_ == 0)
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
lean_inc(v_binderName_1278_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1304_ = l_Lean_Expr_lam___override(v_binderName_1278_, v_a_1291_, v_a_1294_, v_binderInfo_1281_);
v___x_1305_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1304_, v_a_1295_);
return v___x_1305_;
}
else
{
uint8_t v___x_1306_; 
v___x_1306_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1281_, v_binderInfo_1281_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
lean_inc(v_binderName_1278_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1307_ = l_Lean_Expr_lam___override(v_binderName_1278_, v_a_1291_, v_a_1294_, v_binderInfo_1281_);
v___x_1308_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1307_, v_a_1295_);
return v___x_1308_;
}
else
{
lean_object* v___x_1309_; 
lean_dec(v_a_1294_);
lean_dec(v_a_1291_);
v___x_1309_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1295_);
return v___x_1309_;
}
}
}
}
else
{
lean_dec(v_a_1291_);
lean_dec_ref_known(v_e_1233_, 3);
return v___x_1293_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 3);
return v___x_1290_;
}
}
}
case 7:
{
lean_object* v_binderName_1310_; lean_object* v_binderType_1311_; lean_object* v_body_1312_; uint8_t v_binderInfo_1313_; lean_object* v___x_1314_; uint64_t v___x_1315_; size_t v___x_1316_; lean_object* v___x_1317_; size_t v___x_1318_; size_t v___x_1319_; uint8_t v___x_1320_; 
v_binderName_1310_ = lean_ctor_get(v_e_1233_, 0);
v_binderType_1311_ = lean_ctor_get(v_e_1233_, 1);
v_body_1312_ = lean_ctor_get(v_e_1233_, 2);
v_binderInfo_1313_ = lean_ctor_get_uint8(v_e_1233_, sizeof(void*)*3 + 8);
v___x_1314_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1315_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1316_ = lean_uint64_to_usize(v___x_1315_);
v___x_1317_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1316_, v_e_1233_, v___x_1314_);
v___x_1318_ = lean_ptr_addr(v___x_1317_);
v___x_1319_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1320_ = lean_usize_dec_eq(v___x_1318_, v___x_1319_);
if (v___x_1320_ == 0)
{
lean_object* v___x_1321_; 
lean_dec_ref_known(v_e_1233_, 3);
v___x_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1317_);
lean_ctor_set(v___x_1321_, 1, v_a_1235_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; 
lean_dec_ref(v___x_1317_);
lean_inc_ref(v_binderType_1311_);
v___x_1322_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1311_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v_a_1324_; lean_object* v___x_1325_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
v_a_1324_ = lean_ctor_get(v___x_1322_, 1);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1322_, 2);
lean_inc_ref(v_body_1312_);
v___x_1325_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1312_, v_a_1234_, v_a_1324_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_a_1327_; size_t v___x_1328_; size_t v___x_1329_; uint8_t v___x_1330_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
v_a_1327_ = lean_ctor_get(v___x_1325_, 1);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1325_, 2);
v___x_1328_ = lean_ptr_addr(v_binderType_1311_);
v___x_1329_ = lean_ptr_addr(v_a_1323_);
v___x_1330_ = lean_usize_dec_eq(v___x_1328_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
lean_inc(v_binderName_1310_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1331_ = l_Lean_Expr_forallE___override(v_binderName_1310_, v_a_1323_, v_a_1326_, v_binderInfo_1313_);
v___x_1332_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1331_, v_a_1327_);
return v___x_1332_;
}
else
{
size_t v___x_1333_; size_t v___x_1334_; uint8_t v___x_1335_; 
v___x_1333_ = lean_ptr_addr(v_body_1312_);
v___x_1334_ = lean_ptr_addr(v_a_1326_);
v___x_1335_ = lean_usize_dec_eq(v___x_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_inc(v_binderName_1310_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1336_ = l_Lean_Expr_forallE___override(v_binderName_1310_, v_a_1323_, v_a_1326_, v_binderInfo_1313_);
v___x_1337_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1336_, v_a_1327_);
return v___x_1337_;
}
else
{
uint8_t v___x_1338_; 
v___x_1338_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1313_, v_binderInfo_1313_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_inc(v_binderName_1310_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1339_ = l_Lean_Expr_forallE___override(v_binderName_1310_, v_a_1323_, v_a_1326_, v_binderInfo_1313_);
v___x_1340_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1339_, v_a_1327_);
return v___x_1340_;
}
else
{
lean_object* v___x_1341_; 
lean_dec(v_a_1326_);
lean_dec(v_a_1323_);
v___x_1341_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1327_);
return v___x_1341_;
}
}
}
}
else
{
lean_dec(v_a_1323_);
lean_dec_ref_known(v_e_1233_, 3);
return v___x_1325_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 3);
return v___x_1322_;
}
}
}
case 8:
{
lean_object* v_declName_1342_; lean_object* v_type_1343_; lean_object* v_value_1344_; lean_object* v_body_1345_; uint8_t v_nondep_1346_; lean_object* v___x_1347_; uint64_t v___x_1348_; size_t v___x_1349_; lean_object* v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; uint8_t v___x_1353_; 
v_declName_1342_ = lean_ctor_get(v_e_1233_, 0);
v_type_1343_ = lean_ctor_get(v_e_1233_, 1);
v_value_1344_ = lean_ctor_get(v_e_1233_, 2);
v_body_1345_ = lean_ctor_get(v_e_1233_, 3);
v_nondep_1346_ = lean_ctor_get_uint8(v_e_1233_, sizeof(void*)*4 + 8);
v___x_1347_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1348_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1349_ = lean_uint64_to_usize(v___x_1348_);
v___x_1350_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1349_, v_e_1233_, v___x_1347_);
v___x_1351_ = lean_ptr_addr(v___x_1350_);
v___x_1352_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1353_ = lean_usize_dec_eq(v___x_1351_, v___x_1352_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; 
lean_dec_ref_known(v_e_1233_, 4);
v___x_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1350_);
lean_ctor_set(v___x_1354_, 1, v_a_1235_);
return v___x_1354_;
}
else
{
lean_object* v___x_1355_; 
lean_dec_ref(v___x_1350_);
lean_inc_ref(v_type_1343_);
v___x_1355_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_type_1343_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_a_1357_; lean_object* v___x_1358_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
v_a_1357_ = lean_ctor_get(v___x_1355_, 1);
lean_inc(v_a_1357_);
lean_dec_ref_known(v___x_1355_, 2);
lean_inc_ref(v_value_1344_);
v___x_1358_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_value_1344_, v_a_1234_, v_a_1357_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v_a_1360_; lean_object* v___x_1361_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
v_a_1360_ = lean_ctor_get(v___x_1358_, 1);
lean_inc(v_a_1360_);
lean_dec_ref_known(v___x_1358_, 2);
lean_inc_ref(v_body_1345_);
v___x_1361_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1345_, v_a_1234_, v_a_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v_a_1363_; size_t v___x_1364_; size_t v___x_1365_; uint8_t v___x_1366_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
v_a_1363_ = lean_ctor_get(v___x_1361_, 1);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1361_, 2);
v___x_1364_ = lean_ptr_addr(v_type_1343_);
v___x_1365_ = lean_ptr_addr(v_a_1356_);
v___x_1366_ = lean_usize_dec_eq(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_inc(v_declName_1342_);
lean_dec_ref_known(v_e_1233_, 4);
v___x_1367_ = l_Lean_Expr_letE___override(v_declName_1342_, v_a_1356_, v_a_1359_, v_a_1362_, v_nondep_1346_);
v___x_1368_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1367_, v_a_1363_);
return v___x_1368_;
}
else
{
size_t v___x_1369_; size_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1369_ = lean_ptr_addr(v_value_1344_);
v___x_1370_ = lean_ptr_addr(v_a_1359_);
v___x_1371_ = lean_usize_dec_eq(v___x_1369_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
lean_inc(v_declName_1342_);
lean_dec_ref_known(v_e_1233_, 4);
v___x_1372_ = l_Lean_Expr_letE___override(v_declName_1342_, v_a_1356_, v_a_1359_, v_a_1362_, v_nondep_1346_);
v___x_1373_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1372_, v_a_1363_);
return v___x_1373_;
}
else
{
size_t v___x_1374_; size_t v___x_1375_; uint8_t v___x_1376_; 
v___x_1374_ = lean_ptr_addr(v_body_1345_);
v___x_1375_ = lean_ptr_addr(v_a_1362_);
v___x_1376_ = lean_usize_dec_eq(v___x_1374_, v___x_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_inc(v_declName_1342_);
lean_dec_ref_known(v_e_1233_, 4);
v___x_1377_ = l_Lean_Expr_letE___override(v_declName_1342_, v_a_1356_, v_a_1359_, v_a_1362_, v_nondep_1346_);
v___x_1378_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1377_, v_a_1363_);
return v___x_1378_;
}
else
{
lean_object* v___x_1379_; 
lean_dec(v_a_1362_);
lean_dec(v_a_1359_);
lean_dec(v_a_1356_);
v___x_1379_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1363_);
return v___x_1379_;
}
}
}
}
else
{
lean_dec(v_a_1359_);
lean_dec(v_a_1356_);
lean_dec_ref_known(v_e_1233_, 4);
return v___x_1361_;
}
}
else
{
lean_dec(v_a_1356_);
lean_dec_ref_known(v_e_1233_, 4);
return v___x_1358_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 4);
return v___x_1355_;
}
}
}
case 10:
{
lean_object* v_data_1380_; lean_object* v_expr_1381_; lean_object* v___x_1382_; uint64_t v___x_1383_; size_t v___x_1384_; lean_object* v___x_1385_; size_t v___x_1386_; size_t v___x_1387_; uint8_t v___x_1388_; 
v_data_1380_ = lean_ctor_get(v_e_1233_, 0);
v_expr_1381_ = lean_ctor_get(v_e_1233_, 1);
v___x_1382_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1383_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1384_ = lean_uint64_to_usize(v___x_1383_);
v___x_1385_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1384_, v_e_1233_, v___x_1382_);
v___x_1386_ = lean_ptr_addr(v___x_1385_);
v___x_1387_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1388_ = lean_usize_dec_eq(v___x_1386_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec_ref_known(v_e_1233_, 2);
v___x_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1385_);
lean_ctor_set(v___x_1389_, 1, v_a_1235_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; 
lean_dec_ref(v___x_1385_);
lean_inc_ref(v_expr_1381_);
v___x_1390_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_expr_1381_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v_a_1392_; size_t v___x_1393_; size_t v___x_1394_; uint8_t v___x_1395_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
v_a_1392_ = lean_ctor_get(v___x_1390_, 1);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1390_, 2);
v___x_1393_ = lean_ptr_addr(v_expr_1381_);
v___x_1394_ = lean_ptr_addr(v_a_1391_);
v___x_1395_ = lean_usize_dec_eq(v___x_1393_, v___x_1394_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_inc(v_data_1380_);
lean_dec_ref_known(v_e_1233_, 2);
v___x_1396_ = l_Lean_Expr_mdata___override(v_data_1380_, v_a_1391_);
v___x_1397_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1396_, v_a_1392_);
return v___x_1397_;
}
else
{
lean_object* v___x_1398_; 
lean_dec(v_a_1391_);
v___x_1398_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1392_);
return v___x_1398_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 2);
return v___x_1390_;
}
}
}
case 11:
{
lean_object* v_typeName_1399_; lean_object* v_idx_1400_; lean_object* v_struct_1401_; lean_object* v___x_1402_; uint64_t v___x_1403_; size_t v___x_1404_; lean_object* v___x_1405_; size_t v___x_1406_; size_t v___x_1407_; uint8_t v___x_1408_; 
v_typeName_1399_ = lean_ctor_get(v_e_1233_, 0);
v_idx_1400_ = lean_ctor_get(v_e_1233_, 1);
v_struct_1401_ = lean_ctor_get(v_e_1233_, 2);
v___x_1402_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1403_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1233_);
v___x_1404_ = lean_uint64_to_usize(v___x_1403_);
v___x_1405_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1235_, v___x_1404_, v_e_1233_, v___x_1402_);
v___x_1406_ = lean_ptr_addr(v___x_1405_);
v___x_1407_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1408_ = lean_usize_dec_eq(v___x_1406_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; 
lean_dec_ref_known(v_e_1233_, 3);
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1405_);
lean_ctor_set(v___x_1409_, 1, v_a_1235_);
return v___x_1409_;
}
else
{
uint8_t v_checkProj_1410_; 
lean_dec_ref(v___x_1405_);
v_checkProj_1410_ = lean_ctor_get_uint8(v_a_1234_, sizeof(void*)*1 + 1);
if (v_checkProj_1410_ == 0)
{
lean_object* v___x_1411_; 
lean_inc_ref(v_struct_1401_);
v___x_1411_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_struct_1401_, v_a_1234_, v_a_1235_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v_a_1413_; size_t v___x_1414_; size_t v___x_1415_; uint8_t v___x_1416_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
v_a_1413_ = lean_ctor_get(v___x_1411_, 1);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1411_, 2);
v___x_1414_ = lean_ptr_addr(v_struct_1401_);
v___x_1415_ = lean_ptr_addr(v_a_1412_);
v___x_1416_ = lean_usize_dec_eq(v___x_1414_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_inc(v_idx_1400_);
lean_inc(v_typeName_1399_);
lean_dec_ref_known(v_e_1233_, 3);
v___x_1417_ = l_Lean_Expr_proj___override(v_typeName_1399_, v_idx_1400_, v_a_1412_);
v___x_1418_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1417_, v_a_1413_);
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; 
lean_dec(v_a_1412_);
v___x_1419_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1413_);
return v___x_1419_;
}
}
else
{
lean_dec_ref_known(v_e_1233_, 3);
return v___x_1411_;
}
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_dec_ref_known(v_e_1233_, 3);
v___x_1420_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v_a_1235_);
return v___x_1421_;
}
}
}
default: 
{
lean_object* v___x_1422_; 
v___x_1422_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1233_, v_a_1235_);
return v___x_1422_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object* v_e_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1423_, v_a_1424_, v_a_1425_);
lean_dec_ref(v_a_1424_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object* v_e_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1427_, v_a_1428_, v_a_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object* v_e_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_Meta_Sym_shareCommonAlphaInc(v_e_1431_, v_a_1432_, v_a_1433_);
lean_dec_ref(v_a_1432_);
return v_res_1434_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
}
#ifdef __cplusplus
}
#endif
