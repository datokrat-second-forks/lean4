// Lean compiler output
// Module: Lean.Meta.Match.CaseValues
// Imports: public import Lean.Meta.Basic public import Lean.Meta.Tactic.FVarSubst import Lean.Meta.Tactic.Subst
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normLitValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendTagSuffix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_intro1__(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reflects_beq"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(96, 60, 101, 96, 44, 27, 45, 128)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__1_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__3_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__5 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(80, 75, 231, 118, 66, 61, 134, 150)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 112, 2, 80, 206, 176, 118, 91)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__6_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__8_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__9 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__10 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__10_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__11 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reflects_beq_val"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__12 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__10_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__12_value),LEAN_SCALAR_PTR_LITERAL(228, 103, 88, 93, 194, 116, 183, 111)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__11_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__13_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__14 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__15 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__15_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__16 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__15_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__12_value),LEAN_SCALAR_PTR_LITERAL(126, 239, 59, 244, 50, 162, 188, 118)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__16_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__17_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__18 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__19 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__19_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__20 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__19_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(1, 132, 123, 118, 211, 98, 248, 161)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 216, 109, 211, 200, 160, 85, 19)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__20_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__21_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__22 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__22_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__23 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__23_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__24 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__23_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 69, 232, 143, 189, 253, 251, 226)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 214, 253, 187, 1, 142, 144, 170)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__24_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__25_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__26 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__27 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__27_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__28 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__27_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(251, 67, 19, 148, 155, 58, 153, 168)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 166, 165, 208, 233, 202, 135, 40)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__28_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__29_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__30 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__30_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__31 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__31_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__32 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__32_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__31_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(99, 38, 153, 186, 241, 146, 247, 181)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 34, 184, 202, 31, 201, 248, 27)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__32_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__33_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__34 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__34_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__35 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__35_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__35_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__36 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__36_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__35_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(171, 107, 248, 36, 200, 249, 152, 99)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 93, 226, 81, 27, 55, 66, 90)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__36_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__37_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__38 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__38_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__39 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__39_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__39_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__40 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__40_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__39_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 129, 74, 87, 236, 194, 167, 197)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 106, 19, 28, 231, 195, 53, 209)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__40_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__41_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__42 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__42_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__43 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__43_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__38_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__43_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__44 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__44_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__34_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__44_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__45 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__45_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__30_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__45_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__46 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__46_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__26_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__46_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__47 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__47_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__22_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__47_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__48 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__48_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__18_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__48_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__49 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__49_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__14_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__49_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__50 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__50_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__9_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__50_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__51 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__51_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__4_value),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__51_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__52 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__52_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__52_value;
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchValue"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems___closed__7_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 90, 239, 50, 101, 126, 224, 231)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Reflects"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(48, 156, 112, 186, 76, 88, 65, 227)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "caseValue"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 144, 12, 65, 131, 233, 76, 239)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedCaseValuesSubgoal_default = (const lean_object*)&l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedCaseValuesSubgoal = (const lean_object*)&l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "caseValues"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 31, 83, 94, 219, 75, 195, 44)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "list of values must not be empty"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5;
static const lean_string_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "case"};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__6_value),LEAN_SCALAR_PTR_LITERAL(201, 154, 204, 143, 225, 235, 23, 70)}};
static const lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__7 = (const lean_object*)&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseValues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg(lean_object* v_x_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_saveState___redArg(v___y_134_, v___y_136_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_140_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref_known(v___x_138_, 1);
lean_inc(v___y_136_);
lean_inc_ref(v___y_135_);
lean_inc(v___y_134_);
lean_inc_ref(v___y_133_);
v___x_140_ = lean_apply_5(v_x_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, lean_box(0));
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_149_; 
lean_dec(v_a_139_);
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_149_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v_a_141_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 0, v___x_145_);
v___x_147_ = v___x_143_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_180_; 
v_a_150_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_180_ == 0)
{
v___x_152_ = v___x_140_;
v_isShared_153_ = v_isSharedCheck_180_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_140_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_180_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
uint8_t v___x_154_; 
v___x_154_ = l_Lean_Exception_isInterrupt(v_a_150_);
if (v___x_154_ == 0)
{
uint8_t v___x_155_; 
lean_inc(v_a_150_);
v___x_155_ = l_Lean_Exception_isRuntime(v_a_150_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
lean_del_object(v___x_152_);
lean_dec(v_a_150_);
v___x_156_ = l_Lean_Meta_SavedState_restore___redArg(v_a_139_, v___y_134_, v___y_136_);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_164_ == 0)
{
lean_object* v_unused_165_; 
v_unused_165_ = lean_ctor_get(v___x_156_, 0);
lean_dec(v_unused_165_);
v___x_158_ = v___x_156_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_dec(v___x_156_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
else
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
v_a_166_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_173_ == 0)
{
v___x_168_ = v___x_156_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_156_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_a_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
else
{
lean_object* v___x_175_; 
lean_dec(v_a_139_);
if (v_isShared_153_ == 0)
{
v___x_175_ = v___x_152_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_150_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v___x_178_; 
lean_dec(v_a_139_);
if (v_isShared_153_ == 0)
{
v___x_178_ = v___x_152_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_150_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref(v_x_132_);
v_a_181_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_138_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_138_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg___boxed(lean_object* v_x_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg(v_x_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1(lean_object* v_00_u03b1_196_, lean_object* v_x_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg(v_x_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___boxed(lean_object* v_00_u03b1_204_, lean_object* v_x_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1(v_00_u03b1_204_, v_x_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg(lean_object* v_x_212_, lean_object* v_x_213_){
_start:
{
if (lean_obj_tag(v_x_213_) == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
else
{
lean_object* v_head_215_; lean_object* v_tail_216_; lean_object* v_fst_217_; lean_object* v_snd_218_; uint8_t v___x_219_; 
v_head_215_ = lean_ctor_get(v_x_213_, 0);
v_tail_216_ = lean_ctor_get(v_x_213_, 1);
v_fst_217_ = lean_ctor_get(v_head_215_, 0);
v_snd_218_ = lean_ctor_get(v_head_215_, 1);
v___x_219_ = lean_name_eq(v_x_212_, v_fst_217_);
if (v___x_219_ == 0)
{
v_x_213_ = v_tail_216_;
goto _start;
}
else
{
lean_object* v___x_221_; 
lean_inc(v_snd_218_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_snd_218_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg___boxed(lean_object* v_x_222_, lean_object* v_x_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg(v_x_222_, v_x_223_);
lean_dec(v_x_223_);
lean_dec(v_x_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f(lean_object* v_x_235_, lean_object* v_value_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v___x_245_; 
lean_inc(v_a_240_);
lean_inc_ref(v_a_239_);
lean_inc(v_a_238_);
lean_inc_ref(v_a_237_);
lean_inc_ref(v_x_235_);
v___x_245_ = lean_infer_type(v_x_235_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
v___x_247_ = l_Lean_Meta_whnfR(v_a_246_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_345_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_345_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_345_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_345_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_Expr_getAppFn(v_a_248_);
lean_dec(v_a_248_);
if (lean_obj_tag(v___x_252_) == 4)
{
lean_object* v_declName_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_declName_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_declName_253_);
lean_dec_ref_known(v___x_252_, 2);
v___x_254_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_valueTestTheorems));
v___x_255_ = l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg(v_declName_253_, v___x_254_);
lean_dec(v_declName_253_);
if (lean_obj_tag(v___x_255_) == 1)
{
lean_object* v_val_256_; lean_object* v___x_257_; lean_object* v_env_258_; lean_object* v___x_259_; uint8_t v___x_265_; uint8_t v___x_266_; 
v_val_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc_n(v_val_256_, 2);
lean_dec_ref_known(v___x_255_, 1);
v___x_257_ = lean_st_ref_get(v_a_240_);
v_env_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc_ref(v_env_258_);
lean_dec(v___x_257_);
v___x_259_ = lean_st_ref_get(v_a_240_);
v___x_265_ = 1;
v___x_266_ = l_Lean_Environment_contains(v_env_258_, v_val_256_, v___x_265_);
if (v___x_266_ == 0)
{
lean_dec(v___x_259_);
lean_dec(v_val_256_);
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
goto v___jp_260_;
}
else
{
lean_object* v_env_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v_env_267_ = lean_ctor_get(v___x_259_, 0);
lean_inc_ref(v_env_267_);
lean_dec(v___x_259_);
v___x_268_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2));
v___x_269_ = l_Lean_Environment_contains(v_env_267_, v___x_268_, v___x_266_);
if (v___x_269_ == 0)
{
lean_dec(v_val_256_);
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
goto v___jp_260_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
lean_del_object(v___x_250_);
v___x_270_ = lean_unsigned_to_nat(2u);
v___x_271_ = lean_mk_empty_array_with_capacity(v___x_270_);
v___x_272_ = lean_array_push(v___x_271_, v_x_235_);
v___x_273_ = lean_array_push(v___x_272_, v_value_236_);
v___x_274_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_274_, 0, v_val_256_);
lean_closure_set(v___x_274_, 1, v___x_273_);
v___x_275_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__1___redArg(v___x_274_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_328_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_328_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_328_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_328_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
if (lean_obj_tag(v_a_276_) == 1)
{
lean_object* v_val_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_323_; 
lean_del_object(v___x_278_);
v_val_280_ = lean_ctor_get(v_a_276_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v_a_276_);
if (v_isSharedCheck_323_ == 0)
{
v___x_282_ = v_a_276_;
v_isShared_283_ = v_isSharedCheck_323_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_val_280_);
lean_dec(v_a_276_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_323_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; 
lean_inc(v_a_240_);
lean_inc_ref(v_a_239_);
lean_inc(v_a_238_);
lean_inc_ref(v_a_237_);
lean_inc(v_val_280_);
v___x_284_ = lean_infer_type(v_val_280_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_285_, v_a_238_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_306_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_306_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_306_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_306_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = l_Lean_Expr_cleanupAnnotations(v_a_287_);
lean_dec(v_a_287_);
v___x_292_ = l_Lean_Expr_isApp(v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref(v___x_291_);
lean_del_object(v___x_289_);
lean_del_object(v___x_282_);
lean_dec(v_val_280_);
goto v___jp_242_;
}
else
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = l_Lean_Expr_appFnCleanup___redArg(v___x_291_);
lean_dec_ref(v___x_291_);
v___x_294_ = l_Lean_Expr_isApp(v___x_293_);
if (v___x_294_ == 0)
{
lean_dec_ref(v___x_293_);
lean_del_object(v___x_289_);
lean_del_object(v___x_282_);
lean_dec(v_val_280_);
goto v___jp_242_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = l_Lean_Expr_appFnCleanup___redArg(v___x_293_);
v___x_296_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__4));
v___x_297_ = l_Lean_Expr_isConstOf(v___x_295_, v___x_296_);
lean_dec_ref(v___x_295_);
if (v___x_297_ == 0)
{
lean_dec_ref(v___x_293_);
lean_del_object(v___x_289_);
lean_del_object(v___x_282_);
lean_dec(v_val_280_);
goto v___jp_242_;
}
else
{
lean_object* v_arg_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v_arg_298_ = lean_ctor_get(v___x_293_, 1);
lean_inc_ref(v_arg_298_);
lean_dec_ref(v___x_293_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v_arg_298_);
lean_ctor_set(v___x_299_, 1, v_val_280_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_299_);
v___x_301_ = v___x_282_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_299_);
v___x_301_ = v_reuseFailAlloc_305_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_301_);
v___x_303_ = v___x_289_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_del_object(v___x_282_);
lean_dec(v_val_280_);
v_a_307_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_286_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_286_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_del_object(v___x_282_);
lean_dec(v_val_280_);
v_a_315_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_284_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_284_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
else
{
lean_object* v___x_324_; lean_object* v___x_326_; 
lean_dec(v_a_276_);
v___x_324_ = lean_box(0);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_324_);
v___x_326_ = v___x_278_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
v_a_329_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_275_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_275_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
v___jp_260_:
{
lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_261_ = lean_box(0);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_261_);
v___x_263_ = v___x_250_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_339_; 
lean_dec(v___x_255_);
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
v___x_337_ = lean_box(0);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_337_);
v___x_339_ = v___x_250_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_343_; 
lean_dec_ref(v___x_252_);
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
v___x_341_ = lean_box(0);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_341_);
v___x_343_ = v___x_250_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
v_a_346_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_247_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_247_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_value_236_);
lean_dec_ref(v_x_235_);
v_a_354_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_245_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_245_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
v___jp_242_:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_box(0);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___boxed(lean_object* v_x_362_, lean_object* v_value_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f(v_x_362_, v_value_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0(lean_object* v_00_u03b2_370_, lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___redArg(v_x_371_, v_x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0___boxed(lean_object* v_00_u03b2_374_, lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_List_lookup___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f_spec__0(v_00_u03b2_374_, v_x_375_, v_x_376_);
lean_dec(v_x_376_);
lean_dec(v_x_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg(lean_object* v_mvarId_378_, lean_object* v_x_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_378_, v_x_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
v_a_394_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_385_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_385_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg___boxed(lean_object* v_mvarId_402_, lean_object* v_x_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg(v_mvarId_402_, v_x_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1(lean_object* v_00_u03b1_410_, lean_object* v_mvarId_411_, lean_object* v_x_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg(v_mvarId_411_, v_x_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___boxed(lean_object* v_00_u03b1_419_, lean_object* v_mvarId_420_, lean_object* v_x_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1(v_00_u03b1_419_, v_mvarId_420_, v_x_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_x_428_, lean_object* v_x_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
lean_object* v_ks_432_; lean_object* v_vs_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_457_; 
v_ks_432_ = lean_ctor_get(v_x_428_, 0);
v_vs_433_ = lean_ctor_get(v_x_428_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_457_ == 0)
{
v___x_435_ = v_x_428_;
v_isShared_436_ = v_isSharedCheck_457_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_vs_433_);
lean_inc(v_ks_432_);
lean_dec(v_x_428_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_457_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_array_get_size(v_ks_432_);
v___x_438_ = lean_nat_dec_lt(v_x_429_, v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
lean_dec(v_x_429_);
v___x_439_ = lean_array_push(v_ks_432_, v_x_430_);
v___x_440_ = lean_array_push(v_vs_433_, v_x_431_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_440_);
lean_ctor_set(v___x_435_, 0, v___x_439_);
v___x_442_ = v___x_435_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
else
{
lean_object* v_k_x27_444_; uint8_t v___x_445_; 
v_k_x27_444_ = lean_array_fget_borrowed(v_ks_432_, v_x_429_);
v___x_445_ = l_Lean_instBEqMVarId_beq(v_x_430_, v_k_x27_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_447_; 
if (v_isShared_436_ == 0)
{
v___x_447_ = v___x_435_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_ks_432_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_vs_433_);
v___x_447_ = v_reuseFailAlloc_451_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_unsigned_to_nat(1u);
v___x_449_ = lean_nat_add(v_x_429_, v___x_448_);
lean_dec(v_x_429_);
v_x_428_ = v___x_447_;
v_x_429_ = v___x_449_;
goto _start;
}
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_452_ = lean_array_fset(v_ks_432_, v_x_429_, v_x_430_);
v___x_453_ = lean_array_fset(v_vs_433_, v_x_429_, v_x_431_);
lean_dec(v_x_429_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_453_);
lean_ctor_set(v___x_435_, 0, v___x_452_);
v___x_455_ = v___x_435_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_n_458_, lean_object* v_k_459_, lean_object* v_v_460_){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_n_458_, v___x_461_, v_k_459_, v_v_460_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(lean_object* v_x_464_, size_t v_x_465_, size_t v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
lean_object* v_es_469_; size_t v___x_470_; size_t v___x_471_; lean_object* v_j_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v_es_469_ = lean_ctor_get(v_x_464_, 0);
v___x_470_ = ((size_t)31ULL);
v___x_471_ = lean_usize_land(v_x_465_, v___x_470_);
v_j_472_ = lean_usize_to_nat(v___x_471_);
v___x_473_ = lean_array_get_size(v_es_469_);
v___x_474_ = lean_nat_dec_lt(v_j_472_, v___x_473_);
if (v___x_474_ == 0)
{
lean_dec(v_j_472_);
lean_dec(v_x_468_);
lean_dec(v_x_467_);
return v_x_464_;
}
else
{
lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_513_; 
lean_inc_ref(v_es_469_);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_464_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; 
v_unused_514_ = lean_ctor_get(v_x_464_, 0);
lean_dec(v_unused_514_);
v___x_476_ = v_x_464_;
v_isShared_477_ = v_isSharedCheck_513_;
goto v_resetjp_475_;
}
else
{
lean_dec(v_x_464_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_513_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v_v_478_; lean_object* v___x_479_; lean_object* v_xs_x27_480_; lean_object* v___y_482_; 
v_v_478_ = lean_array_fget(v_es_469_, v_j_472_);
v___x_479_ = lean_box(0);
v_xs_x27_480_ = lean_array_fset(v_es_469_, v_j_472_, v___x_479_);
switch(lean_obj_tag(v_v_478_))
{
case 0:
{
lean_object* v_key_487_; lean_object* v_val_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_498_; 
v_key_487_ = lean_ctor_get(v_v_478_, 0);
v_val_488_ = lean_ctor_get(v_v_478_, 1);
v_isSharedCheck_498_ = !lean_is_exclusive(v_v_478_);
if (v_isSharedCheck_498_ == 0)
{
v___x_490_ = v_v_478_;
v_isShared_491_ = v_isSharedCheck_498_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_val_488_);
lean_inc(v_key_487_);
lean_dec(v_v_478_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_498_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
uint8_t v___x_492_; 
v___x_492_ = l_Lean_instBEqMVarId_beq(v_x_467_, v_key_487_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; 
lean_del_object(v___x_490_);
v___x_493_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_487_, v_val_488_, v_x_467_, v_x_468_);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
v___y_482_ = v___x_494_;
goto v___jp_481_;
}
else
{
lean_object* v___x_496_; 
lean_dec(v_val_488_);
lean_dec(v_key_487_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 1, v_x_468_);
lean_ctor_set(v___x_490_, 0, v_x_467_);
v___x_496_ = v___x_490_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_x_467_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_x_468_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
v___y_482_ = v___x_496_;
goto v___jp_481_;
}
}
}
}
case 1:
{
lean_object* v_node_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_511_; 
v_node_499_ = lean_ctor_get(v_v_478_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_v_478_);
if (v_isSharedCheck_511_ == 0)
{
v___x_501_ = v_v_478_;
v_isShared_502_ = v_isSharedCheck_511_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_node_499_);
lean_dec(v_v_478_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_511_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
size_t v___x_503_; size_t v___x_504_; size_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_509_; 
v___x_503_ = ((size_t)5ULL);
v___x_504_ = lean_usize_shift_right(v_x_465_, v___x_503_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_x_466_, v___x_505_);
v___x_507_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(v_node_499_, v___x_504_, v___x_506_, v_x_467_, v_x_468_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_507_);
v___x_509_ = v___x_501_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
v___y_482_ = v___x_509_;
goto v___jp_481_;
}
}
}
default: 
{
lean_object* v___x_512_; 
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v_x_467_);
lean_ctor_set(v___x_512_, 1, v_x_468_);
v___y_482_ = v___x_512_;
goto v___jp_481_;
}
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_483_ = lean_array_fset(v_xs_x27_480_, v_j_472_, v___y_482_);
lean_dec(v_j_472_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_483_);
v___x_485_ = v___x_476_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
else
{
lean_object* v_ks_515_; lean_object* v_vs_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_534_; 
v_ks_515_ = lean_ctor_get(v_x_464_, 0);
v_vs_516_ = lean_ctor_get(v_x_464_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v_x_464_);
if (v_isSharedCheck_534_ == 0)
{
v___x_518_ = v_x_464_;
v_isShared_519_ = v_isSharedCheck_534_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_vs_516_);
lean_inc(v_ks_515_);
lean_dec(v_x_464_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_534_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_ks_515_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_vs_516_);
v___x_521_ = v_reuseFailAlloc_533_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v_newNode_522_; size_t v___x_523_; uint8_t v___x_524_; 
v_newNode_522_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3___redArg(v___x_521_, v_x_467_, v_x_468_);
v___x_523_ = ((size_t)7ULL);
v___x_524_ = lean_usize_dec_le(v___x_523_, v_x_466_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_525_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_522_);
v___x_526_ = lean_unsigned_to_nat(4u);
v___x_527_ = lean_nat_dec_lt(v___x_525_, v___x_526_);
lean_dec(v___x_525_);
if (v___x_527_ == 0)
{
lean_object* v_ks_528_; lean_object* v_vs_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_ks_528_ = lean_ctor_get(v_newNode_522_, 0);
lean_inc_ref(v_ks_528_);
v_vs_529_ = lean_ctor_get(v_newNode_522_, 1);
lean_inc_ref(v_vs_529_);
lean_dec_ref(v_newNode_522_);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_532_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg(v_x_466_, v_ks_528_, v_vs_529_, v___x_530_, v___x_531_);
lean_dec_ref(v_vs_529_);
lean_dec_ref(v_ks_528_);
return v___x_532_;
}
else
{
return v_newNode_522_;
}
}
else
{
return v_newNode_522_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg(size_t v_depth_535_, lean_object* v_keys_536_, lean_object* v_vals_537_, lean_object* v_i_538_, lean_object* v_entries_539_){
_start:
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_array_get_size(v_keys_536_);
v___x_541_ = lean_nat_dec_lt(v_i_538_, v___x_540_);
if (v___x_541_ == 0)
{
lean_dec(v_i_538_);
return v_entries_539_;
}
else
{
lean_object* v_k_542_; lean_object* v_v_543_; uint64_t v___x_544_; size_t v_h_545_; size_t v___x_546_; lean_object* v___x_547_; size_t v___x_548_; size_t v___x_549_; size_t v___x_550_; size_t v_h_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v_k_542_ = lean_array_fget_borrowed(v_keys_536_, v_i_538_);
v_v_543_ = lean_array_fget_borrowed(v_vals_537_, v_i_538_);
v___x_544_ = l_Lean_instHashableMVarId_hash(v_k_542_);
v_h_545_ = lean_uint64_to_usize(v___x_544_);
v___x_546_ = ((size_t)5ULL);
v___x_547_ = lean_unsigned_to_nat(1u);
v___x_548_ = ((size_t)1ULL);
v___x_549_ = lean_usize_sub(v_depth_535_, v___x_548_);
v___x_550_ = lean_usize_mul(v___x_546_, v___x_549_);
v_h_551_ = lean_usize_shift_right(v_h_545_, v___x_550_);
v___x_552_ = lean_nat_add(v_i_538_, v___x_547_);
lean_dec(v_i_538_);
lean_inc(v_v_543_);
lean_inc(v_k_542_);
v___x_553_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(v_entries_539_, v_h_551_, v_depth_535_, v_k_542_, v_v_543_);
v_i_538_ = v___x_552_;
v_entries_539_ = v___x_553_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_depth_555_, lean_object* v_keys_556_, lean_object* v_vals_557_, lean_object* v_i_558_, lean_object* v_entries_559_){
_start:
{
size_t v_depth_boxed_560_; lean_object* v_res_561_; 
v_depth_boxed_560_ = lean_unbox_usize(v_depth_555_);
lean_dec(v_depth_555_);
v_res_561_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_boxed_560_, v_keys_556_, v_vals_557_, v_i_558_, v_entries_559_);
lean_dec_ref(v_vals_557_);
lean_dec_ref(v_keys_556_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_562_, lean_object* v_x_563_, lean_object* v_x_564_, lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
size_t v_x_3004__boxed_567_; size_t v_x_3005__boxed_568_; lean_object* v_res_569_; 
v_x_3004__boxed_567_ = lean_unbox_usize(v_x_563_);
lean_dec(v_x_563_);
v_x_3005__boxed_568_ = lean_unbox_usize(v_x_564_);
lean_dec(v_x_564_);
v_res_569_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(v_x_562_, v_x_3004__boxed_567_, v_x_3005__boxed_568_, v_x_565_, v_x_566_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0___redArg(lean_object* v_x_570_, lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
uint64_t v___x_573_; size_t v___x_574_; size_t v___x_575_; lean_object* v___x_576_; 
v___x_573_ = l_Lean_instHashableMVarId_hash(v_x_571_);
v___x_574_ = lean_uint64_to_usize(v___x_573_);
v___x_575_ = ((size_t)1ULL);
v___x_576_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(v_x_570_, v___x_574_, v___x_575_, v_x_571_, v_x_572_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg(lean_object* v_mvarId_577_, lean_object* v_val_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; lean_object* v_mctx_582_; lean_object* v_cache_583_; lean_object* v_zetaDeltaFVarIds_584_; lean_object* v_postponed_585_; lean_object* v_diag_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_616_; 
v___x_581_ = lean_st_ref_take(v___y_579_);
v_mctx_582_ = lean_ctor_get(v___x_581_, 0);
v_cache_583_ = lean_ctor_get(v___x_581_, 1);
v_zetaDeltaFVarIds_584_ = lean_ctor_get(v___x_581_, 2);
v_postponed_585_ = lean_ctor_get(v___x_581_, 3);
v_diag_586_ = lean_ctor_get(v___x_581_, 4);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_616_ == 0)
{
v___x_588_ = v___x_581_;
v_isShared_589_ = v_isSharedCheck_616_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_diag_586_);
lean_inc(v_postponed_585_);
lean_inc(v_zetaDeltaFVarIds_584_);
lean_inc(v_cache_583_);
lean_inc(v_mctx_582_);
lean_dec(v___x_581_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_616_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v_depth_590_; lean_object* v_levelAssignDepth_591_; lean_object* v_lmvarCounter_592_; lean_object* v_mvarCounter_593_; lean_object* v_lDecls_594_; lean_object* v_decls_595_; lean_object* v_userNames_596_; lean_object* v_lAssignment_597_; lean_object* v_eAssignment_598_; lean_object* v_dAssignment_599_; lean_object* v_instanceTypedMVars_600_; lean_object* v_synthNormMemo_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_615_; 
v_depth_590_ = lean_ctor_get(v_mctx_582_, 0);
v_levelAssignDepth_591_ = lean_ctor_get(v_mctx_582_, 1);
v_lmvarCounter_592_ = lean_ctor_get(v_mctx_582_, 2);
v_mvarCounter_593_ = lean_ctor_get(v_mctx_582_, 3);
v_lDecls_594_ = lean_ctor_get(v_mctx_582_, 4);
v_decls_595_ = lean_ctor_get(v_mctx_582_, 5);
v_userNames_596_ = lean_ctor_get(v_mctx_582_, 6);
v_lAssignment_597_ = lean_ctor_get(v_mctx_582_, 7);
v_eAssignment_598_ = lean_ctor_get(v_mctx_582_, 8);
v_dAssignment_599_ = lean_ctor_get(v_mctx_582_, 9);
v_instanceTypedMVars_600_ = lean_ctor_get(v_mctx_582_, 10);
v_synthNormMemo_601_ = lean_ctor_get(v_mctx_582_, 11);
v_isSharedCheck_615_ = !lean_is_exclusive(v_mctx_582_);
if (v_isSharedCheck_615_ == 0)
{
v___x_603_ = v_mctx_582_;
v_isShared_604_ = v_isSharedCheck_615_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_synthNormMemo_601_);
lean_inc(v_instanceTypedMVars_600_);
lean_inc(v_dAssignment_599_);
lean_inc(v_eAssignment_598_);
lean_inc(v_lAssignment_597_);
lean_inc(v_userNames_596_);
lean_inc(v_decls_595_);
lean_inc(v_lDecls_594_);
lean_inc(v_mvarCounter_593_);
lean_inc(v_lmvarCounter_592_);
lean_inc(v_levelAssignDepth_591_);
lean_inc(v_depth_590_);
lean_dec(v_mctx_582_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_615_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_605_ = lean_box(0);
v___x_606_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0___redArg(v_eAssignment_598_, v_mvarId_577_, v_val_578_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 8, v___x_606_);
v___x_608_ = v___x_603_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_depth_590_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_levelAssignDepth_591_);
lean_ctor_set(v_reuseFailAlloc_614_, 2, v_lmvarCounter_592_);
lean_ctor_set(v_reuseFailAlloc_614_, 3, v_mvarCounter_593_);
lean_ctor_set(v_reuseFailAlloc_614_, 4, v_lDecls_594_);
lean_ctor_set(v_reuseFailAlloc_614_, 5, v_decls_595_);
lean_ctor_set(v_reuseFailAlloc_614_, 6, v_userNames_596_);
lean_ctor_set(v_reuseFailAlloc_614_, 7, v_lAssignment_597_);
lean_ctor_set(v_reuseFailAlloc_614_, 8, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_614_, 9, v_dAssignment_599_);
lean_ctor_set(v_reuseFailAlloc_614_, 10, v_instanceTypedMVars_600_);
lean_ctor_set(v_reuseFailAlloc_614_, 11, v_synthNormMemo_601_);
v___x_608_ = v_reuseFailAlloc_614_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
lean_object* v___x_610_; 
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 0, v___x_608_);
v___x_610_ = v___x_588_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v_cache_583_);
lean_ctor_set(v_reuseFailAlloc_613_, 2, v_zetaDeltaFVarIds_584_);
lean_ctor_set(v_reuseFailAlloc_613_, 3, v_postponed_585_);
lean_ctor_set(v_reuseFailAlloc_613_, 4, v_diag_586_);
v___x_610_ = v_reuseFailAlloc_613_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_st_ref_put(v___y_579_, v___x_610_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_605_);
return v___x_612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg___boxed(lean_object* v_mvarId_617_, lean_object* v_val_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg(v_mvarId_617_, v_val_618_, v___y_619_);
lean_dec(v___y_619_);
return v_res_621_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_box(0);
v___x_629_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__3));
v___x_630_ = l_Lean_mkConst(v___x_629_, v___x_628_);
return v___x_630_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_631_ = lean_box(0);
v___x_632_ = lean_unsigned_to_nat(6u);
v___x_633_ = lean_mk_empty_array_with_capacity(v___x_632_);
v___x_634_ = lean_array_push(v___x_633_, v___x_631_);
return v___x_634_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_638_ = lean_box(0);
v___x_639_ = lean_unsigned_to_nat(5u);
v___x_640_ = lean_mk_empty_array_with_capacity(v___x_639_);
v___x_641_ = lean_array_push(v___x_640_, v___x_638_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0(lean_object* v_mvarId_642_, lean_object* v_value_643_, lean_object* v_fvarId_644_, lean_object* v_hName_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v___x_651_; 
lean_inc(v_mvarId_642_);
v___x_651_ = l_Lean_MVarId_getTag(v_mvarId_642_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___x_651_, 1);
v___x_653_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__1));
lean_inc(v_mvarId_642_);
v___x_654_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_642_, v___x_653_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; 
lean_dec_ref_known(v___x_654_, 1);
lean_inc(v_mvarId_642_);
v___x_655_ = l_Lean_MVarId_getType(v_mvarId_642_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_657_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = l_Lean_Meta_normLitValue(v_value_643_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc_n(v_a_658_, 2);
lean_dec_ref_known(v___x_657_, 1);
v___x_659_ = l_Lean_mkFVar(v_fvarId_644_);
lean_inc_ref(v___x_659_);
v___x_660_ = l_Lean_Meta_mkEq(v___x_659_, v_a_658_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc_n(v_a_661_, 3);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4, &l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4_once, _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__4);
v___x_663_ = l_Lean_Expr_app___override(v___x_662_, v_a_661_);
v___x_664_ = 0;
lean_inc(v_a_656_);
lean_inc(v_hName_645_);
v___x_665_ = l_Lean_mkForall(v_hName_645_, v___x_664_, v_a_661_, v_a_656_);
v___x_666_ = l_Lean_mkForall(v_hName_645_, v___x_664_, v___x_663_, v_a_656_);
lean_inc(v_a_652_);
v___x_667_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_665_, v_a_652_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_669_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v___x_669_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_666_, v_a_652_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v_val_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___x_689_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_689_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f(v___x_659_, v_a_658_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
if (lean_obj_tag(v_a_690_) == 1)
{
lean_object* v_val_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_721_; 
v_val_691_ = lean_ctor_get(v_a_690_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v_a_690_);
if (v_isSharedCheck_721_ == 0)
{
v___x_693_ = v_a_690_;
v_isShared_694_ = v_isSharedCheck_721_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_val_691_);
lean_dec(v_a_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_721_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_fst_695_; lean_object* v_snd_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v_fst_695_ = lean_ctor_get(v_val_691_, 0);
lean_inc(v_fst_695_);
v_snd_696_ = lean_ctor_get(v_val_691_, 1);
lean_inc(v_snd_696_);
lean_dec(v_val_691_);
v___x_697_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_mkValueTest_x3f___closed__2));
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v_fst_695_);
v___x_699_ = v___x_693_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_fst_695_);
v___x_699_ = v_reuseFailAlloc_720_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v_a_661_);
v___x_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_701_, 0, v_snd_696_);
lean_inc(v_a_668_);
v___x_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_702_, 0, v_a_668_);
lean_inc(v_a_670_);
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v_a_670_);
v___x_704_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5, &l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5_once, _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__5);
v___x_705_ = lean_array_push(v___x_704_, v___x_699_);
v___x_706_ = lean_array_push(v___x_705_, v___x_700_);
v___x_707_ = lean_array_push(v___x_706_, v___x_701_);
v___x_708_ = lean_array_push(v___x_707_, v___x_702_);
v___x_709_ = lean_array_push(v___x_708_, v___x_703_);
v___x_710_ = l_Lean_Meta_mkAppOptM(v___x_697_, v___x_709_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v_val_672_ = v_a_711_;
v___y_673_ = v___y_646_;
v___y_674_ = v___y_647_;
v___y_675_ = v___y_648_;
v___y_676_ = v___y_649_;
goto v___jp_671_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v_a_670_);
lean_dec(v_a_668_);
lean_dec(v_mvarId_642_);
v_a_712_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_710_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_710_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v_a_690_);
v___x_722_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__7));
v___x_723_ = lean_box(0);
v___x_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_724_, 0, v_a_661_);
lean_inc(v_a_668_);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v_a_668_);
lean_inc(v_a_670_);
v___x_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_726_, 0, v_a_670_);
v___x_727_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8, &l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8_once, _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___closed__8);
v___x_728_ = lean_array_push(v___x_727_, v___x_724_);
v___x_729_ = lean_array_push(v___x_728_, v___x_723_);
v___x_730_ = lean_array_push(v___x_729_, v___x_725_);
v___x_731_ = lean_array_push(v___x_730_, v___x_726_);
v___x_732_ = l_Lean_Meta_mkAppOptM(v___x_722_, v___x_731_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
v_val_672_ = v_a_733_;
v___y_673_ = v___y_646_;
v___y_674_ = v___y_647_;
v___y_675_ = v___y_648_;
v___y_676_ = v___y_649_;
goto v___jp_671_;
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
lean_dec(v_a_670_);
lean_dec(v_a_668_);
lean_dec(v_mvarId_642_);
v_a_734_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_732_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_732_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v_a_670_);
lean_dec(v_a_668_);
lean_dec(v_a_661_);
lean_dec(v_mvarId_642_);
v_a_742_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_689_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_689_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
v___jp_671_:
{
lean_object* v___x_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_687_; 
v___x_677_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg(v_mvarId_642_, v_val_672_, v___y_674_);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_687_ == 0)
{
lean_object* v_unused_688_; 
v_unused_688_ = lean_ctor_get(v___x_677_, 0);
lean_dec(v_unused_688_);
v___x_679_ = v___x_677_;
v_isShared_680_ = v_isSharedCheck_687_;
goto v_resetjp_678_;
}
else
{
lean_dec(v___x_677_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_687_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_681_ = l_Lean_Expr_mvarId_x21(v_a_668_);
lean_dec(v_a_668_);
v___x_682_ = l_Lean_Expr_mvarId_x21(v_a_670_);
lean_dec(v_a_670_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_681_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_683_);
v___x_685_ = v___x_679_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v_a_668_);
lean_dec(v_a_661_);
lean_dec_ref(v___x_659_);
lean_dec(v_a_658_);
lean_dec(v_mvarId_642_);
v_a_750_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_669_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_669_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec_ref(v___x_666_);
lean_dec(v_a_661_);
lean_dec_ref(v___x_659_);
lean_dec(v_a_658_);
lean_dec(v_a_652_);
lean_dec(v_mvarId_642_);
v_a_758_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_667_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_667_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec_ref(v___x_659_);
lean_dec(v_a_658_);
lean_dec(v_a_656_);
lean_dec(v_a_652_);
lean_dec(v_hName_645_);
lean_dec(v_mvarId_642_);
v_a_766_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_660_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_660_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_a_656_);
lean_dec(v_a_652_);
lean_dec(v_hName_645_);
lean_dec(v_fvarId_644_);
lean_dec(v_mvarId_642_);
v_a_774_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_657_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_657_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec(v_a_652_);
lean_dec(v_hName_645_);
lean_dec(v_fvarId_644_);
lean_dec_ref(v_value_643_);
lean_dec(v_mvarId_642_);
v_a_782_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_655_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_655_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_652_);
lean_dec(v_hName_645_);
lean_dec(v_fvarId_644_);
lean_dec_ref(v_value_643_);
lean_dec(v_mvarId_642_);
v_a_790_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_654_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_654_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec(v_hName_645_);
lean_dec(v_fvarId_644_);
lean_dec_ref(v_value_643_);
lean_dec(v_mvarId_642_);
v_a_798_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_651_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_651_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___boxed(lean_object* v_mvarId_806_, lean_object* v_value_807_, lean_object* v_fvarId_808_, lean_object* v_hName_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0(v_mvarId_806_, v_value_807_, v_fvarId_808_, v_hName_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue(lean_object* v_mvarId_816_, lean_object* v_fvarId_817_, lean_object* v_value_818_, lean_object* v_hName_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_){
_start:
{
lean_object* v___f_825_; lean_object* v___x_826_; 
lean_inc(v_mvarId_816_);
v___f_825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___lam__0___boxed), 9, 4);
lean_closure_set(v___f_825_, 0, v_mvarId_816_);
lean_closure_set(v___f_825_, 1, v_value_818_);
lean_closure_set(v___f_825_, 2, v_fvarId_817_);
lean_closure_set(v___f_825_, 3, v_hName_819_);
v___x_826_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__1___redArg(v_mvarId_816_, v___f_825_, v_a_820_, v_a_821_, v_a_822_, v_a_823_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue___boxed(lean_object* v_mvarId_827_, lean_object* v_fvarId_828_, lean_object* v_value_829_, lean_object* v_hName_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue(v_mvarId_827_, v_fvarId_828_, v_value_829_, v_hName_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
lean_dec(v_a_832_);
lean_dec_ref(v_a_831_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0(lean_object* v_mvarId_837_, lean_object* v_val_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___redArg(v_mvarId_837_, v_val_838_, v___y_840_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0___boxed(lean_object* v_mvarId_845_, lean_object* v_val_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0(v_mvarId_845_, v_val_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0(lean_object* v_00_u03b2_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0___redArg(v_x_854_, v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_858_, lean_object* v_x_859_, size_t v_x_860_, size_t v_x_861_, lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___redArg(v_x_859_, v_x_860_, v_x_861_, v_x_862_, v_x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_865_, lean_object* v_x_866_, lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
size_t v_x_3639__boxed_871_; size_t v_x_3640__boxed_872_; lean_object* v_res_873_; 
v_x_3639__boxed_871_ = lean_unbox_usize(v_x_867_);
lean_dec(v_x_867_);
v_x_3640__boxed_872_ = lean_unbox_usize(v_x_868_);
lean_dec(v_x_868_);
v_res_873_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2(v_00_u03b2_865_, v_x_866_, v_x_3639__boxed_871_, v_x_3640__boxed_872_, v_x_869_, v_x_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_874_, lean_object* v_n_875_, lean_object* v_k_876_, lean_object* v_v_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3___redArg(v_n_875_, v_k_876_, v_v_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_879_, size_t v_depth_880_, lean_object* v_keys_881_, lean_object* v_vals_882_, lean_object* v_heq_883_, lean_object* v_i_884_, lean_object* v_entries_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_880_, v_keys_881_, v_vals_882_, v_i_884_, v_entries_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_887_, lean_object* v_depth_888_, lean_object* v_keys_889_, lean_object* v_vals_890_, lean_object* v_heq_891_, lean_object* v_i_892_, lean_object* v_entries_893_){
_start:
{
size_t v_depth_boxed_894_; lean_object* v_res_895_; 
v_depth_boxed_894_ = lean_unbox_usize(v_depth_888_);
lean_dec(v_depth_888_);
v_res_895_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_887_, v_depth_boxed_894_, v_keys_889_, v_vals_890_, v_heq_891_, v_i_892_, v_entries_893_);
lean_dec_ref(v_vals_890_);
lean_dec_ref(v_keys_889_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_896_, lean_object* v_x_897_, lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_x_897_, v_x_898_, v_x_899_, v_x_900_);
return v___x_901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__3));
v___x_917_ = l_Lean_MessageData_ofFormat(v___x_916_);
return v___x_917_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4, &l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4_once, _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__4);
v___x_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop(lean_object* v_fvarId_923_, lean_object* v_hNamePrefix_924_, uint8_t v_needHyps_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
if (lean_obj_tag(v_a_928_) == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec_ref(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v___x_936_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__1));
v___x_937_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5, &l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5_once, _init_l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__5);
v___x_938_ = l_Lean_Meta_throwTacticEx___redArg(v___x_936_, v_a_927_, v___x_937_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
return v___x_938_;
}
else
{
lean_object* v_head_939_; lean_object* v_tail_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v_head_939_ = lean_ctor_get(v_a_928_, 0);
lean_inc(v_head_939_);
v_tail_940_ = lean_ctor_get(v_a_928_, 1);
lean_inc(v_tail_940_);
lean_dec_ref_known(v_a_928_, 2);
lean_inc(v_a_926_);
lean_inc(v_hNamePrefix_924_);
v___x_941_ = lean_name_append_index_after(v_hNamePrefix_924_, v_a_926_);
lean_inc(v_fvarId_923_);
v___x_942_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValue(v_a_927_, v_fvarId_923_, v_head_939_, v___x_941_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v_fst_944_; lean_object* v_snd_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v_fst_944_ = lean_ctor_get(v_a_943_, 0);
lean_inc_n(v_fst_944_, 2);
v_snd_945_ = lean_ctor_get(v_a_943_, 1);
lean_inc(v_snd_945_);
lean_dec(v_a_943_);
v___x_946_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___closed__7));
lean_inc(v_a_926_);
v___x_947_ = lean_name_append_index_after(v___x_946_, v_a_926_);
v___x_948_ = l_Lean_Meta_appendTagSuffix(v_fst_944_, v___x_947_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
lean_dec(v___x_947_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v___x_949_; 
lean_dec_ref_known(v___x_948_, 1);
v___x_949_ = l_Lean_MVarId_tryClearMany(v_fst_944_, v_a_929_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; uint8_t v___x_951_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = 1;
v___x_952_ = l_Lean_Meta_introSubstEq(v_a_950_, v___x_951_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v_fst_954_; lean_object* v_snd_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_fst_960_; lean_object* v_snd_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
v_fst_954_ = lean_ctor_get(v_a_953_, 0);
lean_inc(v_fst_954_);
v_snd_955_ = lean_ctor_get(v_a_953_, 1);
lean_inc(v_snd_955_);
lean_dec(v_a_953_);
v___x_956_ = ((lean_object*)(l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0));
v___x_957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_957_, 0, v_snd_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
lean_ctor_set(v___x_957_, 2, v_fst_954_);
v___x_958_ = lean_array_push(v_a_930_, v___x_957_);
if (v_needHyps_925_ == 0)
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_MVarId_intro1__(v_snd_945_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_992_, 1);
v_fst_960_ = v_a_929_;
v_snd_961_ = v_a_993_;
v___y_962_ = v_a_931_;
v___y_963_ = v_a_932_;
v___y_964_ = v_a_933_;
v___y_965_ = v_a_934_;
goto v___jp_959_;
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v___x_958_);
lean_dec(v_tail_940_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_994_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_992_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_992_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
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
else
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lean_Meta_intro1Core(v_snd_945_, v_needHyps_925_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v_fst_1004_; lean_object* v_snd_1005_; lean_object* v___x_1006_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_1002_, 1);
v_fst_1004_ = lean_ctor_get(v_a_1003_, 0);
lean_inc(v_fst_1004_);
v_snd_1005_ = lean_ctor_get(v_a_1003_, 1);
lean_inc(v_snd_1005_);
lean_dec(v_a_1003_);
v___x_1006_ = lean_array_push(v_a_929_, v_fst_1004_);
v_fst_960_ = v___x_1006_;
v_snd_961_ = v_snd_1005_;
v___y_962_ = v_a_931_;
v___y_963_ = v_a_932_;
v___y_964_ = v_a_933_;
v___y_965_ = v_a_934_;
goto v___jp_959_;
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_dec_ref(v___x_958_);
lean_dec(v_tail_940_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_1007_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1002_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1002_);
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
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_959_:
{
if (lean_obj_tag(v_tail_940_) == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v___x_966_ = lean_unsigned_to_nat(1u);
v___x_967_ = lean_nat_add(v_a_926_, v___x_966_);
lean_dec(v_a_926_);
v___x_968_ = lean_name_append_index_after(v___x_946_, v___x_967_);
lean_inc(v_snd_961_);
v___x_969_ = l_Lean_Meta_appendTagSuffix(v_snd_961_, v___x_968_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
lean_dec(v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_979_; 
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_979_ == 0)
{
lean_object* v_unused_980_; 
v_unused_980_ = lean_ctor_get(v___x_969_, 0);
lean_dec(v_unused_980_);
v___x_971_ = v___x_969_;
v_isShared_972_ = v_isSharedCheck_979_;
goto v_resetjp_970_;
}
else
{
lean_dec(v___x_969_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_979_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_973_ = lean_box(0);
v___x_974_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_974_, 0, v_snd_961_);
lean_ctor_set(v___x_974_, 1, v_fst_960_);
lean_ctor_set(v___x_974_, 2, v___x_973_);
v___x_975_ = lean_array_push(v___x_958_, v___x_974_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_975_);
v___x_977_ = v___x_971_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_snd_961_);
lean_dec_ref(v_fst_960_);
lean_dec_ref(v___x_958_);
v_a_981_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_969_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_969_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_unsigned_to_nat(1u);
v___x_990_ = lean_nat_add(v_a_926_, v___x_989_);
lean_dec(v_a_926_);
v_a_926_ = v___x_990_;
v_a_927_ = v_snd_961_;
v_a_928_ = v_tail_940_;
v_a_929_ = v_fst_960_;
v_a_930_ = v___x_958_;
v_a_931_ = v___y_962_;
v_a_932_ = v___y_963_;
v_a_933_ = v___y_964_;
v_a_934_ = v___y_965_;
goto _start;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v_snd_945_);
lean_dec(v_tail_940_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_1015_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_952_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_952_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec(v_snd_945_);
lean_dec(v_tail_940_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_1023_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_949_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_949_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec(v_snd_945_);
lean_dec(v_fst_944_);
lean_dec(v_tail_940_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_1031_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_948_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_948_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_tail_940_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_926_);
lean_dec(v_hNamePrefix_924_);
lean_dec(v_fvarId_923_);
v_a_1039_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_942_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_942_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop___boxed(lean_object* v_fvarId_1047_, lean_object* v_hNamePrefix_1048_, lean_object* v_needHyps_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
uint8_t v_needHyps_boxed_1060_; lean_object* v_res_1061_; 
v_needHyps_boxed_1060_ = lean_unbox(v_needHyps_1049_);
v_res_1061_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop(v_fvarId_1047_, v_hNamePrefix_1048_, v_needHyps_boxed_1060_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseValues(lean_object* v_mvarId_1062_, lean_object* v_fvarId_1063_, lean_object* v_values_1064_, lean_object* v_hNamePrefix_1065_, uint8_t v_needHyps_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1072_ = lean_unsigned_to_nat(1u);
v___x_1073_ = lean_array_to_list(v_values_1064_);
v___x_1074_ = ((lean_object*)(l_Lean_Meta_instInhabitedCaseValuesSubgoal_default___closed__0));
v___x_1075_ = l___private_Lean_Meta_Match_CaseValues_0__Lean_Meta_caseValues_loop(v_fvarId_1063_, v_hNamePrefix_1065_, v_needHyps_1066_, v___x_1072_, v_mvarId_1062_, v___x_1073_, v___x_1074_, v___x_1074_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseValues___boxed(lean_object* v_mvarId_1076_, lean_object* v_fvarId_1077_, lean_object* v_values_1078_, lean_object* v_hNamePrefix_1079_, lean_object* v_needHyps_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
uint8_t v_needHyps_boxed_1086_; lean_object* v_res_1087_; 
v_needHyps_boxed_1086_ = lean_unbox(v_needHyps_1080_);
v_res_1087_ = l_Lean_Meta_caseValues(v_mvarId_1076_, v_fvarId_1077_, v_values_1078_, v_hNamePrefix_1079_, v_needHyps_boxed_1086_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
return v_res_1087_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_CaseValues(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_CaseValues(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_CaseValues(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_CaseValues(builtin);
}
#ifdef __cplusplus
}
#endif
