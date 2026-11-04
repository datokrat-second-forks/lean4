// Lean compiler output
// Module: Lean.Meta.Match.Rewrite
// Imports: public import Lean.Meta.Tactic.Simp.Types import Lean.Meta.Tactic.Assumption import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Simp.Rewrite import Init.UDecidable
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
uint8_t l_Lean_Meta_isMatcherAppCore(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* lean_get_congr_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_hrefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwIfWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__0 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__1 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__1_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__2 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__3 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__4 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__4_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__5 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__6 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__7 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__7_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__8 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__9 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__10 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__10_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__11 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__11_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__12 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__13 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__13_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__14 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(224, 237, 116, 5, 155, 59, 56, 160)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__15 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__16 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__17 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__17_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__18 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__19 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__19_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value),LEAN_SCALAR_PTR_LITERAL(226, 127, 188, 147, 183, 148, 17, 43)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__20 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__20_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(47, 91, 172, 106, 10, 51, 189, 44)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__21 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value),LEAN_SCALAR_PTR_LITERAL(133, 196, 119, 188, 182, 137, 173, 132)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__22 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value),LEAN_SCALAR_PTR_LITERAL(32, 95, 146, 40, 200, 88, 9, 188)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__23 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__23_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__24 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__24_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__24_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__25 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__26;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__27 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__27_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__27_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__28 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__29;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_neg"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__30 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__30_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__30_value),LEAN_SCALAR_PTR_LITERAL(49, 12, 112, 38, 148, 75, 173, 29)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__31 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_pos"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__32 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__32_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__33_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__32_value),LEAN_SCALAR_PTR_LITERAL(92, 34, 41, 42, 220, 235, 208, 212)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__33 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__33_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_neg"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__34 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__34_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__34_value),LEAN_SCALAR_PTR_LITERAL(130, 205, 190, 244, 239, 213, 246, 117)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__35 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__35_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_pos"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__36 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__36_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__36_value),LEAN_SCALAR_PTR_LITERAL(175, 105, 2, 180, 243, 3, 49, 224)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__37 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__37_value;
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "rewriting with "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " in"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Failed to resolve `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Failed to discharge `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Could not un-HEq `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__3;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__5;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Not all hypotheses of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__6_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__7;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` could be discharged: "};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__8_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__9;
static const lean_array_object l_Lean_Meta_rwMatcher___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__10 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__10_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Left-hand side `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__11 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__11_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__12;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__13 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__14;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` does not apply to `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__15 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__15_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__16;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__17 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__17_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__18 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__18_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__19 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__19_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__19_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__20 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__20_value;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Type of `"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__21 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__21_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__22;
static const lean_string_object l_Lean_Meta_rwMatcher___lam__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not an equality"};
static const lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__23 = (const lean_object*)&l_Lean_Meta_rwMatcher___lam__2___closed__23_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___lam__2___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___lam__2___closed__24;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_rwMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__0_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__2 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__2_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__3_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__4 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__4_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__5 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__5_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Match"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__6 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__6_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__7 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__7_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__5_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_rwMatcher___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 1, 225, 180, 135, 246, 184, 244)}};
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_rwMatcher___closed__7_value),LEAN_SCALAR_PTR_LITERAL(253, 56, 25, 25, 156, 146, 62, 130)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__8 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__8_value;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__9 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__9_value;
static const lean_ctor_object l_Lean_Meta_rwMatcher___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwMatcher___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_rwMatcher___closed__10 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__10_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__11;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Not a matcher application:"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__12 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__12_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__13;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "When trying to reduce arm "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__14 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__14_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__15;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", only "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__16 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__16_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__17;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " equations for "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__18 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__18_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__19;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to apply "};
static const lean_object* l_Lean_Meta_rwMatcher___closed__20 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__20_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__21;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__22 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__22_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__23;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__24;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_rwMatcher___closed__25;
static const lean_string_object l_Lean_Meta_rwMatcher___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "eqProof has type"};
static const lean_object* l_Lean_Meta_rwMatcher___closed__26 = (const lean_object*)&l_Lean_Meta_rwMatcher___closed__26_value;
static lean_once_cell_t l_Lean_Meta_rwMatcher___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwMatcher___closed__27;
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__26(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_box(0);
v___x_51_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__25));
v___x_52_ = l_Lean_mkConst(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__29(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_box(0);
v___x_58_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__28));
v___x_59_ = l_Lean_mkConst(v___x_58_, v___x_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith(lean_object* v_hc_76_, lean_object* v_e_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v___x_88_; 
lean_inc_ref(v_e_77_);
v___x_88_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_77_, v_a_79_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc(v_a_89_);
lean_dec_ref_known(v___x_88_, 1);
v___x_90_ = l_Lean_Expr_cleanupAnnotations(v_a_89_);
lean_dec(v_a_89_);
v___x_91_ = l_Lean_Expr_isApp(v___x_90_);
if (v___x_91_ == 0)
{
lean_dec_ref(v___x_90_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = l_Lean_Expr_appFnCleanup___redArg(v___x_90_);
v___x_93_ = l_Lean_Expr_isApp(v___x_92_);
if (v___x_93_ == 0)
{
lean_dec_ref(v___x_92_);
lean_dec_ref(v___x_90_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = l_Lean_Expr_appFnCleanup___redArg(v___x_92_);
v___x_95_ = l_Lean_Expr_isApp(v___x_94_);
if (v___x_95_ == 0)
{
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_92_);
lean_dec_ref(v___x_90_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_96_ = l_Lean_Expr_appFnCleanup___redArg(v___x_94_);
v___x_97_ = l_Lean_Expr_isApp(v___x_96_);
if (v___x_97_ == 0)
{
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_92_);
lean_dec_ref(v___x_90_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v_arg_98_; lean_object* v_arg_99_; lean_object* v_arg_100_; lean_object* v_arg_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_arg_98_ = lean_ctor_get(v___x_90_, 1);
lean_inc_ref(v_arg_98_);
lean_dec_ref(v___x_90_);
v_arg_99_ = lean_ctor_get(v___x_92_, 1);
lean_inc_ref(v_arg_99_);
lean_dec_ref(v___x_92_);
v_arg_100_ = lean_ctor_get(v___x_94_, 1);
lean_inc_ref(v_arg_100_);
lean_dec_ref(v___x_94_);
v_arg_101_ = lean_ctor_get(v___x_96_, 1);
lean_inc_ref(v_arg_101_);
v___x_102_ = l_Lean_Expr_appFnCleanup___redArg(v___x_96_);
lean_dec_ref(v___x_96_);
v___x_103_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__2));
v___x_104_ = l_Lean_Expr_isConstOf(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__4));
v___x_106_ = l_Lean_Expr_isConstOf(v___x_102_, v___x_105_);
if (v___x_106_ == 0)
{
uint8_t v___x_107_; 
v___x_107_ = l_Lean_Expr_isApp(v___x_102_);
if (v___x_107_ == 0)
{
lean_dec_ref(v___x_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v_arg_108_; lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v_arg_108_ = lean_ctor_get(v___x_102_, 1);
lean_inc_ref(v_arg_108_);
v___x_109_ = l_Lean_Expr_appFnCleanup___redArg(v___x_102_);
lean_dec_ref(v___x_102_);
v___x_110_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__7));
v___x_111_ = l_Lean_Expr_isConstOf(v___x_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__9));
v___x_113_ = l_Lean_Expr_isConstOf(v___x_109_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__10));
v___x_115_ = l_Lean_Expr_isConstOf(v___x_109_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__11));
v___x_117_ = l_Lean_Expr_isConstOf(v___x_109_, v___x_116_);
if (v___x_117_ == 0)
{
lean_dec_ref(v___x_109_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = l_Lean_Expr_constLevels_x21(v___x_109_);
lean_dec_ref(v___x_109_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_119_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; lean_object* v___x_121_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref_known(v___x_119_, 1);
lean_inc_ref(v_arg_101_);
v___x_121_ = l_Lean_Meta_isExprDefEq(v_arg_101_, v_a_120_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_185_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_185_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_185_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_185_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
uint8_t v___x_126_; 
v___x_126_ = lean_unbox(v_a_122_);
lean_dec(v_a_122_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
lean_del_object(v___x_124_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_127_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_a_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_127_, 1);
lean_inc_ref(v_arg_101_);
v___x_129_ = l_Lean_mkNot(v_arg_101_);
v___x_130_ = l_Lean_Meta_isExprDefEq(v___x_129_, v_a_128_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_152_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_152_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_152_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_152_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
uint8_t v___x_135_; 
v___x_135_ = lean_unbox(v_a_131_);
lean_dec(v_a_131_);
if (v___x_135_ == 0)
{
lean_del_object(v___x_133_);
lean_dec(v___x_118_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
lean_dec_ref(v_e_77_);
v___x_136_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__13));
v___x_137_ = l_Lean_mkConst(v___x_136_, v___x_118_);
v___x_138_ = lean_unsigned_to_nat(6u);
v___x_139_ = lean_mk_empty_array_with_capacity(v___x_138_);
v___x_140_ = lean_array_push(v___x_139_, v_arg_101_);
v___x_141_ = lean_array_push(v___x_140_, v_arg_100_);
v___x_142_ = lean_array_push(v___x_141_, v_hc_76_);
v___x_143_ = lean_array_push(v___x_142_, v_arg_108_);
v___x_144_ = lean_array_push(v___x_143_, v_arg_99_);
lean_inc_ref(v_arg_98_);
v___x_145_ = lean_array_push(v___x_144_, v_arg_98_);
v___x_146_ = l_Lean_mkAppN(v___x_137_, v___x_145_);
lean_dec_ref(v___x_145_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
v___x_148_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_148_, 0, v_arg_98_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*2, v___x_117_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 0, v___x_148_);
v___x_150_ = v___x_133_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec(v___x_118_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_153_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_130_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_130_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
else
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_168_; 
lean_dec(v___x_118_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_161_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_168_ == 0)
{
v___x_163_ = v___x_127_;
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_127_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_a_161_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
else
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec_ref(v_e_77_);
v___x_169_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__15));
v___x_170_ = l_Lean_mkConst(v___x_169_, v___x_118_);
v___x_171_ = lean_unsigned_to_nat(6u);
v___x_172_ = lean_mk_empty_array_with_capacity(v___x_171_);
v___x_173_ = lean_array_push(v___x_172_, v_arg_101_);
v___x_174_ = lean_array_push(v___x_173_, v_arg_100_);
v___x_175_ = lean_array_push(v___x_174_, v_hc_76_);
v___x_176_ = lean_array_push(v___x_175_, v_arg_108_);
lean_inc_ref(v_arg_99_);
v___x_177_ = lean_array_push(v___x_176_, v_arg_99_);
v___x_178_ = lean_array_push(v___x_177_, v_arg_98_);
v___x_179_ = l_Lean_mkAppN(v___x_170_, v___x_178_);
lean_dec_ref(v___x_178_);
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_181_, 0, v_arg_99_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*2, v___x_117_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_181_);
v___x_183_ = v___x_124_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
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
lean_dec(v___x_118_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_186_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_121_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_121_);
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
lean_dec(v___x_118_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_194_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_119_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_119_);
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
else
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = l_Lean_Expr_constLevels_x21(v___x_109_);
lean_dec_ref(v___x_109_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_203_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; lean_object* v___x_205_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 1);
lean_inc_ref(v_arg_101_);
v___x_205_ = l_Lean_Meta_isExprDefEq(v_arg_101_, v_a_204_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_277_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_277_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_277_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_277_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
uint8_t v___x_210_; 
v___x_210_ = lean_unbox(v_a_206_);
lean_dec(v_a_206_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
lean_del_object(v___x_208_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_211_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
lean_inc_ref(v_arg_101_);
v___x_213_ = l_Lean_mkNot(v_arg_101_);
v___x_214_ = l_Lean_Meta_isExprDefEq(v___x_213_, v_a_212_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_240_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_240_ == 0)
{
v___x_217_ = v___x_214_;
v_isShared_218_ = v_isSharedCheck_240_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_240_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
uint8_t v___x_219_; 
v___x_219_ = lean_unbox(v_a_215_);
lean_dec(v_a_215_);
if (v___x_219_ == 0)
{
lean_del_object(v___x_217_);
lean_dec(v___x_202_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
lean_dec_ref(v_e_77_);
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = lean_mk_empty_array_with_capacity(v___x_220_);
lean_inc_ref(v_hc_76_);
v___x_222_ = lean_array_push(v___x_221_, v_hc_76_);
lean_inc_ref(v_arg_98_);
v___x_223_ = l_Lean_Expr_beta(v_arg_98_, v___x_222_);
v___x_224_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__17));
v___x_225_ = l_Lean_mkConst(v___x_224_, v___x_202_);
v___x_226_ = lean_unsigned_to_nat(6u);
v___x_227_ = lean_mk_empty_array_with_capacity(v___x_226_);
v___x_228_ = lean_array_push(v___x_227_, v_arg_101_);
v___x_229_ = lean_array_push(v___x_228_, v_arg_100_);
v___x_230_ = lean_array_push(v___x_229_, v_hc_76_);
v___x_231_ = lean_array_push(v___x_230_, v_arg_108_);
v___x_232_ = lean_array_push(v___x_231_, v_arg_99_);
v___x_233_ = lean_array_push(v___x_232_, v_arg_98_);
v___x_234_ = l_Lean_mkAppN(v___x_225_, v___x_233_);
lean_dec_ref(v___x_233_);
v___x_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
v___x_236_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_236_, 0, v___x_223_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*2, v___x_115_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_236_);
v___x_238_ = v___x_217_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec(v___x_202_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_241_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_214_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_214_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec(v___x_202_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_249_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_211_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_211_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
lean_dec_ref(v_e_77_);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_mk_empty_array_with_capacity(v___x_257_);
lean_inc_ref(v_hc_76_);
v___x_259_ = lean_array_push(v___x_258_, v_hc_76_);
lean_inc_ref(v_arg_99_);
v___x_260_ = l_Lean_Expr_beta(v_arg_99_, v___x_259_);
v___x_261_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__19));
v___x_262_ = l_Lean_mkConst(v___x_261_, v___x_202_);
v___x_263_ = lean_unsigned_to_nat(6u);
v___x_264_ = lean_mk_empty_array_with_capacity(v___x_263_);
v___x_265_ = lean_array_push(v___x_264_, v_arg_101_);
v___x_266_ = lean_array_push(v___x_265_, v_arg_100_);
v___x_267_ = lean_array_push(v___x_266_, v_hc_76_);
v___x_268_ = lean_array_push(v___x_267_, v_arg_108_);
v___x_269_ = lean_array_push(v___x_268_, v_arg_99_);
v___x_270_ = lean_array_push(v___x_269_, v_arg_98_);
v___x_271_ = l_Lean_mkAppN(v___x_262_, v___x_270_);
lean_dec_ref(v___x_270_);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
v___x_273_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_273_, 0, v___x_260_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*2, v___x_115_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_273_);
v___x_275_ = v___x_208_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v___x_202_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_278_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_205_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_205_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec(v___x_202_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_286_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_203_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_203_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = l_Lean_Expr_constLevels_x21(v___x_109_);
lean_dec_ref(v___x_109_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_295_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_297_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v___x_295_, 1);
lean_inc_ref(v_arg_101_);
v___x_297_ = l_Lean_Meta_isExprDefEq(v_arg_101_, v_a_296_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_361_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_361_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_361_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_361_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
uint8_t v___x_302_; 
v___x_302_ = lean_unbox(v_a_298_);
lean_dec(v_a_298_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
lean_del_object(v___x_300_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_303_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
lean_inc_ref(v_arg_101_);
v___x_305_ = l_Lean_mkNot(v_arg_101_);
v___x_306_ = l_Lean_Meta_isExprDefEq(v___x_305_, v_a_304_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_328_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_328_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_328_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_328_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_unbox(v_a_307_);
lean_dec(v_a_307_);
if (v___x_311_ == 0)
{
lean_del_object(v___x_309_);
lean_dec(v___x_294_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_326_; 
lean_dec_ref(v_e_77_);
v___x_312_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__20));
v___x_313_ = l_Lean_mkConst(v___x_312_, v___x_294_);
v___x_314_ = lean_unsigned_to_nat(6u);
v___x_315_ = lean_mk_empty_array_with_capacity(v___x_314_);
v___x_316_ = lean_array_push(v___x_315_, v_arg_101_);
v___x_317_ = lean_array_push(v___x_316_, v_arg_100_);
v___x_318_ = lean_array_push(v___x_317_, v_hc_76_);
v___x_319_ = lean_array_push(v___x_318_, v_arg_108_);
v___x_320_ = lean_array_push(v___x_319_, v_arg_99_);
lean_inc_ref(v_arg_98_);
v___x_321_ = lean_array_push(v___x_320_, v_arg_98_);
v___x_322_ = l_Lean_mkAppN(v___x_313_, v___x_321_);
lean_dec_ref(v___x_321_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_324_, 0, v_arg_98_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
lean_ctor_set_uint8(v___x_324_, sizeof(void*)*2, v___x_113_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_324_);
v___x_326_ = v___x_309_;
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
lean_dec(v___x_294_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_329_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_306_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_306_);
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
else
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec(v___x_294_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_337_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_303_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_303_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
lean_dec_ref(v_e_77_);
v___x_345_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__21));
v___x_346_ = l_Lean_mkConst(v___x_345_, v___x_294_);
v___x_347_ = lean_unsigned_to_nat(6u);
v___x_348_ = lean_mk_empty_array_with_capacity(v___x_347_);
v___x_349_ = lean_array_push(v___x_348_, v_arg_101_);
v___x_350_ = lean_array_push(v___x_349_, v_arg_100_);
v___x_351_ = lean_array_push(v___x_350_, v_hc_76_);
v___x_352_ = lean_array_push(v___x_351_, v_arg_108_);
lean_inc_ref(v_arg_99_);
v___x_353_ = lean_array_push(v___x_352_, v_arg_99_);
v___x_354_ = lean_array_push(v___x_353_, v_arg_98_);
v___x_355_ = l_Lean_mkAppN(v___x_346_, v___x_354_);
lean_dec_ref(v___x_354_);
v___x_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_357_, 0, v_arg_99_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
lean_ctor_set_uint8(v___x_357_, sizeof(void*)*2, v___x_113_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_357_);
v___x_359_ = v___x_300_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v___x_294_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_362_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_297_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_297_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
lean_dec(v___x_294_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_370_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_295_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_295_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_Lean_Expr_constLevels_x21(v___x_109_);
lean_dec_ref(v___x_109_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_379_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_381_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v___x_379_, 1);
lean_inc_ref(v_arg_101_);
v___x_381_ = l_Lean_Meta_isExprDefEq(v_arg_101_, v_a_380_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_453_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_453_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_453_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_453_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
uint8_t v___x_386_; 
v___x_386_ = lean_unbox(v_a_382_);
lean_dec(v_a_382_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; 
lean_del_object(v___x_384_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_387_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
lean_inc_ref(v_arg_101_);
v___x_389_ = l_Lean_mkNot(v_arg_101_);
v___x_390_ = l_Lean_Meta_isExprDefEq(v___x_389_, v_a_388_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_416_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_416_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_416_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_416_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
uint8_t v___x_395_; 
v___x_395_ = lean_unbox(v_a_391_);
lean_dec(v_a_391_);
if (v___x_395_ == 0)
{
lean_del_object(v___x_393_);
lean_dec(v___x_378_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
lean_dec_ref(v_e_77_);
v___x_396_ = lean_unsigned_to_nat(1u);
v___x_397_ = lean_mk_empty_array_with_capacity(v___x_396_);
lean_inc_ref(v_hc_76_);
v___x_398_ = lean_array_push(v___x_397_, v_hc_76_);
lean_inc_ref(v_arg_98_);
v___x_399_ = l_Lean_Expr_beta(v_arg_98_, v___x_398_);
v___x_400_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__22));
v___x_401_ = l_Lean_mkConst(v___x_400_, v___x_378_);
v___x_402_ = lean_unsigned_to_nat(6u);
v___x_403_ = lean_mk_empty_array_with_capacity(v___x_402_);
v___x_404_ = lean_array_push(v___x_403_, v_arg_101_);
v___x_405_ = lean_array_push(v___x_404_, v_arg_100_);
v___x_406_ = lean_array_push(v___x_405_, v_hc_76_);
v___x_407_ = lean_array_push(v___x_406_, v_arg_108_);
v___x_408_ = lean_array_push(v___x_407_, v_arg_99_);
v___x_409_ = lean_array_push(v___x_408_, v_arg_98_);
v___x_410_ = l_Lean_mkAppN(v___x_401_, v___x_409_);
lean_dec_ref(v___x_409_);
v___x_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
v___x_412_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_412_, 0, v___x_399_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
lean_ctor_set_uint8(v___x_412_, sizeof(void*)*2, v___x_111_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_412_);
v___x_414_ = v___x_393_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v___x_378_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_417_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_390_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_390_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec(v___x_378_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_425_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_387_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_387_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
lean_dec_ref(v_e_77_);
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = lean_mk_empty_array_with_capacity(v___x_433_);
lean_inc_ref(v_hc_76_);
v___x_435_ = lean_array_push(v___x_434_, v_hc_76_);
lean_inc_ref(v_arg_99_);
v___x_436_ = l_Lean_Expr_beta(v_arg_99_, v___x_435_);
v___x_437_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__23));
v___x_438_ = l_Lean_mkConst(v___x_437_, v___x_378_);
v___x_439_ = lean_unsigned_to_nat(6u);
v___x_440_ = lean_mk_empty_array_with_capacity(v___x_439_);
v___x_441_ = lean_array_push(v___x_440_, v_arg_101_);
v___x_442_ = lean_array_push(v___x_441_, v_arg_100_);
v___x_443_ = lean_array_push(v___x_442_, v_hc_76_);
v___x_444_ = lean_array_push(v___x_443_, v_arg_108_);
v___x_445_ = lean_array_push(v___x_444_, v_arg_99_);
v___x_446_ = lean_array_push(v___x_445_, v_arg_98_);
v___x_447_ = l_Lean_mkAppN(v___x_438_, v___x_446_);
lean_dec_ref(v___x_446_);
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_449_, 0, v___x_436_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
lean_ctor_set_uint8(v___x_449_, sizeof(void*)*2, v___x_111_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_449_);
v___x_451_ = v___x_384_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_dec(v___x_378_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_454_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_381_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_381_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec(v___x_378_);
lean_dec_ref(v_arg_108_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_462_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_379_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_379_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = l_Lean_Expr_constLevels_x21(v___x_102_);
lean_dec_ref(v___x_102_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_471_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__26, &l_Lean_Meta_rwIfWith___closed__26_once, _init_l_Lean_Meta_rwIfWith___closed__26);
lean_inc_ref(v_arg_100_);
v___x_474_ = l_Lean_Meta_mkEq(v_arg_100_, v___x_473_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = l_Lean_Meta_isExprDefEq(v_a_472_, v_a_475_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_548_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_548_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_548_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_548_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
uint8_t v___x_481_; 
v___x_481_ = lean_unbox(v_a_477_);
lean_dec(v_a_477_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; 
lean_del_object(v___x_479_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_482_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v___x_484_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__29, &l_Lean_Meta_rwIfWith___closed__29_once, _init_l_Lean_Meta_rwIfWith___closed__29);
lean_inc_ref(v_arg_100_);
v___x_485_ = l_Lean_Meta_mkEq(v_arg_100_, v___x_484_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_487_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
v___x_487_ = l_Lean_Meta_isExprDefEq(v_a_483_, v_a_486_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_508_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_508_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_508_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_508_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
uint8_t v___x_492_; 
v___x_492_ = lean_unbox(v_a_488_);
lean_dec(v_a_488_);
if (v___x_492_ == 0)
{
lean_del_object(v___x_490_);
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
lean_dec_ref(v_e_77_);
v___x_493_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__31));
v___x_494_ = l_Lean_mkConst(v___x_493_, v___x_470_);
v___x_495_ = lean_unsigned_to_nat(5u);
v___x_496_ = lean_mk_empty_array_with_capacity(v___x_495_);
v___x_497_ = lean_array_push(v___x_496_, v_arg_101_);
v___x_498_ = lean_array_push(v___x_497_, v_arg_100_);
v___x_499_ = lean_array_push(v___x_498_, v_arg_99_);
lean_inc_ref(v_arg_98_);
v___x_500_ = lean_array_push(v___x_499_, v_arg_98_);
v___x_501_ = lean_array_push(v___x_500_, v_hc_76_);
v___x_502_ = l_Lean_mkAppN(v___x_494_, v___x_501_);
lean_dec_ref(v___x_501_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
v___x_504_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_504_, 0, v_arg_98_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*2, v___x_106_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_504_);
v___x_506_ = v___x_490_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_509_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_487_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_487_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec(v_a_483_);
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_517_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_485_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_485_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_525_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_482_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_482_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
lean_dec_ref(v_e_77_);
v___x_533_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__33));
v___x_534_ = l_Lean_mkConst(v___x_533_, v___x_470_);
v___x_535_ = lean_unsigned_to_nat(5u);
v___x_536_ = lean_mk_empty_array_with_capacity(v___x_535_);
v___x_537_ = lean_array_push(v___x_536_, v_arg_101_);
v___x_538_ = lean_array_push(v___x_537_, v_arg_100_);
lean_inc_ref(v_arg_99_);
v___x_539_ = lean_array_push(v___x_538_, v_arg_99_);
v___x_540_ = lean_array_push(v___x_539_, v_arg_98_);
v___x_541_ = lean_array_push(v___x_540_, v_hc_76_);
v___x_542_ = l_Lean_mkAppN(v___x_534_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_544_, 0, v_arg_99_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*2, v___x_106_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_544_);
v___x_546_ = v___x_479_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_549_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_476_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_476_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec(v_a_472_);
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_557_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_474_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_474_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec(v___x_470_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_565_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_471_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_471_);
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
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = l_Lean_Expr_constLevels_x21(v___x_102_);
lean_dec_ref(v___x_102_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_574_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__26, &l_Lean_Meta_rwIfWith___closed__26_once, _init_l_Lean_Meta_rwIfWith___closed__26);
lean_inc_ref(v_arg_100_);
v___x_577_ = l_Lean_Meta_mkEq(v_arg_100_, v___x_576_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = l_Lean_Meta_isExprDefEq(v_a_575_, v_a_578_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_659_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_659_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_659_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_659_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
uint8_t v___x_584_; 
v___x_584_ = lean_unbox(v_a_580_);
lean_dec(v_a_580_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
lean_del_object(v___x_582_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_hc_76_);
v___x_585_ = lean_infer_type(v_hc_76_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__29, &l_Lean_Meta_rwIfWith___closed__29_once, _init_l_Lean_Meta_rwIfWith___closed__29);
lean_inc_ref(v_arg_100_);
v___x_588_ = l_Lean_Meta_mkEq(v_arg_100_, v___x_587_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_590_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = l_Lean_Meta_isExprDefEq(v_a_586_, v_a_589_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_615_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_615_ == 0)
{
v___x_593_ = v___x_590_;
v_isShared_594_ = v_isSharedCheck_615_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_615_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
uint8_t v___x_595_; 
v___x_595_ = lean_unbox(v_a_591_);
lean_dec(v_a_591_);
if (v___x_595_ == 0)
{
lean_del_object(v___x_593_);
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_hc_76_);
goto v___jp_83_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_613_; 
lean_dec_ref(v_e_77_);
v___x_596_ = lean_unsigned_to_nat(1u);
v___x_597_ = lean_mk_empty_array_with_capacity(v___x_596_);
lean_inc_ref(v_hc_76_);
v___x_598_ = lean_array_push(v___x_597_, v_hc_76_);
lean_inc_ref(v_arg_98_);
v___x_599_ = l_Lean_Expr_beta(v_arg_98_, v___x_598_);
v___x_600_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__35));
v___x_601_ = l_Lean_mkConst(v___x_600_, v___x_573_);
v___x_602_ = lean_unsigned_to_nat(5u);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_602_);
v___x_604_ = lean_array_push(v___x_603_, v_arg_101_);
v___x_605_ = lean_array_push(v___x_604_, v_arg_100_);
v___x_606_ = lean_array_push(v___x_605_, v_arg_99_);
v___x_607_ = lean_array_push(v___x_606_, v_arg_98_);
v___x_608_ = lean_array_push(v___x_607_, v_hc_76_);
v___x_609_ = l_Lean_mkAppN(v___x_601_, v___x_608_);
lean_dec_ref(v___x_608_);
v___x_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_611_, 0, v___x_599_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*2, v___x_104_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_611_);
v___x_613_ = v___x_593_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_616_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_590_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_590_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec(v_a_586_);
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_624_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_588_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_588_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_632_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_585_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_585_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_657_; 
lean_dec_ref(v_e_77_);
v___x_640_ = lean_unsigned_to_nat(1u);
v___x_641_ = lean_mk_empty_array_with_capacity(v___x_640_);
lean_inc_ref(v_hc_76_);
v___x_642_ = lean_array_push(v___x_641_, v_hc_76_);
lean_inc_ref(v_arg_99_);
v___x_643_ = l_Lean_Expr_beta(v_arg_99_, v___x_642_);
v___x_644_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__37));
v___x_645_ = l_Lean_mkConst(v___x_644_, v___x_573_);
v___x_646_ = lean_unsigned_to_nat(5u);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
v___x_648_ = lean_array_push(v___x_647_, v_arg_101_);
v___x_649_ = lean_array_push(v___x_648_, v_arg_100_);
v___x_650_ = lean_array_push(v___x_649_, v_arg_99_);
v___x_651_ = lean_array_push(v___x_650_, v_arg_98_);
v___x_652_ = lean_array_push(v___x_651_, v_hc_76_);
v___x_653_ = l_Lean_mkAppN(v___x_645_, v___x_652_);
lean_dec_ref(v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
v___x_655_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_655_, 0, v___x_643_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
lean_ctor_set_uint8(v___x_655_, sizeof(void*)*2, v___x_104_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_655_);
v___x_657_ = v___x_582_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_660_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_579_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_579_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v_a_575_);
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_668_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_577_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_577_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v___x_573_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_99_);
lean_dec_ref(v_arg_98_);
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_676_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_574_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_574_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
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
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref(v_e_77_);
lean_dec_ref(v_hc_76_);
v_a_684_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_88_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_88_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
v___jp_83_:
{
lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_box(0);
v___x_85_ = 1;
v___x_86_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_86_, 0, v_e_77_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*2, v___x_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith___boxed(lean_object* v_hc_692_, lean_object* v_e_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Meta_rwIfWith(v_hc_692_, v_e_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(lean_object* v_e_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v_env_704_; uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_703_ = lean_st_ref_get(v___y_701_);
v_env_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc_ref(v_env_704_);
lean_dec(v___x_703_);
v___x_705_ = l_Lean_Meta_isMatcherAppCore(v_env_704_, v_e_700_);
v___x_706_ = lean_box(v___x_705_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg___boxed(lean_object* v_e_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v_e_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(lean_object* v_e_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_712_, v___y_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___boxed(lean_object* v_e_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(v_e_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec_ref(v_e_719_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(lean_object* v_e_726_, lean_object* v___y_727_){
_start:
{
uint8_t v___x_729_; 
v___x_729_ = l_Lean_Expr_hasMVar(v_e_726_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_e_726_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v_mctx_732_; lean_object* v___x_733_; lean_object* v_fst_734_; lean_object* v_snd_735_; lean_object* v___x_736_; lean_object* v_cache_737_; lean_object* v_zetaDeltaFVarIds_738_; lean_object* v_postponed_739_; lean_object* v_diag_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
v___x_731_ = lean_st_ref_get(v___y_727_);
v_mctx_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_mctx_732_);
lean_dec(v___x_731_);
v___x_733_ = l_Lean_instantiateMVarsCore(v_mctx_732_, v_e_726_);
v_fst_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_fst_734_);
v_snd_735_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_snd_735_);
lean_dec_ref(v___x_733_);
v___x_736_ = lean_st_ref_take(v___y_727_);
v_cache_737_ = lean_ctor_get(v___x_736_, 1);
v_zetaDeltaFVarIds_738_ = lean_ctor_get(v___x_736_, 2);
v_postponed_739_ = lean_ctor_get(v___x_736_, 3);
v_diag_740_ = lean_ctor_get(v___x_736_, 4);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_736_, 0);
lean_dec(v_unused_750_);
v___x_742_ = v___x_736_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_diag_740_);
lean_inc(v_postponed_739_);
lean_inc(v_zetaDeltaFVarIds_738_);
lean_inc(v_cache_737_);
lean_dec(v___x_736_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v_snd_735_);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_snd_735_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_cache_737_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_zetaDeltaFVarIds_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_postponed_739_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_diag_740_);
v___x_745_ = v_reuseFailAlloc_748_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_st_ref_put(v___y_727_, v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v_fst_734_);
return v___x_747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg___boxed(lean_object* v_e_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_751_, v___y_752_);
lean_dec(v___y_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(lean_object* v_e_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_755_, v___y_757_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___boxed(lean_object* v_e_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(v_e_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
return v_res_768_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = lean_unsigned_to_nat(32u);
v___x_770_ = lean_mk_empty_array_with_capacity(v___x_769_);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1(void){
_start:
{
size_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_772_ = ((size_t)5ULL);
v___x_773_ = lean_unsigned_to_nat(0u);
v___x_774_ = lean_unsigned_to_nat(32u);
v___x_775_ = lean_mk_empty_array_with_capacity(v___x_774_);
v___x_776_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0);
v___x_777_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
lean_ctor_set(v___x_777_, 2, v___x_773_);
lean_ctor_set(v___x_777_, 3, v___x_773_);
lean_ctor_set_usize(v___x_777_, 4, v___x_772_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; lean_object* v_traceState_781_; lean_object* v_traces_782_; lean_object* v___x_783_; lean_object* v_traceState_784_; lean_object* v_env_785_; lean_object* v_nextMacroScope_786_; lean_object* v_ngen_787_; lean_object* v_auxDeclNGen_788_; lean_object* v_cache_789_; lean_object* v_recordedDeps_790_; lean_object* v_messages_791_; lean_object* v_infoState_792_; lean_object* v_snapshotTasks_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_812_; 
v___x_780_ = lean_st_ref_get(v___y_778_);
v_traceState_781_ = lean_ctor_get(v___x_780_, 4);
lean_inc_ref(v_traceState_781_);
lean_dec(v___x_780_);
v_traces_782_ = lean_ctor_get(v_traceState_781_, 0);
lean_inc_ref(v_traces_782_);
lean_dec_ref(v_traceState_781_);
v___x_783_ = lean_st_ref_take(v___y_778_);
v_traceState_784_ = lean_ctor_get(v___x_783_, 4);
v_env_785_ = lean_ctor_get(v___x_783_, 0);
v_nextMacroScope_786_ = lean_ctor_get(v___x_783_, 1);
v_ngen_787_ = lean_ctor_get(v___x_783_, 2);
v_auxDeclNGen_788_ = lean_ctor_get(v___x_783_, 3);
v_cache_789_ = lean_ctor_get(v___x_783_, 5);
v_recordedDeps_790_ = lean_ctor_get(v___x_783_, 6);
v_messages_791_ = lean_ctor_get(v___x_783_, 7);
v_infoState_792_ = lean_ctor_get(v___x_783_, 8);
v_snapshotTasks_793_ = lean_ctor_get(v___x_783_, 9);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_812_ == 0)
{
v___x_795_ = v___x_783_;
v_isShared_796_ = v_isSharedCheck_812_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_snapshotTasks_793_);
lean_inc(v_infoState_792_);
lean_inc(v_messages_791_);
lean_inc(v_recordedDeps_790_);
lean_inc(v_cache_789_);
lean_inc(v_traceState_784_);
lean_inc(v_auxDeclNGen_788_);
lean_inc(v_ngen_787_);
lean_inc(v_nextMacroScope_786_);
lean_inc(v_env_785_);
lean_dec(v___x_783_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_812_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
uint64_t v_tid_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_810_; 
v_tid_797_ = lean_ctor_get_uint64(v_traceState_784_, sizeof(void*)*1);
v_isSharedCheck_810_ = !lean_is_exclusive(v_traceState_784_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; 
v_unused_811_ = lean_ctor_get(v_traceState_784_, 0);
lean_dec(v_unused_811_);
v___x_799_ = v_traceState_784_;
v_isShared_800_ = v_isSharedCheck_810_;
goto v_resetjp_798_;
}
else
{
lean_dec(v_traceState_784_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_810_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_801_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_801_);
v___x_803_ = v___x_799_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_801_);
lean_ctor_set_uint64(v_reuseFailAlloc_809_, sizeof(void*)*1, v_tid_797_);
v___x_803_ = v_reuseFailAlloc_809_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_805_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 4, v___x_803_);
v___x_805_ = v___x_795_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_env_785_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_nextMacroScope_786_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v_ngen_787_);
lean_ctor_set(v_reuseFailAlloc_808_, 3, v_auxDeclNGen_788_);
lean_ctor_set(v_reuseFailAlloc_808_, 4, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_808_, 5, v_cache_789_);
lean_ctor_set(v_reuseFailAlloc_808_, 6, v_recordedDeps_790_);
lean_ctor_set(v_reuseFailAlloc_808_, 7, v_messages_791_);
lean_ctor_set(v_reuseFailAlloc_808_, 8, v_infoState_792_);
lean_ctor_set(v_reuseFailAlloc_808_, 9, v_snapshotTasks_793_);
v___x_805_ = v_reuseFailAlloc_808_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_st_ref_put(v___y_778_, v___x_805_);
v___x_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_807_, 0, v_traces_782_);
return v___x_807_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___boxed(lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_813_);
lean_dec(v___y_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___boxed(lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_827_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(lean_object* v_opts_828_, lean_object* v_opt_829_){
_start:
{
lean_object* v_name_830_; lean_object* v_defValue_831_; lean_object* v_map_832_; lean_object* v___x_833_; 
v_name_830_ = lean_ctor_get(v_opt_829_, 0);
v_defValue_831_ = lean_ctor_get(v_opt_829_, 1);
v_map_832_ = lean_ctor_get(v_opts_828_, 0);
v___x_833_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_832_, v_name_830_);
if (lean_obj_tag(v___x_833_) == 0)
{
uint8_t v___x_834_; 
v___x_834_ = lean_unbox(v_defValue_831_);
return v___x_834_;
}
else
{
lean_object* v_val_835_; 
v_val_835_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_val_835_);
lean_dec_ref_known(v___x_833_, 1);
if (lean_obj_tag(v_val_835_) == 1)
{
uint8_t v_v_836_; 
v_v_836_ = lean_ctor_get_uint8(v_val_835_, 0);
lean_dec_ref_known(v_val_835_, 0);
return v_v_836_;
}
else
{
uint8_t v___x_837_; 
lean_dec(v_val_835_);
v___x_837_ = lean_unbox(v_defValue_831_);
return v___x_837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11___boxed(lean_object* v_opts_838_, lean_object* v_opt_839_){
_start:
{
uint8_t v_res_840_; lean_object* v_r_841_; 
v_res_840_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_838_, v_opt_839_);
lean_dec_ref(v_opt_839_);
lean_dec_ref(v_opts_838_);
v_r_841_ = lean_box(v_res_840_);
return v_r_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0(lean_object* v_e_842_, uint8_t v___x_843_, lean_object* v_____r_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_box(0);
v___x_851_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_851_, 0, v_e_842_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
lean_ctor_set_uint8(v___x_851_, sizeof(void*)*2, v___x_843_);
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0___boxed(lean_object* v_e_854_, lean_object* v___x_855_, lean_object* v_____r_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
uint8_t v___x_85226__boxed_862_; lean_object* v_res_863_; 
v___x_85226__boxed_862_ = lean_unbox(v___x_855_);
v_res_863_ = l_Lean_Meta_rwMatcher___lam__0(v_e_854_, v___x_85226__boxed_862_, v_____r_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
return v_res_863_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__1(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__0));
v___x_866_ = l_Lean_stringToMessageData(v___x_865_);
return v___x_866_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__3(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__2));
v___x_869_ = l_Lean_stringToMessageData(v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1(lean_object* v___x_870_, uint8_t v___x_871_, lean_object* v_e_872_, lean_object* v_x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_879_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__1, &l_Lean_Meta_rwMatcher___lam__1___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__1);
v___x_880_ = l_Lean_MessageData_ofConstName(v___x_870_, v___x_871_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__3, &l_Lean_Meta_rwMatcher___lam__1___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__3);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_indentExpr(v_e_872_);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1___boxed(lean_object* v___x_887_, lean_object* v___x_888_, lean_object* v_e_889_, lean_object* v_x_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v___x_85268__boxed_896_; lean_object* v_res_897_; 
v___x_85268__boxed_896_ = lean_unbox(v___x_888_);
v_res_897_ = l_Lean_Meta_rwMatcher___lam__1(v___x_887_, v___x_85268__boxed_896_, v_e_889_, v_x_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec_ref(v_x_890_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(lean_object* v_msgData_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; lean_object* v_env_905_; uint8_t v___x_906_; lean_object* v_env_907_; lean_object* v___x_908_; lean_object* v_toCold_909_; lean_object* v_mctx_910_; lean_object* v_lctx_911_; lean_object* v_options_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_904_ = lean_st_ref_get(v___y_902_);
v_env_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc_ref(v_env_905_);
lean_dec(v___x_904_);
v___x_906_ = 0;
v_env_907_ = l_Lean_Environment_setRecordingDeps(v_env_905_, v___x_906_);
v___x_908_ = lean_st_ref_get(v___y_900_);
v_toCold_909_ = lean_ctor_get(v___y_901_, 0);
v_mctx_910_ = lean_ctor_get(v___x_908_, 0);
lean_inc_ref(v_mctx_910_);
lean_dec(v___x_908_);
v_lctx_911_ = lean_ctor_get(v___y_899_, 2);
v_options_912_ = lean_ctor_get(v_toCold_909_, 2);
lean_inc_ref(v_options_912_);
lean_inc_ref(v_lctx_911_);
v___x_913_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_913_, 0, v_env_907_);
lean_ctor_set(v___x_913_, 1, v_mctx_910_);
lean_ctor_set(v___x_913_, 2, v_lctx_911_);
lean_ctor_set(v___x_913_, 3, v_options_912_);
v___x_914_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v_msgData_898_);
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4___boxed(lean_object* v_msgData_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msgData_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(lean_object* v_msg_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v_ref_929_; lean_object* v___x_930_; lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_ref_929_ = lean_ctor_get(v___y_926_, 2);
v___x_930_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
lean_inc(v_ref_929_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v_ref_929_);
lean_ctor_set(v___x_935_, 1, v_a_931_);
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 1);
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg___boxed(lean_object* v_msg_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
return v_res_946_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(lean_object* v_keys_947_, lean_object* v_i_948_, lean_object* v_k_949_){
_start:
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_array_get_size(v_keys_947_);
v___x_951_ = lean_nat_dec_lt(v_i_948_, v___x_950_);
if (v___x_951_ == 0)
{
lean_dec(v_i_948_);
return v___x_951_;
}
else
{
lean_object* v_k_x27_952_; uint8_t v___x_953_; 
v_k_x27_952_ = lean_array_fget_borrowed(v_keys_947_, v_i_948_);
v___x_953_ = l_Lean_instBEqMVarId_beq(v_k_949_, v_k_x27_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = lean_nat_add(v_i_948_, v___x_954_);
lean_dec(v_i_948_);
v_i_948_ = v___x_955_;
goto _start;
}
else
{
lean_dec(v_i_948_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg___boxed(lean_object* v_keys_957_, lean_object* v_i_958_, lean_object* v_k_959_){
_start:
{
uint8_t v_res_960_; lean_object* v_r_961_; 
v_res_960_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_957_, v_i_958_, v_k_959_);
lean_dec(v_k_959_);
lean_dec_ref(v_keys_957_);
v_r_961_ = lean_box(v_res_960_);
return v_r_961_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(lean_object* v_x_962_, size_t v_x_963_, lean_object* v_x_964_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
lean_object* v_es_965_; lean_object* v___x_966_; size_t v___x_967_; size_t v___x_968_; lean_object* v_j_969_; lean_object* v___x_970_; 
v_es_965_ = lean_ctor_get(v_x_962_, 0);
v___x_966_ = lean_box(2);
v___x_967_ = ((size_t)31ULL);
v___x_968_ = lean_usize_land(v_x_963_, v___x_967_);
v_j_969_ = lean_usize_to_nat(v___x_968_);
v___x_970_ = lean_array_get_borrowed(v___x_966_, v_es_965_, v_j_969_);
lean_dec(v_j_969_);
switch(lean_obj_tag(v___x_970_))
{
case 0:
{
lean_object* v_key_971_; uint8_t v___x_972_; 
v_key_971_ = lean_ctor_get(v___x_970_, 0);
v___x_972_ = l_Lean_instBEqMVarId_beq(v_x_964_, v_key_971_);
return v___x_972_;
}
case 1:
{
lean_object* v_node_973_; size_t v___x_974_; size_t v___x_975_; 
v_node_973_ = lean_ctor_get(v___x_970_, 0);
v___x_974_ = ((size_t)5ULL);
v___x_975_ = lean_usize_shift_right(v_x_963_, v___x_974_);
v_x_962_ = v_node_973_;
v_x_963_ = v___x_975_;
goto _start;
}
default: 
{
uint8_t v___x_977_; 
v___x_977_ = 0;
return v___x_977_;
}
}
}
else
{
lean_object* v_ks_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v_ks_978_ = lean_ctor_get(v_x_962_, 0);
v___x_979_ = lean_unsigned_to_nat(0u);
v___x_980_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_ks_978_, v___x_979_, v_x_964_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_x_981_, lean_object* v_x_982_, lean_object* v_x_983_){
_start:
{
size_t v_x_85389__boxed_984_; uint8_t v_res_985_; lean_object* v_r_986_; 
v_x_85389__boxed_984_ = lean_unbox_usize(v_x_982_);
lean_dec(v_x_982_);
v_res_985_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_981_, v_x_85389__boxed_984_, v_x_983_);
lean_dec(v_x_983_);
lean_dec_ref(v_x_981_);
v_r_986_ = lean_box(v_res_985_);
return v_r_986_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(lean_object* v_x_987_, lean_object* v_x_988_){
_start:
{
uint64_t v___x_989_; size_t v___x_990_; uint8_t v___x_991_; 
v___x_989_ = l_Lean_instHashableMVarId_hash(v_x_988_);
v___x_990_ = lean_uint64_to_usize(v___x_989_);
v___x_991_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_987_, v___x_990_, v_x_988_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg___boxed(lean_object* v_x_992_, lean_object* v_x_993_){
_start:
{
uint8_t v_res_994_; lean_object* v_r_995_; 
v_res_994_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_992_, v_x_993_);
lean_dec(v_x_993_);
lean_dec_ref(v_x_992_);
v_r_995_ = lean_box(v_res_994_);
return v_r_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(lean_object* v_mvarId_996_, lean_object* v___y_997_){
_start:
{
lean_object* v___x_999_; lean_object* v_mctx_1000_; lean_object* v_eAssignment_1001_; uint8_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_999_ = lean_st_ref_get(v___y_997_);
v_mctx_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc_ref(v_mctx_1000_);
lean_dec(v___x_999_);
v_eAssignment_1001_ = lean_ctor_get(v_mctx_1000_, 8);
lean_inc_ref(v_eAssignment_1001_);
lean_dec_ref(v_mctx_1000_);
v___x_1002_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_eAssignment_1001_, v_mvarId_996_);
lean_dec_ref(v_eAssignment_1001_);
v___x_1003_ = lean_box(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg___boxed(lean_object* v_mvarId_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec(v_mvarId_1005_);
return v_res_1008_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0));
v___x_1011_ = l_Lean_stringToMessageData(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2));
v___x_1014_ = l_Lean_stringToMessageData(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4));
v___x_1017_ = l_Lean_stringToMessageData(v___x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(lean_object* v_as_1018_, size_t v_sz_1019_, size_t v_i_1020_, lean_object* v_b_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_a_1028_; uint8_t v___x_1032_; 
v___x_1032_ = lean_usize_dec_lt(v_i_1020_, v_sz_1019_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1033_, 0, v_b_1021_);
return v___x_1033_;
}
else
{
lean_object* v___x_1034_; lean_object* v_a_1035_; lean_object* v___x_1036_; 
v___x_1034_ = lean_box(0);
v_a_1035_ = lean_array_uget_borrowed(v_as_1018_, v_i_1020_);
v___x_1036_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_a_1035_, v___y_1023_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; uint8_t v___x_1038_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = lean_unbox(v_a_1037_);
lean_dec(v_a_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; 
lean_inc(v_a_1035_);
v___x_1039_ = l_Lean_MVarId_getType(v_a_1035_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; uint8_t v___x_1041_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1041_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_a_1040_);
if (v___x_1041_ == 0)
{
uint8_t v___x_1042_; 
v___x_1042_ = l_Lean_Expr_isEq(v_a_1040_);
if (v___x_1042_ == 0)
{
uint8_t v___x_1043_; 
v___x_1043_ = l_Lean_Expr_isHEq(v_a_1040_);
lean_dec(v_a_1040_);
if (v___x_1043_ == 0)
{
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_Meta_saveState___redArg(v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1046_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc(v_a_1045_);
lean_dec_ref_known(v___x_1044_, 1);
lean_inc(v_a_1035_);
v___x_1046_ = l_Lean_MVarId_assumption(v_a_1035_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_dec_ref_known(v___x_1046_, 1);
lean_dec(v_a_1045_);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1047_; uint8_t v___x_1048_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v___x_1048_ = l_Lean_Exception_isInterrupt(v_a_1047_);
if (v___x_1048_ == 0)
{
uint8_t v___x_1049_; 
lean_inc(v_a_1047_);
v___x_1049_ = l_Lean_Exception_isRuntime(v_a_1047_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
lean_dec_ref_known(v___x_1046_, 1);
v___x_1050_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1045_, v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v___x_1051_; 
lean_dec_ref_known(v___x_1050_, 1);
v___x_1051_ = l_Lean_Meta_saveState___redArg(v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
lean_inc(v_a_1035_);
v___x_1053_ = l_Lean_MVarId_hrefl(v_a_1035_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_dec_ref_known(v___x_1053_, 1);
lean_dec(v_a_1052_);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1054_; uint8_t v___x_1055_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
v___x_1055_ = l_Lean_Exception_isInterrupt(v_a_1054_);
if (v___x_1055_ == 0)
{
uint8_t v___x_1056_; 
lean_inc(v_a_1054_);
v___x_1056_ = l_Lean_Exception_isRuntime(v_a_1054_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
lean_dec_ref_known(v___x_1053_, 1);
v___x_1057_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1052_, v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1069_; 
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v___x_1057_, 0);
lean_dec(v_unused_1070_);
v___x_1059_ = v___x_1057_;
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
else
{
lean_dec(v___x_1057_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_1035_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set_tag(v___x_1059_, 1);
lean_ctor_set(v___x_1059_, 0, v_a_1035_);
v___x_1063_ = v___x_1059_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1035_);
v___x_1063_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1061_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1066_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_dec_ref_known(v___x_1067_, 1);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
return v___x_1067_;
}
}
}
}
else
{
return v___x_1057_;
}
}
else
{
lean_dec(v_a_1052_);
return v___x_1053_;
}
}
else
{
lean_dec(v_a_1052_);
return v___x_1053_;
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
v_a_1071_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1051_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1051_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
return v___x_1050_;
}
}
else
{
lean_dec(v_a_1045_);
return v___x_1046_;
}
}
else
{
lean_dec(v_a_1045_);
return v___x_1046_;
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1044_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1044_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
else
{
lean_object* v___x_1087_; 
lean_dec(v_a_1040_);
v___x_1087_ = l_Lean_Meta_saveState___redArg(v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
lean_inc(v_a_1035_);
v___x_1089_ = l_Lean_MVarId_assumption(v_a_1035_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_dec_ref_known(v___x_1089_, 1);
lean_dec(v_a_1088_);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1090_; uint8_t v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v___x_1091_ = l_Lean_Exception_isInterrupt(v_a_1090_);
if (v___x_1091_ == 0)
{
uint8_t v___x_1092_; 
lean_inc(v_a_1090_);
v___x_1092_ = l_Lean_Exception_isRuntime(v_a_1090_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; 
lean_dec_ref_known(v___x_1089_, 1);
v___x_1093_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1088_, v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v___x_1094_; 
lean_dec_ref_known(v___x_1093_, 1);
v___x_1094_ = l_Lean_Meta_saveState___redArg(v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
lean_inc(v_a_1035_);
v___x_1096_ = l_Lean_MVarId_refl(v_a_1035_, v___x_1032_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_dec_ref_known(v___x_1096_, 1);
lean_dec(v_a_1095_);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1097_; uint8_t v___x_1098_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
v___x_1098_ = l_Lean_Exception_isInterrupt(v_a_1097_);
if (v___x_1098_ == 0)
{
uint8_t v___x_1099_; 
lean_inc(v_a_1097_);
v___x_1099_ = l_Lean_Exception_isRuntime(v_a_1097_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; 
lean_dec_ref_known(v___x_1096_, 1);
v___x_1100_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1095_, v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1112_; 
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v___x_1100_, 0);
lean_dec(v_unused_1113_);
v___x_1102_ = v___x_1100_;
v_isShared_1103_ = v_isSharedCheck_1112_;
goto v_resetjp_1101_;
}
else
{
lean_dec(v___x_1100_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1112_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_1035_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 1);
lean_ctor_set(v___x_1102_, 0, v_a_1035_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1035_);
v___x_1106_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1104_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1109_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_dec_ref_known(v___x_1110_, 1);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
return v___x_1110_;
}
}
}
}
else
{
return v___x_1100_;
}
}
else
{
lean_dec(v_a_1095_);
return v___x_1096_;
}
}
else
{
lean_dec(v_a_1095_);
return v___x_1096_;
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
v_a_1114_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1094_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1094_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
return v___x_1093_;
}
}
else
{
lean_dec(v_a_1088_);
return v___x_1089_;
}
}
else
{
lean_dec(v_a_1088_);
return v___x_1089_;
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
v_a_1122_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1087_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1087_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
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
}
else
{
lean_object* v___x_1130_; 
lean_dec(v_a_1040_);
v___x_1130_ = l_Lean_Meta_saveState___redArg(v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1132_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
lean_inc(v_a_1035_);
v___x_1132_ = l_Lean_MVarId_assumption(v_a_1035_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_dec_ref_known(v___x_1132_, 1);
lean_dec(v_a_1131_);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1133_; uint8_t v___x_1134_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
v___x_1134_ = l_Lean_Exception_isInterrupt(v_a_1133_);
if (v___x_1134_ == 0)
{
uint8_t v___x_1135_; 
lean_inc(v_a_1133_);
v___x_1135_ = l_Lean_Exception_isRuntime(v_a_1133_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_dec_ref_known(v___x_1132_, 1);
v___x_1136_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1131_, v___y_1023_, v___y_1025_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1148_; 
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; 
v_unused_1149_ = lean_ctor_get(v___x_1136_, 0);
lean_dec(v_unused_1149_);
v___x_1138_ = v___x_1136_;
v_isShared_1139_ = v_isSharedCheck_1148_;
goto v_resetjp_1137_;
}
else
{
lean_dec(v___x_1136_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1148_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1140_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5);
lean_inc(v_a_1035_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set_tag(v___x_1138_, 1);
lean_ctor_set(v___x_1138_, 0, v_a_1035_);
v___x_1142_ = v___x_1138_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1035_);
v___x_1142_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1140_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1145_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_dec_ref_known(v___x_1146_, 1);
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
else
{
return v___x_1146_;
}
}
}
}
else
{
return v___x_1136_;
}
}
else
{
lean_dec(v_a_1131_);
return v___x_1132_;
}
}
else
{
lean_dec(v_a_1131_);
return v___x_1132_;
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1130_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1130_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_a_1158_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1039_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1039_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
else
{
v_a_1028_ = v___x_1034_;
goto v___jp_1027_;
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
v_a_1166_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1036_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1036_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
v___jp_1027_:
{
size_t v___x_1029_; size_t v___x_1030_; 
v___x_1029_ = ((size_t)1ULL);
v___x_1030_ = lean_usize_add(v_i_1020_, v___x_1029_);
v_i_1020_ = v___x_1030_;
v_b_1021_ = v_a_1028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___boxed(lean_object* v_as_1174_, lean_object* v_sz_1175_, lean_object* v_i_1176_, lean_object* v_b_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
size_t v_sz_boxed_1183_; size_t v_i_boxed_1184_; lean_object* v_res_1185_; 
v_sz_boxed_1183_ = lean_unbox_usize(v_sz_1175_);
lean_dec(v_sz_1175_);
v_i_boxed_1184_ = lean_unbox_usize(v_i_1176_);
lean_dec(v_i_1176_);
v_res_1185_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v_as_1174_, v_sz_boxed_1183_, v_i_boxed_1184_, v_b_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec_ref(v_as_1174_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(lean_object* v_as_1186_, size_t v_i_1187_, size_t v_stop_1188_, lean_object* v_b_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_a_1196_; uint8_t v___x_1200_; 
v___x_1200_ = lean_usize_dec_eq(v_i_1187_, v_stop_1188_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_array_uget_borrowed(v_as_1186_, v_i_1187_);
v___x_1202_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v___x_1201_, v___y_1191_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; uint8_t v___x_1204_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1204_ = lean_unbox(v_a_1203_);
lean_dec(v_a_1203_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; 
lean_inc(v___x_1201_);
v___x_1205_ = lean_array_push(v_b_1189_, v___x_1201_);
v_a_1196_ = v___x_1205_;
goto v___jp_1195_;
}
else
{
v_a_1196_ = v_b_1189_;
goto v___jp_1195_;
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v_b_1189_);
v_a_1206_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1202_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1202_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v_b_1189_);
return v___x_1214_;
}
v___jp_1195_:
{
size_t v___x_1197_; size_t v___x_1198_; 
v___x_1197_ = ((size_t)1ULL);
v___x_1198_ = lean_usize_add(v_i_1187_, v___x_1197_);
v_i_1187_ = v___x_1198_;
v_b_1189_ = v_a_1196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9___boxed(lean_object* v_as_1215_, lean_object* v_i_1216_, lean_object* v_stop_1217_, lean_object* v_b_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
size_t v_i_boxed_1224_; size_t v_stop_boxed_1225_; lean_object* v_res_1226_; 
v_i_boxed_1224_ = lean_unbox_usize(v_i_1216_);
lean_dec(v_i_1216_);
v_stop_boxed_1225_ = lean_unbox_usize(v_stop_1217_);
lean_dec(v_stop_1217_);
v_res_1226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v_as_1215_, v_i_boxed_1224_, v_stop_boxed_1225_, v_b_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec_ref(v_as_1215_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(size_t v_sz_1227_, size_t v_i_1228_, lean_object* v_bs_1229_){
_start:
{
uint8_t v___x_1230_; 
v___x_1230_ = lean_usize_dec_lt(v_i_1228_, v_sz_1227_);
if (v___x_1230_ == 0)
{
return v_bs_1229_;
}
else
{
lean_object* v_v_1231_; lean_object* v___x_1232_; lean_object* v_bs_x27_1233_; lean_object* v___x_1234_; size_t v___x_1235_; size_t v___x_1236_; lean_object* v___x_1237_; 
v_v_1231_ = lean_array_uget(v_bs_1229_, v_i_1228_);
v___x_1232_ = lean_unsigned_to_nat(0u);
v_bs_x27_1233_ = lean_array_uset(v_bs_1229_, v_i_1228_, v___x_1232_);
v___x_1234_ = l_Lean_Expr_mvarId_x21(v_v_1231_);
lean_dec(v_v_1231_);
v___x_1235_ = ((size_t)1ULL);
v___x_1236_ = lean_usize_add(v_i_1228_, v___x_1235_);
v___x_1237_ = lean_array_uset(v_bs_x27_1233_, v_i_1228_, v___x_1234_);
v_i_1228_ = v___x_1236_;
v_bs_1229_ = v___x_1237_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4___boxed(lean_object* v_sz_1239_, lean_object* v_i_1240_, lean_object* v_bs_1241_){
_start:
{
size_t v_sz_boxed_1242_; size_t v_i_boxed_1243_; lean_object* v_res_1244_; 
v_sz_boxed_1242_ = lean_unbox_usize(v_sz_1239_);
lean_dec(v_sz_1239_);
v_i_boxed_1243_ = lean_unbox_usize(v_i_1240_);
lean_dec(v_i_1240_);
v_res_1244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_boxed_1242_, v_i_boxed_1243_, v_bs_1241_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(lean_object* v_a_1245_, lean_object* v_a_1246_){
_start:
{
if (lean_obj_tag(v_a_1245_) == 0)
{
lean_object* v___x_1247_; 
v___x_1247_ = l_List_reverse___redArg(v_a_1246_);
return v___x_1247_;
}
else
{
lean_object* v_head_1248_; lean_object* v_tail_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1258_; 
v_head_1248_ = lean_ctor_get(v_a_1245_, 0);
v_tail_1249_ = lean_ctor_get(v_a_1245_, 1);
v_isSharedCheck_1258_ = !lean_is_exclusive(v_a_1245_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1251_ = v_a_1245_;
v_isShared_1252_ = v_isSharedCheck_1258_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_tail_1249_);
lean_inc(v_head_1248_);
lean_dec(v_a_1245_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1258_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v___x_1255_; 
v___x_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1253_, 0, v_head_1248_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 1, v_a_1246_);
lean_ctor_set(v___x_1251_, 0, v___x_1253_);
v___x_1255_ = v___x_1251_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1253_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_a_1246_);
v___x_1255_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
v_a_1245_ = v_tail_1249_;
v_a_1246_ = v___x_1255_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__0));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__2));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__4));
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__7(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__6));
v___x_1270_ = l_Lean_stringToMessageData(v___x_1269_);
return v___x_1270_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__9(void){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__8));
v___x_1273_ = l_Lean_stringToMessageData(v___x_1272_);
return v___x_1273_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__11));
v___x_1278_ = l_Lean_stringToMessageData(v___x_1277_);
return v___x_1278_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__14(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__13));
v___x_1281_ = l_Lean_stringToMessageData(v___x_1280_);
return v___x_1281_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__16(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__15));
v___x_1284_ = l_Lean_stringToMessageData(v___x_1283_);
return v___x_1284_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__22(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__21));
v___x_1293_ = l_Lean_stringToMessageData(v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__24(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__23));
v___x_1296_ = l_Lean_stringToMessageData(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2(uint8_t v___x_1297_, lean_object* v___x_1298_, lean_object* v_fst_1299_, lean_object* v___x_1300_, lean_object* v_e_1301_, uint8_t v___x_1302_, lean_object* v_snd_1303_, lean_object* v_____r_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v___y_1311_; lean_object* v_proof_1312_; lean_object* v___x_1316_; uint8_t v___y_1318_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1364_; uint8_t v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v_a_1370_; size_t v_sz_1393_; size_t v___x_1394_; lean_object* v___x_1395_; uint8_t v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; uint8_t v_fst_1430_; lean_object* v_fst_1431_; lean_object* v_snd_1432_; lean_object* v___x_1466_; lean_object* v___x_1467_; uint8_t v___x_1468_; 
v___x_1316_ = l_Lean_mkAppN(v___x_1298_, v_fst_1299_);
v_sz_1393_ = lean_array_size(v_fst_1299_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1393_, v___x_1394_, v_fst_1299_);
v___x_1466_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1467_ = lean_unsigned_to_nat(4u);
v___x_1468_ = l_Lean_Expr_isAppOfArity(v_snd_1303_, v___x_1466_, v___x_1467_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1469_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1470_ = lean_unsigned_to_nat(3u);
v___x_1471_ = l_Lean_Expr_isAppOfArity(v_snd_1303_, v___x_1469_, v___x_1470_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1316_);
lean_dec_ref(v_e_1301_);
v___x_1472_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1473_ = l_Lean_MessageData_ofConstName(v___x_1300_, v___x_1302_);
v___x_1474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1472_);
lean_ctor_set(v___x_1474_, 1, v___x_1473_);
v___x_1475_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1476_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
else
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1486_ = l_Lean_Expr_appFn_x21(v_snd_1303_);
v___x_1487_ = l_Lean_Expr_appArg_x21(v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = l_Lean_Expr_appArg_x21(v_snd_1303_);
v_fst_1430_ = v___x_1302_;
v_fst_1431_ = v___x_1487_;
v_snd_1432_ = v___x_1488_;
goto v___jp_1429_;
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1489_ = l_Lean_Expr_appFn_x21(v_snd_1303_);
v___x_1490_ = l_Lean_Expr_appFn_x21(v___x_1489_);
lean_dec_ref(v___x_1489_);
v___x_1491_ = l_Lean_Expr_appArg_x21(v___x_1490_);
lean_dec_ref(v___x_1490_);
v___x_1492_ = l_Lean_Expr_appArg_x21(v_snd_1303_);
v_fst_1430_ = v___x_1297_;
v_fst_1431_ = v___x_1491_;
v_snd_1432_ = v___x_1492_;
goto v___jp_1429_;
}
v___jp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1313_, 0, v_proof_1312_);
v___x_1314_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1314_, 0, v___y_1311_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*2, v___x_1297_);
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
return v___x_1315_;
}
v___jp_1317_:
{
lean_object* v___x_1324_; lean_object* v_a_1325_; lean_object* v___x_1326_; 
v___x_1324_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1319_, v___y_1321_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
lean_inc(v_a_1325_);
lean_dec_ref(v___x_1324_);
v___x_1326_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1316_, v___y_1321_);
if (v___y_1318_ == 0)
{
lean_object* v_a_1327_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref(v___x_1326_);
v___y_1311_ = v_a_1325_;
v_proof_1312_ = v_a_1327_;
goto v___jp_1310_;
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1329_; 
v_a_1328_ = lean_ctor_get(v___x_1326_, 0);
lean_inc_n(v_a_1328_, 2);
lean_dec_ref(v___x_1326_);
v___x_1329_ = l_Lean_Meta_mkEqOfHEq(v_a_1328_, v___x_1297_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; 
lean_dec(v_a_1328_);
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___y_1311_ = v_a_1325_;
v_proof_1312_ = v_a_1330_;
goto v___jp_1310_;
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1362_; 
lean_dec(v_a_1325_);
v_a_1331_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1333_ = v___x_1329_;
v_isShared_1334_ = v_isSharedCheck_1362_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1329_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1362_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
uint8_t v___x_1335_; 
v___x_1335_ = l_Lean_Exception_isInterrupt(v_a_1331_);
if (v___x_1335_ == 0)
{
uint8_t v___x_1336_; 
lean_inc(v_a_1331_);
v___x_1336_ = l_Lean_Exception_isRuntime(v_a_1331_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_del_object(v___x_1333_);
v___x_1337_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1338_ = l_Lean_MessageData_ofExpr(v_a_1328_);
v___x_1339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1337_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = l_Lean_Exception_toMessageData(v_a_1331_);
v___x_1343_ = l_Lean_indentD(v___x_1342_);
v___x_1344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1341_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1346_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
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
else
{
lean_object* v___x_1357_; 
lean_dec(v_a_1328_);
if (v_isShared_1334_ == 0)
{
v___x_1357_ = v___x_1333_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1331_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
else
{
lean_object* v___x_1360_; 
lean_dec(v_a_1328_);
if (v_isShared_1334_ == 0)
{
v___x_1360_ = v___x_1333_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1331_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
}
v___jp_1363_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1371_ = lean_array_get_size(v_a_1370_);
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = lean_nat_dec_eq(v___x_1371_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
lean_dec_ref(v___y_1368_);
lean_dec_ref(v___x_1316_);
v___x_1374_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1375_ = l_Lean_MessageData_ofConstName(v___x_1300_, v___x_1373_);
v___x_1376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1376_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
v___x_1379_ = lean_array_to_list(v_a_1370_);
v___x_1380_ = lean_box(0);
v___x_1381_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1379_, v___x_1380_);
v___x_1382_ = l_Lean_MessageData_ofList(v___x_1381_);
v___x_1383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1378_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
v___x_1384_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1383_, v___y_1364_, v___y_1369_, v___y_1366_, v___y_1367_);
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1384_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1384_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
else
{
lean_dec_ref(v_a_1370_);
lean_dec(v___x_1300_);
v___y_1318_ = v___y_1365_;
v___y_1319_ = v___y_1368_;
v___y_1320_ = v___y_1364_;
v___y_1321_ = v___y_1369_;
v___y_1322_ = v___y_1366_;
v___y_1323_ = v___y_1367_;
goto v___jp_1317_;
}
}
v___jp_1396_:
{
lean_object* v___x_1403_; size_t v_sz_1404_; lean_object* v___x_1405_; 
v___x_1403_ = lean_box(0);
v_sz_1404_ = lean_array_size(v___x_1395_);
v___x_1405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1395_, v_sz_1404_, v___x_1394_, v___x_1403_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; 
lean_dec_ref_known(v___x_1405_, 1);
v___x_1406_ = lean_unsigned_to_nat(0u);
v___x_1407_ = lean_array_get_size(v___x_1395_);
v___x_1408_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1409_ = lean_nat_dec_lt(v___x_1406_, v___x_1407_);
if (v___x_1409_ == 0)
{
lean_dec_ref(v___x_1395_);
v___y_1364_ = v___y_1399_;
v___y_1365_ = v___y_1397_;
v___y_1366_ = v___y_1401_;
v___y_1367_ = v___y_1402_;
v___y_1368_ = v___y_1398_;
v___y_1369_ = v___y_1400_;
v_a_1370_ = v___x_1408_;
goto v___jp_1363_;
}
else
{
size_t v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_usize_of_nat(v___x_1407_);
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1395_, v___x_1394_, v___x_1410_, v___x_1408_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec_ref(v___x_1395_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v___y_1364_ = v___y_1399_;
v___y_1365_ = v___y_1397_;
v___y_1366_ = v___y_1401_;
v___y_1367_ = v___y_1402_;
v___y_1368_ = v___y_1398_;
v___y_1369_ = v___y_1400_;
v_a_1370_ = v_a_1412_;
goto v___jp_1363_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec_ref(v___y_1398_);
lean_dec_ref(v___x_1316_);
lean_dec(v___x_1300_);
v_a_1413_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1411_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1411_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref(v___y_1398_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1316_);
lean_dec(v___x_1300_);
v_a_1421_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1405_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1405_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
v___jp_1429_:
{
lean_object* v___x_1433_; 
lean_inc_ref(v_fst_1431_);
lean_inc_ref(v_e_1301_);
v___x_1433_ = l_Lean_Meta_isExprDefEq(v_e_1301_, v_fst_1431_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; uint8_t v___x_1435_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref_known(v___x_1433_, 1);
v___x_1435_ = lean_unbox(v_a_1434_);
lean_dec(v_a_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref(v_snd_1432_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1316_);
v___x_1436_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1437_ = l_Lean_MessageData_ofExpr(v_fst_1431_);
v___x_1438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = l_Lean_MessageData_ofConstName(v___x_1300_, v___x_1302_);
v___x_1442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1440_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = l_Lean_MessageData_ofExpr(v_e_1301_);
v___x_1446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1446_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1448_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1449_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1449_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_dec_ref(v_fst_1431_);
lean_dec_ref(v_e_1301_);
v___y_1397_ = v_fst_1430_;
v___y_1398_ = v_snd_1432_;
v___y_1399_ = v___y_1305_;
v___y_1400_ = v___y_1306_;
v___y_1401_ = v___y_1307_;
v___y_1402_ = v___y_1308_;
goto v___jp_1396_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_snd_1432_);
lean_dec_ref(v_fst_1431_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1316_);
lean_dec_ref(v_e_1301_);
lean_dec(v___x_1300_);
v_a_1458_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1433_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1433_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2___boxed(lean_object* v___x_1493_, lean_object* v___x_1494_, lean_object* v_fst_1495_, lean_object* v___x_1496_, lean_object* v_e_1497_, lean_object* v___x_1498_, lean_object* v_snd_1499_, lean_object* v_____r_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
uint8_t v___x_85995__boxed_1506_; uint8_t v___x_85999__boxed_1507_; lean_object* v_res_1508_; 
v___x_85995__boxed_1506_ = lean_unbox(v___x_1493_);
v___x_85999__boxed_1507_ = lean_unbox(v___x_1498_);
v_res_1508_ = l_Lean_Meta_rwMatcher___lam__2(v___x_85995__boxed_1506_, v___x_1494_, v_fst_1495_, v___x_1496_, v_e_1497_, v___x_85999__boxed_1507_, v_snd_1499_, v_____r_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec_ref(v_snd_1499_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3(uint8_t v___x_1509_, lean_object* v___x_1510_, lean_object* v_fst_1511_, lean_object* v___x_1512_, lean_object* v_e_1513_, uint8_t v___x_1514_, lean_object* v_snd_1515_, lean_object* v_____r_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v___y_1523_; lean_object* v_proof_1524_; lean_object* v___x_1528_; uint8_t v___y_1530_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; uint8_t v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v_a_1582_; size_t v_sz_1605_; size_t v___x_1606_; lean_object* v___x_1607_; uint8_t v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; uint8_t v_fst_1642_; lean_object* v_fst_1643_; lean_object* v_snd_1644_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1528_ = l_Lean_mkAppN(v___x_1510_, v_fst_1511_);
v_sz_1605_ = lean_array_size(v_fst_1511_);
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1605_, v___x_1606_, v_fst_1511_);
v___x_1678_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1679_ = lean_unsigned_to_nat(4u);
v___x_1680_ = l_Lean_Expr_isAppOfArity(v_snd_1515_, v___x_1678_, v___x_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1681_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1682_ = lean_unsigned_to_nat(3u);
v___x_1683_ = l_Lean_Expr_isAppOfArity(v_snd_1515_, v___x_1681_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec_ref(v___x_1607_);
lean_dec_ref(v___x_1528_);
lean_dec_ref(v_e_1513_);
v___x_1684_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1685_ = l_Lean_MessageData_ofConstName(v___x_1512_, v___x_1514_);
v___x_1686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1686_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1688_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
else
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = l_Lean_Expr_appFn_x21(v_snd_1515_);
v___x_1699_ = l_Lean_Expr_appArg_x21(v___x_1698_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = l_Lean_Expr_appArg_x21(v_snd_1515_);
v_fst_1642_ = v___x_1514_;
v_fst_1643_ = v___x_1699_;
v_snd_1644_ = v___x_1700_;
goto v___jp_1641_;
}
}
else
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1701_ = l_Lean_Expr_appFn_x21(v_snd_1515_);
v___x_1702_ = l_Lean_Expr_appFn_x21(v___x_1701_);
lean_dec_ref(v___x_1701_);
v___x_1703_ = l_Lean_Expr_appArg_x21(v___x_1702_);
lean_dec_ref(v___x_1702_);
v___x_1704_ = l_Lean_Expr_appArg_x21(v_snd_1515_);
v_fst_1642_ = v___x_1509_;
v_fst_1643_ = v___x_1703_;
v_snd_1644_ = v___x_1704_;
goto v___jp_1641_;
}
v___jp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1525_, 0, v_proof_1524_);
v___x_1526_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1526_, 0, v___y_1523_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*2, v___x_1509_);
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
return v___x_1527_;
}
v___jp_1529_:
{
lean_object* v___x_1536_; lean_object* v_a_1537_; lean_object* v___x_1538_; 
v___x_1536_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1531_, v___y_1533_);
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1528_, v___y_1533_);
if (v___y_1530_ == 0)
{
lean_object* v_a_1539_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref(v___x_1538_);
v___y_1523_ = v_a_1537_;
v_proof_1524_ = v_a_1539_;
goto v___jp_1522_;
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1541_; 
v_a_1540_ = lean_ctor_get(v___x_1538_, 0);
lean_inc_n(v_a_1540_, 2);
lean_dec_ref(v___x_1538_);
v___x_1541_ = l_Lean_Meta_mkEqOfHEq(v_a_1540_, v___x_1509_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; 
lean_dec(v_a_1540_);
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___y_1523_ = v_a_1537_;
v_proof_1524_ = v_a_1542_;
goto v___jp_1522_;
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_a_1537_);
v_a_1543_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1545_ = v___x_1541_;
v_isShared_1546_ = v_isSharedCheck_1574_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1541_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1574_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
uint8_t v___x_1547_; 
v___x_1547_ = l_Lean_Exception_isInterrupt(v_a_1543_);
if (v___x_1547_ == 0)
{
uint8_t v___x_1548_; 
lean_inc(v_a_1543_);
v___x_1548_ = l_Lean_Exception_isRuntime(v_a_1543_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
lean_del_object(v___x_1545_);
v___x_1549_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1550_ = l_Lean_MessageData_ofExpr(v_a_1540_);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = l_Lean_Exception_toMessageData(v_a_1543_);
v___x_1555_ = l_Lean_indentD(v___x_1554_);
v___x_1556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1553_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1556_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1558_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
else
{
lean_object* v___x_1569_; 
lean_dec(v_a_1540_);
if (v_isShared_1546_ == 0)
{
v___x_1569_ = v___x_1545_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1543_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
else
{
lean_object* v___x_1572_; 
lean_dec(v_a_1540_);
if (v_isShared_1546_ == 0)
{
v___x_1572_ = v___x_1545_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1543_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
}
}
v___jp_1575_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; uint8_t v___x_1585_; 
v___x_1583_ = lean_array_get_size(v_a_1582_);
v___x_1584_ = lean_unsigned_to_nat(0u);
v___x_1585_ = lean_nat_dec_eq(v___x_1583_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
lean_dec_ref(v___y_1579_);
lean_dec_ref(v___x_1528_);
v___x_1586_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1587_ = l_Lean_MessageData_ofConstName(v___x_1512_, v___x_1585_);
v___x_1588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1586_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = lean_array_to_list(v_a_1582_);
v___x_1592_ = lean_box(0);
v___x_1593_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1591_, v___x_1592_);
v___x_1594_ = l_Lean_MessageData_ofList(v___x_1593_);
v___x_1595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1590_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1595_, v___y_1580_, v___y_1581_, v___y_1577_, v___y_1578_);
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
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
lean_dec_ref(v_a_1582_);
lean_dec(v___x_1512_);
v___y_1530_ = v___y_1576_;
v___y_1531_ = v___y_1579_;
v___y_1532_ = v___y_1580_;
v___y_1533_ = v___y_1581_;
v___y_1534_ = v___y_1577_;
v___y_1535_ = v___y_1578_;
goto v___jp_1529_;
}
}
v___jp_1608_:
{
lean_object* v___x_1615_; size_t v_sz_1616_; lean_object* v___x_1617_; 
v___x_1615_ = lean_box(0);
v_sz_1616_ = lean_array_size(v___x_1607_);
v___x_1617_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1607_, v_sz_1616_, v___x_1606_, v___x_1615_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; uint8_t v___x_1621_; 
lean_dec_ref_known(v___x_1617_, 1);
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = lean_array_get_size(v___x_1607_);
v___x_1620_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1621_ = lean_nat_dec_lt(v___x_1618_, v___x_1619_);
if (v___x_1621_ == 0)
{
lean_dec_ref(v___x_1607_);
v___y_1576_ = v___y_1609_;
v___y_1577_ = v___y_1613_;
v___y_1578_ = v___y_1614_;
v___y_1579_ = v___y_1610_;
v___y_1580_ = v___y_1611_;
v___y_1581_ = v___y_1612_;
v_a_1582_ = v___x_1620_;
goto v___jp_1575_;
}
else
{
size_t v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = lean_usize_of_nat(v___x_1619_);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1607_, v___x_1606_, v___x_1622_, v___x_1620_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec_ref(v___x_1607_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___y_1576_ = v___y_1609_;
v___y_1577_ = v___y_1613_;
v___y_1578_ = v___y_1614_;
v___y_1579_ = v___y_1610_;
v___y_1580_ = v___y_1611_;
v___y_1581_ = v___y_1612_;
v_a_1582_ = v_a_1624_;
goto v___jp_1575_;
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec_ref(v___y_1610_);
lean_dec_ref(v___x_1528_);
lean_dec(v___x_1512_);
v_a_1625_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1623_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1623_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec_ref(v___y_1610_);
lean_dec_ref(v___x_1607_);
lean_dec_ref(v___x_1528_);
lean_dec(v___x_1512_);
v_a_1633_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1617_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1617_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
v___jp_1641_:
{
lean_object* v___x_1645_; 
lean_inc_ref(v_fst_1643_);
lean_inc_ref(v_e_1513_);
v___x_1645_ = l_Lean_Meta_isExprDefEq(v_e_1513_, v_fst_1643_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; uint8_t v___x_1647_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref_known(v___x_1645_, 1);
v___x_1647_ = lean_unbox(v_a_1646_);
lean_dec(v_a_1646_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec_ref(v_snd_1644_);
lean_dec_ref(v___x_1607_);
lean_dec_ref(v___x_1528_);
v___x_1648_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1649_ = l_Lean_MessageData_ofExpr(v_fst_1643_);
v___x_1650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1648_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = l_Lean_MessageData_ofConstName(v___x_1512_, v___x_1514_);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = l_Lean_MessageData_ofExpr(v_e_1513_);
v___x_1658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1660_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
else
{
lean_dec_ref(v_fst_1643_);
lean_dec_ref(v_e_1513_);
v___y_1609_ = v_fst_1642_;
v___y_1610_ = v_snd_1644_;
v___y_1611_ = v___y_1517_;
v___y_1612_ = v___y_1518_;
v___y_1613_ = v___y_1519_;
v___y_1614_ = v___y_1520_;
goto v___jp_1608_;
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec_ref(v_snd_1644_);
lean_dec_ref(v_fst_1643_);
lean_dec_ref(v___x_1607_);
lean_dec_ref(v___x_1528_);
lean_dec_ref(v_e_1513_);
lean_dec(v___x_1512_);
v_a_1670_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1645_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1645_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3___boxed(lean_object* v___x_1705_, lean_object* v___x_1706_, lean_object* v_fst_1707_, lean_object* v___x_1708_, lean_object* v_e_1709_, lean_object* v___x_1710_, lean_object* v_snd_1711_, lean_object* v_____r_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
uint8_t v___x_86477__boxed_1718_; uint8_t v___x_86481__boxed_1719_; lean_object* v_res_1720_; 
v___x_86477__boxed_1718_ = lean_unbox(v___x_1705_);
v___x_86481__boxed_1719_ = lean_unbox(v___x_1710_);
v_res_1720_ = l_Lean_Meta_rwMatcher___lam__3(v___x_86477__boxed_1718_, v___x_1706_, v_fst_1707_, v___x_1708_, v_e_1709_, v___x_86481__boxed_1719_, v_snd_1711_, v_____r_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec_ref(v_snd_1711_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4(uint8_t v___x_1721_, lean_object* v___x_1722_, lean_object* v_fst_1723_, lean_object* v___x_1724_, lean_object* v_e_1725_, uint8_t v___x_1726_, lean_object* v_snd_1727_, lean_object* v_____r_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v___y_1735_; lean_object* v_proof_1736_; lean_object* v___x_1740_; uint8_t v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1788_; uint8_t v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v___y_1793_; lean_object* v_a_1794_; size_t v_sz_1817_; size_t v___x_1818_; lean_object* v___x_1819_; uint8_t v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; uint8_t v_fst_1854_; lean_object* v_fst_1855_; lean_object* v_snd_1856_; lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v___x_1740_ = l_Lean_mkAppN(v___x_1722_, v_fst_1723_);
v_sz_1817_ = lean_array_size(v_fst_1723_);
v___x_1818_ = ((size_t)0ULL);
v___x_1819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1817_, v___x_1818_, v_fst_1723_);
v___x_1890_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1891_ = lean_unsigned_to_nat(4u);
v___x_1892_ = l_Lean_Expr_isAppOfArity(v_snd_1727_, v___x_1890_, v___x_1891_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; 
v___x_1893_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1894_ = lean_unsigned_to_nat(3u);
v___x_1895_ = l_Lean_Expr_isAppOfArity(v_snd_1727_, v___x_1893_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v_e_1725_);
v___x_1896_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1897_ = l_Lean_MessageData_ofConstName(v___x_1724_, v___x_1726_);
v___x_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1896_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1900_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1910_ = l_Lean_Expr_appFn_x21(v_snd_1727_);
v___x_1911_ = l_Lean_Expr_appArg_x21(v___x_1910_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = l_Lean_Expr_appArg_x21(v_snd_1727_);
v_fst_1854_ = v___x_1726_;
v_fst_1855_ = v___x_1911_;
v_snd_1856_ = v___x_1912_;
goto v___jp_1853_;
}
}
else
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1913_ = l_Lean_Expr_appFn_x21(v_snd_1727_);
v___x_1914_ = l_Lean_Expr_appFn_x21(v___x_1913_);
lean_dec_ref(v___x_1913_);
v___x_1915_ = l_Lean_Expr_appArg_x21(v___x_1914_);
lean_dec_ref(v___x_1914_);
v___x_1916_ = l_Lean_Expr_appArg_x21(v_snd_1727_);
v_fst_1854_ = v___x_1721_;
v_fst_1855_ = v___x_1915_;
v_snd_1856_ = v___x_1916_;
goto v___jp_1853_;
}
v___jp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1737_, 0, v_proof_1736_);
v___x_1738_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1738_, 0, v___y_1735_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
lean_ctor_set_uint8(v___x_1738_, sizeof(void*)*2, v___x_1721_);
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
v___jp_1741_:
{
lean_object* v___x_1748_; lean_object* v_a_1749_; lean_object* v___x_1750_; 
v___x_1748_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1743_, v___y_1745_);
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1740_, v___y_1745_);
if (v___y_1742_ == 0)
{
lean_object* v_a_1751_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref(v___x_1750_);
v___y_1735_ = v_a_1749_;
v_proof_1736_ = v_a_1751_;
goto v___jp_1734_;
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v___x_1750_, 0);
lean_inc_n(v_a_1752_, 2);
lean_dec_ref(v___x_1750_);
v___x_1753_ = l_Lean_Meta_mkEqOfHEq(v_a_1752_, v___x_1721_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; 
lean_dec(v_a_1752_);
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___y_1735_ = v_a_1749_;
v_proof_1736_ = v_a_1754_;
goto v___jp_1734_;
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1786_; 
lean_dec(v_a_1749_);
v_a_1755_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1757_ = v___x_1753_;
v_isShared_1758_ = v_isSharedCheck_1786_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1753_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1786_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
uint8_t v___x_1759_; 
v___x_1759_ = l_Lean_Exception_isInterrupt(v_a_1755_);
if (v___x_1759_ == 0)
{
uint8_t v___x_1760_; 
lean_inc(v_a_1755_);
v___x_1760_ = l_Lean_Exception_isRuntime(v_a_1755_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1779_; 
lean_del_object(v___x_1757_);
v___x_1761_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1762_ = l_Lean_MessageData_ofExpr(v_a_1752_);
v___x_1763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
v___x_1764_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = l_Lean_Exception_toMessageData(v_a_1755_);
v___x_1767_ = l_Lean_indentD(v___x_1766_);
v___x_1768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1765_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1768_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v___x_1771_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1770_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
return v___x_1777_;
}
}
}
else
{
lean_object* v___x_1781_; 
lean_dec(v_a_1752_);
if (v_isShared_1758_ == 0)
{
v___x_1781_ = v___x_1757_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1755_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
else
{
lean_object* v___x_1784_; 
lean_dec(v_a_1752_);
if (v_isShared_1758_ == 0)
{
v___x_1784_ = v___x_1757_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1755_);
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
}
}
v___jp_1787_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; 
v___x_1795_ = lean_array_get_size(v_a_1794_);
v___x_1796_ = lean_unsigned_to_nat(0u);
v___x_1797_ = lean_nat_dec_eq(v___x_1795_, v___x_1796_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_dec_ref(v___y_1790_);
lean_dec_ref(v___x_1740_);
v___x_1798_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1799_ = l_Lean_MessageData_ofConstName(v___x_1724_, v___x_1797_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v___x_1801_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1800_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = lean_array_to_list(v_a_1794_);
v___x_1804_ = lean_box(0);
v___x_1805_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1803_, v___x_1804_);
v___x_1806_ = l_Lean_MessageData_ofList(v___x_1805_);
v___x_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1802_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1807_, v___y_1788_, v___y_1791_, v___y_1792_, v___y_1793_);
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1808_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1808_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
else
{
lean_dec_ref(v_a_1794_);
lean_dec(v___x_1724_);
v___y_1742_ = v___y_1789_;
v___y_1743_ = v___y_1790_;
v___y_1744_ = v___y_1788_;
v___y_1745_ = v___y_1791_;
v___y_1746_ = v___y_1792_;
v___y_1747_ = v___y_1793_;
goto v___jp_1741_;
}
}
v___jp_1820_:
{
lean_object* v___x_1827_; size_t v_sz_1828_; lean_object* v___x_1829_; 
v___x_1827_ = lean_box(0);
v_sz_1828_ = lean_array_size(v___x_1819_);
v___x_1829_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1819_, v_sz_1828_, v___x_1818_, v___x_1827_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
lean_dec_ref_known(v___x_1829_, 1);
v___x_1830_ = lean_unsigned_to_nat(0u);
v___x_1831_ = lean_array_get_size(v___x_1819_);
v___x_1832_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1833_ = lean_nat_dec_lt(v___x_1830_, v___x_1831_);
if (v___x_1833_ == 0)
{
lean_dec_ref(v___x_1819_);
v___y_1788_ = v___y_1823_;
v___y_1789_ = v___y_1821_;
v___y_1790_ = v___y_1822_;
v___y_1791_ = v___y_1824_;
v___y_1792_ = v___y_1825_;
v___y_1793_ = v___y_1826_;
v_a_1794_ = v___x_1832_;
goto v___jp_1787_;
}
else
{
size_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_usize_of_nat(v___x_1831_);
v___x_1835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1819_, v___x_1818_, v___x_1834_, v___x_1832_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
lean_dec_ref(v___x_1819_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v___y_1788_ = v___y_1823_;
v___y_1789_ = v___y_1821_;
v___y_1790_ = v___y_1822_;
v___y_1791_ = v___y_1824_;
v___y_1792_ = v___y_1825_;
v___y_1793_ = v___y_1826_;
v_a_1794_ = v_a_1836_;
goto v___jp_1787_;
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
lean_dec_ref(v___y_1822_);
lean_dec_ref(v___x_1740_);
lean_dec(v___x_1724_);
v_a_1837_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1835_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1835_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec_ref(v___y_1822_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1740_);
lean_dec(v___x_1724_);
v_a_1845_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1829_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1829_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
v___jp_1853_:
{
lean_object* v___x_1857_; 
lean_inc_ref(v_fst_1855_);
lean_inc_ref(v_e_1725_);
v___x_1857_ = l_Lean_Meta_isExprDefEq(v_e_1725_, v_fst_1855_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; uint8_t v___x_1859_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v___x_1859_ = lean_unbox(v_a_1858_);
lean_dec(v_a_1858_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v_snd_1856_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1740_);
v___x_1860_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1861_ = l_Lean_MessageData_ofExpr(v_fst_1855_);
v___x_1862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1860_);
lean_ctor_set(v___x_1862_, 1, v___x_1861_);
v___x_1863_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
v___x_1865_ = l_Lean_MessageData_ofConstName(v___x_1724_, v___x_1726_);
v___x_1866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1864_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1866_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = l_Lean_MessageData_ofExpr(v_e_1725_);
v___x_1870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1868_);
lean_ctor_set(v___x_1870_, 1, v___x_1869_);
v___x_1871_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1872_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
else
{
lean_dec_ref(v_fst_1855_);
lean_dec_ref(v_e_1725_);
v___y_1821_ = v_fst_1854_;
v___y_1822_ = v_snd_1856_;
v___y_1823_ = v___y_1729_;
v___y_1824_ = v___y_1730_;
v___y_1825_ = v___y_1731_;
v___y_1826_ = v___y_1732_;
goto v___jp_1820_;
}
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
lean_dec_ref(v_snd_1856_);
lean_dec_ref(v_fst_1855_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v_e_1725_);
lean_dec(v___x_1724_);
v_a_1882_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1857_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1857_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4___boxed(lean_object* v___x_1917_, lean_object* v___x_1918_, lean_object* v_fst_1919_, lean_object* v___x_1920_, lean_object* v_e_1921_, lean_object* v___x_1922_, lean_object* v_snd_1923_, lean_object* v_____r_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
uint8_t v___x_86934__boxed_1930_; uint8_t v___x_86938__boxed_1931_; lean_object* v_res_1932_; 
v___x_86934__boxed_1930_ = lean_unbox(v___x_1917_);
v___x_86938__boxed_1931_ = lean_unbox(v___x_1922_);
v_res_1932_ = l_Lean_Meta_rwMatcher___lam__4(v___x_86934__boxed_1930_, v___x_1918_, v_fst_1919_, v___x_1920_, v_e_1921_, v___x_86938__boxed_1931_, v_snd_1923_, v_____r_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec_ref(v_snd_1923_);
return v_res_1932_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1933_; double v___x_1934_; 
v___x_1933_ = lean_unsigned_to_nat(0u);
v___x_1934_ = lean_float_of_nat(v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(lean_object* v_cls_1938_, lean_object* v_msg_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_ref_1945_; lean_object* v___x_1946_; lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1992_; 
v_ref_1945_ = lean_ctor_get(v___y_1942_, 2);
v___x_1946_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1949_ = v___x_1946_;
v_isShared_1950_ = v_isSharedCheck_1992_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1946_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1992_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; lean_object* v_traceState_1952_; lean_object* v_env_1953_; lean_object* v_nextMacroScope_1954_; lean_object* v_ngen_1955_; lean_object* v_auxDeclNGen_1956_; lean_object* v_cache_1957_; lean_object* v_recordedDeps_1958_; lean_object* v_messages_1959_; lean_object* v_infoState_1960_; lean_object* v_snapshotTasks_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1991_; 
v___x_1951_ = lean_st_ref_take(v___y_1943_);
v_traceState_1952_ = lean_ctor_get(v___x_1951_, 4);
v_env_1953_ = lean_ctor_get(v___x_1951_, 0);
v_nextMacroScope_1954_ = lean_ctor_get(v___x_1951_, 1);
v_ngen_1955_ = lean_ctor_get(v___x_1951_, 2);
v_auxDeclNGen_1956_ = lean_ctor_get(v___x_1951_, 3);
v_cache_1957_ = lean_ctor_get(v___x_1951_, 5);
v_recordedDeps_1958_ = lean_ctor_get(v___x_1951_, 6);
v_messages_1959_ = lean_ctor_get(v___x_1951_, 7);
v_infoState_1960_ = lean_ctor_get(v___x_1951_, 8);
v_snapshotTasks_1961_ = lean_ctor_get(v___x_1951_, 9);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1963_ = v___x_1951_;
v_isShared_1964_ = v_isSharedCheck_1991_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_snapshotTasks_1961_);
lean_inc(v_infoState_1960_);
lean_inc(v_messages_1959_);
lean_inc(v_recordedDeps_1958_);
lean_inc(v_cache_1957_);
lean_inc(v_traceState_1952_);
lean_inc(v_auxDeclNGen_1956_);
lean_inc(v_ngen_1955_);
lean_inc(v_nextMacroScope_1954_);
lean_inc(v_env_1953_);
lean_dec(v___x_1951_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1991_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
uint64_t v_tid_1965_; lean_object* v_traces_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1990_; 
v_tid_1965_ = lean_ctor_get_uint64(v_traceState_1952_, sizeof(void*)*1);
v_traces_1966_ = lean_ctor_get(v_traceState_1952_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_traceState_1952_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1968_ = v_traceState_1952_;
v_isShared_1969_ = v_isSharedCheck_1990_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_traces_1966_);
lean_dec(v_traceState_1952_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1990_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; double v___x_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1981_; 
v___x_1970_ = lean_box(0);
v___x_1971_ = lean_box(0);
v___x_1972_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
v___x_1973_ = 0;
v___x_1974_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_1975_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1975_, 0, v_cls_1938_);
lean_ctor_set(v___x_1975_, 1, v___x_1971_);
lean_ctor_set(v___x_1975_, 2, v___x_1974_);
lean_ctor_set_float(v___x_1975_, sizeof(void*)*3, v___x_1972_);
lean_ctor_set_float(v___x_1975_, sizeof(void*)*3 + 8, v___x_1972_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*3 + 16, v___x_1973_);
v___x_1976_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2));
v___x_1977_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1975_);
lean_ctor_set(v___x_1977_, 1, v_a_1947_);
lean_ctor_set(v___x_1977_, 2, v___x_1976_);
lean_inc(v_ref_1945_);
v___x_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_ref_1945_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = l_Lean_PersistentArray_push___redArg(v_traces_1966_, v___x_1978_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v___x_1979_);
v___x_1981_ = v___x_1968_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1979_);
lean_ctor_set_uint64(v_reuseFailAlloc_1989_, sizeof(void*)*1, v_tid_1965_);
v___x_1981_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1983_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 4, v___x_1981_);
v___x_1983_ = v___x_1963_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_env_1953_);
lean_ctor_set(v_reuseFailAlloc_1988_, 1, v_nextMacroScope_1954_);
lean_ctor_set(v_reuseFailAlloc_1988_, 2, v_ngen_1955_);
lean_ctor_set(v_reuseFailAlloc_1988_, 3, v_auxDeclNGen_1956_);
lean_ctor_set(v_reuseFailAlloc_1988_, 4, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_1988_, 5, v_cache_1957_);
lean_ctor_set(v_reuseFailAlloc_1988_, 6, v_recordedDeps_1958_);
lean_ctor_set(v_reuseFailAlloc_1988_, 7, v_messages_1959_);
lean_ctor_set(v_reuseFailAlloc_1988_, 8, v_infoState_1960_);
lean_ctor_set(v_reuseFailAlloc_1988_, 9, v_snapshotTasks_1961_);
v___x_1983_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1986_; 
v___x_1984_ = lean_st_ref_put(v___y_1943_, v___x_1983_);
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 0, v___x_1970_);
v___x_1986_ = v___x_1949_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1970_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___boxed(lean_object* v_cls_1993_, lean_object* v_msg_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v_cls_1993_, v_msg_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(lean_object* v_opts_2001_, lean_object* v_opt_2002_){
_start:
{
lean_object* v_name_2003_; lean_object* v_defValue_2004_; lean_object* v_map_2005_; lean_object* v___x_2006_; 
v_name_2003_ = lean_ctor_get(v_opt_2002_, 0);
v_defValue_2004_ = lean_ctor_get(v_opt_2002_, 1);
v_map_2005_ = lean_ctor_get(v_opts_2001_, 0);
v___x_2006_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2005_, v_name_2003_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_inc(v_defValue_2004_);
return v_defValue_2004_;
}
else
{
lean_object* v_val_2007_; 
v_val_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_val_2007_);
lean_dec_ref_known(v___x_2006_, 1);
if (lean_obj_tag(v_val_2007_) == 3)
{
lean_object* v_v_2008_; 
v_v_2008_ = lean_ctor_get(v_val_2007_, 0);
lean_inc(v_v_2008_);
lean_dec_ref_known(v_val_2007_, 1);
return v_v_2008_;
}
else
{
lean_dec(v_val_2007_);
lean_inc(v_defValue_2004_);
return v_defValue_2004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17___boxed(lean_object* v_opts_2009_, lean_object* v_opt_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2009_, v_opt_2010_);
lean_dec_ref(v_opt_2010_);
lean_dec_ref(v_opts_2009_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(lean_object* v_x_2012_){
_start:
{
if (lean_obj_tag(v_x_2012_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
v_a_2014_ = lean_ctor_get(v_x_2012_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v_x_2012_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v_x_2012_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v_x_2012_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 1);
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
v_a_2022_ = lean_ctor_get(v_x_2012_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v_x_2012_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2024_ = v_x_2012_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v_x_2012_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
lean_ctor_set_tag(v___x_2024_, 0);
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg___boxed(lean_object* v_x_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(lean_object* v_e_2033_){
_start:
{
if (lean_obj_tag(v_e_2033_) == 0)
{
uint8_t v___x_2034_; 
v___x_2034_ = 2;
return v___x_2034_;
}
else
{
uint8_t v___x_2035_; 
v___x_2035_ = 0;
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16___boxed(lean_object* v_e_2036_){
_start:
{
uint8_t v_res_2037_; lean_object* v_r_2038_; 
v_res_2037_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_e_2036_);
lean_dec_ref(v_e_2036_);
v_r_2038_ = lean_box(v_res_2037_);
return v_r_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(size_t v_sz_2039_, size_t v_i_2040_, lean_object* v_bs_2041_){
_start:
{
uint8_t v___x_2042_; 
v___x_2042_ = lean_usize_dec_lt(v_i_2040_, v_sz_2039_);
if (v___x_2042_ == 0)
{
return v_bs_2041_;
}
else
{
lean_object* v_v_2043_; lean_object* v_msg_2044_; lean_object* v___x_2045_; lean_object* v_bs_x27_2046_; size_t v___x_2047_; size_t v___x_2048_; lean_object* v___x_2049_; 
v_v_2043_ = lean_array_uget_borrowed(v_bs_2041_, v_i_2040_);
v_msg_2044_ = lean_ctor_get(v_v_2043_, 1);
lean_inc_ref(v_msg_2044_);
v___x_2045_ = lean_unsigned_to_nat(0u);
v_bs_x27_2046_ = lean_array_uset(v_bs_2041_, v_i_2040_, v___x_2045_);
v___x_2047_ = ((size_t)1ULL);
v___x_2048_ = lean_usize_add(v_i_2040_, v___x_2047_);
v___x_2049_ = lean_array_uset(v_bs_x27_2046_, v_i_2040_, v_msg_2044_);
v_i_2040_ = v___x_2048_;
v_bs_2041_ = v___x_2049_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16___boxed(lean_object* v_sz_2051_, lean_object* v_i_2052_, lean_object* v_bs_2053_){
_start:
{
size_t v_sz_boxed_2054_; size_t v_i_boxed_2055_; lean_object* v_res_2056_; 
v_sz_boxed_2054_ = lean_unbox_usize(v_sz_2051_);
lean_dec(v_sz_2051_);
v_i_boxed_2055_ = lean_unbox_usize(v_i_2052_);
lean_dec(v_i_2052_);
v_res_2056_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_boxed_2054_, v_i_boxed_2055_, v_bs_2053_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(lean_object* v_oldTraces_2057_, lean_object* v_data_2058_, lean_object* v_ref_2059_, lean_object* v_msg_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v_toCold_2066_; lean_object* v_currRecDepth_2067_; lean_object* v_ref_2068_; uint16_t v_optionFlags_2069_; uint8_t v_suppressElabErrors_2070_; uint8_t v_checkDeprecated_2071_; uint8_t v_isRecordingDeps_2072_; lean_object* v_ref_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v_traceState_2076_; lean_object* v_traces_2077_; lean_object* v___x_2078_; size_t v_sz_2079_; size_t v___x_2080_; lean_object* v___x_2081_; lean_object* v_msg_2082_; lean_object* v___x_2083_; lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2122_; 
v_toCold_2066_ = lean_ctor_get(v___y_2063_, 0);
v_currRecDepth_2067_ = lean_ctor_get(v___y_2063_, 1);
v_ref_2068_ = lean_ctor_get(v___y_2063_, 2);
v_optionFlags_2069_ = lean_ctor_get_uint16(v___y_2063_, sizeof(void*)*3);
v_suppressElabErrors_2070_ = lean_ctor_get_uint8(v___y_2063_, sizeof(void*)*3 + 2);
v_checkDeprecated_2071_ = lean_ctor_get_uint8(v___y_2063_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2072_ = lean_ctor_get_uint8(v___y_2063_, sizeof(void*)*3 + 4);
v_ref_2073_ = l_Lean_replaceRef(v_ref_2059_, v_ref_2068_);
lean_inc(v_currRecDepth_2067_);
lean_inc_ref(v_toCold_2066_);
v___x_2074_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2074_, 0, v_toCold_2066_);
lean_ctor_set(v___x_2074_, 1, v_currRecDepth_2067_);
lean_ctor_set(v___x_2074_, 2, v_ref_2073_);
lean_ctor_set_uint16(v___x_2074_, sizeof(void*)*3, v_optionFlags_2069_);
lean_ctor_set_uint8(v___x_2074_, sizeof(void*)*3 + 2, v_suppressElabErrors_2070_);
lean_ctor_set_uint8(v___x_2074_, sizeof(void*)*3 + 3, v_checkDeprecated_2071_);
lean_ctor_set_uint8(v___x_2074_, sizeof(void*)*3 + 4, v_isRecordingDeps_2072_);
v___x_2075_ = lean_st_ref_get(v___y_2064_);
v_traceState_2076_ = lean_ctor_get(v___x_2075_, 4);
lean_inc_ref(v_traceState_2076_);
lean_dec(v___x_2075_);
v_traces_2077_ = lean_ctor_get(v_traceState_2076_, 0);
lean_inc_ref(v_traces_2077_);
lean_dec_ref(v_traceState_2076_);
v___x_2078_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2077_);
lean_dec_ref(v_traces_2077_);
v_sz_2079_ = lean_array_size(v___x_2078_);
v___x_2080_ = ((size_t)0ULL);
v___x_2081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_2079_, v___x_2080_, v___x_2078_);
v_msg_2082_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2082_, 0, v_data_2058_);
lean_ctor_set(v_msg_2082_, 1, v_msg_2060_);
lean_ctor_set(v_msg_2082_, 2, v___x_2081_);
v___x_2083_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_2082_, v___y_2061_, v___y_2062_, v___x_2074_, v___y_2064_);
lean_dec_ref_known(v___x_2074_, 3);
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2086_ = v___x_2083_;
v_isShared_2087_ = v_isSharedCheck_2122_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2083_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2122_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; lean_object* v_traceState_2089_; lean_object* v_env_2090_; lean_object* v_nextMacroScope_2091_; lean_object* v_ngen_2092_; lean_object* v_auxDeclNGen_2093_; lean_object* v_cache_2094_; lean_object* v_recordedDeps_2095_; lean_object* v_messages_2096_; lean_object* v_infoState_2097_; lean_object* v_snapshotTasks_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2121_; 
v___x_2088_ = lean_st_ref_take(v___y_2064_);
v_traceState_2089_ = lean_ctor_get(v___x_2088_, 4);
v_env_2090_ = lean_ctor_get(v___x_2088_, 0);
v_nextMacroScope_2091_ = lean_ctor_get(v___x_2088_, 1);
v_ngen_2092_ = lean_ctor_get(v___x_2088_, 2);
v_auxDeclNGen_2093_ = lean_ctor_get(v___x_2088_, 3);
v_cache_2094_ = lean_ctor_get(v___x_2088_, 5);
v_recordedDeps_2095_ = lean_ctor_get(v___x_2088_, 6);
v_messages_2096_ = lean_ctor_get(v___x_2088_, 7);
v_infoState_2097_ = lean_ctor_get(v___x_2088_, 8);
v_snapshotTasks_2098_ = lean_ctor_get(v___x_2088_, 9);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2100_ = v___x_2088_;
v_isShared_2101_ = v_isSharedCheck_2121_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_snapshotTasks_2098_);
lean_inc(v_infoState_2097_);
lean_inc(v_messages_2096_);
lean_inc(v_recordedDeps_2095_);
lean_inc(v_cache_2094_);
lean_inc(v_traceState_2089_);
lean_inc(v_auxDeclNGen_2093_);
lean_inc(v_ngen_2092_);
lean_inc(v_nextMacroScope_2091_);
lean_inc(v_env_2090_);
lean_dec(v___x_2088_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2121_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
uint64_t v_tid_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2119_; 
v_tid_2102_ = lean_ctor_get_uint64(v_traceState_2089_, sizeof(void*)*1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_traceState_2089_);
if (v_isSharedCheck_2119_ == 0)
{
lean_object* v_unused_2120_; 
v_unused_2120_ = lean_ctor_get(v_traceState_2089_, 0);
lean_dec(v_unused_2120_);
v___x_2104_ = v_traceState_2089_;
v_isShared_2105_ = v_isSharedCheck_2119_;
goto v_resetjp_2103_;
}
else
{
lean_dec(v_traceState_2089_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2119_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2106_ = lean_box(0);
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v_ref_2059_);
lean_ctor_set(v___x_2107_, 1, v_a_2084_);
v___x_2108_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2057_, v___x_2107_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2108_);
v___x_2110_ = v___x_2104_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2108_);
lean_ctor_set_uint64(v_reuseFailAlloc_2118_, sizeof(void*)*1, v_tid_2102_);
v___x_2110_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2112_; 
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 4, v___x_2110_);
v___x_2112_ = v___x_2100_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_env_2090_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_nextMacroScope_2091_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_ngen_2092_);
lean_ctor_set(v_reuseFailAlloc_2117_, 3, v_auxDeclNGen_2093_);
lean_ctor_set(v_reuseFailAlloc_2117_, 4, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2117_, 5, v_cache_2094_);
lean_ctor_set(v_reuseFailAlloc_2117_, 6, v_recordedDeps_2095_);
lean_ctor_set(v_reuseFailAlloc_2117_, 7, v_messages_2096_);
lean_ctor_set(v_reuseFailAlloc_2117_, 8, v_infoState_2097_);
lean_ctor_set(v_reuseFailAlloc_2117_, 9, v_snapshotTasks_2098_);
v___x_2112_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2113_ = lean_st_ref_put(v___y_2064_, v___x_2112_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 0, v___x_2106_);
v___x_2115_ = v___x_2086_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2106_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14___boxed(lean_object* v_oldTraces_2123_, lean_object* v_data_2124_, lean_object* v_ref_2125_, lean_object* v_msg_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_2123_, v_data_2124_, v_ref_2125_, v_msg_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
return v_res_2132_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1(void){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0));
v___x_2135_ = l_Lean_stringToMessageData(v___x_2134_);
return v___x_2135_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2(void){
_start:
{
lean_object* v___x_2136_; double v___x_2137_; 
v___x_2136_ = lean_unsigned_to_nat(1000u);
v___x_2137_ = lean_float_of_nat(v___x_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(lean_object* v_cls_2138_, uint8_t v_collapsed_2139_, lean_object* v_tag_2140_, lean_object* v_opts_2141_, uint8_t v_clsEnabled_2142_, lean_object* v_oldTraces_2143_, lean_object* v_msg_2144_, lean_object* v_resStartStop_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v_fst_2151_; lean_object* v_snd_2152_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v_data_2156_; lean_object* v_fst_2167_; lean_object* v_snd_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; lean_object* v___y_2172_; lean_object* v_a_2173_; uint8_t v___y_2188_; double v___y_2220_; 
v_fst_2151_ = lean_ctor_get(v_resStartStop_2145_, 0);
lean_inc(v_fst_2151_);
v_snd_2152_ = lean_ctor_get(v_resStartStop_2145_, 1);
lean_inc(v_snd_2152_);
lean_dec_ref(v_resStartStop_2145_);
v_fst_2167_ = lean_ctor_get(v_snd_2152_, 0);
lean_inc(v_fst_2167_);
v_snd_2168_ = lean_ctor_get(v_snd_2152_, 1);
lean_inc(v_snd_2168_);
lean_dec(v_snd_2152_);
v___x_2169_ = l_Lean_trace_profiler;
v___x_2170_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2141_, v___x_2169_);
if (v___x_2170_ == 0)
{
v___y_2188_ = v___x_2170_;
goto v___jp_2187_;
}
else
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2226_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2141_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v___x_2228_; double v___x_2229_; double v___x_2230_; double v___x_2231_; 
v___x_2227_ = l_Lean_trace_profiler_threshold;
v___x_2228_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2141_, v___x_2227_);
v___x_2229_ = lean_float_of_nat(v___x_2228_);
v___x_2230_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2);
v___x_2231_ = lean_float_div(v___x_2229_, v___x_2230_);
v___y_2220_ = v___x_2231_;
goto v___jp_2219_;
}
else
{
lean_object* v___x_2232_; lean_object* v___x_2233_; double v___x_2234_; 
v___x_2232_ = l_Lean_trace_profiler_threshold;
v___x_2233_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2141_, v___x_2232_);
v___x_2234_ = lean_float_of_nat(v___x_2233_);
v___y_2220_ = v___x_2234_;
goto v___jp_2219_;
}
}
v___jp_2153_:
{
lean_object* v___x_2157_; 
lean_inc(v___y_2154_);
v___x_2157_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_2143_, v_data_2156_, v___y_2154_, v___y_2155_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v___x_2158_; 
lean_dec_ref_known(v___x_2157_, 1);
v___x_2158_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2151_);
return v___x_2158_;
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v_fst_2151_);
v_a_2159_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2157_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2157_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
v___jp_2171_:
{
uint8_t v_result_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; double v___x_2177_; lean_object* v_data_2178_; 
v_result_2174_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_fst_2151_);
v___x_2175_ = lean_box(v_result_2174_);
v___x_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
v___x_2177_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
lean_inc_ref(v_tag_2140_);
lean_inc_ref(v___x_2176_);
lean_inc(v_cls_2138_);
v_data_2178_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2178_, 0, v_cls_2138_);
lean_ctor_set(v_data_2178_, 1, v___x_2176_);
lean_ctor_set(v_data_2178_, 2, v_tag_2140_);
lean_ctor_set_float(v_data_2178_, sizeof(void*)*3, v___x_2177_);
lean_ctor_set_float(v_data_2178_, sizeof(void*)*3 + 8, v___x_2177_);
lean_ctor_set_uint8(v_data_2178_, sizeof(void*)*3 + 16, v_collapsed_2139_);
if (v___x_2170_ == 0)
{
lean_dec_ref_known(v___x_2176_, 1);
lean_dec(v_snd_2168_);
lean_dec(v_fst_2167_);
lean_dec_ref(v_tag_2140_);
lean_dec(v_cls_2138_);
v___y_2154_ = v___y_2172_;
v___y_2155_ = v_a_2173_;
v_data_2156_ = v_data_2178_;
goto v___jp_2153_;
}
else
{
lean_object* v_data_2179_; double v___x_2180_; double v___x_2181_; 
lean_dec_ref_known(v_data_2178_, 3);
v_data_2179_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2179_, 0, v_cls_2138_);
lean_ctor_set(v_data_2179_, 1, v___x_2176_);
lean_ctor_set(v_data_2179_, 2, v_tag_2140_);
v___x_2180_ = lean_unbox_float(v_fst_2167_);
lean_dec(v_fst_2167_);
lean_ctor_set_float(v_data_2179_, sizeof(void*)*3, v___x_2180_);
v___x_2181_ = lean_unbox_float(v_snd_2168_);
lean_dec(v_snd_2168_);
lean_ctor_set_float(v_data_2179_, sizeof(void*)*3 + 8, v___x_2181_);
lean_ctor_set_uint8(v_data_2179_, sizeof(void*)*3 + 16, v_collapsed_2139_);
v___y_2154_ = v___y_2172_;
v___y_2155_ = v_a_2173_;
v_data_2156_ = v_data_2179_;
goto v___jp_2153_;
}
}
v___jp_2182_:
{
lean_object* v_ref_2183_; lean_object* v___x_2184_; 
v_ref_2183_ = lean_ctor_get(v___y_2148_, 2);
lean_inc(v___y_2149_);
lean_inc_ref(v___y_2148_);
lean_inc(v___y_2147_);
lean_inc_ref(v___y_2146_);
lean_inc(v_fst_2151_);
v___x_2184_ = lean_apply_6(v_msg_2144_, v_fst_2151_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, lean_box(0));
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2184_, 1);
v___y_2172_ = v_ref_2183_;
v_a_2173_ = v_a_2185_;
goto v___jp_2171_;
}
else
{
lean_object* v___x_2186_; 
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1);
v___y_2172_ = v_ref_2183_;
v_a_2173_ = v___x_2186_;
goto v___jp_2171_;
}
}
v___jp_2187_:
{
if (v_clsEnabled_2142_ == 0)
{
if (v___y_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v_traceState_2190_; lean_object* v_env_2191_; lean_object* v_nextMacroScope_2192_; lean_object* v_ngen_2193_; lean_object* v_auxDeclNGen_2194_; lean_object* v_cache_2195_; lean_object* v_recordedDeps_2196_; lean_object* v_messages_2197_; lean_object* v_infoState_2198_; lean_object* v_snapshotTasks_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2218_; 
lean_dec(v_snd_2168_);
lean_dec(v_fst_2167_);
lean_dec_ref(v_msg_2144_);
lean_dec_ref(v_tag_2140_);
lean_dec(v_cls_2138_);
v___x_2189_ = lean_st_ref_take(v___y_2149_);
v_traceState_2190_ = lean_ctor_get(v___x_2189_, 4);
v_env_2191_ = lean_ctor_get(v___x_2189_, 0);
v_nextMacroScope_2192_ = lean_ctor_get(v___x_2189_, 1);
v_ngen_2193_ = lean_ctor_get(v___x_2189_, 2);
v_auxDeclNGen_2194_ = lean_ctor_get(v___x_2189_, 3);
v_cache_2195_ = lean_ctor_get(v___x_2189_, 5);
v_recordedDeps_2196_ = lean_ctor_get(v___x_2189_, 6);
v_messages_2197_ = lean_ctor_get(v___x_2189_, 7);
v_infoState_2198_ = lean_ctor_get(v___x_2189_, 8);
v_snapshotTasks_2199_ = lean_ctor_get(v___x_2189_, 9);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2201_ = v___x_2189_;
v_isShared_2202_ = v_isSharedCheck_2218_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_snapshotTasks_2199_);
lean_inc(v_infoState_2198_);
lean_inc(v_messages_2197_);
lean_inc(v_recordedDeps_2196_);
lean_inc(v_cache_2195_);
lean_inc(v_traceState_2190_);
lean_inc(v_auxDeclNGen_2194_);
lean_inc(v_ngen_2193_);
lean_inc(v_nextMacroScope_2192_);
lean_inc(v_env_2191_);
lean_dec(v___x_2189_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2218_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
uint64_t v_tid_2203_; lean_object* v_traces_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2217_; 
v_tid_2203_ = lean_ctor_get_uint64(v_traceState_2190_, sizeof(void*)*1);
v_traces_2204_ = lean_ctor_get(v_traceState_2190_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v_traceState_2190_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2206_ = v_traceState_2190_;
v_isShared_2207_ = v_isSharedCheck_2217_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_traces_2204_);
lean_dec(v_traceState_2190_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2217_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2208_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2143_, v_traces_2204_);
lean_dec_ref(v_traces_2204_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 0, v___x_2208_);
v___x_2210_ = v___x_2206_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2208_);
lean_ctor_set_uint64(v_reuseFailAlloc_2216_, sizeof(void*)*1, v_tid_2203_);
v___x_2210_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
lean_object* v___x_2212_; 
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 4, v___x_2210_);
v___x_2212_ = v___x_2201_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_env_2191_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_nextMacroScope_2192_);
lean_ctor_set(v_reuseFailAlloc_2215_, 2, v_ngen_2193_);
lean_ctor_set(v_reuseFailAlloc_2215_, 3, v_auxDeclNGen_2194_);
lean_ctor_set(v_reuseFailAlloc_2215_, 4, v___x_2210_);
lean_ctor_set(v_reuseFailAlloc_2215_, 5, v_cache_2195_);
lean_ctor_set(v_reuseFailAlloc_2215_, 6, v_recordedDeps_2196_);
lean_ctor_set(v_reuseFailAlloc_2215_, 7, v_messages_2197_);
lean_ctor_set(v_reuseFailAlloc_2215_, 8, v_infoState_2198_);
lean_ctor_set(v_reuseFailAlloc_2215_, 9, v_snapshotTasks_2199_);
v___x_2212_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = lean_st_ref_put(v___y_2149_, v___x_2212_);
v___x_2214_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2151_);
return v___x_2214_;
}
}
}
}
}
else
{
goto v___jp_2182_;
}
}
else
{
goto v___jp_2182_;
}
}
v___jp_2219_:
{
double v___x_2221_; double v___x_2222_; double v___x_2223_; uint8_t v___x_2224_; 
v___x_2221_ = lean_unbox_float(v_snd_2168_);
v___x_2222_ = lean_unbox_float(v_fst_2167_);
v___x_2223_ = lean_float_sub(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_float_decLt(v___y_2220_, v___x_2223_);
v___y_2188_ = v___x_2224_;
goto v___jp_2187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___boxed(lean_object* v_cls_2235_, lean_object* v_collapsed_2236_, lean_object* v_tag_2237_, lean_object* v_opts_2238_, lean_object* v_clsEnabled_2239_, lean_object* v_oldTraces_2240_, lean_object* v_msg_2241_, lean_object* v_resStartStop_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
uint8_t v_collapsed_boxed_2248_; uint8_t v_clsEnabled_boxed_2249_; lean_object* v_res_2250_; 
v_collapsed_boxed_2248_ = lean_unbox(v_collapsed_2236_);
v_clsEnabled_boxed_2249_ = lean_unbox(v_clsEnabled_2239_);
v_res_2250_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v_cls_2235_, v_collapsed_boxed_2248_, v_tag_2237_, v_opts_2238_, v_clsEnabled_boxed_2249_, v_oldTraces_2240_, v_msg_2241_, v_resStartStop_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec_ref(v_opts_2238_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(lean_object* v_a_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_Lean_Meta_reduceRecMatcher_x3f(v_a_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2271_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2260_ = v___x_2257_;
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2257_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
if (lean_obj_tag(v_a_2258_) == 1)
{
lean_object* v_val_2262_; lean_object* v___x_2263_; 
lean_del_object(v___x_2260_);
lean_dec_ref(v_a_2251_);
v_val_2262_ = lean_ctor_get(v_a_2258_, 0);
lean_inc(v_val_2262_);
lean_dec_ref_known(v_a_2258_, 1);
v___x_2263_ = l_Lean_Expr_headBeta(v_val_2262_);
v_a_2251_ = v___x_2263_;
goto _start;
}
else
{
lean_object* v___x_2265_; uint8_t v___x_2266_; 
lean_dec(v_a_2258_);
lean_inc_ref(v_a_2251_);
v___x_2265_ = l_Lean_Expr_headBeta(v_a_2251_);
v___x_2266_ = lean_expr_eqv(v_a_2251_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_del_object(v___x_2260_);
lean_dec_ref(v_a_2251_);
v_a_2251_ = v___x_2265_;
goto _start;
}
else
{
lean_object* v___x_2269_; 
lean_dec_ref(v___x_2265_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v_a_2251_);
v___x_2269_ = v___x_2260_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2251_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec_ref(v_a_2251_);
v_a_2272_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2257_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2257_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg___boxed(lean_object* v_a_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
return v_res_2286_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__11(void){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2306_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2307_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__10));
v___x_2308_ = l_Lean_Name_append(v___x_2307_, v___x_2306_);
return v___x_2308_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__13(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__12));
v___x_2311_ = l_Lean_stringToMessageData(v___x_2310_);
return v___x_2311_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__15(void){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__14));
v___x_2314_ = l_Lean_stringToMessageData(v___x_2313_);
return v___x_2314_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__17(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__16));
v___x_2317_ = l_Lean_stringToMessageData(v___x_2316_);
return v___x_2317_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__19(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__18));
v___x_2320_ = l_Lean_stringToMessageData(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__21(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__20));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__23(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__22));
v___x_2326_ = l_Lean_stringToMessageData(v___x_2325_);
return v___x_2326_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__24(void){
_start:
{
lean_object* v___x_2327_; lean_object* v_dummy_2328_; 
v___x_2327_ = lean_box(0);
v_dummy_2328_ = l_Lean_Expr_sort___override(v___x_2327_);
return v_dummy_2328_;
}
}
static double _init_l_Lean_Meta_rwMatcher___closed__25(void){
_start:
{
lean_object* v___x_2329_; double v___x_2330_; 
v___x_2329_ = lean_unsigned_to_nat(1000000000u);
v___x_2330_ = lean_float_of_nat(v___x_2329_);
return v___x_2330_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__27(void){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__26));
v___x_2333_ = l_Lean_stringToMessageData(v___x_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher(lean_object* v_altIdx_2334_, lean_object* v_e_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v___y_2363_; lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2373_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__2));
v___x_2374_ = l_Lean_Expr_isAppOf(v_e_2335_, v___x_2373_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__4));
v___x_2376_ = l_Lean_Expr_isAppOf(v_e_2335_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; uint8_t v___x_2378_; lean_object* v___y_2380_; lean_object* v_proof_2381_; lean_object* v___x_2396_; lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2829_; 
v___x_2377_ = lean_box(0);
v___x_2378_ = 1;
v___x_2396_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_2335_, v_a_2339_);
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2829_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2829_;
goto v_resetjp_2398_;
}
v___jp_2379_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_proof_2381_);
v___x_2383_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2383_, 0, v___y_2380_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
lean_ctor_set_uint8(v___x_2383_, sizeof(void*)*2, v___x_2378_);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
return v___x_2384_;
}
v___jp_2385_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = lean_box(0);
v___x_2387_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2387_, 0, v_e_2335_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
lean_ctor_set_uint8(v___x_2387_, sizeof(void*)*2, v___x_2378_);
v___x_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2387_);
return v___x_2388_;
}
v___jp_2389_:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2390_ = lean_box(0);
v___x_2391_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2391_, 0, v_e_2335_);
lean_ctor_set(v___x_2391_, 1, v___x_2390_);
lean_ctor_set_uint8(v___x_2391_, sizeof(void*)*2, v___x_2378_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
return v___x_2392_;
}
v___jp_2393_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_box(0);
v___x_2395_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2335_, v___x_2378_, v___x_2394_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
v___y_2363_ = v___x_2395_;
goto v___jp_2362_;
}
v_resetjp_2398_:
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_unbox(v_a_2397_);
lean_dec(v_a_2397_);
if (v___x_2401_ == 0)
{
lean_object* v_toCold_2402_; lean_object* v_options_2403_; uint8_t v_hasTrace_2404_; 
lean_del_object(v___x_2399_);
lean_dec(v_altIdx_2334_);
v_toCold_2402_ = lean_ctor_get(v_a_2338_, 0);
v_options_2403_ = lean_ctor_get(v_toCold_2402_, 2);
v_hasTrace_2404_ = lean_ctor_get_uint8(v_options_2403_, sizeof(void*)*1);
if (v_hasTrace_2404_ == 0)
{
goto v___jp_2385_;
}
else
{
lean_object* v_inheritedTraceOptions_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_inheritedTraceOptions_2405_ = lean_ctor_get(v_toCold_2402_, 11);
v___x_2406_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2407_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2408_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2405_, v_options_2403_, v___x_2407_);
if (v___x_2408_ == 0)
{
goto v___jp_2385_;
}
else
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2409_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__13, &l_Lean_Meta_rwMatcher___closed__13_once, _init_l_Lean_Meta_rwMatcher___closed__13);
lean_inc_ref(v_e_2335_);
v___x_2410_ = l_Lean_indentExpr(v_e_2335_);
v___x_2411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2409_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
v___x_2412_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2406_, v___x_2411_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_dec_ref_known(v___x_2412_, 1);
goto v___jp_2385_;
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
lean_dec_ref(v_e_2335_);
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2415_ = v___x_2412_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2412_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2413_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
}
}
else
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2421_ = l_Lean_Expr_getAppFn(v_e_2335_);
v___x_2422_ = l_Lean_Expr_constName_x21(v___x_2421_);
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc(v___x_2422_);
v___x_2423_ = lean_get_congr_match_equations_for(v___x_2422_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2820_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2820_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2820_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; uint8_t v___x_2429_; 
v___x_2428_ = lean_array_get_size(v_a_2424_);
v___x_2429_ = lean_nat_dec_lt(v_altIdx_2334_, v___x_2428_);
if (v___x_2429_ == 0)
{
lean_object* v_toCold_2430_; lean_object* v_options_2431_; uint8_t v_hasTrace_2432_; 
lean_del_object(v___x_2426_);
lean_dec(v_a_2424_);
lean_dec_ref(v___x_2421_);
v_toCold_2430_ = lean_ctor_get(v_a_2338_, 0);
v_options_2431_ = lean_ctor_get(v_toCold_2430_, 2);
v_hasTrace_2432_ = lean_ctor_get_uint8(v_options_2431_, sizeof(void*)*1);
if (v_hasTrace_2432_ == 0)
{
lean_dec(v___x_2422_);
lean_del_object(v___x_2399_);
lean_dec(v_altIdx_2334_);
goto v___jp_2389_;
}
else
{
lean_object* v_inheritedTraceOptions_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; 
v_inheritedTraceOptions_2433_ = lean_ctor_get(v_toCold_2430_, 11);
v___x_2434_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2435_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2436_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2433_, v_options_2431_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_dec(v___x_2422_);
lean_del_object(v___x_2399_);
lean_dec(v_altIdx_2334_);
goto v___jp_2389_;
}
else
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2437_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__15, &l_Lean_Meta_rwMatcher___closed__15_once, _init_l_Lean_Meta_rwMatcher___closed__15);
v___x_2438_ = l_Nat_reprFast(v_altIdx_2334_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set_tag(v___x_2399_, 3);
lean_ctor_set(v___x_2399_, 0, v___x_2438_);
v___x_2440_ = v___x_2399_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2438_);
v___x_2440_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2441_ = l_Lean_MessageData_ofFormat(v___x_2440_);
v___x_2442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2437_);
lean_ctor_set(v___x_2442_, 1, v___x_2441_);
v___x_2443_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__17, &l_Lean_Meta_rwMatcher___closed__17_once, _init_l_Lean_Meta_rwMatcher___closed__17);
v___x_2444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2442_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = l_Nat_reprFast(v___x_2428_);
v___x_2446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
v___x_2447_ = l_Lean_MessageData_ofFormat(v___x_2446_);
v___x_2448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2444_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__19, &l_Lean_Meta_rwMatcher___closed__19_once, _init_l_Lean_Meta_rwMatcher___closed__19);
v___x_2450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l_Lean_MessageData_ofConstName(v___x_2422_, v___x_2429_);
v___x_2452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2450_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
v___x_2453_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2434_, v___x_2452_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_dec_ref_known(v___x_2453_, 1);
goto v___jp_2389_;
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec_ref(v_e_2335_);
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2453_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2453_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_2463_; lean_object* v_options_2464_; lean_object* v_inheritedTraceOptions_2465_; uint8_t v_hasTrace_2466_; lean_object* v_nargs_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v_a_2471_; lean_object* v___y_2502_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v_dummy_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_dec(v___x_2422_);
v_toCold_2463_ = lean_ctor_get(v_a_2338_, 0);
v_options_2464_ = lean_ctor_get(v_toCold_2463_, 2);
v_inheritedTraceOptions_2465_ = lean_ctor_get(v_toCold_2463_, 11);
v_hasTrace_2466_ = lean_ctor_get_uint8(v_options_2464_, sizeof(void*)*1);
v_nargs_2467_ = l_Lean_Expr_getAppNumArgs(v_e_2335_);
v___x_2468_ = lean_array_get(v___x_2377_, v_a_2424_, v_altIdx_2334_);
lean_dec(v_altIdx_2334_);
lean_dec(v_a_2424_);
v___x_2469_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2504_ = l_Lean_Expr_constLevels_x21(v___x_2421_);
lean_dec_ref(v___x_2421_);
lean_inc(v___x_2468_);
v___x_2505_ = l_Lean_mkConst(v___x_2468_, v___x_2504_);
v_dummy_2506_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__24, &l_Lean_Meta_rwMatcher___closed__24_once, _init_l_Lean_Meta_rwMatcher___closed__24);
lean_inc(v_nargs_2467_);
v___x_2507_ = lean_mk_array(v_nargs_2467_, v_dummy_2506_);
v___x_2508_ = lean_unsigned_to_nat(1u);
v___x_2509_ = lean_nat_sub(v_nargs_2467_, v___x_2508_);
lean_dec(v_nargs_2467_);
lean_inc_ref(v_e_2335_);
v___x_2510_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2335_, v___x_2507_, v___x_2509_);
v___x_2511_ = l_Lean_mkAppN(v___x_2505_, v___x_2510_);
lean_dec_ref(v___x_2510_);
if (v_hasTrace_2466_ == 0)
{
lean_object* v___x_2512_; 
lean_del_object(v___x_2399_);
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc_ref(v___x_2511_);
v___x_2512_ = lean_infer_type(v___x_2511_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; uint8_t v___x_2514_; lean_object* v___x_2515_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
v___x_2514_ = 0;
v___x_2515_ = l_Lean_Meta_forallMetaTelescope(v_a_2513_, v___x_2514_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v_snd_2517_; lean_object* v_fst_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2654_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v_snd_2517_ = lean_ctor_get(v_a_2516_, 1);
v_fst_2518_ = lean_ctor_get(v_a_2516_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v_a_2516_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2520_ = v_a_2516_;
v_isShared_2521_ = v_isSharedCheck_2654_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_snd_2517_);
lean_inc(v_fst_2518_);
lean_dec(v_a_2516_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2654_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v_snd_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2652_; 
v_snd_2522_ = lean_ctor_get(v_snd_2517_, 1);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_snd_2517_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; 
v_unused_2653_ = lean_ctor_get(v_snd_2517_, 0);
lean_dec(v_unused_2653_);
v___x_2524_ = v_snd_2517_;
v_isShared_2525_ = v_isSharedCheck_2652_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_snd_2522_);
lean_dec(v_snd_2517_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2652_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2526_; uint8_t v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2561_; uint8_t v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v_a_2567_; size_t v_sz_2583_; size_t v___x_2584_; lean_object* v___x_2585_; uint8_t v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; uint8_t v_fst_2606_; lean_object* v_fst_2607_; lean_object* v_snd_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___x_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v___x_2526_ = l_Lean_mkAppN(v___x_2511_, v_fst_2518_);
v_sz_2583_ = lean_array_size(v_fst_2518_);
v___x_2584_ = ((size_t)0ULL);
v___x_2585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_2583_, v___x_2584_, v_fst_2518_);
v___x_2632_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_2633_ = lean_unsigned_to_nat(4u);
v___x_2634_ = l_Lean_Expr_isAppOfArity(v_snd_2522_, v___x_2632_, v___x_2633_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2635_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_2636_ = lean_unsigned_to_nat(3u);
v___x_2637_ = l_Lean_Expr_isAppOfArity(v_snd_2522_, v___x_2635_, v___x_2636_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v_a_2644_; 
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_dec(v_snd_2522_);
lean_del_object(v___x_2520_);
v___x_2638_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
lean_inc(v___x_2468_);
v___x_2639_ = l_Lean_MessageData_ofConstName(v___x_2468_, v___x_2376_);
v___x_2640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_2642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2642_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref(v___x_2643_);
v_a_2471_ = v_a_2644_;
goto v___jp_2470_;
}
else
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = l_Lean_Expr_appFn_x21(v_snd_2522_);
v___x_2646_ = l_Lean_Expr_appArg_x21(v___x_2645_);
lean_dec_ref(v___x_2645_);
v___x_2647_ = l_Lean_Expr_appArg_x21(v_snd_2522_);
lean_dec(v_snd_2522_);
v_fst_2606_ = v___x_2376_;
v_fst_2607_ = v___x_2646_;
v_snd_2608_ = v___x_2647_;
v___y_2609_ = v_a_2336_;
v___y_2610_ = v_a_2337_;
v___y_2611_ = v_a_2338_;
v___y_2612_ = v_a_2339_;
goto v___jp_2605_;
}
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2648_ = l_Lean_Expr_appFn_x21(v_snd_2522_);
v___x_2649_ = l_Lean_Expr_appFn_x21(v___x_2648_);
lean_dec_ref(v___x_2648_);
v___x_2650_ = l_Lean_Expr_appArg_x21(v___x_2649_);
lean_dec_ref(v___x_2649_);
v___x_2651_ = l_Lean_Expr_appArg_x21(v_snd_2522_);
lean_dec(v_snd_2522_);
v_fst_2606_ = v___x_2378_;
v_fst_2607_ = v___x_2650_;
v_snd_2608_ = v___x_2651_;
v___y_2609_ = v_a_2336_;
v___y_2610_ = v_a_2337_;
v___y_2611_ = v_a_2338_;
v___y_2612_ = v_a_2339_;
goto v___jp_2605_;
}
v___jp_2527_:
{
lean_object* v___x_2534_; lean_object* v_a_2535_; lean_object* v___x_2536_; 
v___x_2534_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_2529_, v___y_2531_);
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_2526_, v___y_2531_);
if (v___y_2528_ == 0)
{
lean_object* v_a_2537_; 
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
lean_dec(v___x_2468_);
lean_del_object(v___x_2426_);
lean_dec_ref(v_e_2335_);
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref(v___x_2536_);
v___y_2380_ = v_a_2535_;
v_proof_2381_ = v_a_2537_;
goto v___jp_2379_;
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2539_; 
v_a_2538_ = lean_ctor_get(v___x_2536_, 0);
lean_inc_n(v_a_2538_, 2);
lean_dec_ref(v___x_2536_);
v___x_2539_ = l_Lean_Meta_mkEqOfHEq(v_a_2538_, v___x_2378_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; 
lean_dec(v_a_2538_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
lean_dec(v___x_2468_);
lean_del_object(v___x_2426_);
lean_dec_ref(v_e_2335_);
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v___y_2380_ = v_a_2535_;
v_proof_2381_ = v_a_2540_;
goto v___jp_2379_;
}
else
{
lean_object* v_a_2541_; uint8_t v___x_2542_; 
lean_dec(v_a_2535_);
v_a_2541_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2539_, 1);
v___x_2542_ = l_Lean_Exception_isInterrupt(v_a_2541_);
if (v___x_2542_ == 0)
{
uint8_t v___x_2543_; 
lean_inc(v_a_2541_);
v___x_2543_ = l_Lean_Exception_isRuntime(v_a_2541_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2547_; 
v___x_2544_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_2545_ = l_Lean_MessageData_ofExpr(v_a_2538_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set_tag(v___x_2524_, 7);
lean_ctor_set(v___x_2524_, 1, v___x_2545_);
lean_ctor_set(v___x_2524_, 0, v___x_2544_);
v___x_2547_ = v___x_2524_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v___x_2544_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v___x_2545_);
v___x_2547_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
lean_object* v___x_2548_; lean_object* v___x_2550_; 
v___x_2548_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 7);
lean_ctor_set(v___x_2520_, 1, v___x_2548_);
lean_ctor_set(v___x_2520_, 0, v___x_2547_);
v___x_2550_ = v___x_2520_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2547_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v___x_2548_);
v___x_2550_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v_a_2557_; 
v___x_2551_ = l_Lean_Exception_toMessageData(v_a_2541_);
v___x_2552_ = l_Lean_indentD(v___x_2551_);
v___x_2553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2550_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
v___x_2554_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_2555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2553_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2555_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
lean_inc(v_a_2557_);
lean_dec_ref(v___x_2556_);
v_a_2471_ = v_a_2557_;
goto v___jp_2470_;
}
}
}
else
{
lean_dec(v_a_2538_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v_a_2471_ = v_a_2541_;
goto v___jp_2470_;
}
}
else
{
lean_dec(v_a_2538_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v_a_2471_ = v_a_2541_;
goto v___jp_2470_;
}
}
}
}
v___jp_2560_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; 
v___x_2568_ = lean_array_get_size(v_a_2567_);
v___x_2569_ = lean_unsigned_to_nat(0u);
v___x_2570_ = lean_nat_dec_eq(v___x_2568_, v___x_2569_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v_a_2582_; 
lean_dec_ref(v___y_2563_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v___x_2571_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
lean_inc(v___x_2468_);
v___x_2572_ = l_Lean_MessageData_ofConstName(v___x_2468_, v___x_2570_);
v___x_2573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2571_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_2575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2573_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_array_to_list(v_a_2567_);
v___x_2577_ = lean_box(0);
v___x_2578_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_2576_, v___x_2577_);
v___x_2579_ = l_Lean_MessageData_ofList(v___x_2578_);
v___x_2580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2575_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2580_, v___y_2561_, v___y_2566_, v___y_2565_, v___y_2564_);
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref(v___x_2581_);
v_a_2471_ = v_a_2582_;
goto v___jp_2470_;
}
else
{
lean_dec_ref(v_a_2567_);
v___y_2528_ = v___y_2562_;
v___y_2529_ = v___y_2563_;
v___y_2530_ = v___y_2561_;
v___y_2531_ = v___y_2566_;
v___y_2532_ = v___y_2565_;
v___y_2533_ = v___y_2564_;
goto v___jp_2527_;
}
}
v___jp_2586_:
{
lean_object* v___x_2593_; size_t v_sz_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_box(0);
v_sz_2594_ = lean_array_size(v___x_2585_);
v___x_2595_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_2585_, v_sz_2594_, v___x_2584_, v___x_2593_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
lean_dec_ref_known(v___x_2595_, 1);
v___x_2596_ = lean_unsigned_to_nat(0u);
v___x_2597_ = lean_array_get_size(v___x_2585_);
v___x_2598_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_2599_ = lean_nat_dec_lt(v___x_2596_, v___x_2597_);
if (v___x_2599_ == 0)
{
lean_dec_ref(v___x_2585_);
v___y_2561_ = v___y_2589_;
v___y_2562_ = v___y_2587_;
v___y_2563_ = v___y_2588_;
v___y_2564_ = v___y_2592_;
v___y_2565_ = v___y_2591_;
v___y_2566_ = v___y_2590_;
v_a_2567_ = v___x_2598_;
goto v___jp_2560_;
}
else
{
size_t v___x_2600_; lean_object* v___x_2601_; 
v___x_2600_ = lean_usize_of_nat(v___x_2597_);
v___x_2601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_2585_, v___x_2584_, v___x_2600_, v___x_2598_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
lean_dec_ref(v___x_2585_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
v___y_2561_ = v___y_2589_;
v___y_2562_ = v___y_2587_;
v___y_2563_ = v___y_2588_;
v___y_2564_ = v___y_2592_;
v___y_2565_ = v___y_2591_;
v___y_2566_ = v___y_2590_;
v_a_2567_ = v_a_2602_;
goto v___jp_2560_;
}
else
{
lean_object* v_a_2603_; 
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v_a_2603_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2603_);
lean_dec_ref_known(v___x_2601_, 1);
v_a_2471_ = v_a_2603_;
goto v___jp_2470_;
}
}
}
else
{
lean_object* v_a_2604_; 
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v_a_2604_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2595_, 1);
v_a_2471_ = v_a_2604_;
goto v___jp_2470_;
}
}
v___jp_2605_:
{
lean_object* v___x_2613_; 
lean_inc_ref(v_fst_2607_);
lean_inc_ref(v_e_2335_);
v___x_2613_ = l_Lean_Meta_isExprDefEq(v_e_2335_, v_fst_2607_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; uint8_t v___x_2615_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2614_);
lean_dec_ref_known(v___x_2613_, 1);
v___x_2615_ = lean_unbox(v_a_2614_);
lean_dec(v_a_2614_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v_a_2630_; 
lean_dec_ref(v_snd_2608_);
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v___x_2616_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_2617_ = l_Lean_MessageData_ofExpr(v_fst_2607_);
v___x_2618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_2620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
lean_inc(v___x_2468_);
v___x_2621_ = l_Lean_MessageData_ofConstName(v___x_2468_, v___x_2376_);
v___x_2622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2620_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
v___x_2623_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_2624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2622_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
lean_inc_ref(v_e_2335_);
v___x_2625_ = l_Lean_MessageData_ofExpr(v_e_2335_);
v___x_2626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2624_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_2628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2626_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2628_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref(v___x_2629_);
v_a_2471_ = v_a_2630_;
goto v___jp_2470_;
}
else
{
lean_dec_ref(v_fst_2607_);
v___y_2587_ = v_fst_2606_;
v___y_2588_ = v_snd_2608_;
v___y_2589_ = v___y_2609_;
v___y_2590_ = v___y_2610_;
v___y_2591_ = v___y_2611_;
v___y_2592_ = v___y_2612_;
goto v___jp_2586_;
}
}
else
{
lean_object* v_a_2631_; 
lean_dec_ref(v_snd_2608_);
lean_dec_ref(v_fst_2607_);
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2526_);
lean_del_object(v___x_2524_);
lean_del_object(v___x_2520_);
v_a_2631_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2631_);
lean_dec_ref_known(v___x_2613_, 1);
v_a_2471_ = v_a_2631_;
goto v___jp_2470_;
}
}
}
}
}
else
{
lean_object* v_a_2655_; 
lean_dec_ref(v___x_2511_);
v_a_2655_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2515_, 1);
v_a_2471_ = v_a_2655_;
goto v___jp_2470_;
}
}
else
{
lean_object* v_a_2656_; 
lean_dec_ref(v___x_2511_);
v_a_2656_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2512_, 1);
v_a_2471_ = v_a_2656_;
goto v___jp_2470_;
}
}
else
{
lean_object* v___x_2657_; lean_object* v___f_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v_a_2665_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v_a_2680_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v_a_2700_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v_a_2712_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; 
v___x_2657_ = lean_box(v___x_2376_);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___f_2658_ = lean_alloc_closure((void*)(l_Lean_Meta_rwMatcher___lam__1___boxed), 9, 3);
lean_closure_set(v___f_2658_, 0, v___x_2468_);
lean_closure_set(v___f_2658_, 1, v___x_2657_);
lean_closure_set(v___f_2658_, 2, v_e_2335_);
v___x_2659_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_2660_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2661_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2465_, v_options_2464_, v___x_2660_);
if (v___x_2661_ == 0)
{
lean_object* v___x_2790_; uint8_t v___x_2791_; 
v___x_2790_ = l_Lean_trace_profiler;
v___x_2791_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2464_, v___x_2790_);
if (v___x_2791_ == 0)
{
lean_object* v___x_2792_; 
lean_dec_ref(v___f_2658_);
lean_del_object(v___x_2399_);
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc_ref(v___x_2511_);
v___x_2792_ = lean_infer_type(v___x_2511_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2794_ = 0;
v___x_2795_ = l_Lean_Meta_forallMetaTelescope(v_a_2793_, v___x_2794_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v_snd_2797_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v_snd_2797_ = lean_ctor_get(v_a_2796_, 1);
lean_inc(v_snd_2797_);
if (v___x_2661_ == 0)
{
lean_object* v_fst_2798_; lean_object* v_snd_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_fst_2798_ = lean_ctor_get(v_a_2796_, 0);
lean_inc(v_fst_2798_);
lean_dec(v_a_2796_);
v_snd_2799_ = lean_ctor_get(v_snd_2797_, 1);
lean_inc(v_snd_2799_);
lean_dec(v_snd_2797_);
v___x_2800_ = lean_box(0);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2801_ = l_Lean_Meta_rwMatcher___lam__4(v___x_2378_, v___x_2511_, v_fst_2798_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2799_, v___x_2800_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2799_);
v___y_2502_ = v___x_2801_;
goto v___jp_2501_;
}
else
{
lean_object* v_fst_2802_; lean_object* v_snd_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2816_; 
v_fst_2802_ = lean_ctor_get(v_a_2796_, 0);
lean_inc(v_fst_2802_);
lean_dec(v_a_2796_);
v_snd_2803_ = lean_ctor_get(v_snd_2797_, 1);
v_isSharedCheck_2816_ = !lean_is_exclusive(v_snd_2797_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v_snd_2797_, 0);
lean_dec(v_unused_2817_);
v___x_2805_ = v_snd_2797_;
v_isShared_2806_ = v_isSharedCheck_2816_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_snd_2803_);
lean_dec(v_snd_2797_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2816_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2807_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2803_);
v___x_2808_ = l_Lean_indentExpr(v_snd_2803_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set_tag(v___x_2805_, 7);
lean_ctor_set(v___x_2805_, 1, v___x_2808_);
lean_ctor_set(v___x_2805_, 0, v___x_2807_);
v___x_2810_ = v___x_2805_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2469_, v___x_2810_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2813_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2813_ = l_Lean_Meta_rwMatcher___lam__4(v___x_2378_, v___x_2511_, v_fst_2802_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2803_, v_a_2812_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2803_);
v___y_2502_ = v___x_2813_;
goto v___jp_2501_;
}
else
{
lean_object* v_a_2814_; 
lean_dec(v_snd_2803_);
lean_dec(v_fst_2802_);
lean_dec_ref(v___x_2511_);
v_a_2814_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2811_, 1);
v_a_2471_ = v_a_2814_;
goto v___jp_2470_;
}
}
}
}
}
else
{
lean_object* v_a_2818_; 
lean_dec_ref(v___x_2511_);
v_a_2818_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___x_2795_, 1);
v_a_2471_ = v_a_2818_;
goto v___jp_2470_;
}
}
else
{
lean_object* v_a_2819_; 
lean_dec_ref(v___x_2511_);
v_a_2819_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2792_, 1);
v_a_2471_ = v_a_2819_;
goto v___jp_2470_;
}
}
else
{
goto v___jp_2727_;
}
}
else
{
goto v___jp_2727_;
}
v___jp_2662_:
{
lean_object* v___x_2666_; double v___x_2667_; double v___x_2668_; double v___x_2669_; double v___x_2670_; double v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2666_ = lean_io_mono_nanos_now();
v___x_2667_ = lean_float_of_nat(v___y_2663_);
v___x_2668_ = lean_float_once(&l_Lean_Meta_rwMatcher___closed__25, &l_Lean_Meta_rwMatcher___closed__25_once, _init_l_Lean_Meta_rwMatcher___closed__25);
v___x_2669_ = lean_float_div(v___x_2667_, v___x_2668_);
v___x_2670_ = lean_float_of_nat(v___x_2666_);
v___x_2671_ = lean_float_div(v___x_2670_, v___x_2668_);
v___x_2672_ = lean_box_float(v___x_2669_);
v___x_2673_ = lean_box_float(v___x_2671_);
v___x_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
v___x_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2675_, 0, v_a_2665_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2469_, v___x_2378_, v___x_2659_, v_options_2464_, v___x_2661_, v___y_2664_, v___f_2658_, v___x_2675_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
v___y_2502_ = v___x_2676_;
goto v___jp_2501_;
}
v___jp_2677_:
{
lean_object* v___x_2682_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v_a_2680_);
v___x_2682_ = v___x_2399_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
v___y_2663_ = v___y_2678_;
v___y_2664_ = v___y_2679_;
v_a_2665_ = v___x_2682_;
goto v___jp_2662_;
}
}
v___jp_2684_:
{
if (lean_obj_tag(v___y_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_del_object(v___x_2399_);
v_a_2688_ = lean_ctor_get(v___y_2687_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___y_2687_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___y_2687_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___y_2687_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 1);
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
v___y_2663_ = v___y_2685_;
v___y_2664_ = v___y_2686_;
v_a_2665_ = v___x_2693_;
goto v___jp_2662_;
}
}
}
else
{
lean_object* v_a_2696_; 
v_a_2696_ = lean_ctor_get(v___y_2687_, 0);
lean_inc(v_a_2696_);
lean_dec_ref_known(v___y_2687_, 1);
v___y_2678_ = v___y_2685_;
v___y_2679_ = v___y_2686_;
v_a_2680_ = v_a_2696_;
goto v___jp_2677_;
}
}
v___jp_2697_:
{
lean_object* v___x_2701_; double v___x_2702_; double v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2701_ = lean_io_get_num_heartbeats();
v___x_2702_ = lean_float_of_nat(v___y_2698_);
v___x_2703_ = lean_float_of_nat(v___x_2701_);
v___x_2704_ = lean_box_float(v___x_2702_);
v___x_2705_ = lean_box_float(v___x_2703_);
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2707_, 0, v_a_2700_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
v___x_2708_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2469_, v___x_2378_, v___x_2659_, v_options_2464_, v___x_2661_, v___y_2699_, v___f_2658_, v___x_2707_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
v___y_2502_ = v___x_2708_;
goto v___jp_2501_;
}
v___jp_2709_:
{
lean_object* v___x_2713_; 
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v_a_2712_);
v___y_2698_ = v___y_2710_;
v___y_2699_ = v___y_2711_;
v_a_2700_ = v___x_2713_;
goto v___jp_2697_;
}
v___jp_2714_:
{
if (lean_obj_tag(v___y_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
v_a_2718_ = lean_ctor_get(v___y_2717_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___y_2717_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___y_2717_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___y_2717_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
lean_ctor_set_tag(v___x_2720_, 1);
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
v___y_2698_ = v___y_2715_;
v___y_2699_ = v___y_2716_;
v_a_2700_ = v___x_2723_;
goto v___jp_2697_;
}
}
}
else
{
lean_object* v_a_2726_; 
v_a_2726_ = lean_ctor_get(v___y_2717_, 0);
lean_inc(v_a_2726_);
lean_dec_ref_known(v___y_2717_, 1);
v___y_2710_ = v___y_2715_;
v___y_2711_ = v___y_2716_;
v_a_2712_ = v_a_2726_;
goto v___jp_2709_;
}
}
v___jp_2727_:
{
lean_object* v___x_2728_; lean_object* v_a_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v___x_2728_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v_a_2339_);
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc(v_a_2729_);
lean_dec_ref(v___x_2728_);
v___x_2730_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2731_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2464_, v___x_2730_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = lean_io_mono_nanos_now();
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc_ref(v___x_2511_);
v___x_2733_ = lean_infer_type(v___x_2511_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; uint8_t v___x_2735_; lean_object* v___x_2736_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = 0;
v___x_2736_ = l_Lean_Meta_forallMetaTelescope(v_a_2734_, v___x_2735_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v_snd_2738_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2736_, 1);
v_snd_2738_ = lean_ctor_get(v_a_2737_, 1);
lean_inc(v_snd_2738_);
if (v___x_2661_ == 0)
{
lean_object* v_fst_2739_; lean_object* v_snd_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v_fst_2739_ = lean_ctor_get(v_a_2737_, 0);
lean_inc(v_fst_2739_);
lean_dec(v_a_2737_);
v_snd_2740_ = lean_ctor_get(v_snd_2738_, 1);
lean_inc(v_snd_2740_);
lean_dec(v_snd_2738_);
v___x_2741_ = lean_box(0);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2742_ = l_Lean_Meta_rwMatcher___lam__2(v___x_2378_, v___x_2511_, v_fst_2739_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2740_, v___x_2741_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2740_);
v___y_2685_ = v___x_2732_;
v___y_2686_ = v_a_2729_;
v___y_2687_ = v___x_2742_;
goto v___jp_2684_;
}
else
{
lean_object* v_fst_2743_; lean_object* v_snd_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2757_; 
v_fst_2743_ = lean_ctor_get(v_a_2737_, 0);
lean_inc(v_fst_2743_);
lean_dec(v_a_2737_);
v_snd_2744_ = lean_ctor_get(v_snd_2738_, 1);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_snd_2738_);
if (v_isSharedCheck_2757_ == 0)
{
lean_object* v_unused_2758_; 
v_unused_2758_ = lean_ctor_get(v_snd_2738_, 0);
lean_dec(v_unused_2758_);
v___x_2746_ = v_snd_2738_;
v_isShared_2747_ = v_isSharedCheck_2757_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_snd_2744_);
lean_dec(v_snd_2738_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2757_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2751_; 
v___x_2748_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2744_);
v___x_2749_ = l_Lean_indentExpr(v_snd_2744_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set_tag(v___x_2746_, 7);
lean_ctor_set(v___x_2746_, 1, v___x_2749_);
lean_ctor_set(v___x_2746_, 0, v___x_2748_);
v___x_2751_ = v___x_2746_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v___x_2748_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v___x_2749_);
v___x_2751_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2469_, v___x_2751_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2754_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2753_);
lean_dec_ref_known(v___x_2752_, 1);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2754_ = l_Lean_Meta_rwMatcher___lam__2(v___x_2378_, v___x_2511_, v_fst_2743_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2744_, v_a_2753_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2744_);
v___y_2685_ = v___x_2732_;
v___y_2686_ = v_a_2729_;
v___y_2687_ = v___x_2754_;
goto v___jp_2684_;
}
else
{
lean_object* v_a_2755_; 
lean_dec(v_snd_2744_);
lean_dec(v_fst_2743_);
lean_dec_ref(v___x_2511_);
v_a_2755_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2752_, 1);
v___y_2678_ = v___x_2732_;
v___y_2679_ = v_a_2729_;
v_a_2680_ = v_a_2755_;
goto v___jp_2677_;
}
}
}
}
}
else
{
lean_object* v_a_2759_; 
lean_dec_ref(v___x_2511_);
v_a_2759_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2759_);
lean_dec_ref_known(v___x_2736_, 1);
v___y_2678_ = v___x_2732_;
v___y_2679_ = v_a_2729_;
v_a_2680_ = v_a_2759_;
goto v___jp_2677_;
}
}
else
{
lean_object* v_a_2760_; 
lean_dec_ref(v___x_2511_);
v_a_2760_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2760_);
lean_dec_ref_known(v___x_2733_, 1);
v___y_2678_ = v___x_2732_;
v___y_2679_ = v_a_2729_;
v_a_2680_ = v_a_2760_;
goto v___jp_2677_;
}
}
else
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
lean_del_object(v___x_2399_);
v___x_2761_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
lean_inc(v_a_2337_);
lean_inc_ref(v_a_2336_);
lean_inc_ref(v___x_2511_);
v___x_2762_ = lean_infer_type(v___x_2511_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v_a_2763_; uint8_t v___x_2764_; lean_object* v___x_2765_; 
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2762_, 1);
v___x_2764_ = 0;
v___x_2765_ = l_Lean_Meta_forallMetaTelescope(v_a_2763_, v___x_2764_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v_snd_2767_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v_snd_2767_ = lean_ctor_get(v_a_2766_, 1);
lean_inc(v_snd_2767_);
if (v___x_2661_ == 0)
{
lean_object* v_fst_2768_; lean_object* v_snd_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_fst_2768_ = lean_ctor_get(v_a_2766_, 0);
lean_inc(v_fst_2768_);
lean_dec(v_a_2766_);
v_snd_2769_ = lean_ctor_get(v_snd_2767_, 1);
lean_inc(v_snd_2769_);
lean_dec(v_snd_2767_);
v___x_2770_ = lean_box(0);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2771_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2378_, v___x_2511_, v_fst_2768_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2769_, v___x_2770_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2769_);
v___y_2715_ = v___x_2761_;
v___y_2716_ = v_a_2729_;
v___y_2717_ = v___x_2771_;
goto v___jp_2714_;
}
else
{
lean_object* v_fst_2772_; lean_object* v_snd_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2786_; 
v_fst_2772_ = lean_ctor_get(v_a_2766_, 0);
lean_inc(v_fst_2772_);
lean_dec(v_a_2766_);
v_snd_2773_ = lean_ctor_get(v_snd_2767_, 1);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_snd_2767_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v_snd_2767_, 0);
lean_dec(v_unused_2787_);
v___x_2775_ = v_snd_2767_;
v_isShared_2776_ = v_isSharedCheck_2786_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_snd_2773_);
lean_dec(v_snd_2767_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2786_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2780_; 
v___x_2777_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2773_);
v___x_2778_ = l_Lean_indentExpr(v_snd_2773_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 7);
lean_ctor_set(v___x_2775_, 1, v___x_2778_);
lean_ctor_set(v___x_2775_, 0, v___x_2777_);
v___x_2780_ = v___x_2775_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v___x_2778_);
v___x_2780_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2469_, v___x_2780_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2783_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
lean_inc_ref(v_e_2335_);
lean_inc(v___x_2468_);
v___x_2783_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2378_, v___x_2511_, v_fst_2772_, v___x_2468_, v_e_2335_, v___x_2376_, v_snd_2773_, v_a_2782_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_snd_2773_);
v___y_2715_ = v___x_2761_;
v___y_2716_ = v_a_2729_;
v___y_2717_ = v___x_2783_;
goto v___jp_2714_;
}
else
{
lean_object* v_a_2784_; 
lean_dec(v_snd_2773_);
lean_dec(v_fst_2772_);
lean_dec_ref(v___x_2511_);
v_a_2784_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2781_, 1);
v___y_2710_ = v___x_2761_;
v___y_2711_ = v_a_2729_;
v_a_2712_ = v_a_2784_;
goto v___jp_2709_;
}
}
}
}
}
else
{
lean_object* v_a_2788_; 
lean_dec_ref(v___x_2511_);
v_a_2788_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2765_, 1);
v___y_2710_ = v___x_2761_;
v___y_2711_ = v_a_2729_;
v_a_2712_ = v_a_2788_;
goto v___jp_2709_;
}
}
else
{
lean_object* v_a_2789_; 
lean_dec_ref(v___x_2511_);
v_a_2789_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2789_);
lean_dec_ref_known(v___x_2762_, 1);
v___y_2710_ = v___x_2761_;
v___y_2711_ = v_a_2729_;
v_a_2712_ = v_a_2789_;
goto v___jp_2709_;
}
}
}
}
v___jp_2470_:
{
uint8_t v___x_2472_; 
v___x_2472_ = l_Lean_Exception_isInterrupt(v_a_2471_);
if (v___x_2472_ == 0)
{
uint8_t v___x_2473_; 
lean_inc_ref(v_a_2471_);
v___x_2473_ = l_Lean_Exception_isRuntime(v_a_2471_);
if (v___x_2473_ == 0)
{
lean_del_object(v___x_2426_);
if (v_hasTrace_2466_ == 0)
{
lean_dec_ref(v_a_2471_);
lean_dec(v___x_2468_);
goto v___jp_2393_;
}
else
{
lean_object* v___x_2474_; uint8_t v___x_2475_; 
v___x_2474_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2475_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2465_, v_options_2464_, v___x_2474_);
if (v___x_2475_ == 0)
{
lean_dec_ref(v_a_2471_);
lean_dec(v___x_2468_);
goto v___jp_2393_;
}
else
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2476_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__21, &l_Lean_Meta_rwMatcher___closed__21_once, _init_l_Lean_Meta_rwMatcher___closed__21);
v___x_2477_ = l_Lean_MessageData_ofConstName(v___x_2468_, v___x_2376_);
v___x_2478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2476_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__23, &l_Lean_Meta_rwMatcher___closed__23_once, _init_l_Lean_Meta_rwMatcher___closed__23);
v___x_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2478_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = l_Lean_Exception_toMessageData(v_a_2471_);
v___x_2482_ = l_Lean_indentD(v___x_2481_);
v___x_2483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2480_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2469_, v___x_2483_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2486_; 
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2484_, 1);
v___x_2486_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2335_, v___x_2378_, v_a_2485_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
v___y_2363_ = v___x_2486_;
goto v___jp_2362_;
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
lean_dec_ref(v_e_2335_);
v_a_2487_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2484_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2484_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
}
else
{
lean_object* v___x_2496_; 
lean_dec(v___x_2468_);
lean_dec_ref(v_e_2335_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v_a_2471_);
v___x_2496_ = v___x_2426_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2471_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v___x_2499_; 
lean_dec(v___x_2468_);
lean_dec_ref(v_e_2335_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v_a_2471_);
v___x_2499_ = v___x_2426_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2471_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
v___jp_2501_:
{
if (lean_obj_tag(v___y_2502_) == 0)
{
lean_dec(v___x_2468_);
lean_del_object(v___x_2426_);
lean_dec_ref(v_e_2335_);
return v___y_2502_;
}
else
{
lean_object* v_a_2503_; 
v_a_2503_ = lean_ctor_get(v___y_2502_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v___y_2502_, 1);
v_a_2471_ = v_a_2503_;
goto v___jp_2470_;
}
}
}
}
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_del_object(v___x_2399_);
lean_dec_ref(v_e_2335_);
lean_dec(v_altIdx_2334_);
v_a_2821_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2423_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2423_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
}
}
else
{
lean_dec(v_altIdx_2334_);
goto v___jp_2341_;
}
}
else
{
lean_dec(v_altIdx_2334_);
goto v___jp_2341_;
}
v___jp_2341_:
{
uint8_t v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = 1;
v___x_2343_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_e_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2353_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2346_ = v___x_2343_;
v_isShared_2347_ = v_isSharedCheck_2353_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2353_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2348_ = lean_box(0);
v___x_2349_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2349_, 0, v_a_2344_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
lean_ctor_set_uint8(v___x_2349_, sizeof(void*)*2, v___x_2342_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v___x_2349_);
v___x_2351_ = v___x_2346_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
v_a_2354_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2343_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2343_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
v___jp_2362_:
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2372_; 
v_a_2364_ = lean_ctor_get(v___y_2363_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___y_2363_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2366_ = v___y_2363_;
v_isShared_2367_ = v_isSharedCheck_2372_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___y_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2372_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v_a_2368_; lean_object* v___x_2370_; 
v_a_2368_ = lean_ctor_get(v_a_2364_, 0);
lean_inc(v_a_2368_);
lean_dec(v_a_2364_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v_a_2368_);
v___x_2370_ = v___x_2366_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___boxed(lean_object* v_altIdx_2830_, lean_object* v_e_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l_Lean_Meta_rwMatcher(v_altIdx_2830_, v_e_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_);
lean_dec(v_a_2835_);
lean_dec_ref(v_a_2834_);
lean_dec(v_a_2833_);
lean_dec_ref(v_a_2832_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(lean_object* v_inst_2838_, lean_object* v_a_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v___x_2845_; 
v___x_2845_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___boxed(lean_object* v_inst_2846_, lean_object* v_a_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(v_inst_2846_, v_a_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(lean_object* v_mvarId_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_2854_, v___y_2856_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___boxed(lean_object* v_mvarId_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(v_mvarId_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v_mvarId_2861_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(lean_object* v_00_u03b1_2868_, lean_object* v_msg_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___boxed(lean_object* v_00_u03b1_2876_, lean_object* v_msg_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(v_00_u03b1_2876_, v_msg_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(lean_object* v_00_u03b1_2884_, lean_object* v_x_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_2885_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2892_, lean_object* v_x_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(v_00_u03b1_2892_, v_x_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
return v_res_2899_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(lean_object* v_00_u03b2_2900_, lean_object* v_x_2901_, lean_object* v_x_2902_){
_start:
{
uint8_t v___x_2903_; 
v___x_2903_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_2901_, v_x_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2904_, lean_object* v_x_2905_, lean_object* v_x_2906_){
_start:
{
uint8_t v_res_2907_; lean_object* v_r_2908_; 
v_res_2907_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(v_00_u03b2_2904_, v_x_2905_, v_x_2906_);
lean_dec(v_x_2906_);
lean_dec_ref(v_x_2905_);
v_r_2908_ = lean_box(v_res_2907_);
return v_r_2908_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_2909_, lean_object* v_x_2910_, size_t v_x_2911_, lean_object* v_x_2912_){
_start:
{
uint8_t v___x_2913_; 
v___x_2913_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_2910_, v_x_2911_, v_x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_2914_, lean_object* v_x_2915_, lean_object* v_x_2916_, lean_object* v_x_2917_){
_start:
{
size_t v_x_89090__boxed_2918_; uint8_t v_res_2919_; lean_object* v_r_2920_; 
v_x_89090__boxed_2918_ = lean_unbox_usize(v_x_2916_);
lean_dec(v_x_2916_);
v_res_2919_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(v_00_u03b2_2914_, v_x_2915_, v_x_89090__boxed_2918_, v_x_2917_);
lean_dec(v_x_2917_);
lean_dec_ref(v_x_2915_);
v_r_2920_ = lean_box(v_res_2919_);
return v_r_2920_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(lean_object* v_00_u03b2_2921_, lean_object* v_keys_2922_, lean_object* v_vals_2923_, lean_object* v_heq_2924_, lean_object* v_i_2925_, lean_object* v_k_2926_){
_start:
{
uint8_t v___x_2927_; 
v___x_2927_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_2922_, v_i_2925_, v_k_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___boxed(lean_object* v_00_u03b2_2928_, lean_object* v_keys_2929_, lean_object* v_vals_2930_, lean_object* v_heq_2931_, lean_object* v_i_2932_, lean_object* v_k_2933_){
_start:
{
uint8_t v_res_2934_; lean_object* v_r_2935_; 
v_res_2934_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(v_00_u03b2_2928_, v_keys_2929_, v_vals_2930_, v_heq_2931_, v_i_2932_, v_k_2933_);
lean_dec(v_k_2933_);
lean_dec_ref(v_vals_2930_);
lean_dec_ref(v_keys_2929_);
v_r_2935_ = lean_box(v_res_2934_);
return v_r_2935_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Init_UDecidable(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
