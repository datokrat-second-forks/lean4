// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.LeCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Init.Data.Int.OfNat import Lean.Meta.Tactic.Simp.Arith.Int import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var import Lean.Meta.Tactic.Grind.Arith.Cutsat.Proof import Lean.Meta.Tactic.Grind.Arith.Cutsat.Nat import Lean.Meta.Tactic.Grind.Arith.Cutsat.Norm import Lean.Meta.Tactic.Grind.Arith.Cutsat.CommRing
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Int_Internal_Linear_instBEqPoly_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toPoly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_mul(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_addConst(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Expr_norm(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_natToInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_div(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isSorted(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_norm(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_coeff(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_combine(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isUnsatLe(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 228, 18, 139, 25, 122, 57, 58)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isNegEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNegEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(150, 223, 246, 201, 117, 37, 26, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "new eq: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(236, 213, 16, 64, 1, 14, 244, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(177, 38, 232, 206, 222, 75, 121, 224)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value),LEAN_SCALAR_PTR_LITERAL(216, 204, 174, 99, 3, 215, 140, 75)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11;
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "unexpected non normalized inequality constraint found"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ToInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "of_not_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 115, 36, 201, 96, 73, 90, 93)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "of_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 164, 65, 191, 194, 192, 188, 236)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object* v_c_3_){
_start:
{
lean_object* v___y_5_; lean_object* v_p_6_; lean_object* v_p_14_; uint8_t v___x_15_; 
v_p_14_ = lean_ctor_get(v_c_3_, 0);
v___x_15_ = l_Int_Internal_Linear_Poly_isSorted(v_p_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
lean_inc_ref(v_p_14_);
v___x_16_ = l_Int_Internal_Linear_Poly_norm(v_p_14_);
v___x_17_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_17_, 0, v_c_3_);
lean_inc_ref(v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_16_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___y_5_ = v___x_18_;
v_p_6_ = v___x_16_;
goto v___jp_4_;
}
else
{
lean_inc_ref(v_p_14_);
v___y_5_ = v_c_3_;
v_p_6_ = v_p_14_;
goto v___jp_4_;
}
v___jp_4_:
{
lean_object* v_k_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_k_7_ = l_Int_Internal_Linear_Poly_gcdCoeffs_x27(v_p_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_dec_eq(v_k_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_10_ = lean_nat_to_int(v_k_7_);
v___x_11_ = l_Int_Internal_Linear_Poly_div(v___x_10_, v_p_6_);
lean_dec(v___x_10_);
v___x_12_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_12_, 0, v___y_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
return v___x_13_;
}
else
{
lean_dec(v_k_7_);
lean_dec_ref(v_p_6_);
return v___y_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_25_; lean_object* v_env_26_; lean_object* v___x_27_; lean_object* v_toCold_28_; lean_object* v_mctx_29_; lean_object* v_lctx_30_; lean_object* v_options_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_25_ = lean_st_ref_get(v___y_23_);
v_env_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc_ref(v_env_26_);
lean_dec(v___x_25_);
v___x_27_ = lean_st_ref_get(v___y_21_);
v_toCold_28_ = lean_ctor_get(v___y_22_, 0);
v_mctx_29_ = lean_ctor_get(v___x_27_, 0);
lean_inc_ref(v_mctx_29_);
lean_dec(v___x_27_);
v_lctx_30_ = lean_ctor_get(v___y_20_, 2);
v_options_31_ = lean_ctor_get(v_toCold_28_, 2);
lean_inc_ref(v_options_31_);
lean_inc_ref(v_lctx_30_);
v___x_32_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_32_, 0, v_env_26_);
lean_ctor_set(v___x_32_, 1, v_mctx_29_);
lean_ctor_set(v___x_32_, 2, v_lctx_30_);
lean_ctor_set(v___x_32_, 3, v_options_31_);
v___x_33_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v_msgData_19_);
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0___boxed(lean_object* v_msgData_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(v_msgData_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_41_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_42_; double v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(0u);
v___x_43_ = lean_float_of_nat(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object* v_cls_47_, lean_object* v_msg_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_ref_54_; lean_object* v___x_55_; lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_100_; 
v_ref_54_ = lean_ctor_get(v___y_51_, 2);
v___x_55_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(v_msg_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
v_a_56_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_100_ == 0)
{
v___x_58_ = v___x_55_;
v_isShared_59_ = v_isSharedCheck_100_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_100_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v_traceState_61_; lean_object* v_env_62_; lean_object* v_nextMacroScope_63_; lean_object* v_ngen_64_; lean_object* v_auxDeclNGen_65_; lean_object* v_cache_66_; lean_object* v_messages_67_; lean_object* v_infoState_68_; lean_object* v_snapshotTasks_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_99_; 
v___x_60_ = lean_st_ref_take(v___y_52_);
v_traceState_61_ = lean_ctor_get(v___x_60_, 4);
v_env_62_ = lean_ctor_get(v___x_60_, 0);
v_nextMacroScope_63_ = lean_ctor_get(v___x_60_, 1);
v_ngen_64_ = lean_ctor_get(v___x_60_, 2);
v_auxDeclNGen_65_ = lean_ctor_get(v___x_60_, 3);
v_cache_66_ = lean_ctor_get(v___x_60_, 5);
v_messages_67_ = lean_ctor_get(v___x_60_, 6);
v_infoState_68_ = lean_ctor_get(v___x_60_, 7);
v_snapshotTasks_69_ = lean_ctor_get(v___x_60_, 8);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_99_ == 0)
{
v___x_71_ = v___x_60_;
v_isShared_72_ = v_isSharedCheck_99_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_snapshotTasks_69_);
lean_inc(v_infoState_68_);
lean_inc(v_messages_67_);
lean_inc(v_cache_66_);
lean_inc(v_traceState_61_);
lean_inc(v_auxDeclNGen_65_);
lean_inc(v_ngen_64_);
lean_inc(v_nextMacroScope_63_);
lean_inc(v_env_62_);
lean_dec(v___x_60_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_99_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
uint64_t v_tid_73_; lean_object* v_traces_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_98_; 
v_tid_73_ = lean_ctor_get_uint64(v_traceState_61_, sizeof(void*)*1);
v_traces_74_ = lean_ctor_get(v_traceState_61_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v_traceState_61_);
if (v_isSharedCheck_98_ == 0)
{
v___x_76_ = v_traceState_61_;
v_isShared_77_ = v_isSharedCheck_98_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_traces_74_);
lean_dec(v_traceState_61_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_98_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; lean_object* v___x_79_; double v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_78_ = lean_box(0);
v___x_79_ = lean_box(0);
v___x_80_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0);
v___x_81_ = 0;
v___x_82_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1));
v___x_83_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_83_, 0, v_cls_47_);
lean_ctor_set(v___x_83_, 1, v___x_79_);
lean_ctor_set(v___x_83_, 2, v___x_82_);
lean_ctor_set_float(v___x_83_, sizeof(void*)*3, v___x_80_);
lean_ctor_set_float(v___x_83_, sizeof(void*)*3 + 8, v___x_80_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*3 + 16, v___x_81_);
v___x_84_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2));
v___x_85_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v_a_56_);
lean_ctor_set(v___x_85_, 2, v___x_84_);
lean_inc(v_ref_54_);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v_ref_54_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = l_Lean_PersistentArray_push___redArg(v_traces_74_, v___x_86_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 0, v___x_87_);
v___x_89_ = v___x_76_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v___x_87_);
lean_ctor_set_uint64(v_reuseFailAlloc_97_, sizeof(void*)*1, v_tid_73_);
v___x_89_ = v_reuseFailAlloc_97_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 4, v___x_89_);
v___x_91_ = v___x_71_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_env_62_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_nextMacroScope_63_);
lean_ctor_set(v_reuseFailAlloc_96_, 2, v_ngen_64_);
lean_ctor_set(v_reuseFailAlloc_96_, 3, v_auxDeclNGen_65_);
lean_ctor_set(v_reuseFailAlloc_96_, 4, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_96_, 5, v_cache_66_);
lean_ctor_set(v_reuseFailAlloc_96_, 6, v_messages_67_);
lean_ctor_set(v_reuseFailAlloc_96_, 7, v_infoState_68_);
lean_ctor_set(v_reuseFailAlloc_96_, 8, v_snapshotTasks_69_);
v___x_91_ = v_reuseFailAlloc_96_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_92_ = lean_st_ref_put(v___y_52_, v___x_91_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_78_);
v___x_94_ = v___x_58_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_78_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object* v_cls_101_, lean_object* v_msg_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_101_, v_msg_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_108_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6(void){
_start:
{
lean_object* v_cls_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_cls_119_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3));
v___x_120_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_121_ = l_Lean_Name_append(v___x_120_, v_cls_119_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7));
v___x_124_ = l_Lean_stringToMessageData(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_nat_to_int(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object* v_a_127_, lean_object* v_x_128_, lean_object* v_c_u2081_129_, lean_object* v_b_130_, lean_object* v_c_u2082_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v___y_144_; lean_object* v___y_149_; lean_object* v_p_202_; lean_object* v_p_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_p_202_ = lean_ctor_get(v_c_u2081_129_, 0);
v_p_203_ = lean_ctor_get(v_c_u2082_131_, 0);
v___x_204_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_205_ = lean_int_dec_le(v___x_204_, v_a_127_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
lean_inc_ref(v_p_202_);
v___x_206_ = l_Int_Internal_Linear_Poly_mul(v_p_202_, v_b_130_);
v___x_207_ = lean_int_neg(v_a_127_);
lean_inc_ref(v_p_203_);
v___x_208_ = l_Int_Internal_Linear_Poly_mul(v_p_203_, v___x_207_);
lean_dec(v___x_207_);
v___x_209_ = l_Int_Internal_Linear_Poly_combine(v___x_206_, v___x_208_);
v___y_149_ = v___x_209_;
goto v___jp_148_;
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
lean_inc_ref(v_p_203_);
v___x_210_ = l_Int_Internal_Linear_Poly_mul(v_p_203_, v_a_127_);
v___x_211_ = lean_int_neg(v_b_130_);
lean_inc_ref(v_p_202_);
v___x_212_ = l_Int_Internal_Linear_Poly_mul(v_p_202_, v___x_211_);
lean_dec(v___x_211_);
v___x_213_ = l_Int_Internal_Linear_Poly_combine(v___x_210_, v___x_212_);
v___y_149_ = v___x_213_;
goto v___jp_148_;
}
v___jp_143_:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_145_, 0, v_x_128_);
lean_ctor_set(v___x_145_, 1, v_c_u2081_129_);
lean_ctor_set(v___x_145_, 2, v_c_u2082_131_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___y_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
v___jp_148_:
{
lean_object* v_toCold_150_; lean_object* v_options_151_; uint8_t v_hasTrace_152_; 
v_toCold_150_ = lean_ctor_get(v___y_140_, 0);
v_options_151_ = lean_ctor_get(v_toCold_150_, 2);
v_hasTrace_152_ = lean_ctor_get_uint8(v_options_151_, sizeof(void*)*1);
if (v_hasTrace_152_ == 0)
{
v___y_144_ = v___y_149_;
goto v___jp_143_;
}
else
{
lean_object* v_inheritedTraceOptions_153_; lean_object* v_cls_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_inheritedTraceOptions_153_ = lean_ctor_get(v_toCold_150_, 11);
v_cls_154_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3));
v___x_155_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_156_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_153_, v_options_151_, v___x_155_);
if (v___x_156_ == 0)
{
v___y_144_ = v___y_149_;
goto v___jp_143_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_128_, v___y_132_, v___y_140_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; lean_object* v___x_159_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
lean_inc_ref(v_c_u2081_129_);
v___x_159_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_u2081_129_, v___y_132_, v___y_140_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
lean_inc_ref(v_c_u2082_131_);
v___x_161_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_131_, v___y_132_, v___y_140_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref_known(v___x_161_, 1);
v___x_163_ = l_Lean_MessageData_ofExpr(v_a_158_);
v___x_164_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8);
v___x_165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v_a_160_);
v___x_167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_164_);
v___x_168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v_a_162_);
v___x_169_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_154_, v___x_168_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_dec_ref_known(v___x_169_, 1);
v___y_144_ = v___y_149_;
goto v___jp_143_;
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec_ref(v___y_149_);
lean_dec_ref(v_c_u2082_131_);
lean_dec_ref(v_c_u2081_129_);
lean_dec(v_x_128_);
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec(v_a_160_);
lean_dec(v_a_158_);
lean_dec_ref(v___y_149_);
lean_dec_ref(v_c_u2082_131_);
lean_dec_ref(v_c_u2081_129_);
lean_dec(v_x_128_);
v_a_178_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_161_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_161_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_a_158_);
lean_dec_ref(v___y_149_);
lean_dec_ref(v_c_u2082_131_);
lean_dec_ref(v_c_u2081_129_);
lean_dec(v_x_128_);
v_a_186_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_159_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_159_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec_ref(v___y_149_);
lean_dec_ref(v_c_u2082_131_);
lean_dec_ref(v_c_u2081_129_);
lean_dec(v_x_128_);
v_a_194_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_157_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_157_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object* v_a_214_, lean_object* v_x_215_, lean_object* v_c_u2081_216_, lean_object* v_b_217_, lean_object* v_c_u2082_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v_a_214_, v_x_215_, v_c_u2081_216_, v_b_217_, v_c_u2082_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec(v___y_219_);
lean_dec(v_b_217_);
lean_dec(v_a_214_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object* v_cls_231_, lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_231_, v_msg_232_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object* v_cls_245_, lean_object* v_msg_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(v_cls_245_, v_msg_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec(v___y_247_);
return v_res_258_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = l_Lean_maxRecDepthErrorMessage;
v___x_265_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3);
v___x_267_ = l_Lean_MessageData_ofFormat(v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4);
v___x_269_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2));
v___x_270_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object* v_ref_271_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_ref_271_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object* v_ref_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object* v_00_u03b1_279_, lean_object* v_ref_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_280_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object* v_00_u03b1_293_, lean_object* v_ref_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(v_00_u03b1_293_, v_ref_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec(v___y_295_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object* v_c_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
lean_object* v_p_319_; lean_object* v_toCold_320_; lean_object* v_currRecDepth_321_; lean_object* v_ref_322_; uint8_t v_diag_323_; uint8_t v_suppressElabErrors_324_; lean_object* v_maxRecDepth_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v_p_319_ = lean_ctor_get(v_c_307_, 0);
v_toCold_320_ = lean_ctor_get(v___y_316_, 0);
lean_inc_ref(v_toCold_320_);
v_currRecDepth_321_ = lean_ctor_get(v___y_316_, 1);
lean_inc(v_currRecDepth_321_);
v_ref_322_ = lean_ctor_get(v___y_316_, 2);
lean_inc(v_ref_322_);
v_diag_323_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*3);
v_suppressElabErrors_324_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_316_);
v_maxRecDepth_356_ = lean_ctor_get(v_toCold_320_, 3);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_nat_dec_eq(v_maxRecDepth_356_, v___x_357_);
if (v___x_358_ == 0)
{
uint8_t v___x_359_; 
v___x_359_ = lean_nat_dec_eq(v_currRecDepth_321_, v_maxRecDepth_356_);
if (v___x_359_ == 0)
{
goto v___jp_325_;
}
else
{
lean_object* v___x_360_; 
lean_dec(v_currRecDepth_321_);
lean_dec_ref(v_toCold_320_);
lean_dec_ref(v_c_307_);
v___x_360_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_322_);
return v___x_360_;
}
}
else
{
goto v___jp_325_;
}
v___jp_325_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_add(v_currRecDepth_321_, v___x_326_);
lean_dec(v_currRecDepth_321_);
v___x_328_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_328_, 0, v_toCold_320_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
lean_ctor_set(v___x_328_, 2, v_ref_322_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*3, v_diag_323_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*3 + 1, v_suppressElabErrors_324_);
lean_inc_ref(v_p_319_);
v___x_329_ = l_Int_Internal_Linear_Poly_findVarToSubst___redArg(v_p_319_, v___y_308_, v___x_328_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_347_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_347_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_347_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_347_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
if (lean_obj_tag(v_a_330_) == 1)
{
lean_object* v_val_334_; lean_object* v_snd_335_; lean_object* v_snd_336_; lean_object* v_fst_337_; lean_object* v_fst_338_; lean_object* v_p_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
lean_del_object(v___x_332_);
v_val_334_ = lean_ctor_get(v_a_330_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v_a_330_, 1);
v_snd_335_ = lean_ctor_get(v_val_334_, 1);
lean_inc(v_snd_335_);
v_snd_336_ = lean_ctor_get(v_snd_335_, 1);
lean_inc(v_snd_336_);
v_fst_337_ = lean_ctor_get(v_val_334_, 0);
lean_inc(v_fst_337_);
lean_dec(v_val_334_);
v_fst_338_ = lean_ctor_get(v_snd_335_, 0);
lean_inc(v_fst_338_);
lean_dec(v_snd_335_);
v_p_339_ = lean_ctor_get(v_snd_336_, 0);
v___x_340_ = l_Int_Internal_Linear_Poly_coeff(v_p_339_, v_fst_338_);
v___x_341_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v___x_340_, v_fst_338_, v_snd_336_, v_fst_337_, v_c_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_, v___x_328_, v___y_317_);
lean_dec(v_fst_337_);
lean_dec(v___x_340_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
lean_dec_ref_known(v___x_341_, 1);
v_c_307_ = v_a_342_;
v___y_316_ = v___x_328_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_328_, 3);
return v___x_341_;
}
}
else
{
lean_object* v___x_345_; 
lean_dec(v_a_330_);
lean_dec_ref_known(v___x_328_, 3);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v_c_307_);
v___x_345_ = v___x_332_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_c_307_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref_known(v___x_328_, 3);
lean_dec_ref(v_c_307_);
v_a_348_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_329_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_329_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object* v_c_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v_c_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec(v___y_362_);
return v_res_373_;
}
}
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isNegEq(lean_object* v_p_u2081_374_, lean_object* v_p_u2082_375_){
_start:
{
if (lean_obj_tag(v_p_u2081_374_) == 0)
{
if (lean_obj_tag(v_p_u2082_375_) == 0)
{
lean_object* v_k_376_; lean_object* v_k_377_; lean_object* v___x_378_; uint8_t v___x_379_; 
v_k_376_ = lean_ctor_get(v_p_u2081_374_, 0);
v_k_377_ = lean_ctor_get(v_p_u2082_375_, 0);
v___x_378_ = lean_int_neg(v_k_377_);
v___x_379_ = lean_int_dec_eq(v_k_376_, v___x_378_);
lean_dec(v___x_378_);
return v___x_379_;
}
else
{
uint8_t v___x_380_; 
v___x_380_ = 0;
return v___x_380_;
}
}
else
{
if (lean_obj_tag(v_p_u2082_375_) == 1)
{
lean_object* v_k_381_; lean_object* v_v_382_; lean_object* v_p_383_; lean_object* v_k_384_; lean_object* v_v_385_; lean_object* v_p_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_k_381_ = lean_ctor_get(v_p_u2081_374_, 0);
v_v_382_ = lean_ctor_get(v_p_u2081_374_, 1);
v_p_383_ = lean_ctor_get(v_p_u2081_374_, 2);
v_k_384_ = lean_ctor_get(v_p_u2082_375_, 0);
v_v_385_ = lean_ctor_get(v_p_u2082_375_, 1);
v_p_386_ = lean_ctor_get(v_p_u2082_375_, 2);
v___x_387_ = lean_int_neg(v_k_384_);
v___x_388_ = lean_int_dec_eq(v_k_381_, v___x_387_);
lean_dec(v___x_387_);
if (v___x_388_ == 0)
{
return v___x_388_;
}
else
{
uint8_t v___x_389_; 
v___x_389_ = lean_nat_dec_eq(v_v_382_, v_v_385_);
if (v___x_389_ == 0)
{
return v___x_389_;
}
else
{
v_p_u2081_374_ = v_p_383_;
v_p_u2082_375_ = v_p_386_;
goto _start;
}
}
}
else
{
uint8_t v___x_391_; 
v___x_391_ = 0;
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNegEq___boxed(lean_object* v_p_u2081_392_, lean_object* v_p_u2082_393_){
_start:
{
uint8_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_u2081_392_, v_p_u2082_393_);
lean_dec_ref(v_p_u2082_393_);
lean_dec_ref(v_p_u2081_392_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object* v_c_396_, lean_object* v_as_397_, size_t v_i_398_, size_t v_stop_399_, lean_object* v_b_400_){
_start:
{
lean_object* v___y_402_; uint8_t v___x_406_; 
v___x_406_ = lean_usize_dec_eq(v_i_398_, v_stop_399_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v_p_408_; lean_object* v_p_409_; uint8_t v___x_410_; 
v___x_407_ = lean_array_uget_borrowed(v_as_397_, v_i_398_);
v_p_408_ = lean_ctor_get(v___x_407_, 0);
v_p_409_ = lean_ctor_get(v_c_396_, 0);
v___x_410_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_408_, v_p_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
lean_inc(v___x_407_);
v___x_411_ = l_Lean_PersistentArray_push___redArg(v_b_400_, v___x_407_);
v___y_402_ = v___x_411_;
goto v___jp_401_;
}
else
{
v___y_402_ = v_b_400_;
goto v___jp_401_;
}
}
else
{
return v_b_400_;
}
v___jp_401_:
{
size_t v___x_403_; size_t v___x_404_; 
v___x_403_ = ((size_t)1ULL);
v___x_404_ = lean_usize_add(v_i_398_, v___x_403_);
v_i_398_ = v___x_404_;
v_b_400_ = v___y_402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object* v_c_412_, lean_object* v_as_413_, lean_object* v_i_414_, lean_object* v_stop_415_, lean_object* v_b_416_){
_start:
{
size_t v_i_boxed_417_; size_t v_stop_boxed_418_; lean_object* v_res_419_; 
v_i_boxed_417_ = lean_unbox_usize(v_i_414_);
lean_dec(v_i_414_);
v_stop_boxed_418_ = lean_unbox_usize(v_stop_415_);
lean_dec(v_stop_415_);
v_res_419_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_412_, v_as_413_, v_i_boxed_417_, v_stop_boxed_418_, v_b_416_);
lean_dec_ref(v_as_413_);
lean_dec_ref(v_c_412_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object* v_c_420_, lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_421_) == 0)
{
lean_object* v_cs_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_cs_423_ = lean_ctor_get(v_x_421_, 0);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_array_get_size(v_cs_423_);
v___x_426_ = lean_nat_dec_lt(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
return v_x_422_;
}
else
{
size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; 
v___x_427_ = ((size_t)0ULL);
v___x_428_ = lean_usize_of_nat(v___x_425_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_420_, v_cs_423_, v___x_427_, v___x_428_, v_x_422_);
return v___x_429_;
}
}
else
{
lean_object* v_vs_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_vs_430_ = lean_ctor_get(v_x_421_, 0);
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = lean_array_get_size(v_vs_430_);
v___x_433_ = lean_nat_dec_lt(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
return v_x_422_;
}
else
{
size_t v___x_434_; size_t v___x_435_; lean_object* v___x_436_; 
v___x_434_ = ((size_t)0ULL);
v___x_435_ = lean_usize_of_nat(v___x_432_);
v___x_436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_420_, v_vs_430_, v___x_434_, v___x_435_, v_x_422_);
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object* v_c_437_, lean_object* v_as_438_, size_t v_i_439_, size_t v_stop_440_, lean_object* v_b_441_){
_start:
{
uint8_t v___x_442_; 
v___x_442_ = lean_usize_dec_eq(v_i_439_, v_stop_440_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; size_t v___x_445_; size_t v___x_446_; 
v___x_443_ = lean_array_uget_borrowed(v_as_438_, v_i_439_);
v___x_444_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_437_, v___x_443_, v_b_441_);
v___x_445_ = ((size_t)1ULL);
v___x_446_ = lean_usize_add(v_i_439_, v___x_445_);
v_i_439_ = v___x_446_;
v_b_441_ = v___x_444_;
goto _start;
}
else
{
return v_b_441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_c_448_, lean_object* v_as_449_, lean_object* v_i_450_, lean_object* v_stop_451_, lean_object* v_b_452_){
_start:
{
size_t v_i_boxed_453_; size_t v_stop_boxed_454_; lean_object* v_res_455_; 
v_i_boxed_453_ = lean_unbox_usize(v_i_450_);
lean_dec(v_i_450_);
v_stop_boxed_454_ = lean_unbox_usize(v_stop_451_);
lean_dec(v_stop_451_);
v_res_455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_448_, v_as_449_, v_i_boxed_453_, v_stop_boxed_454_, v_b_452_);
lean_dec_ref(v_as_449_);
lean_dec_ref(v_c_448_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object* v_c_456_, lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_456_, v_x_457_, v_x_458_);
lean_dec_ref(v_x_457_);
lean_dec_ref(v_c_456_);
return v_res_459_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object* v_c_461_, lean_object* v_x_462_, size_t v_x_463_, size_t v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_462_) == 0)
{
lean_object* v_cs_466_; lean_object* v___x_467_; size_t v___x_468_; lean_object* v_j_469_; lean_object* v___x_470_; size_t v___x_471_; size_t v___x_472_; size_t v___x_473_; size_t v___x_474_; size_t v___x_475_; size_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_cs_466_ = lean_ctor_get(v_x_462_, 0);
v___x_467_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_468_ = lean_usize_shift_right(v_x_463_, v_x_464_);
v_j_469_ = lean_usize_to_nat(v___x_468_);
v___x_470_ = lean_array_get_borrowed(v___x_467_, v_cs_466_, v_j_469_);
v___x_471_ = ((size_t)1ULL);
v___x_472_ = lean_usize_shift_left(v___x_471_, v_x_464_);
v___x_473_ = lean_usize_sub(v___x_472_, v___x_471_);
v___x_474_ = lean_usize_land(v_x_463_, v___x_473_);
v___x_475_ = ((size_t)5ULL);
v___x_476_ = lean_usize_sub(v_x_464_, v___x_475_);
v___x_477_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_461_, v___x_470_, v___x_474_, v___x_476_, v_x_465_);
v___x_478_ = lean_unsigned_to_nat(1u);
v___x_479_ = lean_nat_add(v_j_469_, v___x_478_);
lean_dec(v_j_469_);
v___x_480_ = lean_array_get_size(v_cs_466_);
v___x_481_ = lean_nat_dec_lt(v___x_479_, v___x_480_);
if (v___x_481_ == 0)
{
lean_dec(v___x_479_);
return v___x_477_;
}
else
{
size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; 
v___x_482_ = lean_usize_of_nat(v___x_479_);
lean_dec(v___x_479_);
v___x_483_ = lean_usize_of_nat(v___x_480_);
v___x_484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_461_, v_cs_466_, v___x_482_, v___x_483_, v___x_477_);
return v___x_484_;
}
}
else
{
lean_object* v_vs_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_vs_485_ = lean_ctor_get(v_x_462_, 0);
v___x_486_ = lean_usize_to_nat(v_x_463_);
v___x_487_ = lean_array_get_size(v_vs_485_);
v___x_488_ = lean_nat_dec_lt(v___x_486_, v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v___x_486_);
return v_x_465_;
}
else
{
size_t v___x_489_; size_t v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_usize_of_nat(v___x_486_);
lean_dec(v___x_486_);
v___x_490_ = lean_usize_of_nat(v___x_487_);
v___x_491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_461_, v_vs_485_, v___x_489_, v___x_490_, v_x_465_);
return v___x_491_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object* v_c_492_, lean_object* v_x_493_, lean_object* v_x_494_, lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
size_t v_x_1570__boxed_497_; size_t v_x_1571__boxed_498_; lean_object* v_res_499_; 
v_x_1570__boxed_497_ = lean_unbox_usize(v_x_494_);
lean_dec(v_x_494_);
v_x_1571__boxed_498_ = lean_unbox_usize(v_x_495_);
lean_dec(v_x_495_);
v_res_499_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_492_, v_x_493_, v_x_1570__boxed_497_, v_x_1571__boxed_498_, v_x_496_);
lean_dec_ref(v_x_493_);
lean_dec_ref(v_c_492_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object* v_c_500_, lean_object* v_t_501_, lean_object* v_init_502_, lean_object* v_start_503_){
_start:
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = lean_unsigned_to_nat(0u);
v___x_505_ = lean_nat_dec_eq(v_start_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v_root_506_; lean_object* v_tail_507_; size_t v_shift_508_; lean_object* v_tailOff_509_; uint8_t v___x_510_; 
v_root_506_ = lean_ctor_get(v_t_501_, 0);
v_tail_507_ = lean_ctor_get(v_t_501_, 1);
v_shift_508_ = lean_ctor_get_usize(v_t_501_, 4);
v_tailOff_509_ = lean_ctor_get(v_t_501_, 3);
v___x_510_ = lean_nat_dec_le(v_tailOff_509_, v_start_503_);
if (v___x_510_ == 0)
{
size_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_511_ = lean_usize_of_nat(v_start_503_);
v___x_512_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_500_, v_root_506_, v___x_511_, v_shift_508_, v_init_502_);
v___x_513_ = lean_array_get_size(v_tail_507_);
v___x_514_ = lean_nat_dec_lt(v___x_504_, v___x_513_);
if (v___x_514_ == 0)
{
return v___x_512_;
}
else
{
size_t v___x_515_; size_t v___x_516_; lean_object* v___x_517_; 
v___x_515_ = ((size_t)0ULL);
v___x_516_ = lean_usize_of_nat(v___x_513_);
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_500_, v_tail_507_, v___x_515_, v___x_516_, v___x_512_);
return v___x_517_;
}
}
else
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_518_ = lean_nat_sub(v_start_503_, v_tailOff_509_);
v___x_519_ = lean_array_get_size(v_tail_507_);
v___x_520_ = lean_nat_dec_lt(v___x_518_, v___x_519_);
if (v___x_520_ == 0)
{
lean_dec(v___x_518_);
return v_init_502_;
}
else
{
size_t v___x_521_; size_t v___x_522_; lean_object* v___x_523_; 
v___x_521_ = lean_usize_of_nat(v___x_518_);
lean_dec(v___x_518_);
v___x_522_ = lean_usize_of_nat(v___x_519_);
v___x_523_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_500_, v_tail_507_, v___x_521_, v___x_522_, v_init_502_);
return v___x_523_;
}
}
}
else
{
lean_object* v_root_524_; lean_object* v_tail_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v_root_524_ = lean_ctor_get(v_t_501_, 0);
v_tail_525_ = lean_ctor_get(v_t_501_, 1);
v___x_526_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_500_, v_root_524_, v_init_502_);
v___x_527_ = lean_array_get_size(v_tail_525_);
v___x_528_ = lean_nat_dec_lt(v___x_504_, v___x_527_);
if (v___x_528_ == 0)
{
return v___x_526_;
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = ((size_t)0ULL);
v___x_530_ = lean_usize_of_nat(v___x_527_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_500_, v_tail_525_, v___x_529_, v___x_530_, v___x_526_);
return v___x_531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object* v_c_532_, lean_object* v_t_533_, lean_object* v_init_534_, lean_object* v_start_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_532_, v_t_533_, v_init_534_, v_start_535_);
lean_dec(v_start_535_);
lean_dec_ref(v_t_533_);
lean_dec_ref(v_c_532_);
return v_res_536_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_unsigned_to_nat(32u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_540_ = ((size_t)5ULL);
v___x_541_ = lean_unsigned_to_nat(0u);
v___x_542_ = lean_unsigned_to_nat(32u);
v___x_543_ = lean_mk_empty_array_with_capacity(v___x_542_);
v___x_544_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0);
v___x_545_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_545_, 0, v___x_544_);
lean_ctor_set(v___x_545_, 1, v___x_543_);
lean_ctor_set(v___x_545_, 2, v___x_541_);
lean_ctor_set(v___x_545_, 3, v___x_541_);
lean_ctor_set_usize(v___x_545_, 4, v___x_540_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object* v_c_546_, lean_object* v_x_547_, size_t v_x_548_, size_t v_x_549_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_cs_550_; size_t v_j_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v_cs_550_ = lean_ctor_get(v_x_547_, 0);
v_j_551_ = lean_usize_shift_right(v_x_548_, v_x_549_);
v___x_552_ = lean_usize_to_nat(v_j_551_);
v___x_553_ = lean_array_get_size(v_cs_550_);
v___x_554_ = lean_nat_dec_lt(v___x_552_, v___x_553_);
if (v___x_554_ == 0)
{
lean_dec(v___x_552_);
return v_x_547_;
}
else
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_572_; 
lean_inc_ref(v_cs_550_);
v_isSharedCheck_572_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v_x_547_, 0);
lean_dec(v_unused_573_);
v___x_556_ = v_x_547_;
v_isShared_557_ = v_isSharedCheck_572_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_x_547_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_572_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
size_t v___x_558_; size_t v___x_559_; size_t v___x_560_; size_t v_i_561_; size_t v___x_562_; size_t v_shift_563_; lean_object* v_v_564_; lean_object* v___x_565_; lean_object* v_xs_x27_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_558_ = ((size_t)1ULL);
v___x_559_ = lean_usize_shift_left(v___x_558_, v_x_549_);
v___x_560_ = lean_usize_sub(v___x_559_, v___x_558_);
v_i_561_ = lean_usize_land(v_x_548_, v___x_560_);
v___x_562_ = ((size_t)5ULL);
v_shift_563_ = lean_usize_sub(v_x_549_, v___x_562_);
v_v_564_ = lean_array_fget(v_cs_550_, v___x_552_);
v___x_565_ = lean_box(0);
v_xs_x27_566_ = lean_array_fset(v_cs_550_, v___x_552_, v___x_565_);
v___x_567_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_546_, v_v_564_, v_i_561_, v_shift_563_);
v___x_568_ = lean_array_fset(v_xs_x27_566_, v___x_552_, v___x_567_);
lean_dec(v___x_552_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_568_);
v___x_570_ = v___x_556_;
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
else
{
lean_object* v_vs_574_; lean_object* v___x_575_; lean_object* v___x_576_; uint8_t v___x_577_; 
v_vs_574_ = lean_ctor_get(v_x_547_, 0);
v___x_575_ = lean_usize_to_nat(v_x_548_);
v___x_576_ = lean_array_get_size(v_vs_574_);
v___x_577_ = lean_nat_dec_lt(v___x_575_, v___x_576_);
if (v___x_577_ == 0)
{
lean_dec(v___x_575_);
return v_x_547_;
}
else
{
lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_591_; 
lean_inc_ref(v_vs_574_);
v_isSharedCheck_591_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_591_ == 0)
{
lean_object* v_unused_592_; 
v_unused_592_ = lean_ctor_get(v_x_547_, 0);
lean_dec(v_unused_592_);
v___x_579_ = v_x_547_;
v_isShared_580_ = v_isSharedCheck_591_;
goto v_resetjp_578_;
}
else
{
lean_dec(v_x_547_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_591_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v_v_581_; lean_object* v___x_582_; lean_object* v_xs_x27_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_589_; 
v_v_581_ = lean_array_fget(v_vs_574_, v___x_575_);
v___x_582_ = lean_box(0);
v_xs_x27_583_ = lean_array_fset(v_vs_574_, v___x_575_, v___x_582_);
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_586_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_546_, v_v_581_, v___x_585_, v___x_584_);
lean_dec(v_v_581_);
v___x_587_ = lean_array_fset(v_xs_x27_583_, v___x_575_, v___x_586_);
lean_dec(v___x_575_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_587_);
v___x_589_ = v___x_579_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object* v_c_593_, lean_object* v_x_594_, lean_object* v_x_595_, lean_object* v_x_596_){
_start:
{
size_t v_x_1697__boxed_597_; size_t v_x_1698__boxed_598_; lean_object* v_res_599_; 
v_x_1697__boxed_597_ = lean_unbox_usize(v_x_595_);
lean_dec(v_x_595_);
v_x_1698__boxed_598_ = lean_unbox_usize(v_x_596_);
lean_dec(v_x_596_);
v_res_599_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_593_, v_x_594_, v_x_1697__boxed_597_, v_x_1698__boxed_598_);
lean_dec_ref(v_c_593_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object* v_c_600_, lean_object* v_t_601_, lean_object* v_i_602_){
_start:
{
lean_object* v_root_603_; lean_object* v_tail_604_; lean_object* v_size_605_; size_t v_shift_606_; lean_object* v_tailOff_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_635_; 
v_root_603_ = lean_ctor_get(v_t_601_, 0);
v_tail_604_ = lean_ctor_get(v_t_601_, 1);
v_size_605_ = lean_ctor_get(v_t_601_, 2);
v_shift_606_ = lean_ctor_get_usize(v_t_601_, 4);
v_tailOff_607_ = lean_ctor_get(v_t_601_, 3);
v_isSharedCheck_635_ = !lean_is_exclusive(v_t_601_);
if (v_isSharedCheck_635_ == 0)
{
v___x_609_ = v_t_601_;
v_isShared_610_ = v_isSharedCheck_635_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_tailOff_607_);
lean_inc(v_size_605_);
lean_inc(v_tail_604_);
lean_inc(v_root_603_);
lean_dec(v_t_601_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_635_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
uint8_t v___x_611_; 
v___x_611_ = lean_nat_dec_le(v_tailOff_607_, v_i_602_);
if (v___x_611_ == 0)
{
size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_612_ = lean_usize_of_nat(v_i_602_);
v___x_613_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_600_, v_root_603_, v___x_612_, v_shift_606_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v___x_613_);
v___x_615_ = v___x_609_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_tail_604_);
lean_ctor_set(v_reuseFailAlloc_616_, 2, v_size_605_);
lean_ctor_set(v_reuseFailAlloc_616_, 3, v_tailOff_607_);
lean_ctor_set_usize(v_reuseFailAlloc_616_, 4, v_shift_606_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_617_ = lean_nat_sub(v_i_602_, v_tailOff_607_);
v___x_618_ = lean_array_get_size(v_tail_604_);
v___x_619_ = lean_nat_dec_lt(v___x_617_, v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_621_; 
lean_dec(v___x_617_);
if (v_isShared_610_ == 0)
{
v___x_621_ = v___x_609_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_root_603_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_tail_604_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v_size_605_);
lean_ctor_set(v_reuseFailAlloc_622_, 3, v_tailOff_607_);
lean_ctor_set_usize(v_reuseFailAlloc_622_, 4, v_shift_606_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v_v_623_; lean_object* v___x_624_; lean_object* v_xs_x27_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v_v_623_ = lean_array_fget(v_tail_604_, v___x_617_);
v___x_624_ = lean_box(0);
v_xs_x27_625_ = lean_array_fset(v_tail_604_, v___x_617_, v___x_624_);
v___x_626_ = lean_unsigned_to_nat(32u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
lean_dec_ref(v___x_627_);
v___x_628_ = lean_unsigned_to_nat(0u);
v___x_629_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_630_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_600_, v_v_623_, v___x_629_, v___x_628_);
lean_dec(v_v_623_);
v___x_631_ = lean_array_fset(v_xs_x27_625_, v___x_617_, v___x_630_);
lean_dec(v___x_617_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___x_631_);
v___x_633_ = v___x_609_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_root_603_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v_size_605_);
lean_ctor_set(v_reuseFailAlloc_634_, 3, v_tailOff_607_);
lean_ctor_set_usize(v_reuseFailAlloc_634_, 4, v_shift_606_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object* v_c_636_, lean_object* v_t_637_, lean_object* v_i_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_636_, v_t_637_, v_i_638_);
lean_dec(v_i_638_);
lean_dec_ref(v_c_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object* v_c_640_, lean_object* v_v_641_, lean_object* v_s_642_){
_start:
{
lean_object* v_vars_643_; lean_object* v_varMap_644_; lean_object* v_vars_x27_645_; lean_object* v_varMap_x27_646_; lean_object* v_natToIntMap_647_; lean_object* v_natDef_648_; lean_object* v_dvds_649_; lean_object* v_lowers_650_; lean_object* v_uppers_651_; lean_object* v_diseqs_652_; lean_object* v_elimEqs_653_; lean_object* v_elimStack_654_; lean_object* v_occurs_655_; lean_object* v_assignment_656_; lean_object* v_nextCnstrId_657_; uint8_t v_caseSplits_658_; lean_object* v_steps_659_; lean_object* v_conflict_x3f_660_; lean_object* v_diseqSplits_661_; lean_object* v_divMod_662_; uint8_t v_usedCommRing_663_; lean_object* v_nonlinearOccs_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_672_; 
v_vars_643_ = lean_ctor_get(v_s_642_, 0);
v_varMap_644_ = lean_ctor_get(v_s_642_, 1);
v_vars_x27_645_ = lean_ctor_get(v_s_642_, 2);
v_varMap_x27_646_ = lean_ctor_get(v_s_642_, 3);
v_natToIntMap_647_ = lean_ctor_get(v_s_642_, 4);
v_natDef_648_ = lean_ctor_get(v_s_642_, 5);
v_dvds_649_ = lean_ctor_get(v_s_642_, 6);
v_lowers_650_ = lean_ctor_get(v_s_642_, 7);
v_uppers_651_ = lean_ctor_get(v_s_642_, 8);
v_diseqs_652_ = lean_ctor_get(v_s_642_, 9);
v_elimEqs_653_ = lean_ctor_get(v_s_642_, 10);
v_elimStack_654_ = lean_ctor_get(v_s_642_, 11);
v_occurs_655_ = lean_ctor_get(v_s_642_, 12);
v_assignment_656_ = lean_ctor_get(v_s_642_, 13);
v_nextCnstrId_657_ = lean_ctor_get(v_s_642_, 14);
v_caseSplits_658_ = lean_ctor_get_uint8(v_s_642_, sizeof(void*)*20);
v_steps_659_ = lean_ctor_get(v_s_642_, 15);
v_conflict_x3f_660_ = lean_ctor_get(v_s_642_, 16);
v_diseqSplits_661_ = lean_ctor_get(v_s_642_, 17);
v_divMod_662_ = lean_ctor_get(v_s_642_, 18);
v_usedCommRing_663_ = lean_ctor_get_uint8(v_s_642_, sizeof(void*)*20 + 1);
v_nonlinearOccs_664_ = lean_ctor_get(v_s_642_, 19);
v_isSharedCheck_672_ = !lean_is_exclusive(v_s_642_);
if (v_isSharedCheck_672_ == 0)
{
v___x_666_ = v_s_642_;
v_isShared_667_ = v_isSharedCheck_672_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_nonlinearOccs_664_);
lean_inc(v_divMod_662_);
lean_inc(v_diseqSplits_661_);
lean_inc(v_conflict_x3f_660_);
lean_inc(v_steps_659_);
lean_inc(v_nextCnstrId_657_);
lean_inc(v_assignment_656_);
lean_inc(v_occurs_655_);
lean_inc(v_elimStack_654_);
lean_inc(v_elimEqs_653_);
lean_inc(v_diseqs_652_);
lean_inc(v_uppers_651_);
lean_inc(v_lowers_650_);
lean_inc(v_dvds_649_);
lean_inc(v_natDef_648_);
lean_inc(v_natToIntMap_647_);
lean_inc(v_varMap_x27_646_);
lean_inc(v_vars_x27_645_);
lean_inc(v_varMap_644_);
lean_inc(v_vars_643_);
lean_dec(v_s_642_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_672_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v___x_670_; 
v___x_668_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_640_, v_uppers_651_, v_v_641_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 8, v___x_668_);
v___x_670_ = v___x_666_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_vars_643_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_varMap_644_);
lean_ctor_set(v_reuseFailAlloc_671_, 2, v_vars_x27_645_);
lean_ctor_set(v_reuseFailAlloc_671_, 3, v_varMap_x27_646_);
lean_ctor_set(v_reuseFailAlloc_671_, 4, v_natToIntMap_647_);
lean_ctor_set(v_reuseFailAlloc_671_, 5, v_natDef_648_);
lean_ctor_set(v_reuseFailAlloc_671_, 6, v_dvds_649_);
lean_ctor_set(v_reuseFailAlloc_671_, 7, v_lowers_650_);
lean_ctor_set(v_reuseFailAlloc_671_, 8, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_671_, 9, v_diseqs_652_);
lean_ctor_set(v_reuseFailAlloc_671_, 10, v_elimEqs_653_);
lean_ctor_set(v_reuseFailAlloc_671_, 11, v_elimStack_654_);
lean_ctor_set(v_reuseFailAlloc_671_, 12, v_occurs_655_);
lean_ctor_set(v_reuseFailAlloc_671_, 13, v_assignment_656_);
lean_ctor_set(v_reuseFailAlloc_671_, 14, v_nextCnstrId_657_);
lean_ctor_set(v_reuseFailAlloc_671_, 15, v_steps_659_);
lean_ctor_set(v_reuseFailAlloc_671_, 16, v_conflict_x3f_660_);
lean_ctor_set(v_reuseFailAlloc_671_, 17, v_diseqSplits_661_);
lean_ctor_set(v_reuseFailAlloc_671_, 18, v_divMod_662_);
lean_ctor_set(v_reuseFailAlloc_671_, 19, v_nonlinearOccs_664_);
lean_ctor_set_uint8(v_reuseFailAlloc_671_, sizeof(void*)*20, v_caseSplits_658_);
lean_ctor_set_uint8(v_reuseFailAlloc_671_, sizeof(void*)*20 + 1, v_usedCommRing_663_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object* v_c_673_, lean_object* v_v_674_, lean_object* v_s_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(v_c_673_, v_v_674_, v_s_675_);
lean_dec(v_v_674_);
lean_dec_ref(v_c_673_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object* v_c_677_, lean_object* v_v_678_, lean_object* v_s_679_){
_start:
{
lean_object* v_vars_680_; lean_object* v_varMap_681_; lean_object* v_vars_x27_682_; lean_object* v_varMap_x27_683_; lean_object* v_natToIntMap_684_; lean_object* v_natDef_685_; lean_object* v_dvds_686_; lean_object* v_lowers_687_; lean_object* v_uppers_688_; lean_object* v_diseqs_689_; lean_object* v_elimEqs_690_; lean_object* v_elimStack_691_; lean_object* v_occurs_692_; lean_object* v_assignment_693_; lean_object* v_nextCnstrId_694_; uint8_t v_caseSplits_695_; lean_object* v_steps_696_; lean_object* v_conflict_x3f_697_; lean_object* v_diseqSplits_698_; lean_object* v_divMod_699_; uint8_t v_usedCommRing_700_; lean_object* v_nonlinearOccs_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_709_; 
v_vars_680_ = lean_ctor_get(v_s_679_, 0);
v_varMap_681_ = lean_ctor_get(v_s_679_, 1);
v_vars_x27_682_ = lean_ctor_get(v_s_679_, 2);
v_varMap_x27_683_ = lean_ctor_get(v_s_679_, 3);
v_natToIntMap_684_ = lean_ctor_get(v_s_679_, 4);
v_natDef_685_ = lean_ctor_get(v_s_679_, 5);
v_dvds_686_ = lean_ctor_get(v_s_679_, 6);
v_lowers_687_ = lean_ctor_get(v_s_679_, 7);
v_uppers_688_ = lean_ctor_get(v_s_679_, 8);
v_diseqs_689_ = lean_ctor_get(v_s_679_, 9);
v_elimEqs_690_ = lean_ctor_get(v_s_679_, 10);
v_elimStack_691_ = lean_ctor_get(v_s_679_, 11);
v_occurs_692_ = lean_ctor_get(v_s_679_, 12);
v_assignment_693_ = lean_ctor_get(v_s_679_, 13);
v_nextCnstrId_694_ = lean_ctor_get(v_s_679_, 14);
v_caseSplits_695_ = lean_ctor_get_uint8(v_s_679_, sizeof(void*)*20);
v_steps_696_ = lean_ctor_get(v_s_679_, 15);
v_conflict_x3f_697_ = lean_ctor_get(v_s_679_, 16);
v_diseqSplits_698_ = lean_ctor_get(v_s_679_, 17);
v_divMod_699_ = lean_ctor_get(v_s_679_, 18);
v_usedCommRing_700_ = lean_ctor_get_uint8(v_s_679_, sizeof(void*)*20 + 1);
v_nonlinearOccs_701_ = lean_ctor_get(v_s_679_, 19);
v_isSharedCheck_709_ = !lean_is_exclusive(v_s_679_);
if (v_isSharedCheck_709_ == 0)
{
v___x_703_ = v_s_679_;
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_nonlinearOccs_701_);
lean_inc(v_divMod_699_);
lean_inc(v_diseqSplits_698_);
lean_inc(v_conflict_x3f_697_);
lean_inc(v_steps_696_);
lean_inc(v_nextCnstrId_694_);
lean_inc(v_assignment_693_);
lean_inc(v_occurs_692_);
lean_inc(v_elimStack_691_);
lean_inc(v_elimEqs_690_);
lean_inc(v_diseqs_689_);
lean_inc(v_uppers_688_);
lean_inc(v_lowers_687_);
lean_inc(v_dvds_686_);
lean_inc(v_natDef_685_);
lean_inc(v_natToIntMap_684_);
lean_inc(v_varMap_x27_683_);
lean_inc(v_vars_x27_682_);
lean_inc(v_varMap_681_);
lean_inc(v_vars_680_);
lean_dec(v_s_679_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_677_, v_lowers_687_, v_v_678_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 7, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_vars_680_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_varMap_681_);
lean_ctor_set(v_reuseFailAlloc_708_, 2, v_vars_x27_682_);
lean_ctor_set(v_reuseFailAlloc_708_, 3, v_varMap_x27_683_);
lean_ctor_set(v_reuseFailAlloc_708_, 4, v_natToIntMap_684_);
lean_ctor_set(v_reuseFailAlloc_708_, 5, v_natDef_685_);
lean_ctor_set(v_reuseFailAlloc_708_, 6, v_dvds_686_);
lean_ctor_set(v_reuseFailAlloc_708_, 7, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_708_, 8, v_uppers_688_);
lean_ctor_set(v_reuseFailAlloc_708_, 9, v_diseqs_689_);
lean_ctor_set(v_reuseFailAlloc_708_, 10, v_elimEqs_690_);
lean_ctor_set(v_reuseFailAlloc_708_, 11, v_elimStack_691_);
lean_ctor_set(v_reuseFailAlloc_708_, 12, v_occurs_692_);
lean_ctor_set(v_reuseFailAlloc_708_, 13, v_assignment_693_);
lean_ctor_set(v_reuseFailAlloc_708_, 14, v_nextCnstrId_694_);
lean_ctor_set(v_reuseFailAlloc_708_, 15, v_steps_696_);
lean_ctor_set(v_reuseFailAlloc_708_, 16, v_conflict_x3f_697_);
lean_ctor_set(v_reuseFailAlloc_708_, 17, v_diseqSplits_698_);
lean_ctor_set(v_reuseFailAlloc_708_, 18, v_divMod_699_);
lean_ctor_set(v_reuseFailAlloc_708_, 19, v_nonlinearOccs_701_);
lean_ctor_set_uint8(v_reuseFailAlloc_708_, sizeof(void*)*20, v_caseSplits_695_);
lean_ctor_set_uint8(v_reuseFailAlloc_708_, sizeof(void*)*20 + 1, v_usedCommRing_700_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object* v_c_710_, lean_object* v_v_711_, lean_object* v_s_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(v_c_710_, v_v_711_, v_s_712_);
lean_dec(v_v_711_);
lean_dec_ref(v_c_710_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object* v_c_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_p_721_; 
v_p_721_ = lean_ctor_get(v_c_714_, 0);
if (lean_obj_tag(v_p_721_) == 1)
{
lean_object* v_k_722_; lean_object* v_v_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_k_722_ = lean_ctor_get(v_p_721_, 0);
v_v_723_ = lean_ctor_get(v_p_721_, 1);
lean_inc(v_v_723_);
v___x_724_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_725_ = lean_int_dec_lt(v_k_722_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___f_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___f_726_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_726_, 0, v_c_714_);
lean_closure_set(v___f_726_, 1, v_v_723_);
v___x_727_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_728_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_727_, v___f_726_, v___y_715_);
return v___x_728_;
}
else
{
lean_object* v___f_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___f_729_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_729_, 0, v_c_714_);
lean_closure_set(v___f_729_, 1, v_v_723_);
v___x_730_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_731_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_730_, v___f_729_, v___y_715_);
return v___x_731_;
}
}
else
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object* v_c_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object* v_c_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_741_, v___y_742_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object* v_c_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(v_c_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec(v___y_755_);
return v_res_766_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_780_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_781_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_782_ = l_Lean_Name_append(v___x_781_, v___x_780_);
return v___x_782_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6));
v___x_785_ = l_Lean_stringToMessageData(v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object* v_c_786_, lean_object* v_as_787_, size_t v_sz_788_, size_t v_i_789_, lean_object* v_b_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
uint8_t v___x_802_; 
v___x_802_ = lean_usize_dec_lt(v_i_789_, v_sz_788_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
lean_dec_ref(v_c_786_);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v_b_790_);
return v___x_803_;
}
else
{
lean_object* v_snd_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_892_; 
v_snd_804_ = lean_ctor_get(v_b_790_, 1);
v_isSharedCheck_892_ = !lean_is_exclusive(v_b_790_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v_b_790_, 0);
lean_dec(v_unused_893_);
v___x_806_ = v_b_790_;
v_isShared_807_ = v_isSharedCheck_892_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_snd_804_);
lean_dec(v_b_790_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_892_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_p_808_; lean_object* v_a_809_; lean_object* v_p_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_p_808_ = lean_ctor_get(v_c_786_, 0);
v_a_809_ = lean_array_uget_borrowed(v_as_787_, v_i_789_);
v_p_810_ = lean_ctor_get(v_a_809_, 0);
v___x_811_ = lean_box(0);
v___x_812_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_808_, v_p_810_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; size_t v___x_814_; size_t v___x_815_; 
lean_del_object(v___x_806_);
lean_dec(v_snd_804_);
v___x_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1));
v___x_814_ = ((size_t)1ULL);
v___x_815_ = lean_usize_add(v_i_789_, v___x_814_);
v_i_789_ = v___x_815_;
v_b_790_ = v___x_813_;
goto _start;
}
else
{
lean_object* v___x_817_; 
lean_inc_ref(v_p_808_);
lean_inc(v_a_809_);
v___x_817_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_809_, v___y_791_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_toCold_818_; lean_object* v_options_819_; lean_object* v_inheritedTraceOptions_820_; uint8_t v_hasTrace_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; 
lean_dec_ref_known(v___x_817_, 1);
v_toCold_818_ = lean_ctor_get(v___y_799_, 0);
v_options_819_ = lean_ctor_get(v_toCold_818_, 2);
v_inheritedTraceOptions_820_ = lean_ctor_get(v_toCold_818_, 11);
v_hasTrace_821_ = lean_ctor_get_uint8(v_options_819_, sizeof(void*)*1);
lean_inc(v_a_809_);
v___x_822_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_822_, 0, v_c_786_);
lean_ctor_set(v___x_822_, 1, v_a_809_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_p_808_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
if (v_hasTrace_821_ == 0)
{
v___y_825_ = v___y_791_;
v___y_826_ = v___y_792_;
v___y_827_ = v___y_793_;
v___y_828_ = v___y_794_;
v___y_829_ = v___y_795_;
v___y_830_ = v___y_796_;
v___y_831_ = v___y_797_;
v___y_832_ = v___y_798_;
v___y_833_ = v___y_799_;
v___y_834_ = v___y_800_;
goto v___jp_824_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v___x_860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_861_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_862_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_820_, v_options_819_, v___x_861_);
if (v___x_862_ == 0)
{
v___y_825_ = v___y_791_;
v___y_826_ = v___y_792_;
v___y_827_ = v___y_793_;
v___y_828_ = v___y_794_;
v___y_829_ = v___y_795_;
v___y_830_ = v___y_796_;
v___y_831_ = v___y_797_;
v___y_832_ = v___y_798_;
v___y_833_ = v___y_799_;
v___y_834_ = v___y_800_;
goto v___jp_824_;
}
else
{
lean_object* v___x_863_; 
lean_inc_ref(v___x_823_);
v___x_863_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_823_, v___y_791_, v___y_799_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
lean_ctor_set(v___x_866_, 1, v_a_864_);
v___x_867_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_860_, v___x_866_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_dec_ref_known(v___x_867_, 1);
v___y_825_ = v___y_791_;
v___y_826_ = v___y_792_;
v___y_827_ = v___y_793_;
v___y_828_ = v___y_794_;
v___y_829_ = v___y_795_;
v___y_830_ = v___y_796_;
v___y_831_ = v___y_797_;
v___y_832_ = v___y_798_;
v___y_833_ = v___y_799_;
v___y_834_ = v___y_800_;
goto v___jp_824_;
}
else
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref_known(v___x_823_, 2);
lean_del_object(v___x_806_);
lean_dec(v_snd_804_);
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref_known(v___x_823_, 2);
lean_del_object(v___x_806_);
lean_dec(v_snd_804_);
v_a_876_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_863_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_863_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
v___jp_824_:
{
lean_object* v___x_835_; 
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
lean_inc(v___y_832_);
lean_inc_ref(v___y_831_);
lean_inc(v___y_830_);
lean_inc_ref(v___y_829_);
lean_inc(v___y_828_);
lean_inc_ref(v___y_827_);
lean_inc(v___y_826_);
lean_inc(v___y_825_);
v___x_835_ = lean_grind_cutsat_assert_eq(v___x_823_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_850_; 
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v___x_835_, 0);
lean_dec(v_unused_851_);
v___x_837_ = v___x_835_;
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
else
{
lean_dec(v___x_835_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_839_ = lean_box(v___x_812_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 1, v___x_811_);
lean_ctor_set(v___x_806_, 0, v___x_840_);
v___x_842_ = v___x_806_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v___x_811_);
v___x_842_ = v_reuseFailAlloc_849_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
v___x_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v_snd_804_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_845_);
v___x_847_ = v___x_837_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_del_object(v___x_806_);
lean_dec(v_snd_804_);
v_a_852_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_835_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_835_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
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
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v_p_808_);
lean_del_object(v___x_806_);
lean_dec(v_snd_804_);
lean_dec_ref(v_c_786_);
v_a_884_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_817_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_817_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_c_894_, lean_object* v_as_895_, lean_object* v_sz_896_, lean_object* v_i_897_, lean_object* v_b_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
size_t v_sz_boxed_910_; size_t v_i_boxed_911_; lean_object* v_res_912_; 
v_sz_boxed_910_ = lean_unbox_usize(v_sz_896_);
lean_dec(v_sz_896_);
v_i_boxed_911_ = lean_unbox_usize(v_i_897_);
lean_dec(v_i_897_);
v_res_912_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v_c_894_, v_as_895_, v_sz_boxed_910_, v_i_boxed_911_, v_b_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v_as_895_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object* v_c_919_, lean_object* v_as_920_, size_t v_sz_921_, size_t v_i_922_, lean_object* v_b_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
uint8_t v___x_935_; 
v___x_935_ = lean_usize_dec_lt(v_i_922_, v_sz_921_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; 
lean_dec_ref(v_c_919_);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_b_923_);
return v___x_936_;
}
else
{
lean_object* v_snd_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_1025_; 
v_snd_937_ = lean_ctor_get(v_b_923_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_b_923_);
if (v_isSharedCheck_1025_ == 0)
{
lean_object* v_unused_1026_; 
v_unused_1026_ = lean_ctor_get(v_b_923_, 0);
lean_dec(v_unused_1026_);
v___x_939_ = v_b_923_;
v_isShared_940_ = v_isSharedCheck_1025_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_snd_937_);
lean_dec(v_b_923_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_1025_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_p_941_; lean_object* v_a_942_; lean_object* v_p_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v_p_941_ = lean_ctor_get(v_c_919_, 0);
v_a_942_ = lean_array_uget_borrowed(v_as_920_, v_i_922_);
v_p_943_ = lean_ctor_get(v_a_942_, 0);
v___x_944_ = lean_box(0);
v___x_945_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_941_, v_p_943_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; size_t v___x_947_; size_t v___x_948_; lean_object* v___x_949_; 
lean_del_object(v___x_939_);
lean_dec(v_snd_937_);
v___x_946_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1));
v___x_947_ = ((size_t)1ULL);
v___x_948_ = lean_usize_add(v_i_922_, v___x_947_);
v___x_949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v_c_919_, v_as_920_, v_sz_921_, v___x_948_, v___x_946_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_949_;
}
else
{
lean_object* v___x_950_; 
lean_inc_ref(v_p_941_);
lean_inc(v_a_942_);
v___x_950_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_942_, v___y_924_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_toCold_951_; lean_object* v_options_952_; lean_object* v_inheritedTraceOptions_953_; uint8_t v_hasTrace_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; 
lean_dec_ref_known(v___x_950_, 1);
v_toCold_951_ = lean_ctor_get(v___y_932_, 0);
v_options_952_ = lean_ctor_get(v_toCold_951_, 2);
v_inheritedTraceOptions_953_ = lean_ctor_get(v_toCold_951_, 11);
v_hasTrace_954_ = lean_ctor_get_uint8(v_options_952_, sizeof(void*)*1);
lean_inc(v_a_942_);
v___x_955_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_955_, 0, v_c_919_);
lean_ctor_set(v___x_955_, 1, v_a_942_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_p_941_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
if (v_hasTrace_954_ == 0)
{
v___y_958_ = v___y_924_;
v___y_959_ = v___y_925_;
v___y_960_ = v___y_926_;
v___y_961_ = v___y_927_;
v___y_962_ = v___y_928_;
v___y_963_ = v___y_929_;
v___y_964_ = v___y_930_;
v___y_965_ = v___y_931_;
v___y_966_ = v___y_932_;
v___y_967_ = v___y_933_;
goto v___jp_957_;
}
else
{
lean_object* v___x_993_; lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_994_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_995_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_953_, v_options_952_, v___x_994_);
if (v___x_995_ == 0)
{
v___y_958_ = v___y_924_;
v___y_959_ = v___y_925_;
v___y_960_ = v___y_926_;
v___y_961_ = v___y_927_;
v___y_962_ = v___y_928_;
v___y_963_ = v___y_929_;
v___y_964_ = v___y_930_;
v___y_965_ = v___y_931_;
v___y_966_ = v___y_932_;
v___y_967_ = v___y_933_;
goto v___jp_957_;
}
else
{
lean_object* v___x_996_; 
lean_inc_ref(v___x_956_);
v___x_996_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_956_, v___y_924_, v___y_932_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
v___x_998_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v_a_997_);
v___x_1000_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_993_, v___x_999_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_dec_ref_known(v___x_1000_, 1);
v___y_958_ = v___y_924_;
v___y_959_ = v___y_925_;
v___y_960_ = v___y_926_;
v___y_961_ = v___y_927_;
v___y_962_ = v___y_928_;
v___y_963_ = v___y_929_;
v___y_964_ = v___y_930_;
v___y_965_ = v___y_931_;
v___y_966_ = v___y_932_;
v___y_967_ = v___y_933_;
goto v___jp_957_;
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec_ref_known(v___x_956_, 2);
lean_del_object(v___x_939_);
lean_dec(v_snd_937_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
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
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec_ref_known(v___x_956_, 2);
lean_del_object(v___x_939_);
lean_dec(v_snd_937_);
v_a_1009_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_996_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_996_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
v___jp_957_:
{
lean_object* v___x_968_; 
lean_inc(v___y_967_);
lean_inc_ref(v___y_966_);
lean_inc(v___y_965_);
lean_inc_ref(v___y_964_);
lean_inc(v___y_963_);
lean_inc_ref(v___y_962_);
lean_inc(v___y_961_);
lean_inc_ref(v___y_960_);
lean_inc(v___y_959_);
lean_inc(v___y_958_);
v___x_968_ = lean_grind_cutsat_assert_eq(v___x_956_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_983_; 
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; 
v_unused_984_ = lean_ctor_get(v___x_968_, 0);
lean_dec(v_unused_984_);
v___x_970_ = v___x_968_;
v_isShared_971_ = v_isSharedCheck_983_;
goto v_resetjp_969_;
}
else
{
lean_dec(v___x_968_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_983_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_972_ = lean_box(v___x_945_);
v___x_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_944_);
lean_ctor_set(v___x_939_, 0, v___x_973_);
v___x_975_ = v___x_939_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v___x_944_);
v___x_975_ = v_reuseFailAlloc_982_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v_snd_937_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_978_);
v___x_980_ = v___x_970_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_del_object(v___x_939_);
lean_dec(v_snd_937_);
v_a_985_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_968_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_968_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref(v_p_941_);
lean_del_object(v___x_939_);
lean_dec(v_snd_937_);
lean_dec_ref(v_c_919_);
v_a_1017_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_950_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_950_);
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
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object* v_c_1027_, lean_object* v_as_1028_, lean_object* v_sz_1029_, lean_object* v_i_1030_, lean_object* v_b_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
size_t v_sz_boxed_1043_; size_t v_i_boxed_1044_; lean_object* v_res_1045_; 
v_sz_boxed_1043_ = lean_unbox_usize(v_sz_1029_);
lean_dec(v_sz_1029_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1030_);
lean_dec(v_i_1030_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v_c_1027_, v_as_1028_, v_sz_boxed_1043_, v_i_boxed_1044_, v_b_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v_as_1028_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object* v_init_1046_, lean_object* v_c_1047_, lean_object* v_n_1048_, lean_object* v_b_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
if (lean_obj_tag(v_n_1048_) == 0)
{
lean_object* v_cs_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; size_t v_sz_1064_; size_t v___x_1065_; lean_object* v___x_1066_; 
v_cs_1061_ = lean_ctor_get(v_n_1048_, 0);
v___x_1062_ = lean_box(0);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_b_1049_);
v_sz_1064_ = lean_array_size(v_cs_1061_);
v___x_1065_ = ((size_t)0ULL);
v___x_1066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1046_, v_c_1047_, v_cs_1061_, v_sz_1064_, v___x_1065_, v___x_1063_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1081_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1069_ = v___x_1066_;
v_isShared_1070_ = v_isSharedCheck_1081_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1066_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1081_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v_fst_1071_; 
v_fst_1071_ = lean_ctor_get(v_a_1067_, 0);
if (lean_obj_tag(v_fst_1071_) == 0)
{
lean_object* v_snd_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v_snd_1072_ = lean_ctor_get(v_a_1067_, 1);
lean_inc(v_snd_1072_);
lean_dec(v_a_1067_);
v___x_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_snd_1072_);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 0, v___x_1073_);
v___x_1075_ = v___x_1069_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
else
{
lean_object* v_val_1077_; lean_object* v___x_1079_; 
lean_inc_ref(v_fst_1071_);
lean_dec(v_a_1067_);
v_val_1077_ = lean_ctor_get(v_fst_1071_, 0);
lean_inc(v_val_1077_);
lean_dec_ref_known(v_fst_1071_, 1);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 0, v_val_1077_);
v___x_1079_ = v___x_1069_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_val_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
v_a_1082_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1066_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1066_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
else
{
lean_object* v_vs_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; size_t v_sz_1093_; size_t v___x_1094_; lean_object* v___x_1095_; 
v_vs_1090_ = lean_ctor_get(v_n_1048_, 0);
v___x_1091_ = lean_box(0);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v_b_1049_);
v_sz_1093_ = lean_array_size(v_vs_1090_);
v___x_1094_ = ((size_t)0ULL);
v___x_1095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v_c_1047_, v_vs_1090_, v_sz_1093_, v___x_1094_, v___x_1092_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1110_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1098_ = v___x_1095_;
v_isShared_1099_ = v_isSharedCheck_1110_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1095_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1110_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v_fst_1100_; 
v_fst_1100_ = lean_ctor_get(v_a_1096_, 0);
if (lean_obj_tag(v_fst_1100_) == 0)
{
lean_object* v_snd_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v_snd_1101_ = lean_ctor_get(v_a_1096_, 1);
lean_inc(v_snd_1101_);
lean_dec(v_a_1096_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v_snd_1101_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1102_);
v___x_1104_ = v___x_1098_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
else
{
lean_object* v_val_1106_; lean_object* v___x_1108_; 
lean_inc_ref(v_fst_1100_);
lean_dec(v_a_1096_);
v_val_1106_ = lean_ctor_get(v_fst_1100_, 0);
lean_inc(v_val_1106_);
lean_dec_ref_known(v_fst_1100_, 1);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v_val_1106_);
v___x_1108_ = v___x_1098_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_val_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_a_1111_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1095_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1095_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object* v_init_1119_, lean_object* v_c_1120_, lean_object* v_as_1121_, size_t v_sz_1122_, size_t v_i_1123_, lean_object* v_b_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
uint8_t v___x_1136_; 
v___x_1136_ = lean_usize_dec_lt(v_i_1123_, v_sz_1122_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; 
lean_dec_ref(v_c_1120_);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v_b_1124_);
return v___x_1137_;
}
else
{
lean_object* v_snd_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1172_; 
v_snd_1138_ = lean_ctor_get(v_b_1124_, 1);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_b_1124_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; 
v_unused_1173_ = lean_ctor_get(v_b_1124_, 0);
lean_dec(v_unused_1173_);
v___x_1140_ = v_b_1124_;
v_isShared_1141_ = v_isSharedCheck_1172_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_snd_1138_);
lean_dec(v_b_1124_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1172_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1142_; lean_object* v_a_1143_; lean_object* v___x_1144_; 
v___x_1142_ = lean_box(0);
v_a_1143_ = lean_array_uget_borrowed(v_as_1121_, v_i_1123_);
lean_inc(v_snd_1138_);
lean_inc_ref(v_c_1120_);
v___x_1144_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1119_, v_c_1120_, v_a_1143_, v_snd_1138_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1163_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1163_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1163_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
if (lean_obj_tag(v_a_1145_) == 0)
{
lean_object* v___x_1149_; lean_object* v___x_1151_; 
lean_dec_ref(v_c_1120_);
v___x_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_a_1145_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1149_);
v___x_1151_ = v___x_1140_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_snd_1138_);
v___x_1151_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
lean_object* v___x_1153_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1151_);
v___x_1153_ = v___x_1147_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; 
lean_del_object(v___x_1147_);
lean_dec(v_snd_1138_);
v_a_1156_ = lean_ctor_get(v_a_1145_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v_a_1145_, 1);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v_a_1156_);
lean_ctor_set(v___x_1140_, 0, v___x_1142_);
v___x_1158_ = v___x_1140_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v_a_1156_);
v___x_1158_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
size_t v___x_1159_; size_t v___x_1160_; 
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = lean_usize_add(v_i_1123_, v___x_1159_);
v_i_1123_ = v___x_1160_;
v_b_1124_ = v___x_1158_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_del_object(v___x_1140_);
lean_dec(v_snd_1138_);
lean_dec_ref(v_c_1120_);
v_a_1164_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1144_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1144_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_init_1174_ = _args[0];
lean_object* v_c_1175_ = _args[1];
lean_object* v_as_1176_ = _args[2];
lean_object* v_sz_1177_ = _args[3];
lean_object* v_i_1178_ = _args[4];
lean_object* v_b_1179_ = _args[5];
lean_object* v___y_1180_ = _args[6];
lean_object* v___y_1181_ = _args[7];
lean_object* v___y_1182_ = _args[8];
lean_object* v___y_1183_ = _args[9];
lean_object* v___y_1184_ = _args[10];
lean_object* v___y_1185_ = _args[11];
lean_object* v___y_1186_ = _args[12];
lean_object* v___y_1187_ = _args[13];
lean_object* v___y_1188_ = _args[14];
lean_object* v___y_1189_ = _args[15];
lean_object* v___y_1190_ = _args[16];
_start:
{
size_t v_sz_boxed_1191_; size_t v_i_boxed_1192_; lean_object* v_res_1193_; 
v_sz_boxed_1191_ = lean_unbox_usize(v_sz_1177_);
lean_dec(v_sz_1177_);
v_i_boxed_1192_ = lean_unbox_usize(v_i_1178_);
lean_dec(v_i_1178_);
v_res_1193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1174_, v_c_1175_, v_as_1176_, v_sz_boxed_1191_, v_i_boxed_1192_, v_b_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v_as_1176_);
lean_dec_ref(v_init_1174_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object* v_init_1194_, lean_object* v_c_1195_, lean_object* v_n_1196_, lean_object* v_b_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1194_, v_c_1195_, v_n_1196_, v_b_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v_n_1196_);
lean_dec_ref(v_init_1194_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object* v_c_1216_, lean_object* v_as_1217_, size_t v_sz_1218_, size_t v_i_1219_, lean_object* v_b_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
uint8_t v___x_1232_; 
v___x_1232_ = lean_usize_dec_lt(v_i_1219_, v_sz_1218_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; 
lean_dec_ref(v_c_1216_);
v___x_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1233_, 0, v_b_1220_);
return v___x_1233_;
}
else
{
lean_object* v_snd_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1321_; 
v_snd_1234_ = lean_ctor_get(v_b_1220_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_b_1220_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v_b_1220_, 0);
lean_dec(v_unused_1322_);
v___x_1236_ = v_b_1220_;
v_isShared_1237_ = v_isSharedCheck_1321_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_snd_1234_);
lean_dec(v_b_1220_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1321_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v_p_1238_; lean_object* v_a_1239_; lean_object* v_p_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v_p_1238_ = lean_ctor_get(v_c_1216_, 0);
v_a_1239_ = lean_array_uget_borrowed(v_as_1217_, v_i_1219_);
v_p_1240_ = lean_ctor_get(v_a_1239_, 0);
v___x_1241_ = lean_box(0);
v___x_1242_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1238_, v_p_1240_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; 
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
v___x_1243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1));
v___x_1244_ = ((size_t)1ULL);
v___x_1245_ = lean_usize_add(v_i_1219_, v___x_1244_);
v_i_1219_ = v___x_1245_;
v_b_1220_ = v___x_1243_;
goto _start;
}
else
{
lean_object* v___x_1247_; 
lean_inc_ref(v_p_1238_);
lean_inc(v_a_1239_);
v___x_1247_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1239_, v___y_1221_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_toCold_1248_; lean_object* v_options_1249_; lean_object* v_inheritedTraceOptions_1250_; uint8_t v_hasTrace_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; 
lean_dec_ref_known(v___x_1247_, 1);
v_toCold_1248_ = lean_ctor_get(v___y_1229_, 0);
v_options_1249_ = lean_ctor_get(v_toCold_1248_, 2);
v_inheritedTraceOptions_1250_ = lean_ctor_get(v_toCold_1248_, 11);
v_hasTrace_1251_ = lean_ctor_get_uint8(v_options_1249_, sizeof(void*)*1);
lean_inc(v_a_1239_);
v___x_1252_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1252_, 0, v_c_1216_);
lean_ctor_set(v___x_1252_, 1, v_a_1239_);
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_p_1238_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
if (v_hasTrace_1251_ == 0)
{
v___y_1255_ = v___y_1221_;
v___y_1256_ = v___y_1222_;
v___y_1257_ = v___y_1223_;
v___y_1258_ = v___y_1224_;
v___y_1259_ = v___y_1225_;
v___y_1260_ = v___y_1226_;
v___y_1261_ = v___y_1227_;
v___y_1262_ = v___y_1228_;
v___y_1263_ = v___y_1229_;
v___y_1264_ = v___y_1230_;
goto v___jp_1254_;
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1289_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1290_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_1291_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1250_, v_options_1249_, v___x_1290_);
if (v___x_1291_ == 0)
{
v___y_1255_ = v___y_1221_;
v___y_1256_ = v___y_1222_;
v___y_1257_ = v___y_1223_;
v___y_1258_ = v___y_1224_;
v___y_1259_ = v___y_1225_;
v___y_1260_ = v___y_1226_;
v___y_1261_ = v___y_1227_;
v___y_1262_ = v___y_1228_;
v___y_1263_ = v___y_1229_;
v___y_1264_ = v___y_1230_;
goto v___jp_1254_;
}
else
{
lean_object* v___x_1292_; 
lean_inc_ref(v___x_1253_);
v___x_1292_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1253_, v___y_1221_, v___y_1229_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_1295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v_a_1293_);
v___x_1296_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1289_, v___x_1295_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_dec_ref_known(v___x_1296_, 1);
v___y_1255_ = v___y_1221_;
v___y_1256_ = v___y_1222_;
v___y_1257_ = v___y_1223_;
v___y_1258_ = v___y_1224_;
v___y_1259_ = v___y_1225_;
v___y_1260_ = v___y_1226_;
v___y_1261_ = v___y_1227_;
v___y_1262_ = v___y_1228_;
v___y_1263_ = v___y_1229_;
v___y_1264_ = v___y_1230_;
goto v___jp_1254_;
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec_ref_known(v___x_1253_, 2);
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
lean_dec_ref_known(v___x_1253_, 2);
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
v_a_1305_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v___x_1292_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1292_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
}
v___jp_1254_:
{
lean_object* v___x_1265_; 
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
lean_inc(v___y_1262_);
lean_inc_ref(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc_ref(v___y_1257_);
lean_inc(v___y_1256_);
lean_inc(v___y_1255_);
v___x_1265_ = lean_grind_cutsat_assert_eq(v___x_1253_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1279_; 
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v___x_1265_, 0);
lean_dec(v_unused_1280_);
v___x_1267_ = v___x_1265_;
v_isShared_1268_ = v_isSharedCheck_1279_;
goto v_resetjp_1266_;
}
else
{
lean_dec(v___x_1265_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1279_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1269_ = lean_box(v___x_1242_);
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 1, v___x_1241_);
lean_ctor_set(v___x_1236_, 0, v___x_1270_);
v___x_1272_ = v___x_1236_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v___x_1241_);
v___x_1272_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
lean_ctor_set(v___x_1274_, 1, v_snd_1234_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v___x_1274_);
v___x_1276_ = v___x_1267_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
v_a_1281_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1265_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1265_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v_p_1238_);
lean_del_object(v___x_1236_);
lean_dec(v_snd_1234_);
lean_dec_ref(v_c_1216_);
v_a_1313_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1247_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1247_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object* v_c_1323_, lean_object* v_as_1324_, lean_object* v_sz_1325_, lean_object* v_i_1326_, lean_object* v_b_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
size_t v_sz_boxed_1339_; size_t v_i_boxed_1340_; lean_object* v_res_1341_; 
v_sz_boxed_1339_ = lean_unbox_usize(v_sz_1325_);
lean_dec(v_sz_1325_);
v_i_boxed_1340_ = lean_unbox_usize(v_i_1326_);
lean_dec(v_i_1326_);
v_res_1341_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v_c_1323_, v_as_1324_, v_sz_boxed_1339_, v_i_boxed_1340_, v_b_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v_as_1324_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object* v_c_1345_, lean_object* v_as_1346_, size_t v_sz_1347_, size_t v_i_1348_, lean_object* v_b_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
uint8_t v___x_1361_; 
v___x_1361_ = lean_usize_dec_lt(v_i_1348_, v_sz_1347_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; 
lean_dec_ref(v_c_1345_);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v_b_1349_);
return v___x_1362_;
}
else
{
lean_object* v_snd_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1450_; 
v_snd_1363_ = lean_ctor_get(v_b_1349_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_b_1349_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_b_1349_, 0);
lean_dec(v_unused_1451_);
v___x_1365_ = v_b_1349_;
v_isShared_1366_ = v_isSharedCheck_1450_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_snd_1363_);
lean_dec(v_b_1349_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1450_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_p_1367_; lean_object* v_a_1368_; lean_object* v_p_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; 
v_p_1367_ = lean_ctor_get(v_c_1345_, 0);
v_a_1368_ = lean_array_uget_borrowed(v_as_1346_, v_i_1348_);
v_p_1369_ = lean_ctor_get(v_a_1368_, 0);
v___x_1370_ = lean_box(0);
v___x_1371_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1367_, v_p_1369_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; size_t v___x_1373_; size_t v___x_1374_; lean_object* v___x_1375_; 
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
v___x_1372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0));
v___x_1373_ = ((size_t)1ULL);
v___x_1374_ = lean_usize_add(v_i_1348_, v___x_1373_);
v___x_1375_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v_c_1345_, v_as_1346_, v_sz_1347_, v___x_1374_, v___x_1372_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
return v___x_1375_;
}
else
{
lean_object* v___x_1376_; 
lean_inc_ref(v_p_1367_);
lean_inc(v_a_1368_);
v___x_1376_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1368_, v___y_1350_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_toCold_1377_; lean_object* v_options_1378_; lean_object* v_inheritedTraceOptions_1379_; uint8_t v_hasTrace_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; 
lean_dec_ref_known(v___x_1376_, 1);
v_toCold_1377_ = lean_ctor_get(v___y_1358_, 0);
v_options_1378_ = lean_ctor_get(v_toCold_1377_, 2);
v_inheritedTraceOptions_1379_ = lean_ctor_get(v_toCold_1377_, 11);
v_hasTrace_1380_ = lean_ctor_get_uint8(v_options_1378_, sizeof(void*)*1);
lean_inc(v_a_1368_);
v___x_1381_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_c_1345_);
lean_ctor_set(v___x_1381_, 1, v_a_1368_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_p_1367_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
if (v_hasTrace_1380_ == 0)
{
v___y_1384_ = v___y_1350_;
v___y_1385_ = v___y_1351_;
v___y_1386_ = v___y_1352_;
v___y_1387_ = v___y_1353_;
v___y_1388_ = v___y_1354_;
v___y_1389_ = v___y_1355_;
v___y_1390_ = v___y_1356_;
v___y_1391_ = v___y_1357_;
v___y_1392_ = v___y_1358_;
v___y_1393_ = v___y_1359_;
goto v___jp_1383_;
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1418_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1419_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_1420_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1379_, v_options_1378_, v___x_1419_);
if (v___x_1420_ == 0)
{
v___y_1384_ = v___y_1350_;
v___y_1385_ = v___y_1351_;
v___y_1386_ = v___y_1352_;
v___y_1387_ = v___y_1353_;
v___y_1388_ = v___y_1354_;
v___y_1389_ = v___y_1355_;
v___y_1390_ = v___y_1356_;
v___y_1391_ = v___y_1357_;
v___y_1392_ = v___y_1358_;
v___y_1393_ = v___y_1359_;
goto v___jp_1383_;
}
else
{
lean_object* v___x_1421_; 
lean_inc_ref(v___x_1382_);
v___x_1421_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1382_, v___y_1350_, v___y_1358_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v_a_1422_);
v___x_1425_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1418_, v___x_1424_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_dec_ref_known(v___x_1425_, 1);
v___y_1384_ = v___y_1350_;
v___y_1385_ = v___y_1351_;
v___y_1386_ = v___y_1352_;
v___y_1387_ = v___y_1353_;
v___y_1388_ = v___y_1354_;
v___y_1389_ = v___y_1355_;
v___y_1390_ = v___y_1356_;
v___y_1391_ = v___y_1357_;
v___y_1392_ = v___y_1358_;
v___y_1393_ = v___y_1359_;
goto v___jp_1383_;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec_ref_known(v___x_1382_, 2);
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec_ref_known(v___x_1382_, 2);
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
v_a_1434_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1421_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1421_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
v___jp_1383_:
{
lean_object* v___x_1394_; 
lean_inc(v___y_1393_);
lean_inc_ref(v___y_1392_);
lean_inc(v___y_1391_);
lean_inc_ref(v___y_1390_);
lean_inc(v___y_1389_);
lean_inc_ref(v___y_1388_);
lean_inc(v___y_1387_);
lean_inc_ref(v___y_1386_);
lean_inc(v___y_1385_);
lean_inc(v___y_1384_);
v___x_1394_ = lean_grind_cutsat_assert_eq(v___x_1382_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1408_; 
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1408_ == 0)
{
lean_object* v_unused_1409_; 
v_unused_1409_ = lean_ctor_get(v___x_1394_, 0);
lean_dec(v_unused_1409_);
v___x_1396_ = v___x_1394_;
v_isShared_1397_ = v_isSharedCheck_1408_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v___x_1394_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1408_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1398_ = lean_box(v___x_1371_);
v___x_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 1, v___x_1370_);
lean_ctor_set(v___x_1365_, 0, v___x_1399_);
v___x_1401_ = v___x_1365_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1399_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v___x_1370_);
v___x_1401_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
v___x_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
lean_ctor_set(v___x_1403_, 1, v_snd_1363_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1403_);
v___x_1405_ = v___x_1396_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
v_a_1410_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1394_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1394_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec_ref(v_p_1367_);
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
lean_dec_ref(v_c_1345_);
v_a_1442_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1376_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1376_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object* v_c_1452_, lean_object* v_as_1453_, lean_object* v_sz_1454_, lean_object* v_i_1455_, lean_object* v_b_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
size_t v_sz_boxed_1468_; size_t v_i_boxed_1469_; lean_object* v_res_1470_; 
v_sz_boxed_1468_ = lean_unbox_usize(v_sz_1454_);
lean_dec(v_sz_1454_);
v_i_boxed_1469_ = lean_unbox_usize(v_i_1455_);
lean_dec(v_i_1455_);
v_res_1470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v_c_1452_, v_as_1453_, v_sz_boxed_1468_, v_i_boxed_1469_, v_b_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v_as_1453_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object* v_c_1471_, lean_object* v_t_1472_, lean_object* v_init_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_root_1485_; lean_object* v_tail_1486_; lean_object* v___x_1487_; 
v_root_1485_ = lean_ctor_get(v_t_1472_, 0);
v_tail_1486_ = lean_ctor_get(v_t_1472_, 1);
lean_inc_ref(v_c_1471_);
lean_inc_ref(v_init_1473_);
v___x_1487_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1473_, v_c_1471_, v_root_1485_, v_init_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec_ref(v_init_1473_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1524_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1524_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1524_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
if (lean_obj_tag(v_a_1488_) == 0)
{
lean_object* v_a_1492_; lean_object* v___x_1494_; 
lean_dec_ref(v_c_1471_);
v_a_1492_ = lean_ctor_get(v_a_1488_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v_a_1488_, 1);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v_a_1492_);
v___x_1494_ = v___x_1490_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1492_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; size_t v_sz_1499_; size_t v___x_1500_; lean_object* v___x_1501_; 
lean_del_object(v___x_1490_);
v_a_1496_ = lean_ctor_get(v_a_1488_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v_a_1488_, 1);
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
lean_ctor_set(v___x_1498_, 1, v_a_1496_);
v_sz_1499_ = lean_array_size(v_tail_1486_);
v___x_1500_ = ((size_t)0ULL);
v___x_1501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v_c_1471_, v_tail_1486_, v_sz_1499_, v___x_1500_, v___x_1498_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1515_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1515_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1515_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v_fst_1506_; 
v_fst_1506_ = lean_ctor_get(v_a_1502_, 0);
if (lean_obj_tag(v_fst_1506_) == 0)
{
lean_object* v_snd_1507_; lean_object* v___x_1509_; 
v_snd_1507_ = lean_ctor_get(v_a_1502_, 1);
lean_inc(v_snd_1507_);
lean_dec(v_a_1502_);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v_snd_1507_);
v___x_1509_ = v___x_1504_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_snd_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
else
{
lean_object* v_val_1511_; lean_object* v___x_1513_; 
lean_inc_ref(v_fst_1506_);
lean_dec(v_a_1502_);
v_val_1511_ = lean_ctor_get(v_fst_1506_, 0);
lean_inc(v_val_1511_);
lean_dec_ref_known(v_fst_1506_, 1);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v_val_1511_);
v___x_1513_ = v___x_1504_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_val_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
v_a_1516_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1501_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1501_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v_c_1471_);
v_a_1525_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1487_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1487_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object* v_c_1533_, lean_object* v_t_1534_, lean_object* v_init_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v_c_1533_, v_t_1534_, v_init_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v_t_1534_);
return v_res_1547_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0(void){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object* v_c_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_p_1561_; 
v_p_1561_ = lean_ctor_get(v_c_1549_, 0);
if (lean_obj_tag(v_p_1561_) == 1)
{
lean_object* v_k_1562_; lean_object* v_v_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v_k_1562_ = lean_ctor_get(v_p_1561_, 0);
v_v_1563_ = lean_ctor_get(v_p_1561_, 1);
v___x_1564_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_1565_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v___y_1550_, v___y_1558_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___y_1568_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1594_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_1595_ = lean_int_dec_lt(v_k_1562_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v_lowers_1596_; lean_object* v_size_1597_; uint8_t v___x_1598_; 
v_lowers_1596_ = lean_ctor_get(v_a_1566_, 7);
lean_inc_ref(v_lowers_1596_);
lean_dec(v_a_1566_);
v_size_1597_ = lean_ctor_get(v_lowers_1596_, 2);
v___x_1598_ = lean_nat_dec_lt(v_v_1563_, v_size_1597_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
lean_dec_ref(v_lowers_1596_);
v___x_1599_ = l_outOfBounds___redArg(v___x_1564_);
v___y_1568_ = v___x_1599_;
goto v___jp_1567_;
}
else
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1564_, v_lowers_1596_, v_v_1563_);
lean_dec_ref(v_lowers_1596_);
v___y_1568_ = v___x_1600_;
goto v___jp_1567_;
}
}
else
{
lean_object* v_uppers_1601_; lean_object* v_size_1602_; uint8_t v___x_1603_; 
v_uppers_1601_ = lean_ctor_get(v_a_1566_, 8);
lean_inc_ref(v_uppers_1601_);
lean_dec(v_a_1566_);
v_size_1602_ = lean_ctor_get(v_uppers_1601_, 2);
v___x_1603_ = lean_nat_dec_lt(v_v_1563_, v_size_1602_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; 
lean_dec_ref(v_uppers_1601_);
v___x_1604_ = l_outOfBounds___redArg(v___x_1564_);
v___y_1568_ = v___x_1604_;
goto v___jp_1567_;
}
else
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1564_, v_uppers_1601_, v_v_1563_);
lean_dec_ref(v_uppers_1601_);
v___y_1568_ = v___x_1605_;
goto v___jp_1567_;
}
}
v___jp_1567_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0));
v___x_1570_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v_c_1549_, v___y_1568_, v___x_1569_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec_ref(v___y_1568_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1585_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1585_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1585_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_fst_1575_; 
v_fst_1575_ = lean_ctor_get(v_a_1571_, 0);
lean_inc(v_fst_1575_);
lean_dec(v_a_1571_);
if (lean_obj_tag(v_fst_1575_) == 0)
{
uint8_t v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1576_ = 0;
v___x_1577_ = lean_box(v___x_1576_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v___x_1577_);
v___x_1579_ = v___x_1573_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
else
{
lean_object* v_val_1581_; lean_object* v___x_1583_; 
v_val_1581_ = lean_ctor_get(v_fst_1575_, 0);
lean_inc(v_val_1581_);
lean_dec_ref_known(v_fst_1575_, 1);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v_val_1581_);
v___x_1583_ = v___x_1573_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_val_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
v_a_1586_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1570_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1570_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec_ref(v_c_1549_);
v_a_1606_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1565_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1565_);
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
else
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_1549_, v___y_1550_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
return v___x_1614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object* v_c_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_c_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec(v___y_1616_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object* v___x_1628_, lean_object* v_as_1629_, size_t v_i_1630_, size_t v_stop_1631_, lean_object* v_b_1632_){
_start:
{
lean_object* v___y_1634_; uint8_t v___x_1638_; 
v___x_1638_ = lean_usize_dec_eq(v_i_1630_, v_stop_1631_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v_p_1640_; uint8_t v___x_1641_; 
v___x_1639_ = lean_array_uget_borrowed(v_as_1629_, v_i_1630_);
v_p_1640_ = lean_ctor_get(v___x_1639_, 0);
v___x_1641_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_1640_, v___x_1628_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; 
lean_inc(v___x_1639_);
v___x_1642_ = l_Lean_PersistentArray_push___redArg(v_b_1632_, v___x_1639_);
v___y_1634_ = v___x_1642_;
goto v___jp_1633_;
}
else
{
v___y_1634_ = v_b_1632_;
goto v___jp_1633_;
}
}
else
{
return v_b_1632_;
}
v___jp_1633_:
{
size_t v___x_1635_; size_t v___x_1636_; 
v___x_1635_ = ((size_t)1ULL);
v___x_1636_ = lean_usize_add(v_i_1630_, v___x_1635_);
v_i_1630_ = v___x_1636_;
v_b_1632_ = v___y_1634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object* v___x_1643_, lean_object* v_as_1644_, lean_object* v_i_1645_, lean_object* v_stop_1646_, lean_object* v_b_1647_){
_start:
{
size_t v_i_boxed_1648_; size_t v_stop_boxed_1649_; lean_object* v_res_1650_; 
v_i_boxed_1648_ = lean_unbox_usize(v_i_1645_);
lean_dec(v_i_1645_);
v_stop_boxed_1649_ = lean_unbox_usize(v_stop_1646_);
lean_dec(v_stop_1646_);
v_res_1650_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1643_, v_as_1644_, v_i_boxed_1648_, v_stop_boxed_1649_, v_b_1647_);
lean_dec_ref(v_as_1644_);
lean_dec_ref(v___x_1643_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object* v___x_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_){
_start:
{
if (lean_obj_tag(v_x_1652_) == 0)
{
lean_object* v_cs_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v_cs_1654_ = lean_ctor_get(v_x_1652_, 0);
v___x_1655_ = lean_unsigned_to_nat(0u);
v___x_1656_ = lean_array_get_size(v_cs_1654_);
v___x_1657_ = lean_nat_dec_lt(v___x_1655_, v___x_1656_);
if (v___x_1657_ == 0)
{
return v_x_1653_;
}
else
{
size_t v___x_1658_; size_t v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = ((size_t)0ULL);
v___x_1659_ = lean_usize_of_nat(v___x_1656_);
v___x_1660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1651_, v_cs_1654_, v___x_1658_, v___x_1659_, v_x_1653_);
return v___x_1660_;
}
}
else
{
lean_object* v_vs_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v_vs_1661_ = lean_ctor_get(v_x_1652_, 0);
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = lean_array_get_size(v_vs_1661_);
v___x_1664_ = lean_nat_dec_lt(v___x_1662_, v___x_1663_);
if (v___x_1664_ == 0)
{
return v_x_1653_;
}
else
{
size_t v___x_1665_; size_t v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((size_t)0ULL);
v___x_1666_ = lean_usize_of_nat(v___x_1663_);
v___x_1667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1651_, v_vs_1661_, v___x_1665_, v___x_1666_, v_x_1653_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object* v___x_1668_, lean_object* v_as_1669_, size_t v_i_1670_, size_t v_stop_1671_, lean_object* v_b_1672_){
_start:
{
uint8_t v___x_1673_; 
v___x_1673_ = lean_usize_dec_eq(v_i_1670_, v_stop_1671_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; size_t v___x_1676_; size_t v___x_1677_; 
v___x_1674_ = lean_array_uget_borrowed(v_as_1669_, v_i_1670_);
v___x_1675_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1668_, v___x_1674_, v_b_1672_);
v___x_1676_ = ((size_t)1ULL);
v___x_1677_ = lean_usize_add(v_i_1670_, v___x_1676_);
v_i_1670_ = v___x_1677_;
v_b_1672_ = v___x_1675_;
goto _start;
}
else
{
return v_b_1672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v___x_1679_, lean_object* v_as_1680_, lean_object* v_i_1681_, lean_object* v_stop_1682_, lean_object* v_b_1683_){
_start:
{
size_t v_i_boxed_1684_; size_t v_stop_boxed_1685_; lean_object* v_res_1686_; 
v_i_boxed_1684_ = lean_unbox_usize(v_i_1681_);
lean_dec(v_i_1681_);
v_stop_boxed_1685_ = lean_unbox_usize(v_stop_1682_);
lean_dec(v_stop_1682_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1679_, v_as_1680_, v_i_boxed_1684_, v_stop_boxed_1685_, v_b_1683_);
lean_dec_ref(v_as_1680_);
lean_dec_ref(v___x_1679_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object* v___x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1687_, v_x_1688_, v_x_1689_);
lean_dec_ref(v_x_1688_);
lean_dec_ref(v___x_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object* v___x_1691_, lean_object* v_x_1692_, size_t v_x_1693_, size_t v_x_1694_, lean_object* v_x_1695_){
_start:
{
if (lean_obj_tag(v_x_1692_) == 0)
{
lean_object* v_cs_1696_; lean_object* v___x_1697_; size_t v___x_1698_; lean_object* v_j_1699_; lean_object* v___x_1700_; size_t v___x_1701_; size_t v___x_1702_; size_t v___x_1703_; size_t v___x_1704_; size_t v___x_1705_; size_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_cs_1696_ = lean_ctor_get(v_x_1692_, 0);
v___x_1697_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_1698_ = lean_usize_shift_right(v_x_1693_, v_x_1694_);
v_j_1699_ = lean_usize_to_nat(v___x_1698_);
v___x_1700_ = lean_array_get_borrowed(v___x_1697_, v_cs_1696_, v_j_1699_);
v___x_1701_ = ((size_t)1ULL);
v___x_1702_ = lean_usize_shift_left(v___x_1701_, v_x_1694_);
v___x_1703_ = lean_usize_sub(v___x_1702_, v___x_1701_);
v___x_1704_ = lean_usize_land(v_x_1693_, v___x_1703_);
v___x_1705_ = ((size_t)5ULL);
v___x_1706_ = lean_usize_sub(v_x_1694_, v___x_1705_);
v___x_1707_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1691_, v___x_1700_, v___x_1704_, v___x_1706_, v_x_1695_);
v___x_1708_ = lean_unsigned_to_nat(1u);
v___x_1709_ = lean_nat_add(v_j_1699_, v___x_1708_);
lean_dec(v_j_1699_);
v___x_1710_ = lean_array_get_size(v_cs_1696_);
v___x_1711_ = lean_nat_dec_lt(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec(v___x_1709_);
return v___x_1707_;
}
else
{
size_t v___x_1712_; size_t v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_usize_of_nat(v___x_1709_);
lean_dec(v___x_1709_);
v___x_1713_ = lean_usize_of_nat(v___x_1710_);
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1691_, v_cs_1696_, v___x_1712_, v___x_1713_, v___x_1707_);
return v___x_1714_;
}
}
else
{
lean_object* v_vs_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; 
v_vs_1715_ = lean_ctor_get(v_x_1692_, 0);
v___x_1716_ = lean_usize_to_nat(v_x_1693_);
v___x_1717_ = lean_array_get_size(v_vs_1715_);
v___x_1718_ = lean_nat_dec_lt(v___x_1716_, v___x_1717_);
if (v___x_1718_ == 0)
{
lean_dec(v___x_1716_);
return v_x_1695_;
}
else
{
size_t v___x_1719_; size_t v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = lean_usize_of_nat(v___x_1716_);
lean_dec(v___x_1716_);
v___x_1720_ = lean_usize_of_nat(v___x_1717_);
v___x_1721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1691_, v_vs_1715_, v___x_1719_, v___x_1720_, v_x_1695_);
return v___x_1721_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object* v___x_1722_, lean_object* v_x_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_, lean_object* v_x_1726_){
_start:
{
size_t v_x_26311__boxed_1727_; size_t v_x_26312__boxed_1728_; lean_object* v_res_1729_; 
v_x_26311__boxed_1727_ = lean_unbox_usize(v_x_1724_);
lean_dec(v_x_1724_);
v_x_26312__boxed_1728_ = lean_unbox_usize(v_x_1725_);
lean_dec(v_x_1725_);
v_res_1729_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1722_, v_x_1723_, v_x_26311__boxed_1727_, v_x_26312__boxed_1728_, v_x_1726_);
lean_dec_ref(v_x_1723_);
lean_dec_ref(v___x_1722_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object* v___x_1730_, lean_object* v_t_1731_, lean_object* v_init_1732_, lean_object* v_start_1733_){
_start:
{
lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = lean_nat_dec_eq(v_start_1733_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_object* v_root_1736_; lean_object* v_tail_1737_; size_t v_shift_1738_; lean_object* v_tailOff_1739_; uint8_t v___x_1740_; 
v_root_1736_ = lean_ctor_get(v_t_1731_, 0);
v_tail_1737_ = lean_ctor_get(v_t_1731_, 1);
v_shift_1738_ = lean_ctor_get_usize(v_t_1731_, 4);
v_tailOff_1739_ = lean_ctor_get(v_t_1731_, 3);
v___x_1740_ = lean_nat_dec_le(v_tailOff_1739_, v_start_1733_);
if (v___x_1740_ == 0)
{
size_t v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1741_ = lean_usize_of_nat(v_start_1733_);
v___x_1742_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1730_, v_root_1736_, v___x_1741_, v_shift_1738_, v_init_1732_);
v___x_1743_ = lean_array_get_size(v_tail_1737_);
v___x_1744_ = lean_nat_dec_lt(v___x_1734_, v___x_1743_);
if (v___x_1744_ == 0)
{
return v___x_1742_;
}
else
{
size_t v___x_1745_; size_t v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = ((size_t)0ULL);
v___x_1746_ = lean_usize_of_nat(v___x_1743_);
v___x_1747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1730_, v_tail_1737_, v___x_1745_, v___x_1746_, v___x_1742_);
return v___x_1747_;
}
}
else
{
lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1748_ = lean_nat_sub(v_start_1733_, v_tailOff_1739_);
v___x_1749_ = lean_array_get_size(v_tail_1737_);
v___x_1750_ = lean_nat_dec_lt(v___x_1748_, v___x_1749_);
if (v___x_1750_ == 0)
{
lean_dec(v___x_1748_);
return v_init_1732_;
}
else
{
size_t v___x_1751_; size_t v___x_1752_; lean_object* v___x_1753_; 
v___x_1751_ = lean_usize_of_nat(v___x_1748_);
lean_dec(v___x_1748_);
v___x_1752_ = lean_usize_of_nat(v___x_1749_);
v___x_1753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1730_, v_tail_1737_, v___x_1751_, v___x_1752_, v_init_1732_);
return v___x_1753_;
}
}
}
else
{
lean_object* v_root_1754_; lean_object* v_tail_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; uint8_t v___x_1758_; 
v_root_1754_ = lean_ctor_get(v_t_1731_, 0);
v_tail_1755_ = lean_ctor_get(v_t_1731_, 1);
v___x_1756_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1730_, v_root_1754_, v_init_1732_);
v___x_1757_ = lean_array_get_size(v_tail_1755_);
v___x_1758_ = lean_nat_dec_lt(v___x_1734_, v___x_1757_);
if (v___x_1758_ == 0)
{
return v___x_1756_;
}
else
{
size_t v___x_1759_; size_t v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = ((size_t)0ULL);
v___x_1760_ = lean_usize_of_nat(v___x_1757_);
v___x_1761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1730_, v_tail_1755_, v___x_1759_, v___x_1760_, v___x_1756_);
return v___x_1761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object* v___x_1762_, lean_object* v_t_1763_, lean_object* v_init_1764_, lean_object* v_start_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1762_, v_t_1763_, v_init_1764_, v_start_1765_);
lean_dec(v_start_1765_);
lean_dec_ref(v_t_1763_);
lean_dec_ref(v___x_1762_);
return v_res_1766_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = lean_unsigned_to_nat(32u);
v___x_1768_ = lean_mk_empty_array_with_capacity(v___x_1767_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
return v___x_1769_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1770_ = ((size_t)5ULL);
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_unsigned_to_nat(32u);
v___x_1773_ = lean_mk_empty_array_with_capacity(v___x_1772_);
v___x_1774_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0);
v___x_1775_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
lean_ctor_set(v___x_1775_, 1, v___x_1773_);
lean_ctor_set(v___x_1775_, 2, v___x_1771_);
lean_ctor_set(v___x_1775_, 3, v___x_1771_);
lean_ctor_set_usize(v___x_1775_, 4, v___x_1770_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object* v___x_1776_, lean_object* v_x_1777_, size_t v_x_1778_, size_t v_x_1779_){
_start:
{
if (lean_obj_tag(v_x_1777_) == 0)
{
lean_object* v_cs_1780_; size_t v_j_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; 
v_cs_1780_ = lean_ctor_get(v_x_1777_, 0);
v_j_1781_ = lean_usize_shift_right(v_x_1778_, v_x_1779_);
v___x_1782_ = lean_usize_to_nat(v_j_1781_);
v___x_1783_ = lean_array_get_size(v_cs_1780_);
v___x_1784_ = lean_nat_dec_lt(v___x_1782_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_dec(v___x_1782_);
return v_x_1777_;
}
else
{
lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1802_; 
lean_inc_ref(v_cs_1780_);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_x_1777_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v_x_1777_, 0);
lean_dec(v_unused_1803_);
v___x_1786_ = v_x_1777_;
v_isShared_1787_ = v_isSharedCheck_1802_;
goto v_resetjp_1785_;
}
else
{
lean_dec(v_x_1777_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1802_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
size_t v___x_1788_; size_t v___x_1789_; size_t v___x_1790_; size_t v_i_1791_; size_t v___x_1792_; size_t v_shift_1793_; lean_object* v_v_1794_; lean_object* v___x_1795_; lean_object* v_xs_x27_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1788_ = ((size_t)1ULL);
v___x_1789_ = lean_usize_shift_left(v___x_1788_, v_x_1779_);
v___x_1790_ = lean_usize_sub(v___x_1789_, v___x_1788_);
v_i_1791_ = lean_usize_land(v_x_1778_, v___x_1790_);
v___x_1792_ = ((size_t)5ULL);
v_shift_1793_ = lean_usize_sub(v_x_1779_, v___x_1792_);
v_v_1794_ = lean_array_fget(v_cs_1780_, v___x_1782_);
v___x_1795_ = lean_box(0);
v_xs_x27_1796_ = lean_array_fset(v_cs_1780_, v___x_1782_, v___x_1795_);
v___x_1797_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1776_, v_v_1794_, v_i_1791_, v_shift_1793_);
v___x_1798_ = lean_array_fset(v_xs_x27_1796_, v___x_1782_, v___x_1797_);
lean_dec(v___x_1782_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v___x_1798_);
v___x_1800_ = v___x_1786_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v_vs_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; 
v_vs_1804_ = lean_ctor_get(v_x_1777_, 0);
v___x_1805_ = lean_usize_to_nat(v_x_1778_);
v___x_1806_ = lean_array_get_size(v_vs_1804_);
v___x_1807_ = lean_nat_dec_lt(v___x_1805_, v___x_1806_);
if (v___x_1807_ == 0)
{
lean_dec(v___x_1805_);
return v_x_1777_;
}
else
{
lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1821_; 
lean_inc_ref(v_vs_1804_);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_x_1777_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; 
v_unused_1822_ = lean_ctor_get(v_x_1777_, 0);
lean_dec(v_unused_1822_);
v___x_1809_ = v_x_1777_;
v_isShared_1810_ = v_isSharedCheck_1821_;
goto v_resetjp_1808_;
}
else
{
lean_dec(v_x_1777_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1821_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v_v_1811_; lean_object* v___x_1812_; lean_object* v_xs_x27_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v_v_1811_ = lean_array_fget(v_vs_1804_, v___x_1805_);
v___x_1812_ = lean_box(0);
v_xs_x27_1813_ = lean_array_fset(v_vs_1804_, v___x_1805_, v___x_1812_);
v___x_1814_ = lean_unsigned_to_nat(0u);
v___x_1815_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_1816_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1776_, v_v_1811_, v___x_1815_, v___x_1814_);
lean_dec(v_v_1811_);
v___x_1817_ = lean_array_fset(v_xs_x27_1813_, v___x_1805_, v___x_1816_);
lean_dec(v___x_1805_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 0, v___x_1817_);
v___x_1819_ = v___x_1809_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object* v___x_1823_, lean_object* v_x_1824_, lean_object* v_x_1825_, lean_object* v_x_1826_){
_start:
{
size_t v_x_26443__boxed_1827_; size_t v_x_26444__boxed_1828_; lean_object* v_res_1829_; 
v_x_26443__boxed_1827_ = lean_unbox_usize(v_x_1825_);
lean_dec(v_x_1825_);
v_x_26444__boxed_1828_ = lean_unbox_usize(v_x_1826_);
lean_dec(v_x_1826_);
v_res_1829_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1823_, v_x_1824_, v_x_26443__boxed_1827_, v_x_26444__boxed_1828_);
lean_dec_ref(v___x_1823_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object* v___x_1830_, lean_object* v_t_1831_, lean_object* v_i_1832_){
_start:
{
lean_object* v_root_1833_; lean_object* v_tail_1834_; lean_object* v_size_1835_; size_t v_shift_1836_; lean_object* v_tailOff_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1865_; 
v_root_1833_ = lean_ctor_get(v_t_1831_, 0);
v_tail_1834_ = lean_ctor_get(v_t_1831_, 1);
v_size_1835_ = lean_ctor_get(v_t_1831_, 2);
v_shift_1836_ = lean_ctor_get_usize(v_t_1831_, 4);
v_tailOff_1837_ = lean_ctor_get(v_t_1831_, 3);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_t_1831_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1839_ = v_t_1831_;
v_isShared_1840_ = v_isSharedCheck_1865_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_tailOff_1837_);
lean_inc(v_size_1835_);
lean_inc(v_tail_1834_);
lean_inc(v_root_1833_);
lean_dec(v_t_1831_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1865_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
uint8_t v___x_1841_; 
v___x_1841_ = lean_nat_dec_le(v_tailOff_1837_, v_i_1832_);
if (v___x_1841_ == 0)
{
size_t v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1845_; 
v___x_1842_ = lean_usize_of_nat(v_i_1832_);
v___x_1843_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1830_, v_root_1833_, v___x_1842_, v_shift_1836_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1843_);
v___x_1845_ = v___x_1839_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1843_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_tail_1834_);
lean_ctor_set(v_reuseFailAlloc_1846_, 2, v_size_1835_);
lean_ctor_set(v_reuseFailAlloc_1846_, 3, v_tailOff_1837_);
lean_ctor_set_usize(v_reuseFailAlloc_1846_, 4, v_shift_1836_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1848_; uint8_t v___x_1849_; 
v___x_1847_ = lean_nat_sub(v_i_1832_, v_tailOff_1837_);
v___x_1848_ = lean_array_get_size(v_tail_1834_);
v___x_1849_ = lean_nat_dec_lt(v___x_1847_, v___x_1848_);
if (v___x_1849_ == 0)
{
lean_object* v___x_1851_; 
lean_dec(v___x_1847_);
if (v_isShared_1840_ == 0)
{
v___x_1851_ = v___x_1839_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_root_1833_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_tail_1834_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_size_1835_);
lean_ctor_set(v_reuseFailAlloc_1852_, 3, v_tailOff_1837_);
lean_ctor_set_usize(v_reuseFailAlloc_1852_, 4, v_shift_1836_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
else
{
lean_object* v_v_1853_; lean_object* v___x_1854_; lean_object* v_xs_x27_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1863_; 
v_v_1853_ = lean_array_fget(v_tail_1834_, v___x_1847_);
v___x_1854_ = lean_box(0);
v_xs_x27_1855_ = lean_array_fset(v_tail_1834_, v___x_1847_, v___x_1854_);
v___x_1856_ = lean_unsigned_to_nat(32u);
v___x_1857_ = lean_mk_empty_array_with_capacity(v___x_1856_);
lean_dec_ref(v___x_1857_);
v___x_1858_ = lean_unsigned_to_nat(0u);
v___x_1859_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_1860_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1830_, v_v_1853_, v___x_1859_, v___x_1858_);
lean_dec(v_v_1853_);
v___x_1861_ = lean_array_fset(v_xs_x27_1855_, v___x_1847_, v___x_1860_);
lean_dec(v___x_1847_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 1, v___x_1861_);
v___x_1863_ = v___x_1839_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_root_1833_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v___x_1861_);
lean_ctor_set(v_reuseFailAlloc_1864_, 2, v_size_1835_);
lean_ctor_set(v_reuseFailAlloc_1864_, 3, v_tailOff_1837_);
lean_ctor_set_usize(v_reuseFailAlloc_1864_, 4, v_shift_1836_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object* v___x_1866_, lean_object* v_t_1867_, lean_object* v_i_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v___x_1866_, v_t_1867_, v_i_1868_);
lean_dec(v_i_1868_);
lean_dec_ref(v___x_1866_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object* v_p_1870_, lean_object* v_x_1871_, lean_object* v_s_1872_){
_start:
{
lean_object* v_vars_1873_; lean_object* v_varMap_1874_; lean_object* v_vars_x27_1875_; lean_object* v_varMap_x27_1876_; lean_object* v_natToIntMap_1877_; lean_object* v_natDef_1878_; lean_object* v_dvds_1879_; lean_object* v_lowers_1880_; lean_object* v_uppers_1881_; lean_object* v_diseqs_1882_; lean_object* v_elimEqs_1883_; lean_object* v_elimStack_1884_; lean_object* v_occurs_1885_; lean_object* v_assignment_1886_; lean_object* v_nextCnstrId_1887_; uint8_t v_caseSplits_1888_; lean_object* v_steps_1889_; lean_object* v_conflict_x3f_1890_; lean_object* v_diseqSplits_1891_; lean_object* v_divMod_1892_; uint8_t v_usedCommRing_1893_; lean_object* v_nonlinearOccs_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1902_; 
v_vars_1873_ = lean_ctor_get(v_s_1872_, 0);
v_varMap_1874_ = lean_ctor_get(v_s_1872_, 1);
v_vars_x27_1875_ = lean_ctor_get(v_s_1872_, 2);
v_varMap_x27_1876_ = lean_ctor_get(v_s_1872_, 3);
v_natToIntMap_1877_ = lean_ctor_get(v_s_1872_, 4);
v_natDef_1878_ = lean_ctor_get(v_s_1872_, 5);
v_dvds_1879_ = lean_ctor_get(v_s_1872_, 6);
v_lowers_1880_ = lean_ctor_get(v_s_1872_, 7);
v_uppers_1881_ = lean_ctor_get(v_s_1872_, 8);
v_diseqs_1882_ = lean_ctor_get(v_s_1872_, 9);
v_elimEqs_1883_ = lean_ctor_get(v_s_1872_, 10);
v_elimStack_1884_ = lean_ctor_get(v_s_1872_, 11);
v_occurs_1885_ = lean_ctor_get(v_s_1872_, 12);
v_assignment_1886_ = lean_ctor_get(v_s_1872_, 13);
v_nextCnstrId_1887_ = lean_ctor_get(v_s_1872_, 14);
v_caseSplits_1888_ = lean_ctor_get_uint8(v_s_1872_, sizeof(void*)*20);
v_steps_1889_ = lean_ctor_get(v_s_1872_, 15);
v_conflict_x3f_1890_ = lean_ctor_get(v_s_1872_, 16);
v_diseqSplits_1891_ = lean_ctor_get(v_s_1872_, 17);
v_divMod_1892_ = lean_ctor_get(v_s_1872_, 18);
v_usedCommRing_1893_ = lean_ctor_get_uint8(v_s_1872_, sizeof(void*)*20 + 1);
v_nonlinearOccs_1894_ = lean_ctor_get(v_s_1872_, 19);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_s_1872_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1896_ = v_s_1872_;
v_isShared_1897_ = v_isSharedCheck_1902_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_nonlinearOccs_1894_);
lean_inc(v_divMod_1892_);
lean_inc(v_diseqSplits_1891_);
lean_inc(v_conflict_x3f_1890_);
lean_inc(v_steps_1889_);
lean_inc(v_nextCnstrId_1887_);
lean_inc(v_assignment_1886_);
lean_inc(v_occurs_1885_);
lean_inc(v_elimStack_1884_);
lean_inc(v_elimEqs_1883_);
lean_inc(v_diseqs_1882_);
lean_inc(v_uppers_1881_);
lean_inc(v_lowers_1880_);
lean_inc(v_dvds_1879_);
lean_inc(v_natDef_1878_);
lean_inc(v_natToIntMap_1877_);
lean_inc(v_varMap_x27_1876_);
lean_inc(v_vars_x27_1875_);
lean_inc(v_varMap_1874_);
lean_inc(v_vars_1873_);
lean_dec(v_s_1872_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1902_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v_p_1870_, v_diseqs_1882_, v_x_1871_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 9, v___x_1898_);
v___x_1900_ = v___x_1896_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_vars_1873_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_varMap_1874_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_vars_x27_1875_);
lean_ctor_set(v_reuseFailAlloc_1901_, 3, v_varMap_x27_1876_);
lean_ctor_set(v_reuseFailAlloc_1901_, 4, v_natToIntMap_1877_);
lean_ctor_set(v_reuseFailAlloc_1901_, 5, v_natDef_1878_);
lean_ctor_set(v_reuseFailAlloc_1901_, 6, v_dvds_1879_);
lean_ctor_set(v_reuseFailAlloc_1901_, 7, v_lowers_1880_);
lean_ctor_set(v_reuseFailAlloc_1901_, 8, v_uppers_1881_);
lean_ctor_set(v_reuseFailAlloc_1901_, 9, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1901_, 10, v_elimEqs_1883_);
lean_ctor_set(v_reuseFailAlloc_1901_, 11, v_elimStack_1884_);
lean_ctor_set(v_reuseFailAlloc_1901_, 12, v_occurs_1885_);
lean_ctor_set(v_reuseFailAlloc_1901_, 13, v_assignment_1886_);
lean_ctor_set(v_reuseFailAlloc_1901_, 14, v_nextCnstrId_1887_);
lean_ctor_set(v_reuseFailAlloc_1901_, 15, v_steps_1889_);
lean_ctor_set(v_reuseFailAlloc_1901_, 16, v_conflict_x3f_1890_);
lean_ctor_set(v_reuseFailAlloc_1901_, 17, v_diseqSplits_1891_);
lean_ctor_set(v_reuseFailAlloc_1901_, 18, v_divMod_1892_);
lean_ctor_set(v_reuseFailAlloc_1901_, 19, v_nonlinearOccs_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1901_, sizeof(void*)*20, v_caseSplits_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1901_, sizeof(void*)*20 + 1, v_usedCommRing_1893_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object* v_p_1903_, lean_object* v_x_1904_, lean_object* v_s_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(v_p_1903_, v_x_1904_, v_s_1905_);
lean_dec(v_x_1904_);
lean_dec_ref(v_p_1903_);
return v_res_1906_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = lean_unsigned_to_nat(1u);
v___x_1914_ = lean_nat_to_int(v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object* v_c_1915_, lean_object* v_x_1916_, lean_object* v_as_1917_, size_t v_sz_1918_, size_t v_i_1919_, lean_object* v_b_1920_, lean_object* v___y_1921_){
_start:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_usize_dec_lt(v_i_1919_, v_sz_1918_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; 
lean_dec(v_x_1916_);
lean_dec_ref(v_c_1915_);
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_b_1920_);
return v___x_1924_;
}
else
{
lean_object* v_snd_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1971_; 
v_snd_1925_ = lean_ctor_get(v_b_1920_, 1);
v_isSharedCheck_1971_ = !lean_is_exclusive(v_b_1920_);
if (v_isSharedCheck_1971_ == 0)
{
lean_object* v_unused_1972_; 
v_unused_1972_ = lean_ctor_get(v_b_1920_, 0);
lean_dec(v_unused_1972_);
v___x_1927_ = v_b_1920_;
v_isShared_1928_ = v_isSharedCheck_1971_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_snd_1925_);
lean_dec(v_b_1920_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1971_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_p_1929_; lean_object* v_a_1930_; lean_object* v_p_1931_; lean_object* v___x_1932_; lean_object* v___f_1933_; uint8_t v___y_1935_; uint8_t v___x_1969_; 
v_p_1929_ = lean_ctor_get(v_c_1915_, 0);
v_a_1930_ = lean_array_uget_borrowed(v_as_1917_, v_i_1919_);
v_p_1931_ = lean_ctor_get(v_a_1930_, 0);
v___x_1932_ = lean_box(0);
lean_inc(v_x_1916_);
lean_inc_ref(v_p_1931_);
v___f_1933_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1933_, 0, v_p_1931_);
lean_closure_set(v___f_1933_, 1, v_x_1916_);
v___x_1969_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_1929_, v_p_1931_);
if (v___x_1969_ == 0)
{
uint8_t v___x_1970_; 
v___x_1970_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1929_, v_p_1931_);
v___y_1935_ = v___x_1970_;
goto v___jp_1934_;
}
else
{
v___y_1935_ = v___x_1969_;
goto v___jp_1934_;
}
v___jp_1934_:
{
if (v___y_1935_ == 0)
{
lean_object* v___x_1936_; size_t v___x_1937_; size_t v___x_1938_; 
lean_dec_ref(v___f_1933_);
lean_del_object(v___x_1927_);
lean_dec(v_snd_1925_);
v___x_1936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1));
v___x_1937_ = ((size_t)1ULL);
v___x_1938_ = lean_usize_add(v_i_1919_, v___x_1937_);
v_i_1919_ = v___x_1938_;
v_b_1920_ = v___x_1936_;
goto _start;
}
else
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
lean_dec(v_x_1916_);
v___x_1940_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_1941_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1940_, v___f_1933_, v___y_1921_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1959_; 
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1959_ == 0)
{
lean_object* v_unused_1960_; 
v_unused_1960_ = lean_ctor_get(v___x_1941_, 0);
lean_dec(v_unused_1960_);
v___x_1943_ = v___x_1941_;
v_isShared_1944_ = v_isSharedCheck_1959_;
goto v_resetjp_1942_;
}
else
{
lean_dec(v___x_1941_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1959_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1945_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_1929_);
v___x_1946_ = l_Int_Internal_Linear_Poly_addConst(v_p_1929_, v___x_1945_);
lean_inc(v_a_1930_);
v___x_1947_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1947_, 0, v_c_1915_);
lean_ctor_set(v___x_1947_, 1, v_a_1930_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1946_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
v___x_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
v___x_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 1, v___x_1932_);
lean_ctor_set(v___x_1927_, 0, v___x_1950_);
v___x_1952_ = v___x_1927_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1950_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v___x_1932_);
v___x_1952_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1956_; 
v___x_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
lean_ctor_set(v___x_1954_, 1, v_snd_1925_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1954_);
v___x_1956_ = v___x_1943_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1954_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_del_object(v___x_1927_);
lean_dec(v_snd_1925_);
lean_dec_ref(v_c_1915_);
v_a_1961_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1941_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1941_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object* v_c_1973_, lean_object* v_x_1974_, lean_object* v_as_1975_, lean_object* v_sz_1976_, lean_object* v_i_1977_, lean_object* v_b_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
size_t v_sz_boxed_1981_; size_t v_i_boxed_1982_; lean_object* v_res_1983_; 
v_sz_boxed_1981_ = lean_unbox_usize(v_sz_1976_);
lean_dec(v_sz_1976_);
v_i_boxed_1982_ = lean_unbox_usize(v_i_1977_);
lean_dec(v_i_1977_);
v_res_1983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_1973_, v_x_1974_, v_as_1975_, v_sz_boxed_1981_, v_i_boxed_1982_, v_b_1978_, v___y_1979_);
lean_dec(v___y_1979_);
lean_dec_ref(v_as_1975_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object* v_c_1990_, lean_object* v_x_1991_, lean_object* v_as_1992_, size_t v_sz_1993_, size_t v_i_1994_, lean_object* v_b_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
uint8_t v___x_2007_; 
v___x_2007_ = lean_usize_dec_lt(v_i_1994_, v_sz_1993_);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; 
lean_dec(v_x_1991_);
lean_dec_ref(v_c_1990_);
v___x_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2008_, 0, v_b_1995_);
return v___x_2008_;
}
else
{
lean_object* v_snd_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2055_; 
v_snd_2009_ = lean_ctor_get(v_b_1995_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_b_1995_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v_b_1995_, 0);
lean_dec(v_unused_2056_);
v___x_2011_ = v_b_1995_;
v_isShared_2012_ = v_isSharedCheck_2055_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_snd_2009_);
lean_dec(v_b_1995_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2055_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v_p_2013_; lean_object* v_a_2014_; lean_object* v_p_2015_; lean_object* v___x_2016_; lean_object* v___f_2017_; uint8_t v___y_2019_; uint8_t v___x_2053_; 
v_p_2013_ = lean_ctor_get(v_c_1990_, 0);
v_a_2014_ = lean_array_uget_borrowed(v_as_1992_, v_i_1994_);
v_p_2015_ = lean_ctor_get(v_a_2014_, 0);
v___x_2016_ = lean_box(0);
lean_inc(v_x_1991_);
lean_inc_ref(v_p_2015_);
v___f_2017_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2017_, 0, v_p_2015_);
lean_closure_set(v___f_2017_, 1, v_x_1991_);
v___x_2053_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2013_, v_p_2015_);
if (v___x_2053_ == 0)
{
uint8_t v___x_2054_; 
v___x_2054_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2013_, v_p_2015_);
v___y_2019_ = v___x_2054_;
goto v___jp_2018_;
}
else
{
v___y_2019_ = v___x_2053_;
goto v___jp_2018_;
}
v___jp_2018_:
{
if (v___y_2019_ == 0)
{
lean_object* v___x_2020_; size_t v___x_2021_; size_t v___x_2022_; lean_object* v___x_2023_; 
lean_dec_ref(v___f_2017_);
lean_del_object(v___x_2011_);
lean_dec(v_snd_2009_);
v___x_2020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1));
v___x_2021_ = ((size_t)1ULL);
v___x_2022_ = lean_usize_add(v_i_1994_, v___x_2021_);
v___x_2023_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_1990_, v_x_1991_, v_as_1992_, v_sz_1993_, v___x_2022_, v___x_2020_, v___y_1996_);
return v___x_2023_;
}
else
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec(v_x_1991_);
v___x_2024_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2025_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2024_, v___f_2017_, v___y_1996_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2043_; 
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2043_ == 0)
{
lean_object* v_unused_2044_; 
v_unused_2044_ = lean_ctor_get(v___x_2025_, 0);
lean_dec(v_unused_2044_);
v___x_2027_ = v___x_2025_;
v_isShared_2028_ = v_isSharedCheck_2043_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v___x_2025_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2043_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2029_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2013_);
v___x_2030_ = l_Int_Internal_Linear_Poly_addConst(v_p_2013_, v___x_2029_);
lean_inc(v_a_2014_);
v___x_2031_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2031_, 0, v_c_1990_);
lean_ctor_set(v___x_2031_, 1, v_a_2014_);
v___x_2032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2030_);
lean_ctor_set(v___x_2032_, 1, v___x_2031_);
v___x_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
v___x_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 1, v___x_2016_);
lean_ctor_set(v___x_2011_, 0, v___x_2034_);
v___x_2036_ = v___x_2011_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v___x_2034_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v___x_2016_);
v___x_2036_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2036_);
v___x_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
lean_ctor_set(v___x_2038_, 1, v_snd_2009_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2038_);
v___x_2040_ = v___x_2027_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_del_object(v___x_2011_);
lean_dec(v_snd_2009_);
lean_dec_ref(v_c_1990_);
v_a_2045_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_2025_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2025_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object** _args){
lean_object* v_c_2057_ = _args[0];
lean_object* v_x_2058_ = _args[1];
lean_object* v_as_2059_ = _args[2];
lean_object* v_sz_2060_ = _args[3];
lean_object* v_i_2061_ = _args[4];
lean_object* v_b_2062_ = _args[5];
lean_object* v___y_2063_ = _args[6];
lean_object* v___y_2064_ = _args[7];
lean_object* v___y_2065_ = _args[8];
lean_object* v___y_2066_ = _args[9];
lean_object* v___y_2067_ = _args[10];
lean_object* v___y_2068_ = _args[11];
lean_object* v___y_2069_ = _args[12];
lean_object* v___y_2070_ = _args[13];
lean_object* v___y_2071_ = _args[14];
lean_object* v___y_2072_ = _args[15];
lean_object* v___y_2073_ = _args[16];
_start:
{
size_t v_sz_boxed_2074_; size_t v_i_boxed_2075_; lean_object* v_res_2076_; 
v_sz_boxed_2074_ = lean_unbox_usize(v_sz_2060_);
lean_dec(v_sz_2060_);
v_i_boxed_2075_ = lean_unbox_usize(v_i_2061_);
lean_dec(v_i_2061_);
v_res_2076_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_c_2057_, v_x_2058_, v_as_2059_, v_sz_boxed_2074_, v_i_boxed_2075_, v_b_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v_as_2059_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object* v_c_2083_, lean_object* v_x_2084_, lean_object* v_as_2085_, size_t v_sz_2086_, size_t v_i_2087_, lean_object* v_b_2088_, lean_object* v___y_2089_){
_start:
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_usize_dec_lt(v_i_2087_, v_sz_2086_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; 
lean_dec(v_x_2084_);
lean_dec_ref(v_c_2083_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_b_2088_);
return v___x_2092_;
}
else
{
lean_object* v_snd_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2140_; 
v_snd_2093_ = lean_ctor_get(v_b_2088_, 1);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_b_2088_);
if (v_isSharedCheck_2140_ == 0)
{
lean_object* v_unused_2141_; 
v_unused_2141_ = lean_ctor_get(v_b_2088_, 0);
lean_dec(v_unused_2141_);
v___x_2095_ = v_b_2088_;
v_isShared_2096_ = v_isSharedCheck_2140_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_snd_2093_);
lean_dec(v_b_2088_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2140_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v_p_2097_; lean_object* v_a_2098_; lean_object* v_p_2099_; lean_object* v___x_2100_; lean_object* v___f_2101_; uint8_t v___y_2103_; uint8_t v___x_2138_; 
v_p_2097_ = lean_ctor_get(v_c_2083_, 0);
v_a_2098_ = lean_array_uget_borrowed(v_as_2085_, v_i_2087_);
v_p_2099_ = lean_ctor_get(v_a_2098_, 0);
v___x_2100_ = lean_box(0);
lean_inc(v_x_2084_);
lean_inc_ref(v_p_2099_);
v___f_2101_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2101_, 0, v_p_2099_);
lean_closure_set(v___f_2101_, 1, v_x_2084_);
v___x_2138_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2097_, v_p_2099_);
if (v___x_2138_ == 0)
{
uint8_t v___x_2139_; 
v___x_2139_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2097_, v_p_2099_);
v___y_2103_ = v___x_2139_;
goto v___jp_2102_;
}
else
{
v___y_2103_ = v___x_2138_;
goto v___jp_2102_;
}
v___jp_2102_:
{
if (v___y_2103_ == 0)
{
lean_object* v___x_2104_; size_t v___x_2105_; size_t v___x_2106_; 
lean_dec_ref(v___f_2101_);
lean_del_object(v___x_2095_);
lean_dec(v_snd_2093_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1));
v___x_2105_ = ((size_t)1ULL);
v___x_2106_ = lean_usize_add(v_i_2087_, v___x_2105_);
v_i_2087_ = v___x_2106_;
v_b_2088_ = v___x_2104_;
goto _start;
}
else
{
lean_object* v___x_2108_; lean_object* v___x_2109_; 
lean_dec(v_x_2084_);
v___x_2108_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2109_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2108_, v___f_2101_, v___y_2089_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2128_; 
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v___x_2109_, 0);
lean_dec(v_unused_2129_);
v___x_2111_ = v___x_2109_;
v_isShared_2112_ = v_isSharedCheck_2128_;
goto v_resetjp_2110_;
}
else
{
lean_dec(v___x_2109_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2128_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2120_; 
v___x_2113_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2097_);
v___x_2114_ = l_Int_Internal_Linear_Poly_addConst(v_p_2097_, v___x_2113_);
lean_inc(v_a_2098_);
v___x_2115_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2115_, 0, v_c_2083_);
lean_ctor_set(v___x_2115_, 1, v_a_2098_);
v___x_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
v___x_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2100_);
lean_ctor_set(v___x_2095_, 0, v___x_2118_);
v___x_2120_ = v___x_2095_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2118_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v___x_2100_);
v___x_2120_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
lean_ctor_set(v___x_2123_, 1, v_snd_2093_);
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 0, v___x_2123_);
v___x_2125_ = v___x_2111_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_del_object(v___x_2095_);
lean_dec(v_snd_2093_);
lean_dec_ref(v_c_2083_);
v_a_2130_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2109_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2109_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object* v_c_2142_, lean_object* v_x_2143_, lean_object* v_as_2144_, lean_object* v_sz_2145_, lean_object* v_i_2146_, lean_object* v_b_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
size_t v_sz_boxed_2150_; size_t v_i_boxed_2151_; lean_object* v_res_2152_; 
v_sz_boxed_2150_ = lean_unbox_usize(v_sz_2145_);
lean_dec(v_sz_2145_);
v_i_boxed_2151_ = lean_unbox_usize(v_i_2146_);
lean_dec(v_i_2146_);
v_res_2152_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2142_, v_x_2143_, v_as_2144_, v_sz_boxed_2150_, v_i_boxed_2151_, v_b_2147_, v___y_2148_);
lean_dec(v___y_2148_);
lean_dec_ref(v_as_2144_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object* v_c_2156_, lean_object* v_x_2157_, lean_object* v_as_2158_, size_t v_sz_2159_, size_t v_i_2160_, lean_object* v_b_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_usize_dec_lt(v_i_2160_, v_sz_2159_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
lean_dec(v_x_2157_);
lean_dec_ref(v_c_2156_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_b_2161_);
return v___x_2174_;
}
else
{
lean_object* v_snd_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2222_; 
v_snd_2175_ = lean_ctor_get(v_b_2161_, 1);
v_isSharedCheck_2222_ = !lean_is_exclusive(v_b_2161_);
if (v_isSharedCheck_2222_ == 0)
{
lean_object* v_unused_2223_; 
v_unused_2223_ = lean_ctor_get(v_b_2161_, 0);
lean_dec(v_unused_2223_);
v___x_2177_ = v_b_2161_;
v_isShared_2178_ = v_isSharedCheck_2222_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_snd_2175_);
lean_dec(v_b_2161_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2222_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v_p_2179_; lean_object* v_a_2180_; lean_object* v_p_2181_; lean_object* v___x_2182_; lean_object* v___f_2183_; uint8_t v___y_2185_; uint8_t v___x_2220_; 
v_p_2179_ = lean_ctor_get(v_c_2156_, 0);
v_a_2180_ = lean_array_uget_borrowed(v_as_2158_, v_i_2160_);
v_p_2181_ = lean_ctor_get(v_a_2180_, 0);
v___x_2182_ = lean_box(0);
lean_inc(v_x_2157_);
lean_inc_ref(v_p_2181_);
v___f_2183_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2183_, 0, v_p_2181_);
lean_closure_set(v___f_2183_, 1, v_x_2157_);
v___x_2220_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2179_, v_p_2181_);
if (v___x_2220_ == 0)
{
uint8_t v___x_2221_; 
v___x_2221_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2179_, v_p_2181_);
v___y_2185_ = v___x_2221_;
goto v___jp_2184_;
}
else
{
v___y_2185_ = v___x_2220_;
goto v___jp_2184_;
}
v___jp_2184_:
{
if (v___y_2185_ == 0)
{
lean_object* v___x_2186_; size_t v___x_2187_; size_t v___x_2188_; lean_object* v___x_2189_; 
lean_dec_ref(v___f_2183_);
lean_del_object(v___x_2177_);
lean_dec(v_snd_2175_);
v___x_2186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0));
v___x_2187_ = ((size_t)1ULL);
v___x_2188_ = lean_usize_add(v_i_2160_, v___x_2187_);
v___x_2189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2156_, v_x_2157_, v_as_2158_, v_sz_2159_, v___x_2188_, v___x_2186_, v___y_2162_);
return v___x_2189_;
}
else
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
lean_dec(v_x_2157_);
v___x_2190_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2191_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2190_, v___f_2183_, v___y_2162_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2210_; 
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2210_ == 0)
{
lean_object* v_unused_2211_; 
v_unused_2211_ = lean_ctor_get(v___x_2191_, 0);
lean_dec(v_unused_2211_);
v___x_2193_ = v___x_2191_;
v_isShared_2194_ = v_isSharedCheck_2210_;
goto v_resetjp_2192_;
}
else
{
lean_dec(v___x_2191_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2210_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2195_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2179_);
v___x_2196_ = l_Int_Internal_Linear_Poly_addConst(v_p_2179_, v___x_2195_);
lean_inc(v_a_2180_);
v___x_2197_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_c_2156_);
lean_ctor_set(v___x_2197_, 1, v_a_2180_);
v___x_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
v___x_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v___x_2182_);
lean_ctor_set(v___x_2177_, 0, v___x_2200_);
v___x_2202_ = v___x_2177_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2200_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v___x_2182_);
v___x_2202_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
v___x_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
lean_ctor_set(v___x_2205_, 1, v_snd_2175_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2205_);
v___x_2207_ = v___x_2193_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_del_object(v___x_2177_);
lean_dec(v_snd_2175_);
lean_dec_ref(v_c_2156_);
v_a_2212_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2191_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2191_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object** _args){
lean_object* v_c_2224_ = _args[0];
lean_object* v_x_2225_ = _args[1];
lean_object* v_as_2226_ = _args[2];
lean_object* v_sz_2227_ = _args[3];
lean_object* v_i_2228_ = _args[4];
lean_object* v_b_2229_ = _args[5];
lean_object* v___y_2230_ = _args[6];
lean_object* v___y_2231_ = _args[7];
lean_object* v___y_2232_ = _args[8];
lean_object* v___y_2233_ = _args[9];
lean_object* v___y_2234_ = _args[10];
lean_object* v___y_2235_ = _args[11];
lean_object* v___y_2236_ = _args[12];
lean_object* v___y_2237_ = _args[13];
lean_object* v___y_2238_ = _args[14];
lean_object* v___y_2239_ = _args[15];
lean_object* v___y_2240_ = _args[16];
_start:
{
size_t v_sz_boxed_2241_; size_t v_i_boxed_2242_; lean_object* v_res_2243_; 
v_sz_boxed_2241_ = lean_unbox_usize(v_sz_2227_);
lean_dec(v_sz_2227_);
v_i_boxed_2242_ = lean_unbox_usize(v_i_2228_);
lean_dec(v_i_2228_);
v_res_2243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_c_2224_, v_x_2225_, v_as_2226_, v_sz_boxed_2241_, v_i_boxed_2242_, v_b_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v_as_2226_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object* v_init_2244_, lean_object* v_c_2245_, lean_object* v_x_2246_, lean_object* v_n_2247_, lean_object* v_b_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
if (lean_obj_tag(v_n_2247_) == 0)
{
lean_object* v_cs_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; size_t v_sz_2263_; size_t v___x_2264_; lean_object* v___x_2265_; 
v_cs_2260_ = lean_ctor_get(v_n_2247_, 0);
v___x_2261_ = lean_box(0);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
lean_ctor_set(v___x_2262_, 1, v_b_2248_);
v_sz_2263_ = lean_array_size(v_cs_2260_);
v___x_2264_ = ((size_t)0ULL);
v___x_2265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2244_, v_c_2245_, v_x_2246_, v_cs_2260_, v_sz_2263_, v___x_2264_, v___x_2262_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2280_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2280_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2280_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v_fst_2270_; 
v_fst_2270_ = lean_ctor_get(v_a_2266_, 0);
if (lean_obj_tag(v_fst_2270_) == 0)
{
lean_object* v_snd_2271_; lean_object* v___x_2272_; lean_object* v___x_2274_; 
v_snd_2271_ = lean_ctor_get(v_a_2266_, 1);
lean_inc(v_snd_2271_);
lean_dec(v_a_2266_);
v___x_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_snd_2271_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2272_);
v___x_2274_ = v___x_2268_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
else
{
lean_object* v_val_2276_; lean_object* v___x_2278_; 
lean_inc_ref(v_fst_2270_);
lean_dec(v_a_2266_);
v_val_2276_ = lean_ctor_get(v_fst_2270_, 0);
lean_inc(v_val_2276_);
lean_dec_ref_known(v_fst_2270_, 1);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v_val_2276_);
v___x_2278_ = v___x_2268_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_val_2276_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
v_a_2281_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2265_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2265_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
else
{
lean_object* v_vs_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; size_t v_sz_2292_; size_t v___x_2293_; lean_object* v___x_2294_; 
v_vs_2289_ = lean_ctor_get(v_n_2247_, 0);
v___x_2290_ = lean_box(0);
v___x_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
lean_ctor_set(v___x_2291_, 1, v_b_2248_);
v_sz_2292_ = lean_array_size(v_vs_2289_);
v___x_2293_ = ((size_t)0ULL);
v___x_2294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_c_2245_, v_x_2246_, v_vs_2289_, v_sz_2292_, v___x_2293_, v___x_2291_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2309_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2309_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2309_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v_fst_2299_; 
v_fst_2299_ = lean_ctor_get(v_a_2295_, 0);
if (lean_obj_tag(v_fst_2299_) == 0)
{
lean_object* v_snd_2300_; lean_object* v___x_2301_; lean_object* v___x_2303_; 
v_snd_2300_ = lean_ctor_get(v_a_2295_, 1);
lean_inc(v_snd_2300_);
lean_dec(v_a_2295_);
v___x_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2301_, 0, v_snd_2300_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v___x_2301_);
v___x_2303_ = v___x_2297_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
else
{
lean_object* v_val_2305_; lean_object* v___x_2307_; 
lean_inc_ref(v_fst_2299_);
lean_dec(v_a_2295_);
v_val_2305_ = lean_ctor_get(v_fst_2299_, 0);
lean_inc(v_val_2305_);
lean_dec_ref_known(v_fst_2299_, 1);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v_val_2305_);
v___x_2307_ = v___x_2297_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_val_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
v_a_2310_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2294_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2294_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object* v_init_2318_, lean_object* v_c_2319_, lean_object* v_x_2320_, lean_object* v_as_2321_, size_t v_sz_2322_, size_t v_i_2323_, lean_object* v_b_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
uint8_t v___x_2336_; 
v___x_2336_ = lean_usize_dec_lt(v_i_2323_, v_sz_2322_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; 
lean_dec(v_x_2320_);
lean_dec_ref(v_c_2319_);
v___x_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2337_, 0, v_b_2324_);
return v___x_2337_;
}
else
{
lean_object* v_snd_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2372_; 
v_snd_2338_ = lean_ctor_get(v_b_2324_, 1);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_b_2324_);
if (v_isSharedCheck_2372_ == 0)
{
lean_object* v_unused_2373_; 
v_unused_2373_ = lean_ctor_get(v_b_2324_, 0);
lean_dec(v_unused_2373_);
v___x_2340_ = v_b_2324_;
v_isShared_2341_ = v_isSharedCheck_2372_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_snd_2338_);
lean_dec(v_b_2324_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2372_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v_a_2343_; lean_object* v___x_2344_; 
v___x_2342_ = lean_box(0);
v_a_2343_ = lean_array_uget_borrowed(v_as_2321_, v_i_2323_);
lean_inc(v_snd_2338_);
lean_inc(v_x_2320_);
lean_inc_ref(v_c_2319_);
v___x_2344_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2318_, v_c_2319_, v_x_2320_, v_a_2343_, v_snd_2338_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2363_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2347_ = v___x_2344_;
v_isShared_2348_ = v_isSharedCheck_2363_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2344_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2363_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
if (lean_obj_tag(v_a_2345_) == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2351_; 
lean_dec(v_x_2320_);
lean_dec_ref(v_c_2319_);
v___x_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2345_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 0, v___x_2349_);
v___x_2351_ = v___x_2340_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2349_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_snd_2338_);
v___x_2351_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2353_; 
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 0, v___x_2351_);
v___x_2353_ = v___x_2347_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; 
lean_del_object(v___x_2347_);
lean_dec(v_snd_2338_);
v_a_2356_ = lean_ctor_get(v_a_2345_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v_a_2345_, 1);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 1, v_a_2356_);
lean_ctor_set(v___x_2340_, 0, v___x_2342_);
v___x_2358_ = v___x_2340_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v_a_2356_);
v___x_2358_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
size_t v___x_2359_; size_t v___x_2360_; 
v___x_2359_ = ((size_t)1ULL);
v___x_2360_ = lean_usize_add(v_i_2323_, v___x_2359_);
v_i_2323_ = v___x_2360_;
v_b_2324_ = v___x_2358_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
lean_del_object(v___x_2340_);
lean_dec(v_snd_2338_);
lean_dec(v_x_2320_);
lean_dec_ref(v_c_2319_);
v_a_2364_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2344_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2344_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object** _args){
lean_object* v_init_2374_ = _args[0];
lean_object* v_c_2375_ = _args[1];
lean_object* v_x_2376_ = _args[2];
lean_object* v_as_2377_ = _args[3];
lean_object* v_sz_2378_ = _args[4];
lean_object* v_i_2379_ = _args[5];
lean_object* v_b_2380_ = _args[6];
lean_object* v___y_2381_ = _args[7];
lean_object* v___y_2382_ = _args[8];
lean_object* v___y_2383_ = _args[9];
lean_object* v___y_2384_ = _args[10];
lean_object* v___y_2385_ = _args[11];
lean_object* v___y_2386_ = _args[12];
lean_object* v___y_2387_ = _args[13];
lean_object* v___y_2388_ = _args[14];
lean_object* v___y_2389_ = _args[15];
lean_object* v___y_2390_ = _args[16];
lean_object* v___y_2391_ = _args[17];
_start:
{
size_t v_sz_boxed_2392_; size_t v_i_boxed_2393_; lean_object* v_res_2394_; 
v_sz_boxed_2392_ = lean_unbox_usize(v_sz_2378_);
lean_dec(v_sz_2378_);
v_i_boxed_2393_ = lean_unbox_usize(v_i_2379_);
lean_dec(v_i_2379_);
v_res_2394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2374_, v_c_2375_, v_x_2376_, v_as_2377_, v_sz_boxed_2392_, v_i_boxed_2393_, v_b_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v_as_2377_);
lean_dec_ref(v_init_2374_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object* v_init_2395_, lean_object* v_c_2396_, lean_object* v_x_2397_, lean_object* v_n_2398_, lean_object* v_b_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2395_, v_c_2396_, v_x_2397_, v_n_2398_, v_b_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v_n_2398_);
lean_dec_ref(v_init_2395_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object* v_c_2412_, lean_object* v_x_2413_, lean_object* v_t_2414_, lean_object* v_init_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_root_2427_; lean_object* v_tail_2428_; lean_object* v___x_2429_; 
v_root_2427_ = lean_ctor_get(v_t_2414_, 0);
v_tail_2428_ = lean_ctor_get(v_t_2414_, 1);
lean_inc(v_x_2413_);
lean_inc_ref(v_c_2412_);
lean_inc_ref(v_init_2415_);
v___x_2429_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2415_, v_c_2412_, v_x_2413_, v_root_2427_, v_init_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
lean_dec_ref(v_init_2415_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2466_; 
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2432_ = v___x_2429_;
v_isShared_2433_ = v_isSharedCheck_2466_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2429_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2466_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
if (lean_obj_tag(v_a_2430_) == 0)
{
lean_object* v_a_2434_; lean_object* v___x_2436_; 
lean_dec(v_x_2413_);
lean_dec_ref(v_c_2412_);
v_a_2434_ = lean_ctor_get(v_a_2430_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v_a_2430_, 1);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 0, v_a_2434_);
v___x_2436_ = v___x_2432_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
else
{
lean_object* v_a_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; size_t v_sz_2441_; size_t v___x_2442_; lean_object* v___x_2443_; 
lean_del_object(v___x_2432_);
v_a_2438_ = lean_ctor_get(v_a_2430_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v_a_2430_, 1);
v___x_2439_ = lean_box(0);
v___x_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
lean_ctor_set(v___x_2440_, 1, v_a_2438_);
v_sz_2441_ = lean_array_size(v_tail_2428_);
v___x_2442_ = ((size_t)0ULL);
v___x_2443_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_c_2412_, v_x_2413_, v_tail_2428_, v_sz_2441_, v___x_2442_, v___x_2440_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2457_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2446_ = v___x_2443_;
v_isShared_2447_ = v_isSharedCheck_2457_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2443_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2457_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v_fst_2448_; 
v_fst_2448_ = lean_ctor_get(v_a_2444_, 0);
if (lean_obj_tag(v_fst_2448_) == 0)
{
lean_object* v_snd_2449_; lean_object* v___x_2451_; 
v_snd_2449_ = lean_ctor_get(v_a_2444_, 1);
lean_inc(v_snd_2449_);
lean_dec(v_a_2444_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v_snd_2449_);
v___x_2451_ = v___x_2446_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_snd_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
else
{
lean_object* v_val_2453_; lean_object* v___x_2455_; 
lean_inc_ref(v_fst_2448_);
lean_dec(v_a_2444_);
v_val_2453_ = lean_ctor_get(v_fst_2448_, 0);
lean_inc(v_val_2453_);
lean_dec_ref_known(v_fst_2448_, 1);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v_val_2453_);
v___x_2455_ = v___x_2446_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_val_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
v_a_2458_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2443_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2443_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v_x_2413_);
lean_dec_ref(v_c_2412_);
v_a_2467_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2429_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2429_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object* v_c_2475_, lean_object* v_x_2476_, lean_object* v_t_2477_, lean_object* v_init_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_c_2475_, v_x_2476_, v_t_2477_, v_init_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v_t_2477_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object* v_x_2491_, lean_object* v_c_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_2505_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v___y_2493_, v___y_2501_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___y_2508_; lean_object* v_diseqs_2533_; lean_object* v_size_2534_; uint8_t v___x_2535_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_a_2506_);
lean_dec_ref_known(v___x_2505_, 1);
v_diseqs_2533_ = lean_ctor_get(v_a_2506_, 9);
lean_inc_ref(v_diseqs_2533_);
lean_dec(v_a_2506_);
v_size_2534_ = lean_ctor_get(v_diseqs_2533_, 2);
v___x_2535_ = lean_nat_dec_lt(v_x_2491_, v_size_2534_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; 
lean_dec_ref(v_diseqs_2533_);
v___x_2536_ = l_outOfBounds___redArg(v___x_2504_);
v___y_2508_ = v___x_2536_;
goto v___jp_2507_;
}
else
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2504_, v_diseqs_2533_, v_x_2491_);
lean_dec_ref(v_diseqs_2533_);
v___y_2508_ = v___x_2537_;
goto v___jp_2507_;
}
v___jp_2507_:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = lean_box(0);
v___x_2510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0));
v___x_2511_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_c_2492_, v_x_2491_, v___y_2508_, v___x_2510_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
lean_dec_ref(v___y_2508_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2524_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2524_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2524_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v_fst_2516_; 
v_fst_2516_ = lean_ctor_get(v_a_2512_, 0);
lean_inc(v_fst_2516_);
lean_dec(v_a_2512_);
if (lean_obj_tag(v_fst_2516_) == 0)
{
lean_object* v___x_2518_; 
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v___x_2509_);
v___x_2518_ = v___x_2514_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2509_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
else
{
lean_object* v_val_2520_; lean_object* v___x_2522_; 
v_val_2520_ = lean_ctor_get(v_fst_2516_, 0);
lean_inc(v_val_2520_);
lean_dec_ref_known(v_fst_2516_, 1);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v_val_2520_);
v___x_2522_ = v___x_2514_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_val_2520_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
v_a_2525_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2511_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2511_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2545_; 
lean_dec_ref(v_c_2492_);
lean_dec(v_x_2491_);
v_a_2538_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2540_ = v___x_2505_;
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2505_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2543_; 
if (v_isShared_2541_ == 0)
{
v___x_2543_ = v___x_2540_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_a_2538_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object* v_x_2546_, lean_object* v_c_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_x_2546_, v_c_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec(v___y_2548_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object* v_c_2560_, lean_object* v_x_2561_, lean_object* v_as_2562_, size_t v_sz_2563_, size_t v_i_2564_, lean_object* v_b_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v___x_2577_; 
v___x_2577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_2560_, v_x_2561_, v_as_2562_, v_sz_2563_, v_i_2564_, v_b_2565_, v___y_2566_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object** _args){
lean_object* v_c_2578_ = _args[0];
lean_object* v_x_2579_ = _args[1];
lean_object* v_as_2580_ = _args[2];
lean_object* v_sz_2581_ = _args[3];
lean_object* v_i_2582_ = _args[4];
lean_object* v_b_2583_ = _args[5];
lean_object* v___y_2584_ = _args[6];
lean_object* v___y_2585_ = _args[7];
lean_object* v___y_2586_ = _args[8];
lean_object* v___y_2587_ = _args[9];
lean_object* v___y_2588_ = _args[10];
lean_object* v___y_2589_ = _args[11];
lean_object* v___y_2590_ = _args[12];
lean_object* v___y_2591_ = _args[13];
lean_object* v___y_2592_ = _args[14];
lean_object* v___y_2593_ = _args[15];
lean_object* v___y_2594_ = _args[16];
_start:
{
size_t v_sz_boxed_2595_; size_t v_i_boxed_2596_; lean_object* v_res_2597_; 
v_sz_boxed_2595_ = lean_unbox_usize(v_sz_2581_);
lean_dec(v_sz_2581_);
v_i_boxed_2596_ = lean_unbox_usize(v_i_2582_);
lean_dec(v_i_2582_);
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(v_c_2578_, v_x_2579_, v_as_2580_, v_sz_boxed_2595_, v_i_boxed_2596_, v_b_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v_as_2580_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object* v_c_2598_, lean_object* v_x_2599_, lean_object* v_as_2600_, size_t v_sz_2601_, size_t v_i_2602_, lean_object* v_b_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2598_, v_x_2599_, v_as_2600_, v_sz_2601_, v_i_2602_, v_b_2603_, v___y_2604_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object** _args){
lean_object* v_c_2616_ = _args[0];
lean_object* v_x_2617_ = _args[1];
lean_object* v_as_2618_ = _args[2];
lean_object* v_sz_2619_ = _args[3];
lean_object* v_i_2620_ = _args[4];
lean_object* v_b_2621_ = _args[5];
lean_object* v___y_2622_ = _args[6];
lean_object* v___y_2623_ = _args[7];
lean_object* v___y_2624_ = _args[8];
lean_object* v___y_2625_ = _args[9];
lean_object* v___y_2626_ = _args[10];
lean_object* v___y_2627_ = _args[11];
lean_object* v___y_2628_ = _args[12];
lean_object* v___y_2629_ = _args[13];
lean_object* v___y_2630_ = _args[14];
lean_object* v___y_2631_ = _args[15];
lean_object* v___y_2632_ = _args[16];
_start:
{
size_t v_sz_boxed_2633_; size_t v_i_boxed_2634_; lean_object* v_res_2635_; 
v_sz_boxed_2633_ = lean_unbox_usize(v_sz_2619_);
lean_dec(v_sz_2619_);
v_i_boxed_2634_ = lean_unbox_usize(v_i_2620_);
lean_dec(v_i_2620_);
v_res_2635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(v_c_2616_, v_x_2617_, v_as_2618_, v_sz_boxed_2633_, v_i_boxed_2634_, v_b_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v_as_2618_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(lean_object* v_v_2636_, lean_object* v_a_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_snd_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2680_; 
v_snd_2649_ = lean_ctor_get(v_a_2637_, 1);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_a_2637_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; 
v_unused_2681_ = lean_ctor_get(v_a_2637_, 0);
lean_dec(v_unused_2681_);
v___x_2651_ = v_a_2637_;
v_isShared_2652_ = v_isSharedCheck_2680_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_snd_2649_);
lean_dec(v_a_2637_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2680_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2653_ = lean_box(0);
lean_inc(v_snd_2649_);
lean_inc(v_v_2636_);
v___x_2654_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_v_2636_, v_snd_2649_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2671_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2657_ = v___x_2654_;
v_isShared_2658_ = v_isSharedCheck_2671_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v___x_2654_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2671_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
if (lean_obj_tag(v_a_2655_) == 1)
{
lean_object* v_val_2659_; lean_object* v___x_2661_; 
lean_del_object(v___x_2657_);
lean_dec(v_snd_2649_);
v_val_2659_ = lean_ctor_get(v_a_2655_, 0);
lean_inc(v_val_2659_);
lean_dec_ref_known(v_a_2655_, 1);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 1, v_val_2659_);
lean_ctor_set(v___x_2651_, 0, v___x_2653_);
v___x_2661_ = v___x_2651_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_val_2659_);
v___x_2661_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
v_a_2637_ = v___x_2661_;
goto _start;
}
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2666_; 
lean_dec(v_a_2655_);
lean_dec(v_v_2636_);
lean_inc(v_snd_2649_);
v___x_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_snd_2649_);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2664_);
v___x_2666_ = v___x_2651_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v___x_2664_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v_snd_2649_);
v___x_2666_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
lean_object* v___x_2668_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 0, v___x_2666_);
v___x_2668_ = v___x_2657_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_del_object(v___x_2651_);
lean_dec(v_snd_2649_);
lean_dec(v_v_2636_);
v_a_2672_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2654_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2654_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg___boxed(lean_object* v_v_2682_, lean_object* v_a_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2682_, v_a_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec(v___y_2684_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object* v_c_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_p_2708_; 
v_p_2708_ = lean_ctor_get(v_c_2696_, 0);
if (lean_obj_tag(v_p_2708_) == 1)
{
lean_object* v_v_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v_v_2709_ = lean_ctor_get(v_p_2708_, 1);
lean_inc(v_v_2709_);
v___x_2710_ = lean_box(0);
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
lean_ctor_set(v___x_2711_, 1, v_c_2696_);
v___x_2712_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2709_, v___x_2711_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2726_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2715_ = v___x_2712_;
v_isShared_2716_ = v_isSharedCheck_2726_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2726_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v_fst_2717_; 
v_fst_2717_ = lean_ctor_get(v_a_2713_, 0);
if (lean_obj_tag(v_fst_2717_) == 0)
{
lean_object* v_snd_2718_; lean_object* v___x_2720_; 
v_snd_2718_ = lean_ctor_get(v_a_2713_, 1);
lean_inc(v_snd_2718_);
lean_dec(v_a_2713_);
if (v_isShared_2716_ == 0)
{
lean_ctor_set(v___x_2715_, 0, v_snd_2718_);
v___x_2720_ = v___x_2715_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_snd_2718_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
else
{
lean_object* v_val_2722_; lean_object* v___x_2724_; 
lean_inc_ref(v_fst_2717_);
lean_dec(v_a_2713_);
v_val_2722_ = lean_ctor_get(v_fst_2717_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v_fst_2717_, 1);
if (v_isShared_2716_ == 0)
{
lean_ctor_set(v___x_2715_, 0, v_val_2722_);
v___x_2724_ = v___x_2715_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_val_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
v_a_2727_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2712_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2712_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
else
{
lean_object* v___x_2735_; 
v___x_2735_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_2696_, v___y_2697_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2735_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object* v_c_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_c_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec(v___y_2737_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object* v_v_2749_, lean_object* v_inst_2750_, lean_object* v_a_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2749_, v_a_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object* v_v_2764_, lean_object* v_inst_2765_, lean_object* v_a_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(v_v_2764_, v_inst_2765_, v_a_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
lean_dec(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
lean_dec(v___y_2767_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object* v_a_2779_, lean_object* v_x_2780_, size_t v_x_2781_, size_t v_x_2782_){
_start:
{
if (lean_obj_tag(v_x_2780_) == 0)
{
lean_object* v_cs_2783_; size_t v_j_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; uint8_t v___x_2787_; 
v_cs_2783_ = lean_ctor_get(v_x_2780_, 0);
v_j_2784_ = lean_usize_shift_right(v_x_2781_, v_x_2782_);
v___x_2785_ = lean_usize_to_nat(v_j_2784_);
v___x_2786_ = lean_array_get_size(v_cs_2783_);
v___x_2787_ = lean_nat_dec_lt(v___x_2785_, v___x_2786_);
if (v___x_2787_ == 0)
{
lean_dec(v___x_2785_);
lean_dec_ref(v_a_2779_);
return v_x_2780_;
}
else
{
lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2805_; 
lean_inc_ref(v_cs_2783_);
v_isSharedCheck_2805_ = !lean_is_exclusive(v_x_2780_);
if (v_isSharedCheck_2805_ == 0)
{
lean_object* v_unused_2806_; 
v_unused_2806_ = lean_ctor_get(v_x_2780_, 0);
lean_dec(v_unused_2806_);
v___x_2789_ = v_x_2780_;
v_isShared_2790_ = v_isSharedCheck_2805_;
goto v_resetjp_2788_;
}
else
{
lean_dec(v_x_2780_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2805_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
size_t v___x_2791_; size_t v___x_2792_; size_t v___x_2793_; size_t v_i_2794_; size_t v___x_2795_; size_t v_shift_2796_; lean_object* v_v_2797_; lean_object* v___x_2798_; lean_object* v_xs_x27_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2791_ = ((size_t)1ULL);
v___x_2792_ = lean_usize_shift_left(v___x_2791_, v_x_2782_);
v___x_2793_ = lean_usize_sub(v___x_2792_, v___x_2791_);
v_i_2794_ = lean_usize_land(v_x_2781_, v___x_2793_);
v___x_2795_ = ((size_t)5ULL);
v_shift_2796_ = lean_usize_sub(v_x_2782_, v___x_2795_);
v_v_2797_ = lean_array_fget(v_cs_2783_, v___x_2785_);
v___x_2798_ = lean_box(0);
v_xs_x27_2799_ = lean_array_fset(v_cs_2783_, v___x_2785_, v___x_2798_);
v___x_2800_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2779_, v_v_2797_, v_i_2794_, v_shift_2796_);
v___x_2801_ = lean_array_fset(v_xs_x27_2799_, v___x_2785_, v___x_2800_);
lean_dec(v___x_2785_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v___x_2801_);
v___x_2803_ = v___x_2789_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
else
{
lean_object* v_vs_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; uint8_t v___x_2810_; 
v_vs_2807_ = lean_ctor_get(v_x_2780_, 0);
v___x_2808_ = lean_usize_to_nat(v_x_2781_);
v___x_2809_ = lean_array_get_size(v_vs_2807_);
v___x_2810_ = lean_nat_dec_lt(v___x_2808_, v___x_2809_);
if (v___x_2810_ == 0)
{
lean_dec(v___x_2808_);
lean_dec_ref(v_a_2779_);
return v_x_2780_;
}
else
{
lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2822_; 
lean_inc_ref(v_vs_2807_);
v_isSharedCheck_2822_ = !lean_is_exclusive(v_x_2780_);
if (v_isSharedCheck_2822_ == 0)
{
lean_object* v_unused_2823_; 
v_unused_2823_ = lean_ctor_get(v_x_2780_, 0);
lean_dec(v_unused_2823_);
v___x_2812_ = v_x_2780_;
v_isShared_2813_ = v_isSharedCheck_2822_;
goto v_resetjp_2811_;
}
else
{
lean_dec(v_x_2780_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2822_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v_v_2814_; lean_object* v___x_2815_; lean_object* v_xs_x27_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2820_; 
v_v_2814_ = lean_array_fget(v_vs_2807_, v___x_2808_);
v___x_2815_ = lean_box(0);
v_xs_x27_2816_ = lean_array_fset(v_vs_2807_, v___x_2808_, v___x_2815_);
v___x_2817_ = l_Lean_PersistentArray_push___redArg(v_v_2814_, v_a_2779_);
v___x_2818_ = lean_array_fset(v_xs_x27_2816_, v___x_2808_, v___x_2817_);
lean_dec(v___x_2808_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2818_);
v___x_2820_ = v___x_2812_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2818_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object* v_a_2824_, lean_object* v_x_2825_, lean_object* v_x_2826_, lean_object* v_x_2827_){
_start:
{
size_t v_x_67091__boxed_2828_; size_t v_x_67092__boxed_2829_; lean_object* v_res_2830_; 
v_x_67091__boxed_2828_ = lean_unbox_usize(v_x_2826_);
lean_dec(v_x_2826_);
v_x_67092__boxed_2829_ = lean_unbox_usize(v_x_2827_);
lean_dec(v_x_2827_);
v_res_2830_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2824_, v_x_2825_, v_x_67091__boxed_2828_, v_x_67092__boxed_2829_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object* v_a_2831_, lean_object* v_t_2832_, lean_object* v_i_2833_){
_start:
{
lean_object* v_root_2834_; lean_object* v_tail_2835_; lean_object* v_size_2836_; size_t v_shift_2837_; lean_object* v_tailOff_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2862_; 
v_root_2834_ = lean_ctor_get(v_t_2832_, 0);
v_tail_2835_ = lean_ctor_get(v_t_2832_, 1);
v_size_2836_ = lean_ctor_get(v_t_2832_, 2);
v_shift_2837_ = lean_ctor_get_usize(v_t_2832_, 4);
v_tailOff_2838_ = lean_ctor_get(v_t_2832_, 3);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_t_2832_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2840_ = v_t_2832_;
v_isShared_2841_ = v_isSharedCheck_2862_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_tailOff_2838_);
lean_inc(v_size_2836_);
lean_inc(v_tail_2835_);
lean_inc(v_root_2834_);
lean_dec(v_t_2832_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2862_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
uint8_t v___x_2842_; 
v___x_2842_ = lean_nat_dec_le(v_tailOff_2838_, v_i_2833_);
if (v___x_2842_ == 0)
{
size_t v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2846_; 
v___x_2843_ = lean_usize_of_nat(v_i_2833_);
v___x_2844_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2831_, v_root_2834_, v___x_2843_, v_shift_2837_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2844_);
v___x_2846_ = v___x_2840_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2847_, 1, v_tail_2835_);
lean_ctor_set(v_reuseFailAlloc_2847_, 2, v_size_2836_);
lean_ctor_set(v_reuseFailAlloc_2847_, 3, v_tailOff_2838_);
lean_ctor_set_usize(v_reuseFailAlloc_2847_, 4, v_shift_2837_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
else
{
lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v___x_2848_ = lean_nat_sub(v_i_2833_, v_tailOff_2838_);
v___x_2849_ = lean_array_get_size(v_tail_2835_);
v___x_2850_ = lean_nat_dec_lt(v___x_2848_, v___x_2849_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2852_; 
lean_dec(v___x_2848_);
lean_dec_ref(v_a_2831_);
if (v_isShared_2841_ == 0)
{
v___x_2852_ = v___x_2840_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_root_2834_);
lean_ctor_set(v_reuseFailAlloc_2853_, 1, v_tail_2835_);
lean_ctor_set(v_reuseFailAlloc_2853_, 2, v_size_2836_);
lean_ctor_set(v_reuseFailAlloc_2853_, 3, v_tailOff_2838_);
lean_ctor_set_usize(v_reuseFailAlloc_2853_, 4, v_shift_2837_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
else
{
lean_object* v_v_2854_; lean_object* v___x_2855_; lean_object* v_xs_x27_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2860_; 
v_v_2854_ = lean_array_fget(v_tail_2835_, v___x_2848_);
v___x_2855_ = lean_box(0);
v_xs_x27_2856_ = lean_array_fset(v_tail_2835_, v___x_2848_, v___x_2855_);
v___x_2857_ = l_Lean_PersistentArray_push___redArg(v_v_2854_, v_a_2831_);
v___x_2858_ = lean_array_fset(v_xs_x27_2856_, v___x_2848_, v___x_2857_);
lean_dec(v___x_2848_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 1, v___x_2858_);
v___x_2860_ = v___x_2840_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_root_2834_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v___x_2858_);
lean_ctor_set(v_reuseFailAlloc_2861_, 2, v_size_2836_);
lean_ctor_set(v_reuseFailAlloc_2861_, 3, v_tailOff_2838_);
lean_ctor_set_usize(v_reuseFailAlloc_2861_, 4, v_shift_2837_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object* v_a_2863_, lean_object* v_t_2864_, lean_object* v_i_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2863_, v_t_2864_, v_i_2865_);
lean_dec(v_i_2865_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object* v_a_2867_, lean_object* v_v_2868_, lean_object* v_s_2869_){
_start:
{
lean_object* v_vars_2870_; lean_object* v_varMap_2871_; lean_object* v_vars_x27_2872_; lean_object* v_varMap_x27_2873_; lean_object* v_natToIntMap_2874_; lean_object* v_natDef_2875_; lean_object* v_dvds_2876_; lean_object* v_lowers_2877_; lean_object* v_uppers_2878_; lean_object* v_diseqs_2879_; lean_object* v_elimEqs_2880_; lean_object* v_elimStack_2881_; lean_object* v_occurs_2882_; lean_object* v_assignment_2883_; lean_object* v_nextCnstrId_2884_; uint8_t v_caseSplits_2885_; lean_object* v_steps_2886_; lean_object* v_conflict_x3f_2887_; lean_object* v_diseqSplits_2888_; lean_object* v_divMod_2889_; uint8_t v_usedCommRing_2890_; lean_object* v_nonlinearOccs_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2899_; 
v_vars_2870_ = lean_ctor_get(v_s_2869_, 0);
v_varMap_2871_ = lean_ctor_get(v_s_2869_, 1);
v_vars_x27_2872_ = lean_ctor_get(v_s_2869_, 2);
v_varMap_x27_2873_ = lean_ctor_get(v_s_2869_, 3);
v_natToIntMap_2874_ = lean_ctor_get(v_s_2869_, 4);
v_natDef_2875_ = lean_ctor_get(v_s_2869_, 5);
v_dvds_2876_ = lean_ctor_get(v_s_2869_, 6);
v_lowers_2877_ = lean_ctor_get(v_s_2869_, 7);
v_uppers_2878_ = lean_ctor_get(v_s_2869_, 8);
v_diseqs_2879_ = lean_ctor_get(v_s_2869_, 9);
v_elimEqs_2880_ = lean_ctor_get(v_s_2869_, 10);
v_elimStack_2881_ = lean_ctor_get(v_s_2869_, 11);
v_occurs_2882_ = lean_ctor_get(v_s_2869_, 12);
v_assignment_2883_ = lean_ctor_get(v_s_2869_, 13);
v_nextCnstrId_2884_ = lean_ctor_get(v_s_2869_, 14);
v_caseSplits_2885_ = lean_ctor_get_uint8(v_s_2869_, sizeof(void*)*20);
v_steps_2886_ = lean_ctor_get(v_s_2869_, 15);
v_conflict_x3f_2887_ = lean_ctor_get(v_s_2869_, 16);
v_diseqSplits_2888_ = lean_ctor_get(v_s_2869_, 17);
v_divMod_2889_ = lean_ctor_get(v_s_2869_, 18);
v_usedCommRing_2890_ = lean_ctor_get_uint8(v_s_2869_, sizeof(void*)*20 + 1);
v_nonlinearOccs_2891_ = lean_ctor_get(v_s_2869_, 19);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_s_2869_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2893_ = v_s_2869_;
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_nonlinearOccs_2891_);
lean_inc(v_divMod_2889_);
lean_inc(v_diseqSplits_2888_);
lean_inc(v_conflict_x3f_2887_);
lean_inc(v_steps_2886_);
lean_inc(v_nextCnstrId_2884_);
lean_inc(v_assignment_2883_);
lean_inc(v_occurs_2882_);
lean_inc(v_elimStack_2881_);
lean_inc(v_elimEqs_2880_);
lean_inc(v_diseqs_2879_);
lean_inc(v_uppers_2878_);
lean_inc(v_lowers_2877_);
lean_inc(v_dvds_2876_);
lean_inc(v_natDef_2875_);
lean_inc(v_natToIntMap_2874_);
lean_inc(v_varMap_x27_2873_);
lean_inc(v_vars_x27_2872_);
lean_inc(v_varMap_2871_);
lean_inc(v_vars_2870_);
lean_dec(v_s_2869_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2895_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2867_, v_lowers_2877_, v_v_2868_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 7, v___x_2895_);
v___x_2897_ = v___x_2893_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_vars_2870_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v_varMap_2871_);
lean_ctor_set(v_reuseFailAlloc_2898_, 2, v_vars_x27_2872_);
lean_ctor_set(v_reuseFailAlloc_2898_, 3, v_varMap_x27_2873_);
lean_ctor_set(v_reuseFailAlloc_2898_, 4, v_natToIntMap_2874_);
lean_ctor_set(v_reuseFailAlloc_2898_, 5, v_natDef_2875_);
lean_ctor_set(v_reuseFailAlloc_2898_, 6, v_dvds_2876_);
lean_ctor_set(v_reuseFailAlloc_2898_, 7, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2898_, 8, v_uppers_2878_);
lean_ctor_set(v_reuseFailAlloc_2898_, 9, v_diseqs_2879_);
lean_ctor_set(v_reuseFailAlloc_2898_, 10, v_elimEqs_2880_);
lean_ctor_set(v_reuseFailAlloc_2898_, 11, v_elimStack_2881_);
lean_ctor_set(v_reuseFailAlloc_2898_, 12, v_occurs_2882_);
lean_ctor_set(v_reuseFailAlloc_2898_, 13, v_assignment_2883_);
lean_ctor_set(v_reuseFailAlloc_2898_, 14, v_nextCnstrId_2884_);
lean_ctor_set(v_reuseFailAlloc_2898_, 15, v_steps_2886_);
lean_ctor_set(v_reuseFailAlloc_2898_, 16, v_conflict_x3f_2887_);
lean_ctor_set(v_reuseFailAlloc_2898_, 17, v_diseqSplits_2888_);
lean_ctor_set(v_reuseFailAlloc_2898_, 18, v_divMod_2889_);
lean_ctor_set(v_reuseFailAlloc_2898_, 19, v_nonlinearOccs_2891_);
lean_ctor_set_uint8(v_reuseFailAlloc_2898_, sizeof(void*)*20, v_caseSplits_2885_);
lean_ctor_set_uint8(v_reuseFailAlloc_2898_, sizeof(void*)*20 + 1, v_usedCommRing_2890_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object* v_a_2900_, lean_object* v_v_2901_, lean_object* v_s_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(v_a_2900_, v_v_2901_, v_s_2902_);
lean_dec(v_v_2901_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object* v_a_2904_, lean_object* v_v_2905_, lean_object* v_s_2906_){
_start:
{
lean_object* v_vars_2907_; lean_object* v_varMap_2908_; lean_object* v_vars_x27_2909_; lean_object* v_varMap_x27_2910_; lean_object* v_natToIntMap_2911_; lean_object* v_natDef_2912_; lean_object* v_dvds_2913_; lean_object* v_lowers_2914_; lean_object* v_uppers_2915_; lean_object* v_diseqs_2916_; lean_object* v_elimEqs_2917_; lean_object* v_elimStack_2918_; lean_object* v_occurs_2919_; lean_object* v_assignment_2920_; lean_object* v_nextCnstrId_2921_; uint8_t v_caseSplits_2922_; lean_object* v_steps_2923_; lean_object* v_conflict_x3f_2924_; lean_object* v_diseqSplits_2925_; lean_object* v_divMod_2926_; uint8_t v_usedCommRing_2927_; lean_object* v_nonlinearOccs_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2936_; 
v_vars_2907_ = lean_ctor_get(v_s_2906_, 0);
v_varMap_2908_ = lean_ctor_get(v_s_2906_, 1);
v_vars_x27_2909_ = lean_ctor_get(v_s_2906_, 2);
v_varMap_x27_2910_ = lean_ctor_get(v_s_2906_, 3);
v_natToIntMap_2911_ = lean_ctor_get(v_s_2906_, 4);
v_natDef_2912_ = lean_ctor_get(v_s_2906_, 5);
v_dvds_2913_ = lean_ctor_get(v_s_2906_, 6);
v_lowers_2914_ = lean_ctor_get(v_s_2906_, 7);
v_uppers_2915_ = lean_ctor_get(v_s_2906_, 8);
v_diseqs_2916_ = lean_ctor_get(v_s_2906_, 9);
v_elimEqs_2917_ = lean_ctor_get(v_s_2906_, 10);
v_elimStack_2918_ = lean_ctor_get(v_s_2906_, 11);
v_occurs_2919_ = lean_ctor_get(v_s_2906_, 12);
v_assignment_2920_ = lean_ctor_get(v_s_2906_, 13);
v_nextCnstrId_2921_ = lean_ctor_get(v_s_2906_, 14);
v_caseSplits_2922_ = lean_ctor_get_uint8(v_s_2906_, sizeof(void*)*20);
v_steps_2923_ = lean_ctor_get(v_s_2906_, 15);
v_conflict_x3f_2924_ = lean_ctor_get(v_s_2906_, 16);
v_diseqSplits_2925_ = lean_ctor_get(v_s_2906_, 17);
v_divMod_2926_ = lean_ctor_get(v_s_2906_, 18);
v_usedCommRing_2927_ = lean_ctor_get_uint8(v_s_2906_, sizeof(void*)*20 + 1);
v_nonlinearOccs_2928_ = lean_ctor_get(v_s_2906_, 19);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_s_2906_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2930_ = v_s_2906_;
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_nonlinearOccs_2928_);
lean_inc(v_divMod_2926_);
lean_inc(v_diseqSplits_2925_);
lean_inc(v_conflict_x3f_2924_);
lean_inc(v_steps_2923_);
lean_inc(v_nextCnstrId_2921_);
lean_inc(v_assignment_2920_);
lean_inc(v_occurs_2919_);
lean_inc(v_elimStack_2918_);
lean_inc(v_elimEqs_2917_);
lean_inc(v_diseqs_2916_);
lean_inc(v_uppers_2915_);
lean_inc(v_lowers_2914_);
lean_inc(v_dvds_2913_);
lean_inc(v_natDef_2912_);
lean_inc(v_natToIntMap_2911_);
lean_inc(v_varMap_x27_2910_);
lean_inc(v_vars_x27_2909_);
lean_inc(v_varMap_2908_);
lean_inc(v_vars_2907_);
lean_dec(v_s_2906_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2932_; lean_object* v___x_2934_; 
v___x_2932_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2904_, v_uppers_2915_, v_v_2905_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 8, v___x_2932_);
v___x_2934_ = v___x_2930_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 20, 2);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_vars_2907_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v_varMap_2908_);
lean_ctor_set(v_reuseFailAlloc_2935_, 2, v_vars_x27_2909_);
lean_ctor_set(v_reuseFailAlloc_2935_, 3, v_varMap_x27_2910_);
lean_ctor_set(v_reuseFailAlloc_2935_, 4, v_natToIntMap_2911_);
lean_ctor_set(v_reuseFailAlloc_2935_, 5, v_natDef_2912_);
lean_ctor_set(v_reuseFailAlloc_2935_, 6, v_dvds_2913_);
lean_ctor_set(v_reuseFailAlloc_2935_, 7, v_lowers_2914_);
lean_ctor_set(v_reuseFailAlloc_2935_, 8, v___x_2932_);
lean_ctor_set(v_reuseFailAlloc_2935_, 9, v_diseqs_2916_);
lean_ctor_set(v_reuseFailAlloc_2935_, 10, v_elimEqs_2917_);
lean_ctor_set(v_reuseFailAlloc_2935_, 11, v_elimStack_2918_);
lean_ctor_set(v_reuseFailAlloc_2935_, 12, v_occurs_2919_);
lean_ctor_set(v_reuseFailAlloc_2935_, 13, v_assignment_2920_);
lean_ctor_set(v_reuseFailAlloc_2935_, 14, v_nextCnstrId_2921_);
lean_ctor_set(v_reuseFailAlloc_2935_, 15, v_steps_2923_);
lean_ctor_set(v_reuseFailAlloc_2935_, 16, v_conflict_x3f_2924_);
lean_ctor_set(v_reuseFailAlloc_2935_, 17, v_diseqSplits_2925_);
lean_ctor_set(v_reuseFailAlloc_2935_, 18, v_divMod_2926_);
lean_ctor_set(v_reuseFailAlloc_2935_, 19, v_nonlinearOccs_2928_);
lean_ctor_set_uint8(v_reuseFailAlloc_2935_, sizeof(void*)*20, v_caseSplits_2922_);
lean_ctor_set_uint8(v_reuseFailAlloc_2935_, sizeof(void*)*20 + 1, v_usedCommRing_2927_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object* v_a_2937_, lean_object* v_v_2938_, lean_object* v_s_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(v_a_2937_, v_v_2938_, v_s_2939_);
lean_dec(v_v_2938_);
return v_res_2940_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3(void){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2948_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2));
v___x_2949_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2950_ = l_Lean_Name_append(v___x_2949_, v___x_2948_);
return v___x_2950_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6(void){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2957_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5));
v___x_2958_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2959_ = l_Lean_Name_append(v___x_2958_, v___x_2957_);
return v___x_2959_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9(void){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8));
v___x_2967_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2968_ = l_Lean_Name_append(v___x_2967_, v___x_2966_);
return v___x_2968_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11(void){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2973_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10));
v___x_2974_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2975_ = l_Lean_Name_append(v___x_2974_, v___x_2973_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object* v_c_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___x_3060_; 
v___x_3060_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v___y_2977_, v___y_2985_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3201_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3063_ = v___x_3060_;
v_isShared_3064_ = v_isSharedCheck_3201_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3201_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
uint8_t v___x_3065_; 
v___x_3065_ = lean_unbox(v_a_3061_);
lean_dec(v_a_3061_);
if (v___x_3065_ == 0)
{
lean_object* v_toCold_3066_; lean_object* v_options_3067_; lean_object* v_inheritedTraceOptions_3068_; uint8_t v_hasTrace_3069_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; 
lean_del_object(v___x_3063_);
v_toCold_3066_ = lean_ctor_get(v___y_2985_, 0);
v_options_3067_ = lean_ctor_get(v_toCold_3066_, 2);
v_inheritedTraceOptions_3068_ = lean_ctor_get(v_toCold_3066_, 11);
v_hasTrace_3069_ = lean_ctor_get_uint8(v_options_3067_, sizeof(void*)*1);
if (v_hasTrace_3069_ == 0)
{
v___y_3071_ = v___y_2977_;
v___y_3072_ = v___y_2978_;
v___y_3073_ = v___y_2979_;
v___y_3074_ = v___y_2980_;
v___y_3075_ = v___y_2981_;
v___y_3076_ = v___y_2982_;
v___y_3077_ = v___y_2983_;
v___y_3078_ = v___y_2984_;
v___y_3079_ = v___y_2985_;
v___y_3080_ = v___y_2986_;
goto v___jp_3070_;
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; uint8_t v___x_3185_; 
v___x_3183_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10));
v___x_3184_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11);
v___x_3185_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3068_, v_options_3067_, v___x_3184_);
if (v___x_3185_ == 0)
{
v___y_3071_ = v___y_2977_;
v___y_3072_ = v___y_2978_;
v___y_3073_ = v___y_2979_;
v___y_3074_ = v___y_2980_;
v___y_3075_ = v___y_2981_;
v___y_3076_ = v___y_2982_;
v___y_3077_ = v___y_2983_;
v___y_3078_ = v___y_2984_;
v___y_3079_ = v___y_2985_;
v___y_3080_ = v___y_2986_;
goto v___jp_3070_;
}
else
{
lean_object* v___x_3186_; 
lean_inc_ref(v_c_2976_);
v___x_3186_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_2976_, v___y_2977_, v___y_2985_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3188_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3187_);
lean_dec_ref_known(v___x_3186_, 1);
v___x_3188_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3183_, v_a_3187_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_dec_ref_known(v___x_3188_, 1);
v___y_3071_ = v___y_2977_;
v___y_3072_ = v___y_2978_;
v___y_3073_ = v___y_2979_;
v___y_3074_ = v___y_2980_;
v___y_3075_ = v___y_2981_;
v___y_3076_ = v___y_2982_;
v___y_3077_ = v___y_2983_;
v___y_3078_ = v___y_2984_;
v___y_3079_ = v___y_2985_;
v___y_3080_ = v___y_2986_;
goto v___jp_3070_;
}
else
{
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_c_2976_);
return v___x_3188_;
}
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_c_2976_);
v_a_3189_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3186_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3186_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
}
v___jp_3070_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(v_c_2976_);
lean_inc_ref(v___y_3079_);
v___x_3082_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v___x_3081_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v_p_3084_; uint8_t v___x_3085_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v_p_3084_ = lean_ctor_get(v_a_3083_, 0);
v___x_3085_ = l_Int_Internal_Linear_Poly_isUnsatLe(v_p_3084_);
if (v___x_3085_ == 0)
{
uint8_t v___x_3086_; 
v___x_3086_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(v_a_3083_);
if (v___x_3086_ == 0)
{
if (lean_obj_tag(v_p_3084_) == 1)
{
lean_object* v_k_3087_; lean_object* v_v_3088_; lean_object* v___x_3089_; 
v_k_3087_ = lean_ctor_get(v_p_3084_, 0);
lean_inc(v_k_3087_);
v_v_3088_ = lean_ctor_get(v_p_3084_, 1);
lean_inc(v_v_3088_);
lean_inc(v_a_3083_);
v___x_3089_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_a_3083_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3129_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3092_ = v___x_3089_;
v_isShared_3093_ = v_isSharedCheck_3129_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3089_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3129_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
uint8_t v___x_3094_; 
v___x_3094_ = lean_unbox(v_a_3090_);
lean_dec(v_a_3090_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; 
lean_del_object(v___x_3092_);
v___x_3095_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_a_3083_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_toCold_3096_; lean_object* v_options_3097_; lean_object* v_a_3098_; lean_object* v_inheritedTraceOptions_3099_; uint8_t v_hasTrace_3100_; lean_object* v___f_3101_; lean_object* v___f_3102_; 
v_toCold_3096_ = lean_ctor_get(v___y_3079_, 0);
v_options_3097_ = lean_ctor_get(v_toCold_3096_, 2);
v_a_3098_ = lean_ctor_get(v___x_3095_, 0);
lean_inc_n(v_a_3098_, 3);
lean_dec_ref_known(v___x_3095_, 1);
v_inheritedTraceOptions_3099_ = lean_ctor_get(v_toCold_3096_, 11);
v_hasTrace_3100_ = lean_ctor_get_uint8(v_options_3097_, sizeof(void*)*1);
lean_inc_n(v_v_3088_, 2);
v___f_3101_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3101_, 0, v_a_3098_);
lean_closure_set(v___f_3101_, 1, v_v_3088_);
v___f_3102_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3102_, 0, v_a_3098_);
lean_closure_set(v___f_3102_, 1, v_v_3088_);
if (v_hasTrace_3100_ == 0)
{
v___y_3019_ = v_a_3098_;
v___y_3020_ = v_k_3087_;
v___y_3021_ = v___f_3102_;
v___y_3022_ = v___f_3101_;
v___y_3023_ = v_v_3088_;
v___y_3024_ = v___y_3071_;
v___y_3025_ = v___y_3077_;
v___y_3026_ = v___y_3078_;
v___y_3027_ = v___y_3079_;
v___y_3028_ = v___y_3080_;
goto v___jp_3018_;
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; uint8_t v___x_3105_; 
v___x_3103_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2));
v___x_3104_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3);
v___x_3105_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3099_, v_options_3097_, v___x_3104_);
if (v___x_3105_ == 0)
{
v___y_3019_ = v_a_3098_;
v___y_3020_ = v_k_3087_;
v___y_3021_ = v___f_3102_;
v___y_3022_ = v___f_3101_;
v___y_3023_ = v_v_3088_;
v___y_3024_ = v___y_3071_;
v___y_3025_ = v___y_3077_;
v___y_3026_ = v___y_3078_;
v___y_3027_ = v___y_3079_;
v___y_3028_ = v___y_3080_;
goto v___jp_3018_;
}
else
{
lean_object* v___x_3106_; 
lean_inc(v_a_3098_);
v___x_3106_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3098_, v___y_3071_, v___y_3079_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3106_, 1);
v___x_3108_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3103_, v_a_3107_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_dec_ref_known(v___x_3108_, 1);
v___y_3019_ = v_a_3098_;
v___y_3020_ = v_k_3087_;
v___y_3021_ = v___f_3102_;
v___y_3022_ = v___f_3101_;
v___y_3023_ = v_v_3088_;
v___y_3024_ = v___y_3071_;
v___y_3025_ = v___y_3077_;
v___y_3026_ = v___y_3078_;
v___y_3027_ = v___y_3079_;
v___y_3028_ = v___y_3080_;
goto v___jp_3018_;
}
else
{
lean_dec_ref(v___f_3102_);
lean_dec_ref(v___f_3101_);
lean_dec(v_a_3098_);
lean_dec(v_v_3088_);
lean_dec(v_k_3087_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
return v___x_3108_;
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
lean_dec_ref(v___f_3102_);
lean_dec_ref(v___f_3101_);
lean_dec(v_a_3098_);
lean_dec(v_v_3088_);
lean_dec(v_k_3087_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
v_a_3109_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3106_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3106_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
lean_dec(v_v_3088_);
lean_dec(v_k_3087_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
v_a_3117_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3095_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3095_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
else
{
lean_object* v___x_3125_; lean_object* v___x_3127_; 
lean_dec(v_v_3088_);
lean_dec(v_k_3087_);
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec(v___y_3071_);
v___x_3125_ = lean_box(0);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 0, v___x_3125_);
v___x_3127_ = v___x_3092_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v___x_3125_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec(v_v_3088_);
lean_dec(v_k_3087_);
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec(v___y_3071_);
v_a_3130_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3089_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3089_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
else
{
lean_object* v___x_3138_; 
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
v___x_3138_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_a_3083_, v___y_3071_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
return v___x_3138_;
}
}
else
{
lean_object* v_toCold_3139_; lean_object* v_options_3140_; uint8_t v_hasTrace_3141_; 
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
v_toCold_3139_ = lean_ctor_get(v___y_3079_, 0);
v_options_3140_ = lean_ctor_get(v_toCold_3139_, 2);
v_hasTrace_3141_ = lean_ctor_get_uint8(v_options_3140_, sizeof(void*)*1);
if (v_hasTrace_3141_ == 0)
{
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
goto v___jp_2988_;
}
else
{
lean_object* v_inheritedTraceOptions_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; 
v_inheritedTraceOptions_3142_ = lean_ctor_get(v_toCold_3139_, 11);
v___x_3143_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5));
v___x_3144_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6);
v___x_3145_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3142_, v_options_3140_, v___x_3144_);
if (v___x_3145_ == 0)
{
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3071_);
goto v___jp_2988_;
}
else
{
lean_object* v___x_3146_; 
v___x_3146_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3083_, v___y_3071_, v___y_3079_);
lean_dec(v___y_3071_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3148_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v___x_3146_, 1);
v___x_3148_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3143_, v_a_3147_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_dec_ref_known(v___x_3148_, 1);
goto v___jp_2988_;
}
else
{
return v___x_3148_;
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
v_a_3149_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3146_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3146_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_3157_; lean_object* v_options_3158_; uint8_t v_hasTrace_3159_; 
v_toCold_3157_ = lean_ctor_get(v___y_3079_, 0);
v_options_3158_ = lean_ctor_get(v_toCold_3157_, 2);
v_hasTrace_3159_ = lean_ctor_get_uint8(v_options_3158_, sizeof(void*)*1);
if (v_hasTrace_3159_ == 0)
{
v___y_3038_ = v_a_3083_;
v___y_3039_ = v___y_3071_;
v___y_3040_ = v___y_3072_;
v___y_3041_ = v___y_3073_;
v___y_3042_ = v___y_3074_;
v___y_3043_ = v___y_3075_;
v___y_3044_ = v___y_3076_;
v___y_3045_ = v___y_3077_;
v___y_3046_ = v___y_3078_;
v___y_3047_ = v___y_3079_;
v___y_3048_ = v___y_3080_;
goto v___jp_3037_;
}
else
{
lean_object* v_inheritedTraceOptions_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; uint8_t v___x_3163_; 
v_inheritedTraceOptions_3160_ = lean_ctor_get(v_toCold_3157_, 11);
v___x_3161_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8));
v___x_3162_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9);
v___x_3163_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3160_, v_options_3158_, v___x_3162_);
if (v___x_3163_ == 0)
{
v___y_3038_ = v_a_3083_;
v___y_3039_ = v___y_3071_;
v___y_3040_ = v___y_3072_;
v___y_3041_ = v___y_3073_;
v___y_3042_ = v___y_3074_;
v___y_3043_ = v___y_3075_;
v___y_3044_ = v___y_3076_;
v___y_3045_ = v___y_3077_;
v___y_3046_ = v___y_3078_;
v___y_3047_ = v___y_3079_;
v___y_3048_ = v___y_3080_;
goto v___jp_3037_;
}
else
{
lean_object* v___x_3164_; 
lean_inc(v_a_3083_);
v___x_3164_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3083_, v___y_3071_, v___y_3079_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3166_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3164_, 1);
v___x_3166_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3161_, v_a_3165_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_dec_ref_known(v___x_3166_, 1);
v___y_3038_ = v_a_3083_;
v___y_3039_ = v___y_3071_;
v___y_3040_ = v___y_3072_;
v___y_3041_ = v___y_3073_;
v___y_3042_ = v___y_3074_;
v___y_3043_ = v___y_3075_;
v___y_3044_ = v___y_3076_;
v___y_3045_ = v___y_3077_;
v___y_3046_ = v___y_3078_;
v___y_3047_ = v___y_3079_;
v___y_3048_ = v___y_3080_;
goto v___jp_3037_;
}
else
{
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec(v___y_3071_);
return v___x_3166_;
}
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec(v_a_3083_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec(v___y_3071_);
v_a_3167_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3164_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3164_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec(v___y_3071_);
v_a_3175_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3082_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3082_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3199_; 
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_c_2976_);
v___x_3197_ = lean_box(0);
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 0, v___x_3197_);
v___x_3199_ = v___x_3063_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_c_2976_);
v_a_3202_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3204_ = v___x_3060_;
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3060_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
v___jp_2988_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
v___jp_2991_:
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v___y_2992_, v___y_2994_, v___y_2995_);
lean_dec_ref(v___y_2995_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3009_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3009_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3009_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
uint8_t v___x_3001_; uint8_t v___x_3002_; uint8_t v___x_3003_; 
v___x_3001_ = 0;
v___x_3002_ = lean_unbox(v_a_2997_);
lean_dec(v_a_2997_);
v___x_3003_ = l_Lean_instBEqLBool_beq(v___x_3002_, v___x_3001_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; lean_object* v___x_3006_; 
lean_dec(v___y_2994_);
lean_dec(v___y_2993_);
v___x_3004_ = lean_box(0);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___x_3004_);
v___x_3006_ = v___x_2999_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
else
{
lean_object* v___x_3008_; 
lean_del_object(v___x_2999_);
v___x_3008_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v___y_2993_, v___y_2994_);
lean_dec(v___y_2994_);
return v___x_3008_;
}
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v___y_2994_);
lean_dec(v___y_2993_);
v_a_3010_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_2996_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_2996_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
v___jp_3018_:
{
lean_object* v_p_3029_; lean_object* v___x_3030_; 
v_p_3029_ = lean_ctor_get(v___y_3019_, 0);
lean_inc_ref(v_p_3029_);
v___x_3030_ = l_Int_Internal_Linear_Poly_updateOccs___redArg(v_p_3029_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v___y_3028_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v___x_3031_; uint8_t v___x_3032_; 
lean_dec_ref_known(v___x_3030_, 1);
v___x_3031_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_3032_ = lean_int_dec_lt(v___y_3020_, v___x_3031_);
lean_dec(v___y_3020_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
lean_dec_ref(v___y_3022_);
v___x_3033_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3034_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3033_, v___y_3021_, v___y_3024_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_dec_ref_known(v___x_3034_, 1);
v___y_2992_ = v___y_3019_;
v___y_2993_ = v___y_3023_;
v___y_2994_ = v___y_3024_;
v___y_2995_ = v___y_3027_;
goto v___jp_2991_;
}
else
{
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3019_);
return v___x_3034_;
}
}
else
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
lean_dec_ref(v___y_3021_);
v___x_3035_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3036_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3035_, v___y_3022_, v___y_3024_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_dec_ref_known(v___x_3036_, 1);
v___y_2992_ = v___y_3019_;
v___y_2993_ = v___y_3023_;
v___y_2994_ = v___y_3024_;
v___y_2995_ = v___y_3027_;
goto v___jp_2991_;
}
else
{
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3019_);
return v___x_3036_;
}
}
}
else
{
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
return v___x_3030_;
}
}
v___jp_3037_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3049_, 0, v___y_3038_);
v___x_3050_ = l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(v___x_3049_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
lean_dec(v___y_3040_);
lean_dec(v___y_3039_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3058_; 
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3058_ == 0)
{
lean_object* v_unused_3059_; 
v_unused_3059_ = lean_ctor_get(v___x_3050_, 0);
lean_dec(v_unused_3059_);
v___x_3052_ = v___x_3050_;
v_isShared_3053_ = v_isSharedCheck_3058_;
goto v_resetjp_3051_;
}
else
{
lean_dec(v___x_3050_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3058_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3054_; lean_object* v___x_3056_; 
v___x_3054_ = lean_box(0);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v___x_3054_);
v___x_3056_ = v___x_3052_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
else
{
return v___x_3050_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object* v_c_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = lean_grind_cutsat_assert_le(v_c_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
return v_res_3222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0));
v___x_3225_ = l_Lean_stringToMessageData(v___x_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(lean_object* v_e_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3234_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1);
v___x_3235_ = l_Lean_indentExpr(v_e_3226_);
v___x_3236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3234_);
lean_ctor_set(v___x_3236_, 1, v___x_3235_);
v___x_3237_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_3227_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3248_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3248_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3248_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
uint8_t v_verbose_3242_; 
v_verbose_3242_ = lean_ctor_get_uint8(v_a_3238_, 0);
lean_dec(v_a_3238_);
if (v_verbose_3242_ == 0)
{
lean_object* v___x_3243_; lean_object* v___x_3245_; 
lean_dec_ref_known(v___x_3236_, 2);
v___x_3243_ = lean_box(0);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v___x_3243_);
v___x_3245_ = v___x_3240_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
else
{
lean_object* v___x_3247_; 
lean_del_object(v___x_3240_);
v___x_3247_ = l_Lean_Meta_Sym_reportIssue(v___x_3236_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
return v___x_3247_;
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec_ref_known(v___x_3236_, 2);
v_a_3249_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3237_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3237_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___boxed(lean_object* v_e_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(lean_object* v_e_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3266_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___boxed(lean_object* v_e_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(v_e_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
lean_dec(v___y_3283_);
lean_dec_ref(v___y_3282_);
lean_dec(v___y_3281_);
lean_dec(v___y_3280_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(lean_object* v_e_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v___x_3312_; 
lean_inc_ref(v_e_3297_);
v___x_3312_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3297_, v___y_3305_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v___x_3314_ = l_Lean_Expr_cleanupAnnotations(v_a_3313_);
v___x_3315_ = l_Lean_Expr_isApp(v___x_3314_);
if (v___x_3315_ == 0)
{
lean_dec_ref(v___x_3314_);
lean_dec_ref(v_e_3297_);
goto v___jp_3309_;
}
else
{
lean_object* v_arg_3316_; lean_object* v___x_3317_; uint8_t v___x_3318_; 
v_arg_3316_ = lean_ctor_get(v___x_3314_, 1);
lean_inc_ref(v_arg_3316_);
v___x_3317_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3314_);
v___x_3318_ = l_Lean_Expr_isApp(v___x_3317_);
if (v___x_3318_ == 0)
{
lean_dec_ref(v___x_3317_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
goto v___jp_3309_;
}
else
{
lean_object* v_arg_3319_; lean_object* v___x_3320_; uint8_t v___x_3321_; 
v_arg_3319_ = lean_ctor_get(v___x_3317_, 1);
lean_inc_ref(v_arg_3319_);
v___x_3320_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3317_);
v___x_3321_ = l_Lean_Expr_isApp(v___x_3320_);
if (v___x_3321_ == 0)
{
lean_dec_ref(v___x_3320_);
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
goto v___jp_3309_;
}
else
{
lean_object* v_arg_3322_; lean_object* v___x_3323_; uint8_t v___x_3324_; 
v_arg_3322_ = lean_ctor_get(v___x_3320_, 1);
lean_inc_ref(v_arg_3322_);
v___x_3323_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3320_);
v___x_3324_ = l_Lean_Expr_isApp(v___x_3323_);
if (v___x_3324_ == 0)
{
lean_dec_ref(v___x_3323_);
lean_dec_ref(v_arg_3322_);
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
goto v___jp_3309_;
}
else
{
lean_object* v___x_3325_; lean_object* v___x_3326_; uint8_t v___x_3327_; 
v___x_3325_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3323_);
v___x_3326_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3327_ = l_Lean_Expr_isConstOf(v___x_3325_, v___x_3326_);
lean_dec_ref(v___x_3325_);
if (v___x_3327_ == 0)
{
lean_dec_ref(v_arg_3322_);
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
goto v___jp_3309_;
}
else
{
lean_object* v___x_3328_; 
v___x_3328_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_arg_3322_, v___y_3305_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3411_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3331_ = v___x_3328_;
v_isShared_3332_ = v_isSharedCheck_3411_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3328_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3411_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
uint8_t v___x_3333_; 
v___x_3333_ = lean_unbox(v_a_3329_);
lean_dec(v_a_3329_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3334_; lean_object* v___x_3336_; 
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
v___x_3334_ = lean_box(0);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 0, v___x_3334_);
v___x_3336_ = v___x_3331_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3334_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
else
{
lean_object* v___x_3338_; 
lean_del_object(v___x_3331_);
v___x_3338_ = l_Lean_Meta_getIntValue_x3f(v_arg_3316_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
if (lean_obj_tag(v_a_3339_) == 1)
{
lean_object* v_val_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3384_; 
v_val_3340_ = lean_ctor_get(v_a_3339_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_a_3339_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3342_ = v_a_3339_;
v_isShared_3343_ = v_isSharedCheck_3384_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_val_3340_);
lean_dec(v_a_3339_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3384_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3344_; uint8_t v___x_3345_; 
v___x_3344_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_3345_ = lean_int_dec_eq(v_val_3340_, v___x_3344_);
lean_dec(v_val_3340_);
if (v___x_3345_ == 0)
{
lean_object* v___x_3346_; 
lean_del_object(v___x_3342_);
lean_dec_ref(v_arg_3319_);
v___x_3346_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3297_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3354_; 
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3354_ == 0)
{
lean_object* v_unused_3355_; 
v_unused_3355_ = lean_ctor_get(v___x_3346_, 0);
lean_dec(v_unused_3355_);
v___x_3348_ = v___x_3346_;
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
else
{
lean_dec(v___x_3346_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3350_ = lean_box(0);
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 0, v___x_3350_);
v___x_3352_ = v___x_3348_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
v_a_3356_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_3346_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_a_3356_);
lean_dec(v___x_3346_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
}
else
{
lean_object* v___x_3364_; 
lean_dec_ref(v_e_3297_);
v___x_3364_ = l_Lean_Meta_Grind_Arith_Cutsat_toPoly(v_arg_3319_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3375_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3367_ = v___x_3364_;
v_isShared_3368_ = v_isSharedCheck_3375_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3364_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3375_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3343_ == 0)
{
lean_ctor_set(v___x_3342_, 0, v_a_3365_);
v___x_3370_ = v___x_3342_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
lean_object* v___x_3372_; 
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v___x_3370_);
v___x_3372_ = v___x_3367_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3370_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_del_object(v___x_3342_);
v_a_3376_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3364_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3364_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
}
else
{
lean_object* v___x_3385_; 
lean_dec(v_a_3339_);
lean_dec_ref(v_arg_3319_);
v___x_3385_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3297_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3393_; 
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3393_ == 0)
{
lean_object* v_unused_3394_; 
v_unused_3394_ = lean_ctor_get(v___x_3385_, 0);
lean_dec(v_unused_3394_);
v___x_3387_ = v___x_3385_;
v_isShared_3388_ = v_isSharedCheck_3393_;
goto v_resetjp_3386_;
}
else
{
lean_dec(v___x_3385_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3393_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3389_; lean_object* v___x_3391_; 
v___x_3389_ = lean_box(0);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3389_);
v___x_3391_ = v___x_3387_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3389_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
v_a_3395_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3385_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3385_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_e_3297_);
v_a_3403_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3338_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3338_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec_ref(v_arg_3319_);
lean_dec_ref(v_arg_3316_);
lean_dec_ref(v_e_3297_);
v_a_3412_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3328_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3328_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
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
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec_ref(v_e_3297_);
v_a_3420_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3312_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3312_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
v___jp_3309_:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3310_ = lean_box(0);
v___x_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___boxed(lean_object* v_e_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(v_e_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec_ref(v___y_3431_);
lean_dec(v___y_3430_);
lean_dec(v___y_3429_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object* v_c_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_){
_start:
{
lean_object* v_p_3453_; lean_object* v___x_3454_; 
v_p_3453_ = lean_ctor_get(v_c_3441_, 0);
lean_inc_ref(v_p_3453_);
v___x_3454_ = l_Int_Internal_Linear_Poly_normCommRing_x3f(v_p_3453_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
if (lean_obj_tag(v_a_3455_) == 1)
{
lean_object* v_val_3456_; lean_object* v_snd_3457_; lean_object* v_fst_3458_; lean_object* v_fst_3459_; lean_object* v_snd_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3469_; 
v_val_3456_ = lean_ctor_get(v_a_3455_, 0);
lean_inc(v_val_3456_);
lean_dec_ref_known(v_a_3455_, 1);
v_snd_3457_ = lean_ctor_get(v_val_3456_, 1);
lean_inc(v_snd_3457_);
v_fst_3458_ = lean_ctor_get(v_val_3456_, 0);
lean_inc(v_fst_3458_);
lean_dec(v_val_3456_);
v_fst_3459_ = lean_ctor_get(v_snd_3457_, 0);
v_snd_3460_ = lean_ctor_get(v_snd_3457_, 1);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_snd_3457_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3462_ = v_snd_3457_;
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_snd_3460_);
lean_inc(v_fst_3459_);
lean_dec(v_snd_3457_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3464_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v___x_3464_, 0, v_c_3441_);
lean_ctor_set(v___x_3464_, 1, v_fst_3458_);
lean_ctor_set(v___x_3464_, 2, v_fst_3459_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 1, v___x_3464_);
lean_ctor_set(v___x_3462_, 0, v_snd_3460_);
v___x_3466_ = v___x_3462_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_snd_3460_);
lean_ctor_set(v_reuseFailAlloc_3468_, 1, v___x_3464_);
v___x_3466_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3467_; 
lean_inc(v___y_3451_);
lean_inc_ref(v___y_3450_);
lean_inc(v___y_3449_);
lean_inc_ref(v___y_3448_);
lean_inc(v___y_3447_);
lean_inc_ref(v___y_3446_);
lean_inc(v___y_3445_);
lean_inc_ref(v___y_3444_);
lean_inc(v___y_3443_);
lean_inc(v___y_3442_);
v___x_3467_ = lean_grind_cutsat_assert_le(v___x_3466_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
return v___x_3467_;
}
}
}
else
{
lean_object* v___x_3470_; 
lean_dec(v_a_3455_);
lean_inc(v___y_3451_);
lean_inc_ref(v___y_3450_);
lean_inc(v___y_3449_);
lean_inc_ref(v___y_3448_);
lean_inc(v___y_3447_);
lean_inc_ref(v___y_3446_);
lean_inc(v___y_3445_);
lean_inc_ref(v___y_3444_);
lean_inc(v___y_3443_);
lean_inc(v___y_3442_);
v___x_3470_ = lean_grind_cutsat_assert_le(v_c_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
return v___x_3470_;
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
lean_dec_ref(v_c_3441_);
v_a_3471_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v___x_3454_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3454_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object* v_c_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_){
_start:
{
lean_object* v_res_3491_; 
v_res_3491_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v_c_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
lean_dec(v___y_3487_);
lean_dec_ref(v___y_3486_);
lean_dec(v___y_3485_);
lean_dec_ref(v___y_3484_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec(v___y_3480_);
return v_res_3491_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3493_ = lean_int_neg(v___x_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object* v_e_3494_, uint8_t v_eqTrue_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v___x_3507_; 
lean_inc_ref(v_e_3494_);
v___x_3507_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(v_e_3494_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3534_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3510_ = v___x_3507_;
v_isShared_3511_ = v_isSharedCheck_3534_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3534_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
if (lean_obj_tag(v_a_3508_) == 1)
{
lean_del_object(v___x_3510_);
if (v_eqTrue_3495_ == 0)
{
lean_object* v_val_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_val_3512_ = lean_ctor_get(v_a_3508_, 0);
lean_inc_n(v_val_3512_, 2);
lean_dec_ref_known(v_a_3508_, 1);
v___x_3513_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3514_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0);
v___x_3515_ = l_Int_Internal_Linear_Poly_mul(v_val_3512_, v___x_3514_);
v___x_3516_ = l_Int_Internal_Linear_Poly_addConst(v___x_3515_, v___x_3513_);
v___x_3517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3517_, 0, v_e_3494_);
lean_ctor_set(v___x_3517_, 1, v_val_3512_);
v___x_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3516_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
v___x_3519_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3518_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_);
return v___x_3519_;
}
else
{
lean_object* v_val_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3529_; 
v_val_3520_ = lean_ctor_get(v_a_3508_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v_a_3508_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3522_ = v_a_3508_;
v_isShared_3523_ = v_isSharedCheck_3529_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_val_3520_);
lean_dec(v_a_3508_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3529_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
lean_ctor_set_tag(v___x_3522_, 0);
lean_ctor_set(v___x_3522_, 0, v_e_3494_);
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_e_3494_);
v___x_3525_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3526_, 0, v_val_3520_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3526_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_);
return v___x_3527_;
}
}
}
}
else
{
lean_object* v___x_3530_; lean_object* v___x_3532_; 
lean_dec(v_a_3508_);
lean_dec_ref(v_e_3494_);
v___x_3530_ = lean_box(0);
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 0, v___x_3530_);
v___x_3532_ = v___x_3510_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref(v_e_3494_);
v_a_3535_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3507_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3507_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object* v_e_3543_, lean_object* v_eqTrue_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
uint8_t v_eqTrue_boxed_3556_; lean_object* v_res_3557_; 
v_eqTrue_boxed_3556_ = lean_unbox(v_eqTrue_3544_);
v_res_3557_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3543_, v_eqTrue_boxed_3556_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
lean_dec(v___y_3546_);
lean_dec(v___y_3545_);
return v_res_3557_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0(void){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3559_ = l_Lean_mkIntLit(v___x_3558_);
return v___x_3559_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5(void){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3567_ = lean_box(0);
v___x_3568_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4));
v___x_3569_ = l_Lean_mkConst(v___x_3568_, v___x_3567_);
return v___x_3569_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8(void){
_start:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3575_ = lean_box(0);
v___x_3576_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7));
v___x_3577_ = l_Lean_mkConst(v___x_3576_, v___x_3575_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object* v_e_3578_, uint8_t v_eqTrue_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_){
_start:
{
lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v_fst_3594_; lean_object* v_snd_3595_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
lean_inc_ref(v_e_3578_);
v___x_3624_ = l_Lean_Expr_cleanupAnnotations(v_e_3578_);
v___x_3625_ = l_Lean_Expr_isApp(v___x_3624_);
if (v___x_3625_ == 0)
{
lean_dec_ref(v___x_3624_);
lean_dec_ref(v_e_3578_);
goto v___jp_3621_;
}
else
{
lean_object* v_arg_3626_; lean_object* v___x_3627_; uint8_t v___x_3628_; 
v_arg_3626_ = lean_ctor_get(v___x_3624_, 1);
lean_inc_ref(v_arg_3626_);
v___x_3627_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3624_);
v___x_3628_ = l_Lean_Expr_isApp(v___x_3627_);
if (v___x_3628_ == 0)
{
lean_dec_ref(v___x_3627_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
goto v___jp_3621_;
}
else
{
lean_object* v_arg_3629_; lean_object* v___y_3631_; lean_object* v___x_3669_; uint8_t v___x_3670_; 
v_arg_3629_ = lean_ctor_get(v___x_3627_, 1);
lean_inc_ref(v_arg_3629_);
v___x_3669_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3627_);
v___x_3670_ = l_Lean_Expr_isApp(v___x_3669_);
if (v___x_3670_ == 0)
{
lean_dec_ref(v___x_3669_);
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
goto v___jp_3621_;
}
else
{
lean_object* v___x_3671_; uint8_t v___x_3672_; 
v___x_3671_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3669_);
v___x_3672_ = l_Lean_Expr_isApp(v___x_3671_);
if (v___x_3672_ == 0)
{
lean_dec_ref(v___x_3671_);
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
goto v___jp_3621_;
}
else
{
lean_object* v___x_3673_; lean_object* v___x_3674_; uint8_t v___x_3675_; 
v___x_3673_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3671_);
v___x_3674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3675_ = l_Lean_Expr_isConstOf(v___x_3673_, v___x_3674_);
lean_dec_ref(v___x_3673_);
if (v___x_3675_ == 0)
{
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
goto v___jp_3621_;
}
else
{
if (v_eqTrue_3579_ == 0)
{
lean_object* v___x_3676_; 
v___x_3676_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5);
v___y_3631_ = v___x_3676_;
goto v___jp_3630_;
}
else
{
lean_object* v___x_3677_; 
v___x_3677_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8);
v___y_3631_ = v___x_3677_;
goto v___jp_3630_;
}
}
}
}
v___jp_3630_:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3578_, v___y_3580_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3634_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref_known(v___x_3632_, 1);
lean_inc_ref(v_arg_3629_);
v___x_3634_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3629_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v_a_3635_; lean_object* v_fst_3636_; lean_object* v_snd_3637_; lean_object* v___x_3638_; 
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3634_, 1);
v_fst_3636_ = lean_ctor_get(v_a_3635_, 0);
lean_inc(v_fst_3636_);
v_snd_3637_ = lean_ctor_get(v_a_3635_, 1);
lean_inc(v_snd_3637_);
lean_dec(v_a_3635_);
lean_inc_ref(v_arg_3626_);
v___x_3638_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3626_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v_fst_3640_; lean_object* v_snd_3641_; lean_object* v___x_3642_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v___x_3638_, 1);
v_fst_3640_ = lean_ctor_get(v_a_3639_, 0);
lean_inc_n(v_fst_3640_, 2);
v_snd_3641_ = lean_ctor_get(v_a_3639_, 1);
lean_inc(v_snd_3641_);
lean_dec(v_a_3639_);
lean_inc(v_fst_3636_);
lean_inc_ref(v___y_3631_);
v___x_3642_ = l_Lean_mkApp6(v___y_3631_, v_arg_3629_, v_arg_3626_, v_fst_3636_, v_fst_3640_, v_snd_3637_, v_snd_3641_);
if (v_eqTrue_3579_ == 0)
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0);
v___x_3644_ = l_Lean_mkIntAdd(v_fst_3640_, v___x_3643_);
v___y_3592_ = v___x_3642_;
v___y_3593_ = v_a_3633_;
v_fst_3594_ = v___x_3644_;
v_snd_3595_ = v_fst_3636_;
goto v___jp_3591_;
}
else
{
v___y_3592_ = v___x_3642_;
v___y_3593_ = v_a_3633_;
v_fst_3594_ = v_fst_3636_;
v_snd_3595_ = v_fst_3640_;
goto v___jp_3591_;
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
lean_dec(v_snd_3637_);
lean_dec(v_fst_3636_);
lean_dec(v_a_3633_);
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
v_a_3645_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3638_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3638_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
else
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
lean_dec(v_a_3633_);
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
v_a_3653_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3655_ = v___x_3634_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3634_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
else
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
lean_dec_ref(v_arg_3629_);
lean_dec_ref(v_arg_3626_);
lean_dec_ref(v_e_3578_);
v_a_3661_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3632_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3632_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
}
}
v___jp_3591_:
{
lean_object* v___x_3596_; 
lean_inc(v___y_3593_);
v___x_3596_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_3594_, v___y_3593_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v___x_3598_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v___x_3596_, 1);
v___x_3598_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_snd_3595_, v___y_3593_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc_n(v_a_3599_, 2);
lean_dec_ref_known(v___x_3598_, 1);
lean_inc(v_a_3597_);
v___x_3600_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3600_, 0, v_a_3597_);
lean_ctor_set(v___x_3600_, 1, v_a_3599_);
v___x_3601_ = l_Int_Internal_Linear_Expr_norm(v___x_3600_);
lean_dec_ref_known(v___x_3600_, 2);
v___x_3602_ = lean_alloc_ctor(2, 4, 1);
lean_ctor_set(v___x_3602_, 0, v_e_3578_);
lean_ctor_set(v___x_3602_, 1, v___y_3592_);
lean_ctor_set(v___x_3602_, 2, v_a_3597_);
lean_ctor_set(v___x_3602_, 3, v_a_3599_);
lean_ctor_set_uint8(v___x_3602_, sizeof(void*)*4, v_eqTrue_3579_);
v___x_3603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3601_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3603_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
return v___x_3604_;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec(v_a_3597_);
lean_dec_ref(v___y_3592_);
lean_dec_ref(v_e_3578_);
v_a_3605_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3598_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3598_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec_ref(v_snd_3595_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec_ref(v_e_3578_);
v_a_3613_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3596_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3596_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
v___jp_3621_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3622_ = lean_box(0);
v___x_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
return v___x_3623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object* v_e_3678_, lean_object* v_eqTrue_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_){
_start:
{
uint8_t v_eqTrue_boxed_3691_; lean_object* v_res_3692_; 
v_eqTrue_boxed_3691_ = lean_unbox(v_eqTrue_3679_);
v_res_3692_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3678_, v_eqTrue_boxed_3691_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_, v___y_3689_);
lean_dec(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec(v___y_3687_);
lean_dec_ref(v___y_3686_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec(v___y_3680_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object* v_e_3698_, uint8_t v_eqTrue_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v___x_3714_; 
v___x_3714_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_3702_);
if (lean_obj_tag(v___x_3714_) == 0)
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3746_; 
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3717_ = v___x_3714_;
v_isShared_3718_ = v_isSharedCheck_3746_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3714_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3746_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
uint8_t v_lia_3719_; 
v_lia_3719_ = lean_ctor_get_uint8(v_a_3715_, sizeof(void*)*14 + 23);
lean_dec(v_a_3715_);
if (v_lia_3719_ == 0)
{
lean_object* v___x_3720_; lean_object* v___x_3722_; 
lean_dec_ref(v_e_3698_);
v___x_3720_ = lean_box(0);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3720_);
v___x_3722_ = v___x_3717_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3720_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
else
{
lean_object* v___x_3724_; uint8_t v___x_3725_; 
lean_inc_ref(v_e_3698_);
v___x_3724_ = l_Lean_Expr_cleanupAnnotations(v_e_3698_);
v___x_3725_ = l_Lean_Expr_isApp(v___x_3724_);
if (v___x_3725_ == 0)
{
lean_dec_ref(v___x_3724_);
lean_del_object(v___x_3717_);
lean_dec_ref(v_e_3698_);
goto v___jp_3711_;
}
else
{
lean_object* v___x_3726_; uint8_t v___x_3727_; 
v___x_3726_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3724_);
v___x_3727_ = l_Lean_Expr_isApp(v___x_3726_);
if (v___x_3727_ == 0)
{
lean_dec_ref(v___x_3726_);
lean_del_object(v___x_3717_);
lean_dec_ref(v_e_3698_);
goto v___jp_3711_;
}
else
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3726_);
v___x_3729_ = l_Lean_Expr_isApp(v___x_3728_);
if (v___x_3729_ == 0)
{
lean_dec_ref(v___x_3728_);
lean_del_object(v___x_3717_);
lean_dec_ref(v_e_3698_);
goto v___jp_3711_;
}
else
{
lean_object* v___x_3730_; uint8_t v___x_3731_; 
v___x_3730_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3728_);
v___x_3731_ = l_Lean_Expr_isApp(v___x_3730_);
if (v___x_3731_ == 0)
{
lean_dec_ref(v___x_3730_);
lean_del_object(v___x_3717_);
lean_dec_ref(v_e_3698_);
goto v___jp_3711_;
}
else
{
lean_object* v_arg_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; 
v_arg_3732_ = lean_ctor_get(v___x_3730_, 1);
lean_inc_ref(v_arg_3732_);
v___x_3733_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3730_);
v___x_3734_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3735_ = l_Lean_Expr_isConstOf(v___x_3733_, v___x_3734_);
lean_dec_ref(v___x_3733_);
if (v___x_3735_ == 0)
{
lean_dec_ref(v_arg_3732_);
lean_del_object(v___x_3717_);
lean_dec_ref(v_e_3698_);
goto v___jp_3711_;
}
else
{
lean_object* v___x_3736_; uint8_t v___x_3737_; 
v___x_3736_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0));
v___x_3737_ = l_Lean_Expr_isConstOf(v_arg_3732_, v___x_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3738_; uint8_t v___x_3739_; 
v___x_3738_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2));
v___x_3739_ = l_Lean_Expr_isConstOf(v_arg_3732_, v___x_3738_);
lean_dec_ref(v_arg_3732_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; lean_object* v___x_3742_; 
lean_dec_ref(v_e_3698_);
v___x_3740_ = lean_box(0);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3740_);
v___x_3742_ = v___x_3717_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
else
{
lean_object* v___x_3744_; 
lean_del_object(v___x_3717_);
v___x_3744_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3698_, v_eqTrue_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_);
return v___x_3744_;
}
}
else
{
lean_object* v___x_3745_; 
lean_dec_ref(v_arg_3732_);
lean_del_object(v___x_3717_);
v___x_3745_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3698_, v_eqTrue_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_);
return v___x_3745_;
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
lean_object* v_a_3747_; lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3754_; 
lean_dec_ref(v_e_3698_);
v_a_3747_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3749_ = v___x_3714_;
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
else
{
lean_inc(v_a_3747_);
lean_dec(v___x_3714_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_a_3747_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
v___jp_3711_:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3712_ = lean_box(0);
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
return v___x_3713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object* v_e_3755_, lean_object* v_eqTrue_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_){
_start:
{
uint8_t v_eqTrue_boxed_3768_; lean_object* v_res_3769_; 
v_eqTrue_boxed_3768_ = lean_unbox(v_eqTrue_3756_);
v_res_3769_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(v_e_3755_, v_eqTrue_boxed_3768_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
lean_dec(v___y_3766_);
lean_dec_ref(v___y_3765_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
lean_dec(v___y_3758_);
lean_dec(v___y_3757_);
return v_res_3769_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
}
#ifdef __cplusplus
}
#endif
