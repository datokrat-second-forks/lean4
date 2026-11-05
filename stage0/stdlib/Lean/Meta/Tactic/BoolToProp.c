// Lean compiler output
// Module: Lean.Meta.Tactic.BoolToProp
// Imports: public import Lean.Meta.Tactic.Simp.Attr public import Lean.Meta.Tactic.Simp.Main
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_registerSimpAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "bool_to_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 90, 229, 136, 228, 174, 42, 173)}};
static const lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "simp lemmas converting boolean expressions in terms of `decide` into propositional statements"};
static const lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(175, 150, 210, 209, 141, 143, 60, 44)}};
static const lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_bool__to__prop;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_boolCondToProp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__2;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__3;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__4;
static const lean_string_object l_Lean_Meta_boolCondToProp_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__5_value;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__6 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__6_value;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__7;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 32, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 1, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 1, 1, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__8_value;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__9 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__9_value;
static const lean_array_object l_Lean_Meta_boolCondToProp_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__10 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__10_value;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__11;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__12;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__13;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__14;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__15;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__16;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__17;
static const lean_string_object l_Lean_Meta_boolCondToProp_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__18 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__18_value;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__19 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__19_value;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__20;
static const lean_string_object l_Lean_Meta_boolCondToProp_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__21 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__21_value;
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_boolCondToProp_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__21_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__22 = (const lean_object*)&l_Lean_Meta_boolCondToProp_x3f___closed__22_value;
static lean_once_cell_t l_Lean_Meta_boolCondToProp_x3f___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_boolCondToProp_x3f___closed__23;
LEAN_EXPORT lean_object* l_Lean_Meta_boolCondToProp_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_boolCondToProp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_10_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_));
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_));
v___x_12_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_));
v___x_13_ = l_Lean_Meta_registerSimpAttr(v___x_10_, v___x_11_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2____boxed(lean_object* v_a_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_();
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(lean_object* v_e_16_, lean_object* v___y_17_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = l_Lean_Expr_hasMVar(v_e_16_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v_e_16_);
return v___x_20_;
}
else
{
lean_object* v___x_21_; lean_object* v_mctx_22_; lean_object* v___x_23_; lean_object* v_fst_24_; lean_object* v_snd_25_; lean_object* v___x_26_; lean_object* v_cache_27_; lean_object* v_zetaDeltaFVarIds_28_; lean_object* v_postponed_29_; lean_object* v_diag_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_39_; 
v___x_21_ = lean_st_ref_get(v___y_17_);
v_mctx_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc_ref(v_mctx_22_);
lean_dec(v___x_21_);
v___x_23_ = l_Lean_instantiateMVarsCore(v_mctx_22_, v_e_16_);
v_fst_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc(v_fst_24_);
v_snd_25_ = lean_ctor_get(v___x_23_, 1);
lean_inc(v_snd_25_);
lean_dec_ref(v___x_23_);
v___x_26_ = lean_st_ref_take(v___y_17_);
v_cache_27_ = lean_ctor_get(v___x_26_, 1);
v_zetaDeltaFVarIds_28_ = lean_ctor_get(v___x_26_, 2);
v_postponed_29_ = lean_ctor_get(v___x_26_, 3);
v_diag_30_ = lean_ctor_get(v___x_26_, 4);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_39_ == 0)
{
lean_object* v_unused_40_; 
v_unused_40_ = lean_ctor_get(v___x_26_, 0);
lean_dec(v_unused_40_);
v___x_32_ = v___x_26_;
v_isShared_33_ = v_isSharedCheck_39_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_diag_30_);
lean_inc(v_postponed_29_);
lean_inc(v_zetaDeltaFVarIds_28_);
lean_inc(v_cache_27_);
lean_dec(v___x_26_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_39_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 0, v_snd_25_);
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_snd_25_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v_cache_27_);
lean_ctor_set(v_reuseFailAlloc_38_, 2, v_zetaDeltaFVarIds_28_);
lean_ctor_set(v_reuseFailAlloc_38_, 3, v_postponed_29_);
lean_ctor_set(v_reuseFailAlloc_38_, 4, v_diag_30_);
v___x_35_ = v_reuseFailAlloc_38_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_st_ref_put(v___y_17_, v___x_35_);
v___x_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_37_, 0, v_fst_24_);
return v___x_37_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(v_e_41_, v___y_42_);
lean_dec(v___y_42_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0(lean_object* v_e_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(v_e_45_, v___y_47_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___boxed(lean_object* v_e_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0(v_e_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg(lean_object* v_a_68_, lean_object* v_as_x27_69_, lean_object* v_b_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
if (lean_obj_tag(v_as_x27_69_) == 0)
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v_b_70_);
return v___x_76_;
}
else
{
lean_object* v_head_77_; lean_object* v_tail_78_; lean_object* v_pre_79_; lean_object* v_post_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref(v_b_70_);
v_head_77_ = lean_ctor_get(v_as_x27_69_, 0);
v_tail_78_ = lean_ctor_get(v_as_x27_69_, 1);
v_pre_79_ = lean_ctor_get(v_a_68_, 0);
v_post_80_ = lean_ctor_get(v_a_68_, 1);
v___x_81_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__0));
lean_inc(v_head_77_);
v___x_82_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_pre_79_, v_head_77_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_84_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_82_, 1);
lean_inc(v_head_77_);
v___x_84_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_post_80_, v_head_77_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_100_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_100_ == 0)
{
v___x_87_ = v___x_84_;
v_isShared_88_ = v_isSharedCheck_100_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_84_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_100_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_94_ = lean_array_get_size(v_a_83_);
lean_dec(v_a_83_);
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_nat_dec_eq(v___x_94_, v___x_95_);
if (v___x_96_ == 0)
{
lean_dec(v_a_85_);
goto v___jp_89_;
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_array_get_size(v_a_85_);
lean_dec(v_a_85_);
v___x_98_ = lean_nat_dec_eq(v___x_97_, v___x_95_);
if (v___x_98_ == 0)
{
goto v___jp_89_;
}
else
{
lean_del_object(v___x_87_);
v_as_x27_69_ = v_tail_78_;
v_b_70_ = v___x_81_;
goto _start;
}
}
v___jp_89_:
{
lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_90_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___closed__2));
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 0, v___x_90_);
v___x_92_ = v___x_87_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
lean_dec(v_a_83_);
v_a_101_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_84_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_84_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
v_a_109_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_82_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_82_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
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
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg___boxed(lean_object* v_a_117_, lean_object* v_as_x27_118_, lean_object* v_b_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg(v_a_117_, v_as_x27_118_, v_b_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
lean_dec(v_as_x27_118_);
lean_dec_ref(v_a_117_);
return v_res_125_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__2(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = l_Lean_Level_ofNat(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__3(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_box(0);
v___x_132_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__2, &l_Lean_Meta_boolCondToProp_x3f___closed__2_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__2);
v___x_133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__4(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__3, &l_Lean_Meta_boolCondToProp_x3f___closed__3_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__3);
v___x_135_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__1));
v___x_136_ = l_Lean_mkConst(v___x_135_, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__7(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_box(0);
v___x_141_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__6));
v___x_142_ = l_Lean_mkConst(v___x_141_, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__11(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__12(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__11, &l_Lean_Meta_boolCondToProp_x3f___closed__11_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__11);
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__13(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__12, &l_Lean_Meta_boolCondToProp_x3f___closed__12_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__12);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__14(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_unsigned_to_nat(32u);
v___x_162_ = lean_mk_empty_array_with_capacity(v___x_161_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__15(void){
_start:
{
size_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_164_ = ((size_t)5ULL);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = lean_unsigned_to_nat(32u);
v___x_167_ = lean_mk_empty_array_with_capacity(v___x_166_);
v___x_168_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__14, &l_Lean_Meta_boolCondToProp_x3f___closed__14_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__14);
v___x_169_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
lean_ctor_set(v___x_169_, 2, v___x_165_);
lean_ctor_set(v___x_169_, 3, v___x_165_);
lean_ctor_set_usize(v___x_169_, 4, v___x_164_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__16(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__15, &l_Lean_Meta_boolCondToProp_x3f___closed__15_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__15);
v___x_171_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__12, &l_Lean_Meta_boolCondToProp_x3f___closed__12_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__12);
v___x_172_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
lean_ctor_set(v___x_172_, 2, v___x_171_);
lean_ctor_set(v___x_172_, 3, v___x_170_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__17(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_173_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__16, &l_Lean_Meta_boolCondToProp_x3f___closed__16_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__16);
v___x_174_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__13, &l_Lean_Meta_boolCondToProp_x3f___closed__13_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__13);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_173_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__20(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_box(0);
v___x_181_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__19));
v___x_182_ = l_Lean_mkConst(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Meta_boolCondToProp_x3f___closed__23(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = lean_box(0);
v___x_188_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__22));
v___x_189_ = l_Lean_mkConst(v___x_188_, v___x_187_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_boolCondToProp_x3f(lean_object* v_c_190_, uint8_t v_value_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_200_; lean_object* v_a_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___y_207_; 
v___x_200_ = l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(v_c_190_, v_a_193_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref(v___x_200_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_box(0);
v___x_204_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__4, &l_Lean_Meta_boolCondToProp_x3f___closed__4_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__4);
v___x_205_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__7, &l_Lean_Meta_boolCondToProp_x3f___closed__7_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__7);
if (v_value_191_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__20, &l_Lean_Meta_boolCondToProp_x3f___closed__20_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__20);
v___y_207_ = v___x_344_;
goto v___jp_206_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__23, &l_Lean_Meta_boolCondToProp_x3f___closed__23_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__23);
v___y_207_ = v___x_345_;
goto v___jp_206_;
}
v___jp_197_:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
return v___x_199_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
lean_inc_ref(v___y_207_);
lean_inc(v_a_201_);
v___x_208_ = l_Lean_mkApp3(v___x_204_, v___x_205_, v_a_201_, v___y_207_);
v___x_209_ = l_Lean_bool__to__prop;
v___x_210_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_209_, v_a_195_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_212_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
v___x_212_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_195_);
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
lean_inc(v_a_213_);
lean_dec_ref_known(v___x_212_, 1);
v___x_214_ = lean_box(0);
v___x_215_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__8));
v___x_216_ = lean_mk_empty_array_with_capacity(v___x_202_);
lean_inc(v_a_211_);
v___x_217_ = lean_array_push(v___x_216_, v_a_211_);
v___x_218_ = l_Lean_Options_empty;
v___x_219_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_215_, v___x_217_, v_a_213_, v___x_218_, v_a_192_, v_a_194_, v_a_195_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v_indexConfig_221_; lean_object* v_config_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_319_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v_indexConfig_221_ = lean_ctor_get(v_a_220_, 5);
lean_inc_ref(v_indexConfig_221_);
v_config_222_ = lean_ctor_get(v_indexConfig_221_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v_indexConfig_221_);
if (v_isSharedCheck_319_ == 0)
{
v___x_224_ = v_indexConfig_221_;
v_isShared_225_ = v_isSharedCheck_319_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_config_222_);
lean_dec(v_indexConfig_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_319_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
uint8_t v_trackZetaDelta_226_; lean_object* v_zetaDeltaSet_227_; lean_object* v_lctx_228_; lean_object* v_localInstances_229_; lean_object* v_defEqCtx_x3f_230_; lean_object* v_synthPendingDepth_231_; lean_object* v_customCanUnfoldPredicate_x3f_232_; uint8_t v_univApprox_233_; uint8_t v_inTypeClassResolution_234_; uint8_t v_cacheInferType_235_; uint64_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v_trackZetaDelta_226_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*7);
v_zetaDeltaSet_227_ = lean_ctor_get(v_a_192_, 1);
v_lctx_228_ = lean_ctor_get(v_a_192_, 2);
v_localInstances_229_ = lean_ctor_get(v_a_192_, 3);
v_defEqCtx_x3f_230_ = lean_ctor_get(v_a_192_, 4);
v_synthPendingDepth_231_ = lean_ctor_get(v_a_192_, 5);
v_customCanUnfoldPredicate_x3f_232_ = lean_ctor_get(v_a_192_, 6);
v_univApprox_233_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_234_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*7 + 2);
v_cacheInferType_235_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*7 + 3);
v___x_236_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_222_);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v_a_201_);
lean_ctor_set(v___x_237_, 1, v___x_203_);
lean_inc_ref(v___x_208_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_208_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__9));
if (v_isShared_225_ == 0)
{
v___x_241_ = v___x_224_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_config_222_);
v___x_241_ = v_reuseFailAlloc_318_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_ctor_set_uint64(v___x_241_, sizeof(void*)*1, v___x_236_);
lean_inc(v_customCanUnfoldPredicate_x3f_232_);
lean_inc(v_synthPendingDepth_231_);
lean_inc(v_defEqCtx_x3f_230_);
lean_inc_ref(v_localInstances_229_);
lean_inc_ref(v_lctx_228_);
lean_inc(v_zetaDeltaSet_227_);
v___x_242_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v_zetaDeltaSet_227_);
lean_ctor_set(v___x_242_, 2, v_lctx_228_);
lean_ctor_set(v___x_242_, 3, v_localInstances_229_);
lean_ctor_set(v___x_242_, 4, v_defEqCtx_x3f_230_);
lean_ctor_set(v___x_242_, 5, v_synthPendingDepth_231_);
lean_ctor_set(v___x_242_, 6, v_customCanUnfoldPredicate_x3f_232_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*7, v_trackZetaDelta_226_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*7 + 1, v_univApprox_233_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*7 + 2, v_inTypeClassResolution_234_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*7 + 3, v_cacheInferType_235_);
v___x_243_ = l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg(v_a_211_, v___x_238_, v___x_239_, v___x_242_, v_a_193_, v_a_194_, v_a_195_);
lean_dec_ref_known(v___x_242_, 7);
lean_dec_ref_known(v___x_238_, 2);
lean_dec(v_a_211_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v_fst_245_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_243_, 1);
v_fst_245_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_fst_245_);
lean_dec(v_a_244_);
if (lean_obj_tag(v_fst_245_) == 0)
{
lean_dec(v_a_220_);
lean_dec_ref(v___x_208_);
goto v___jp_197_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_309_; 
v_val_246_ = lean_ctor_get(v_fst_245_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v_fst_245_);
if (v_isSharedCheck_309_ == 0)
{
v___x_248_ = v_fst_245_;
v_isShared_249_ = v_isSharedCheck_309_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_val_246_);
lean_dec(v_fst_245_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_309_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
uint8_t v___x_250_; 
v___x_250_ = lean_unbox(v_val_246_);
lean_dec(v_val_246_);
if (v___x_250_ == 0)
{
lean_del_object(v___x_248_);
lean_dec(v_a_220_);
lean_dec_ref(v___x_208_);
goto v___jp_197_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_251_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__10));
v___x_252_ = lean_obj_once(&l_Lean_Meta_boolCondToProp_x3f___closed__17, &l_Lean_Meta_boolCondToProp_x3f___closed__17_once, _init_l_Lean_Meta_boolCondToProp_x3f___closed__17);
lean_inc_ref(v___x_208_);
v___x_253_ = l_Lean_Meta_simp(v___x_208_, v_a_220_, v___x_251_, v___x_214_, v___x_252_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_292_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_292_ == 0)
{
v___x_256_ = v___x_253_;
v_isShared_257_ = v_isSharedCheck_292_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_253_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_292_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_fst_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_290_; 
v_fst_258_ = lean_ctor_get(v_a_254_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v_a_254_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; 
v_unused_291_ = lean_ctor_get(v_a_254_, 1);
lean_dec(v_unused_291_);
v___x_260_ = v_a_254_;
v_isShared_261_ = v_isSharedCheck_290_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_fst_258_);
lean_dec(v_a_254_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_290_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_expr_262_; uint8_t v___x_263_; 
v_expr_262_ = lean_ctor_get(v_fst_258_, 0);
lean_inc_ref(v_expr_262_);
v___x_263_ = lean_expr_eqv(v_expr_262_, v___x_208_);
lean_dec_ref(v___x_208_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
lean_del_object(v___x_256_);
v___x_264_ = l_Lean_Meta_Simp_Result_getProof(v_fst_258_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_278_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_278_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_278_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_278_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v_a_265_);
lean_ctor_set(v___x_260_, 0, v_expr_262_);
v___x_270_ = v___x_260_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_expr_262_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v_a_265_);
v___x_270_ = v_reuseFailAlloc_277_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_272_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 0, v___x_270_);
v___x_272_ = v___x_248_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_276_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_274_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_272_);
v___x_274_ = v___x_267_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref(v_expr_262_);
lean_del_object(v___x_260_);
lean_del_object(v___x_248_);
v_a_279_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_264_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_264_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
else
{
lean_object* v___x_288_; 
lean_dec_ref(v_expr_262_);
lean_del_object(v___x_260_);
lean_dec(v_fst_258_);
lean_del_object(v___x_248_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_214_);
v___x_288_ = v___x_256_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_214_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_308_; 
lean_del_object(v___x_248_);
lean_dec_ref(v___x_208_);
v_a_293_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_308_ == 0)
{
v___x_295_ = v___x_253_;
v_isShared_296_ = v_isSharedCheck_308_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_253_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_308_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
uint8_t v___x_297_; 
v___x_297_ = l_Lean_Exception_isInterrupt(v_a_293_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
lean_inc(v_a_293_);
v___x_298_ = l_Lean_Exception_isRuntime(v_a_293_);
if (v___x_298_ == 0)
{
lean_object* v___x_300_; 
lean_dec(v_a_293_);
if (v_isShared_296_ == 0)
{
lean_ctor_set_tag(v___x_295_, 0);
lean_ctor_set(v___x_295_, 0, v___x_214_);
v___x_300_ = v___x_295_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_214_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
else
{
lean_object* v___x_303_; 
if (v_isShared_296_ == 0)
{
v___x_303_ = v___x_295_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_293_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v___x_306_; 
if (v_isShared_296_ == 0)
{
v___x_306_ = v___x_295_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_293_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
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
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec(v_a_220_);
lean_dec_ref(v___x_208_);
v_a_310_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_243_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_243_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_211_);
lean_dec_ref(v___x_208_);
lean_dec(v_a_201_);
v_a_320_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_219_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_219_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_a_211_);
lean_dec_ref(v___x_208_);
lean_dec(v_a_201_);
v_a_328_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_212_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_212_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec_ref(v___x_208_);
lean_dec(v_a_201_);
v_a_336_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_210_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_210_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_boolCondToProp_x3f___boxed(lean_object* v_c_346_, lean_object* v_value_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
uint8_t v_value_boxed_353_; lean_object* v_res_354_; 
v_value_boxed_353_ = lean_unbox(v_value_347_);
v_res_354_ = l_Lean_Meta_boolCondToProp_x3f(v_c_346_, v_value_boxed_353_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1(lean_object* v_a_355_, lean_object* v_as_356_, lean_object* v_as_x27_357_, lean_object* v_b_358_, lean_object* v_a_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___redArg(v_a_355_, v_as_x27_357_, v_b_358_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1___boxed(lean_object* v_a_366_, lean_object* v_as_367_, lean_object* v_as_x27_368_, lean_object* v_b_369_, lean_object* v_a_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_List_forIn_x27_loop___at___00Lean_Meta_boolCondToProp_x3f_spec__1(v_a_366_, v_as_367_, v_as_x27_368_, v_b_369_, v_a_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v_as_x27_368_);
lean_dec(v_as_367_);
lean_dec_ref(v_a_366_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0(lean_object* v_k_377_, lean_object* v_b_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v___x_384_; 
lean_inc(v___y_382_);
lean_inc_ref(v___y_381_);
lean_inc(v___y_380_);
lean_inc_ref(v___y_379_);
v___x_384_ = lean_apply_6(v_k_377_, v_b_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, lean_box(0));
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_k_385_, lean_object* v_b_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0(v_k_385_, v_b_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(lean_object* v_name_393_, uint8_t v_bi_394_, lean_object* v_type_395_, lean_object* v_k_396_, uint8_t v_kind_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v___f_403_; lean_object* v___x_404_; 
v___f_403_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_403_, 0, v_k_396_);
v___x_404_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_393_, v_bi_394_, v_type_395_, v___f_403_, v_kind_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_a_413_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_404_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_404_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg___boxed(lean_object* v_name_421_, lean_object* v_bi_422_, lean_object* v_type_423_, lean_object* v_k_424_, lean_object* v_kind_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
uint8_t v_bi_boxed_431_; uint8_t v_kind_boxed_432_; lean_object* v_res_433_; 
v_bi_boxed_431_ = lean_unbox(v_bi_422_);
v_kind_boxed_432_ = lean_unbox(v_kind_425_);
v_res_433_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(v_name_421_, v_bi_boxed_431_, v_type_423_, v_k_424_, v_kind_boxed_432_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0(lean_object* v_00_u03b1_434_, lean_object* v_name_435_, uint8_t v_bi_436_, lean_object* v_type_437_, lean_object* v_k_438_, uint8_t v_kind_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(v_name_435_, v_bi_436_, v_type_437_, v_k_438_, v_kind_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___boxed(lean_object* v_00_u03b1_446_, lean_object* v_name_447_, lean_object* v_bi_448_, lean_object* v_type_449_, lean_object* v_k_450_, lean_object* v_kind_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
uint8_t v_bi_boxed_457_; uint8_t v_kind_boxed_458_; lean_object* v_res_459_; 
v_bi_boxed_457_ = lean_unbox(v_bi_448_);
v_kind_boxed_458_ = lean_unbox(v_kind_451_);
v_res_459_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0(v_00_u03b1_446_, v_name_447_, v_bi_boxed_457_, v_type_449_, v_k_450_, v_kind_boxed_458_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg(lean_object* v_mvarId_460_, lean_object* v_x_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_460_, v_x_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_467_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_a_476_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_467_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_467_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg___boxed(lean_object* v_mvarId_484_, lean_object* v_x_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg(v_mvarId_484_, v_x_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2(lean_object* v_00_u03b1_492_, lean_object* v_mvarId_493_, lean_object* v_x_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg(v_mvarId_493_, v_x_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___boxed(lean_object* v_00_u03b1_501_, lean_object* v_mvarId_502_, lean_object* v_x_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2(v_00_u03b1_501_, v_mvarId_502_, v_x_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0(lean_object* v_snd_510_, lean_object* v_body_511_, uint8_t v___x_512_, lean_object* v_hp_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v___x_519_; 
lean_inc_ref(v_hp_513_);
v___x_519_ = l_Lean_Meta_mkEqMPR(v_snd_510_, v_hp_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; uint8_t v___x_526_; lean_object* v___x_527_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = lean_unsigned_to_nat(1u);
v___x_522_ = lean_mk_empty_array_with_capacity(v___x_521_);
v___x_523_ = lean_array_push(v___x_522_, v_hp_513_);
v___x_524_ = lean_expr_instantiate1(v_body_511_, v_a_520_);
lean_dec(v_a_520_);
v___x_525_ = 0;
v___x_526_ = 1;
v___x_527_ = l_Lean_Meta_mkForallFVars(v___x_523_, v___x_524_, v___x_525_, v___x_512_, v___x_512_, v___x_526_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
lean_dec_ref(v___x_523_);
return v___x_527_;
}
else
{
lean_dec_ref(v_hp_513_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0___boxed(lean_object* v_snd_528_, lean_object* v_body_529_, lean_object* v___x_530_, lean_object* v_hp_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
uint8_t v___x_4313__boxed_537_; lean_object* v_res_538_; 
v___x_4313__boxed_537_ = lean_unbox(v___x_530_);
v_res_538_ = l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0(v_snd_528_, v_body_529_, v___x_4313__boxed_537_, v_hp_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec_ref(v_body_529_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1(lean_object* v_snd_539_, lean_object* v_a_540_, uint8_t v___x_541_, lean_object* v_h_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___x_548_; 
lean_inc_ref(v_h_542_);
v___x_548_ = l_Lean_Meta_mkEqMP(v_snd_539_, v_h_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; uint8_t v___x_555_; lean_object* v___x_556_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = lean_unsigned_to_nat(1u);
v___x_551_ = lean_mk_empty_array_with_capacity(v___x_550_);
v___x_552_ = lean_array_push(v___x_551_, v_h_542_);
v___x_553_ = l_Lean_Expr_app___override(v_a_540_, v_a_549_);
v___x_554_ = 0;
v___x_555_ = 1;
v___x_556_ = l_Lean_Meta_mkLambdaFVars(v___x_552_, v___x_553_, v___x_554_, v___x_541_, v___x_554_, v___x_541_, v___x_555_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec_ref(v___x_552_);
return v___x_556_;
}
else
{
lean_dec_ref(v_h_542_);
lean_dec_ref(v_a_540_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1___boxed(lean_object* v_snd_557_, lean_object* v_a_558_, lean_object* v___x_559_, lean_object* v_h_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
uint8_t v___x_4356__boxed_566_; lean_object* v_res_567_; 
v___x_4356__boxed_566_ = lean_unbox(v___x_559_);
v_res_567_ = l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1(v_snd_557_, v_a_558_, v___x_4356__boxed_566_, v_h_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_568_, lean_object* v_x_569_, lean_object* v_x_570_, lean_object* v_x_571_){
_start:
{
lean_object* v_ks_572_; lean_object* v_vs_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_597_; 
v_ks_572_ = lean_ctor_get(v_x_568_, 0);
v_vs_573_ = lean_ctor_get(v_x_568_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v_x_568_);
if (v_isSharedCheck_597_ == 0)
{
v___x_575_ = v_x_568_;
v_isShared_576_ = v_isSharedCheck_597_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_vs_573_);
lean_inc(v_ks_572_);
lean_dec(v_x_568_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_597_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_array_get_size(v_ks_572_);
v___x_578_ = lean_nat_dec_lt(v_x_569_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
lean_dec(v_x_569_);
v___x_579_ = lean_array_push(v_ks_572_, v_x_570_);
v___x_580_ = lean_array_push(v_vs_573_, v_x_571_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_580_);
lean_ctor_set(v___x_575_, 0, v___x_579_);
v___x_582_ = v___x_575_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
else
{
lean_object* v_k_x27_584_; uint8_t v___x_585_; 
v_k_x27_584_ = lean_array_fget_borrowed(v_ks_572_, v_x_569_);
v___x_585_ = l_Lean_instBEqMVarId_beq(v_x_570_, v_k_x27_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_587_; 
if (v_isShared_576_ == 0)
{
v___x_587_ = v___x_575_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_ks_572_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_vs_573_);
v___x_587_ = v_reuseFailAlloc_591_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_unsigned_to_nat(1u);
v___x_589_ = lean_nat_add(v_x_569_, v___x_588_);
lean_dec(v_x_569_);
v_x_568_ = v___x_587_;
v_x_569_ = v___x_589_;
goto _start;
}
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_592_ = lean_array_fset(v_ks_572_, v_x_569_, v_x_570_);
v___x_593_ = lean_array_fset(v_vs_573_, v_x_569_, v_x_571_);
lean_dec(v_x_569_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_593_);
lean_ctor_set(v___x_575_, 0, v___x_592_);
v___x_595_ = v___x_575_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_598_, lean_object* v_k_599_, lean_object* v_v_600_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_598_, v___x_601_, v_k_599_, v_v_600_);
return v___x_602_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(lean_object* v_x_604_, size_t v_x_605_, size_t v_x_606_, lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
lean_object* v_es_609_; size_t v___x_610_; size_t v___x_611_; lean_object* v_j_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_es_609_ = lean_ctor_get(v_x_604_, 0);
v___x_610_ = ((size_t)31ULL);
v___x_611_ = lean_usize_land(v_x_605_, v___x_610_);
v_j_612_ = lean_usize_to_nat(v___x_611_);
v___x_613_ = lean_array_get_size(v_es_609_);
v___x_614_ = lean_nat_dec_lt(v_j_612_, v___x_613_);
if (v___x_614_ == 0)
{
lean_dec(v_j_612_);
lean_dec(v_x_608_);
lean_dec(v_x_607_);
return v_x_604_;
}
else
{
lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_653_; 
lean_inc_ref(v_es_609_);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_604_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; 
v_unused_654_ = lean_ctor_get(v_x_604_, 0);
lean_dec(v_unused_654_);
v___x_616_ = v_x_604_;
v_isShared_617_ = v_isSharedCheck_653_;
goto v_resetjp_615_;
}
else
{
lean_dec(v_x_604_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_653_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_v_618_; lean_object* v___x_619_; lean_object* v_xs_x27_620_; lean_object* v___y_622_; 
v_v_618_ = lean_array_fget(v_es_609_, v_j_612_);
v___x_619_ = lean_box(0);
v_xs_x27_620_ = lean_array_fset(v_es_609_, v_j_612_, v___x_619_);
switch(lean_obj_tag(v_v_618_))
{
case 0:
{
lean_object* v_key_627_; lean_object* v_val_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_638_; 
v_key_627_ = lean_ctor_get(v_v_618_, 0);
v_val_628_ = lean_ctor_get(v_v_618_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v_v_618_);
if (v_isSharedCheck_638_ == 0)
{
v___x_630_ = v_v_618_;
v_isShared_631_ = v_isSharedCheck_638_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_val_628_);
lean_inc(v_key_627_);
lean_dec(v_v_618_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_638_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
uint8_t v___x_632_; 
v___x_632_ = l_Lean_instBEqMVarId_beq(v_x_607_, v_key_627_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_del_object(v___x_630_);
v___x_633_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_627_, v_val_628_, v_x_607_, v_x_608_);
v___x_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
v___y_622_ = v___x_634_;
goto v___jp_621_;
}
else
{
lean_object* v___x_636_; 
lean_dec(v_val_628_);
lean_dec(v_key_627_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 1, v_x_608_);
lean_ctor_set(v___x_630_, 0, v_x_607_);
v___x_636_ = v___x_630_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_x_607_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_x_608_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
v___y_622_ = v___x_636_;
goto v___jp_621_;
}
}
}
}
case 1:
{
lean_object* v_node_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_651_; 
v_node_639_ = lean_ctor_get(v_v_618_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v_v_618_);
if (v_isSharedCheck_651_ == 0)
{
v___x_641_ = v_v_618_;
v_isShared_642_ = v_isSharedCheck_651_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_node_639_);
lean_dec(v_v_618_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_651_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
size_t v___x_643_; size_t v___x_644_; size_t v___x_645_; size_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_643_ = ((size_t)5ULL);
v___x_644_ = lean_usize_shift_right(v_x_605_, v___x_643_);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_x_606_, v___x_645_);
v___x_647_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(v_node_639_, v___x_644_, v___x_646_, v_x_607_, v_x_608_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_647_);
v___x_649_ = v___x_641_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
v___y_622_ = v___x_649_;
goto v___jp_621_;
}
}
}
default: 
{
lean_object* v___x_652_; 
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v_x_607_);
lean_ctor_set(v___x_652_, 1, v_x_608_);
v___y_622_ = v___x_652_;
goto v___jp_621_;
}
}
v___jp_621_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = lean_array_fset(v_xs_x27_620_, v_j_612_, v___y_622_);
lean_dec(v_j_612_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_623_);
v___x_625_ = v___x_616_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
else
{
lean_object* v_ks_655_; lean_object* v_vs_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_674_; 
v_ks_655_ = lean_ctor_get(v_x_604_, 0);
v_vs_656_ = lean_ctor_get(v_x_604_, 1);
v_isSharedCheck_674_ = !lean_is_exclusive(v_x_604_);
if (v_isSharedCheck_674_ == 0)
{
v___x_658_ = v_x_604_;
v_isShared_659_ = v_isSharedCheck_674_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_vs_656_);
lean_inc(v_ks_655_);
lean_dec(v_x_604_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_674_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_ks_655_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_vs_656_);
v___x_661_ = v_reuseFailAlloc_673_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v_newNode_662_; size_t v___x_663_; uint8_t v___x_664_; 
v_newNode_662_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4___redArg(v___x_661_, v_x_607_, v_x_608_);
v___x_663_ = ((size_t)7ULL);
v___x_664_ = lean_usize_dec_le(v___x_663_, v_x_606_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_665_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_662_);
v___x_666_ = lean_unsigned_to_nat(4u);
v___x_667_ = lean_nat_dec_lt(v___x_665_, v___x_666_);
lean_dec(v___x_665_);
if (v___x_667_ == 0)
{
lean_object* v_ks_668_; lean_object* v_vs_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_ks_668_ = lean_ctor_get(v_newNode_662_, 0);
lean_inc_ref(v_ks_668_);
v_vs_669_ = lean_ctor_get(v_newNode_662_, 1);
lean_inc_ref(v_vs_669_);
lean_dec_ref(v_newNode_662_);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_672_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_x_606_, v_ks_668_, v_vs_669_, v___x_670_, v___x_671_);
lean_dec_ref(v_vs_669_);
lean_dec_ref(v_ks_668_);
return v___x_672_;
}
else
{
return v_newNode_662_;
}
}
else
{
return v_newNode_662_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_675_, lean_object* v_keys_676_, lean_object* v_vals_677_, lean_object* v_i_678_, lean_object* v_entries_679_){
_start:
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_array_get_size(v_keys_676_);
v___x_681_ = lean_nat_dec_lt(v_i_678_, v___x_680_);
if (v___x_681_ == 0)
{
lean_dec(v_i_678_);
return v_entries_679_;
}
else
{
lean_object* v_k_682_; lean_object* v_v_683_; uint64_t v___x_684_; size_t v_h_685_; size_t v___x_686_; lean_object* v___x_687_; size_t v___x_688_; size_t v___x_689_; size_t v___x_690_; size_t v_h_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v_k_682_ = lean_array_fget_borrowed(v_keys_676_, v_i_678_);
v_v_683_ = lean_array_fget_borrowed(v_vals_677_, v_i_678_);
v___x_684_ = l_Lean_instHashableMVarId_hash(v_k_682_);
v_h_685_ = lean_uint64_to_usize(v___x_684_);
v___x_686_ = ((size_t)5ULL);
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = ((size_t)1ULL);
v___x_689_ = lean_usize_sub(v_depth_675_, v___x_688_);
v___x_690_ = lean_usize_mul(v___x_686_, v___x_689_);
v_h_691_ = lean_usize_shift_right(v_h_685_, v___x_690_);
v___x_692_ = lean_nat_add(v_i_678_, v___x_687_);
lean_dec(v_i_678_);
lean_inc(v_v_683_);
lean_inc(v_k_682_);
v___x_693_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(v_entries_679_, v_h_691_, v_depth_675_, v_k_682_, v_v_683_);
v_i_678_ = v___x_692_;
v_entries_679_ = v___x_693_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_695_, lean_object* v_keys_696_, lean_object* v_vals_697_, lean_object* v_i_698_, lean_object* v_entries_699_){
_start:
{
size_t v_depth_boxed_700_; lean_object* v_res_701_; 
v_depth_boxed_700_ = lean_unbox_usize(v_depth_695_);
lean_dec(v_depth_695_);
v_res_701_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_700_, v_keys_696_, v_vals_697_, v_i_698_, v_entries_699_);
lean_dec_ref(v_vals_697_);
lean_dec_ref(v_keys_696_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_702_, lean_object* v_x_703_, lean_object* v_x_704_, lean_object* v_x_705_, lean_object* v_x_706_){
_start:
{
size_t v_x_4474__boxed_707_; size_t v_x_4475__boxed_708_; lean_object* v_res_709_; 
v_x_4474__boxed_707_ = lean_unbox_usize(v_x_703_);
lean_dec(v_x_703_);
v_x_4475__boxed_708_ = lean_unbox_usize(v_x_704_);
lean_dec(v_x_704_);
v_res_709_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(v_x_702_, v_x_4474__boxed_707_, v_x_4475__boxed_708_, v_x_705_, v_x_706_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1___redArg(lean_object* v_x_710_, lean_object* v_x_711_, lean_object* v_x_712_){
_start:
{
uint64_t v___x_713_; size_t v___x_714_; size_t v___x_715_; lean_object* v___x_716_; 
v___x_713_ = l_Lean_instHashableMVarId_hash(v_x_711_);
v___x_714_ = lean_uint64_to_usize(v___x_713_);
v___x_715_ = ((size_t)1ULL);
v___x_716_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(v_x_710_, v___x_714_, v___x_715_, v_x_711_, v_x_712_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg(lean_object* v_mvarId_717_, lean_object* v_val_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; lean_object* v_mctx_722_; lean_object* v_cache_723_; lean_object* v_zetaDeltaFVarIds_724_; lean_object* v_postponed_725_; lean_object* v_diag_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_756_; 
v___x_721_ = lean_st_ref_take(v___y_719_);
v_mctx_722_ = lean_ctor_get(v___x_721_, 0);
v_cache_723_ = lean_ctor_get(v___x_721_, 1);
v_zetaDeltaFVarIds_724_ = lean_ctor_get(v___x_721_, 2);
v_postponed_725_ = lean_ctor_get(v___x_721_, 3);
v_diag_726_ = lean_ctor_get(v___x_721_, 4);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_756_ == 0)
{
v___x_728_ = v___x_721_;
v_isShared_729_ = v_isSharedCheck_756_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_diag_726_);
lean_inc(v_postponed_725_);
lean_inc(v_zetaDeltaFVarIds_724_);
lean_inc(v_cache_723_);
lean_inc(v_mctx_722_);
lean_dec(v___x_721_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_756_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v_depth_730_; lean_object* v_levelAssignDepth_731_; lean_object* v_lmvarCounter_732_; lean_object* v_mvarCounter_733_; lean_object* v_lDecls_734_; lean_object* v_decls_735_; lean_object* v_userNames_736_; lean_object* v_lAssignment_737_; lean_object* v_eAssignment_738_; lean_object* v_dAssignment_739_; lean_object* v_instanceTypedMVars_740_; lean_object* v_synthNormMemo_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_755_; 
v_depth_730_ = lean_ctor_get(v_mctx_722_, 0);
v_levelAssignDepth_731_ = lean_ctor_get(v_mctx_722_, 1);
v_lmvarCounter_732_ = lean_ctor_get(v_mctx_722_, 2);
v_mvarCounter_733_ = lean_ctor_get(v_mctx_722_, 3);
v_lDecls_734_ = lean_ctor_get(v_mctx_722_, 4);
v_decls_735_ = lean_ctor_get(v_mctx_722_, 5);
v_userNames_736_ = lean_ctor_get(v_mctx_722_, 6);
v_lAssignment_737_ = lean_ctor_get(v_mctx_722_, 7);
v_eAssignment_738_ = lean_ctor_get(v_mctx_722_, 8);
v_dAssignment_739_ = lean_ctor_get(v_mctx_722_, 9);
v_instanceTypedMVars_740_ = lean_ctor_get(v_mctx_722_, 10);
v_synthNormMemo_741_ = lean_ctor_get(v_mctx_722_, 11);
v_isSharedCheck_755_ = !lean_is_exclusive(v_mctx_722_);
if (v_isSharedCheck_755_ == 0)
{
v___x_743_ = v_mctx_722_;
v_isShared_744_ = v_isSharedCheck_755_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_synthNormMemo_741_);
lean_inc(v_instanceTypedMVars_740_);
lean_inc(v_dAssignment_739_);
lean_inc(v_eAssignment_738_);
lean_inc(v_lAssignment_737_);
lean_inc(v_userNames_736_);
lean_inc(v_decls_735_);
lean_inc(v_lDecls_734_);
lean_inc(v_mvarCounter_733_);
lean_inc(v_lmvarCounter_732_);
lean_inc(v_levelAssignDepth_731_);
lean_inc(v_depth_730_);
lean_dec(v_mctx_722_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_755_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_745_ = lean_box(0);
v___x_746_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1___redArg(v_eAssignment_738_, v_mvarId_717_, v_val_718_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 8, v___x_746_);
v___x_748_ = v___x_743_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_depth_730_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_levelAssignDepth_731_);
lean_ctor_set(v_reuseFailAlloc_754_, 2, v_lmvarCounter_732_);
lean_ctor_set(v_reuseFailAlloc_754_, 3, v_mvarCounter_733_);
lean_ctor_set(v_reuseFailAlloc_754_, 4, v_lDecls_734_);
lean_ctor_set(v_reuseFailAlloc_754_, 5, v_decls_735_);
lean_ctor_set(v_reuseFailAlloc_754_, 6, v_userNames_736_);
lean_ctor_set(v_reuseFailAlloc_754_, 7, v_lAssignment_737_);
lean_ctor_set(v_reuseFailAlloc_754_, 8, v___x_746_);
lean_ctor_set(v_reuseFailAlloc_754_, 9, v_dAssignment_739_);
lean_ctor_set(v_reuseFailAlloc_754_, 10, v_instanceTypedMVars_740_);
lean_ctor_set(v_reuseFailAlloc_754_, 11, v_synthNormMemo_741_);
v___x_748_ = v_reuseFailAlloc_754_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
lean_object* v___x_750_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_748_);
v___x_750_ = v___x_728_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_cache_723_);
lean_ctor_set(v_reuseFailAlloc_753_, 2, v_zetaDeltaFVarIds_724_);
lean_ctor_set(v_reuseFailAlloc_753_, 3, v_postponed_725_);
lean_ctor_set(v_reuseFailAlloc_753_, 4, v_diag_726_);
v___x_750_ = v_reuseFailAlloc_753_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_st_ref_put(v___y_719_, v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_745_);
return v___x_752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg___boxed(lean_object* v_mvarId_757_, lean_object* v_val_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg(v_mvarId_757_, v_val_758_, v___y_759_);
lean_dec(v___y_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2(lean_object* v_mvarId_762_, lean_object* v_c_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___x_772_; 
lean_inc(v_mvarId_762_);
v___x_772_ = l_Lean_MVarId_getType(v_mvarId_762_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_904_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_904_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_904_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_904_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_903_; 
v___x_777_ = l_Lean_instantiateMVars___at___00Lean_Meta_boolCondToProp_x3f_spec__0___redArg(v_a_773_, v___y_765_);
v_a_778_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_903_ == 0)
{
v___x_780_ = v___x_777_;
v_isShared_781_ = v_isSharedCheck_903_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_903_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
if (lean_obj_tag(v_a_778_) == 7)
{
lean_object* v_binderName_787_; lean_object* v_binderType_788_; lean_object* v_body_789_; uint8_t v_binderInfo_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v_binderName_787_ = lean_ctor_get(v_a_778_, 0);
lean_inc(v_binderName_787_);
v_binderType_788_ = lean_ctor_get(v_a_778_, 1);
lean_inc_ref(v_binderType_788_);
v_body_789_ = lean_ctor_get(v_a_778_, 2);
lean_inc_ref(v_body_789_);
v_binderInfo_790_ = lean_ctor_get_uint8(v_a_778_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_778_, 3);
v___x_791_ = l_Lean_Expr_cleanupAnnotations(v_binderType_788_);
v___x_792_ = l_Lean_Expr_isApp(v___x_791_);
if (v___x_792_ == 0)
{
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_780_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_769_;
}
else
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = l_Lean_Expr_appFnCleanup___redArg(v___x_791_);
v___x_794_ = l_Lean_Expr_isApp(v___x_793_);
if (v___x_794_ == 0)
{
lean_dec_ref(v___x_793_);
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_780_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_769_;
}
else
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = l_Lean_Expr_appFnCleanup___redArg(v___x_793_);
v___x_796_ = l_Lean_Expr_isApp(v___x_795_);
if (v___x_796_ == 0)
{
lean_dec_ref(v___x_795_);
lean_dec_ref(v___x_793_);
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_780_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_769_;
}
else
{
lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; uint8_t v_val_801_; 
v___x_797_ = l_Lean_Expr_appFnCleanup___redArg(v___x_795_);
v___x_798_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__1));
v___x_799_ = l_Lean_Expr_isConstOf(v___x_797_, v___x_798_);
lean_dec_ref(v___x_797_);
if (v___x_799_ == 0)
{
lean_dec_ref(v___x_795_);
lean_dec_ref(v___x_793_);
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_780_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_769_;
}
else
{
lean_object* v_arg_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v_arg_885_ = lean_ctor_get(v___x_795_, 1);
lean_inc_ref(v_arg_885_);
lean_dec_ref(v___x_795_);
v___x_886_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__6));
v___x_887_ = l_Lean_Expr_isConstOf(v_arg_885_, v___x_886_);
lean_dec_ref(v_arg_885_);
if (v___x_887_ == 0)
{
lean_dec_ref(v___x_793_);
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_888_; uint8_t v___x_889_; 
v_arg_888_ = lean_ctor_get(v___x_793_, 1);
lean_inc_ref(v_arg_888_);
lean_dec_ref(v___x_793_);
v___x_889_ = lean_expr_eqv(v_arg_888_, v_c_763_);
lean_dec_ref(v_arg_888_);
if (v___x_889_ == 0)
{
lean_dec_ref(v___x_791_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_del_object(v___x_775_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
lean_del_object(v___x_780_);
v_arg_890_ = lean_ctor_get(v___x_791_, 1);
lean_inc_ref(v_arg_890_);
lean_dec_ref(v___x_791_);
v___x_891_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__22));
v___x_892_ = l_Lean_Expr_isConstOf(v_arg_890_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_893_ = ((lean_object*)(l_Lean_Meta_boolCondToProp_x3f___closed__19));
v___x_894_ = l_Lean_Expr_isConstOf(v_arg_890_, v___x_893_);
lean_dec_ref(v_arg_890_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_897_; 
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
v___x_895_ = lean_box(0);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_895_);
v___x_897_ = v___x_775_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_del_object(v___x_775_);
v_val_801_ = v___x_892_;
goto v___jp_800_;
}
}
else
{
lean_dec_ref(v_arg_890_);
lean_del_object(v___x_775_);
v_val_801_ = v___x_799_;
goto v___jp_800_;
}
}
}
}
v___jp_800_:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_boolCondToProp_x3f(v_c_763_, v_val_801_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_876_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_876_ == 0)
{
v___x_805_ = v___x_802_;
v_isShared_806_ = v_isSharedCheck_876_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_876_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
if (lean_obj_tag(v_a_803_) == 1)
{
lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_871_; 
lean_del_object(v___x_805_);
v_val_807_ = lean_ctor_get(v_a_803_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_a_803_);
if (v_isSharedCheck_871_ == 0)
{
v___x_809_ = v_a_803_;
v_isShared_810_ = v_isSharedCheck_871_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_dec(v_a_803_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_871_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v_fst_811_; lean_object* v_snd_812_; lean_object* v___x_813_; lean_object* v___f_814_; uint8_t v___x_815_; lean_object* v___x_816_; 
v_fst_811_ = lean_ctor_get(v_val_807_, 0);
lean_inc(v_fst_811_);
v_snd_812_ = lean_ctor_get(v_val_807_, 1);
lean_inc_n(v_snd_812_, 2);
lean_dec(v_val_807_);
v___x_813_ = lean_box(v___x_799_);
v___f_814_ = lean_alloc_closure((void*)(l_Lean_MVarId_boolCondBinderToProp_x3f___lam__0___boxed), 9, 3);
lean_closure_set(v___f_814_, 0, v_snd_812_);
lean_closure_set(v___f_814_, 1, v_body_789_);
lean_closure_set(v___f_814_, 2, v___x_813_);
v___x_815_ = 0;
lean_inc(v_binderName_787_);
v___x_816_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(v_binderName_787_, v_binderInfo_790_, v_fst_811_, v___f_814_, v___x_815_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
lean_inc(v_mvarId_762_);
v___x_818_ = l_Lean_MVarId_getTag(v_mvarId_762_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
v___x_820_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_817_, v_a_819_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_822_; lean_object* v___f_823_; lean_object* v___x_824_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc_n(v_a_821_, 2);
lean_dec_ref_known(v___x_820_, 1);
v___x_822_ = lean_box(v___x_799_);
v___f_823_ = lean_alloc_closure((void*)(l_Lean_MVarId_boolCondBinderToProp_x3f___lam__1___boxed), 9, 3);
lean_closure_set(v___f_823_, 0, v_snd_812_);
lean_closure_set(v___f_823_, 1, v_a_821_);
lean_closure_set(v___f_823_, 2, v___x_822_);
v___x_824_ = l_Lean_Meta_withLocalDecl___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__0___redArg(v_binderName_787_, v_binderInfo_790_, v_binderType_788_, v___f_823_, v___x_815_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_837_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_824_, 1);
v___x_826_ = l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg(v_mvarId_762_, v_a_825_, v___y_765_);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v___x_826_, 0);
lean_dec(v_unused_838_);
v___x_828_ = v___x_826_;
v_isShared_829_ = v_isSharedCheck_837_;
goto v_resetjp_827_;
}
else
{
lean_dec(v___x_826_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_837_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = l_Lean_Expr_mvarId_x21(v_a_821_);
lean_dec(v_a_821_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_830_);
v___x_832_ = v___x_809_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_836_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_834_; 
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_832_);
v___x_834_ = v___x_828_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_a_821_);
lean_del_object(v___x_809_);
lean_dec(v_mvarId_762_);
v_a_839_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_824_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_824_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec(v_snd_812_);
lean_del_object(v___x_809_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec(v_mvarId_762_);
v_a_847_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_820_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_820_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec(v_a_817_);
lean_dec(v_snd_812_);
lean_del_object(v___x_809_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec(v_mvarId_762_);
v_a_855_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_818_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_818_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_snd_812_);
lean_del_object(v___x_809_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec(v_mvarId_762_);
v_a_863_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_816_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_816_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_874_; 
lean_dec(v_a_803_);
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec(v_mvarId_762_);
v___x_872_ = lean_box(0);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_872_);
v___x_874_ = v___x_805_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec_ref(v_body_789_);
lean_dec_ref(v_binderType_788_);
lean_dec(v_binderName_787_);
lean_dec(v_mvarId_762_);
v_a_877_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_802_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_802_);
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
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
}
else
{
lean_object* v___x_899_; lean_object* v___x_901_; 
lean_del_object(v___x_780_);
lean_dec(v_a_778_);
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
v___x_899_ = lean_box(0);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_899_);
v___x_901_ = v___x_775_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
v___jp_782_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_box(0);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v___x_783_);
v___x_785_ = v___x_780_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec_ref(v_c_763_);
lean_dec(v_mvarId_762_);
v_a_905_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_772_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_772_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
v___jp_769_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_box(0);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2___boxed(lean_object* v_mvarId_913_, lean_object* v_c_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2(v_mvarId_913_, v_c_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f(lean_object* v_mvarId_921_, lean_object* v_c_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___f_928_; lean_object* v___x_929_; 
lean_inc(v_mvarId_921_);
v___f_928_ = lean_alloc_closure((void*)(l_Lean_MVarId_boolCondBinderToProp_x3f___lam__2___boxed), 7, 2);
lean_closure_set(v___f_928_, 0, v_mvarId_921_);
lean_closure_set(v___f_928_, 1, v_c_922_);
v___x_929_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__2___redArg(v_mvarId_921_, v___f_928_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_boolCondBinderToProp_x3f___boxed(lean_object* v_mvarId_930_, lean_object* v_c_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_MVarId_boolCondBinderToProp_x3f(v_mvarId_930_, v_c_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1(lean_object* v_mvarId_938_, lean_object* v_val_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___redArg(v_mvarId_938_, v_val_939_, v___y_941_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1___boxed(lean_object* v_mvarId_946_, lean_object* v_val_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1(v_mvarId_946_, v_val_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_x_957_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1___redArg(v_x_955_, v_x_956_, v_x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_959_, lean_object* v_x_960_, size_t v_x_961_, size_t v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___redArg(v_x_960_, v_x_961_, v_x_962_, v_x_963_, v_x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_966_, lean_object* v_x_967_, lean_object* v_x_968_, lean_object* v_x_969_, lean_object* v_x_970_, lean_object* v_x_971_){
_start:
{
size_t v_x_5043__boxed_972_; size_t v_x_5044__boxed_973_; lean_object* v_res_974_; 
v_x_5043__boxed_972_ = lean_unbox_usize(v_x_968_);
lean_dec(v_x_968_);
v_x_5044__boxed_973_ = lean_unbox_usize(v_x_969_);
lean_dec(v_x_969_);
v_res_974_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3(v_00_u03b2_966_, v_x_967_, v_x_5043__boxed_972_, v_x_5044__boxed_973_, v_x_970_, v_x_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_975_, lean_object* v_n_976_, lean_object* v_k_977_, lean_object* v_v_978_){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4___redArg(v_n_976_, v_k_977_, v_v_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_980_, size_t v_depth_981_, lean_object* v_keys_982_, lean_object* v_vals_983_, lean_object* v_heq_984_, lean_object* v_i_985_, lean_object* v_entries_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_981_, v_keys_982_, v_vals_983_, v_i_985_, v_entries_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_988_, lean_object* v_depth_989_, lean_object* v_keys_990_, lean_object* v_vals_991_, lean_object* v_heq_992_, lean_object* v_i_993_, lean_object* v_entries_994_){
_start:
{
size_t v_depth_boxed_995_; lean_object* v_res_996_; 
v_depth_boxed_995_ = lean_unbox_usize(v_depth_989_);
lean_dec(v_depth_989_);
v_res_996_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_988_, v_depth_boxed_995_, v_keys_990_, v_vals_991_, v_heq_992_, v_i_993_, v_entries_994_);
lean_dec_ref(v_vals_991_);
lean_dec_ref(v_keys_990_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_997_, lean_object* v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_, lean_object* v_x_1001_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_boolCondBinderToProp_x3f_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_998_, v_x_999_, v_x_1000_, v_x_1001_);
return v___x_1002_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_BoolToProp_0__Lean_initFn_00___x40_Lean_Meta_Tactic_BoolToProp_428426324____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_bool__to__prop = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_bool__to__prop);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BoolToProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BoolToProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BoolToProp(builtin);
}
#ifdef __cplusplus
}
#endif
