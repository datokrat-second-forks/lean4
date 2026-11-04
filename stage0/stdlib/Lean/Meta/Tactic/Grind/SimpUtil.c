// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.SimpUtil
// Imports: public import Lean.Meta.Tactic.Simp.Simproc import Lean.Meta.Tactic.Grind.MatchDiscrOnly import Lean.Meta.Tactic.Grind.ForallProp import Lean.Meta.Tactic.Grind.Arith.Simproc import Lean.Meta.Tactic.Simp.BuiltinSimprocs.List import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Core import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Sym.Util import Init.Grind.Norm public import Init.Grind.Config import Init.ByCases import Lean.Meta.Tactic.Simp.Main
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducibleStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg(lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_erase(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSimpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_addSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addForallSimproc(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_normExt;
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_SimpTheorems_addDeclToUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLE(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_addNormTheorem(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_normSymExt;
lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_le_eq"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 23, 140, 144, 182, 73, 3, 60)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 74, 162, 108, 148, 71, 165, 71)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GE"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__5_value),LEAN_SCALAR_PTR_LITERAL(74, 169, 4, 72, 62, 21, 91, 24)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__6_value),LEAN_SCALAR_PTR_LITERAL(71, 88, 92, 156, 129, 215, 23, 77)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__8_value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__9_value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__11_value),LEAN_SCALAR_PTR_LITERAL(19, 237, 167, 212, 100, 179, 19, 112)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__14_value),LEAN_SCALAR_PTR_LITERAL(159, 35, 146, 118, 24, 65, 174, 144)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__16_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "`grind` normalization theorems have already been initialized"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__18_value;
static lean_once_cell_t l_Lean_Meta_Grind_registerNormTheorems___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value),LEAN_SCALAR_PTR_LITERAL(27, 162, 40, 66, 220, 188, 53, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "flip_bool_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(19, 65, 30, 112, 127, 84, 12, 55)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__11;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__14;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "eq_false_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__16_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(79, 24, 241, 157, 245, 218, 196, 160)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__17;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eq_true_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(100, 12, 190, 92, 208, 172, 117, 90)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__20;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_self"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(224, 148, 98, 216, 254, 239, 13, 169)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__22_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__24_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__25;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bool_eq_to_prop"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(79, 89, 141, 151, 119, 96, 24, 167)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__28;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__29_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__30_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__30_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(219, 117, 235, 93, 32, 23, 150, 114)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpDIte___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_simpDIte___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dite_eq_ite"};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpDIte___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(58, 201, 242, 159, 222, 42, 9, 203)}};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(207, 95, 197, 147, 158, 94, 39, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Meta_Grind_simpUDIte___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Meta_Grind_simpUDIte___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__12_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpUDIte___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 196, 108, 209, 12, 117, 75, 64)}};
static const lean_object* l_Lean_Meta_Grind_simpUDIte___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpUDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(135, 44, 220, 67, 61, 45, 4, 214)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpUDIte___redArg___closed__0_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(133, 192, 91, 90, 91, 211, 131, 26)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_implies"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(142, 189, 44, 77, 86, 197, 178, 67)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_ite"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(132, 165, 120, 219, 71, 87, 242, 138)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__18;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_uite"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(12, 69, 153, 143, 136, 235, 28, 7)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__21;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__23_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__26;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__27;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__28;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__29;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_true"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(225, 244, 63, 40, 164, 6, 8, 162)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__31_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__32;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "not_eq_false"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(83, 226, 87, 91, 103, 177, 77, 30)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__34_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__35;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_prop"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__36_value),LEAN_SCALAR_PTR_LITERAL(93, 9, 240, 16, 38, 110, 5, 203)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__38;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__39;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_and"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(239, 225, 24, 71, 205, 142, 249, 26)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__42;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__43;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "not_or"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(235, 74, 178, 162, 31, 3, 143, 38)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__46;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__47_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__47_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__48_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__49;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_exists"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__50_value),LEAN_SCALAR_PTR_LITERAL(122, 84, 103, 56, 9, 28, 88, 199)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__52_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__52_value),LEAN_SCALAR_PTR_LITERAL(37, 13, 167, 116, 75, 172, 227, 19)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__54;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_true"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__55 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__55_value),LEAN_SCALAR_PTR_LITERAL(189, 233, 184, 33, 201, 88, 141, 182)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__57;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__58;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__59_value),LEAN_SCALAR_PTR_LITERAL(32, 161, 26, 17, 134, 82, 22, 22)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__61;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__62;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pushNot"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value),LEAN_SCALAR_PTR_LITERAL(189, 165, 185, 106, 181, 96, 32, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap13"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 5, 180, 71, 127, 106, 169, 101)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__2;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap12"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(122, 217, 194, 116, 8, 17, 212, 54)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "or_true"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(42, 114, 114, 128, 39, 158, 116, 220)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_false"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(153, 216, 196, 245, 126, 96, 113, 194)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_assoc"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(177, 212, 104, 129, 180, 187, 236, 119)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__14;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "true_or"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(151, 252, 187, 232, 224, 57, 40, 42)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__17;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "false_or"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(30, 122, 222, 214, 97, 236, 146, 97)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpOr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(228, 202, 179, 118, 39, 223, 137, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__10_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reduceCtorEqCheap"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(34, 125, 108, 13, 73, 108, 9, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unfoldReducibleSimproc"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value),LEAN_SCALAR_PTR_LITERAL(51, 93, 112, 81, 25, 192, 216, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reduceReplicate"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 105, 104, 187, 83, 144, 177, 61)}};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1);
v___x_7_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_6_);
lean_ctor_set(v___x_7_, 5, v___x_6_);
lean_ctor_set(v___x_7_, 6, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(lean_object* v_ext_8_, lean_object* v_b_9_, uint8_t v_kind_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
lean_object* v_toCold_15_; lean_object* v_currNamespace_16_; lean_object* v___x_17_; lean_object* v_env_18_; lean_object* v_nextMacroScope_19_; lean_object* v_ngen_20_; lean_object* v_auxDeclNGen_21_; lean_object* v_traceState_22_; lean_object* v_recordedDeps_23_; lean_object* v_messages_24_; lean_object* v_infoState_25_; lean_object* v_snapshotTasks_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_53_; 
v_toCold_15_ = lean_ctor_get(v___y_12_, 0);
v_currNamespace_16_ = lean_ctor_get(v_toCold_15_, 4);
v___x_17_ = lean_st_ref_take(v___y_13_);
v_env_18_ = lean_ctor_get(v___x_17_, 0);
v_nextMacroScope_19_ = lean_ctor_get(v___x_17_, 1);
v_ngen_20_ = lean_ctor_get(v___x_17_, 2);
v_auxDeclNGen_21_ = lean_ctor_get(v___x_17_, 3);
v_traceState_22_ = lean_ctor_get(v___x_17_, 4);
v_recordedDeps_23_ = lean_ctor_get(v___x_17_, 6);
v_messages_24_ = lean_ctor_get(v___x_17_, 7);
v_infoState_25_ = lean_ctor_get(v___x_17_, 8);
v_snapshotTasks_26_ = lean_ctor_get(v___x_17_, 9);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; 
v_unused_54_ = lean_ctor_get(v___x_17_, 5);
lean_dec(v_unused_54_);
v___x_28_ = v___x_17_;
v_isShared_29_ = v_isSharedCheck_53_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_snapshotTasks_26_);
lean_inc(v_infoState_25_);
lean_inc(v_messages_24_);
lean_inc(v_recordedDeps_23_);
lean_inc(v_traceState_22_);
lean_inc(v_auxDeclNGen_21_);
lean_inc(v_ngen_20_);
lean_inc(v_nextMacroScope_19_);
lean_inc(v_env_18_);
lean_dec(v___x_17_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_53_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_33_; 
lean_inc(v_currNamespace_16_);
v___x_30_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_18_, v_ext_8_, v_b_9_, v_kind_10_, v_currNamespace_16_);
v___x_31_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 5, v___x_31_);
lean_ctor_set(v___x_28_, 0, v___x_30_);
v___x_33_ = v___x_28_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_nextMacroScope_19_);
lean_ctor_set(v_reuseFailAlloc_52_, 2, v_ngen_20_);
lean_ctor_set(v_reuseFailAlloc_52_, 3, v_auxDeclNGen_21_);
lean_ctor_set(v_reuseFailAlloc_52_, 4, v_traceState_22_);
lean_ctor_set(v_reuseFailAlloc_52_, 5, v___x_31_);
lean_ctor_set(v_reuseFailAlloc_52_, 6, v_recordedDeps_23_);
lean_ctor_set(v_reuseFailAlloc_52_, 7, v_messages_24_);
lean_ctor_set(v_reuseFailAlloc_52_, 8, v_infoState_25_);
lean_ctor_set(v_reuseFailAlloc_52_, 9, v_snapshotTasks_26_);
v___x_33_ = v_reuseFailAlloc_52_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v_mctx_36_; lean_object* v_zetaDeltaFVarIds_37_; lean_object* v_postponed_38_; lean_object* v_diag_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_50_; 
v___x_34_ = lean_st_ref_put(v___y_13_, v___x_33_);
v___x_35_ = lean_st_ref_take(v___y_11_);
v_mctx_36_ = lean_ctor_get(v___x_35_, 0);
v_zetaDeltaFVarIds_37_ = lean_ctor_get(v___x_35_, 2);
v_postponed_38_ = lean_ctor_get(v___x_35_, 3);
v_diag_39_ = lean_ctor_get(v___x_35_, 4);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_50_ == 0)
{
lean_object* v_unused_51_; 
v_unused_51_ = lean_ctor_get(v___x_35_, 1);
lean_dec(v_unused_51_);
v___x_41_ = v___x_35_;
v_isShared_42_ = v_isSharedCheck_50_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_diag_39_);
lean_inc(v_postponed_38_);
lean_inc(v_zetaDeltaFVarIds_37_);
lean_inc(v_mctx_36_);
lean_dec(v___x_35_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_50_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_46_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 1, v___x_44_);
v___x_46_ = v___x_41_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_mctx_36_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_44_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v_zetaDeltaFVarIds_37_);
lean_ctor_set(v_reuseFailAlloc_49_, 3, v_postponed_38_);
lean_ctor_set(v_reuseFailAlloc_49_, 4, v_diag_39_);
v___x_46_ = v_reuseFailAlloc_49_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_st_ref_put(v___y_11_, v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_43_);
return v___x_48_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___boxed(lean_object* v_ext_55_, lean_object* v_b_56_, lean_object* v_kind_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
uint8_t v_kind_boxed_62_; lean_object* v_res_63_; 
v_kind_boxed_62_ = lean_unbox(v_kind_57_);
v_res_63_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v_ext_55_, v_b_56_, v_kind_boxed_62_, v___y_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(lean_object* v_00_u03b1_64_, lean_object* v_00_u03b2_65_, lean_object* v_00_u03c3_66_, lean_object* v_ext_67_, lean_object* v_b_68_, uint8_t v_kind_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v_ext_67_, v_b_68_, v_kind_69_, v___y_71_, v___y_72_, v___y_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___boxed(lean_object* v_00_u03b1_76_, lean_object* v_00_u03b2_77_, lean_object* v_00_u03c3_78_, lean_object* v_ext_79_, lean_object* v_b_80_, lean_object* v_kind_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
uint8_t v_kind_boxed_87_; lean_object* v_res_88_; 
v_kind_boxed_87_ = lean_unbox(v_kind_81_);
v_res_88_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(v_00_u03b1_76_, v_00_u03b2_77_, v_00_u03c3_78_, v_ext_79_, v_b_80_, v_kind_boxed_87_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
return v_res_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(lean_object* v_x_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg___boxed(lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(v_x_91_);
lean_dec_ref(v_x_91_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(lean_object* v_00_u03b2_94_, lean_object* v_x_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___boxed(lean_object* v_00_u03b2_97_, lean_object* v_x_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(v_00_u03b2_97_, v_x_98_);
lean_dec_ref(v_x_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4(lean_object* v_msgData_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_107_; lean_object* v_env_108_; uint8_t v___x_109_; lean_object* v_env_110_; lean_object* v___x_111_; lean_object* v_toCold_112_; lean_object* v_mctx_113_; lean_object* v_lctx_114_; lean_object* v_options_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_107_ = lean_st_ref_get(v___y_105_);
v_env_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_env_108_);
lean_dec(v___x_107_);
v___x_109_ = 0;
v_env_110_ = l_Lean_Environment_setRecordingDeps(v_env_108_, v___x_109_);
v___x_111_ = lean_st_ref_get(v___y_103_);
v_toCold_112_ = lean_ctor_get(v___y_104_, 0);
v_mctx_113_ = lean_ctor_get(v___x_111_, 0);
lean_inc_ref(v_mctx_113_);
lean_dec(v___x_111_);
v_lctx_114_ = lean_ctor_get(v___y_102_, 2);
v_options_115_ = lean_ctor_get(v_toCold_112_, 2);
lean_inc_ref(v_options_115_);
lean_inc_ref(v_lctx_114_);
v___x_116_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_116_, 0, v_env_110_);
lean_ctor_set(v___x_116_, 1, v_mctx_113_);
lean_ctor_set(v___x_116_, 2, v_lctx_114_);
lean_ctor_set(v___x_116_, 3, v_options_115_);
v___x_117_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_msgData_101_);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4___boxed(lean_object* v_msgData_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4(v_msgData_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(lean_object* v_msg_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_ref_132_; lean_object* v___x_133_; lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_142_; 
v_ref_132_ = lean_ctor_get(v___y_129_, 2);
v___x_133_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__4(v_msg_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_142_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
lean_inc(v_ref_132_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v_ref_132_);
lean_ctor_set(v___x_138_, 1, v_a_134_);
if (v_isShared_137_ == 0)
{
lean_ctor_set_tag(v___x_136_, 1);
lean_ctor_set(v___x_136_, 0, v___x_138_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg___boxed(lean_object* v_msg_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v_msg_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(lean_object* v_as_150_, size_t v_sz_151_, size_t v_i_152_, lean_object* v_b_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = lean_usize_dec_lt(v_i_152_, v_sz_151_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v_b_153_);
return v___x_160_;
}
else
{
lean_object* v___x_161_; lean_object* v_a_162_; uint8_t v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_161_ = lean_box(0);
v_a_162_ = lean_array_uget_borrowed(v_as_150_, v_i_152_);
v___x_163_ = 0;
v___x_164_ = 0;
v___x_165_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_162_);
v___x_166_ = l_Lean_Meta_Grind_addNormTheorem(v_a_162_, v___x_159_, v___x_163_, v___x_164_, v___x_165_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
if (lean_obj_tag(v___x_166_) == 0)
{
size_t v___x_167_; size_t v___x_168_; 
lean_dec_ref_known(v___x_166_, 1);
v___x_167_ = ((size_t)1ULL);
v___x_168_ = lean_usize_add(v_i_152_, v___x_167_);
v_i_152_ = v___x_168_;
v_b_153_ = v___x_161_;
goto _start;
}
else
{
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1___boxed(lean_object* v_as_170_, lean_object* v_sz_171_, lean_object* v_i_172_, lean_object* v_b_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
size_t v_sz_boxed_179_; size_t v_i_boxed_180_; lean_object* v_res_181_; 
v_sz_boxed_179_ = lean_unbox_usize(v_sz_171_);
lean_dec(v_sz_171_);
v_i_boxed_180_ = lean_unbox_usize(v_i_172_);
lean_dec(v_i_172_);
v_res_181_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(v_as_170_, v_sz_boxed_179_, v_i_boxed_180_, v_b_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec_ref(v_as_170_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(lean_object* v_as_182_, size_t v_sz_183_, size_t v_i_184_, lean_object* v_b_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = lean_usize_dec_lt(v_i_184_, v_sz_183_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v_b_185_);
return v___x_192_;
}
else
{
lean_object* v___x_193_; lean_object* v_a_194_; uint8_t v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_193_ = lean_box(0);
v_a_194_ = lean_array_uget_borrowed(v_as_182_, v_i_184_);
v___x_195_ = 0;
v___x_196_ = 0;
v___x_197_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_194_);
v___x_198_ = l_Lean_Meta_Grind_addNormTheorem(v_a_194_, v___x_195_, v___x_195_, v___x_196_, v___x_197_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
if (lean_obj_tag(v___x_198_) == 0)
{
size_t v___x_199_; size_t v___x_200_; 
lean_dec_ref_known(v___x_198_, 1);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_add(v_i_184_, v___x_199_);
v_i_184_ = v___x_200_;
v_b_185_ = v___x_193_;
goto _start;
}
else
{
return v___x_198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0___boxed(lean_object* v_as_202_, lean_object* v_sz_203_, lean_object* v_i_204_, lean_object* v_b_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
size_t v_sz_boxed_211_; size_t v_i_boxed_212_; lean_object* v_res_213_; 
v_sz_boxed_211_ = lean_unbox_usize(v_sz_203_);
lean_dec(v_sz_203_);
v_i_boxed_212_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_res_213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(v_as_202_, v_sz_boxed_211_, v_i_boxed_212_, v_b_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec_ref(v_as_202_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerNormTheorems___closed__19(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__18));
v___x_247_ = l_Lean_stringToMessageData(v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems(lean_object* v_preDeclNames_248_, lean_object* v_postDeclNames_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = l_Lean_Meta_Grind_normExt;
v___x_319_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_318_, v_a_253_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v_lemmaNames_321_; uint8_t v___x_322_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v_lemmaNames_321_ = lean_ctor_get(v_a_320_, 2);
lean_inc_ref(v_lemmaNames_321_);
lean_dec(v_a_320_);
v___x_322_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_lemmaNames_321_);
lean_dec_ref(v_lemmaNames_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_obj_once(&l_Lean_Meta_Grind_registerNormTheorems___closed__19, &l_Lean_Meta_Grind_registerNormTheorems___closed__19_once, _init_l_Lean_Meta_Grind_registerNormTheorems___closed__19);
v___x_324_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v___x_323_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
return v___x_324_;
}
else
{
v___y_256_ = v_a_250_;
v___y_257_ = v_a_251_;
v___y_258_ = v_a_252_;
v___y_259_ = v_a_253_;
goto v___jp_255_;
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_319_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_319_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
v___jp_255_:
{
lean_object* v___x_260_; size_t v_sz_261_; size_t v___x_262_; lean_object* v___x_263_; 
v___x_260_ = lean_box(0);
v_sz_261_ = lean_array_size(v_preDeclNames_248_);
v___x_262_ = ((size_t)0ULL);
v___x_263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(v_preDeclNames_248_, v_sz_261_, v___x_262_, v___x_260_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_263_) == 0)
{
size_t v_sz_264_; lean_object* v___x_265_; 
lean_dec_ref_known(v___x_263_, 1);
v_sz_264_ = lean_array_size(v_postDeclNames_249_);
v___x_265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(v_postDeclNames_249_, v_sz_264_, v___x_262_, v___x_260_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_316_; 
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_265_, 0);
lean_dec(v_unused_317_);
v___x_267_ = v___x_265_;
v_isShared_268_ = v_isSharedCheck_316_;
goto v_resetjp_266_;
}
else
{
lean_dec(v___x_265_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_316_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__2));
v___x_270_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v___x_269_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = l_Lean_Meta_Grind_normSymExt;
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v_a_271_);
v___x_274_ = v___x_267_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_271_);
v___x_274_ = v_reuseFailAlloc_307_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
uint8_t v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_305_; 
v___x_275_ = 0;
v___x_276_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v___x_272_, v___x_274_, v___x_275_, v___y_257_, v___y_258_, v___y_259_);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v___x_276_, 0);
lean_dec(v_unused_306_);
v___x_278_ = v___x_276_;
v_isShared_279_ = v_isSharedCheck_305_;
goto v_resetjp_277_;
}
else
{
lean_dec(v___x_276_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_305_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__4));
v___x_281_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v___x_280_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_a_282_; lean_object* v___x_284_; 
v_a_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_a_282_);
lean_dec_ref_known(v___x_281_, 1);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v_a_282_);
v___x_284_ = v___x_278_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_282_);
v___x_284_ = v_reuseFailAlloc_296_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v___x_272_, v___x_284_, v___x_275_, v___y_257_, v___y_258_, v___y_259_);
lean_dec_ref(v___x_285_);
v___x_286_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__7));
v___x_287_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_286_, v___x_275_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec_ref_known(v___x_287_, 1);
v___x_288_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__10));
v___x_289_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_288_, v___x_275_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_dec_ref_known(v___x_289_, 1);
v___x_290_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__12));
v___x_291_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_290_, v___x_275_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; 
lean_dec_ref_known(v___x_291_, 1);
v___x_292_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__15));
v___x_293_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_292_, v___x_275_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec_ref_known(v___x_293_, 1);
v___x_294_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__17));
v___x_295_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_294_, v___x_275_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
return v___x_295_;
}
else
{
return v___x_293_;
}
}
else
{
return v___x_291_;
}
}
else
{
return v___x_289_;
}
}
else
{
return v___x_287_;
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_del_object(v___x_278_);
v_a_297_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_281_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_281_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_del_object(v___x_267_);
v_a_308_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_270_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_270_);
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
else
{
return v___x_265_;
}
}
else
{
return v___x_263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems___boxed(lean_object* v_preDeclNames_333_, lean_object* v_postDeclNames_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Grind_registerNormTheorems(v_preDeclNames_333_, v_postDeclNames_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec_ref(v_postDeclNames_334_);
lean_dec_ref(v_preDeclNames_333_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(lean_object* v_00_u03b1_341_, lean_object* v_msg_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v_msg_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___boxed(lean_object* v_00_u03b1_349_, lean_object* v_msg_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(v_00_u03b1_349_, v_msg_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_356_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(lean_object* v_declName_383_){
_start:
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1));
v___x_385_ = lean_name_eq(v_declName_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3));
v___x_387_ = lean_name_eq(v_declName_383_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5));
v___x_389_ = lean_name_eq(v_declName_383_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8));
v___x_391_ = lean_name_eq(v_declName_383_, v___x_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11));
v___x_393_ = lean_name_eq(v_declName_383_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__13));
v___x_395_ = lean_name_eq(v_declName_383_, v___x_394_);
return v___x_395_;
}
else
{
return v___x_393_;
}
}
else
{
return v___x_391_;
}
}
else
{
return v___x_389_;
}
}
else
{
return v___x_387_;
}
}
else
{
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___boxed(lean_object* v_declName_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_declName_396_);
lean_dec(v_declName_396_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__8(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_box(0);
v___x_414_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__7));
v___x_415_ = l_Lean_mkConst(v___x_414_, v___x_413_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__11(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_box(0);
v___x_420_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__10));
v___x_421_ = l_Lean_mkConst(v___x_420_, v___x_419_);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__14(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_425_ = lean_box(0);
v___x_426_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__13));
v___x_427_ = l_Lean_mkConst(v___x_426_, v___x_425_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__17(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_box(0);
v___x_434_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__16));
v___x_435_ = l_Lean_mkConst(v___x_434_, v___x_433_);
return v___x_435_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__20(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = lean_box(0);
v___x_442_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__19));
v___x_443_ = l_Lean_mkConst(v___x_442_, v___x_441_);
return v___x_443_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__25(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_box(0);
v___x_452_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__24));
v___x_453_ = l_Lean_mkConst(v___x_452_, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__28(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_box(0);
v___x_460_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__27));
v___x_461_ = l_Lean_mkConst(v___x_460_, v___x_459_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg(lean_object* v_e_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_466_, v_a_468_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_597_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_597_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_597_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_597_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = l_Lean_Expr_cleanupAnnotations(v_a_476_);
lean_dec(v_a_476_);
v___x_481_ = l_Lean_Expr_isApp(v___x_480_);
if (v___x_481_ == 0)
{
lean_dec_ref(v___x_480_);
lean_del_object(v___x_478_);
goto v___jp_472_;
}
else
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = l_Lean_Expr_appFnCleanup___redArg(v___x_480_);
v___x_483_ = l_Lean_Expr_isApp(v___x_482_);
if (v___x_483_ == 0)
{
lean_dec_ref(v___x_482_);
lean_dec_ref(v___x_480_);
lean_del_object(v___x_478_);
goto v___jp_472_;
}
else
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = l_Lean_Expr_appFnCleanup___redArg(v___x_482_);
v___x_485_ = l_Lean_Expr_isApp(v___x_484_);
if (v___x_485_ == 0)
{
lean_dec_ref(v___x_484_);
lean_dec_ref(v___x_482_);
lean_dec_ref(v___x_480_);
lean_del_object(v___x_478_);
goto v___jp_472_;
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_486_ = l_Lean_Expr_appFnCleanup___redArg(v___x_484_);
v___x_487_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_488_ = l_Lean_Expr_isConstOf(v___x_486_, v___x_487_);
if (v___x_488_ == 0)
{
lean_dec_ref(v___x_486_);
lean_dec_ref(v___x_484_);
lean_dec_ref(v___x_482_);
lean_dec_ref(v___x_480_);
lean_del_object(v___x_478_);
goto v___jp_472_;
}
else
{
lean_object* v_arg_489_; lean_object* v_arg_490_; lean_object* v_arg_491_; lean_object* v___x_492_; 
v_arg_489_ = lean_ctor_get(v___x_480_, 1);
lean_inc_ref(v_arg_489_);
lean_dec_ref(v___x_480_);
v_arg_490_ = lean_ctor_get(v___x_482_, 1);
lean_inc_ref(v_arg_490_);
lean_dec_ref(v___x_482_);
v_arg_491_ = lean_ctor_get(v___x_484_, 1);
lean_inc_ref_n(v_arg_491_, 2);
lean_dec_ref(v___x_484_);
v___x_492_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_491_, v_a_468_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_588_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_588_ == 0)
{
v___x_495_ = v___x_492_;
v_isShared_496_ = v_isSharedCheck_588_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_588_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_502_ = l_Lean_Expr_cleanupAnnotations(v_a_493_);
lean_dec(v_a_493_);
v___x_503_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__3));
v___x_504_ = l_Lean_Expr_isConstOf(v___x_502_, v___x_503_);
lean_dec_ref(v___x_502_);
if (v___x_504_ == 0)
{
uint8_t v___x_515_; 
lean_del_object(v___x_495_);
lean_del_object(v___x_478_);
v___x_515_ = lean_expr_eqv(v_arg_490_, v_arg_489_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; uint8_t v___x_517_; 
lean_dec_ref(v_arg_491_);
lean_dec_ref(v___x_486_);
v___x_516_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__11, &l_Lean_Meta_Grind_simpEq___redArg___closed__11_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__11);
v___x_517_ = lean_expr_eqv(v_arg_489_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__14, &l_Lean_Meta_Grind_simpEq___redArg___closed__14_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__14);
v___x_519_ = lean_expr_eqv(v_arg_489_, v___x_518_);
lean_dec_ref(v_arg_489_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref(v_arg_490_);
v___x_520_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
lean_inc_ref(v_arg_490_);
v___x_522_ = l_Lean_mkNot(v_arg_490_);
v___x_523_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__17, &l_Lean_Meta_Grind_simpEq___redArg___closed__17_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__17);
v___x_524_ = l_Lean_Expr_app___override(v___x_523_, v_arg_490_);
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
v___x_526_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_526_, 0, v___x_522_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*2, v___x_488_);
v___x_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec_ref(v_arg_489_);
v___x_529_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__20, &l_Lean_Meta_Grind_simpEq___redArg___closed__20_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__20);
lean_inc_ref(v_arg_490_);
v___x_530_ = l_Lean_Expr_app___override(v___x_529_, v_arg_490_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
v___x_532_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_532_, 0, v_arg_490_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*2, v___x_488_);
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec_ref(v_arg_489_);
v___x_535_ = l_Lean_Expr_constLevels_x21(v___x_486_);
lean_dec_ref(v___x_486_);
v___x_536_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__11, &l_Lean_Meta_Grind_simpEq___redArg___closed__11_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__11);
v___x_537_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__22));
v___x_538_ = l_Lean_mkConst(v___x_537_, v___x_535_);
v___x_539_ = l_Lean_mkAppB(v___x_538_, v_arg_491_, v_arg_490_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_541_, 0, v___x_536_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
lean_ctor_set_uint8(v___x_541_, sizeof(void*)*2, v___x_488_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
else
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Expr_getAppFn(v_arg_489_);
if (lean_obj_tag(v___x_544_) == 4)
{
lean_object* v_declName_545_; lean_object* v___x_546_; uint8_t v___x_573_; 
v_declName_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_declName_545_);
lean_dec_ref_known(v___x_544_, 2);
v___x_546_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__24));
v___x_573_ = lean_name_eq(v_declName_545_, v___x_546_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_574_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__30));
v___x_575_ = lean_name_eq(v_declName_545_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; 
lean_del_object(v___x_495_);
v___x_576_ = l_Lean_Expr_getAppFn(v_arg_490_);
if (lean_obj_tag(v___x_576_) == 4)
{
lean_object* v_declName_577_; uint8_t v___x_578_; 
v_declName_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_declName_577_);
lean_dec_ref_known(v___x_576_, 2);
v___x_578_ = lean_name_eq(v_declName_577_, v___x_546_);
if (v___x_578_ == 0)
{
uint8_t v___x_579_; 
v___x_579_ = lean_name_eq(v_declName_577_, v___x_574_);
if (v___x_579_ == 0)
{
uint8_t v___x_580_; 
lean_del_object(v___x_478_);
v___x_580_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_declName_577_);
lean_dec(v_declName_577_);
if (v___x_580_ == 0)
{
uint8_t v___x_581_; 
v___x_581_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_declName_545_);
lean_dec(v_declName_545_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
v___x_582_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
else
{
goto v___jp_547_;
}
}
else
{
lean_dec(v_declName_545_);
goto v___jp_547_;
}
}
else
{
lean_dec(v_declName_577_);
lean_dec(v_declName_545_);
goto v___jp_505_;
}
}
else
{
lean_dec(v_declName_577_);
lean_dec(v_declName_545_);
goto v___jp_505_;
}
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec_ref(v___x_576_);
lean_dec(v_declName_545_);
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
lean_del_object(v___x_478_);
v___x_584_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
else
{
lean_dec(v_declName_545_);
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
lean_del_object(v___x_478_);
goto v___jp_497_;
}
}
else
{
lean_dec(v_declName_545_);
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
lean_del_object(v___x_478_);
goto v___jp_497_;
}
v___jp_547_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__25, &l_Lean_Meta_Grind_simpEq___redArg___closed__25_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__25);
lean_inc_ref(v_arg_490_);
lean_inc_ref(v_arg_491_);
lean_inc_ref(v___x_486_);
v___x_549_ = l_Lean_mkApp3(v___x_486_, v_arg_491_, v_arg_490_, v___x_548_);
lean_inc_ref(v_arg_489_);
v___x_550_ = l_Lean_mkApp3(v___x_486_, v_arg_491_, v_arg_489_, v___x_548_);
v___x_551_ = l_Lean_Meta_mkEq(v___x_549_, v___x_550_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_564_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_564_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_564_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_564_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_556_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__28, &l_Lean_Meta_Grind_simpEq___redArg___closed__28_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__28);
v___x_557_ = l_Lean_mkAppB(v___x_556_, v_arg_490_, v_arg_489_);
v___x_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_559_, 0, v_a_552_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*2, v___x_504_);
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_560_);
v___x_562_ = v___x_554_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
v_a_565_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_551_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_551_);
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
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec_ref(v___x_544_);
lean_del_object(v___x_495_);
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
lean_del_object(v___x_478_);
v___x_586_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
}
v___jp_497_:
{
lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_498_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_498_);
v___x_500_ = v___x_495_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
v___jp_505_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
lean_inc_ref(v_arg_490_);
lean_inc_ref(v_arg_489_);
v___x_506_ = l_Lean_mkApp3(v___x_486_, v_arg_491_, v_arg_489_, v_arg_490_);
v___x_507_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__8, &l_Lean_Meta_Grind_simpEq___redArg___closed__8_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__8);
v___x_508_ = l_Lean_mkAppB(v___x_507_, v_arg_490_, v_arg_489_);
v___x_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
v___x_510_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_510_, 0, v___x_506_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
lean_ctor_set_uint8(v___x_510_, sizeof(void*)*2, v___x_504_);
v___x_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_511_);
v___x_513_ = v___x_478_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec_ref(v_arg_491_);
lean_dec_ref(v_arg_490_);
lean_dec_ref(v_arg_489_);
lean_dec_ref(v___x_486_);
lean_del_object(v___x_478_);
v_a_589_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_492_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_492_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
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
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_598_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_475_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_475_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
v___jp_472_:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg___boxed(lean_object* v_e_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Meta_Grind_simpEq___redArg(v_e_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq(lean_object* v_e_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_Meta_Grind_simpEq___redArg(v_e_613_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___boxed(lean_object* v_e_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_Grind_simpEq(v_e_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_(){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_652_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_));
v___x_653_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_));
v___x_654_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpEq___boxed), 9, 0);
v___x_655_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_652_, v___x_653_, v___x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13____boxed(lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_();
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg(lean_object* v_e_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_667_, v_a_668_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_729_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_729_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_729_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_729_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = l_Lean_Expr_cleanupAnnotations(v_a_674_);
lean_dec(v_a_674_);
v___x_679_ = l_Lean_Expr_isApp(v___x_678_);
if (v___x_679_ == 0)
{
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = l_Lean_Expr_appFnCleanup___redArg(v___x_678_);
v___x_681_ = l_Lean_Expr_isApp(v___x_680_);
if (v___x_681_ == 0)
{
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = l_Lean_Expr_appFnCleanup___redArg(v___x_680_);
v___x_683_ = l_Lean_Expr_isApp(v___x_682_);
if (v___x_683_ == 0)
{
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = l_Lean_Expr_appFnCleanup___redArg(v___x_682_);
v___x_685_ = l_Lean_Expr_isApp(v___x_684_);
if (v___x_685_ == 0)
{
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = l_Lean_Expr_appFnCleanup___redArg(v___x_684_);
v___x_687_ = l_Lean_Expr_isApp(v___x_686_);
if (v___x_687_ == 0)
{
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_688_ = l_Lean_Expr_appFnCleanup___redArg(v___x_686_);
v___x_689_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__1));
v___x_690_ = l_Lean_Expr_isConstOf(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_678_);
lean_del_object(v___x_676_);
goto v___jp_670_;
}
else
{
lean_object* v_arg_691_; 
v_arg_691_ = lean_ctor_get(v___x_680_, 1);
lean_inc_ref(v_arg_691_);
lean_dec_ref(v___x_680_);
if (lean_obj_tag(v_arg_691_) == 6)
{
lean_object* v_body_692_; uint8_t v___x_693_; 
v_body_692_ = lean_ctor_get(v_arg_691_, 2);
lean_inc_ref(v_body_692_);
lean_dec_ref_known(v_arg_691_, 3);
v___x_693_ = l_Lean_Expr_hasLooseBVars(v_body_692_);
if (v___x_693_ == 0)
{
lean_object* v_arg_694_; 
v_arg_694_ = lean_ctor_get(v___x_678_, 1);
lean_inc_ref(v_arg_694_);
lean_dec_ref(v___x_678_);
if (lean_obj_tag(v_arg_694_) == 6)
{
lean_object* v_body_695_; uint8_t v___x_696_; 
v_body_695_ = lean_ctor_get(v_arg_694_, 2);
lean_inc_ref(v_body_695_);
lean_dec_ref_known(v_arg_694_, 3);
v___x_696_ = l_Lean_Expr_hasLooseBVars(v_body_695_);
if (v___x_696_ == 0)
{
lean_object* v_arg_697_; lean_object* v_arg_698_; lean_object* v_arg_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v_arg_697_ = lean_ctor_get(v___x_682_, 1);
lean_inc_ref_n(v_arg_697_, 2);
lean_dec_ref(v___x_682_);
v_arg_698_ = lean_ctor_get(v___x_684_, 1);
lean_inc_ref_n(v_arg_698_, 2);
lean_dec_ref(v___x_684_);
v_arg_699_ = lean_ctor_get(v___x_686_, 1);
lean_inc_ref_n(v_arg_699_, 2);
lean_dec_ref(v___x_686_);
v___x_700_ = l_Lean_Expr_constLevels_x21(v___x_688_);
lean_dec_ref(v___x_688_);
v___x_701_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__3));
lean_inc(v___x_700_);
v___x_702_ = l_Lean_mkConst(v___x_701_, v___x_700_);
lean_inc_ref(v_body_695_);
lean_inc_ref(v_body_692_);
v___x_703_ = l_Lean_mkApp5(v___x_702_, v_arg_699_, v_arg_698_, v_arg_697_, v_body_692_, v_body_695_);
v___x_704_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__5));
v___x_705_ = l_Lean_mkConst(v___x_704_, v___x_700_);
v___x_706_ = l_Lean_mkApp5(v___x_705_, v_arg_698_, v_arg_699_, v_body_692_, v_body_695_, v_arg_697_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
v___x_708_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_708_, 0, v___x_703_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
lean_ctor_set_uint8(v___x_708_, sizeof(void*)*2, v___x_690_);
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_709_);
v___x_711_ = v___x_676_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
else
{
lean_object* v___x_713_; lean_object* v___x_715_; 
lean_dec_ref(v_body_695_);
lean_dec_ref(v_body_692_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
v___x_713_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_713_);
v___x_715_ = v___x_676_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
else
{
lean_object* v___x_717_; lean_object* v___x_719_; 
lean_dec_ref(v_arg_694_);
lean_dec_ref(v_body_692_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
v___x_717_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_717_);
v___x_719_ = v___x_676_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
lean_object* v___x_721_; lean_object* v___x_723_; 
lean_dec_ref(v_body_692_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_678_);
v___x_721_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_721_);
v___x_723_ = v___x_676_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
else
{
lean_object* v___x_725_; lean_object* v___x_727_; 
lean_dec_ref(v_arg_691_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec_ref(v___x_684_);
lean_dec_ref(v___x_682_);
lean_dec_ref(v___x_678_);
v___x_725_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_725_);
v___x_727_ = v___x_676_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_725_);
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
}
}
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_673_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_673_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
v___jp_670_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg___boxed(lean_object* v_e_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_Meta_Grind_simpDIte___redArg(v_e_738_, v_a_739_);
lean_dec(v_a_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte(lean_object* v_e_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_Meta_Grind_simpDIte___redArg(v_e_742_, v_a_747_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___boxed(lean_object* v_e_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Grind_simpDIte(v_e_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_782_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_));
v___x_783_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_));
v___x_784_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpDIte___boxed), 9, 0);
v___x_785_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_782_, v___x_783_, v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14____boxed(lean_object* v_a_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_();
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___redArg(lean_object* v_e_797_, lean_object* v_a_798_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_797_, v_a_798_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_859_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_859_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_859_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_859_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = l_Lean_Expr_cleanupAnnotations(v_a_804_);
lean_dec(v_a_804_);
v___x_809_ = l_Lean_Expr_isApp(v___x_808_);
if (v___x_809_ == 0)
{
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = l_Lean_Expr_appFnCleanup___redArg(v___x_808_);
v___x_811_ = l_Lean_Expr_isApp(v___x_810_);
if (v___x_811_ == 0)
{
lean_dec_ref(v___x_810_);
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = l_Lean_Expr_appFnCleanup___redArg(v___x_810_);
v___x_813_ = l_Lean_Expr_isApp(v___x_812_);
if (v___x_813_ == 0)
{
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = l_Lean_Expr_appFnCleanup___redArg(v___x_812_);
v___x_815_ = l_Lean_Expr_isApp(v___x_814_);
if (v___x_815_ == 0)
{
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = l_Lean_Expr_appFnCleanup___redArg(v___x_814_);
v___x_817_ = l_Lean_Expr_isApp(v___x_816_);
if (v___x_817_ == 0)
{
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_818_ = l_Lean_Expr_appFnCleanup___redArg(v___x_816_);
v___x_819_ = ((lean_object*)(l_Lean_Meta_Grind_simpUDIte___redArg___closed__0));
v___x_820_ = l_Lean_Expr_isConstOf(v___x_818_, v___x_819_);
if (v___x_820_ == 0)
{
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v___x_808_);
lean_del_object(v___x_806_);
goto v___jp_800_;
}
else
{
lean_object* v_arg_821_; 
v_arg_821_ = lean_ctor_get(v___x_810_, 1);
lean_inc_ref(v_arg_821_);
lean_dec_ref(v___x_810_);
if (lean_obj_tag(v_arg_821_) == 6)
{
lean_object* v_body_822_; uint8_t v___x_823_; 
v_body_822_ = lean_ctor_get(v_arg_821_, 2);
lean_inc_ref(v_body_822_);
lean_dec_ref_known(v_arg_821_, 3);
v___x_823_ = l_Lean_Expr_hasLooseBVars(v_body_822_);
if (v___x_823_ == 0)
{
lean_object* v_arg_824_; 
v_arg_824_ = lean_ctor_get(v___x_808_, 1);
lean_inc_ref(v_arg_824_);
lean_dec_ref(v___x_808_);
if (lean_obj_tag(v_arg_824_) == 6)
{
lean_object* v_body_825_; uint8_t v___x_826_; 
v_body_825_ = lean_ctor_get(v_arg_824_, 2);
lean_inc_ref(v_body_825_);
lean_dec_ref_known(v_arg_824_, 3);
v___x_826_ = l_Lean_Expr_hasLooseBVars(v_body_825_);
if (v___x_826_ == 0)
{
lean_object* v_arg_827_; lean_object* v_arg_828_; lean_object* v_arg_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
v_arg_827_ = lean_ctor_get(v___x_812_, 1);
lean_inc_ref_n(v_arg_827_, 2);
lean_dec_ref(v___x_812_);
v_arg_828_ = lean_ctor_get(v___x_814_, 1);
lean_inc_ref_n(v_arg_828_, 2);
lean_dec_ref(v___x_814_);
v_arg_829_ = lean_ctor_get(v___x_816_, 1);
lean_inc_ref_n(v_arg_829_, 2);
lean_dec_ref(v___x_816_);
v___x_830_ = l_Lean_Expr_constLevels_x21(v___x_818_);
lean_dec_ref(v___x_818_);
v___x_831_ = ((lean_object*)(l_Lean_Meta_Grind_simpUDIte___redArg___closed__1));
lean_inc(v___x_830_);
v___x_832_ = l_Lean_mkConst(v___x_831_, v___x_830_);
lean_inc_ref(v_body_825_);
lean_inc_ref(v_body_822_);
v___x_833_ = l_Lean_mkApp5(v___x_832_, v_arg_829_, v_arg_828_, v_arg_827_, v_body_822_, v_body_825_);
v___x_834_ = ((lean_object*)(l_Lean_Meta_Grind_simpUDIte___redArg___closed__2));
v___x_835_ = l_Lean_mkConst(v___x_834_, v___x_830_);
v___x_836_ = l_Lean_mkApp5(v___x_835_, v_arg_829_, v_arg_828_, v_arg_827_, v_body_822_, v_body_825_);
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
v___x_838_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_838_, 0, v___x_833_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*2, v___x_820_);
v___x_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_839_);
v___x_841_ = v___x_806_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_845_; 
lean_dec_ref(v_body_825_);
lean_dec_ref(v_body_822_);
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
v___x_843_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_843_);
v___x_845_ = v___x_806_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
else
{
lean_object* v___x_847_; lean_object* v___x_849_; 
lean_dec_ref(v_arg_824_);
lean_dec_ref(v_body_822_);
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
v___x_847_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_847_);
v___x_849_ = v___x_806_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
else
{
lean_object* v___x_851_; lean_object* v___x_853_; 
lean_dec_ref(v_body_822_);
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_808_);
v___x_851_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_851_);
v___x_853_ = v___x_806_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
else
{
lean_object* v___x_855_; lean_object* v___x_857_; 
lean_dec_ref(v_arg_821_);
lean_dec_ref(v___x_818_);
lean_dec_ref(v___x_816_);
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec_ref(v___x_808_);
v___x_855_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_855_);
v___x_857_ = v___x_806_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
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
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
v_a_860_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_803_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_803_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
v___jp_800_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___redArg___boxed(lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_Meta_Grind_simpUDIte___redArg(v_e_868_, v_a_869_);
lean_dec(v_a_869_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte(lean_object* v_e_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_Meta_Grind_simpUDIte___redArg(v_e_872_, v_a_877_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpUDIte___boxed(lean_object* v_e_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lean_Meta_Grind_simpUDIte(v_e_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_);
lean_dec(v_a_889_);
lean_dec_ref(v_a_888_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_));
v___x_913_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_));
v___x_914_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpUDIte___boxed), 9, 0);
v___x_915_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_912_, v___x_913_, v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14____boxed(lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_();
return v_res_917_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__8(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_934_ = lean_box(0);
v___x_935_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__7));
v___x_936_ = l_Lean_mkConst(v___x_935_, v___x_934_);
return v___x_936_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__18(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_953_ = lean_box(0);
v___x_954_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__17));
v___x_955_ = l_Lean_mkConst(v___x_954_, v___x_953_);
return v___x_955_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__21(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_961_ = lean_box(0);
v___x_962_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__20));
v___x_963_ = l_Lean_mkConst(v___x_962_, v___x_961_);
return v___x_963_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__24(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(1u);
v___x_969_ = lean_nat_to_int(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__25(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__24, &l_Lean_Meta_Grind_pushNot___redArg___closed__24_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__24);
v___x_971_ = l_Lean_mkIntLit(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__26(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = lean_box(0);
v___x_973_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__4));
v___x_974_ = l_Lean_mkConst(v___x_973_, v___x_972_);
return v___x_974_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__27(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_unsigned_to_nat(1u);
v___x_976_ = l_Lean_mkNatLit(v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__28(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_box(0);
v___x_978_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__2));
v___x_979_ = l_Lean_mkConst(v___x_978_, v___x_977_);
return v___x_979_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__29(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_980_ = lean_box(0);
v___x_981_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__30));
v___x_982_ = l_Lean_mkConst(v___x_981_, v___x_980_);
return v___x_982_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__32(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_987_ = lean_box(0);
v___x_988_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__31));
v___x_989_ = l_Lean_mkConst(v___x_988_, v___x_987_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__35(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_box(0);
v___x_995_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__34));
v___x_996_ = l_Lean_mkConst(v___x_995_, v___x_994_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__38(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1002_ = lean_box(0);
v___x_1003_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__37));
v___x_1004_ = l_Lean_mkConst(v___x_1003_, v___x_1002_);
return v___x_1004_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__39(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = lean_box(0);
v___x_1006_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1007_ = l_Lean_mkConst(v___x_1006_, v___x_1005_);
return v___x_1007_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__42(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__41));
v___x_1015_ = l_Lean_mkConst(v___x_1014_, v___x_1013_);
return v___x_1015_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__43(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lean_box(0);
v___x_1017_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__12));
v___x_1018_ = l_Lean_mkConst(v___x_1017_, v___x_1016_);
return v___x_1018_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__46(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__45));
v___x_1026_ = l_Lean_mkConst(v___x_1025_, v___x_1024_);
return v___x_1026_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__49(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = l_Lean_mkBVar(v___x_1030_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__54(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__53));
v___x_1044_ = l_Lean_mkConst(v___x_1043_, v___x_1042_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__57(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1050_ = lean_box(0);
v___x_1051_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__56));
v___x_1052_ = l_Lean_mkConst(v___x_1051_, v___x_1050_);
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__58(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__57, &l_Lean_Meta_Grind_pushNot___redArg___closed__57_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__57);
v___x_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__61(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1060_ = lean_box(0);
v___x_1061_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__60));
v___x_1062_ = l_Lean_mkConst(v___x_1061_, v___x_1060_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__62(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__61, &l_Lean_Meta_Grind_pushNot___redArg___closed__61_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__61);
v___x_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg(lean_object* v_e_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1065_, v_a_1067_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1411_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1411_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1411_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = l_Lean_Expr_cleanupAnnotations(v_a_1075_);
lean_dec(v_a_1075_);
v___x_1080_ = l_Lean_Expr_isApp(v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v___x_1079_);
lean_del_object(v___x_1077_);
goto v___jp_1071_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___y_1085_; uint8_t v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; 
v___x_1081_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1079_);
v___x_1082_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__1));
v___x_1083_ = l_Lean_Expr_isConstOf(v___x_1081_, v___x_1082_);
lean_dec_ref(v___x_1081_);
if (v___x_1083_ == 0)
{
lean_dec_ref(v___x_1079_);
lean_del_object(v___x_1077_);
goto v___jp_1071_;
}
else
{
lean_object* v_arg_1124_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___x_1164_; 
v_arg_1124_ = lean_ctor_get(v___x_1079_, 1);
lean_inc_ref_n(v_arg_1124_, 2);
lean_dec_ref(v___x_1079_);
v___x_1164_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1124_, v_a_1067_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1402_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1167_ = v___x_1164_;
v_isShared_1168_ = v_isSharedCheck_1402_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1402_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1169_ = l_Lean_Expr_cleanupAnnotations(v_a_1165_);
lean_dec(v_a_1165_);
v___x_1170_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__13));
v___x_1171_ = l_Lean_Expr_isConstOf(v___x_1169_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1172_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__10));
v___x_1173_ = l_Lean_Expr_isConstOf(v___x_1169_, v___x_1172_);
if (v___x_1173_ == 0)
{
uint8_t v___x_1174_; 
v___x_1174_ = l_Lean_Expr_isApp(v___x_1169_);
if (v___x_1174_ == 0)
{
lean_dec_ref(v___x_1169_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v_arg_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v_arg_1175_ = lean_ctor_get(v___x_1169_, 1);
lean_inc_ref(v_arg_1175_);
v___x_1176_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1169_);
lean_dec_ref(v___x_1169_);
v___x_1177_ = l_Lean_Expr_isConstOf(v___x_1176_, v___x_1082_);
if (v___x_1177_ == 0)
{
uint8_t v___x_1178_; 
v___x_1178_ = l_Lean_Expr_isApp(v___x_1176_);
if (v___x_1178_ == 0)
{
lean_dec_ref(v___x_1176_);
lean_dec_ref(v_arg_1175_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v_arg_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; uint8_t v___x_1182_; 
v_arg_1179_ = lean_ctor_get(v___x_1176_, 1);
lean_inc_ref(v_arg_1179_);
v___x_1180_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1176_);
lean_dec_ref(v___x_1176_);
v___x_1181_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__3));
v___x_1182_ = l_Lean_Expr_isConstOf(v___x_1180_, v___x_1181_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1184_ = l_Lean_Expr_isConstOf(v___x_1180_, v___x_1183_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__12));
v___x_1186_ = l_Lean_Expr_isConstOf(v___x_1180_, v___x_1185_);
if (v___x_1186_ == 0)
{
uint8_t v___x_1187_; 
v___x_1187_ = l_Lean_Expr_isApp(v___x_1180_);
if (v___x_1187_ == 0)
{
lean_dec_ref(v___x_1180_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v_arg_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v_arg_1188_ = lean_ctor_get(v___x_1180_, 1);
lean_inc_ref(v_arg_1188_);
v___x_1189_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1180_);
lean_dec_ref(v___x_1180_);
v___x_1190_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_1191_ = l_Lean_Expr_isConstOf(v___x_1189_, v___x_1190_);
if (v___x_1191_ == 0)
{
uint8_t v___x_1192_; 
v___x_1192_ = l_Lean_Expr_isApp(v___x_1189_);
if (v___x_1192_ == 0)
{
lean_dec_ref(v___x_1189_);
lean_dec_ref(v_arg_1188_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v_arg_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; 
v_arg_1193_ = lean_ctor_get(v___x_1189_, 1);
lean_inc_ref(v_arg_1193_);
v___x_1194_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1189_);
lean_dec_ref(v___x_1189_);
v___x_1195_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__15));
v___x_1196_ = l_Lean_Expr_isConstOf(v___x_1194_, v___x_1195_);
if (v___x_1196_ == 0)
{
uint8_t v___x_1197_; 
v___x_1197_ = l_Lean_Expr_isApp(v___x_1194_);
if (v___x_1197_ == 0)
{
lean_dec_ref(v___x_1194_);
lean_dec_ref(v_arg_1193_);
lean_dec_ref(v_arg_1188_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v_arg_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; 
v_arg_1198_ = lean_ctor_get(v___x_1194_, 1);
lean_inc_ref(v_arg_1198_);
v___x_1199_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1194_);
lean_dec_ref(v___x_1194_);
v___x_1200_ = ((lean_object*)(l_Lean_Meta_Grind_simpUDIte___redArg___closed__1));
v___x_1201_ = l_Lean_Expr_isConstOf(v___x_1199_, v___x_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1202_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__3));
v___x_1203_ = l_Lean_Expr_isConstOf(v___x_1199_, v___x_1202_);
if (v___x_1203_ == 0)
{
lean_dec_ref(v___x_1199_);
lean_dec_ref(v_arg_1198_);
lean_dec_ref(v_arg_1193_);
lean_dec_ref(v_arg_1188_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
lean_del_object(v___x_1167_);
v___y_1126_ = v_a_1066_;
v___y_1127_ = v_a_1067_;
v___y_1128_ = v_a_1068_;
v___y_1129_ = v_a_1069_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
lean_inc_ref(v_arg_1179_);
v___x_1204_ = l_Lean_mkNot(v_arg_1179_);
lean_inc_ref(v_arg_1175_);
v___x_1205_ = l_Lean_mkNot(v_arg_1175_);
lean_inc_ref(v_arg_1188_);
lean_inc_ref(v_arg_1193_);
v___x_1206_ = l_Lean_mkApp5(v___x_1199_, v_arg_1198_, v_arg_1193_, v_arg_1188_, v___x_1204_, v___x_1205_);
v___x_1207_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__18, &l_Lean_Meta_Grind_pushNot___redArg___closed__18_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__18);
v___x_1208_ = l_Lean_mkApp4(v___x_1207_, v_arg_1193_, v_arg_1188_, v_arg_1179_, v_arg_1175_);
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1210_, 0, v___x_1206_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
lean_ctor_set_uint8(v___x_1210_, sizeof(void*)*2, v___x_1203_);
v___x_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1211_);
v___x_1213_ = v___x_1167_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
lean_inc_ref(v_arg_1179_);
v___x_1215_ = l_Lean_mkNot(v_arg_1179_);
lean_inc_ref(v_arg_1175_);
v___x_1216_ = l_Lean_mkNot(v_arg_1175_);
lean_inc_ref(v_arg_1188_);
lean_inc_ref(v_arg_1193_);
v___x_1217_ = l_Lean_mkApp5(v___x_1199_, v_arg_1198_, v_arg_1193_, v_arg_1188_, v___x_1215_, v___x_1216_);
v___x_1218_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__21, &l_Lean_Meta_Grind_pushNot___redArg___closed__21_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__21);
v___x_1219_ = l_Lean_mkApp4(v___x_1218_, v_arg_1193_, v_arg_1188_, v_arg_1179_, v_arg_1175_);
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
v___x_1221_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1221_, 0, v___x_1217_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
lean_ctor_set_uint8(v___x_1221_, sizeof(void*)*2, v___x_1201_);
v___x_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1222_);
v___x_1224_ = v___x_1167_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_object* v___x_1226_; 
lean_dec_ref(v___x_1194_);
lean_dec_ref(v_arg_1188_);
lean_del_object(v___x_1167_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1226_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1193_, v_a_1067_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1262_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1229_ = v___x_1226_;
v_isShared_1230_ = v_isSharedCheck_1262_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1226_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1262_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1231_ = l_Lean_Expr_cleanupAnnotations(v_a_1227_);
lean_dec(v_a_1227_);
v___x_1232_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__22));
v___x_1233_ = l_Lean_Expr_isConstOf(v___x_1231_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__23));
v___x_1235_ = l_Lean_Expr_isConstOf(v___x_1231_, v___x_1234_);
lean_dec_ref(v___x_1231_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
v___x_1236_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1236_);
v___x_1238_ = v___x_1229_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1240_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__25, &l_Lean_Meta_Grind_pushNot___redArg___closed__25_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__25);
lean_inc_ref(v_arg_1175_);
v___x_1241_ = l_Lean_mkIntAdd(v_arg_1175_, v___x_1240_);
lean_inc_ref(v_arg_1179_);
v___x_1242_ = l_Lean_mkIntLE(v___x_1241_, v_arg_1179_);
v___x_1243_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__26, &l_Lean_Meta_Grind_pushNot___redArg___closed__26_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__26);
v___x_1244_ = l_Lean_mkAppB(v___x_1243_, v_arg_1179_, v_arg_1175_);
v___x_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1242_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*2, v___x_1235_);
v___x_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1247_);
v___x_1249_ = v___x_1229_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
lean_dec_ref(v___x_1231_);
v___x_1251_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__27, &l_Lean_Meta_Grind_pushNot___redArg___closed__27_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__27);
lean_inc_ref(v_arg_1175_);
v___x_1252_ = l_Lean_mkNatAdd(v_arg_1175_, v___x_1251_);
lean_inc_ref(v_arg_1179_);
v___x_1253_ = l_Lean_mkNatLE(v___x_1252_, v_arg_1179_);
v___x_1254_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__28, &l_Lean_Meta_Grind_pushNot___redArg___closed__28_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__28);
v___x_1255_ = l_Lean_mkAppB(v___x_1254_, v_arg_1179_, v_arg_1175_);
v___x_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
v___x_1257_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1257_, 0, v___x_1253_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
lean_ctor_set_uint8(v___x_1257_, sizeof(void*)*2, v___x_1233_);
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1258_);
v___x_1260_ = v___x_1229_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
v_a_1263_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1226_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1226_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
}
else
{
uint8_t v___x_1271_; 
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1271_ = l_Lean_Expr_isProp(v_arg_1188_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
lean_del_object(v___x_1167_);
v___x_1272_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1175_, v_a_1067_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1306_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1306_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1306_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; 
v___x_1277_ = l_Lean_Expr_cleanupAnnotations(v_a_1273_);
lean_dec(v_a_1273_);
v___x_1278_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__30));
v___x_1279_ = l_Lean_Expr_isConstOf(v___x_1277_, v___x_1278_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__24));
v___x_1281_ = l_Lean_Expr_isConstOf(v___x_1277_, v___x_1280_);
lean_dec_ref(v___x_1277_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1284_; 
lean_dec_ref(v___x_1189_);
lean_dec_ref(v_arg_1188_);
lean_dec_ref(v_arg_1179_);
v___x_1282_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1282_);
v___x_1284_ = v___x_1275_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1286_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__29, &l_Lean_Meta_Grind_pushNot___redArg___closed__29_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__29);
lean_inc_ref(v_arg_1179_);
v___x_1287_ = l_Lean_mkApp3(v___x_1189_, v_arg_1188_, v_arg_1179_, v___x_1286_);
v___x_1288_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__32, &l_Lean_Meta_Grind_pushNot___redArg___closed__32_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__32);
v___x_1289_ = l_Lean_Expr_app___override(v___x_1288_, v_arg_1179_);
v___x_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
v___x_1291_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1291_, 0, v___x_1287_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*2, v___x_1191_);
v___x_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1292_);
v___x_1294_ = v___x_1275_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1304_; 
lean_dec_ref(v___x_1277_);
v___x_1296_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__25, &l_Lean_Meta_Grind_simpEq___redArg___closed__25_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__25);
lean_inc_ref(v_arg_1179_);
v___x_1297_ = l_Lean_mkApp3(v___x_1189_, v_arg_1188_, v_arg_1179_, v___x_1296_);
v___x_1298_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__35, &l_Lean_Meta_Grind_pushNot___redArg___closed__35_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__35);
v___x_1299_ = l_Lean_Expr_app___override(v___x_1298_, v_arg_1179_);
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1301_, 0, v___x_1297_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
lean_ctor_set_uint8(v___x_1301_, sizeof(void*)*2, v___x_1191_);
v___x_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1302_);
v___x_1304_ = v___x_1275_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_dec_ref(v___x_1189_);
lean_dec_ref(v_arg_1188_);
lean_dec_ref(v_arg_1179_);
v_a_1307_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1272_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1272_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
lean_inc_ref(v_arg_1175_);
v___x_1315_ = l_Lean_mkNot(v_arg_1175_);
lean_inc_ref(v_arg_1179_);
v___x_1316_ = l_Lean_mkApp3(v___x_1189_, v_arg_1188_, v_arg_1179_, v___x_1315_);
v___x_1317_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__38, &l_Lean_Meta_Grind_pushNot___redArg___closed__38_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__38);
v___x_1318_ = l_Lean_mkAppB(v___x_1317_, v_arg_1179_, v_arg_1175_);
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
v___x_1320_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1320_, 0, v___x_1316_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
lean_ctor_set_uint8(v___x_1320_, sizeof(void*)*2, v___x_1191_);
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1321_);
v___x_1323_ = v___x_1167_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1335_; 
lean_dec_ref(v___x_1180_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1325_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__39, &l_Lean_Meta_Grind_pushNot___redArg___closed__39_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__39);
lean_inc_ref(v_arg_1179_);
v___x_1326_ = l_Lean_mkNot(v_arg_1179_);
lean_inc_ref(v_arg_1175_);
v___x_1327_ = l_Lean_mkNot(v_arg_1175_);
v___x_1328_ = l_Lean_mkAppB(v___x_1325_, v___x_1326_, v___x_1327_);
v___x_1329_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__42, &l_Lean_Meta_Grind_pushNot___redArg___closed__42_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__42);
v___x_1330_ = l_Lean_mkAppB(v___x_1329_, v_arg_1179_, v_arg_1175_);
v___x_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1328_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*2, v___x_1186_);
v___x_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1333_);
v___x_1335_ = v___x_1167_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
else
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
lean_dec_ref(v___x_1180_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1337_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__43, &l_Lean_Meta_Grind_pushNot___redArg___closed__43_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__43);
lean_inc_ref(v_arg_1179_);
v___x_1338_ = l_Lean_mkNot(v_arg_1179_);
lean_inc_ref(v_arg_1175_);
v___x_1339_ = l_Lean_mkNot(v_arg_1175_);
v___x_1340_ = l_Lean_mkAppB(v___x_1337_, v___x_1338_, v___x_1339_);
v___x_1341_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__46, &l_Lean_Meta_Grind_pushNot___redArg___closed__46_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__46);
v___x_1342_ = l_Lean_mkAppB(v___x_1341_, v_arg_1179_, v_arg_1175_);
v___x_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1344_, 0, v___x_1340_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*2, v___x_1184_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1345_);
v___x_1347_ = v___x_1167_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
else
{
lean_object* v___x_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec_ref(v___x_1180_);
lean_del_object(v___x_1167_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1349_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__48));
v___x_1350_ = 0;
v___x_1351_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__49, &l_Lean_Meta_Grind_pushNot___redArg___closed__49_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__49);
lean_inc_ref(v_arg_1175_);
v___x_1352_ = l_Lean_Expr_app___override(v_arg_1175_, v___x_1351_);
v___x_1353_ = l_Lean_mkNot(v___x_1352_);
lean_inc_ref_n(v_arg_1179_, 2);
v___x_1354_ = l_Lean_mkForall(v___x_1349_, v___x_1350_, v_arg_1179_, v___x_1353_);
v___x_1355_ = l_Lean_Meta_getLevel(v_arg_1179_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1371_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1371_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1371_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1369_; 
v___x_1360_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__51));
v___x_1361_ = lean_box(0);
v___x_1362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1362_, 0, v_a_1356_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = l_Lean_mkConst(v___x_1360_, v___x_1362_);
v___x_1364_ = l_Lean_mkAppB(v___x_1363_, v_arg_1179_, v_arg_1175_);
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
v___x_1366_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1366_, 0, v___x_1354_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*2, v___x_1182_);
v___x_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1367_);
v___x_1369_ = v___x_1358_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec_ref(v___x_1354_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v_arg_1175_);
v_a_1372_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1355_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1355_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
else
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
lean_dec_ref(v___x_1176_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1380_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__54, &l_Lean_Meta_Grind_pushNot___redArg___closed__54_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__54);
lean_inc_ref(v_arg_1175_);
v___x_1381_ = l_Lean_Expr_app___override(v___x_1380_, v_arg_1175_);
v___x_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
v___x_1383_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1383_, 0, v_arg_1175_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*2, v___x_1177_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1384_);
v___x_1386_ = v___x_1167_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
else
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
lean_dec_ref(v___x_1169_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1388_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__14, &l_Lean_Meta_Grind_simpEq___redArg___closed__14_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__14);
v___x_1389_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__58, &l_Lean_Meta_Grind_pushNot___redArg___closed__58_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__58);
v___x_1390_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1390_, 0, v___x_1388_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
lean_ctor_set_uint8(v___x_1390_, sizeof(void*)*2, v___x_1173_);
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1391_);
v___x_1393_ = v___x_1167_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_dec_ref(v___x_1169_);
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v___x_1395_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__11, &l_Lean_Meta_Grind_simpEq___redArg___closed__11_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__11);
v___x_1396_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__62, &l_Lean_Meta_Grind_pushNot___redArg___closed__62_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__62);
v___x_1397_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1397_, 0, v___x_1395_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
lean_ctor_set_uint8(v___x_1397_, sizeof(void*)*2, v___x_1171_);
v___x_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1398_);
v___x_1400_ = v___x_1167_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref(v_arg_1124_);
lean_del_object(v___x_1077_);
v_a_1403_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1164_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1164_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
v___jp_1125_:
{
if (lean_obj_tag(v_arg_1124_) == 7)
{
lean_object* v_binderName_1130_; lean_object* v_binderType_1131_; lean_object* v_body_1132_; uint8_t v_binderInfo_1133_; lean_object* v___x_1134_; 
lean_del_object(v___x_1077_);
v_binderName_1130_ = lean_ctor_get(v_arg_1124_, 0);
lean_inc(v_binderName_1130_);
v_binderType_1131_ = lean_ctor_get(v_arg_1124_, 1);
lean_inc_ref_n(v_binderType_1131_, 2);
v_body_1132_ = lean_ctor_get(v_arg_1124_, 2);
lean_inc_ref(v_body_1132_);
v_binderInfo_1133_ = lean_ctor_get_uint8(v_arg_1124_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_arg_1124_, 3);
v___x_1134_ = l_Lean_Meta_isProp(v_binderType_1131_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1151_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1151_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1151_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
uint8_t v___x_1139_; 
v___x_1139_ = l_Lean_Expr_hasLooseBVars(v_body_1132_);
if (v___x_1139_ == 0)
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_unbox(v_a_1135_);
lean_dec(v_a_1135_);
if (v___x_1140_ == 0)
{
lean_del_object(v___x_1137_);
v___y_1085_ = v_binderName_1130_;
v___y_1086_ = v_binderInfo_1133_;
v___y_1087_ = v_binderType_1131_;
v___y_1088_ = v___y_1126_;
v___y_1089_ = v_body_1132_;
v___y_1090_ = v___y_1127_;
v___y_1091_ = v___y_1129_;
v___y_1092_ = v___y_1128_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1149_; 
lean_dec(v_binderName_1130_);
lean_inc_ref(v_body_1132_);
v___x_1141_ = l_Lean_mkNot(v_body_1132_);
lean_inc_ref(v_binderType_1131_);
v___x_1142_ = l_Lean_mkAnd(v_binderType_1131_, v___x_1141_);
v___x_1143_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__8, &l_Lean_Meta_Grind_pushNot___redArg___closed__8_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__8);
v___x_1144_ = l_Lean_mkAppB(v___x_1143_, v_binderType_1131_, v_body_1132_);
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
v___x_1146_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1146_, 0, v___x_1142_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*2, v___x_1083_);
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1147_);
v___x_1149_ = v___x_1137_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1147_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
else
{
lean_del_object(v___x_1137_);
lean_dec(v_a_1135_);
v___y_1085_ = v_binderName_1130_;
v___y_1086_ = v_binderInfo_1133_;
v___y_1087_ = v_binderType_1131_;
v___y_1088_ = v___y_1126_;
v___y_1089_ = v_body_1132_;
v___y_1090_ = v___y_1127_;
v___y_1091_ = v___y_1129_;
v___y_1092_ = v___y_1128_;
goto v___jp_1084_;
}
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec_ref(v_body_1132_);
lean_dec_ref(v_binderType_1131_);
lean_dec(v_binderName_1130_);
v_a_1152_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1134_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1134_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
lean_dec_ref(v_arg_1124_);
v___x_1160_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1160_);
v___x_1162_ = v___x_1077_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
v___jp_1084_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
lean_inc_ref(v___y_1089_);
lean_inc_ref_n(v___y_1087_, 3);
lean_inc(v___y_1085_);
v___x_1093_ = l_Lean_mkLambda(v___y_1085_, v___y_1086_, v___y_1087_, v___y_1089_);
v___x_1094_ = l_Lean_mkNot(v___y_1089_);
v___x_1095_ = l_Lean_mkLambda(v___y_1085_, v___y_1086_, v___y_1087_, v___x_1094_);
v___x_1096_ = l_Lean_Meta_getLevel(v___y_1087_, v___y_1088_, v___y_1090_, v___y_1092_, v___y_1091_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1115_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1099_ = v___x_1096_;
v_isShared_1100_ = v_isSharedCheck_1115_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1096_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1115_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1101_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__3));
v___x_1102_ = lean_box(0);
v___x_1103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1103_, 0, v_a_1097_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
lean_inc_ref(v___x_1103_);
v___x_1104_ = l_Lean_mkConst(v___x_1101_, v___x_1103_);
lean_inc_ref(v___y_1087_);
v___x_1105_ = l_Lean_mkAppB(v___x_1104_, v___y_1087_, v___x_1095_);
v___x_1106_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__5));
v___x_1107_ = l_Lean_mkConst(v___x_1106_, v___x_1103_);
v___x_1108_ = l_Lean_mkAppB(v___x_1107_, v___y_1087_, v___x_1093_);
v___x_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1110_, 0, v___x_1105_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
lean_ctor_set_uint8(v___x_1110_, sizeof(void*)*2, v___x_1083_);
v___x_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1111_);
v___x_1113_ = v___x_1099_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec_ref(v___x_1095_);
lean_dec_ref(v___x_1093_);
lean_dec_ref(v___y_1087_);
v_a_1116_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1096_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1096_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
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
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
v_a_1412_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1074_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1074_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
v___jp_1071_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg___boxed(lean_object* v_e_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_Meta_Grind_pushNot___redArg(v_e_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot(lean_object* v_e_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l_Lean_Meta_Grind_pushNot___redArg(v_e_1427_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___boxed(lean_object* v_e_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Meta_Grind_pushNot(v_e_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_a_1438_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_(){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1463_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_));
v___x_1464_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_));
v___x_1465_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_pushNot___boxed), 9, 0);
v___x_1466_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1463_, v___x_1464_, v___x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11____boxed(lean_object* v_a_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_();
return v_res_1468_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__2(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_box(0);
v___x_1475_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__1));
v___x_1476_ = l_Lean_mkConst(v___x_1475_, v___x_1474_);
return v___x_1476_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1482_ = lean_box(0);
v___x_1483_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__4));
v___x_1484_ = l_Lean_mkConst(v___x_1483_, v___x_1482_);
return v___x_1484_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__8(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = lean_box(0);
v___x_1489_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__7));
v___x_1490_ = l_Lean_mkConst(v___x_1489_, v___x_1488_);
return v___x_1490_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1494_ = lean_box(0);
v___x_1495_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__10));
v___x_1496_ = l_Lean_mkConst(v___x_1495_, v___x_1494_);
return v___x_1496_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__14(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1502_ = lean_box(0);
v___x_1503_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__13));
v___x_1504_ = l_Lean_mkConst(v___x_1503_, v___x_1502_);
return v___x_1504_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1508_ = lean_box(0);
v___x_1509_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__16));
v___x_1510_ = l_Lean_mkConst(v___x_1509_, v___x_1508_);
return v___x_1510_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1514_ = lean_box(0);
v___x_1515_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__19));
v___x_1516_ = l_Lean_mkConst(v___x_1515_, v___x_1514_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg(lean_object* v_e_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1517_, v_a_1518_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l_Lean_Expr_cleanupAnnotations(v_a_1527_);
lean_dec(v_a_1527_);
v___x_1529_ = l_Lean_Expr_isApp(v___x_1528_);
if (v___x_1529_ == 0)
{
lean_dec_ref(v___x_1528_);
goto v___jp_1523_;
}
else
{
lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1528_);
v___x_1531_ = l_Lean_Expr_isApp(v___x_1530_);
if (v___x_1531_ == 0)
{
lean_dec_ref(v___x_1530_);
lean_dec_ref(v___x_1528_);
goto v___jp_1523_;
}
else
{
lean_object* v___x_1532_; lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1532_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1530_);
v___x_1533_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1534_ = l_Lean_Expr_isConstOf(v___x_1532_, v___x_1533_);
lean_dec_ref(v___x_1532_);
if (v___x_1534_ == 0)
{
lean_dec_ref(v___x_1530_);
lean_dec_ref(v___x_1528_);
goto v___jp_1523_;
}
else
{
lean_object* v_arg_1535_; lean_object* v_arg_1536_; lean_object* v___y_1538_; lean_object* v___x_1612_; 
v_arg_1535_ = lean_ctor_get(v___x_1528_, 1);
lean_inc_ref(v_arg_1535_);
lean_dec_ref(v___x_1528_);
v_arg_1536_ = lean_ctor_get(v___x_1530_, 1);
lean_inc_ref_n(v_arg_1536_, 2);
lean_dec_ref(v___x_1530_);
v___x_1612_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1536_, v_a_1518_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1655_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1615_ = v___x_1612_;
v_isShared_1616_ = v_isSharedCheck_1655_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1612_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1655_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1617_ = l_Lean_Expr_cleanupAnnotations(v_a_1613_);
lean_dec(v_a_1613_);
v___x_1618_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__13));
v___x_1619_ = l_Lean_Expr_isConstOf(v___x_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__10));
v___x_1621_ = l_Lean_Expr_isConstOf(v___x_1617_, v___x_1620_);
if (v___x_1621_ == 0)
{
uint8_t v___x_1622_; 
v___x_1622_ = l_Lean_Expr_isApp(v___x_1617_);
if (v___x_1622_ == 0)
{
lean_dec_ref(v___x_1617_);
lean_del_object(v___x_1615_);
v___y_1538_ = v_a_1518_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1623_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1617_);
v___x_1624_ = l_Lean_Expr_isApp(v___x_1623_);
if (v___x_1624_ == 0)
{
lean_dec_ref(v___x_1623_);
lean_dec_ref(v___x_1617_);
lean_del_object(v___x_1615_);
v___y_1538_ = v_a_1518_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1625_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1623_);
v___x_1626_ = l_Lean_Expr_isConstOf(v___x_1625_, v___x_1533_);
lean_dec_ref(v___x_1625_);
if (v___x_1626_ == 0)
{
lean_dec_ref(v___x_1623_);
lean_dec_ref(v___x_1617_);
lean_del_object(v___x_1615_);
v___y_1538_ = v_a_1518_;
goto v___jp_1537_;
}
else
{
lean_object* v_arg_1627_; lean_object* v_arg_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_dec_ref(v_arg_1536_);
v_arg_1627_ = lean_ctor_get(v___x_1617_, 1);
lean_inc_ref_n(v_arg_1627_, 2);
lean_dec_ref(v___x_1617_);
v_arg_1628_ = lean_ctor_get(v___x_1623_, 1);
lean_inc_ref_n(v_arg_1628_, 2);
lean_dec_ref(v___x_1623_);
lean_inc_ref(v_arg_1535_);
v___x_1629_ = l_Lean_mkOr(v_arg_1627_, v_arg_1535_);
v___x_1630_ = l_Lean_mkOr(v_arg_1628_, v___x_1629_);
v___x_1631_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__14, &l_Lean_Meta_Grind_simpOr___redArg___closed__14_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__14);
v___x_1632_ = l_Lean_mkApp3(v___x_1631_, v_arg_1628_, v_arg_1627_, v_arg_1535_);
v___x_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
v___x_1634_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1634_, 0, v___x_1630_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
lean_ctor_set_uint8(v___x_1634_, sizeof(void*)*2, v___x_1626_);
v___x_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1635_);
v___x_1637_ = v___x_1615_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1645_; 
lean_dec_ref(v___x_1617_);
v___x_1639_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__17, &l_Lean_Meta_Grind_simpOr___redArg___closed__17_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__17);
v___x_1640_ = l_Lean_Expr_app___override(v___x_1639_, v_arg_1535_);
v___x_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1642_, 0, v_arg_1536_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
lean_ctor_set_uint8(v___x_1642_, sizeof(void*)*2, v___x_1621_);
v___x_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1643_);
v___x_1645_ = v___x_1615_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1653_; 
lean_dec_ref(v___x_1617_);
lean_dec_ref(v_arg_1536_);
v___x_1647_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__20, &l_Lean_Meta_Grind_simpOr___redArg___closed__20_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__20);
lean_inc_ref(v_arg_1535_);
v___x_1648_ = l_Lean_Expr_app___override(v___x_1647_, v_arg_1535_);
v___x_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1650_, 0, v_arg_1535_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
lean_ctor_set_uint8(v___x_1650_, sizeof(void*)*2, v___x_1619_);
v___x_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1651_);
v___x_1653_ = v___x_1615_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1651_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec_ref(v_arg_1536_);
lean_dec_ref(v_arg_1535_);
v_a_1656_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1612_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1612_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
v___jp_1537_:
{
lean_object* v___x_1539_; 
lean_inc_ref(v_arg_1535_);
v___x_1539_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1535_, v___y_1538_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1603_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1542_ = v___x_1539_;
v_isShared_1543_ = v_isSharedCheck_1603_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1603_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1544_ = l_Lean_Expr_cleanupAnnotations(v_a_1540_);
lean_dec(v_a_1540_);
v___x_1545_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__13));
v___x_1546_ = l_Lean_Expr_isConstOf(v___x_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__10));
v___x_1548_ = l_Lean_Expr_isConstOf(v___x_1544_, v___x_1547_);
if (v___x_1548_ == 0)
{
uint8_t v___x_1549_; 
lean_dec_ref(v_arg_1535_);
v___x_1549_ = l_Lean_Expr_isApp(v___x_1544_);
if (v___x_1549_ == 0)
{
lean_dec_ref(v___x_1544_);
lean_del_object(v___x_1542_);
lean_dec_ref(v_arg_1536_);
goto v___jp_1520_;
}
else
{
lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1544_);
v___x_1551_ = l_Lean_Expr_isApp(v___x_1550_);
if (v___x_1551_ == 0)
{
lean_dec_ref(v___x_1550_);
lean_dec_ref(v___x_1544_);
lean_del_object(v___x_1542_);
lean_dec_ref(v_arg_1536_);
goto v___jp_1520_;
}
else
{
lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1552_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1550_);
v___x_1553_ = l_Lean_Expr_isConstOf(v___x_1552_, v___x_1533_);
lean_dec_ref(v___x_1552_);
if (v___x_1553_ == 0)
{
lean_dec_ref(v___x_1550_);
lean_dec_ref(v___x_1544_);
lean_del_object(v___x_1542_);
lean_dec_ref(v_arg_1536_);
goto v___jp_1520_;
}
else
{
uint8_t v___x_1554_; 
v___x_1554_ = l_Lean_Expr_isForall(v_arg_1536_);
if (v___x_1554_ == 0)
{
lean_object* v_arg_1555_; lean_object* v_arg_1556_; uint8_t v___x_1557_; 
v_arg_1555_ = lean_ctor_get(v___x_1544_, 1);
lean_inc_ref(v_arg_1555_);
lean_dec_ref(v___x_1544_);
v_arg_1556_ = lean_ctor_get(v___x_1550_, 1);
lean_inc_ref(v_arg_1556_);
lean_dec_ref(v___x_1550_);
v___x_1557_ = l_Lean_Expr_isForall(v_arg_1556_);
if (v___x_1557_ == 0)
{
uint8_t v___x_1558_; 
v___x_1558_ = l_Lean_Expr_isForall(v_arg_1555_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1561_; 
lean_dec_ref(v_arg_1556_);
lean_dec_ref(v_arg_1555_);
lean_dec_ref(v_arg_1536_);
v___x_1559_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1559_);
v___x_1561_ = v___x_1542_;
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
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
lean_inc_ref(v_arg_1536_);
lean_inc_ref(v_arg_1556_);
v___x_1563_ = l_Lean_mkOr(v_arg_1556_, v_arg_1536_);
lean_inc_ref(v_arg_1555_);
v___x_1564_ = l_Lean_mkOr(v_arg_1555_, v___x_1563_);
v___x_1565_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__2, &l_Lean_Meta_Grind_simpOr___redArg___closed__2_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__2);
v___x_1566_ = l_Lean_mkApp3(v___x_1565_, v_arg_1536_, v_arg_1556_, v_arg_1555_);
v___x_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
v___x_1568_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1568_, 0, v___x_1564_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
lean_ctor_set_uint8(v___x_1568_, sizeof(void*)*2, v___x_1553_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1569_);
v___x_1571_ = v___x_1542_;
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
else
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1581_; 
lean_inc_ref(v_arg_1555_);
lean_inc_ref(v_arg_1536_);
v___x_1573_ = l_Lean_mkOr(v_arg_1536_, v_arg_1555_);
lean_inc_ref(v_arg_1556_);
v___x_1574_ = l_Lean_mkOr(v_arg_1556_, v___x_1573_);
v___x_1575_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__5, &l_Lean_Meta_Grind_simpOr___redArg___closed__5_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__5);
v___x_1576_ = l_Lean_mkApp3(v___x_1575_, v_arg_1536_, v_arg_1556_, v_arg_1555_);
v___x_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
v___x_1578_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1578_, 0, v___x_1574_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*2, v___x_1553_);
v___x_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1579_);
v___x_1581_ = v___x_1542_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1585_; 
lean_dec_ref(v___x_1550_);
lean_dec_ref(v___x_1544_);
lean_dec_ref(v_arg_1536_);
v___x_1583_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1583_);
v___x_1585_ = v___x_1542_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
}
else
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
lean_dec_ref(v___x_1544_);
v___x_1587_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__8, &l_Lean_Meta_Grind_simpOr___redArg___closed__8_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__8);
v___x_1588_ = l_Lean_Expr_app___override(v___x_1587_, v_arg_1536_);
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
v___x_1590_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1590_, 0, v_arg_1535_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*2, v___x_1548_);
v___x_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1591_);
v___x_1593_ = v___x_1542_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1601_; 
lean_dec_ref(v___x_1544_);
lean_dec_ref(v_arg_1535_);
v___x_1595_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__11, &l_Lean_Meta_Grind_simpOr___redArg___closed__11_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__11);
lean_inc_ref(v_arg_1536_);
v___x_1596_ = l_Lean_Expr_app___override(v___x_1595_, v_arg_1536_);
v___x_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
v___x_1598_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1598_, 0, v_arg_1536_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
lean_ctor_set_uint8(v___x_1598_, sizeof(void*)*2, v___x_1546_);
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1599_);
v___x_1601_ = v___x_1542_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
lean_dec_ref(v_arg_1536_);
lean_dec_ref(v_arg_1535_);
v_a_1604_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1539_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1539_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
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
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
v_a_1664_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1526_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1526_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
v___jp_1520_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
v___jp_1523_:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
return v___x_1525_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg___boxed(lean_object* v_e_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_Meta_Grind_simpOr___redArg(v_e_1672_, v_a_1673_);
lean_dec(v_a_1673_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr(lean_object* v_e_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_Lean_Meta_Grind_simpOr___redArg(v_e_1676_, v_a_1681_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___boxed(lean_object* v_e_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lean_Meta_Grind_simpOr(v_e_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_, v_a_1692_, v_a_1693_);
lean_dec(v_a_1693_);
lean_dec_ref(v_a_1692_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
lean_dec(v_a_1687_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_(){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1713_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_1714_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_1715_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpOr___boxed), 9, 0);
v___x_1716_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1713_, v___x_1714_, v___x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12____boxed(lean_object* v_a_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(uint8_t v___x_1719_, uint8_t v___x_1720_, lean_object* v_h_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v___x_1730_; lean_object* v___y_1732_; lean_object* v___x_1752_; 
v___x_1730_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__14, &l_Lean_Meta_Grind_simpEq___redArg___closed__14_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__14);
lean_inc_ref(v_h_1721_);
v___x_1752_ = l_Lean_Meta_mkNoConfusion(v___x_1730_, v_h_1721_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = lean_mk_empty_array_with_capacity(v___x_1754_);
v___x_1756_ = lean_array_push(v___x_1755_, v_h_1721_);
v___x_1757_ = 1;
v___x_1758_ = l_Lean_Meta_mkLambdaFVars(v___x_1756_, v_a_1753_, v___x_1720_, v___x_1719_, v___x_1720_, v___x_1719_, v___x_1757_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec_ref(v___x_1756_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1760_; uint8_t v_transparency_1761_; uint8_t v___x_1762_; uint8_t v___x_1763_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1760_ = l_Lean_Meta_Context_config(v___y_1725_);
v_transparency_1761_ = lean_ctor_get_uint8(v___x_1760_, 9);
lean_dec_ref(v___x_1760_);
v___x_1762_ = 1;
v___x_1763_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1761_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_object* v_keyedConfig_1764_; uint8_t v_trackZetaDelta_1765_; lean_object* v_zetaDeltaSet_1766_; lean_object* v_lctx_1767_; lean_object* v_localInstances_1768_; lean_object* v_defEqCtx_x3f_1769_; lean_object* v_synthPendingDepth_1770_; lean_object* v_customCanUnfoldPredicate_x3f_1771_; uint8_t v_univApprox_1772_; uint8_t v_inTypeClassResolution_1773_; uint8_t v_cacheInferType_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_keyedConfig_1764_ = lean_ctor_get(v___y_1725_, 0);
v_trackZetaDelta_1765_ = lean_ctor_get_uint8(v___y_1725_, sizeof(void*)*7);
v_zetaDeltaSet_1766_ = lean_ctor_get(v___y_1725_, 1);
v_lctx_1767_ = lean_ctor_get(v___y_1725_, 2);
v_localInstances_1768_ = lean_ctor_get(v___y_1725_, 3);
v_defEqCtx_x3f_1769_ = lean_ctor_get(v___y_1725_, 4);
v_synthPendingDepth_1770_ = lean_ctor_get(v___y_1725_, 5);
v_customCanUnfoldPredicate_x3f_1771_ = lean_ctor_get(v___y_1725_, 6);
v_univApprox_1772_ = lean_ctor_get_uint8(v___y_1725_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1773_ = lean_ctor_get_uint8(v___y_1725_, sizeof(void*)*7 + 2);
v_cacheInferType_1774_ = lean_ctor_get_uint8(v___y_1725_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1764_);
v___x_1775_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1762_, v_keyedConfig_1764_);
lean_inc(v_customCanUnfoldPredicate_x3f_1771_);
lean_inc(v_synthPendingDepth_1770_);
lean_inc(v_defEqCtx_x3f_1769_);
lean_inc_ref(v_localInstances_1768_);
lean_inc_ref(v_lctx_1767_);
lean_inc(v_zetaDeltaSet_1766_);
v___x_1776_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
lean_ctor_set(v___x_1776_, 1, v_zetaDeltaSet_1766_);
lean_ctor_set(v___x_1776_, 2, v_lctx_1767_);
lean_ctor_set(v___x_1776_, 3, v_localInstances_1768_);
lean_ctor_set(v___x_1776_, 4, v_defEqCtx_x3f_1769_);
lean_ctor_set(v___x_1776_, 5, v_synthPendingDepth_1770_);
lean_ctor_set(v___x_1776_, 6, v_customCanUnfoldPredicate_x3f_1771_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7, v_trackZetaDelta_1765_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 1, v_univApprox_1772_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1773_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 3, v_cacheInferType_1774_);
v___x_1777_ = l_Lean_Meta_mkEqFalse_x27(v_a_1759_, v___x_1776_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec_ref_known(v___x_1776_, 7);
v___y_1732_ = v___x_1777_;
goto v___jp_1731_;
}
else
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Lean_Meta_mkEqFalse_x27(v_a_1759_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
v___y_1732_ = v___x_1778_;
goto v___jp_1731_;
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1758_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1758_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
lean_dec_ref(v_h_1721_);
v_a_1787_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1752_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1752_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
v___jp_1731_:
{
if (lean_obj_tag(v___y_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1743_; 
v_a_1733_ = lean_ctor_get(v___y_1732_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___y_1732_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1735_ = v___y_1732_;
v_isShared_1736_ = v_isSharedCheck_1743_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___y_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1743_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1737_, 0, v_a_1733_);
v___x_1738_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1738_, 0, v___x_1730_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
lean_ctor_set_uint8(v___x_1738_, sizeof(void*)*2, v___x_1719_);
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1739_);
v___x_1741_ = v___x_1735_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_a_1744_ = lean_ctor_get(v___y_1732_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___y_1732_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___y_1732_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___y_1732_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed(lean_object* v___x_1795_, lean_object* v___x_1796_, lean_object* v_h_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v___x_12418__boxed_1806_; uint8_t v___x_12419__boxed_1807_; lean_object* v_res_1808_; 
v___x_12418__boxed_1806_ = lean_unbox(v___x_1795_);
v___x_12419__boxed_1807_ = lean_unbox(v___x_1796_);
v_res_1808_ = l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(v___x_12418__boxed_1806_, v___x_12419__boxed_1807_, v_h_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec(v___y_1798_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v_b_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1819_; 
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
lean_inc(v___y_1815_);
lean_inc_ref(v___y_1814_);
lean_inc(v___y_1812_);
lean_inc_ref(v___y_1811_);
lean_inc(v___y_1810_);
v___x_1819_ = lean_apply_9(v_k_1809_, v_b_1813_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, lean_box(0));
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v_b_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(v_k_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v_b_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1823_);
lean_dec_ref(v___y_1822_);
lean_dec(v___y_1821_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(lean_object* v_name_1831_, uint8_t v_bi_1832_, lean_object* v_type_1833_, lean_object* v_k_1834_, uint8_t v_kind_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v___f_1844_; lean_object* v___x_1845_; 
lean_inc(v___y_1838_);
lean_inc_ref(v___y_1837_);
lean_inc(v___y_1836_);
v___f_1844_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1844_, 0, v_k_1834_);
lean_closure_set(v___f_1844_, 1, v___y_1836_);
lean_closure_set(v___f_1844_, 2, v___y_1837_);
lean_closure_set(v___f_1844_, 3, v___y_1838_);
v___x_1845_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1831_, v_bi_1832_, v_type_1833_, v___f_1844_, v_kind_1835_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
if (lean_obj_tag(v___x_1845_) == 0)
{
return v___x_1845_;
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___boxed(lean_object* v_name_1854_, lean_object* v_bi_1855_, lean_object* v_type_1856_, lean_object* v_k_1857_, lean_object* v_kind_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
uint8_t v_bi_boxed_1867_; uint8_t v_kind_boxed_1868_; lean_object* v_res_1869_; 
v_bi_boxed_1867_ = lean_unbox(v_bi_1855_);
v_kind_boxed_1868_ = lean_unbox(v_kind_1858_);
v_res_1869_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_1854_, v_bi_boxed_1867_, v_type_1856_, v_k_1857_, v_kind_boxed_1868_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(lean_object* v_name_1870_, lean_object* v_type_1871_, lean_object* v_k_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
uint8_t v___x_1881_; uint8_t v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = 0;
v___x_1882_ = 0;
v___x_1883_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_1870_, v___x_1881_, v_type_1871_, v_k_1872_, v___x_1882_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg___boxed(lean_object* v_name_1884_, lean_object* v_type_1885_, lean_object* v_k_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v_name_1884_, v_type_1885_, v_k_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap(lean_object* v_e_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v___x_1911_; 
lean_inc_ref(v_e_1899_);
v___x_1911_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1899_, v_a_1904_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = l_Lean_Expr_cleanupAnnotations(v_a_1912_);
lean_dec(v_a_1912_);
v___x_1914_ = l_Lean_Expr_isApp(v___x_1913_);
if (v___x_1914_ == 0)
{
lean_dec_ref(v___x_1913_);
lean_dec_ref(v_e_1899_);
goto v___jp_1908_;
}
else
{
lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1913_);
v___x_1916_ = l_Lean_Expr_isApp(v___x_1915_);
if (v___x_1916_ == 0)
{
lean_dec_ref(v___x_1915_);
lean_dec_ref(v___x_1913_);
lean_dec_ref(v_e_1899_);
goto v___jp_1908_;
}
else
{
lean_object* v___x_1917_; uint8_t v___x_1918_; 
v___x_1917_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1915_);
v___x_1918_ = l_Lean_Expr_isApp(v___x_1917_);
if (v___x_1918_ == 0)
{
lean_dec_ref(v___x_1917_);
lean_dec_ref(v___x_1915_);
lean_dec_ref(v___x_1913_);
lean_dec_ref(v_e_1899_);
goto v___jp_1908_;
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1919_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1917_);
lean_dec_ref(v___x_1917_);
v___x_1920_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_1921_ = l_Lean_Expr_isConstOf(v___x_1919_, v___x_1920_);
lean_dec_ref(v___x_1919_);
if (v___x_1921_ == 0)
{
lean_dec_ref(v___x_1915_);
lean_dec_ref(v___x_1913_);
lean_dec_ref(v_e_1899_);
goto v___jp_1908_;
}
else
{
lean_object* v_arg_1922_; lean_object* v_arg_1923_; lean_object* v___x_1924_; 
v_arg_1922_ = lean_ctor_get(v___x_1913_, 1);
lean_inc_ref(v_arg_1922_);
lean_dec_ref(v___x_1913_);
v_arg_1923_ = lean_ctor_get(v___x_1915_, 1);
lean_inc_ref(v_arg_1923_);
lean_dec_ref(v___x_1915_);
v___x_1924_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_1923_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1967_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1927_ = v___x_1924_;
v_isShared_1928_ = v_isSharedCheck_1967_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1967_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
if (lean_obj_tag(v_a_1925_) == 1)
{
lean_object* v_val_1929_; lean_object* v___x_1930_; 
lean_del_object(v___x_1927_);
v_val_1929_ = lean_ctor_get(v_a_1925_, 0);
lean_inc(v_val_1929_);
lean_dec_ref_known(v_a_1925_, 1);
v___x_1930_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_1922_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1954_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1954_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1954_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
if (lean_obj_tag(v_a_1931_) == 1)
{
lean_object* v_toConstantVal_1935_; lean_object* v_val_1936_; lean_object* v_toConstantVal_1937_; lean_object* v_name_1938_; lean_object* v_name_1939_; uint8_t v___x_1940_; 
v_toConstantVal_1935_ = lean_ctor_get(v_val_1929_, 0);
lean_inc_ref(v_toConstantVal_1935_);
lean_dec(v_val_1929_);
v_val_1936_ = lean_ctor_get(v_a_1931_, 0);
lean_inc(v_val_1936_);
lean_dec_ref_known(v_a_1931_, 1);
v_toConstantVal_1937_ = lean_ctor_get(v_val_1936_, 0);
lean_inc_ref(v_toConstantVal_1937_);
lean_dec(v_val_1936_);
v_name_1938_ = lean_ctor_get(v_toConstantVal_1935_, 0);
lean_inc(v_name_1938_);
lean_dec_ref(v_toConstantVal_1935_);
v_name_1939_ = lean_ctor_get(v_toConstantVal_1937_, 0);
lean_inc(v_name_1939_);
lean_dec_ref(v_toConstantVal_1937_);
v___x_1940_ = lean_name_eq(v_name_1938_, v_name_1939_);
lean_dec(v_name_1939_);
lean_dec(v_name_1938_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___f_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_del_object(v___x_1933_);
v___x_1941_ = lean_box(v___x_1921_);
v___x_1942_ = lean_box(v___x_1940_);
v___f_1943_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1943_, 0, v___x_1941_);
lean_closure_set(v___f_1943_, 1, v___x_1942_);
v___x_1944_ = ((lean_object*)(l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1));
v___x_1945_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v___x_1944_, v_e_1899_, v___f_1943_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
return v___x_1945_;
}
else
{
lean_object* v___x_1946_; lean_object* v___x_1948_; 
lean_dec_ref(v_e_1899_);
v___x_1946_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1946_);
v___x_1948_ = v___x_1933_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1952_; 
lean_dec(v_a_1931_);
lean_dec(v_val_1929_);
lean_dec_ref(v_e_1899_);
v___x_1950_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1950_);
v___x_1952_ = v___x_1933_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_dec(v_val_1929_);
lean_dec_ref(v_e_1899_);
v_a_1955_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1930_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1930_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
else
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
lean_dec(v_a_1925_);
lean_dec_ref(v_arg_1922_);
lean_dec_ref(v_e_1899_);
v___x_1963_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1963_);
v___x_1965_ = v___x_1927_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
else
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
lean_dec_ref(v_arg_1922_);
lean_dec_ref(v_e_1899_);
v_a_1968_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v___x_1924_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1924_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
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
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v_e_1899_);
v_a_1976_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1911_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1911_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
v___jp_1908_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
return v___x_1910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___boxed(lean_object* v_e_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lean_Meta_Grind_reduceCtorEqCheap(v_e_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
lean_dec(v_a_1985_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(lean_object* v_00_u03b1_1994_, lean_object* v_name_1995_, uint8_t v_bi_1996_, lean_object* v_type_1997_, lean_object* v_k_1998_, uint8_t v_kind_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_1995_, v_bi_1996_, v_type_1997_, v_k_1998_, v_kind_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2009_, lean_object* v_name_2010_, lean_object* v_bi_2011_, lean_object* v_type_2012_, lean_object* v_k_2013_, lean_object* v_kind_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
uint8_t v_bi_boxed_2023_; uint8_t v_kind_boxed_2024_; lean_object* v_res_2025_; 
v_bi_boxed_2023_ = lean_unbox(v_bi_2011_);
v_kind_boxed_2024_ = lean_unbox(v_kind_2014_);
v_res_2025_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(v_00_u03b1_2009_, v_name_2010_, v_bi_boxed_2023_, v_type_2012_, v_k_2013_, v_kind_boxed_2024_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
lean_dec(v___y_2017_);
lean_dec_ref(v___y_2016_);
lean_dec(v___y_2015_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(lean_object* v_00_u03b1_2026_, lean_object* v_name_2027_, lean_object* v_type_2028_, lean_object* v_k_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v_name_2027_, v_type_2028_, v_k_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___boxed(lean_object* v_00_u03b1_2039_, lean_object* v_name_2040_, lean_object* v_type_2041_, lean_object* v_k_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(v_00_u03b1_2039_, v_name_2040_, v_type_2041_, v_k_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_));
v___x_2060_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_));
v___x_2061_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_reduceCtorEqCheap___boxed), 9, 0);
v___x_2062_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2059_, v___x_2060_, v___x_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14____boxed(lean_object* v_a_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(lean_object* v_e_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Lean_Meta_Sym_unfoldReducibleStep(v_e_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg___boxed(lean_object* v_e_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(v_e_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc(lean_object* v_e_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_Lean_Meta_Sym_unfoldReducibleStep(v_e_2079_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___boxed(lean_object* v_e_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_Meta_Grind_unfoldReducibleSimproc(v_e_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
lean_dec(v_a_2092_);
lean_dec_ref(v_a_2091_);
lean_dec(v_a_2090_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Meta_Sym_unfoldReducibleStep(v___y_2099_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(){
_start:
{
lean_object* v___f_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___f_2131_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2132_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2133_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2134_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2132_, v___x_2133_, v___f_2131_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg(lean_object* v_a_2145_, lean_object* v_a_2146_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_Meta_Simp_getSEvalSimprocs___redArg(v_a_2146_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; lean_object* v___x_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = ((lean_object*)(l_Lean_Meta_Grind_getSimprocs___redArg___closed__2));
v___x_2151_ = l_Lean_Meta_Simp_Simprocs_erase(v_a_2149_, v___x_2150_);
v___x_2152_ = ((lean_object*)(l_Lean_Meta_Grind_getSimprocs___redArg___closed__4));
v___x_2153_ = l_Lean_Meta_Simp_Simprocs_erase(v___x_2151_, v___x_2152_);
v___x_2154_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_));
v___x_2155_ = 1;
v___x_2156_ = l_Lean_Meta_Simp_Simprocs_add(v___x_2153_, v___x_2154_, v___x_2155_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2158_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
v___x_2158_ = l_Lean_Meta_Grind_addSimpMatchDiscrsOnly(v_a_2157_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2160_ = l_Lean_Meta_Grind_addPreMatchCondSimproc(v_a_2159_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2162_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
lean_dec_ref_known(v___x_2160_, 1);
v___x_2162_ = l_Lean_Meta_Grind_Arith_addSimproc(v_a_2161_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2164_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref_known(v___x_2162_, 1);
v___x_2164_ = l_Lean_Meta_Grind_addForallSimproc(v_a_2163_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2165_);
lean_dec_ref_known(v___x_2164_, 1);
v___x_2166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_));
v___x_2167_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2165_, v___x_2166_, v___x_2155_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2168_);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_2170_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2168_, v___x_2169_, v___x_2155_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
v___x_2172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_));
v___x_2173_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2171_, v___x_2172_, v___x_2155_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_));
v___x_2176_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2174_, v___x_2175_, v___x_2155_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v___x_2178_; uint8_t v___x_2179_; lean_object* v___x_2180_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2176_, 1);
v___x_2178_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_));
v___x_2179_ = 0;
v___x_2180_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2177_, v___x_2178_, v___x_2179_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
lean_dec_ref_known(v___x_2180_, 1);
v___x_2182_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2183_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2181_, v___x_2182_, v___x_2179_, v_a_2145_, v_a_2146_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2194_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2186_ = v___x_2183_;
v_isShared_2187_ = v_isSharedCheck_2194_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2183_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2194_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2188_ = lean_unsigned_to_nat(1u);
v___x_2189_ = lean_mk_empty_array_with_capacity(v___x_2188_);
v___x_2190_ = lean_array_push(v___x_2189_, v_a_2184_);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 0, v___x_2190_);
v___x_2192_ = v___x_2186_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
v_a_2195_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2183_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2183_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_a_2203_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2180_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2180_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
v_a_2211_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2176_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2176_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_a_2219_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2173_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2173_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2170_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2170_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2167_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2167_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
v_a_2243_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2164_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2164_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
v_a_2251_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2162_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2162_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
v_a_2259_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2160_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2160_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
v_a_2267_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2158_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2158_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
v_a_2275_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2156_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2156_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_a_2283_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2148_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2148_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___boxed(lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_Meta_Grind_getSimprocs___redArg(v_a_2291_, v_a_2292_);
lean_dec(v_a_2292_);
lean_dec_ref(v_a_2291_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs(lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lean_Meta_Grind_getSimprocs___redArg(v_a_2297_, v_a_2298_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___boxed(lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Lean_Meta_Grind_getSimprocs(v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec(v_a_2302_);
lean_dec_ref(v_a_2301_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(lean_object* v_s_2307_, lean_object* v_declName_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v___x_2314_; lean_object* v_env_2315_; uint8_t v___x_2316_; uint8_t v___x_2317_; 
v___x_2314_ = lean_st_ref_get(v_a_2312_);
v_env_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc_ref(v_env_2315_);
lean_dec(v___x_2314_);
v___x_2316_ = 1;
lean_inc(v_declName_2308_);
v___x_2317_ = l_Lean_Environment_contains(v_env_2315_, v_declName_2308_, v___x_2316_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; 
lean_dec(v_declName_2308_);
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_s_2307_);
return v___x_2318_;
}
else
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lean_Meta_SimpTheorems_addDeclToUnfold(v_s_2307_, v_declName_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold___boxed(lean_object* v_s_2320_, lean_object* v_declName_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_s_2320_, v_declName_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
lean_dec(v_a_2323_);
lean_dec_ref(v_a_2322_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems(lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = l_Lean_Meta_Grind_normExt;
v___x_2334_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_2333_, v_a_2331_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v___x_2336_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__7));
v___x_2337_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2335_, v___x_2336_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v___x_2339_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__10));
v___x_2340_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2338_, v___x_2339_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__12));
v___x_2343_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2341_, v___x_2342_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2345_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__15));
v___x_2346_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2344_, v___x_2345_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2346_, 1);
v___x_2348_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__17));
v___x_2349_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2347_, v___x_2348_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_);
return v___x_2349_;
}
else
{
return v___x_2346_;
}
}
else
{
return v___x_2343_;
}
}
else
{
return v___x_2340_;
}
}
else
{
return v___x_2337_;
}
}
else
{
return v___x_2334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems___boxed(lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lean_Meta_Grind_getNormTheorems(v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_);
lean_dec(v_a_2353_);
lean_dec_ref(v_a_2352_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext(lean_object* v_config_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v___x_2362_; 
v___x_2362_ = l_Lean_Meta_Grind_getNormTheorems(v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___x_2364_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref_known(v___x_2362_, 1);
v___x_2364_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_2360_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; uint8_t v_zetaDelta_2366_; uint8_t v_zeta_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; uint8_t v___x_2370_; uint8_t v___x_2371_; uint8_t v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2364_, 1);
v_zetaDelta_2366_ = lean_ctor_get_uint8(v_config_2356_, sizeof(void*)*17 + 19);
v_zeta_2367_ = lean_ctor_get_uint8(v_config_2356_, sizeof(void*)*17 + 20);
v___x_2368_ = lean_unsigned_to_nat(100000u);
v___x_2369_ = lean_unsigned_to_nat(2u);
v___x_2370_ = 0;
v___x_2371_ = 1;
v___x_2372_ = 0;
v___x_2373_ = lean_box(0);
v___x_2374_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_2374_, 0, v___x_2368_);
lean_ctor_set(v___x_2374_, 1, v___x_2369_);
lean_ctor_set(v___x_2374_, 2, v___x_2373_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 1, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 2, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 3, v_zeta_2367_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 4, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 5, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 6, v___x_2372_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 7, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 8, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 9, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 10, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 11, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 12, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 13, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 14, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 15, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 16, v_zetaDelta_2366_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 17, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 18, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 19, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 20, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 21, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 22, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 23, v___x_2371_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 24, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 25, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 26, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 27, v___x_2370_);
lean_ctor_set_uint8(v___x_2374_, sizeof(void*)*3 + 28, v___x_2370_);
v___x_2375_ = lean_unsigned_to_nat(1u);
v___x_2376_ = lean_mk_empty_array_with_capacity(v___x_2375_);
v___x_2377_ = lean_array_push(v___x_2376_, v_a_2363_);
v___x_2378_ = l_Lean_Options_empty;
v___x_2379_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2374_, v___x_2377_, v_a_2365_, v___x_2378_, v_a_2357_, v_a_2359_, v_a_2360_);
return v___x_2379_;
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2387_; 
lean_dec(v_a_2363_);
v_a_2380_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2382_ = v___x_2364_;
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2364_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
if (v_isShared_2383_ == 0)
{
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2380_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_a_2388_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2362_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2362_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext___boxed(lean_object* v_config_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_Meta_Grind_getSimpContext(v_config_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec_ref(v_config_2396_);
return v_res_2402_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3241500959____hygCtx___hyg_13_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2954503720____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpUDIte_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_728362805____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1385125664____hygCtx___hyg_11_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* initialize_Init_Grind_Config(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
}
#ifdef __cplusplus
}
#endif
