// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.Core
// Imports: public import Init.Simproc public import Lean.Meta.Tactic.Simp.Simproc import Lean.Meta.CtorRecognizer import Init.UDecidable
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpExtension_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_constructorApp_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_reduceIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_reduceIte___closed__0 = (const lean_object*)&l_reduceIte___closed__0_value;
static const lean_string_object l_reduceIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_reduceIte___closed__1 = (const lean_object*)&l_reduceIte___closed__1_value;
static const lean_ctor_object l_reduceIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_reduceIte___closed__2 = (const lean_object*)&l_reduceIte___closed__2_value;
static const lean_string_object l_reduceIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ite_eq_right_of_eq_false"};
static const lean_object* l_reduceIte___closed__3 = (const lean_object*)&l_reduceIte___closed__3_value;
static const lean_ctor_object l_reduceIte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(85, 26, 223, 35, 242, 130, 83, 13)}};
static const lean_object* l_reduceIte___closed__4 = (const lean_object*)&l_reduceIte___closed__4_value;
static const lean_string_object l_reduceIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ite_eq_left_of_eq_true"};
static const lean_object* l_reduceIte___closed__5 = (const lean_object*)&l_reduceIte___closed__5_value;
static const lean_ctor_object l_reduceIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(73, 84, 15, 184, 226, 12, 142, 9)}};
static const lean_object* l_reduceIte___closed__6 = (const lean_object*)&l_reduceIte___closed__6_value;
LEAN_EXPORT lean_object* l_reduceIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(1, 182, 106, 10, 77, 189, 166, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceIte___closed__2_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26____boxed(lean_object*);
static const lean_string_object l_reduceDIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_reduceDIte___closed__0 = (const lean_object*)&l_reduceDIte___closed__0_value;
static const lean_ctor_object l_reduceDIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_reduceDIte___closed__1 = (const lean_object*)&l_reduceDIte___closed__1_value;
static const lean_string_object l_reduceDIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "of_eq_false"};
static const lean_object* l_reduceDIte___closed__2 = (const lean_object*)&l_reduceDIte___closed__2_value;
static const lean_ctor_object l_reduceDIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__2_value),LEAN_SCALAR_PTR_LITERAL(182, 110, 142, 77, 120, 210, 227, 9)}};
static const lean_object* l_reduceDIte___closed__3 = (const lean_object*)&l_reduceDIte___closed__3_value;
static lean_once_cell_t l_reduceDIte___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceDIte___closed__4;
static const lean_string_object l_reduceDIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l_reduceDIte___closed__5 = (const lean_object*)&l_reduceDIte___closed__5_value;
static const lean_ctor_object l_reduceDIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l_reduceDIte___closed__6 = (const lean_object*)&l_reduceDIte___closed__6_value;
static const lean_string_object l_reduceDIte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "of_eq_true"};
static const lean_object* l_reduceDIte___closed__7 = (const lean_object*)&l_reduceDIte___closed__7_value;
static const lean_ctor_object l_reduceDIte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__7_value),LEAN_SCALAR_PTR_LITERAL(180, 216, 190, 52, 49, 30, 207, 178)}};
static const lean_object* l_reduceDIte___closed__8 = (const lean_object*)&l_reduceDIte___closed__8_value;
static lean_once_cell_t l_reduceDIte___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceDIte___closed__9;
static const lean_string_object l_reduceDIte___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l_reduceDIte___closed__10 = (const lean_object*)&l_reduceDIte___closed__10_value;
static const lean_ctor_object l_reduceDIte___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__10_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l_reduceDIte___closed__11 = (const lean_object*)&l_reduceDIte___closed__11_value;
LEAN_EXPORT lean_object* l_reduceDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(30, 101, 22, 109, 248, 175, 82, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceDIte___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26____boxed(lean_object*);
static const lean_string_object l_reduceUIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_reduceUIte___closed__0 = (const lean_object*)&l_reduceUIte___closed__0_value;
static const lean_ctor_object l_reduceUIte___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUIte___closed__1_value_aux_0),((lean_object*)&l_reduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_reduceUIte___closed__1 = (const lean_object*)&l_reduceUIte___closed__1_value;
static const lean_ctor_object l_reduceUIte___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUIte___closed__2_value_aux_0),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(122, 115, 208, 198, 190, 254, 95, 184)}};
static const lean_object* l_reduceUIte___closed__2 = (const lean_object*)&l_reduceUIte___closed__2_value;
static const lean_ctor_object l_reduceUIte___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUIte___closed__3_value_aux_0),((lean_object*)&l_reduceIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(110, 1, 60, 220, 137, 224, 158, 45)}};
static const lean_object* l_reduceUIte___closed__3 = (const lean_object*)&l_reduceUIte___closed__3_value;
LEAN_EXPORT lean_object* l_reduceUIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceUIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceUIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(255, 142, 111, 240, 107, 133, 253, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceUIte___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26____boxed(lean_object*);
static const lean_ctor_object l_reduceUDIte___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUDIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUDIte___closed__0_value_aux_0),((lean_object*)&l_reduceDIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_reduceUDIte___closed__0 = (const lean_object*)&l_reduceUDIte___closed__0_value;
static const lean_ctor_object l_reduceUDIte___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUDIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUDIte___closed__1_value_aux_0),((lean_object*)&l_reduceDIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(90, 192, 67, 110, 116, 205, 254, 11)}};
static const lean_object* l_reduceUDIte___closed__1 = (const lean_object*)&l_reduceUDIte___closed__1_value;
static const lean_ctor_object l_reduceUDIte___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceUIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_reduceUDIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceUDIte___closed__2_value_aux_0),((lean_object*)&l_reduceDIte___closed__10_value),LEAN_SCALAR_PTR_LITERAL(83, 13, 140, 40, 232, 128, 87, 125)}};
static const lean_object* l_reduceUDIte___closed__2 = (const lean_object*)&l_reduceUDIte___closed__2_value;
LEAN_EXPORT lean_object* l_reduceUDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceUDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceUDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(25, 241, 224, 222, 100, 155, 35, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceUDIte___closed__0_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "bool_to_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(230, 90, 229, 136, 228, 174, 42, 173)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "of_not_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__20_value),LEAN_SCALAR_PTR_LITERAL(210, 234, 137, 194, 170, 157, 248, 165)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_reduceCond___closed__0 = (const lean_object*)&l_reduceCond___closed__0_value;
static const lean_ctor_object l_reduceCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_reduceCond___closed__1 = (const lean_object*)&l_reduceCond___closed__1_value;
static const lean_string_object l_reduceCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_neg"};
static const lean_object* l_reduceCond___closed__2 = (const lean_object*)&l_reduceCond___closed__2_value;
static const lean_ctor_object l_reduceCond___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceCond___closed__3_value_aux_0),((lean_object*)&l_reduceCond___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 12, 112, 38, 148, 75, 173, 29)}};
static const lean_object* l_reduceCond___closed__3 = (const lean_object*)&l_reduceCond___closed__3_value;
static const lean_string_object l_reduceCond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_pos"};
static const lean_object* l_reduceCond___closed__4 = (const lean_object*)&l_reduceCond___closed__4_value;
static const lean_ctor_object l_reduceCond___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceCond___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceCond___closed__5_value_aux_0),((lean_object*)&l_reduceCond___closed__4_value),LEAN_SCALAR_PTR_LITERAL(92, 34, 41, 42, 220, 235, 208, 212)}};
static const lean_object* l_reduceCond___closed__5 = (const lean_object*)&l_reduceCond___closed__5_value;
LEAN_EXPORT lean_object* l_reduceCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(143, 55, 147, 85, 15, 122, 171, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceCond___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26____boxed(lean_object*);
static const lean_string_object l_reduceDCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_reduceDCond___closed__0 = (const lean_object*)&l_reduceDCond___closed__0_value;
static const lean_ctor_object l_reduceDCond___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceDCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceDCond___closed__1_value_aux_0),((lean_object*)&l_reduceDCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_reduceDCond___closed__1 = (const lean_object*)&l_reduceDCond___closed__1_value;
static const lean_string_object l_reduceDCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_neg"};
static const lean_object* l_reduceDCond___closed__2 = (const lean_object*)&l_reduceDCond___closed__2_value;
static const lean_ctor_object l_reduceDCond___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceDCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceDCond___closed__3_value_aux_0),((lean_object*)&l_reduceDCond___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 205, 190, 244, 239, 213, 246, 117)}};
static const lean_object* l_reduceDCond___closed__3 = (const lean_object*)&l_reduceDCond___closed__3_value;
static const lean_string_object l_reduceDCond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_pos"};
static const lean_object* l_reduceDCond___closed__4 = (const lean_object*)&l_reduceDCond___closed__4_value;
static const lean_ctor_object l_reduceDCond___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceDCond___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceDCond___closed__5_value_aux_0),((lean_object*)&l_reduceDCond___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 105, 2, 180, 243, 3, 49, 224)}};
static const lean_object* l_reduceDCond___closed__5 = (const lean_object*)&l_reduceDCond___closed__5_value;
LEAN_EXPORT lean_object* l_reduceDCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceDCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(67, 98, 40, 4, 69, 234, 115, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceDCond___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26____boxed(lean_object*);
static const lean_ctor_object l_dreduceIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_dreduceIte___closed__0 = (const lean_object*)&l_dreduceIte___closed__0_value;
static const lean_string_object l_dreduceIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_dreduceIte___closed__1 = (const lean_object*)&l_dreduceIte___closed__1_value;
static const lean_ctor_object l_dreduceIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_dreduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_dreduceIte___closed__2 = (const lean_object*)&l_dreduceIte___closed__2_value;
LEAN_EXPORT lean_object* l_dreduceIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dreduceIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(20, 216, 99, 140, 103, 209, 78, 255)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dreduceDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(222, 220, 170, 50, 32, 2, 19, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_dreduceCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dreduceCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(102, 76, 67, 108, 197, 92, 18, 236)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26____boxed(lean_object*);
static const lean_string_object l_dreduceDCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_dreduceDCond___closed__0 = (const lean_object*)&l_dreduceDCond___closed__0_value;
static const lean_ctor_object l_dreduceDCond___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_dreduceDCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_dreduceDCond___closed__1_value_aux_0),((lean_object*)&l_dreduceDCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_dreduceDCond___closed__1 = (const lean_object*)&l_dreduceDCond___closed__1_value;
static lean_once_cell_t l_dreduceDCond___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_dreduceDCond___closed__2;
LEAN_EXPORT lean_object* l_dreduceDCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceDCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dreduceDCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(144, 212, 96, 92, 94, 223, 0, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceCtorEq___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_reduceCtorEq___lam__2___closed__0 = (const lean_object*)&l_reduceCtorEq___lam__2___closed__0_value;
static const lean_ctor_object l_reduceCtorEq___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_reduceCtorEq___lam__2___closed__1 = (const lean_object*)&l_reduceCtorEq___lam__2___closed__1_value;
static lean_once_cell_t l_reduceCtorEq___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceCtorEq___lam__2___closed__2;
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_reduceCtorEq___closed__0 = (const lean_object*)&l_reduceCtorEq___closed__0_value;
static const lean_ctor_object l_reduceCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_reduceCtorEq___closed__1 = (const lean_object*)&l_reduceCtorEq___closed__1_value;
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27____boxed(lean_object*);
LEAN_EXPORT lean_object* l_reduceIte(lean_object* v_e_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_12_, v_a_17_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v_a_25_; lean_object* v___x_26_; uint8_t v___x_27_; 
v_a_25_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_a_25_);
lean_dec_ref_known(v___x_24_, 1);
v___x_26_ = l_Lean_Expr_cleanupAnnotations(v_a_25_);
lean_dec(v_a_25_);
v___x_27_ = l_Lean_Expr_isApp(v___x_26_);
if (v___x_27_ == 0)
{
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = l_Lean_Expr_appFnCleanup___redArg(v___x_26_);
v___x_29_ = l_Lean_Expr_isApp(v___x_28_);
if (v___x_29_ == 0)
{
lean_dec_ref(v___x_28_);
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = l_Lean_Expr_appFnCleanup___redArg(v___x_28_);
v___x_31_ = l_Lean_Expr_isApp(v___x_30_);
if (v___x_31_ == 0)
{
lean_dec_ref(v___x_30_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = l_Lean_Expr_appFnCleanup___redArg(v___x_30_);
v___x_33_ = l_Lean_Expr_isApp(v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_30_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = l_Lean_Expr_appFnCleanup___redArg(v___x_32_);
v___x_35_ = l_Lean_Expr_isApp(v___x_34_);
if (v___x_35_ == 0)
{
lean_dec_ref(v___x_34_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_30_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_36_ = l_Lean_Expr_appFnCleanup___redArg(v___x_34_);
v___x_37_ = ((lean_object*)(l_reduceIte___closed__2));
v___x_38_ = l_Lean_Expr_isConstOf(v___x_36_, v___x_37_);
if (v___x_38_ == 0)
{
lean_dec_ref(v___x_36_);
lean_dec_ref(v___x_34_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_30_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v___x_26_);
goto v___jp_21_;
}
else
{
lean_object* v_arg_39_; lean_object* v_arg_40_; lean_object* v_arg_41_; lean_object* v_arg_42_; lean_object* v_arg_43_; lean_object* v___x_44_; 
v_arg_39_ = lean_ctor_get(v___x_26_, 1);
lean_inc_ref(v_arg_39_);
lean_dec_ref(v___x_26_);
v_arg_40_ = lean_ctor_get(v___x_28_, 1);
lean_inc_ref(v_arg_40_);
lean_dec_ref(v___x_28_);
v_arg_41_ = lean_ctor_get(v___x_30_, 1);
lean_inc_ref(v_arg_41_);
lean_dec_ref(v___x_30_);
v_arg_42_ = lean_ctor_get(v___x_32_, 1);
lean_inc_ref_n(v_arg_42_, 2);
lean_dec_ref(v___x_32_);
v_arg_43_ = lean_ctor_get(v___x_34_, 1);
lean_inc_ref(v_arg_43_);
lean_dec_ref(v___x_34_);
lean_inc(v_a_19_);
lean_inc_ref(v_a_18_);
lean_inc(v_a_17_);
lean_inc_ref(v_a_16_);
lean_inc(v_a_15_);
lean_inc_ref(v_a_14_);
lean_inc(v_a_13_);
v___x_44_ = lean_simp(v_arg_42_, v_a_13_, v_a_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_, v_a_19_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_106_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_106_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_106_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_106_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_expr_49_; uint8_t v___x_50_; 
v_expr_49_ = lean_ctor_get(v_a_45_, 0);
v___x_50_ = l_Lean_Expr_isTrue(v_expr_49_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = l_Lean_Expr_isFalse(v_expr_49_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_54_; 
lean_dec(v_a_45_);
lean_dec_ref(v_arg_43_);
lean_dec_ref(v_arg_42_);
lean_dec_ref(v_arg_41_);
lean_dec_ref(v_arg_40_);
lean_dec_ref(v_arg_39_);
lean_dec_ref(v___x_36_);
v___x_52_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_52_);
v___x_54_ = v___x_47_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
else
{
lean_object* v___x_56_; 
lean_del_object(v___x_47_);
v___x_56_ = l_Lean_Meta_Simp_Result_getProof(v_a_45_, v_a_16_, v_a_17_, v_a_18_, v_a_19_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_72_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_72_ == 0)
{
v___x_59_ = v___x_56_;
v_isShared_60_ = v_isSharedCheck_72_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_56_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_72_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_61_ = ((lean_object*)(l_reduceIte___closed__4));
v___x_62_ = l_Lean_Expr_constLevels_x21(v___x_36_);
lean_dec_ref(v___x_36_);
v___x_63_ = l_Lean_mkConst(v___x_61_, v___x_62_);
lean_inc_ref(v_arg_39_);
v___x_64_ = l_Lean_mkApp5(v___x_63_, v_arg_43_, v_arg_42_, v_arg_41_, v_arg_40_, v_arg_39_);
v___x_65_ = l_Lean_Expr_app___override(v___x_64_, v_a_57_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_67_, 0, v_arg_39_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*2, v___x_38_);
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v___x_68_);
v___x_70_ = v___x_59_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_80_; 
lean_dec_ref(v_arg_43_);
lean_dec_ref(v_arg_42_);
lean_dec_ref(v_arg_41_);
lean_dec_ref(v_arg_40_);
lean_dec_ref(v_arg_39_);
lean_dec_ref(v___x_36_);
v_a_73_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_80_ == 0)
{
v___x_75_ = v___x_56_;
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_56_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_a_73_);
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
lean_object* v___x_81_; 
lean_del_object(v___x_47_);
v___x_81_ = l_Lean_Meta_Simp_Result_getProof(v_a_45_, v_a_16_, v_a_17_, v_a_18_, v_a_19_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_97_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_97_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_97_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_97_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_86_ = ((lean_object*)(l_reduceIte___closed__6));
v___x_87_ = l_Lean_Expr_constLevels_x21(v___x_36_);
lean_dec_ref(v___x_36_);
v___x_88_ = l_Lean_mkConst(v___x_86_, v___x_87_);
lean_inc_ref(v_arg_40_);
v___x_89_ = l_Lean_mkApp5(v___x_88_, v_arg_43_, v_arg_42_, v_arg_41_, v_arg_40_, v_arg_39_);
v___x_90_ = l_Lean_Expr_app___override(v___x_89_, v_a_82_);
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_92_, 0, v_arg_40_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
lean_ctor_set_uint8(v___x_92_, sizeof(void*)*2, v___x_38_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v___x_93_);
v___x_95_ = v___x_84_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
lean_dec_ref(v_arg_43_);
lean_dec_ref(v_arg_42_);
lean_dec_ref(v_arg_41_);
lean_dec_ref(v_arg_40_);
lean_dec_ref(v_arg_39_);
lean_dec_ref(v___x_36_);
v_a_98_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_81_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_81_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
lean_dec_ref(v_arg_43_);
lean_dec_ref(v_arg_42_);
lean_dec_ref(v_arg_41_);
lean_dec_ref(v_arg_40_);
lean_dec_ref(v_arg_39_);
lean_dec_ref(v___x_36_);
v_a_107_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_44_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_44_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
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
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
v_a_115_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_24_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_24_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
v___jp_21_:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_reduceIte___boxed(lean_object* v_e_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_reduceIte(v_e_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_150_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_151_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_152_ = lean_alloc_closure((void*)(l_reduceIte___boxed), 9, 0);
v___x_153_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_150_, v___x_151_, v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22____boxed(lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_();
return v_res_155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_alloc_closure((void*)(l_reduceIte___boxed), 9, 0);
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_160_ = 0;
v___x_161_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_);
v___x_162_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_159_, v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24____boxed(lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_();
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_167_ = 0;
v___x_168_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_);
v___x_169_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_166_, v___x_167_, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26____boxed(lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26_();
return v_res_171_;
}
}
static lean_object* _init_l_reduceDIte___closed__4(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_box(0);
v___x_179_ = ((lean_object*)(l_reduceDIte___closed__3));
v___x_180_ = l_Lean_mkConst(v___x_179_, v___x_178_);
return v___x_180_;
}
}
static lean_object* _init_l_reduceDIte___closed__9(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = lean_box(0);
v___x_188_ = ((lean_object*)(l_reduceDIte___closed__8));
v___x_189_ = l_Lean_mkConst(v___x_188_, v___x_187_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_reduceDIte(lean_object* v_e_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_193_, v_a_198_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
lean_dec_ref_known(v___x_205_, 1);
v___x_207_ = l_Lean_Expr_cleanupAnnotations(v_a_206_);
lean_dec(v_a_206_);
v___x_208_ = l_Lean_Expr_isApp(v___x_207_);
if (v___x_208_ == 0)
{
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = l_Lean_Expr_appFnCleanup___redArg(v___x_207_);
v___x_210_ = l_Lean_Expr_isApp(v___x_209_);
if (v___x_210_ == 0)
{
lean_dec_ref(v___x_209_);
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_211_ = l_Lean_Expr_appFnCleanup___redArg(v___x_209_);
v___x_212_ = l_Lean_Expr_isApp(v___x_211_);
if (v___x_212_ == 0)
{
lean_dec_ref(v___x_211_);
lean_dec_ref(v___x_209_);
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = l_Lean_Expr_appFnCleanup___redArg(v___x_211_);
v___x_214_ = l_Lean_Expr_isApp(v___x_213_);
if (v___x_214_ == 0)
{
lean_dec_ref(v___x_213_);
lean_dec_ref(v___x_211_);
lean_dec_ref(v___x_209_);
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = l_Lean_Expr_appFnCleanup___redArg(v___x_213_);
v___x_216_ = l_Lean_Expr_isApp(v___x_215_);
if (v___x_216_ == 0)
{
lean_dec_ref(v___x_215_);
lean_dec_ref(v___x_213_);
lean_dec_ref(v___x_211_);
lean_dec_ref(v___x_209_);
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_217_ = l_Lean_Expr_appFnCleanup___redArg(v___x_215_);
v___x_218_ = ((lean_object*)(l_reduceDIte___closed__1));
v___x_219_ = l_Lean_Expr_isConstOf(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v___x_217_);
lean_dec_ref(v___x_215_);
lean_dec_ref(v___x_213_);
lean_dec_ref(v___x_211_);
lean_dec_ref(v___x_209_);
lean_dec_ref(v___x_207_);
goto v___jp_202_;
}
else
{
lean_object* v_arg_220_; lean_object* v_arg_221_; lean_object* v_arg_222_; lean_object* v_arg_223_; lean_object* v_arg_224_; lean_object* v___x_225_; 
v_arg_220_ = lean_ctor_get(v___x_207_, 1);
lean_inc_ref(v_arg_220_);
lean_dec_ref(v___x_207_);
v_arg_221_ = lean_ctor_get(v___x_209_, 1);
lean_inc_ref(v_arg_221_);
lean_dec_ref(v___x_209_);
v_arg_222_ = lean_ctor_get(v___x_211_, 1);
lean_inc_ref(v_arg_222_);
lean_dec_ref(v___x_211_);
v_arg_223_ = lean_ctor_get(v___x_213_, 1);
lean_inc_ref_n(v_arg_223_, 2);
lean_dec_ref(v___x_213_);
v_arg_224_ = lean_ctor_get(v___x_215_, 1);
lean_inc_ref(v_arg_224_);
lean_dec_ref(v___x_215_);
lean_inc(v_a_200_);
lean_inc_ref(v_a_199_);
lean_inc(v_a_198_);
lean_inc_ref(v_a_197_);
lean_inc(v_a_196_);
lean_inc_ref(v_a_195_);
lean_inc(v_a_194_);
v___x_225_ = lean_simp(v_arg_223_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_295_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_295_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_295_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_295_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v_expr_230_; uint8_t v___x_231_; 
v_expr_230_ = lean_ctor_get(v_a_226_, 0);
v___x_231_ = l_Lean_Expr_isTrue(v_expr_230_);
if (v___x_231_ == 0)
{
uint8_t v___x_232_; 
v___x_232_ = l_Lean_Expr_isFalse(v_expr_230_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_235_; 
lean_dec(v_a_226_);
lean_dec_ref(v_arg_224_);
lean_dec_ref(v_arg_223_);
lean_dec_ref(v_arg_222_);
lean_dec_ref(v_arg_221_);
lean_dec_ref(v_arg_220_);
lean_dec_ref(v___x_217_);
v___x_233_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_233_);
v___x_235_ = v___x_228_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
lean_object* v___x_237_; 
lean_del_object(v___x_228_);
v___x_237_ = l_Lean_Meta_Simp_Result_getProof(v_a_226_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_257_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_257_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_257_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_257_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_242_ = lean_obj_once(&l_reduceDIte___closed__4, &l_reduceDIte___closed__4_once, _init_l_reduceDIte___closed__4);
lean_inc(v_a_238_);
lean_inc_ref(v_arg_223_);
v___x_243_ = l_Lean_mkAppB(v___x_242_, v_arg_223_, v_a_238_);
lean_inc_ref(v_arg_220_);
v___x_244_ = l_Lean_Expr_app___override(v_arg_220_, v___x_243_);
v___x_245_ = l_Lean_Expr_headBeta(v___x_244_);
v___x_246_ = ((lean_object*)(l_reduceDIte___closed__6));
v___x_247_ = l_Lean_Expr_constLevels_x21(v___x_217_);
lean_dec_ref(v___x_217_);
v___x_248_ = l_Lean_mkConst(v___x_246_, v___x_247_);
v___x_249_ = l_Lean_mkApp5(v___x_248_, v_arg_224_, v_arg_223_, v_arg_222_, v_arg_221_, v_arg_220_);
v___x_250_ = l_Lean_Expr_app___override(v___x_249_, v_a_238_);
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
v___x_252_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_252_, 0, v___x_245_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*2, v___x_219_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_253_);
v___x_255_ = v___x_240_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v_arg_224_);
lean_dec_ref(v_arg_223_);
lean_dec_ref(v_arg_222_);
lean_dec_ref(v_arg_221_);
lean_dec_ref(v_arg_220_);
lean_dec_ref(v___x_217_);
v_a_258_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_237_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_237_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
else
{
lean_object* v___x_266_; 
lean_del_object(v___x_228_);
v___x_266_ = l_Lean_Meta_Simp_Result_getProof(v_a_226_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_286_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_286_ == 0)
{
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_286_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_286_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_271_ = lean_obj_once(&l_reduceDIte___closed__9, &l_reduceDIte___closed__9_once, _init_l_reduceDIte___closed__9);
lean_inc(v_a_267_);
lean_inc_ref(v_arg_223_);
v___x_272_ = l_Lean_mkAppB(v___x_271_, v_arg_223_, v_a_267_);
lean_inc_ref(v_arg_221_);
v___x_273_ = l_Lean_Expr_app___override(v_arg_221_, v___x_272_);
v___x_274_ = l_Lean_Expr_headBeta(v___x_273_);
v___x_275_ = ((lean_object*)(l_reduceDIte___closed__11));
v___x_276_ = l_Lean_Expr_constLevels_x21(v___x_217_);
lean_dec_ref(v___x_217_);
v___x_277_ = l_Lean_mkConst(v___x_275_, v___x_276_);
v___x_278_ = l_Lean_mkApp5(v___x_277_, v_arg_224_, v_arg_223_, v_arg_222_, v_arg_221_, v_arg_220_);
v___x_279_ = l_Lean_Expr_app___override(v___x_278_, v_a_267_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
v___x_281_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_281_, 0, v___x_274_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*2, v___x_219_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_282_);
v___x_284_ = v___x_269_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v_arg_224_);
lean_dec_ref(v_arg_223_);
lean_dec_ref(v_arg_222_);
lean_dec_ref(v_arg_221_);
lean_dec_ref(v_arg_220_);
lean_dec_ref(v___x_217_);
v_a_287_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_266_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_266_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref(v_arg_224_);
lean_dec_ref(v_arg_223_);
lean_dec_ref(v_arg_222_);
lean_dec_ref(v_arg_221_);
lean_dec_ref(v_arg_220_);
lean_dec_ref(v___x_217_);
v_a_296_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_225_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_225_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
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
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_a_304_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_205_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_205_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
v___jp_202_:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l_reduceDIte___boxed(lean_object* v_e_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_reduceDIte(v_e_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
lean_dec(v_a_317_);
lean_dec_ref(v_a_316_);
lean_dec(v_a_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_a_313_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_340_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_341_ = lean_alloc_closure((void*)(l_reduceDIte___boxed), 9, 0);
v___x_342_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_339_, v___x_340_, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22____boxed(lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_();
return v_res_344_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_alloc_closure((void*)(l_reduceDIte___boxed), 9, 0);
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_349_ = 0;
v___x_350_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_);
v___x_351_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_348_, v___x_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24____boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_();
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_355_; uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_356_ = 0;
v___x_357_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_);
v___x_358_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_355_, v___x_356_, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26____boxed(lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26_();
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_reduceUIte(lean_object* v_e_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_371_, v_a_376_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_383_, 1);
v___x_385_ = l_Lean_Expr_cleanupAnnotations(v_a_384_);
lean_dec(v_a_384_);
v___x_386_ = l_Lean_Expr_isApp(v___x_385_);
if (v___x_386_ == 0)
{
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = l_Lean_Expr_appFnCleanup___redArg(v___x_385_);
v___x_388_ = l_Lean_Expr_isApp(v___x_387_);
if (v___x_388_ == 0)
{
lean_dec_ref(v___x_387_);
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = l_Lean_Expr_appFnCleanup___redArg(v___x_387_);
v___x_390_ = l_Lean_Expr_isApp(v___x_389_);
if (v___x_390_ == 0)
{
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_387_);
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = l_Lean_Expr_appFnCleanup___redArg(v___x_389_);
v___x_392_ = l_Lean_Expr_isApp(v___x_391_);
if (v___x_392_ == 0)
{
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_387_);
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = l_Lean_Expr_appFnCleanup___redArg(v___x_391_);
v___x_394_ = l_Lean_Expr_isApp(v___x_393_);
if (v___x_394_ == 0)
{
lean_dec_ref(v___x_393_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_387_);
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_395_ = l_Lean_Expr_appFnCleanup___redArg(v___x_393_);
v___x_396_ = ((lean_object*)(l_reduceUIte___closed__1));
v___x_397_ = l_Lean_Expr_isConstOf(v___x_395_, v___x_396_);
if (v___x_397_ == 0)
{
lean_dec_ref(v___x_395_);
lean_dec_ref(v___x_393_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_387_);
lean_dec_ref(v___x_385_);
goto v___jp_380_;
}
else
{
lean_object* v_arg_398_; lean_object* v_arg_399_; lean_object* v_arg_400_; lean_object* v_arg_401_; lean_object* v_arg_402_; lean_object* v___x_403_; 
v_arg_398_ = lean_ctor_get(v___x_385_, 1);
lean_inc_ref(v_arg_398_);
lean_dec_ref(v___x_385_);
v_arg_399_ = lean_ctor_get(v___x_387_, 1);
lean_inc_ref(v_arg_399_);
lean_dec_ref(v___x_387_);
v_arg_400_ = lean_ctor_get(v___x_389_, 1);
lean_inc_ref(v_arg_400_);
lean_dec_ref(v___x_389_);
v_arg_401_ = lean_ctor_get(v___x_391_, 1);
lean_inc_ref_n(v_arg_401_, 2);
lean_dec_ref(v___x_391_);
v_arg_402_ = lean_ctor_get(v___x_393_, 1);
lean_inc_ref(v_arg_402_);
lean_dec_ref(v___x_393_);
lean_inc(v_a_378_);
lean_inc_ref(v_a_377_);
lean_inc(v_a_376_);
lean_inc_ref(v_a_375_);
lean_inc(v_a_374_);
lean_inc_ref(v_a_373_);
lean_inc(v_a_372_);
v___x_403_ = lean_simp(v_arg_401_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_465_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_465_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_465_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_465_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_expr_408_; uint8_t v___x_409_; 
v_expr_408_ = lean_ctor_get(v_a_404_, 0);
v___x_409_ = l_Lean_Expr_isTrue(v_expr_408_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; 
v___x_410_ = l_Lean_Expr_isFalse(v_expr_408_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_413_; 
lean_dec(v_a_404_);
lean_dec_ref(v_arg_402_);
lean_dec_ref(v_arg_401_);
lean_dec_ref(v_arg_400_);
lean_dec_ref(v_arg_399_);
lean_dec_ref(v_arg_398_);
lean_dec_ref(v___x_395_);
v___x_411_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_411_);
v___x_413_ = v___x_406_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_del_object(v___x_406_);
v___x_415_ = ((lean_object*)(l_reduceUIte___closed__2));
v___x_416_ = l_Lean_Expr_constLevels_x21(v___x_395_);
lean_dec_ref(v___x_395_);
v___x_417_ = l_Lean_mkConst(v___x_415_, v___x_416_);
lean_inc_ref(v_arg_398_);
v___x_418_ = l_Lean_mkApp5(v___x_417_, v_arg_402_, v_arg_401_, v_arg_400_, v_arg_399_, v_arg_398_);
v___x_419_ = l_Lean_Meta_Simp_Result_getProof(v_a_404_, v_a_375_, v_a_376_, v_a_377_, v_a_378_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_431_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_431_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_424_ = l_Lean_Expr_app___override(v___x_418_, v_a_420_);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_426_, 0, v_arg_398_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*2, v___x_397_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_427_);
v___x_429_ = v___x_422_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v___x_418_);
lean_dec_ref(v_arg_398_);
v_a_432_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_419_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_419_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
else
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_del_object(v___x_406_);
v___x_440_ = ((lean_object*)(l_reduceUIte___closed__3));
v___x_441_ = l_Lean_Expr_constLevels_x21(v___x_395_);
lean_dec_ref(v___x_395_);
v___x_442_ = l_Lean_mkConst(v___x_440_, v___x_441_);
lean_inc_ref(v_arg_399_);
v___x_443_ = l_Lean_mkApp5(v___x_442_, v_arg_402_, v_arg_401_, v_arg_400_, v_arg_399_, v_arg_398_);
v___x_444_ = l_Lean_Meta_Simp_Result_getProof(v_a_404_, v_a_375_, v_a_376_, v_a_377_, v_a_378_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_456_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_456_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_449_ = l_Lean_Expr_app___override(v___x_443_, v_a_445_);
v___x_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
v___x_451_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_451_, 0, v_arg_399_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*2, v___x_397_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_452_);
v___x_454_ = v___x_447_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v___x_443_);
lean_dec_ref(v_arg_399_);
v_a_457_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_444_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_444_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
lean_dec_ref(v_arg_402_);
lean_dec_ref(v_arg_401_);
lean_dec_ref(v_arg_400_);
lean_dec_ref(v_arg_399_);
lean_dec_ref(v_arg_398_);
lean_dec_ref(v___x_395_);
v_a_466_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_403_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_403_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
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
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_383_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_383_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
v___jp_380_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_reduceUIte___boxed(lean_object* v_e_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_reduceUIte(v_e_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_509_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_));
v___x_510_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_));
v___x_511_ = lean_alloc_closure((void*)(l_reduceUIte___boxed), 9, 0);
v___x_512_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_509_, v___x_510_, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22____boxed(lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_();
return v_res_514_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_alloc_closure((void*)(l_reduceUIte___boxed), 9, 0);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_518_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_));
v___x_519_ = 0;
v___x_520_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_);
v___x_521_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_518_, v___x_519_, v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24____boxed(lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_();
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_525_; uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_525_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_));
v___x_526_ = 0;
v___x_527_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_);
v___x_528_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_525_, v___x_526_, v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26____boxed(lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26_();
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_reduceUDIte(lean_object* v_e_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_540_, v_a_545_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
v___x_554_ = l_Lean_Expr_cleanupAnnotations(v_a_553_);
lean_dec(v_a_553_);
v___x_555_ = l_Lean_Expr_isApp(v___x_554_);
if (v___x_555_ == 0)
{
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = l_Lean_Expr_appFnCleanup___redArg(v___x_554_);
v___x_557_ = l_Lean_Expr_isApp(v___x_556_);
if (v___x_557_ == 0)
{
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_558_ = l_Lean_Expr_appFnCleanup___redArg(v___x_556_);
v___x_559_ = l_Lean_Expr_isApp(v___x_558_);
if (v___x_559_ == 0)
{
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_560_ = l_Lean_Expr_appFnCleanup___redArg(v___x_558_);
v___x_561_ = l_Lean_Expr_isApp(v___x_560_);
if (v___x_561_ == 0)
{
lean_dec_ref(v___x_560_);
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_562_ = l_Lean_Expr_appFnCleanup___redArg(v___x_560_);
v___x_563_ = l_Lean_Expr_isApp(v___x_562_);
if (v___x_563_ == 0)
{
lean_dec_ref(v___x_562_);
lean_dec_ref(v___x_560_);
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_564_ = l_Lean_Expr_appFnCleanup___redArg(v___x_562_);
v___x_565_ = ((lean_object*)(l_reduceUDIte___closed__0));
v___x_566_ = l_Lean_Expr_isConstOf(v___x_564_, v___x_565_);
if (v___x_566_ == 0)
{
lean_dec_ref(v___x_564_);
lean_dec_ref(v___x_562_);
lean_dec_ref(v___x_560_);
lean_dec_ref(v___x_558_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_554_);
goto v___jp_549_;
}
else
{
lean_object* v_arg_567_; lean_object* v_arg_568_; lean_object* v_arg_569_; lean_object* v_arg_570_; lean_object* v_arg_571_; lean_object* v___x_572_; 
v_arg_567_ = lean_ctor_get(v___x_554_, 1);
lean_inc_ref(v_arg_567_);
lean_dec_ref(v___x_554_);
v_arg_568_ = lean_ctor_get(v___x_556_, 1);
lean_inc_ref(v_arg_568_);
lean_dec_ref(v___x_556_);
v_arg_569_ = lean_ctor_get(v___x_558_, 1);
lean_inc_ref(v_arg_569_);
lean_dec_ref(v___x_558_);
v_arg_570_ = lean_ctor_get(v___x_560_, 1);
lean_inc_ref_n(v_arg_570_, 2);
lean_dec_ref(v___x_560_);
v_arg_571_ = lean_ctor_get(v___x_562_, 1);
lean_inc_ref(v_arg_571_);
lean_dec_ref(v___x_562_);
lean_inc(v_a_547_);
lean_inc_ref(v_a_546_);
lean_inc(v_a_545_);
lean_inc_ref(v_a_544_);
lean_inc(v_a_543_);
lean_inc_ref(v_a_542_);
lean_inc(v_a_541_);
v___x_572_ = lean_simp(v_arg_570_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_642_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_642_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_642_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_642_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_expr_577_; uint8_t v___x_578_; 
v_expr_577_ = lean_ctor_get(v_a_573_, 0);
v___x_578_ = l_Lean_Expr_isTrue(v_expr_577_);
if (v___x_578_ == 0)
{
uint8_t v___x_579_; 
v___x_579_ = l_Lean_Expr_isFalse(v_expr_577_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_582_; 
lean_dec(v_a_573_);
lean_dec_ref(v_arg_571_);
lean_dec_ref(v_arg_570_);
lean_dec_ref(v_arg_569_);
lean_dec_ref(v_arg_568_);
lean_dec_ref(v_arg_567_);
lean_dec_ref(v___x_564_);
v___x_580_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_580_);
v___x_582_ = v___x_575_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
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
lean_object* v___x_584_; 
lean_del_object(v___x_575_);
v___x_584_ = l_Lean_Meta_Simp_Result_getProof(v_a_573_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_604_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_604_ == 0)
{
v___x_587_ = v___x_584_;
v_isShared_588_ = v_isSharedCheck_604_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_604_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_589_ = lean_obj_once(&l_reduceDIte___closed__4, &l_reduceDIte___closed__4_once, _init_l_reduceDIte___closed__4);
lean_inc(v_a_585_);
lean_inc_ref(v_arg_570_);
v___x_590_ = l_Lean_mkAppB(v___x_589_, v_arg_570_, v_a_585_);
lean_inc_ref(v_arg_567_);
v___x_591_ = l_Lean_Expr_app___override(v_arg_567_, v___x_590_);
v___x_592_ = l_Lean_Expr_headBeta(v___x_591_);
v___x_593_ = ((lean_object*)(l_reduceUDIte___closed__1));
v___x_594_ = l_Lean_Expr_constLevels_x21(v___x_564_);
lean_dec_ref(v___x_564_);
v___x_595_ = l_Lean_mkConst(v___x_593_, v___x_594_);
v___x_596_ = l_Lean_mkApp5(v___x_595_, v_arg_571_, v_arg_570_, v_arg_569_, v_arg_568_, v_arg_567_);
v___x_597_ = l_Lean_Expr_app___override(v___x_596_, v_a_585_);
v___x_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
v___x_599_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_599_, 0, v___x_592_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*2, v___x_566_);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_600_);
v___x_602_ = v___x_587_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v_arg_571_);
lean_dec_ref(v_arg_570_);
lean_dec_ref(v_arg_569_);
lean_dec_ref(v_arg_568_);
lean_dec_ref(v_arg_567_);
lean_dec_ref(v___x_564_);
v_a_605_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_584_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_584_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
else
{
lean_object* v___x_613_; 
lean_del_object(v___x_575_);
v___x_613_ = l_Lean_Meta_Simp_Result_getProof(v_a_573_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_633_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_633_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_633_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_633_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_618_ = lean_obj_once(&l_reduceDIte___closed__9, &l_reduceDIte___closed__9_once, _init_l_reduceDIte___closed__9);
lean_inc(v_a_614_);
lean_inc_ref(v_arg_570_);
v___x_619_ = l_Lean_mkAppB(v___x_618_, v_arg_570_, v_a_614_);
lean_inc_ref(v_arg_568_);
v___x_620_ = l_Lean_Expr_app___override(v_arg_568_, v___x_619_);
v___x_621_ = l_Lean_Expr_headBeta(v___x_620_);
v___x_622_ = ((lean_object*)(l_reduceUDIte___closed__2));
v___x_623_ = l_Lean_Expr_constLevels_x21(v___x_564_);
lean_dec_ref(v___x_564_);
v___x_624_ = l_Lean_mkConst(v___x_622_, v___x_623_);
v___x_625_ = l_Lean_mkApp5(v___x_624_, v_arg_571_, v_arg_570_, v_arg_569_, v_arg_568_, v_arg_567_);
v___x_626_ = l_Lean_Expr_app___override(v___x_625_, v_a_614_);
v___x_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_628_, 0, v___x_621_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*2, v___x_566_);
v___x_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_629_);
v___x_631_ = v___x_616_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_arg_571_);
lean_dec_ref(v_arg_570_);
lean_dec_ref(v_arg_569_);
lean_dec_ref(v_arg_568_);
lean_dec_ref(v_arg_567_);
lean_dec_ref(v___x_564_);
v_a_634_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_613_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_613_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec_ref(v_arg_571_);
lean_dec_ref(v_arg_570_);
lean_dec_ref(v_arg_569_);
lean_dec_ref(v_arg_568_);
lean_dec_ref(v_arg_567_);
lean_dec_ref(v___x_564_);
v_a_643_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_572_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_572_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
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
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
v_a_651_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_552_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_552_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
v___jp_549_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_reduceUDIte___boxed(lean_object* v_e_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_reduceUDIte(v_e_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_a_660_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_));
v___x_687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_));
v___x_688_ = lean_alloc_closure((void*)(l_reduceUDIte___boxed), 9, 0);
v___x_689_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_686_, v___x_687_, v___x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22____boxed(lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_();
return v_res_691_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_alloc_closure((void*)(l_reduceUDIte___boxed), 9, 0);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_695_; uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_695_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_));
v___x_696_ = 0;
v___x_697_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_);
v___x_698_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_695_, v___x_696_, v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24____boxed(lean_object* v_a_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_();
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_702_; uint8_t v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_702_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_));
v___x_703_ = 0;
v___x_704_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_);
v___x_705_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_702_, v___x_703_, v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26____boxed(lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26_();
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0(lean_object* v_a_708_, lean_object* v_cache_709_, lean_object* v_a_x3f_710_){
_start:
{
lean_object* v___x_712_; lean_object* v_congrCache_713_; lean_object* v_dsimpCache_714_; lean_object* v_usedTheorems_715_; lean_object* v_numSteps_716_; lean_object* v_diag_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_727_; 
v___x_712_ = lean_st_ref_take(v_a_708_);
v_congrCache_713_ = lean_ctor_get(v___x_712_, 1);
v_dsimpCache_714_ = lean_ctor_get(v___x_712_, 2);
v_usedTheorems_715_ = lean_ctor_get(v___x_712_, 3);
v_numSteps_716_ = lean_ctor_get(v___x_712_, 4);
v_diag_717_ = lean_ctor_get(v___x_712_, 5);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_727_ == 0)
{
lean_object* v_unused_728_; 
v_unused_728_ = lean_ctor_get(v___x_712_, 0);
lean_dec(v_unused_728_);
v___x_719_ = v___x_712_;
v_isShared_720_ = v_isSharedCheck_727_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_diag_717_);
lean_inc(v_numSteps_716_);
lean_inc(v_usedTheorems_715_);
lean_inc(v_dsimpCache_714_);
lean_inc(v_congrCache_713_);
lean_dec(v___x_712_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_727_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v___x_723_; 
v___x_721_ = lean_box(0);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v_cache_709_);
v___x_723_ = v___x_719_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_cache_709_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_congrCache_713_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_dsimpCache_714_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_usedTheorems_715_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_numSteps_716_);
lean_ctor_set(v_reuseFailAlloc_726_, 5, v_diag_717_);
v___x_723_ = v_reuseFailAlloc_726_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_st_ref_put(v_a_708_, v___x_723_);
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_721_);
return v___x_725_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0___boxed(lean_object* v_a_729_, lean_object* v_cache_730_, lean_object* v_a_x3f_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0(v_a_729_, v_cache_730_, v_a_x3f_731_);
lean_dec(v_a_x3f_731_);
lean_dec(v_a_729_);
return v_res_733_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_750_ = l_Lean_Level_ofNat(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = lean_box(0);
v___x_752_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__9);
v___x_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_751_);
return v___x_753_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10);
v___x_755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8));
v___x_756_ = l_Lean_mkConst(v___x_755_, v___x_754_);
return v___x_756_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = lean_box(0);
v___x_760_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__12));
v___x_761_ = l_Lean_mkConst(v___x_760_, v___x_759_);
return v___x_761_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14(void){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_762_ = lean_box(0);
v___x_763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_764_ = l_Lean_mkConst(v___x_763_, v___x_762_);
return v___x_764_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_box(0);
v___x_766_ = lean_unsigned_to_nat(16u);
v___x_767_ = lean_mk_array(v___x_766_, v___x_765_);
return v___x_767_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__15);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
lean_ctor_set(v___x_770_, 1, v___x_768_);
return v___x_770_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17(void){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_771_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__17);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; lean_object* v___x_777_; 
v___x_774_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__18);
v___x_775_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__16);
v___x_776_ = 1;
v___x_777_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_777_, 0, v___x_775_);
lean_ctor_set(v___x_777_, 1, v___x_774_);
lean_ctor_set_uint8(v___x_777_, sizeof(void*)*2, v___x_776_);
return v___x_777_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_box(0);
v___x_783_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__21));
v___x_784_ = l_Lean_mkConst(v___x_783_, v___x_782_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f(lean_object* v_c_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___x_794_; 
lean_inc(v_a_792_);
lean_inc_ref(v_a_791_);
lean_inc(v_a_790_);
lean_inc_ref(v_a_789_);
lean_inc(v_a_788_);
lean_inc_ref(v_a_787_);
lean_inc(v_a_786_);
lean_inc_ref(v_c_785_);
v___x_794_ = lean_simp(v_c_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v_expr_796_; lean_object* v___x_797_; uint8_t v___x_798_; uint8_t v___x_799_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_794_, 1);
v_expr_796_ = lean_ctor_get(v_a_795_, 0);
v___x_797_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_798_ = l_Lean_Expr_isConstOf(v_expr_796_, v___x_797_);
v___x_799_ = 1;
if (v___x_798_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_801_ = l_Lean_Expr_isConstOf(v_expr_796_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec(v_a_795_);
v___x_802_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__6));
v___x_803_ = l_Lean_Meta_getSimpExtension_x3f(v___x_802_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_980_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_980_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_980_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_980_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
if (lean_obj_tag(v_a_804_) == 1)
{
lean_object* v_val_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_975_; 
lean_del_object(v___x_806_);
v_val_808_ = lean_ctor_get(v_a_804_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v_a_804_);
if (v_isSharedCheck_975_ == 0)
{
v___x_810_ = v_a_804_;
v_isShared_811_ = v_isSharedCheck_975_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_val_808_);
lean_dec(v_a_804_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_975_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11);
v___x_814_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13);
v___x_815_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__14);
lean_inc_ref(v_c_785_);
v___x_816_ = l_Lean_mkApp3(v___x_813_, v___x_814_, v_c_785_, v___x_815_);
v___x_817_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v_val_808_, v_a_792_);
lean_dec(v_val_808_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_cache_822_; lean_object* v___x_823_; lean_object* v_congrCache_824_; lean_object* v_dsimpCache_825_; lean_object* v_usedTheorems_826_; lean_object* v_numSteps_827_; lean_object* v_diag_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_965_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
v___x_819_ = lean_mk_empty_array_with_capacity(v___x_812_);
v___x_820_ = lean_array_push(v___x_819_, v_a_818_);
v___x_821_ = lean_st_ref_get(v_a_788_);
v_cache_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc_ref(v_cache_822_);
lean_dec(v___x_821_);
v___x_823_ = lean_st_ref_take(v_a_788_);
v_congrCache_824_ = lean_ctor_get(v___x_823_, 1);
v_dsimpCache_825_ = lean_ctor_get(v___x_823_, 2);
v_usedTheorems_826_ = lean_ctor_get(v___x_823_, 3);
v_numSteps_827_ = lean_ctor_get(v___x_823_, 4);
v_diag_828_ = lean_ctor_get(v___x_823_, 5);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v___x_823_, 0);
lean_dec(v_unused_966_);
v___x_830_ = v___x_823_;
v_isShared_831_ = v_isSharedCheck_965_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_diag_828_);
lean_inc(v_numSteps_827_);
lean_inc(v_usedTheorems_826_);
lean_inc(v_dsimpCache_825_);
lean_inc(v_congrCache_824_);
lean_dec(v___x_823_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_965_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_832_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__19);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v___x_832_);
v___x_834_ = v___x_830_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_832_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_congrCache_824_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_dsimpCache_825_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_usedTheorems_826_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_numSteps_827_);
lean_ctor_set(v_reuseFailAlloc_964_, 5, v_diag_828_);
v___x_834_ = v_reuseFailAlloc_964_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_835_; lean_object* v_config_836_; lean_object* v_userConfig_837_; lean_object* v_zetaDeltaSet_838_; lean_object* v_initUsedZetaDelta_839_; lean_object* v_metaConfig_840_; lean_object* v_indexConfig_841_; uint32_t v_maxDischargeDepth_842_; lean_object* v_congrTheorems_843_; lean_object* v_parent_x3f_844_; uint32_t v_dischargeDepth_845_; lean_object* v_lctxInitIndices_846_; uint8_t v_inDSimp_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_835_ = lean_st_ref_put(v_a_788_, v___x_834_);
v_config_836_ = lean_ctor_get(v_a_787_, 0);
v_userConfig_837_ = lean_ctor_get(v_a_787_, 1);
v_zetaDeltaSet_838_ = lean_ctor_get(v_a_787_, 2);
v_initUsedZetaDelta_839_ = lean_ctor_get(v_a_787_, 3);
v_metaConfig_840_ = lean_ctor_get(v_a_787_, 4);
v_indexConfig_841_ = lean_ctor_get(v_a_787_, 5);
v_maxDischargeDepth_842_ = lean_ctor_get_uint32(v_a_787_, sizeof(void*)*10);
v_congrTheorems_843_ = lean_ctor_get(v_a_787_, 7);
v_parent_x3f_844_ = lean_ctor_get(v_a_787_, 8);
v_dischargeDepth_845_ = lean_ctor_get_uint32(v_a_787_, sizeof(void*)*10 + 4);
v_lctxInitIndices_846_ = lean_ctor_get(v_a_787_, 9);
v_inDSimp_847_ = lean_ctor_get_uint8(v_a_787_, sizeof(void*)*10 + 8);
lean_inc(v_lctxInitIndices_846_);
lean_inc(v_parent_x3f_844_);
lean_inc_ref(v_congrTheorems_843_);
lean_inc_ref(v_indexConfig_841_);
lean_inc_ref(v_metaConfig_840_);
lean_inc(v_initUsedZetaDelta_839_);
lean_inc(v_zetaDeltaSet_838_);
lean_inc_ref(v_userConfig_837_);
lean_inc_ref(v_config_836_);
v___x_848_ = lean_alloc_ctor(0, 10, 9);
lean_ctor_set(v___x_848_, 0, v_config_836_);
lean_ctor_set(v___x_848_, 1, v_userConfig_837_);
lean_ctor_set(v___x_848_, 2, v_zetaDeltaSet_838_);
lean_ctor_set(v___x_848_, 3, v_initUsedZetaDelta_839_);
lean_ctor_set(v___x_848_, 4, v_metaConfig_840_);
lean_ctor_set(v___x_848_, 5, v_indexConfig_841_);
lean_ctor_set(v___x_848_, 6, v___x_820_);
lean_ctor_set(v___x_848_, 7, v_congrTheorems_843_);
lean_ctor_set(v___x_848_, 8, v_parent_x3f_844_);
lean_ctor_set(v___x_848_, 9, v_lctxInitIndices_846_);
lean_ctor_set_uint32(v___x_848_, sizeof(void*)*10, v_maxDischargeDepth_842_);
lean_ctor_set_uint32(v___x_848_, sizeof(void*)*10 + 4, v_dischargeDepth_845_);
lean_ctor_set_uint8(v___x_848_, sizeof(void*)*10 + 8, v_inDSimp_847_);
lean_inc(v_a_792_);
lean_inc_ref(v_a_791_);
lean_inc(v_a_790_);
lean_inc_ref(v_a_789_);
lean_inc(v_a_788_);
lean_inc(v_a_786_);
lean_inc_ref(v___x_816_);
v___x_849_ = lean_simp(v___x_816_, v_a_786_, v___x_848_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_952_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_952_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_952_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_952_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
lean_inc(v_a_850_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v_a_850_);
v___x_855_ = v___x_810_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_951_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_949_; 
v___x_856_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0(v_a_788_, v_cache_822_, v___x_855_);
lean_dec_ref(v___x_855_);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_949_ == 0)
{
lean_object* v_unused_950_; 
v_unused_950_ = lean_ctor_get(v___x_856_, 0);
lean_dec(v_unused_950_);
v___x_858_ = v___x_856_;
v_isShared_859_ = v_isSharedCheck_949_;
goto v_resetjp_857_;
}
else
{
lean_dec(v___x_856_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_949_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v_expr_860_; uint8_t v___x_861_; 
v_expr_860_ = lean_ctor_get(v_a_850_, 0);
v___x_861_ = lean_expr_eqv(v_expr_860_, v___x_816_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_del_object(v___x_858_);
lean_inc(v_a_792_);
lean_inc_ref(v_a_791_);
lean_inc(v_a_790_);
lean_inc_ref(v_a_789_);
lean_inc(v_a_788_);
lean_inc_ref(v_a_787_);
lean_inc(v_a_786_);
lean_inc_ref(v_expr_860_);
v___x_862_ = lean_simp(v_expr_860_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_936_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_936_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_936_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_936_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v_expr_867_; uint8_t v___x_868_; 
v_expr_867_ = lean_ctor_get(v_a_863_, 0);
v___x_868_ = l_Lean_Expr_isTrue(v_expr_867_);
if (v___x_868_ == 0)
{
uint8_t v___x_931_; 
v___x_931_ = l_Lean_Expr_isFalse(v_expr_867_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_934_; 
lean_dec(v_a_863_);
lean_del_object(v___x_852_);
lean_dec(v_a_850_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v___x_932_ = lean_box(0);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_932_);
v___x_934_ = v___x_865_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
else
{
lean_del_object(v___x_865_);
goto v___jp_869_;
}
}
else
{
lean_del_object(v___x_865_);
goto v___jp_869_;
}
v___jp_869_:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Meta_Simp_Result_getProof(v_a_850_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lean_Meta_Simp_Result_getProof(v_a_863_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_874_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
v___x_874_ = l_Lean_Meta_mkEqTrans(v_a_871_, v_a_873_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_874_) == 0)
{
if (v___x_868_ == 0)
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_891_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_891_ == 0)
{
v___x_877_ = v___x_874_;
v_isShared_878_ = v_isSharedCheck_891_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_874_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_891_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_879_ = lean_obj_once(&l_reduceDIte___closed__4, &l_reduceDIte___closed__4_once, _init_l_reduceDIte___closed__4);
v___x_880_ = l_Lean_mkAppB(v___x_879_, v___x_816_, v_a_875_);
v___x_881_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__22);
v___x_882_ = l_Lean_mkAppB(v___x_881_, v_c_785_, v___x_880_);
v___x_883_ = lean_box(v___x_868_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v___x_882_);
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 1);
lean_ctor_set(v___x_852_, 0, v___x_884_);
v___x_886_ = v___x_852_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_890_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_886_);
v___x_888_ = v___x_877_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_906_; 
lean_dec_ref(v_c_785_);
v_a_892_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_906_ == 0)
{
v___x_894_ = v___x_874_;
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_874_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_896_ = lean_obj_once(&l_reduceDIte___closed__9, &l_reduceDIte___closed__9_once, _init_l_reduceDIte___closed__9);
v___x_897_ = l_Lean_mkAppB(v___x_896_, v___x_816_, v_a_892_);
v___x_898_ = lean_box(v___x_799_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v___x_897_);
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 1);
lean_ctor_set(v___x_852_, 0, v___x_899_);
v___x_901_ = v___x_852_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_905_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_903_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_901_);
v___x_903_ = v___x_894_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_del_object(v___x_852_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v_a_907_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_874_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_874_);
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
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec(v_a_871_);
lean_del_object(v___x_852_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v_a_915_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_872_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_872_);
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
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_a_863_);
lean_del_object(v___x_852_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v_a_923_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_870_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_870_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_del_object(v___x_852_);
lean_dec(v_a_850_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v_a_937_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_862_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_862_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v___x_945_; lean_object* v___x_947_; 
lean_del_object(v___x_852_);
lean_dec(v_a_850_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v_c_785_);
v___x_945_ = lean_box(0);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_945_);
v___x_947_ = v___x_858_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec_ref(v___x_816_);
lean_del_object(v___x_810_);
lean_dec_ref(v_c_785_);
v_a_953_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_849_, 1);
v___x_954_ = lean_box(0);
v___x_955_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___lam__0(v_a_788_, v_cache_822_, v___x_954_);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; 
v_unused_963_ = lean_ctor_get(v___x_955_, 0);
lean_dec(v_unused_963_);
v___x_957_ = v___x_955_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_dec(v___x_955_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 1);
lean_ctor_set(v___x_957_, 0, v_a_953_);
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_953_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec_ref(v___x_816_);
lean_del_object(v___x_810_);
lean_dec_ref(v_c_785_);
v_a_967_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_817_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_817_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
else
{
lean_object* v___x_976_; lean_object* v___x_978_; 
lean_dec(v_a_804_);
lean_dec_ref(v_c_785_);
v___x_976_ = lean_box(0);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_976_);
v___x_978_ = v___x_806_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec_ref(v_c_785_);
v_a_981_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_803_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_803_);
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
lean_object* v___x_989_; 
lean_dec_ref(v_c_785_);
v___x_989_ = l_Lean_Meta_Simp_Result_getProof(v_a_795_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1000_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1000_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1000_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_994_ = lean_box(v___x_798_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v_a_990_);
v___x_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_996_);
v___x_998_ = v___x_992_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_a_1001_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_989_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_989_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
}
else
{
lean_object* v___x_1009_; 
lean_dec_ref(v_c_785_);
v___x_1009_ = l_Lean_Meta_Simp_Result_getProof(v_a_795_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1020_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1020_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1020_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1014_ = lean_box(v___x_799_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
lean_ctor_set(v___x_1015_, 1, v_a_1010_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 0, v___x_1016_);
v___x_1018_ = v___x_1012_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
v_a_1021_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1009_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1009_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
lean_dec_ref(v_c_785_);
v_a_1029_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_794_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_794_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___boxed(lean_object* v_c_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f(v_c_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_);
lean_dec(v_a_1044_);
lean_dec_ref(v_a_1043_);
lean_dec(v_a_1042_);
lean_dec_ref(v_a_1041_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec(v_a_1038_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_reduceCond(lean_object* v_e_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1058_, v_a_1063_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = l_Lean_Expr_cleanupAnnotations(v_a_1071_);
lean_dec(v_a_1071_);
v___x_1073_ = l_Lean_Expr_isApp(v___x_1072_);
if (v___x_1073_ == 0)
{
lean_dec_ref(v___x_1072_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1072_);
v___x_1075_ = l_Lean_Expr_isApp(v___x_1074_);
if (v___x_1075_ == 0)
{
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1072_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1074_);
v___x_1077_ = l_Lean_Expr_isApp(v___x_1076_);
if (v___x_1077_ == 0)
{
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1072_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1078_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1076_);
v___x_1079_ = l_Lean_Expr_isApp(v___x_1078_);
if (v___x_1079_ == 0)
{
lean_dec_ref(v___x_1078_);
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1072_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1080_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1078_);
v___x_1081_ = ((lean_object*)(l_reduceCond___closed__1));
v___x_1082_ = l_Lean_Expr_isConstOf(v___x_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_dec_ref(v___x_1080_);
lean_dec_ref(v___x_1078_);
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1072_);
goto v___jp_1067_;
}
else
{
lean_object* v_arg_1083_; lean_object* v_arg_1084_; lean_object* v_arg_1085_; lean_object* v_arg_1086_; lean_object* v___x_1087_; 
v_arg_1083_ = lean_ctor_get(v___x_1072_, 1);
lean_inc_ref(v_arg_1083_);
lean_dec_ref(v___x_1072_);
v_arg_1084_ = lean_ctor_get(v___x_1074_, 1);
lean_inc_ref(v_arg_1084_);
lean_dec_ref(v___x_1074_);
v_arg_1085_ = lean_ctor_get(v___x_1076_, 1);
lean_inc_ref_n(v_arg_1085_, 2);
lean_dec_ref(v___x_1076_);
v_arg_1086_ = lean_ctor_get(v___x_1078_, 1);
lean_inc_ref(v_arg_1086_);
lean_dec_ref(v___x_1078_);
v___x_1087_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f(v_arg_1085_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1129_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1129_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1129_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
if (lean_obj_tag(v_a_1088_) == 1)
{
lean_object* v_val_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1124_; 
v_val_1092_ = lean_ctor_get(v_a_1088_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_a_1088_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1094_ = v_a_1088_;
v_isShared_1095_ = v_isSharedCheck_1124_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_val_1092_);
lean_dec(v_a_1088_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1124_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_fst_1096_; uint8_t v___x_1097_; 
v_fst_1096_ = lean_ctor_get(v_val_1092_, 0);
v___x_1097_ = lean_unbox(v_fst_1096_);
if (v___x_1097_ == 0)
{
lean_object* v_snd_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v_snd_1098_ = lean_ctor_get(v_val_1092_, 1);
lean_inc(v_snd_1098_);
lean_dec(v_val_1092_);
v___x_1099_ = ((lean_object*)(l_reduceCond___closed__3));
v___x_1100_ = l_Lean_Expr_constLevels_x21(v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1101_ = l_Lean_mkConst(v___x_1099_, v___x_1100_);
lean_inc_ref(v_arg_1083_);
v___x_1102_ = l_Lean_mkApp5(v___x_1101_, v_arg_1086_, v_arg_1085_, v_arg_1084_, v_arg_1083_, v_snd_1098_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1102_);
v___x_1104_ = v___x_1094_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1105_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1105_, 0, v_arg_1083_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*2, v___x_1082_);
v___x_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1106_);
v___x_1108_ = v___x_1090_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
else
{
lean_object* v_snd_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v_snd_1111_ = lean_ctor_get(v_val_1092_, 1);
lean_inc(v_snd_1111_);
lean_dec(v_val_1092_);
v___x_1112_ = ((lean_object*)(l_reduceCond___closed__5));
v___x_1113_ = l_Lean_Expr_constLevels_x21(v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1114_ = l_Lean_mkConst(v___x_1112_, v___x_1113_);
lean_inc_ref(v_arg_1084_);
v___x_1115_ = l_Lean_mkApp5(v___x_1114_, v_arg_1086_, v_arg_1085_, v_arg_1084_, v_arg_1083_, v_snd_1111_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1115_);
v___x_1117_ = v___x_1094_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1118_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1118_, 0, v_arg_1084_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
lean_ctor_set_uint8(v___x_1118_, sizeof(void*)*2, v___x_1082_);
v___x_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1119_);
v___x_1121_ = v___x_1090_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1127_; 
lean_dec(v_a_1088_);
lean_dec_ref(v_arg_1086_);
lean_dec_ref(v_arg_1085_);
lean_dec_ref(v_arg_1084_);
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v___x_1080_);
v___x_1125_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1125_);
v___x_1127_ = v___x_1090_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1125_);
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
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v_arg_1086_);
lean_dec_ref(v_arg_1085_);
lean_dec_ref(v_arg_1084_);
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v___x_1080_);
v_a_1130_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1087_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1087_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
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
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_a_1138_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1070_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1070_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
v___jp_1067_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_reduceCond___boxed(lean_object* v_e_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_reduceCond(v_e_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
lean_dec(v_a_1147_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_));
v___x_1173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_));
v___x_1174_ = lean_alloc_closure((void*)(l_reduceCond___boxed), 9, 0);
v___x_1175_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1172_, v___x_1173_, v___x_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22____boxed(lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_();
return v_res_1177_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_alloc_closure((void*)(l_reduceCond___boxed), 9, 0);
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1181_; uint8_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1181_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_));
v___x_1182_ = 0;
v___x_1183_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_);
v___x_1184_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1181_, v___x_1182_, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24____boxed(lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_();
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1188_; uint8_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_));
v___x_1189_ = 0;
v___x_1190_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_);
v___x_1191_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1188_, v___x_1189_, v___x_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26____boxed(lean_object* v_a_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26_();
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_reduceDCond(lean_object* v_e_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1206_, v_a_1211_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1219_);
lean_dec_ref_known(v___x_1218_, 1);
v___x_1220_ = l_Lean_Expr_cleanupAnnotations(v_a_1219_);
lean_dec(v_a_1219_);
v___x_1221_ = l_Lean_Expr_isApp(v___x_1220_);
if (v___x_1221_ == 0)
{
lean_dec_ref(v___x_1220_);
goto v___jp_1215_;
}
else
{
lean_object* v___x_1222_; uint8_t v___x_1223_; 
v___x_1222_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1220_);
v___x_1223_ = l_Lean_Expr_isApp(v___x_1222_);
if (v___x_1223_ == 0)
{
lean_dec_ref(v___x_1222_);
lean_dec_ref(v___x_1220_);
goto v___jp_1215_;
}
else
{
lean_object* v___x_1224_; uint8_t v___x_1225_; 
v___x_1224_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1222_);
v___x_1225_ = l_Lean_Expr_isApp(v___x_1224_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v___x_1224_);
lean_dec_ref(v___x_1222_);
lean_dec_ref(v___x_1220_);
goto v___jp_1215_;
}
else
{
lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1226_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1224_);
v___x_1227_ = l_Lean_Expr_isApp(v___x_1226_);
if (v___x_1227_ == 0)
{
lean_dec_ref(v___x_1226_);
lean_dec_ref(v___x_1224_);
lean_dec_ref(v___x_1222_);
lean_dec_ref(v___x_1220_);
goto v___jp_1215_;
}
else
{
lean_object* v___x_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1228_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1226_);
v___x_1229_ = ((lean_object*)(l_reduceDCond___closed__1));
v___x_1230_ = l_Lean_Expr_isConstOf(v___x_1228_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_dec_ref(v___x_1228_);
lean_dec_ref(v___x_1226_);
lean_dec_ref(v___x_1224_);
lean_dec_ref(v___x_1222_);
lean_dec_ref(v___x_1220_);
goto v___jp_1215_;
}
else
{
lean_object* v_arg_1231_; lean_object* v_arg_1232_; lean_object* v_arg_1233_; lean_object* v_arg_1234_; lean_object* v___x_1235_; 
v_arg_1231_ = lean_ctor_get(v___x_1220_, 1);
lean_inc_ref(v_arg_1231_);
lean_dec_ref(v___x_1220_);
v_arg_1232_ = lean_ctor_get(v___x_1222_, 1);
lean_inc_ref(v_arg_1232_);
lean_dec_ref(v___x_1222_);
v_arg_1233_ = lean_ctor_get(v___x_1224_, 1);
lean_inc_ref_n(v_arg_1233_, 2);
lean_dec_ref(v___x_1224_);
v_arg_1234_ = lean_ctor_get(v___x_1226_, 1);
lean_inc_ref(v_arg_1234_);
lean_dec_ref(v___x_1226_);
v___x_1235_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f(v_arg_1233_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1281_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1238_ = v___x_1235_;
v_isShared_1239_ = v_isSharedCheck_1281_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1235_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1281_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
if (lean_obj_tag(v_a_1236_) == 1)
{
lean_object* v_val_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1276_; 
v_val_1240_ = lean_ctor_get(v_a_1236_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_a_1236_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1242_ = v_a_1236_;
v_isShared_1243_ = v_isSharedCheck_1276_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_val_1240_);
lean_dec(v_a_1236_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1276_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v_fst_1244_; uint8_t v___x_1245_; 
v_fst_1244_ = lean_ctor_get(v_val_1240_, 0);
v___x_1245_ = lean_unbox(v_fst_1244_);
if (v___x_1245_ == 0)
{
lean_object* v_snd_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v_snd_1246_ = lean_ctor_get(v_val_1240_, 1);
lean_inc_n(v_snd_1246_, 2);
lean_dec(v_val_1240_);
v___x_1247_ = ((lean_object*)(l_reduceDCond___closed__3));
v___x_1248_ = l_Lean_Expr_constLevels_x21(v___x_1228_);
lean_dec_ref(v___x_1228_);
v___x_1249_ = l_Lean_mkConst(v___x_1247_, v___x_1248_);
lean_inc_ref(v_arg_1231_);
v___x_1250_ = l_Lean_mkApp5(v___x_1249_, v_arg_1234_, v_arg_1233_, v_arg_1232_, v_arg_1231_, v_snd_1246_);
v___x_1251_ = l_Lean_Expr_app___override(v_arg_1231_, v_snd_1246_);
v___x_1252_ = l_Lean_Expr_headBeta(v___x_1251_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1250_);
v___x_1254_ = v___x_1242_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1250_);
v___x_1254_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1255_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1255_, 0, v___x_1252_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*2, v___x_1230_);
v___x_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1256_);
v___x_1258_ = v___x_1238_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
else
{
lean_object* v_snd_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v_snd_1261_ = lean_ctor_get(v_val_1240_, 1);
lean_inc_n(v_snd_1261_, 2);
lean_dec(v_val_1240_);
v___x_1262_ = ((lean_object*)(l_reduceDCond___closed__5));
v___x_1263_ = l_Lean_Expr_constLevels_x21(v___x_1228_);
lean_dec_ref(v___x_1228_);
v___x_1264_ = l_Lean_mkConst(v___x_1262_, v___x_1263_);
lean_inc_ref(v_arg_1232_);
v___x_1265_ = l_Lean_mkApp5(v___x_1264_, v_arg_1234_, v_arg_1233_, v_arg_1232_, v_arg_1231_, v_snd_1261_);
v___x_1266_ = l_Lean_Expr_app___override(v_arg_1232_, v_snd_1261_);
v___x_1267_ = l_Lean_Expr_headBeta(v___x_1266_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1265_);
v___x_1269_ = v___x_1242_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1265_);
v___x_1269_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1270_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1270_, 0, v___x_1267_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*2, v___x_1230_);
v___x_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1271_);
v___x_1273_ = v___x_1238_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
else
{
lean_object* v___x_1277_; lean_object* v___x_1279_; 
lean_dec(v_a_1236_);
lean_dec_ref(v_arg_1234_);
lean_dec_ref(v_arg_1233_);
lean_dec_ref(v_arg_1232_);
lean_dec_ref(v_arg_1231_);
lean_dec_ref(v___x_1228_);
v___x_1277_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1277_);
v___x_1279_ = v___x_1238_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1277_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec_ref(v_arg_1234_);
lean_dec_ref(v_arg_1233_);
lean_dec_ref(v_arg_1232_);
lean_dec_ref(v_arg_1231_);
lean_dec_ref(v___x_1228_);
v_a_1282_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1235_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1235_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
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
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
v_a_1290_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1218_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1218_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
v___jp_1215_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
return v___x_1217_;
}
}
}
LEAN_EXPORT lean_object* l_reduceDCond___boxed(lean_object* v_e_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_reduceDCond(v_e_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_a_1299_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_));
v___x_1325_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_));
v___x_1326_ = lean_alloc_closure((void*)(l_reduceDCond___boxed), 9, 0);
v___x_1327_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1324_, v___x_1325_, v___x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22____boxed(lean_object* v_a_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_();
return v_res_1329_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lean_alloc_closure((void*)(l_reduceDCond___boxed), 9, 0);
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1333_; uint8_t v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1333_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_));
v___x_1334_ = 0;
v___x_1335_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_);
v___x_1336_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1333_, v___x_1334_, v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24____boxed(lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_();
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1340_; uint8_t v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1340_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_));
v___x_1341_ = 0;
v___x_1342_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_);
v___x_1343_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1340_, v___x_1341_, v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26____boxed(lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26_();
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_dreduceIte(lean_object* v_e_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
uint8_t v_inDSimp_1363_; 
v_inDSimp_1363_ = lean_ctor_get_uint8(v_a_1353_, sizeof(void*)*10 + 8);
if (v_inDSimp_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
lean_dec_ref(v_e_1351_);
v___x_1364_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
return v___x_1365_;
}
else
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1351_, v_a_1356_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = l_Lean_Expr_cleanupAnnotations(v_a_1367_);
lean_dec(v_a_1367_);
v___x_1369_ = l_Lean_Expr_isApp(v___x_1368_);
if (v___x_1369_ == 0)
{
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1368_);
v___x_1371_ = l_Lean_Expr_isApp(v___x_1370_);
if (v___x_1371_ == 0)
{
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1370_);
v___x_1373_ = l_Lean_Expr_isApp(v___x_1372_);
if (v___x_1373_ == 0)
{
lean_dec_ref(v___x_1372_);
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1372_);
v___x_1375_ = l_Lean_Expr_isApp(v___x_1374_);
if (v___x_1375_ == 0)
{
lean_dec_ref(v___x_1374_);
lean_dec_ref(v___x_1372_);
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1374_);
v___x_1377_ = l_Lean_Expr_isApp(v___x_1376_);
if (v___x_1377_ == 0)
{
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___x_1374_);
lean_dec_ref(v___x_1372_);
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1376_);
lean_dec_ref(v___x_1376_);
v___x_1379_ = ((lean_object*)(l_reduceIte___closed__2));
v___x_1380_ = l_Lean_Expr_isConstOf(v___x_1378_, v___x_1379_);
lean_dec_ref(v___x_1378_);
if (v___x_1380_ == 0)
{
lean_dec_ref(v___x_1374_);
lean_dec_ref(v___x_1372_);
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1368_);
goto v___jp_1360_;
}
else
{
lean_object* v_arg_1381_; lean_object* v_arg_1382_; lean_object* v_arg_1383_; lean_object* v_arg_1384_; lean_object* v___x_1385_; 
v_arg_1381_ = lean_ctor_get(v___x_1368_, 1);
lean_inc_ref(v_arg_1381_);
lean_dec_ref(v___x_1368_);
v_arg_1382_ = lean_ctor_get(v___x_1370_, 1);
lean_inc_ref(v_arg_1382_);
lean_dec_ref(v___x_1370_);
v_arg_1383_ = lean_ctor_get(v___x_1372_, 1);
lean_inc_ref(v_arg_1383_);
lean_dec_ref(v___x_1372_);
v_arg_1384_ = lean_ctor_get(v___x_1374_, 1);
lean_inc_ref(v_arg_1384_);
lean_dec_ref(v___x_1374_);
lean_inc(v_a_1358_);
lean_inc_ref(v_a_1357_);
lean_inc(v_a_1356_);
lean_inc_ref(v_a_1355_);
lean_inc(v_a_1354_);
lean_inc_ref(v_a_1353_);
lean_inc(v_a_1352_);
v___x_1385_ = lean_simp(v_arg_1384_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1442_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1442_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1442_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v_expr_1435_; uint8_t v___x_1436_; 
v_expr_1435_ = lean_ctor_get(v_a_1386_, 0);
lean_inc_ref(v_expr_1435_);
lean_dec(v_a_1386_);
v___x_1436_ = l_Lean_Expr_isTrue(v_expr_1435_);
if (v___x_1436_ == 0)
{
uint8_t v___x_1437_; 
v___x_1437_ = l_Lean_Expr_isFalse(v_expr_1435_);
lean_dec_ref(v_expr_1435_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1438_; lean_object* v___x_1440_; 
lean_dec_ref(v_arg_1383_);
lean_dec_ref(v_arg_1382_);
lean_dec_ref(v_arg_1381_);
v___x_1438_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1438_);
v___x_1440_ = v___x_1388_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
else
{
lean_del_object(v___x_1388_);
goto v___jp_1390_;
}
}
else
{
lean_dec_ref(v_expr_1435_);
lean_del_object(v___x_1388_);
goto v___jp_1390_;
}
v___jp_1390_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1391_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_1392_ = lean_unsigned_to_nat(0u);
v___x_1393_ = l_Lean_Expr_proj___override(v___x_1391_, v___x_1392_, v_arg_1383_);
v___x_1394_ = l_Lean_Meta_whnfD(v___x_1393_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1396_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_1395_, v_a_1356_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1418_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1399_ = v___x_1396_;
v_isShared_1400_ = v_isSharedCheck_1418_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1396_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1418_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1401_ = l_Lean_Expr_cleanupAnnotations(v_a_1397_);
lean_dec(v_a_1397_);
v___x_1402_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1403_ = l_Lean_Expr_isConstOf(v___x_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; uint8_t v___x_1405_; 
lean_dec_ref(v_arg_1381_);
v___x_1404_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_1405_ = l_Lean_Expr_isConstOf(v___x_1401_, v___x_1404_);
lean_dec_ref(v___x_1401_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
lean_dec_ref(v_arg_1382_);
v___x_1406_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1406_);
v___x_1408_ = v___x_1399_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1410_, 0, v_arg_1382_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1410_);
v___x_1412_ = v___x_1399_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1416_; 
lean_dec_ref(v___x_1401_);
lean_dec_ref(v_arg_1382_);
v___x_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1414_, 0, v_arg_1381_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1414_);
v___x_1416_ = v___x_1399_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec_ref(v_arg_1382_);
lean_dec_ref(v_arg_1381_);
v_a_1419_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1396_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1396_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec_ref(v_arg_1382_);
lean_dec_ref(v_arg_1381_);
v_a_1427_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1394_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1394_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec_ref(v_arg_1383_);
lean_dec_ref(v_arg_1382_);
lean_dec_ref(v_arg_1381_);
v_a_1443_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1385_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1385_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
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
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
v_a_1451_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1366_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1366_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
v___jp_1360_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object* v_e_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_dreduceIte(v_e_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_);
lean_dec(v_a_1466_);
lean_dec_ref(v_a_1465_);
lean_dec(v_a_1464_);
lean_dec_ref(v_a_1463_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_a_1460_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1473_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_1474_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_1475_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_1476_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1473_, v___x_1474_, v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22____boxed(lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
return v_res_1478_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1482_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_1483_ = 0;
v___x_1484_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_);
v___x_1485_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1482_, v___x_1483_, v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24____boxed(lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1489_; uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1489_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_1490_ = 0;
v___x_1491_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_);
v___x_1492_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1489_, v___x_1490_, v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26____boxed(lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object* v_e_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
uint8_t v_inDSimp_1507_; 
v_inDSimp_1507_ = lean_ctor_get_uint8(v_a_1497_, sizeof(void*)*10 + 8);
if (v_inDSimp_1507_ == 0)
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_dec_ref(v_e_1495_);
v___x_1508_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
return v___x_1509_;
}
else
{
lean_object* v___x_1510_; 
v___x_1510_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1495_, v_a_1500_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1510_, 1);
v___x_1512_ = l_Lean_Expr_cleanupAnnotations(v_a_1511_);
lean_dec(v_a_1511_);
v___x_1513_ = l_Lean_Expr_isApp(v___x_1512_);
if (v___x_1513_ == 0)
{
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1514_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1512_);
v___x_1515_ = l_Lean_Expr_isApp(v___x_1514_);
if (v___x_1515_ == 0)
{
lean_dec_ref(v___x_1514_);
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1514_);
v___x_1517_ = l_Lean_Expr_isApp(v___x_1516_);
if (v___x_1517_ == 0)
{
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1516_);
v___x_1519_ = l_Lean_Expr_isApp(v___x_1518_);
if (v___x_1519_ == 0)
{
lean_dec_ref(v___x_1518_);
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1520_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1518_);
v___x_1521_ = l_Lean_Expr_isApp(v___x_1520_);
if (v___x_1521_ == 0)
{
lean_dec_ref(v___x_1520_);
lean_dec_ref(v___x_1518_);
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1522_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1523_ = ((lean_object*)(l_reduceDIte___closed__1));
v___x_1524_ = l_Lean_Expr_isConstOf(v___x_1522_, v___x_1523_);
lean_dec_ref(v___x_1522_);
if (v___x_1524_ == 0)
{
lean_dec_ref(v___x_1518_);
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v___x_1512_);
goto v___jp_1504_;
}
else
{
lean_object* v_arg_1525_; lean_object* v_arg_1526_; lean_object* v_arg_1527_; lean_object* v_arg_1528_; lean_object* v___x_1529_; 
v_arg_1525_ = lean_ctor_get(v___x_1512_, 1);
lean_inc_ref(v_arg_1525_);
lean_dec_ref(v___x_1512_);
v_arg_1526_ = lean_ctor_get(v___x_1514_, 1);
lean_inc_ref(v_arg_1526_);
lean_dec_ref(v___x_1514_);
v_arg_1527_ = lean_ctor_get(v___x_1516_, 1);
lean_inc_ref(v_arg_1527_);
lean_dec_ref(v___x_1516_);
v_arg_1528_ = lean_ctor_get(v___x_1518_, 1);
lean_inc_ref_n(v_arg_1528_, 2);
lean_dec_ref(v___x_1518_);
lean_inc(v_a_1502_);
lean_inc_ref(v_a_1501_);
lean_inc(v_a_1500_);
lean_inc_ref(v_a_1499_);
lean_inc(v_a_1498_);
lean_inc_ref(v_a_1497_);
lean_inc(v_a_1496_);
v___x_1529_ = lean_simp(v_arg_1528_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1597_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1532_ = v___x_1529_;
v_isShared_1533_ = v_isSharedCheck_1597_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1597_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v_expr_1590_; uint8_t v___x_1591_; 
v_expr_1590_ = lean_ctor_get(v_a_1530_, 0);
lean_inc_ref(v_expr_1590_);
lean_dec(v_a_1530_);
v___x_1591_ = l_Lean_Expr_isTrue(v_expr_1590_);
if (v___x_1591_ == 0)
{
uint8_t v___x_1592_; 
v___x_1592_ = l_Lean_Expr_isFalse(v_expr_1590_);
lean_dec_ref(v_expr_1590_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1595_; 
lean_dec_ref(v_arg_1528_);
lean_dec_ref(v_arg_1527_);
lean_dec_ref(v_arg_1526_);
lean_dec_ref(v_arg_1525_);
v___x_1593_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1593_);
v___x_1595_ = v___x_1532_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
else
{
lean_del_object(v___x_1532_);
goto v___jp_1534_;
}
}
else
{
lean_dec_ref(v_expr_1590_);
lean_del_object(v___x_1532_);
goto v___jp_1534_;
}
v___jp_1534_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1535_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_1536_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_arg_1527_);
v___x_1537_ = l_Lean_Expr_proj___override(v___x_1535_, v___x_1536_, v_arg_1527_);
v___x_1538_ = l_Lean_Meta_whnfD(v___x_1537_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1540_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1538_, 1);
v___x_1540_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_1539_, v_a_1500_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1573_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1573_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1573_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v___x_1545_ = l_Lean_Expr_cleanupAnnotations(v_a_1541_);
lean_dec(v_a_1541_);
v___x_1546_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1547_ = l_Lean_Expr_isConstOf(v___x_1545_, v___x_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; uint8_t v___x_1549_; 
lean_dec_ref(v_arg_1525_);
v___x_1548_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_1549_ = l_Lean_Expr_isConstOf(v___x_1545_, v___x_1548_);
lean_dec_ref(v___x_1545_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
lean_dec_ref(v_arg_1528_);
lean_dec_ref(v_arg_1527_);
lean_dec_ref(v_arg_1526_);
v___x_1550_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1550_);
v___x_1552_ = v___x_1543_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
else
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1561_; 
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = l_Lean_Expr_proj___override(v___x_1535_, v___x_1554_, v_arg_1527_);
v___x_1556_ = l_Lean_Meta_mkExpectedPropHint(v___x_1555_, v_arg_1528_);
v___x_1557_ = l_Lean_Expr_app___override(v_arg_1526_, v___x_1556_);
v___x_1558_ = l_Lean_Expr_headBeta(v___x_1557_);
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1559_);
v___x_1561_ = v___x_1543_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
lean_dec_ref(v___x_1545_);
lean_dec_ref(v_arg_1526_);
v___x_1563_ = lean_unsigned_to_nat(1u);
v___x_1564_ = l_Lean_Expr_proj___override(v___x_1535_, v___x_1563_, v_arg_1527_);
v___x_1565_ = l_Lean_mkNot(v_arg_1528_);
v___x_1566_ = l_Lean_Meta_mkExpectedPropHint(v___x_1564_, v___x_1565_);
v___x_1567_ = l_Lean_Expr_app___override(v_arg_1525_, v___x_1566_);
v___x_1568_ = l_Lean_Expr_headBeta(v___x_1567_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1569_);
v___x_1571_ = v___x_1543_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1569_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v_arg_1528_);
lean_dec_ref(v_arg_1527_);
lean_dec_ref(v_arg_1526_);
lean_dec_ref(v_arg_1525_);
v_a_1574_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1540_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1540_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_arg_1528_);
lean_dec_ref(v_arg_1527_);
lean_dec_ref(v_arg_1526_);
lean_dec_ref(v_arg_1525_);
v_a_1582_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1538_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1538_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec_ref(v_arg_1528_);
lean_dec_ref(v_arg_1527_);
lean_dec_ref(v_arg_1526_);
lean_dec_ref(v_arg_1525_);
v_a_1598_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1529_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1529_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
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
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_a_1606_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1510_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1510_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
v___jp_1504_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object* v_e_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_dreduceDIte(v_e_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_);
lean_dec(v_a_1621_);
lean_dec_ref(v_a_1620_);
lean_dec(v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1628_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1629_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_1630_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_1631_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1628_, v___x_1629_, v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
return v_res_1633_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1638_ = 0;
v___x_1639_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_1640_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1637_, v___x_1638_, v___x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1644_; uint8_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1644_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1645_ = 0;
v___x_1646_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_1647_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1644_, v___x_1645_, v___x_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_dreduceCond(lean_object* v_e_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
uint8_t v_inDSimp_1662_; 
v_inDSimp_1662_ = lean_ctor_get_uint8(v_a_1652_, sizeof(void*)*10 + 8);
if (v_inDSimp_1662_ == 0)
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_dec_ref(v_e_1650_);
v___x_1663_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
return v___x_1664_;
}
else
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1650_, v_a_1655_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v___x_1665_, 1);
v___x_1667_ = l_Lean_Expr_cleanupAnnotations(v_a_1666_);
lean_dec(v_a_1666_);
v___x_1668_ = l_Lean_Expr_isApp(v___x_1667_);
if (v___x_1668_ == 0)
{
lean_dec_ref(v___x_1667_);
goto v___jp_1659_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1667_);
v___x_1670_ = l_Lean_Expr_isApp(v___x_1669_);
if (v___x_1670_ == 0)
{
lean_dec_ref(v___x_1669_);
lean_dec_ref(v___x_1667_);
goto v___jp_1659_;
}
else
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1669_);
v___x_1672_ = l_Lean_Expr_isApp(v___x_1671_);
if (v___x_1672_ == 0)
{
lean_dec_ref(v___x_1671_);
lean_dec_ref(v___x_1669_);
lean_dec_ref(v___x_1667_);
goto v___jp_1659_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1671_);
v___x_1674_ = l_Lean_Expr_isApp(v___x_1673_);
if (v___x_1674_ == 0)
{
lean_dec_ref(v___x_1673_);
lean_dec_ref(v___x_1671_);
lean_dec_ref(v___x_1669_);
lean_dec_ref(v___x_1667_);
goto v___jp_1659_;
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1675_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1673_);
lean_dec_ref(v___x_1673_);
v___x_1676_ = ((lean_object*)(l_reduceCond___closed__1));
v___x_1677_ = l_Lean_Expr_isConstOf(v___x_1675_, v___x_1676_);
lean_dec_ref(v___x_1675_);
if (v___x_1677_ == 0)
{
lean_dec_ref(v___x_1671_);
lean_dec_ref(v___x_1669_);
lean_dec_ref(v___x_1667_);
goto v___jp_1659_;
}
else
{
lean_object* v_arg_1678_; lean_object* v_arg_1679_; lean_object* v_arg_1680_; lean_object* v___x_1681_; 
v_arg_1678_ = lean_ctor_get(v___x_1667_, 1);
lean_inc_ref(v_arg_1678_);
lean_dec_ref(v___x_1667_);
v_arg_1679_ = lean_ctor_get(v___x_1669_, 1);
lean_inc_ref(v_arg_1679_);
lean_dec_ref(v___x_1669_);
v_arg_1680_ = lean_ctor_get(v___x_1671_, 1);
lean_inc_ref_n(v_arg_1680_, 2);
lean_dec_ref(v___x_1671_);
lean_inc(v_a_1657_);
lean_inc_ref(v_a_1656_);
lean_inc(v_a_1655_);
lean_inc_ref(v_a_1654_);
lean_inc(v_a_1653_);
lean_inc_ref(v_a_1652_);
lean_inc(v_a_1651_);
v___x_1681_ = lean_simp(v_arg_1680_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1736_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1684_ = v___x_1681_;
v_isShared_1685_ = v_isSharedCheck_1736_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1681_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1736_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v_expr_1686_; lean_object* v___x_1687_; uint8_t v___x_1729_; 
v_expr_1686_ = lean_ctor_get(v_a_1682_, 0);
lean_inc_ref(v_expr_1686_);
lean_dec(v_a_1682_);
v___x_1687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_1729_ = l_Lean_Expr_isConstOf(v_expr_1686_, v___x_1687_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1731_ = l_Lean_Expr_isConstOf(v_expr_1686_, v___x_1730_);
lean_dec_ref(v_expr_1686_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1734_; 
lean_dec_ref(v_arg_1680_);
lean_dec_ref(v_arg_1679_);
lean_dec_ref(v_arg_1678_);
v___x_1732_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 0, v___x_1732_);
v___x_1734_ = v___x_1684_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1732_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
else
{
lean_del_object(v___x_1684_);
goto v___jp_1688_;
}
}
else
{
lean_dec_ref(v_expr_1686_);
lean_del_object(v___x_1684_);
goto v___jp_1688_;
}
v___jp_1688_:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_Meta_whnfD(v_arg_1680_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1691_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___x_1691_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_1690_, v_a_1655_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1712_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1694_ = v___x_1691_;
v_isShared_1695_ = v_isSharedCheck_1712_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1691_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1712_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1696_ = l_Lean_Expr_cleanupAnnotations(v_a_1692_);
lean_dec(v_a_1692_);
v___x_1697_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1698_ = l_Lean_Expr_isConstOf(v___x_1696_, v___x_1697_);
if (v___x_1698_ == 0)
{
uint8_t v___x_1699_; 
lean_dec_ref(v_arg_1678_);
v___x_1699_ = l_Lean_Expr_isConstOf(v___x_1696_, v___x_1687_);
lean_dec_ref(v___x_1696_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
lean_dec_ref(v_arg_1679_);
v___x_1700_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1700_);
v___x_1702_ = v___x_1694_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
else
{
lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1704_, 0, v_arg_1679_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1704_);
v___x_1706_ = v___x_1694_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
lean_dec_ref(v___x_1696_);
lean_dec_ref(v_arg_1679_);
v___x_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_arg_1678_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1708_);
v___x_1710_ = v___x_1694_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec_ref(v_arg_1679_);
lean_dec_ref(v_arg_1678_);
v_a_1713_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1691_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1691_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_arg_1679_);
lean_dec_ref(v_arg_1678_);
v_a_1721_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1689_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1689_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_dec_ref(v_arg_1680_);
lean_dec_ref(v_arg_1679_);
lean_dec_ref(v_arg_1678_);
v_a_1737_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1681_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1681_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
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
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
v_a_1745_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1665_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1665_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
v___jp_1659_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceCond___boxed(lean_object* v_e_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_dreduceCond(v_e_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_, v_a_1760_);
lean_dec(v_a_1760_);
lean_dec_ref(v_a_1759_);
lean_dec(v_a_1758_);
lean_dec_ref(v_a_1757_);
lean_dec(v_a_1756_);
lean_dec_ref(v_a_1755_);
lean_dec(v_a_1754_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1767_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_));
v___x_1768_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_));
v___x_1769_ = lean_alloc_closure((void*)(l_dreduceCond___boxed), 9, 0);
v___x_1770_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1767_, v___x_1768_, v___x_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22____boxed(lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_();
return v_res_1772_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_alloc_closure((void*)(l_dreduceCond___boxed), 9, 0);
v___x_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1776_; uint8_t v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1776_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_));
v___x_1777_ = 0;
v___x_1778_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_);
v___x_1779_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1776_, v___x_1777_, v___x_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24____boxed(lean_object* v_a_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_();
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1783_; uint8_t v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1783_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_));
v___x_1784_ = 0;
v___x_1785_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_);
v___x_1786_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1783_, v___x_1784_, v___x_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26____boxed(lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26_();
return v_res_1788_;
}
}
static lean_object* _init_l_dreduceDCond___closed__2(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1793_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__10);
v___x_1794_ = ((lean_object*)(l_dreduceDCond___closed__1));
v___x_1795_ = l_Lean_mkConst(v___x_1794_, v___x_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_dreduceDCond(lean_object* v_e_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
uint8_t v_inDSimp_1808_; 
v_inDSimp_1808_ = lean_ctor_get_uint8(v_a_1798_, sizeof(void*)*10 + 8);
if (v_inDSimp_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
lean_dec_ref(v_e_1796_);
v___x_1809_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
else
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1796_, v_a_1801_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1811_, 1);
v___x_1813_ = l_Lean_Expr_cleanupAnnotations(v_a_1812_);
lean_dec(v_a_1812_);
v___x_1814_ = l_Lean_Expr_isApp(v___x_1813_);
if (v___x_1814_ == 0)
{
lean_dec_ref(v___x_1813_);
goto v___jp_1805_;
}
else
{
lean_object* v___x_1815_; uint8_t v___x_1816_; 
v___x_1815_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1813_);
v___x_1816_ = l_Lean_Expr_isApp(v___x_1815_);
if (v___x_1816_ == 0)
{
lean_dec_ref(v___x_1815_);
lean_dec_ref(v___x_1813_);
goto v___jp_1805_;
}
else
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1815_);
v___x_1818_ = l_Lean_Expr_isApp(v___x_1817_);
if (v___x_1818_ == 0)
{
lean_dec_ref(v___x_1817_);
lean_dec_ref(v___x_1815_);
lean_dec_ref(v___x_1813_);
goto v___jp_1805_;
}
else
{
lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1819_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1817_);
v___x_1820_ = l_Lean_Expr_isApp(v___x_1819_);
if (v___x_1820_ == 0)
{
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1817_);
lean_dec_ref(v___x_1815_);
lean_dec_ref(v___x_1813_);
goto v___jp_1805_;
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1821_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1819_);
lean_dec_ref(v___x_1819_);
v___x_1822_ = ((lean_object*)(l_reduceDCond___closed__1));
v___x_1823_ = l_Lean_Expr_isConstOf(v___x_1821_, v___x_1822_);
lean_dec_ref(v___x_1821_);
if (v___x_1823_ == 0)
{
lean_dec_ref(v___x_1817_);
lean_dec_ref(v___x_1815_);
lean_dec_ref(v___x_1813_);
goto v___jp_1805_;
}
else
{
lean_object* v_arg_1824_; lean_object* v_arg_1825_; lean_object* v_arg_1826_; lean_object* v___x_1827_; 
v_arg_1824_ = lean_ctor_get(v___x_1813_, 1);
lean_inc_ref(v_arg_1824_);
lean_dec_ref(v___x_1813_);
v_arg_1825_ = lean_ctor_get(v___x_1815_, 1);
lean_inc_ref(v_arg_1825_);
lean_dec_ref(v___x_1815_);
v_arg_1826_ = lean_ctor_get(v___x_1817_, 1);
lean_inc_ref_n(v_arg_1826_, 2);
lean_dec_ref(v___x_1817_);
lean_inc(v_a_1803_);
lean_inc_ref(v_a_1802_);
lean_inc(v_a_1801_);
lean_inc_ref(v_a_1800_);
lean_inc(v_a_1799_);
lean_inc_ref(v_a_1798_);
lean_inc(v_a_1797_);
v___x_1827_ = lean_simp(v_arg_1826_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1892_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1830_ = v___x_1827_;
v_isShared_1831_ = v_isSharedCheck_1892_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1827_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1892_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v_expr_1832_; lean_object* v___x_1833_; uint8_t v___x_1885_; 
v_expr_1832_ = lean_ctor_get(v_a_1828_, 0);
lean_inc_ref(v_expr_1832_);
lean_dec(v_a_1828_);
v___x_1833_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__2));
v___x_1885_ = l_Lean_Expr_isConstOf(v_expr_1832_, v___x_1833_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; uint8_t v___x_1887_; 
v___x_1886_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1887_ = l_Lean_Expr_isConstOf(v_expr_1832_, v___x_1886_);
lean_dec_ref(v_expr_1832_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; lean_object* v___x_1890_; 
lean_dec_ref(v_arg_1826_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1824_);
v___x_1888_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1888_);
v___x_1890_ = v___x_1830_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
else
{
lean_del_object(v___x_1830_);
goto v___jp_1834_;
}
}
else
{
lean_dec_ref(v_expr_1832_);
lean_del_object(v___x_1830_);
goto v___jp_1834_;
}
v___jp_1834_:
{
lean_object* v___x_1835_; 
lean_inc_ref(v_arg_1826_);
v___x_1835_ = l_Lean_Meta_whnfD(v_arg_1826_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc_n(v_a_1836_, 3);
lean_dec_ref_known(v___x_1835_, 1);
v___x_1837_ = lean_obj_once(&l_dreduceDCond___closed__2, &l_dreduceDCond___closed__2_once, _init_l_dreduceDCond___closed__2);
v___x_1838_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__13);
v___x_1839_ = l_Lean_mkAppB(v___x_1837_, v___x_1838_, v_a_1836_);
v___x_1840_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__11);
v___x_1841_ = l_Lean_mkApp3(v___x_1840_, v___x_1838_, v_arg_1826_, v_a_1836_);
v___x_1842_ = l_Lean_Meta_mkExpectedPropHint(v___x_1839_, v___x_1841_);
v___x_1843_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_1836_, v_a_1801_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1868_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1846_ = v___x_1843_;
v_isShared_1847_ = v_isSharedCheck_1868_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1868_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; 
v___x_1848_ = l_Lean_Expr_cleanupAnnotations(v_a_1844_);
lean_dec(v_a_1844_);
v___x_1849_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__4));
v___x_1850_ = l_Lean_Expr_isConstOf(v___x_1848_, v___x_1849_);
if (v___x_1850_ == 0)
{
uint8_t v___x_1851_; 
lean_dec_ref(v_arg_1824_);
v___x_1851_ = l_Lean_Expr_isConstOf(v___x_1848_, v___x_1833_);
lean_dec_ref(v___x_1848_);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; lean_object* v___x_1854_; 
lean_dec_ref(v___x_1842_);
lean_dec_ref(v_arg_1825_);
v___x_1852_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1852_);
v___x_1854_ = v___x_1846_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
else
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1856_ = l_Lean_Expr_app___override(v_arg_1825_, v___x_1842_);
v___x_1857_ = l_Lean_Expr_headBeta(v___x_1856_);
v___x_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1858_);
v___x_1860_ = v___x_1846_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
else
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
lean_dec_ref(v___x_1848_);
lean_dec_ref(v_arg_1825_);
v___x_1862_ = l_Lean_Expr_app___override(v_arg_1824_, v___x_1842_);
v___x_1863_ = l_Lean_Expr_headBeta(v___x_1862_);
v___x_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1864_);
v___x_1866_ = v___x_1846_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_dec_ref(v___x_1842_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1824_);
v_a_1869_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1843_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1843_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec_ref(v_arg_1826_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1824_);
v_a_1877_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1835_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1835_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec_ref(v_arg_1826_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1824_);
v_a_1893_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1827_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1827_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
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
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1811_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1811_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
v___jp_1805_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceDCond___boxed(lean_object* v_e_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_dreduceDCond(v_e_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
lean_dec(v_a_1916_);
lean_dec_ref(v_a_1915_);
lean_dec(v_a_1914_);
lean_dec_ref(v_a_1913_);
lean_dec(v_a_1912_);
lean_dec_ref(v_a_1911_);
lean_dec(v_a_1910_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1923_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_));
v___x_1924_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_));
v___x_1925_ = lean_alloc_closure((void*)(l_dreduceDCond___boxed), 9, 0);
v___x_1926_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1923_, v___x_1924_, v___x_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22____boxed(lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_();
return v_res_1928_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_alloc_closure((void*)(l_dreduceDCond___boxed), 9, 0);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1932_; uint8_t v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1932_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_));
v___x_1933_ = 0;
v___x_1934_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_);
v___x_1935_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1932_, v___x_1933_, v___x_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24____boxed(lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_();
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1939_; uint8_t v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1939_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_));
v___x_1940_ = 0;
v___x_1941_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_);
v___x_1942_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1939_, v___x_1940_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26____boxed(lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26_();
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0(lean_object* v_x_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0___boxed(lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_reduceCtorEq___lam__0(v_x_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1(lean_object* v_x_1966_, lean_object* v_x_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1___boxed(lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_reduceCtorEq___lam__1(v_x_1978_, v_x_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec(v_x_1979_);
lean_dec(v_x_1978_);
return v_res_1988_;
}
}
static lean_object* _init_l_reduceCtorEq___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = lean_box(0);
v___x_1993_ = ((lean_object*)(l_reduceCtorEq___lam__2___closed__1));
v___x_1994_ = l_Lean_mkConst(v___x_1993_, v___x_1992_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2(uint8_t v___x_1995_, uint8_t v___x_1996_, lean_object* v_h_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v___x_2006_; lean_object* v___y_2008_; lean_object* v___x_2028_; 
v___x_2006_ = lean_obj_once(&l_reduceCtorEq___lam__2___closed__2, &l_reduceCtorEq___lam__2___closed__2_once, _init_l_reduceCtorEq___lam__2___closed__2);
lean_inc_ref(v_h_1997_);
v___x_2028_ = l_Lean_Meta_mkNoConfusion(v___x_2006_, v_h_1997_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_mk_empty_array_with_capacity(v___x_2030_);
v___x_2032_ = lean_array_push(v___x_2031_, v_h_1997_);
v___x_2033_ = 1;
v___x_2034_ = l_Lean_Meta_mkLambdaFVars(v___x_2032_, v_a_2029_, v___x_1996_, v___x_1995_, v___x_1996_, v___x_1995_, v___x_2033_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec_ref(v___x_2032_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; uint8_t v_transparency_2037_; uint8_t v___x_2038_; uint8_t v___x_2039_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = l_Lean_Meta_Context_config(v___y_2001_);
v_transparency_2037_ = lean_ctor_get_uint8(v___x_2036_, 9);
lean_dec_ref(v___x_2036_);
v___x_2038_ = 1;
v___x_2039_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2037_, v___x_2038_);
if (v___x_2039_ == 0)
{
lean_object* v_keyedConfig_2040_; uint8_t v_trackZetaDelta_2041_; lean_object* v_zetaDeltaSet_2042_; lean_object* v_lctx_2043_; lean_object* v_localInstances_2044_; lean_object* v_defEqCtx_x3f_2045_; lean_object* v_synthPendingDepth_2046_; lean_object* v_customCanUnfoldPredicate_x3f_2047_; uint8_t v_univApprox_2048_; uint8_t v_inTypeClassResolution_2049_; uint8_t v_cacheInferType_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v_keyedConfig_2040_ = lean_ctor_get(v___y_2001_, 0);
v_trackZetaDelta_2041_ = lean_ctor_get_uint8(v___y_2001_, sizeof(void*)*7);
v_zetaDeltaSet_2042_ = lean_ctor_get(v___y_2001_, 1);
v_lctx_2043_ = lean_ctor_get(v___y_2001_, 2);
v_localInstances_2044_ = lean_ctor_get(v___y_2001_, 3);
v_defEqCtx_x3f_2045_ = lean_ctor_get(v___y_2001_, 4);
v_synthPendingDepth_2046_ = lean_ctor_get(v___y_2001_, 5);
v_customCanUnfoldPredicate_x3f_2047_ = lean_ctor_get(v___y_2001_, 6);
v_univApprox_2048_ = lean_ctor_get_uint8(v___y_2001_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2049_ = lean_ctor_get_uint8(v___y_2001_, sizeof(void*)*7 + 2);
v_cacheInferType_2050_ = lean_ctor_get_uint8(v___y_2001_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2040_);
v___x_2051_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2038_, v_keyedConfig_2040_);
lean_inc(v_customCanUnfoldPredicate_x3f_2047_);
lean_inc(v_synthPendingDepth_2046_);
lean_inc(v_defEqCtx_x3f_2045_);
lean_inc_ref(v_localInstances_2044_);
lean_inc_ref(v_lctx_2043_);
lean_inc(v_zetaDeltaSet_2042_);
v___x_2052_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_ctor_set(v___x_2052_, 1, v_zetaDeltaSet_2042_);
lean_ctor_set(v___x_2052_, 2, v_lctx_2043_);
lean_ctor_set(v___x_2052_, 3, v_localInstances_2044_);
lean_ctor_set(v___x_2052_, 4, v_defEqCtx_x3f_2045_);
lean_ctor_set(v___x_2052_, 5, v_synthPendingDepth_2046_);
lean_ctor_set(v___x_2052_, 6, v_customCanUnfoldPredicate_x3f_2047_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*7, v_trackZetaDelta_2041_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*7 + 1, v_univApprox_2048_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2049_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*7 + 3, v_cacheInferType_2050_);
v___x_2053_ = l_Lean_Meta_mkEqFalse_x27(v_a_2035_, v___x_2052_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec_ref_known(v___x_2052_, 7);
v___y_2008_ = v___x_2053_;
goto v___jp_2007_;
}
else
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_Meta_mkEqFalse_x27(v_a_2035_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v___y_2008_ = v___x_2054_;
goto v___jp_2007_;
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
v_a_2055_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2034_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2034_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec_ref(v_h_1997_);
v_a_2063_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2028_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2028_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
v___jp_2007_:
{
if (lean_obj_tag(v___y_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2019_; 
v_a_2009_ = lean_ctor_get(v___y_2008_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___y_2008_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2011_ = v___y_2008_;
v_isShared_2012_ = v_isSharedCheck_2019_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___y_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2019_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2017_; 
v___x_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2013_, 0, v_a_2009_);
v___x_2014_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2014_, 0, v___x_2006_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
lean_ctor_set_uint8(v___x_2014_, sizeof(void*)*2, v___x_1995_);
v___x_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 0, v___x_2015_);
v___x_2017_ = v___x_2011_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2015_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
v_a_2020_ = lean_ctor_get(v___y_2008_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___y_2008_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___y_2008_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___y_2008_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2___boxed(lean_object* v___x_2071_, lean_object* v___x_2072_, lean_object* v_h_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
uint8_t v___x_18692__boxed_2082_; uint8_t v___x_18693__boxed_2083_; lean_object* v_res_2084_; 
v___x_18692__boxed_2082_ = lean_unbox(v___x_2071_);
v___x_18693__boxed_2083_ = lean_unbox(v___x_2072_);
v_res_2084_ = l_reduceCtorEq___lam__2(v___x_18692__boxed_2082_, v___x_18693__boxed_2083_, v_h_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object* v_k_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v_b_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v___x_2095_; 
lean_inc(v___y_2093_);
lean_inc_ref(v___y_2092_);
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2088_);
lean_inc_ref(v___y_2087_);
lean_inc(v___y_2086_);
v___x_2095_ = lean_apply_9(v_k_2085_, v_b_2089_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, lean_box(0));
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(v_k_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v_b_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(lean_object* v_name_2107_, uint8_t v_bi_2108_, lean_object* v_type_2109_, lean_object* v_k_2110_, uint8_t v_kind_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v___f_2120_; lean_object* v___x_2121_; 
lean_inc(v___y_2114_);
lean_inc_ref(v___y_2113_);
lean_inc(v___y_2112_);
v___f_2120_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2120_, 0, v_k_2110_);
lean_closure_set(v___f_2120_, 1, v___y_2112_);
lean_closure_set(v___f_2120_, 2, v___y_2113_);
lean_closure_set(v___f_2120_, 3, v___y_2114_);
v___x_2121_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2107_, v_bi_2108_, v_type_2109_, v___f_2120_, v_kind_2111_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
if (lean_obj_tag(v___x_2121_) == 0)
{
return v___x_2121_;
}
else
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2129_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object* v_name_2130_, lean_object* v_bi_2131_, lean_object* v_type_2132_, lean_object* v_k_2133_, lean_object* v_kind_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
uint8_t v_bi_boxed_2143_; uint8_t v_kind_boxed_2144_; lean_object* v_res_2145_; 
v_bi_boxed_2143_ = lean_unbox(v_bi_2131_);
v_kind_boxed_2144_ = lean_unbox(v_kind_2134_);
v_res_2145_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_2130_, v_bi_boxed_2143_, v_type_2132_, v_k_2133_, v_kind_boxed_2144_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(lean_object* v_name_2146_, lean_object* v_type_2147_, lean_object* v_k_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
uint8_t v___x_2157_; uint8_t v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = 0;
v___x_2158_ = 0;
v___x_2159_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_2146_, v___x_2157_, v_type_2147_, v_k_2148_, v___x_2158_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg___boxed(lean_object* v_name_2160_, lean_object* v_type_2161_, lean_object* v_k_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_2160_, v_type_2161_, v_k_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object* v_e_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v___y_2185_; lean_object* v___x_2194_; uint8_t v_transparency_2195_; uint8_t v___x_2196_; uint8_t v___x_2197_; 
v___x_2194_ = l_Lean_Meta_Context_config(v_a_2179_);
v_transparency_2195_ = lean_ctor_get_uint8(v___x_2194_, 9);
lean_dec_ref(v___x_2194_);
v___x_2196_ = 3;
v___x_2197_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2195_, v___x_2196_);
if (v___x_2197_ == 0)
{
lean_object* v_keyedConfig_2198_; uint8_t v_trackZetaDelta_2199_; lean_object* v_zetaDeltaSet_2200_; lean_object* v_lctx_2201_; lean_object* v_localInstances_2202_; lean_object* v_defEqCtx_x3f_2203_; lean_object* v_synthPendingDepth_2204_; lean_object* v_customCanUnfoldPredicate_x3f_2205_; uint8_t v_univApprox_2206_; uint8_t v_inTypeClassResolution_2207_; uint8_t v_cacheInferType_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v_keyedConfig_2198_ = lean_ctor_get(v_a_2179_, 0);
v_trackZetaDelta_2199_ = lean_ctor_get_uint8(v_a_2179_, sizeof(void*)*7);
v_zetaDeltaSet_2200_ = lean_ctor_get(v_a_2179_, 1);
v_lctx_2201_ = lean_ctor_get(v_a_2179_, 2);
v_localInstances_2202_ = lean_ctor_get(v_a_2179_, 3);
v_defEqCtx_x3f_2203_ = lean_ctor_get(v_a_2179_, 4);
v_synthPendingDepth_2204_ = lean_ctor_get(v_a_2179_, 5);
v_customCanUnfoldPredicate_x3f_2205_ = lean_ctor_get(v_a_2179_, 6);
v_univApprox_2206_ = lean_ctor_get_uint8(v_a_2179_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2207_ = lean_ctor_get_uint8(v_a_2179_, sizeof(void*)*7 + 2);
v_cacheInferType_2208_ = lean_ctor_get_uint8(v_a_2179_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2198_);
v___x_2209_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2196_, v_keyedConfig_2198_);
lean_inc(v_customCanUnfoldPredicate_x3f_2205_);
lean_inc(v_synthPendingDepth_2204_);
lean_inc(v_defEqCtx_x3f_2203_);
lean_inc_ref(v_localInstances_2202_);
lean_inc_ref(v_lctx_2201_);
lean_inc(v_zetaDeltaSet_2200_);
v___x_2210_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
lean_ctor_set(v___x_2210_, 1, v_zetaDeltaSet_2200_);
lean_ctor_set(v___x_2210_, 2, v_lctx_2201_);
lean_ctor_set(v___x_2210_, 3, v_localInstances_2202_);
lean_ctor_set(v___x_2210_, 4, v_defEqCtx_x3f_2203_);
lean_ctor_set(v___x_2210_, 5, v_synthPendingDepth_2204_);
lean_ctor_set(v___x_2210_, 6, v_customCanUnfoldPredicate_x3f_2205_);
lean_ctor_set_uint8(v___x_2210_, sizeof(void*)*7, v_trackZetaDelta_2199_);
lean_ctor_set_uint8(v___x_2210_, sizeof(void*)*7 + 1, v_univApprox_2206_);
lean_ctor_set_uint8(v___x_2210_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2207_);
lean_ctor_set_uint8(v___x_2210_, sizeof(void*)*7 + 3, v_cacheInferType_2208_);
lean_inc_ref(v_e_2175_);
v___x_2211_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2175_, v_a_2180_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2213_ = l_Lean_Expr_cleanupAnnotations(v_a_2212_);
lean_dec(v_a_2212_);
v___x_2214_ = l_Lean_Expr_isApp(v___x_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec_ref(v___x_2213_);
lean_dec_ref(v_e_2175_);
v___x_2215_ = lean_box(0);
v___x_2216_ = l_reduceCtorEq___lam__0(v___x_2215_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
v___y_2185_ = v___x_2216_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2217_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2213_);
v___x_2218_ = l_Lean_Expr_isApp(v___x_2217_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
lean_dec_ref(v___x_2217_);
lean_dec_ref(v___x_2213_);
lean_dec_ref(v_e_2175_);
v___x_2219_ = lean_box(0);
v___x_2220_ = l_reduceCtorEq___lam__0(v___x_2219_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
v___y_2185_ = v___x_2220_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2221_; uint8_t v___x_2222_; 
v___x_2221_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2217_);
v___x_2222_ = l_Lean_Expr_isApp(v___x_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
lean_dec_ref(v___x_2221_);
lean_dec_ref(v___x_2217_);
lean_dec_ref(v___x_2213_);
lean_dec_ref(v_e_2175_);
v___x_2223_ = lean_box(0);
v___x_2224_ = l_reduceCtorEq___lam__0(v___x_2223_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
v___y_2185_ = v___x_2224_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2225_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2221_);
lean_dec_ref(v___x_2221_);
v___x_2226_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8));
v___x_2227_ = l_Lean_Expr_isConstOf(v___x_2225_, v___x_2226_);
lean_dec_ref(v___x_2225_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
lean_dec_ref(v___x_2217_);
lean_dec_ref(v___x_2213_);
lean_dec_ref(v_e_2175_);
v___x_2228_ = lean_box(0);
v___x_2229_ = l_reduceCtorEq___lam__0(v___x_2228_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
v___y_2185_ = v___x_2229_;
goto v___jp_2184_;
}
else
{
lean_object* v_arg_2230_; lean_object* v_arg_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___f_2234_; lean_object* v___x_2235_; 
v_arg_2230_ = lean_ctor_get(v___x_2213_, 1);
lean_inc_ref(v_arg_2230_);
lean_dec_ref(v___x_2213_);
v_arg_2231_ = lean_ctor_get(v___x_2217_, 1);
lean_inc_ref(v_arg_2231_);
lean_dec_ref(v___x_2217_);
v___x_2232_ = lean_box(v___x_2227_);
v___x_2233_ = lean_box(v___x_2197_);
v___f_2234_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_2234_, 0, v___x_2232_);
lean_closure_set(v___f_2234_, 1, v___x_2233_);
v___x_2235_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_2231_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; lean_object* v___x_2237_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___x_2235_, 1);
v___x_2237_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_2230_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2237_) == 0)
{
if (lean_obj_tag(v_a_2236_) == 1)
{
lean_object* v_val_2238_; lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2258_; 
v_val_2238_ = lean_ctor_get(v_a_2236_, 0);
v_a_2239_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2241_ = v___x_2237_;
v_isShared_2242_ = v_isSharedCheck_2258_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2237_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2258_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
if (lean_obj_tag(v_a_2239_) == 1)
{
lean_object* v_val_2243_; lean_object* v_fst_2244_; lean_object* v_toConstantVal_2245_; lean_object* v_fst_2246_; lean_object* v_toConstantVal_2247_; lean_object* v_name_2248_; lean_object* v_name_2249_; uint8_t v___x_2250_; 
lean_inc(v_val_2238_);
lean_dec_ref_known(v_a_2236_, 1);
v_val_2243_ = lean_ctor_get(v_a_2239_, 0);
lean_inc(v_val_2243_);
lean_dec_ref_known(v_a_2239_, 1);
v_fst_2244_ = lean_ctor_get(v_val_2238_, 0);
lean_inc(v_fst_2244_);
lean_dec(v_val_2238_);
v_toConstantVal_2245_ = lean_ctor_get(v_fst_2244_, 0);
lean_inc_ref(v_toConstantVal_2245_);
lean_dec(v_fst_2244_);
v_fst_2246_ = lean_ctor_get(v_val_2243_, 0);
lean_inc(v_fst_2246_);
lean_dec(v_val_2243_);
v_toConstantVal_2247_ = lean_ctor_get(v_fst_2246_, 0);
lean_inc_ref(v_toConstantVal_2247_);
lean_dec(v_fst_2246_);
v_name_2248_ = lean_ctor_get(v_toConstantVal_2245_, 0);
lean_inc(v_name_2248_);
lean_dec_ref(v_toConstantVal_2245_);
v_name_2249_ = lean_ctor_get(v_toConstantVal_2247_, 0);
lean_inc(v_name_2249_);
lean_dec_ref(v_toConstantVal_2247_);
v___x_2250_ = lean_name_eq(v_name_2248_, v_name_2249_);
lean_dec(v_name_2249_);
lean_dec(v_name_2248_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_del_object(v___x_2241_);
v___x_2251_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_2252_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_2251_, v_e_2175_, v___f_2234_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
v___y_2185_ = v___x_2252_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2253_; lean_object* v___x_2255_; 
lean_dec_ref(v___f_2234_);
lean_dec_ref_known(v___x_2210_, 7);
lean_dec_ref(v_e_2175_);
v___x_2253_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v___x_2253_);
v___x_2255_ = v___x_2241_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
else
{
lean_object* v___x_2257_; 
lean_del_object(v___x_2241_);
lean_dec_ref(v___f_2234_);
lean_dec_ref(v_e_2175_);
v___x_2257_ = l_reduceCtorEq___lam__1(v_a_2236_, v_a_2239_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
lean_dec(v_a_2239_);
lean_dec_ref_known(v_a_2236_, 1);
v___y_2185_ = v___x_2257_;
goto v___jp_2184_;
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2260_; 
lean_dec_ref(v___f_2234_);
lean_dec_ref(v_e_2175_);
v_a_2259_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2260_ = l_reduceCtorEq___lam__1(v_a_2236_, v_a_2259_, v_a_2176_, v_a_2177_, v_a_2178_, v___x_2210_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec_ref_known(v___x_2210_, 7);
lean_dec(v_a_2259_);
lean_dec(v_a_2236_);
v___y_2185_ = v___x_2260_;
goto v___jp_2184_;
}
}
else
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
lean_dec(v_a_2236_);
lean_dec_ref(v___f_2234_);
lean_dec_ref_known(v___x_2210_, 7);
lean_dec_ref(v_e_2175_);
v_a_2261_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2237_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2237_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
lean_dec_ref(v___f_2234_);
lean_dec_ref(v_arg_2230_);
lean_dec_ref_known(v___x_2210_, 7);
lean_dec_ref(v_e_2175_);
v_a_2269_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2235_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2235_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
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
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec_ref_known(v___x_2210_, 7);
lean_dec_ref(v_e_2175_);
v_a_2277_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2211_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2211_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
else
{
lean_object* v___x_2285_; 
lean_inc_ref(v_e_2175_);
v___x_2285_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2175_, v_a_2180_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; uint8_t v___x_2288_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
v___x_2287_ = l_Lean_Expr_cleanupAnnotations(v_a_2286_);
lean_dec(v_a_2286_);
v___x_2288_ = l_Lean_Expr_isApp(v___x_2287_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
lean_dec_ref(v___x_2287_);
lean_dec_ref(v_e_2175_);
v___x_2289_ = lean_box(0);
v___x_2290_ = l_reduceCtorEq___lam__0(v___x_2289_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
v___y_2185_ = v___x_2290_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___x_2291_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2287_);
v___x_2292_ = l_Lean_Expr_isApp(v___x_2291_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_dec_ref(v___x_2291_);
lean_dec_ref(v___x_2287_);
lean_dec_ref(v_e_2175_);
v___x_2293_ = lean_box(0);
v___x_2294_ = l_reduceCtorEq___lam__0(v___x_2293_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
v___y_2185_ = v___x_2294_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2295_; uint8_t v___x_2296_; 
v___x_2295_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2291_);
v___x_2296_ = l_Lean_Expr_isApp(v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
lean_dec_ref(v___x_2295_);
lean_dec_ref(v___x_2291_);
lean_dec_ref(v___x_2287_);
lean_dec_ref(v_e_2175_);
v___x_2297_ = lean_box(0);
v___x_2298_ = l_reduceCtorEq___lam__0(v___x_2297_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
v___y_2185_ = v___x_2298_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2299_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2295_);
lean_dec_ref(v___x_2295_);
v___x_2300_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__decideBoolCond_x3f___closed__8));
v___x_2301_ = l_Lean_Expr_isConstOf(v___x_2299_, v___x_2300_);
lean_dec_ref(v___x_2299_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_dec_ref(v___x_2291_);
lean_dec_ref(v___x_2287_);
lean_dec_ref(v_e_2175_);
v___x_2302_ = lean_box(0);
v___x_2303_ = l_reduceCtorEq___lam__0(v___x_2302_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
v___y_2185_ = v___x_2303_;
goto v___jp_2184_;
}
else
{
lean_object* v_arg_2304_; lean_object* v_arg_2305_; lean_object* v___x_2306_; 
v_arg_2304_ = lean_ctor_get(v___x_2287_, 1);
lean_inc_ref(v_arg_2304_);
lean_dec_ref(v___x_2287_);
v_arg_2305_ = lean_ctor_get(v___x_2291_, 1);
lean_inc_ref(v_arg_2305_);
lean_dec_ref(v___x_2291_);
v___x_2306_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_2305_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2308_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_2304_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2308_) == 0)
{
if (lean_obj_tag(v_a_2307_) == 1)
{
lean_object* v_val_2309_; lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2332_; 
v_val_2309_ = lean_ctor_get(v_a_2307_, 0);
v_a_2310_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2312_ = v___x_2308_;
v_isShared_2313_ = v_isSharedCheck_2332_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2308_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2332_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
if (lean_obj_tag(v_a_2310_) == 1)
{
lean_object* v_val_2314_; lean_object* v_fst_2315_; lean_object* v_toConstantVal_2316_; lean_object* v_fst_2317_; lean_object* v_toConstantVal_2318_; lean_object* v_name_2319_; lean_object* v_name_2320_; uint8_t v___x_2321_; 
lean_inc(v_val_2309_);
lean_dec_ref_known(v_a_2307_, 1);
v_val_2314_ = lean_ctor_get(v_a_2310_, 0);
lean_inc(v_val_2314_);
lean_dec_ref_known(v_a_2310_, 1);
v_fst_2315_ = lean_ctor_get(v_val_2309_, 0);
lean_inc(v_fst_2315_);
lean_dec(v_val_2309_);
v_toConstantVal_2316_ = lean_ctor_get(v_fst_2315_, 0);
lean_inc_ref(v_toConstantVal_2316_);
lean_dec(v_fst_2315_);
v_fst_2317_ = lean_ctor_get(v_val_2314_, 0);
lean_inc(v_fst_2317_);
lean_dec(v_val_2314_);
v_toConstantVal_2318_ = lean_ctor_get(v_fst_2317_, 0);
lean_inc_ref(v_toConstantVal_2318_);
lean_dec(v_fst_2317_);
v_name_2319_ = lean_ctor_get(v_toConstantVal_2316_, 0);
lean_inc(v_name_2319_);
lean_dec_ref(v_toConstantVal_2316_);
v_name_2320_ = lean_ctor_get(v_toConstantVal_2318_, 0);
lean_inc(v_name_2320_);
lean_dec_ref(v_toConstantVal_2318_);
v___x_2321_ = lean_name_eq(v_name_2319_, v_name_2320_);
lean_dec(v_name_2320_);
lean_dec(v_name_2319_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___f_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
lean_del_object(v___x_2312_);
v___x_2322_ = lean_box(v___x_2301_);
v___x_2323_ = lean_box(v___x_2321_);
v___f_2324_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_2324_, 0, v___x_2322_);
lean_closure_set(v___f_2324_, 1, v___x_2323_);
v___x_2325_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_2326_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_2325_, v_e_2175_, v___f_2324_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
v___y_2185_ = v___x_2326_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2327_; lean_object* v___x_2329_; 
lean_dec_ref(v_e_2175_);
v___x_2327_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2327_);
v___x_2329_ = v___x_2312_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
else
{
lean_object* v___x_2331_; 
lean_del_object(v___x_2312_);
lean_dec_ref(v_e_2175_);
v___x_2331_ = l_reduceCtorEq___lam__1(v_a_2307_, v_a_2310_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec(v_a_2310_);
lean_dec_ref_known(v_a_2307_, 1);
v___y_2185_ = v___x_2331_;
goto v___jp_2184_;
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2334_; 
lean_dec_ref(v_e_2175_);
v_a_2333_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2334_ = l_reduceCtorEq___lam__1(v_a_2307_, v_a_2333_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec(v_a_2333_);
lean_dec(v_a_2307_);
v___y_2185_ = v___x_2334_;
goto v___jp_2184_;
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec(v_a_2307_);
lean_dec_ref(v_e_2175_);
v_a_2335_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2308_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2308_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref(v_arg_2304_);
lean_dec_ref(v_e_2175_);
v_a_2343_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2306_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2306_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
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
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec_ref(v_e_2175_);
v_a_2351_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2285_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2285_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
v___jp_2184_:
{
if (lean_obj_tag(v___y_2185_) == 0)
{
return v___y_2185_;
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
v_a_2186_ = lean_ctor_get(v___y_2185_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___y_2185_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___y_2185_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___y_2185_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object* v_e_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_reduceCtorEq(v_e_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
lean_dec(v_a_2366_);
lean_dec_ref(v_a_2365_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object* v_00_u03b1_2369_, lean_object* v_name_2370_, uint8_t v_bi_2371_, lean_object* v_type_2372_, lean_object* v_k_2373_, uint8_t v_kind_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_2370_, v_bi_2371_, v_type_2372_, v_k_2373_, v_kind_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2384_, lean_object* v_name_2385_, lean_object* v_bi_2386_, lean_object* v_type_2387_, lean_object* v_k_2388_, lean_object* v_kind_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
uint8_t v_bi_boxed_2398_; uint8_t v_kind_boxed_2399_; lean_object* v_res_2400_; 
v_bi_boxed_2398_ = lean_unbox(v_bi_2386_);
v_kind_boxed_2399_ = lean_unbox(v_kind_2389_);
v_res_2400_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(v_00_u03b1_2384_, v_name_2385_, v_bi_boxed_2398_, v_type_2387_, v_k_2388_, v_kind_boxed_2399_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object* v_00_u03b1_2401_, lean_object* v_name_2402_, lean_object* v_type_2403_, lean_object* v_k_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_2402_, v_type_2403_, v_k_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object* v_00_u03b1_2414_, lean_object* v_name_2415_, lean_object* v_type_2416_, lean_object* v_k_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(v_00_u03b1_2414_, v_name_2415_, v_type_2416_, v_k_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2442_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_2443_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_2444_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_2445_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2442_, v___x_2443_, v___x_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
return v_res_2447_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(void){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_2451_; uint8_t v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2451_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_2452_ = 1;
v___x_2453_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_2454_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2451_, v___x_2452_, v___x_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25____boxed(lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_2458_; uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2458_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_2459_ = 1;
v___x_2460_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_2461_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2458_, v___x_2459_, v___x_2460_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27____boxed(lean_object* v_a_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
return v_res_2463_;
}
}
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUIte___regBuiltin_reduceUIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3354767649____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceUDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceUDIte___regBuiltin_reduceUDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_310021104____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCond_declare__28_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCond___regBuiltin_reduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_895774273____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDCond_declare__33_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDCond___regBuiltin_reduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2433674200____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__38_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__43_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceCond_declare__48_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceCond___regBuiltin_dreduceCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4097448362____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDCond_declare__53_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDCond___regBuiltin_dreduceDCond_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_371747461____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__58_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* initialize_Init_UDecidable(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
}
#ifdef __cplusplus
}
#endif
