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
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
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
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
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
static const lean_ctor_object l_dreduceIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_dreduceIte___closed__0 = (const lean_object*)&l_dreduceIte___closed__0_value;
static const lean_string_object l_dreduceIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_dreduceIte___closed__1 = (const lean_object*)&l_dreduceIte___closed__1_value;
static const lean_ctor_object l_dreduceIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_dreduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_dreduceIte___closed__2 = (const lean_object*)&l_dreduceIte___closed__2_value;
static const lean_string_object l_dreduceIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_dreduceIte___closed__3 = (const lean_object*)&l_dreduceIte___closed__3_value;
static const lean_string_object l_dreduceIte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_dreduceIte___closed__4 = (const lean_object*)&l_dreduceIte___closed__4_value;
static const lean_ctor_object l_dreduceIte___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_dreduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_dreduceIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_dreduceIte___closed__5_value_aux_0),((lean_object*)&l_dreduceIte___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_dreduceIte___closed__5 = (const lean_object*)&l_dreduceIte___closed__5_value;
static const lean_string_object l_dreduceIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_dreduceIte___closed__6 = (const lean_object*)&l_dreduceIte___closed__6_value;
static const lean_ctor_object l_dreduceIte___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_dreduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_dreduceIte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_dreduceIte___closed__7_value_aux_0),((lean_object*)&l_dreduceIte___closed__6_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_dreduceIte___closed__7 = (const lean_object*)&l_dreduceIte___closed__7_value;
LEAN_EXPORT lean_object* l_dreduceIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dreduceIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(20, 216, 99, 140, 103, 209, 78, 255)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dreduceDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(222, 220, 170, 50, 32, 2, 19, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object*);
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
static const lean_string_object l_reduceCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_reduceCtorEq___closed__0 = (const lean_object*)&l_reduceCtorEq___closed__0_value;
static const lean_ctor_object l_reduceCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_reduceCtorEq___closed__1 = (const lean_object*)&l_reduceCtorEq___closed__1_value;
static const lean_string_object l_reduceCtorEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_reduceCtorEq___closed__2 = (const lean_object*)&l_reduceCtorEq___closed__2_value;
static const lean_ctor_object l_reduceCtorEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_reduceCtorEq___closed__3 = (const lean_object*)&l_reduceCtorEq___closed__3_value;
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceCtorEq___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_dreduceIte(lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
uint8_t v_inDSimp_734_; 
v_inDSimp_734_ = lean_ctor_get_uint8(v_a_724_, sizeof(void*)*10 + 8);
if (v_inDSimp_734_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; 
lean_dec_ref(v_e_722_);
v___x_735_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
else
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_722_, v_a_727_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = l_Lean_Expr_cleanupAnnotations(v_a_738_);
lean_dec(v_a_738_);
v___x_740_ = l_Lean_Expr_isApp(v___x_739_);
if (v___x_740_ == 0)
{
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = l_Lean_Expr_appFnCleanup___redArg(v___x_739_);
v___x_742_ = l_Lean_Expr_isApp(v___x_741_);
if (v___x_742_ == 0)
{
lean_dec_ref(v___x_741_);
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_743_ = l_Lean_Expr_appFnCleanup___redArg(v___x_741_);
v___x_744_ = l_Lean_Expr_isApp(v___x_743_);
if (v___x_744_ == 0)
{
lean_dec_ref(v___x_743_);
lean_dec_ref(v___x_741_);
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = l_Lean_Expr_appFnCleanup___redArg(v___x_743_);
v___x_746_ = l_Lean_Expr_isApp(v___x_745_);
if (v___x_746_ == 0)
{
lean_dec_ref(v___x_745_);
lean_dec_ref(v___x_743_);
lean_dec_ref(v___x_741_);
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = l_Lean_Expr_appFnCleanup___redArg(v___x_745_);
v___x_748_ = l_Lean_Expr_isApp(v___x_747_);
if (v___x_748_ == 0)
{
lean_dec_ref(v___x_747_);
lean_dec_ref(v___x_745_);
lean_dec_ref(v___x_743_);
lean_dec_ref(v___x_741_);
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_749_ = l_Lean_Expr_appFnCleanup___redArg(v___x_747_);
lean_dec_ref(v___x_747_);
v___x_750_ = ((lean_object*)(l_reduceIte___closed__2));
v___x_751_ = l_Lean_Expr_isConstOf(v___x_749_, v___x_750_);
lean_dec_ref(v___x_749_);
if (v___x_751_ == 0)
{
lean_dec_ref(v___x_745_);
lean_dec_ref(v___x_743_);
lean_dec_ref(v___x_741_);
lean_dec_ref(v___x_739_);
goto v___jp_731_;
}
else
{
lean_object* v_arg_752_; lean_object* v_arg_753_; lean_object* v_arg_754_; lean_object* v_arg_755_; lean_object* v___x_756_; 
v_arg_752_ = lean_ctor_get(v___x_739_, 1);
lean_inc_ref(v_arg_752_);
lean_dec_ref(v___x_739_);
v_arg_753_ = lean_ctor_get(v___x_741_, 1);
lean_inc_ref(v_arg_753_);
lean_dec_ref(v___x_741_);
v_arg_754_ = lean_ctor_get(v___x_743_, 1);
lean_inc_ref(v_arg_754_);
lean_dec_ref(v___x_743_);
v_arg_755_ = lean_ctor_get(v___x_745_, 1);
lean_inc_ref(v_arg_755_);
lean_dec_ref(v___x_745_);
lean_inc(v_a_729_);
lean_inc_ref(v_a_728_);
lean_inc(v_a_727_);
lean_inc_ref(v_a_726_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
v___x_756_ = lean_simp(v_arg_755_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_813_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_813_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_813_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_813_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v_expr_806_; uint8_t v___x_807_; 
v_expr_806_ = lean_ctor_get(v_a_757_, 0);
lean_inc_ref(v_expr_806_);
lean_dec(v_a_757_);
v___x_807_ = l_Lean_Expr_isTrue(v_expr_806_);
if (v___x_807_ == 0)
{
uint8_t v___x_808_; 
v___x_808_ = l_Lean_Expr_isFalse(v_expr_806_);
lean_dec_ref(v_expr_806_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; lean_object* v___x_811_; 
lean_dec_ref(v_arg_754_);
lean_dec_ref(v_arg_753_);
lean_dec_ref(v_arg_752_);
v___x_809_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_809_);
v___x_811_ = v___x_759_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
else
{
lean_del_object(v___x_759_);
goto v___jp_761_;
}
}
else
{
lean_dec_ref(v_expr_806_);
lean_del_object(v___x_759_);
goto v___jp_761_;
}
v___jp_761_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_762_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_763_ = lean_unsigned_to_nat(0u);
v___x_764_ = l_Lean_Expr_proj___override(v___x_762_, v___x_763_, v_arg_754_);
v___x_765_ = l_Lean_Meta_whnfD(v___x_764_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_767_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_766_, v_a_727_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_789_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_789_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_789_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_789_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_772_ = l_Lean_Expr_cleanupAnnotations(v_a_768_);
lean_dec(v_a_768_);
v___x_773_ = ((lean_object*)(l_dreduceIte___closed__5));
v___x_774_ = l_Lean_Expr_isConstOf(v___x_772_, v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
lean_dec_ref(v_arg_752_);
v___x_775_ = ((lean_object*)(l_dreduceIte___closed__7));
v___x_776_ = l_Lean_Expr_isConstOf(v___x_772_, v___x_775_);
lean_dec_ref(v___x_772_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; lean_object* v___x_779_; 
lean_dec_ref(v_arg_753_);
v___x_777_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_777_);
v___x_779_ = v___x_770_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_781_, 0, v_arg_753_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_781_);
v___x_783_ = v___x_770_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
else
{
lean_object* v___x_785_; lean_object* v___x_787_; 
lean_dec_ref(v___x_772_);
lean_dec_ref(v_arg_753_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v_arg_752_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_785_);
v___x_787_ = v___x_770_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
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
lean_dec_ref(v_arg_753_);
lean_dec_ref(v_arg_752_);
v_a_790_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_767_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_767_);
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
lean_dec_ref(v_arg_753_);
lean_dec_ref(v_arg_752_);
v_a_798_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_765_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_765_);
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
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec_ref(v_arg_754_);
lean_dec_ref(v_arg_753_);
lean_dec_ref(v_arg_752_);
v_a_814_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_756_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_756_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
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
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_737_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_737_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
v___jp_731_:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object* v_e_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_dreduceIte(v_e_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_844_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3740862664____hygCtx___hyg_22_));
v___x_846_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_847_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_844_, v___x_845_, v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22____boxed(lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
return v_res_849_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_853_; uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_853_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_854_ = 0;
v___x_855_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_);
v___x_856_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_853_, v___x_854_, v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24____boxed(lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_860_; uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_860_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_));
v___x_861_ = 0;
v___x_862_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_);
v___x_863_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_860_, v___x_861_, v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26____boxed(lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object* v_e_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
uint8_t v_inDSimp_878_; 
v_inDSimp_878_ = lean_ctor_get_uint8(v_a_868_, sizeof(void*)*10 + 8);
if (v_inDSimp_878_ == 0)
{
lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec_ref(v_e_866_);
v___x_879_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_866_, v_a_871_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = l_Lean_Expr_cleanupAnnotations(v_a_882_);
lean_dec(v_a_882_);
v___x_884_ = l_Lean_Expr_isApp(v___x_883_);
if (v___x_884_ == 0)
{
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_885_ = l_Lean_Expr_appFnCleanup___redArg(v___x_883_);
v___x_886_ = l_Lean_Expr_isApp(v___x_885_);
if (v___x_886_ == 0)
{
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_887_ = l_Lean_Expr_appFnCleanup___redArg(v___x_885_);
v___x_888_ = l_Lean_Expr_isApp(v___x_887_);
if (v___x_888_ == 0)
{
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = l_Lean_Expr_appFnCleanup___redArg(v___x_887_);
v___x_890_ = l_Lean_Expr_isApp(v___x_889_);
if (v___x_890_ == 0)
{
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_891_ = l_Lean_Expr_appFnCleanup___redArg(v___x_889_);
v___x_892_ = l_Lean_Expr_isApp(v___x_891_);
if (v___x_892_ == 0)
{
lean_dec_ref(v___x_891_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_893_ = l_Lean_Expr_appFnCleanup___redArg(v___x_891_);
lean_dec_ref(v___x_891_);
v___x_894_ = ((lean_object*)(l_reduceDIte___closed__1));
v___x_895_ = l_Lean_Expr_isConstOf(v___x_893_, v___x_894_);
lean_dec_ref(v___x_893_);
if (v___x_895_ == 0)
{
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_885_);
lean_dec_ref(v___x_883_);
goto v___jp_875_;
}
else
{
lean_object* v_arg_896_; lean_object* v_arg_897_; lean_object* v_arg_898_; lean_object* v_arg_899_; lean_object* v___x_900_; 
v_arg_896_ = lean_ctor_get(v___x_883_, 1);
lean_inc_ref(v_arg_896_);
lean_dec_ref(v___x_883_);
v_arg_897_ = lean_ctor_get(v___x_885_, 1);
lean_inc_ref(v_arg_897_);
lean_dec_ref(v___x_885_);
v_arg_898_ = lean_ctor_get(v___x_887_, 1);
lean_inc_ref(v_arg_898_);
lean_dec_ref(v___x_887_);
v_arg_899_ = lean_ctor_get(v___x_889_, 1);
lean_inc_ref_n(v_arg_899_, 2);
lean_dec_ref(v___x_889_);
lean_inc(v_a_873_);
lean_inc_ref(v_a_872_);
lean_inc(v_a_871_);
lean_inc_ref(v_a_870_);
lean_inc(v_a_869_);
lean_inc_ref(v_a_868_);
lean_inc(v_a_867_);
v___x_900_ = lean_simp(v_arg_899_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_968_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_968_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_968_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_968_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v_expr_961_; uint8_t v___x_962_; 
v_expr_961_ = lean_ctor_get(v_a_901_, 0);
lean_inc_ref(v_expr_961_);
lean_dec(v_a_901_);
v___x_962_ = l_Lean_Expr_isTrue(v_expr_961_);
if (v___x_962_ == 0)
{
uint8_t v___x_963_; 
v___x_963_ = l_Lean_Expr_isFalse(v_expr_961_);
lean_dec_ref(v_expr_961_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; lean_object* v___x_966_; 
lean_dec_ref(v_arg_899_);
lean_dec_ref(v_arg_898_);
lean_dec_ref(v_arg_897_);
lean_dec_ref(v_arg_896_);
v___x_964_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_964_);
v___x_966_ = v___x_903_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
else
{
lean_del_object(v___x_903_);
goto v___jp_905_;
}
}
else
{
lean_dec_ref(v_expr_961_);
lean_del_object(v___x_903_);
goto v___jp_905_;
}
v___jp_905_:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_906_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_907_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_arg_898_);
v___x_908_ = l_Lean_Expr_proj___override(v___x_906_, v___x_907_, v_arg_898_);
v___x_909_ = l_Lean_Meta_whnfD(v___x_908_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_910_, v_a_871_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_944_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_944_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_944_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_944_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_916_ = l_Lean_Expr_cleanupAnnotations(v_a_912_);
lean_dec(v_a_912_);
v___x_917_ = ((lean_object*)(l_dreduceIte___closed__5));
v___x_918_ = l_Lean_Expr_isConstOf(v___x_916_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; uint8_t v___x_920_; 
lean_dec_ref(v_arg_896_);
v___x_919_ = ((lean_object*)(l_dreduceIte___closed__7));
v___x_920_ = l_Lean_Expr_isConstOf(v___x_916_, v___x_919_);
lean_dec_ref(v___x_916_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_923_; 
lean_dec_ref(v_arg_899_);
lean_dec_ref(v_arg_898_);
lean_dec_ref(v_arg_897_);
v___x_921_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_921_);
v___x_923_ = v___x_914_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_925_ = lean_unsigned_to_nat(1u);
v___x_926_ = l_Lean_Expr_proj___override(v___x_906_, v___x_925_, v_arg_898_);
v___x_927_ = l_Lean_Meta_mkExpectedPropHint(v___x_926_, v_arg_899_);
v___x_928_ = l_Lean_Expr_app___override(v_arg_897_, v___x_927_);
v___x_929_ = l_Lean_Expr_headBeta(v___x_928_);
v___x_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_930_);
v___x_932_ = v___x_914_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
lean_dec_ref(v___x_916_);
lean_dec_ref(v_arg_897_);
v___x_934_ = lean_unsigned_to_nat(1u);
v___x_935_ = l_Lean_Expr_proj___override(v___x_906_, v___x_934_, v_arg_898_);
v___x_936_ = l_Lean_mkNot(v_arg_899_);
v___x_937_ = l_Lean_Meta_mkExpectedPropHint(v___x_935_, v___x_936_);
v___x_938_ = l_Lean_Expr_app___override(v_arg_896_, v___x_937_);
v___x_939_ = l_Lean_Expr_headBeta(v___x_938_);
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_940_);
v___x_942_ = v___x_914_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
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
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v_arg_899_);
lean_dec_ref(v_arg_898_);
lean_dec_ref(v_arg_897_);
lean_dec_ref(v_arg_896_);
v_a_945_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_911_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_911_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
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
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec_ref(v_arg_899_);
lean_dec_ref(v_arg_898_);
lean_dec_ref(v_arg_897_);
lean_dec_ref(v_arg_896_);
v_a_953_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_909_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_909_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec_ref(v_arg_899_);
lean_dec_ref(v_arg_898_);
lean_dec_ref(v_arg_897_);
lean_dec_ref(v_arg_896_);
v_a_969_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_900_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_900_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
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
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
v_a_977_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_881_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_881_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
v___jp_875_:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_877_, 0, v___x_876_);
return v___x_877_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object* v_e_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_dreduceDIte(v_e_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_, v_a_992_);
lean_dec(v_a_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_999_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1000_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3607572908____hygCtx___hyg_22_));
v___x_1001_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_1002_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_999_, v___x_1000_, v___x_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
return v_res_1004_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_1008_; uint8_t v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1008_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1009_ = 0;
v___x_1010_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_1011_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1008_, v___x_1009_, v___x_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1015_; uint8_t v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1015_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_1016_ = 0;
v___x_1017_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_1018_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1015_, v___x_1016_, v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0(lean_object* v_x_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0___boxed(lean_object* v_x_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_reduceCtorEq___lam__0(v_x_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1(lean_object* v_x_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1___boxed(lean_object* v_x_1054_, lean_object* v_x_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_reduceCtorEq___lam__1(v_x_1054_, v_x_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec(v_x_1055_);
lean_dec(v_x_1054_);
return v_res_1064_;
}
}
static lean_object* _init_l_reduceCtorEq___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = ((lean_object*)(l_reduceCtorEq___lam__2___closed__1));
v___x_1070_ = l_Lean_mkConst(v___x_1069_, v___x_1068_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2(uint8_t v___x_1071_, uint8_t v___x_1072_, lean_object* v_h_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v___y_1084_; lean_object* v___x_1104_; 
v___x_1082_ = lean_obj_once(&l_reduceCtorEq___lam__2___closed__2, &l_reduceCtorEq___lam__2___closed__2_once, _init_l_reduceCtorEq___lam__2___closed__2);
lean_inc_ref(v_h_1073_);
v___x_1104_ = l_Lean_Meta_mkNoConfusion(v___x_1082_, v_h_1073_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; lean_object* v___x_1110_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_mk_empty_array_with_capacity(v___x_1106_);
v___x_1108_ = lean_array_push(v___x_1107_, v_h_1073_);
v___x_1109_ = 1;
v___x_1110_ = l_Lean_Meta_mkLambdaFVars(v___x_1108_, v_a_1105_, v___x_1072_, v___x_1071_, v___x_1072_, v___x_1071_, v___x_1109_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec_ref(v___x_1108_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1112_; uint8_t v_transparency_1113_; uint8_t v___x_1114_; uint8_t v___x_1115_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
lean_dec_ref_known(v___x_1110_, 1);
v___x_1112_ = l_Lean_Meta_Context_config(v___y_1077_);
v_transparency_1113_ = lean_ctor_get_uint8(v___x_1112_, 9);
lean_dec_ref(v___x_1112_);
v___x_1114_ = 1;
v___x_1115_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1113_, v___x_1114_);
if (v___x_1115_ == 0)
{
lean_object* v_keyedConfig_1116_; uint8_t v_trackZetaDelta_1117_; lean_object* v_zetaDeltaSet_1118_; lean_object* v_lctx_1119_; lean_object* v_localInstances_1120_; lean_object* v_defEqCtx_x3f_1121_; lean_object* v_synthPendingDepth_1122_; lean_object* v_customCanUnfoldPredicate_x3f_1123_; uint8_t v_univApprox_1124_; uint8_t v_inTypeClassResolution_1125_; uint8_t v_cacheInferType_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_keyedConfig_1116_ = lean_ctor_get(v___y_1077_, 0);
v_trackZetaDelta_1117_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*7);
v_zetaDeltaSet_1118_ = lean_ctor_get(v___y_1077_, 1);
v_lctx_1119_ = lean_ctor_get(v___y_1077_, 2);
v_localInstances_1120_ = lean_ctor_get(v___y_1077_, 3);
v_defEqCtx_x3f_1121_ = lean_ctor_get(v___y_1077_, 4);
v_synthPendingDepth_1122_ = lean_ctor_get(v___y_1077_, 5);
v_customCanUnfoldPredicate_x3f_1123_ = lean_ctor_get(v___y_1077_, 6);
v_univApprox_1124_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1125_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*7 + 2);
v_cacheInferType_1126_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1116_);
v___x_1127_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1114_, v_keyedConfig_1116_);
lean_inc(v_customCanUnfoldPredicate_x3f_1123_);
lean_inc(v_synthPendingDepth_1122_);
lean_inc(v_defEqCtx_x3f_1121_);
lean_inc_ref(v_localInstances_1120_);
lean_inc_ref(v_lctx_1119_);
lean_inc(v_zetaDeltaSet_1118_);
v___x_1128_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
lean_ctor_set(v___x_1128_, 1, v_zetaDeltaSet_1118_);
lean_ctor_set(v___x_1128_, 2, v_lctx_1119_);
lean_ctor_set(v___x_1128_, 3, v_localInstances_1120_);
lean_ctor_set(v___x_1128_, 4, v_defEqCtx_x3f_1121_);
lean_ctor_set(v___x_1128_, 5, v_synthPendingDepth_1122_);
lean_ctor_set(v___x_1128_, 6, v_customCanUnfoldPredicate_x3f_1123_);
lean_ctor_set_uint8(v___x_1128_, sizeof(void*)*7, v_trackZetaDelta_1117_);
lean_ctor_set_uint8(v___x_1128_, sizeof(void*)*7 + 1, v_univApprox_1124_);
lean_ctor_set_uint8(v___x_1128_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1125_);
lean_ctor_set_uint8(v___x_1128_, sizeof(void*)*7 + 3, v_cacheInferType_1126_);
v___x_1129_ = l_Lean_Meta_mkEqFalse_x27(v_a_1111_, v___x_1128_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec_ref_known(v___x_1128_, 7);
v___y_1084_ = v___x_1129_;
goto v___jp_1083_;
}
else
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_Meta_mkEqFalse_x27(v_a_1111_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
v___y_1084_ = v___x_1130_;
goto v___jp_1083_;
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
v_a_1131_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1110_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1110_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
lean_dec_ref(v_h_1073_);
v_a_1139_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___x_1104_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1104_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
v___jp_1083_:
{
if (lean_obj_tag(v___y_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1095_; 
v_a_1085_ = lean_ctor_get(v___y_1084_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___y_1084_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1087_ = v___y_1084_;
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___y_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_a_1085_);
v___x_1090_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1090_, 0, v___x_1082_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*2, v___x_1071_);
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1091_);
v___x_1093_ = v___x_1087_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
v_a_1096_ = lean_ctor_get(v___y_1084_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___y_1084_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___y_1084_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___y_1084_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2___boxed(lean_object* v___x_1147_, lean_object* v___x_1148_, lean_object* v_h_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
uint8_t v___x_18692__boxed_1158_; uint8_t v___x_18693__boxed_1159_; lean_object* v_res_1160_; 
v___x_18692__boxed_1158_ = lean_unbox(v___x_1147_);
v___x_18693__boxed_1159_ = lean_unbox(v___x_1148_);
v_res_1160_ = l_reduceCtorEq___lam__2(v___x_18692__boxed_1158_, v___x_18693__boxed_1159_, v_h_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v_b_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v___x_1171_; 
lean_inc(v___y_1169_);
lean_inc_ref(v___y_1168_);
lean_inc(v___y_1167_);
lean_inc_ref(v___y_1166_);
lean_inc(v___y_1164_);
lean_inc_ref(v___y_1163_);
lean_inc(v___y_1162_);
v___x_1171_ = lean_apply_9(v_k_1161_, v_b_1165_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, lean_box(0));
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v_b_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(v_k_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v_b_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(lean_object* v_name_1183_, uint8_t v_bi_1184_, lean_object* v_type_1185_, lean_object* v_k_1186_, uint8_t v_kind_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___f_1196_; lean_object* v___x_1197_; 
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
v___f_1196_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1196_, 0, v_k_1186_);
lean_closure_set(v___f_1196_, 1, v___y_1188_);
lean_closure_set(v___f_1196_, 2, v___y_1189_);
lean_closure_set(v___f_1196_, 3, v___y_1190_);
v___x_1197_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1183_, v_bi_1184_, v_type_1185_, v___f_1196_, v_kind_1187_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
if (lean_obj_tag(v___x_1197_) == 0)
{
return v___x_1197_;
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1197_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1197_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object* v_name_1206_, lean_object* v_bi_1207_, lean_object* v_type_1208_, lean_object* v_k_1209_, lean_object* v_kind_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
uint8_t v_bi_boxed_1219_; uint8_t v_kind_boxed_1220_; lean_object* v_res_1221_; 
v_bi_boxed_1219_ = lean_unbox(v_bi_1207_);
v_kind_boxed_1220_ = lean_unbox(v_kind_1210_);
v_res_1221_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1206_, v_bi_boxed_1219_, v_type_1208_, v_k_1209_, v_kind_boxed_1220_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v___y_1211_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(lean_object* v_name_1222_, lean_object* v_type_1223_, lean_object* v_k_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
uint8_t v___x_1233_; uint8_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1233_ = 0;
v___x_1234_ = 0;
v___x_1235_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1222_, v___x_1233_, v_type_1223_, v_k_1224_, v___x_1234_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg___boxed(lean_object* v_name_1236_, lean_object* v_type_1237_, lean_object* v_k_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_1236_, v_type_1237_, v_k_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec(v___y_1239_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object* v_e_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___y_1264_; lean_object* v___x_1273_; uint8_t v_transparency_1274_; uint8_t v___x_1275_; uint8_t v___x_1276_; 
v___x_1273_ = l_Lean_Meta_Context_config(v_a_1258_);
v_transparency_1274_ = lean_ctor_get_uint8(v___x_1273_, 9);
lean_dec_ref(v___x_1273_);
v___x_1275_ = 3;
v___x_1276_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1274_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_object* v_keyedConfig_1277_; uint8_t v_trackZetaDelta_1278_; lean_object* v_zetaDeltaSet_1279_; lean_object* v_lctx_1280_; lean_object* v_localInstances_1281_; lean_object* v_defEqCtx_x3f_1282_; lean_object* v_synthPendingDepth_1283_; lean_object* v_customCanUnfoldPredicate_x3f_1284_; uint8_t v_univApprox_1285_; uint8_t v_inTypeClassResolution_1286_; uint8_t v_cacheInferType_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_keyedConfig_1277_ = lean_ctor_get(v_a_1258_, 0);
v_trackZetaDelta_1278_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*7);
v_zetaDeltaSet_1279_ = lean_ctor_get(v_a_1258_, 1);
v_lctx_1280_ = lean_ctor_get(v_a_1258_, 2);
v_localInstances_1281_ = lean_ctor_get(v_a_1258_, 3);
v_defEqCtx_x3f_1282_ = lean_ctor_get(v_a_1258_, 4);
v_synthPendingDepth_1283_ = lean_ctor_get(v_a_1258_, 5);
v_customCanUnfoldPredicate_x3f_1284_ = lean_ctor_get(v_a_1258_, 6);
v_univApprox_1285_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1286_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*7 + 2);
v_cacheInferType_1287_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1277_);
v___x_1288_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1275_, v_keyedConfig_1277_);
lean_inc(v_customCanUnfoldPredicate_x3f_1284_);
lean_inc(v_synthPendingDepth_1283_);
lean_inc(v_defEqCtx_x3f_1282_);
lean_inc_ref(v_localInstances_1281_);
lean_inc_ref(v_lctx_1280_);
lean_inc(v_zetaDeltaSet_1279_);
v___x_1289_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v_zetaDeltaSet_1279_);
lean_ctor_set(v___x_1289_, 2, v_lctx_1280_);
lean_ctor_set(v___x_1289_, 3, v_localInstances_1281_);
lean_ctor_set(v___x_1289_, 4, v_defEqCtx_x3f_1282_);
lean_ctor_set(v___x_1289_, 5, v_synthPendingDepth_1283_);
lean_ctor_set(v___x_1289_, 6, v_customCanUnfoldPredicate_x3f_1284_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*7, v_trackZetaDelta_1278_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*7 + 1, v_univApprox_1285_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1286_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*7 + 3, v_cacheInferType_1287_);
lean_inc_ref(v_e_1254_);
v___x_1290_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1254_, v_a_1259_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
v___x_1292_ = l_Lean_Expr_cleanupAnnotations(v_a_1291_);
lean_dec(v_a_1291_);
v___x_1293_ = l_Lean_Expr_isApp(v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec_ref(v___x_1292_);
lean_dec_ref(v_e_1254_);
v___x_1294_ = lean_box(0);
v___x_1295_ = l_reduceCtorEq___lam__0(v___x_1294_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
v___y_1264_ = v___x_1295_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1292_);
v___x_1297_ = l_Lean_Expr_isApp(v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_dec_ref(v___x_1296_);
lean_dec_ref(v___x_1292_);
lean_dec_ref(v_e_1254_);
v___x_1298_ = lean_box(0);
v___x_1299_ = l_reduceCtorEq___lam__0(v___x_1298_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
v___y_1264_ = v___x_1299_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1296_);
v___x_1301_ = l_Lean_Expr_isApp(v___x_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec_ref(v___x_1300_);
lean_dec_ref(v___x_1296_);
lean_dec_ref(v___x_1292_);
lean_dec_ref(v_e_1254_);
v___x_1302_ = lean_box(0);
v___x_1303_ = l_reduceCtorEq___lam__0(v___x_1302_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
v___y_1264_ = v___x_1303_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1304_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1300_);
lean_dec_ref(v___x_1300_);
v___x_1305_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_1306_ = l_Lean_Expr_isConstOf(v___x_1304_, v___x_1305_);
lean_dec_ref(v___x_1304_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
lean_dec_ref(v___x_1296_);
lean_dec_ref(v___x_1292_);
lean_dec_ref(v_e_1254_);
v___x_1307_ = lean_box(0);
v___x_1308_ = l_reduceCtorEq___lam__0(v___x_1307_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
v___y_1264_ = v___x_1308_;
goto v___jp_1263_;
}
else
{
lean_object* v_arg_1309_; lean_object* v_arg_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___f_1313_; lean_object* v___x_1314_; 
v_arg_1309_ = lean_ctor_get(v___x_1292_, 1);
lean_inc_ref(v_arg_1309_);
lean_dec_ref(v___x_1292_);
v_arg_1310_ = lean_ctor_get(v___x_1296_, 1);
lean_inc_ref(v_arg_1310_);
lean_dec_ref(v___x_1296_);
v___x_1311_ = lean_box(v___x_1306_);
v___x_1312_ = lean_box(v___x_1276_);
v___f_1313_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1313_, 0, v___x_1311_);
lean_closure_set(v___f_1313_, 1, v___x_1312_);
v___x_1314_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1310_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1316_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v___x_1314_, 1);
v___x_1316_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1309_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1316_) == 0)
{
if (lean_obj_tag(v_a_1315_) == 1)
{
lean_object* v_val_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1337_; 
v_val_1317_ = lean_ctor_get(v_a_1315_, 0);
v_a_1318_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1320_ = v___x_1316_;
v_isShared_1321_ = v_isSharedCheck_1337_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1337_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
if (lean_obj_tag(v_a_1318_) == 1)
{
lean_object* v_val_1322_; lean_object* v_fst_1323_; lean_object* v_toConstantVal_1324_; lean_object* v_fst_1325_; lean_object* v_toConstantVal_1326_; lean_object* v_name_1327_; lean_object* v_name_1328_; uint8_t v___x_1329_; 
lean_inc(v_val_1317_);
lean_dec_ref_known(v_a_1315_, 1);
v_val_1322_ = lean_ctor_get(v_a_1318_, 0);
lean_inc(v_val_1322_);
lean_dec_ref_known(v_a_1318_, 1);
v_fst_1323_ = lean_ctor_get(v_val_1317_, 0);
lean_inc(v_fst_1323_);
lean_dec(v_val_1317_);
v_toConstantVal_1324_ = lean_ctor_get(v_fst_1323_, 0);
lean_inc_ref(v_toConstantVal_1324_);
lean_dec(v_fst_1323_);
v_fst_1325_ = lean_ctor_get(v_val_1322_, 0);
lean_inc(v_fst_1325_);
lean_dec(v_val_1322_);
v_toConstantVal_1326_ = lean_ctor_get(v_fst_1325_, 0);
lean_inc_ref(v_toConstantVal_1326_);
lean_dec(v_fst_1325_);
v_name_1327_ = lean_ctor_get(v_toConstantVal_1324_, 0);
lean_inc(v_name_1327_);
lean_dec_ref(v_toConstantVal_1324_);
v_name_1328_ = lean_ctor_get(v_toConstantVal_1326_, 0);
lean_inc(v_name_1328_);
lean_dec_ref(v_toConstantVal_1326_);
v___x_1329_ = lean_name_eq(v_name_1327_, v_name_1328_);
lean_dec(v_name_1328_);
lean_dec(v_name_1327_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_del_object(v___x_1320_);
v___x_1330_ = ((lean_object*)(l_reduceCtorEq___closed__3));
v___x_1331_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_1330_, v_e_1254_, v___f_1313_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
v___y_1264_ = v___x_1331_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
lean_dec_ref(v___f_1313_);
lean_dec_ref_known(v___x_1289_, 7);
lean_dec_ref(v_e_1254_);
v___x_1332_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1332_);
v___x_1334_ = v___x_1320_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
lean_object* v___x_1336_; 
lean_del_object(v___x_1320_);
lean_dec_ref(v___f_1313_);
lean_dec_ref(v_e_1254_);
v___x_1336_ = l_reduceCtorEq___lam__1(v_a_1315_, v_a_1318_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
lean_dec(v_a_1318_);
lean_dec_ref_known(v_a_1315_, 1);
v___y_1264_ = v___x_1336_;
goto v___jp_1263_;
}
}
}
else
{
lean_object* v_a_1338_; lean_object* v___x_1339_; 
lean_dec_ref(v___f_1313_);
lean_dec_ref(v_e_1254_);
v_a_1338_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1339_ = l_reduceCtorEq___lam__1(v_a_1315_, v_a_1338_, v_a_1255_, v_a_1256_, v_a_1257_, v___x_1289_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec_ref_known(v___x_1289_, 7);
lean_dec(v_a_1338_);
lean_dec(v_a_1315_);
v___y_1264_ = v___x_1339_;
goto v___jp_1263_;
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_a_1315_);
lean_dec_ref(v___f_1313_);
lean_dec_ref_known(v___x_1289_, 7);
lean_dec_ref(v_e_1254_);
v_a_1340_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1316_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1316_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec_ref(v___f_1313_);
lean_dec_ref(v_arg_1309_);
lean_dec_ref_known(v___x_1289_, 7);
lean_dec_ref(v_e_1254_);
v_a_1348_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1314_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1314_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
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
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref_known(v___x_1289_, 7);
lean_dec_ref(v_e_1254_);
v_a_1356_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1290_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1290_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v___x_1364_; 
lean_inc_ref(v_e_1254_);
v___x_1364_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1254_, v_a_1259_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref_known(v___x_1364_, 1);
v___x_1366_ = l_Lean_Expr_cleanupAnnotations(v_a_1365_);
lean_dec(v_a_1365_);
v___x_1367_ = l_Lean_Expr_isApp(v___x_1366_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_e_1254_);
v___x_1368_ = lean_box(0);
v___x_1369_ = l_reduceCtorEq___lam__0(v___x_1368_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
v___y_1264_ = v___x_1369_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1366_);
v___x_1371_ = l_Lean_Expr_isApp(v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_e_1254_);
v___x_1372_ = lean_box(0);
v___x_1373_ = l_reduceCtorEq___lam__0(v___x_1372_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
v___y_1264_ = v___x_1373_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1370_);
v___x_1375_ = l_Lean_Expr_isApp(v___x_1374_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec_ref(v___x_1374_);
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_e_1254_);
v___x_1376_ = lean_box(0);
v___x_1377_ = l_reduceCtorEq___lam__0(v___x_1376_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
v___y_1264_ = v___x_1377_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1374_);
lean_dec_ref(v___x_1374_);
v___x_1379_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_1380_ = l_Lean_Expr_isConstOf(v___x_1378_, v___x_1379_);
lean_dec_ref(v___x_1378_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
lean_dec_ref(v___x_1370_);
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_e_1254_);
v___x_1381_ = lean_box(0);
v___x_1382_ = l_reduceCtorEq___lam__0(v___x_1381_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
v___y_1264_ = v___x_1382_;
goto v___jp_1263_;
}
else
{
lean_object* v_arg_1383_; lean_object* v_arg_1384_; lean_object* v___x_1385_; 
v_arg_1383_ = lean_ctor_get(v___x_1366_, 1);
lean_inc_ref(v_arg_1383_);
lean_dec_ref(v___x_1366_);
v_arg_1384_ = lean_ctor_get(v___x_1370_, 1);
lean_inc_ref(v_arg_1384_);
lean_dec_ref(v___x_1370_);
v___x_1385_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1384_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1387_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref_known(v___x_1385_, 1);
v___x_1387_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1383_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1387_) == 0)
{
if (lean_obj_tag(v_a_1386_) == 1)
{
lean_object* v_val_1388_; lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1411_; 
v_val_1388_ = lean_ctor_get(v_a_1386_, 0);
v_a_1389_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1391_ = v___x_1387_;
v_isShared_1392_ = v_isSharedCheck_1411_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1387_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1411_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
if (lean_obj_tag(v_a_1389_) == 1)
{
lean_object* v_val_1393_; lean_object* v_fst_1394_; lean_object* v_toConstantVal_1395_; lean_object* v_fst_1396_; lean_object* v_toConstantVal_1397_; lean_object* v_name_1398_; lean_object* v_name_1399_; uint8_t v___x_1400_; 
lean_inc(v_val_1388_);
lean_dec_ref_known(v_a_1386_, 1);
v_val_1393_ = lean_ctor_get(v_a_1389_, 0);
lean_inc(v_val_1393_);
lean_dec_ref_known(v_a_1389_, 1);
v_fst_1394_ = lean_ctor_get(v_val_1388_, 0);
lean_inc(v_fst_1394_);
lean_dec(v_val_1388_);
v_toConstantVal_1395_ = lean_ctor_get(v_fst_1394_, 0);
lean_inc_ref(v_toConstantVal_1395_);
lean_dec(v_fst_1394_);
v_fst_1396_ = lean_ctor_get(v_val_1393_, 0);
lean_inc(v_fst_1396_);
lean_dec(v_val_1393_);
v_toConstantVal_1397_ = lean_ctor_get(v_fst_1396_, 0);
lean_inc_ref(v_toConstantVal_1397_);
lean_dec(v_fst_1396_);
v_name_1398_ = lean_ctor_get(v_toConstantVal_1395_, 0);
lean_inc(v_name_1398_);
lean_dec_ref(v_toConstantVal_1395_);
v_name_1399_ = lean_ctor_get(v_toConstantVal_1397_, 0);
lean_inc(v_name_1399_);
lean_dec_ref(v_toConstantVal_1397_);
v___x_1400_ = lean_name_eq(v_name_1398_, v_name_1399_);
lean_dec(v_name_1399_);
lean_dec(v_name_1398_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___f_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
lean_del_object(v___x_1391_);
v___x_1401_ = lean_box(v___x_1380_);
v___x_1402_ = lean_box(v___x_1400_);
v___f_1403_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1403_, 0, v___x_1401_);
lean_closure_set(v___f_1403_, 1, v___x_1402_);
v___x_1404_ = ((lean_object*)(l_reduceCtorEq___closed__3));
v___x_1405_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_1404_, v_e_1254_, v___f_1403_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
v___y_1264_ = v___x_1405_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
lean_dec_ref(v_e_1254_);
v___x_1406_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1406_);
v___x_1408_ = v___x_1391_;
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
}
else
{
lean_object* v___x_1410_; 
lean_del_object(v___x_1391_);
lean_dec_ref(v_e_1254_);
v___x_1410_ = l_reduceCtorEq___lam__1(v_a_1386_, v_a_1389_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1389_);
lean_dec_ref_known(v_a_1386_, 1);
v___y_1264_ = v___x_1410_;
goto v___jp_1263_;
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_e_1254_);
v_a_1412_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1387_, 1);
v___x_1413_ = l_reduceCtorEq___lam__1(v_a_1386_, v_a_1412_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1412_);
lean_dec(v_a_1386_);
v___y_1264_ = v___x_1413_;
goto v___jp_1263_;
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_a_1386_);
lean_dec_ref(v_e_1254_);
v_a_1414_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1387_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1387_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v_arg_1383_);
lean_dec_ref(v_e_1254_);
v_a_1422_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1385_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1385_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
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
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec_ref(v_e_1254_);
v_a_1430_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1364_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1364_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
v___jp_1263_:
{
if (lean_obj_tag(v___y_1264_) == 0)
{
return v___y_1264_;
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
v_a_1265_ = lean_ctor_get(v___y_1264_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___y_1264_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___y_1264_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___y_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object* v_e_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_reduceCtorEq(v_e_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
lean_dec(v_a_1445_);
lean_dec_ref(v_a_1444_);
lean_dec(v_a_1443_);
lean_dec_ref(v_a_1442_);
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_a_1439_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object* v_00_u03b1_1448_, lean_object* v_name_1449_, uint8_t v_bi_1450_, lean_object* v_type_1451_, lean_object* v_k_1452_, uint8_t v_kind_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1449_, v_bi_1450_, v_type_1451_, v_k_1452_, v_kind_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1463_, lean_object* v_name_1464_, lean_object* v_bi_1465_, lean_object* v_type_1466_, lean_object* v_k_1467_, lean_object* v_kind_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
uint8_t v_bi_boxed_1477_; uint8_t v_kind_boxed_1478_; lean_object* v_res_1479_; 
v_bi_boxed_1477_ = lean_unbox(v_bi_1465_);
v_kind_boxed_1478_ = lean_unbox(v_kind_1468_);
v_res_1479_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(v_00_u03b1_1463_, v_name_1464_, v_bi_boxed_1477_, v_type_1466_, v_k_1467_, v_kind_boxed_1478_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object* v_00_u03b1_1480_, lean_object* v_name_1481_, lean_object* v_type_1482_, lean_object* v_k_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v___x_1492_; 
v___x_1492_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_1481_, v_type_1482_, v_k_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object* v_00_u03b1_1493_, lean_object* v_name_1494_, lean_object* v_type_1495_, lean_object* v_k_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(v_00_u03b1_1493_, v_name_1494_, v_type_1495_, v_k_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1521_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1522_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1523_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_1524_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1521_, v___x_1522_, v___x_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
return v_res_1526_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1530_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1531_ = 1;
v___x_1532_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_1533_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1530_, v___x_1531_, v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25____boxed(lean_object* v_a_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1538_ = 1;
v___x_1539_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_1540_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1537_, v___x_1538_, v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27____boxed(lean_object* v_a_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
return v_res_1542_;
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
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4172960257____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__35_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
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
