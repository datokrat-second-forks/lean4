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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Meta_rwIfWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__0 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__1 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__1_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__2 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__3 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__4 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__4_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__5 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__6 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__6_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__7 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__7_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__8 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__8_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__9 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__10 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__10_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__11 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__11_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__11_value),LEAN_SCALAR_PTR_LITERAL(224, 237, 116, 5, 155, 59, 56, 160)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__12 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__12_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__13 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__13_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__13_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__14 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__14_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__15 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__16 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__16_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__9_value),LEAN_SCALAR_PTR_LITERAL(226, 127, 188, 147, 183, 148, 17, 43)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__17 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__17_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__11_value),LEAN_SCALAR_PTR_LITERAL(47, 91, 172, 106, 10, 51, 189, 44)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__18 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__18_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__13_value),LEAN_SCALAR_PTR_LITERAL(133, 196, 119, 188, 182, 137, 173, 132)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__19 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__19_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__15_value),LEAN_SCALAR_PTR_LITERAL(32, 95, 146, 40, 200, 88, 9, 188)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__20 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__20_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__21 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__22 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__22_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__23 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__23_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__24;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__25 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__26_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__25_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__26 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__26_value;
static lean_once_cell_t l_Lean_Meta_rwIfWith___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_rwIfWith___closed__27;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_neg"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__28 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__28_value),LEAN_SCALAR_PTR_LITERAL(49, 12, 112, 38, 148, 75, 173, 29)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__29 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__29_value;
static const lean_string_object l_Lean_Meta_rwIfWith___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_pos"};
static const lean_object* l_Lean_Meta_rwIfWith___closed__30 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__30_value;
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_rwIfWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_rwIfWith___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_rwIfWith___closed__30_value),LEAN_SCALAR_PTR_LITERAL(92, 34, 41, 42, 220, 235, 208, 212)}};
static const lean_object* l_Lean_Meta_rwIfWith___closed__31 = (const lean_object*)&l_Lean_Meta_rwIfWith___closed__31_value;
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
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__24(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_box(0);
v___x_47_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__23));
v___x_48_ = l_Lean_mkConst(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_rwIfWith___closed__27(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_box(0);
v___x_54_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__26));
v___x_55_ = l_Lean_mkConst(v___x_54_, v___x_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith(lean_object* v_hc_64_, lean_object* v_e_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_76_; 
lean_inc_ref(v_e_65_);
v___x_76_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_65_, v_a_67_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_a_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v___x_76_, 1);
v___x_78_ = l_Lean_Expr_cleanupAnnotations(v_a_77_);
lean_dec(v_a_77_);
v___x_79_ = l_Lean_Expr_isApp(v___x_78_);
if (v___x_79_ == 0)
{
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = l_Lean_Expr_appFnCleanup___redArg(v___x_78_);
v___x_81_ = l_Lean_Expr_isApp(v___x_80_);
if (v___x_81_ == 0)
{
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = l_Lean_Expr_appFnCleanup___redArg(v___x_80_);
v___x_83_ = l_Lean_Expr_isApp(v___x_82_);
if (v___x_83_ == 0)
{
lean_dec_ref(v___x_82_);
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = l_Lean_Expr_appFnCleanup___redArg(v___x_82_);
v___x_85_ = l_Lean_Expr_isApp(v___x_84_);
if (v___x_85_ == 0)
{
lean_dec_ref(v___x_84_);
lean_dec_ref(v___x_82_);
lean_dec_ref(v___x_80_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v_arg_86_; lean_object* v_arg_87_; lean_object* v_arg_88_; lean_object* v_arg_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v_arg_86_ = lean_ctor_get(v___x_78_, 1);
lean_inc_ref(v_arg_86_);
lean_dec_ref(v___x_78_);
v_arg_87_ = lean_ctor_get(v___x_80_, 1);
lean_inc_ref(v_arg_87_);
lean_dec_ref(v___x_80_);
v_arg_88_ = lean_ctor_get(v___x_82_, 1);
lean_inc_ref(v_arg_88_);
lean_dec_ref(v___x_82_);
v_arg_89_ = lean_ctor_get(v___x_84_, 1);
lean_inc_ref(v_arg_89_);
v___x_90_ = l_Lean_Expr_appFnCleanup___redArg(v___x_84_);
lean_dec_ref(v___x_84_);
v___x_91_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__1));
v___x_92_ = l_Lean_Expr_isConstOf(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
uint8_t v___x_93_; 
v___x_93_ = l_Lean_Expr_isApp(v___x_90_);
if (v___x_93_ == 0)
{
lean_dec_ref(v___x_90_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v_arg_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_arg_94_ = lean_ctor_get(v___x_90_, 1);
lean_inc_ref(v_arg_94_);
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_96_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__4));
v___x_97_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__6));
v___x_99_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__7));
v___x_101_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__8));
v___x_103_ = l_Lean_Expr_isConstOf(v___x_95_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec_ref(v___x_95_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_105_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_107_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
lean_inc_ref(v_arg_89_);
v___x_107_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_106_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_171_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_171_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_171_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_171_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
uint8_t v___x_112_; 
v___x_112_ = lean_unbox(v_a_108_);
lean_dec(v_a_108_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
lean_del_object(v___x_110_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_113_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
lean_inc_ref(v_arg_89_);
v___x_115_ = l_Lean_mkNot(v_arg_89_);
v___x_116_ = l_Lean_Meta_isExprDefEq(v___x_115_, v_a_114_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_138_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_138_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_138_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_138_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; 
v___x_121_ = lean_unbox(v_a_117_);
lean_dec(v_a_117_);
if (v___x_121_ == 0)
{
lean_del_object(v___x_119_);
lean_dec(v___x_104_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
lean_dec_ref(v_e_65_);
v___x_122_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__10));
v___x_123_ = l_Lean_mkConst(v___x_122_, v___x_104_);
v___x_124_ = lean_unsigned_to_nat(6u);
v___x_125_ = lean_mk_empty_array_with_capacity(v___x_124_);
v___x_126_ = lean_array_push(v___x_125_, v_arg_89_);
v___x_127_ = lean_array_push(v___x_126_, v_arg_88_);
v___x_128_ = lean_array_push(v___x_127_, v_hc_64_);
v___x_129_ = lean_array_push(v___x_128_, v_arg_94_);
v___x_130_ = lean_array_push(v___x_129_, v_arg_87_);
lean_inc_ref(v_arg_86_);
v___x_131_ = lean_array_push(v___x_130_, v_arg_86_);
v___x_132_ = l_Lean_mkAppN(v___x_123_, v___x_131_);
lean_dec_ref(v___x_131_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_134_, 0, v_arg_86_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
lean_ctor_set_uint8(v___x_134_, sizeof(void*)*2, v___x_103_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_134_);
v___x_136_ = v___x_119_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v___x_104_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_139_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_116_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_116_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec(v___x_104_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_147_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_113_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_113_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
lean_dec_ref(v_e_65_);
v___x_155_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__12));
v___x_156_ = l_Lean_mkConst(v___x_155_, v___x_104_);
v___x_157_ = lean_unsigned_to_nat(6u);
v___x_158_ = lean_mk_empty_array_with_capacity(v___x_157_);
v___x_159_ = lean_array_push(v___x_158_, v_arg_89_);
v___x_160_ = lean_array_push(v___x_159_, v_arg_88_);
v___x_161_ = lean_array_push(v___x_160_, v_hc_64_);
v___x_162_ = lean_array_push(v___x_161_, v_arg_94_);
lean_inc_ref(v_arg_87_);
v___x_163_ = lean_array_push(v___x_162_, v_arg_87_);
v___x_164_ = lean_array_push(v___x_163_, v_arg_86_);
v___x_165_ = l_Lean_mkAppN(v___x_156_, v___x_164_);
lean_dec_ref(v___x_164_);
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
v___x_167_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_167_, 0, v_arg_87_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*2, v___x_103_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_167_);
v___x_169_ = v___x_110_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec(v___x_104_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_172_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_107_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_107_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
lean_dec(v___x_104_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_180_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_105_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_105_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_189_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_191_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
lean_inc_ref(v_arg_89_);
v___x_191_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_190_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_263_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_263_ == 0)
{
v___x_194_ = v___x_191_;
v_isShared_195_ = v_isSharedCheck_263_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_191_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_263_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
uint8_t v___x_196_; 
v___x_196_ = lean_unbox(v_a_192_);
lean_dec(v_a_192_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_del_object(v___x_194_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_197_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v___x_197_, 1);
lean_inc_ref(v_arg_89_);
v___x_199_ = l_Lean_mkNot(v_arg_89_);
v___x_200_ = l_Lean_Meta_isExprDefEq(v___x_199_, v_a_198_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_226_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_226_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_226_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_226_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
uint8_t v___x_205_; 
v___x_205_ = lean_unbox(v_a_201_);
lean_dec(v_a_201_);
if (v___x_205_ == 0)
{
lean_del_object(v___x_203_);
lean_dec(v___x_188_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
lean_dec_ref(v_e_65_);
v___x_206_ = lean_unsigned_to_nat(1u);
v___x_207_ = lean_mk_empty_array_with_capacity(v___x_206_);
lean_inc_ref(v_hc_64_);
v___x_208_ = lean_array_push(v___x_207_, v_hc_64_);
lean_inc_ref(v_arg_86_);
v___x_209_ = l_Lean_Expr_beta(v_arg_86_, v___x_208_);
v___x_210_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__14));
v___x_211_ = l_Lean_mkConst(v___x_210_, v___x_188_);
v___x_212_ = lean_unsigned_to_nat(6u);
v___x_213_ = lean_mk_empty_array_with_capacity(v___x_212_);
v___x_214_ = lean_array_push(v___x_213_, v_arg_89_);
v___x_215_ = lean_array_push(v___x_214_, v_arg_88_);
v___x_216_ = lean_array_push(v___x_215_, v_hc_64_);
v___x_217_ = lean_array_push(v___x_216_, v_arg_94_);
v___x_218_ = lean_array_push(v___x_217_, v_arg_87_);
v___x_219_ = lean_array_push(v___x_218_, v_arg_86_);
v___x_220_ = l_Lean_mkAppN(v___x_211_, v___x_219_);
lean_dec_ref(v___x_219_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
v___x_222_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_222_, 0, v___x_209_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*2, v___x_101_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_222_);
v___x_224_ = v___x_203_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_dec(v___x_188_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_227_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_200_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_200_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec(v___x_188_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_235_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_197_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_197_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec_ref(v_e_65_);
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_mk_empty_array_with_capacity(v___x_243_);
lean_inc_ref(v_hc_64_);
v___x_245_ = lean_array_push(v___x_244_, v_hc_64_);
lean_inc_ref(v_arg_87_);
v___x_246_ = l_Lean_Expr_beta(v_arg_87_, v___x_245_);
v___x_247_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__16));
v___x_248_ = l_Lean_mkConst(v___x_247_, v___x_188_);
v___x_249_ = lean_unsigned_to_nat(6u);
v___x_250_ = lean_mk_empty_array_with_capacity(v___x_249_);
v___x_251_ = lean_array_push(v___x_250_, v_arg_89_);
v___x_252_ = lean_array_push(v___x_251_, v_arg_88_);
v___x_253_ = lean_array_push(v___x_252_, v_hc_64_);
v___x_254_ = lean_array_push(v___x_253_, v_arg_94_);
v___x_255_ = lean_array_push(v___x_254_, v_arg_87_);
v___x_256_ = lean_array_push(v___x_255_, v_arg_86_);
v___x_257_ = l_Lean_mkAppN(v___x_248_, v___x_256_);
lean_dec_ref(v___x_256_);
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_259_, 0, v___x_246_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*2, v___x_101_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_259_);
v___x_261_ = v___x_194_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v___x_188_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_264_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_191_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_191_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec(v___x_188_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_272_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_189_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_189_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_281_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_a_282_; lean_object* v___x_283_; 
v_a_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_a_282_);
lean_dec_ref_known(v___x_281_, 1);
lean_inc_ref(v_arg_89_);
v___x_283_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_282_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_347_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_347_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_347_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_347_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
uint8_t v___x_288_; 
v___x_288_ = lean_unbox(v_a_284_);
lean_dec(v_a_284_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
lean_del_object(v___x_286_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_289_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_289_, 1);
lean_inc_ref(v_arg_89_);
v___x_291_ = l_Lean_mkNot(v_arg_89_);
v___x_292_ = l_Lean_Meta_isExprDefEq(v___x_291_, v_a_290_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_314_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_314_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_314_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_314_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
uint8_t v___x_297_; 
v___x_297_ = lean_unbox(v_a_293_);
lean_dec(v_a_293_);
if (v___x_297_ == 0)
{
lean_del_object(v___x_295_);
lean_dec(v___x_280_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec_ref(v_e_65_);
v___x_298_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__17));
v___x_299_ = l_Lean_mkConst(v___x_298_, v___x_280_);
v___x_300_ = lean_unsigned_to_nat(6u);
v___x_301_ = lean_mk_empty_array_with_capacity(v___x_300_);
v___x_302_ = lean_array_push(v___x_301_, v_arg_89_);
v___x_303_ = lean_array_push(v___x_302_, v_arg_88_);
v___x_304_ = lean_array_push(v___x_303_, v_hc_64_);
v___x_305_ = lean_array_push(v___x_304_, v_arg_94_);
v___x_306_ = lean_array_push(v___x_305_, v_arg_87_);
lean_inc_ref(v_arg_86_);
v___x_307_ = lean_array_push(v___x_306_, v_arg_86_);
v___x_308_ = l_Lean_mkAppN(v___x_299_, v___x_307_);
lean_dec_ref(v___x_307_);
v___x_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_310_, 0, v_arg_86_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
lean_ctor_set_uint8(v___x_310_, sizeof(void*)*2, v___x_99_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_310_);
v___x_312_ = v___x_295_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
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
lean_dec(v___x_280_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_315_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_292_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_292_);
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
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_323_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_289_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_289_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_345_; 
lean_dec_ref(v_e_65_);
v___x_331_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__18));
v___x_332_ = l_Lean_mkConst(v___x_331_, v___x_280_);
v___x_333_ = lean_unsigned_to_nat(6u);
v___x_334_ = lean_mk_empty_array_with_capacity(v___x_333_);
v___x_335_ = lean_array_push(v___x_334_, v_arg_89_);
v___x_336_ = lean_array_push(v___x_335_, v_arg_88_);
v___x_337_ = lean_array_push(v___x_336_, v_hc_64_);
v___x_338_ = lean_array_push(v___x_337_, v_arg_94_);
lean_inc_ref(v_arg_87_);
v___x_339_ = lean_array_push(v___x_338_, v_arg_87_);
v___x_340_ = lean_array_push(v___x_339_, v_arg_86_);
v___x_341_ = l_Lean_mkAppN(v___x_332_, v___x_340_);
lean_dec_ref(v___x_340_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
v___x_343_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_343_, 0, v_arg_87_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*2, v___x_99_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_343_);
v___x_345_ = v___x_286_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
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
lean_dec(v___x_280_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_348_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_283_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_283_);
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
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v___x_280_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_356_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_281_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_281_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = l_Lean_Expr_constLevels_x21(v___x_95_);
lean_dec_ref(v___x_95_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_365_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_367_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_a_366_);
lean_dec_ref_known(v___x_365_, 1);
lean_inc_ref(v_arg_89_);
v___x_367_ = l_Lean_Meta_isExprDefEq(v_arg_89_, v_a_366_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_439_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_439_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_439_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_439_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_unbox(v_a_368_);
lean_dec(v_a_368_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_del_object(v___x_370_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_373_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
lean_inc_ref(v_arg_89_);
v___x_375_ = l_Lean_mkNot(v_arg_89_);
v___x_376_ = l_Lean_Meta_isExprDefEq(v___x_375_, v_a_374_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_402_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_402_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_402_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_402_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
uint8_t v___x_381_; 
v___x_381_ = lean_unbox(v_a_377_);
lean_dec(v_a_377_);
if (v___x_381_ == 0)
{
lean_del_object(v___x_379_);
lean_dec(v___x_364_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
lean_dec_ref(v_e_65_);
v___x_382_ = lean_unsigned_to_nat(1u);
v___x_383_ = lean_mk_empty_array_with_capacity(v___x_382_);
lean_inc_ref(v_hc_64_);
v___x_384_ = lean_array_push(v___x_383_, v_hc_64_);
lean_inc_ref(v_arg_86_);
v___x_385_ = l_Lean_Expr_beta(v_arg_86_, v___x_384_);
v___x_386_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__19));
v___x_387_ = l_Lean_mkConst(v___x_386_, v___x_364_);
v___x_388_ = lean_unsigned_to_nat(6u);
v___x_389_ = lean_mk_empty_array_with_capacity(v___x_388_);
v___x_390_ = lean_array_push(v___x_389_, v_arg_89_);
v___x_391_ = lean_array_push(v___x_390_, v_arg_88_);
v___x_392_ = lean_array_push(v___x_391_, v_hc_64_);
v___x_393_ = lean_array_push(v___x_392_, v_arg_94_);
v___x_394_ = lean_array_push(v___x_393_, v_arg_87_);
v___x_395_ = lean_array_push(v___x_394_, v_arg_86_);
v___x_396_ = l_Lean_mkAppN(v___x_387_, v___x_395_);
lean_dec_ref(v___x_395_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
v___x_398_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_398_, 0, v___x_385_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*2, v___x_97_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_398_);
v___x_400_ = v___x_379_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec(v___x_364_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_403_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_376_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_376_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_dec(v___x_364_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_411_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_373_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_373_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
lean_dec_ref(v_e_65_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_419_);
lean_inc_ref(v_hc_64_);
v___x_421_ = lean_array_push(v___x_420_, v_hc_64_);
lean_inc_ref(v_arg_87_);
v___x_422_ = l_Lean_Expr_beta(v_arg_87_, v___x_421_);
v___x_423_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__20));
v___x_424_ = l_Lean_mkConst(v___x_423_, v___x_364_);
v___x_425_ = lean_unsigned_to_nat(6u);
v___x_426_ = lean_mk_empty_array_with_capacity(v___x_425_);
v___x_427_ = lean_array_push(v___x_426_, v_arg_89_);
v___x_428_ = lean_array_push(v___x_427_, v_arg_88_);
v___x_429_ = lean_array_push(v___x_428_, v_hc_64_);
v___x_430_ = lean_array_push(v___x_429_, v_arg_94_);
v___x_431_ = lean_array_push(v___x_430_, v_arg_87_);
v___x_432_ = lean_array_push(v___x_431_, v_arg_86_);
v___x_433_ = l_Lean_mkAppN(v___x_424_, v___x_432_);
lean_dec_ref(v___x_432_);
v___x_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
v___x_435_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_435_, 0, v___x_422_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
lean_ctor_set_uint8(v___x_435_, sizeof(void*)*2, v___x_97_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_435_);
v___x_437_ = v___x_370_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_435_);
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
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec(v___x_364_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_440_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_367_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_367_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec(v___x_364_);
lean_dec_ref(v_arg_94_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_448_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_365_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_365_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = l_Lean_Expr_constLevels_x21(v___x_90_);
lean_dec_ref(v___x_90_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_457_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref_known(v___x_457_, 1);
v___x_459_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__24, &l_Lean_Meta_rwIfWith___closed__24_once, _init_l_Lean_Meta_rwIfWith___closed__24);
lean_inc_ref(v_arg_88_);
v___x_460_ = l_Lean_Meta_mkEq(v_arg_88_, v___x_459_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = l_Lean_Meta_isExprDefEq(v_a_458_, v_a_461_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_534_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_534_ == 0)
{
v___x_465_ = v___x_462_;
v_isShared_466_ = v_isSharedCheck_534_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_534_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
uint8_t v___x_467_; 
v___x_467_ = lean_unbox(v_a_463_);
lean_dec(v_a_463_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; 
lean_del_object(v___x_465_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc_ref(v_hc_64_);
v___x_468_ = lean_infer_type(v_hc_64_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_a_469_);
lean_dec_ref_known(v___x_468_, 1);
v___x_470_ = lean_obj_once(&l_Lean_Meta_rwIfWith___closed__27, &l_Lean_Meta_rwIfWith___closed__27_once, _init_l_Lean_Meta_rwIfWith___closed__27);
lean_inc_ref(v_arg_88_);
v___x_471_ = l_Lean_Meta_mkEq(v_arg_88_, v___x_470_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = l_Lean_Meta_isExprDefEq(v_a_469_, v_a_472_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_494_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_494_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_494_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_494_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
uint8_t v___x_478_; 
v___x_478_ = lean_unbox(v_a_474_);
lean_dec(v_a_474_);
if (v___x_478_ == 0)
{
lean_del_object(v___x_476_);
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_hc_64_);
goto v___jp_71_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
lean_dec_ref(v_e_65_);
v___x_479_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__29));
v___x_480_ = l_Lean_mkConst(v___x_479_, v___x_456_);
v___x_481_ = lean_unsigned_to_nat(5u);
v___x_482_ = lean_mk_empty_array_with_capacity(v___x_481_);
v___x_483_ = lean_array_push(v___x_482_, v_arg_89_);
v___x_484_ = lean_array_push(v___x_483_, v_arg_88_);
v___x_485_ = lean_array_push(v___x_484_, v_arg_87_);
lean_inc_ref(v_arg_86_);
v___x_486_ = lean_array_push(v___x_485_, v_arg_86_);
v___x_487_ = lean_array_push(v___x_486_, v_hc_64_);
v___x_488_ = l_Lean_mkAppN(v___x_480_, v___x_487_);
lean_dec_ref(v___x_487_);
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_490_, 0, v_arg_86_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
lean_ctor_set_uint8(v___x_490_, sizeof(void*)*2, v___x_92_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_490_);
v___x_492_ = v___x_476_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_495_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_473_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_473_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_a_469_);
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_503_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_471_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_471_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_511_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_468_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_468_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
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
else
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
lean_dec_ref(v_e_65_);
v___x_519_ = ((lean_object*)(l_Lean_Meta_rwIfWith___closed__31));
v___x_520_ = l_Lean_mkConst(v___x_519_, v___x_456_);
v___x_521_ = lean_unsigned_to_nat(5u);
v___x_522_ = lean_mk_empty_array_with_capacity(v___x_521_);
v___x_523_ = lean_array_push(v___x_522_, v_arg_89_);
v___x_524_ = lean_array_push(v___x_523_, v_arg_88_);
lean_inc_ref(v_arg_87_);
v___x_525_ = lean_array_push(v___x_524_, v_arg_87_);
v___x_526_ = lean_array_push(v___x_525_, v_arg_86_);
v___x_527_ = lean_array_push(v___x_526_, v_hc_64_);
v___x_528_ = l_Lean_mkAppN(v___x_520_, v___x_527_);
lean_dec_ref(v___x_527_);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
v___x_530_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_530_, 0, v_arg_87_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
lean_ctor_set_uint8(v___x_530_, sizeof(void*)*2, v___x_92_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 0, v___x_530_);
v___x_532_ = v___x_465_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_535_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_462_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_462_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec(v_a_458_);
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_543_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_460_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_460_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_dec(v___x_456_);
lean_dec_ref(v_arg_89_);
lean_dec_ref(v_arg_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_551_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_457_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_457_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
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
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_dec_ref(v_e_65_);
lean_dec_ref(v_hc_64_);
v_a_559_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_76_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_76_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
v___jp_71_:
{
lean_object* v___x_72_; uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = lean_box(0);
v___x_73_ = 1;
v___x_74_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_74_, 0, v_e_65_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set_uint8(v___x_74_, sizeof(void*)*2, v___x_73_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwIfWith___boxed(lean_object* v_hc_567_, lean_object* v_e_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Meta_rwIfWith(v_hc_567_, v_e_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(lean_object* v_e_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; lean_object* v_env_579_; uint8_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_578_ = lean_st_ref_get(v___y_576_);
v_env_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc_ref(v_env_579_);
lean_dec(v___x_578_);
v___x_580_ = l_Lean_Meta_isMatcherAppCore(v_env_579_, v_e_575_);
v___x_581_ = lean_box(v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg___boxed(lean_object* v_e_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v_e_583_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(lean_object* v_e_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_587_, v___y_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___boxed(lean_object* v_e_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2(v_e_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec_ref(v_e_594_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(lean_object* v_e_601_, lean_object* v___y_602_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = l_Lean_Expr_hasMVar(v_e_601_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v_e_601_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; lean_object* v_mctx_607_; lean_object* v___x_608_; lean_object* v_fst_609_; lean_object* v_snd_610_; lean_object* v___x_611_; lean_object* v_cache_612_; lean_object* v_zetaDeltaFVarIds_613_; lean_object* v_postponed_614_; lean_object* v_diag_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_624_; 
v___x_606_ = lean_st_ref_get(v___y_602_);
v_mctx_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc_ref(v_mctx_607_);
lean_dec(v___x_606_);
v___x_608_ = l_Lean_instantiateMVarsCore(v_mctx_607_, v_e_601_);
v_fst_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_fst_609_);
v_snd_610_ = lean_ctor_get(v___x_608_, 1);
lean_inc(v_snd_610_);
lean_dec_ref(v___x_608_);
v___x_611_ = lean_st_ref_take(v___y_602_);
v_cache_612_ = lean_ctor_get(v___x_611_, 1);
v_zetaDeltaFVarIds_613_ = lean_ctor_get(v___x_611_, 2);
v_postponed_614_ = lean_ctor_get(v___x_611_, 3);
v_diag_615_ = lean_ctor_get(v___x_611_, 4);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v___x_611_, 0);
lean_dec(v_unused_625_);
v___x_617_ = v___x_611_;
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_diag_615_);
lean_inc(v_postponed_614_);
lean_inc(v_zetaDeltaFVarIds_613_);
lean_inc(v_cache_612_);
lean_dec(v___x_611_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v_snd_610_);
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_snd_610_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_cache_612_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_zetaDeltaFVarIds_613_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v_postponed_614_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v_diag_615_);
v___x_620_ = v_reuseFailAlloc_623_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_st_ref_put(v___y_602_, v___x_620_);
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v_fst_609_);
return v___x_622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg___boxed(lean_object* v_e_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_626_, v___y_627_);
lean_dec(v___y_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(lean_object* v_e_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v_e_630_, v___y_632_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___boxed(lean_object* v_e_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5(v_e_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
return v_res_643_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_644_ = lean_unsigned_to_nat(32u);
v___x_645_ = lean_mk_empty_array_with_capacity(v___x_644_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1(void){
_start:
{
size_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_647_ = ((size_t)5ULL);
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_unsigned_to_nat(32u);
v___x_650_ = lean_mk_empty_array_with_capacity(v___x_649_);
v___x_651_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__0);
v___x_652_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___x_650_);
lean_ctor_set(v___x_652_, 2, v___x_648_);
lean_ctor_set(v___x_652_, 3, v___x_648_);
lean_ctor_set_usize(v___x_652_, 4, v___x_647_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_traceState_656_; lean_object* v_traces_657_; lean_object* v___x_658_; lean_object* v_traceState_659_; lean_object* v_env_660_; lean_object* v_nextMacroScope_661_; lean_object* v_ngen_662_; lean_object* v_auxDeclNGen_663_; lean_object* v_cache_664_; lean_object* v_recordedDeps_665_; lean_object* v_messages_666_; lean_object* v_infoState_667_; lean_object* v_snapshotTasks_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_687_; 
v___x_655_ = lean_st_ref_get(v___y_653_);
v_traceState_656_ = lean_ctor_get(v___x_655_, 4);
lean_inc_ref(v_traceState_656_);
lean_dec(v___x_655_);
v_traces_657_ = lean_ctor_get(v_traceState_656_, 0);
lean_inc_ref(v_traces_657_);
lean_dec_ref(v_traceState_656_);
v___x_658_ = lean_st_ref_take(v___y_653_);
v_traceState_659_ = lean_ctor_get(v___x_658_, 4);
v_env_660_ = lean_ctor_get(v___x_658_, 0);
v_nextMacroScope_661_ = lean_ctor_get(v___x_658_, 1);
v_ngen_662_ = lean_ctor_get(v___x_658_, 2);
v_auxDeclNGen_663_ = lean_ctor_get(v___x_658_, 3);
v_cache_664_ = lean_ctor_get(v___x_658_, 5);
v_recordedDeps_665_ = lean_ctor_get(v___x_658_, 6);
v_messages_666_ = lean_ctor_get(v___x_658_, 7);
v_infoState_667_ = lean_ctor_get(v___x_658_, 8);
v_snapshotTasks_668_ = lean_ctor_get(v___x_658_, 9);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_687_ == 0)
{
v___x_670_ = v___x_658_;
v_isShared_671_ = v_isSharedCheck_687_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_snapshotTasks_668_);
lean_inc(v_infoState_667_);
lean_inc(v_messages_666_);
lean_inc(v_recordedDeps_665_);
lean_inc(v_cache_664_);
lean_inc(v_traceState_659_);
lean_inc(v_auxDeclNGen_663_);
lean_inc(v_ngen_662_);
lean_inc(v_nextMacroScope_661_);
lean_inc(v_env_660_);
lean_dec(v___x_658_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_687_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
uint64_t v_tid_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_685_; 
v_tid_672_ = lean_ctor_get_uint64(v_traceState_659_, sizeof(void*)*1);
v_isSharedCheck_685_ = !lean_is_exclusive(v_traceState_659_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v_traceState_659_, 0);
lean_dec(v_unused_686_);
v___x_674_ = v_traceState_659_;
v_isShared_675_ = v_isSharedCheck_685_;
goto v_resetjp_673_;
}
else
{
lean_dec(v_traceState_659_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_685_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_676_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___closed__1);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_676_);
v___x_678_ = v___x_674_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_676_);
lean_ctor_set_uint64(v_reuseFailAlloc_684_, sizeof(void*)*1, v_tid_672_);
v___x_678_ = v_reuseFailAlloc_684_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_680_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 4, v___x_678_);
v___x_680_ = v___x_670_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_env_660_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_nextMacroScope_661_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_ngen_662_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_auxDeclNGen_663_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_683_, 5, v_cache_664_);
lean_ctor_set(v_reuseFailAlloc_683_, 6, v_recordedDeps_665_);
lean_ctor_set(v_reuseFailAlloc_683_, 7, v_messages_666_);
lean_ctor_set(v_reuseFailAlloc_683_, 8, v_infoState_667_);
lean_ctor_set(v_reuseFailAlloc_683_, 9, v_snapshotTasks_668_);
v___x_680_ = v_reuseFailAlloc_683_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_st_ref_put(v___y_653_, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v_traces_657_);
return v___x_682_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg___boxed(lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_688_);
lean_dec(v___y_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v___y_694_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___boxed(lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10(v___y_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
return v_res_702_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(lean_object* v_opts_703_, lean_object* v_opt_704_){
_start:
{
lean_object* v_name_705_; lean_object* v_defValue_706_; lean_object* v_map_707_; lean_object* v___x_708_; 
v_name_705_ = lean_ctor_get(v_opt_704_, 0);
v_defValue_706_ = lean_ctor_get(v_opt_704_, 1);
v_map_707_ = lean_ctor_get(v_opts_703_, 0);
v___x_708_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_707_, v_name_705_);
if (lean_obj_tag(v___x_708_) == 0)
{
uint8_t v___x_709_; 
v___x_709_ = lean_unbox(v_defValue_706_);
return v___x_709_;
}
else
{
lean_object* v_val_710_; 
v_val_710_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_708_, 1);
if (lean_obj_tag(v_val_710_) == 1)
{
uint8_t v_v_711_; 
v_v_711_ = lean_ctor_get_uint8(v_val_710_, 0);
lean_dec_ref_known(v_val_710_, 0);
return v_v_711_;
}
else
{
uint8_t v___x_712_; 
lean_dec(v_val_710_);
v___x_712_ = lean_unbox(v_defValue_706_);
return v___x_712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11___boxed(lean_object* v_opts_713_, lean_object* v_opt_714_){
_start:
{
uint8_t v_res_715_; lean_object* v_r_716_; 
v_res_715_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_713_, v_opt_714_);
lean_dec_ref(v_opt_714_);
lean_dec_ref(v_opts_713_);
v_r_716_ = lean_box(v_res_715_);
return v_r_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0(lean_object* v_e_717_, uint8_t v___x_718_, lean_object* v_____r_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_725_ = lean_box(0);
v___x_726_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_726_, 0, v_e_717_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*2, v___x_718_);
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__0___boxed(lean_object* v_e_729_, lean_object* v___x_730_, lean_object* v_____r_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
uint8_t v___x_85228__boxed_737_; lean_object* v_res_738_; 
v___x_85228__boxed_737_ = lean_unbox(v___x_730_);
v_res_738_ = l_Lean_Meta_rwMatcher___lam__0(v_e_729_, v___x_85228__boxed_737_, v_____r_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_738_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__1(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__0));
v___x_741_ = l_Lean_stringToMessageData(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__1___closed__3(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__1___closed__2));
v___x_744_ = l_Lean_stringToMessageData(v___x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1(lean_object* v___x_745_, uint8_t v___x_746_, lean_object* v_e_747_, lean_object* v_x_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_754_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__1, &l_Lean_Meta_rwMatcher___lam__1___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__1);
v___x_755_ = l_Lean_MessageData_ofConstName(v___x_745_, v___x_746_);
v___x_756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__1___closed__3, &l_Lean_Meta_rwMatcher___lam__1___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__1___closed__3);
v___x_758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_756_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = l_Lean_indentExpr(v_e_747_);
v___x_760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__1___boxed(lean_object* v___x_762_, lean_object* v___x_763_, lean_object* v_e_764_, lean_object* v_x_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
uint8_t v___x_85270__boxed_771_; lean_object* v_res_772_; 
v___x_85270__boxed_771_ = lean_unbox(v___x_763_);
v_res_772_ = l_Lean_Meta_rwMatcher___lam__1(v___x_762_, v___x_85270__boxed_771_, v_e_764_, v_x_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec_ref(v_x_765_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(lean_object* v_msgData_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___x_779_; lean_object* v_env_780_; uint8_t v___x_781_; lean_object* v_env_782_; lean_object* v___x_783_; lean_object* v_toCold_784_; lean_object* v_mctx_785_; lean_object* v_lctx_786_; lean_object* v_options_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_779_ = lean_st_ref_get(v___y_777_);
v_env_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc_ref(v_env_780_);
lean_dec(v___x_779_);
v___x_781_ = 0;
v_env_782_ = l_Lean_Environment_setRecordingDeps(v_env_780_, v___x_781_);
v___x_783_ = lean_st_ref_get(v___y_775_);
v_toCold_784_ = lean_ctor_get(v___y_776_, 0);
v_mctx_785_ = lean_ctor_get(v___x_783_, 0);
lean_inc_ref(v_mctx_785_);
lean_dec(v___x_783_);
v_lctx_786_ = lean_ctor_get(v___y_774_, 2);
v_options_787_ = lean_ctor_get(v_toCold_784_, 2);
lean_inc_ref(v_options_787_);
lean_inc_ref(v_lctx_786_);
v___x_788_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_788_, 0, v_env_782_);
lean_ctor_set(v___x_788_, 1, v_mctx_785_);
lean_ctor_set(v___x_788_, 2, v_lctx_786_);
lean_ctor_set(v___x_788_, 3, v_options_787_);
v___x_789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
lean_ctor_set(v___x_789_, 1, v_msgData_773_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4___boxed(lean_object* v_msgData_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msgData_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(lean_object* v_msg_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_ref_804_; lean_object* v___x_805_; lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_814_; 
v_ref_804_ = lean_ctor_get(v___y_801_, 2);
v___x_805_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
v_a_806_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_814_ == 0)
{
v___x_808_ = v___x_805_;
v_isShared_809_ = v_isSharedCheck_814_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_814_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___x_812_; 
lean_inc(v_ref_804_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v_ref_804_);
lean_ctor_set(v___x_810_, 1, v_a_806_);
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 1);
lean_ctor_set(v___x_808_, 0, v___x_810_);
v___x_812_ = v___x_808_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg___boxed(lean_object* v_msg_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_821_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(lean_object* v_keys_822_, lean_object* v_i_823_, lean_object* v_k_824_){
_start:
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_array_get_size(v_keys_822_);
v___x_826_ = lean_nat_dec_lt(v_i_823_, v___x_825_);
if (v___x_826_ == 0)
{
lean_dec(v_i_823_);
return v___x_826_;
}
else
{
lean_object* v_k_x27_827_; uint8_t v___x_828_; 
v_k_x27_827_ = lean_array_fget_borrowed(v_keys_822_, v_i_823_);
v___x_828_ = l_Lean_instBEqMVarId_beq(v_k_824_, v_k_x27_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(1u);
v___x_830_ = lean_nat_add(v_i_823_, v___x_829_);
lean_dec(v_i_823_);
v_i_823_ = v___x_830_;
goto _start;
}
else
{
lean_dec(v_i_823_);
return v___x_826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg___boxed(lean_object* v_keys_832_, lean_object* v_i_833_, lean_object* v_k_834_){
_start:
{
uint8_t v_res_835_; lean_object* v_r_836_; 
v_res_835_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_832_, v_i_833_, v_k_834_);
lean_dec(v_k_834_);
lean_dec_ref(v_keys_832_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(lean_object* v_x_837_, size_t v_x_838_, lean_object* v_x_839_){
_start:
{
if (lean_obj_tag(v_x_837_) == 0)
{
lean_object* v_es_840_; lean_object* v___x_841_; size_t v___x_842_; size_t v___x_843_; lean_object* v_j_844_; lean_object* v___x_845_; 
v_es_840_ = lean_ctor_get(v_x_837_, 0);
v___x_841_ = lean_box(2);
v___x_842_ = ((size_t)31ULL);
v___x_843_ = lean_usize_land(v_x_838_, v___x_842_);
v_j_844_ = lean_usize_to_nat(v___x_843_);
v___x_845_ = lean_array_get_borrowed(v___x_841_, v_es_840_, v_j_844_);
lean_dec(v_j_844_);
switch(lean_obj_tag(v___x_845_))
{
case 0:
{
lean_object* v_key_846_; uint8_t v___x_847_; 
v_key_846_ = lean_ctor_get(v___x_845_, 0);
v___x_847_ = l_Lean_instBEqMVarId_beq(v_x_839_, v_key_846_);
return v___x_847_;
}
case 1:
{
lean_object* v_node_848_; size_t v___x_849_; size_t v___x_850_; 
v_node_848_ = lean_ctor_get(v___x_845_, 0);
v___x_849_ = ((size_t)5ULL);
v___x_850_ = lean_usize_shift_right(v_x_838_, v___x_849_);
v_x_837_ = v_node_848_;
v_x_838_ = v___x_850_;
goto _start;
}
default: 
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
}
else
{
lean_object* v_ks_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_ks_853_ = lean_ctor_get(v_x_837_, 0);
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_ks_853_, v___x_854_, v_x_839_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_x_856_, lean_object* v_x_857_, lean_object* v_x_858_){
_start:
{
size_t v_x_85391__boxed_859_; uint8_t v_res_860_; lean_object* v_r_861_; 
v_x_85391__boxed_859_ = lean_unbox_usize(v_x_857_);
lean_dec(v_x_857_);
v_res_860_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_856_, v_x_85391__boxed_859_, v_x_858_);
lean_dec(v_x_858_);
lean_dec_ref(v_x_856_);
v_r_861_ = lean_box(v_res_860_);
return v_r_861_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
uint64_t v___x_864_; size_t v___x_865_; uint8_t v___x_866_; 
v___x_864_ = l_Lean_instHashableMVarId_hash(v_x_863_);
v___x_865_ = lean_uint64_to_usize(v___x_864_);
v___x_866_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_862_, v___x_865_, v_x_863_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg___boxed(lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
uint8_t v_res_869_; lean_object* v_r_870_; 
v_res_869_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_867_, v_x_868_);
lean_dec(v_x_868_);
lean_dec_ref(v_x_867_);
v_r_870_ = lean_box(v_res_869_);
return v_r_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(lean_object* v_mvarId_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_874_; lean_object* v_mctx_875_; lean_object* v_eAssignment_876_; uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_874_ = lean_st_ref_get(v___y_872_);
v_mctx_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc_ref(v_mctx_875_);
lean_dec(v___x_874_);
v_eAssignment_876_ = lean_ctor_get(v_mctx_875_, 8);
lean_inc_ref(v_eAssignment_876_);
lean_dec_ref(v_mctx_875_);
v___x_877_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_eAssignment_876_, v_mvarId_871_);
lean_dec_ref(v_eAssignment_876_);
v___x_878_ = lean_box(v___x_877_);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg___boxed(lean_object* v_mvarId_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec(v_mvarId_880_);
return v_res_883_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__0));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__2));
v___x_889_ = l_Lean_stringToMessageData(v___x_888_);
return v___x_889_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__4));
v___x_892_ = l_Lean_stringToMessageData(v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(lean_object* v_as_893_, size_t v_sz_894_, size_t v_i_895_, lean_object* v_b_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_a_903_; uint8_t v___x_907_; 
v___x_907_ = lean_usize_dec_lt(v_i_895_, v_sz_894_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
v___x_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_908_, 0, v_b_896_);
return v___x_908_;
}
else
{
lean_object* v___x_909_; lean_object* v_a_910_; lean_object* v___x_911_; 
v___x_909_ = lean_box(0);
v_a_910_ = lean_array_uget_borrowed(v_as_893_, v_i_895_);
v___x_911_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_a_910_, v___y_898_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; uint8_t v___x_913_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = lean_unbox(v_a_912_);
lean_dec(v_a_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; 
lean_inc(v_a_910_);
v___x_914_ = l_Lean_MVarId_getType(v_a_910_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; uint8_t v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_a_915_);
if (v___x_916_ == 0)
{
uint8_t v___x_917_; 
v___x_917_ = l_Lean_Expr_isEq(v_a_915_);
if (v___x_917_ == 0)
{
uint8_t v___x_918_; 
v___x_918_ = l_Lean_Expr_isHEq(v_a_915_);
lean_dec(v_a_915_);
if (v___x_918_ == 0)
{
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v___x_919_; 
v___x_919_ = l_Lean_Meta_saveState___redArg(v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_921_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_919_, 1);
lean_inc(v_a_910_);
v___x_921_ = l_Lean_MVarId_assumption(v_a_910_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref_known(v___x_921_, 1);
lean_dec(v_a_920_);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_a_922_; uint8_t v___x_923_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v___x_923_ = l_Lean_Exception_isInterrupt(v_a_922_);
if (v___x_923_ == 0)
{
uint8_t v___x_924_; 
lean_inc(v_a_922_);
v___x_924_ = l_Lean_Exception_isRuntime(v_a_922_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; 
lean_dec_ref_known(v___x_921_, 1);
v___x_925_ = l_Lean_Meta_SavedState_restore___redArg(v_a_920_, v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_926_; 
lean_dec_ref_known(v___x_925_, 1);
v___x_926_ = l_Lean_Meta_saveState___redArg(v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_928_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
lean_inc(v_a_910_);
v___x_928_ = l_Lean_MVarId_hrefl(v_a_910_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_dec_ref_known(v___x_928_, 1);
lean_dec(v_a_927_);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_a_929_; uint8_t v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
v___x_930_ = l_Lean_Exception_isInterrupt(v_a_929_);
if (v___x_930_ == 0)
{
uint8_t v___x_931_; 
lean_inc(v_a_929_);
v___x_931_ = l_Lean_Exception_isRuntime(v_a_929_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
lean_dec_ref_known(v___x_928_, 1);
v___x_932_ = l_Lean_Meta_SavedState_restore___redArg(v_a_927_, v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_944_; 
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; 
v_unused_945_ = lean_ctor_get(v___x_932_, 0);
lean_dec(v_unused_945_);
v___x_934_ = v___x_932_;
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
else
{
lean_dec(v___x_932_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_910_);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 1);
lean_ctor_set(v___x_934_, 0, v_a_910_);
v___x_938_ = v___x_934_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_910_);
v___x_938_ = v_reuseFailAlloc_943_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_936_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_941_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_dec_ref_known(v___x_942_, 1);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
return v___x_942_;
}
}
}
}
else
{
return v___x_932_;
}
}
else
{
lean_dec(v_a_927_);
return v___x_928_;
}
}
else
{
lean_dec(v_a_927_);
return v___x_928_;
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_a_946_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_926_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_926_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
return v___x_925_;
}
}
else
{
lean_dec(v_a_920_);
return v___x_921_;
}
}
else
{
lean_dec(v_a_920_);
return v___x_921_;
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_919_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_919_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
else
{
lean_object* v___x_962_; 
lean_dec(v_a_915_);
v___x_962_ = l_Lean_Meta_saveState___redArg(v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_964_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_962_, 1);
lean_inc(v_a_910_);
v___x_964_ = l_Lean_MVarId_assumption(v_a_910_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_dec_ref_known(v___x_964_, 1);
lean_dec(v_a_963_);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_a_965_; uint8_t v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v___x_966_ = l_Lean_Exception_isInterrupt(v_a_965_);
if (v___x_966_ == 0)
{
uint8_t v___x_967_; 
lean_inc(v_a_965_);
v___x_967_ = l_Lean_Exception_isRuntime(v_a_965_);
if (v___x_967_ == 0)
{
lean_object* v___x_968_; 
lean_dec_ref_known(v___x_964_, 1);
v___x_968_ = l_Lean_Meta_SavedState_restore___redArg(v_a_963_, v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_969_; 
lean_dec_ref_known(v___x_968_, 1);
v___x_969_ = l_Lean_Meta_saveState___redArg(v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
lean_inc(v_a_910_);
v___x_971_ = l_Lean_MVarId_refl(v_a_910_, v___x_907_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_dec_ref_known(v___x_971_, 1);
lean_dec(v_a_970_);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_a_972_; uint8_t v___x_973_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v___x_973_ = l_Lean_Exception_isInterrupt(v_a_972_);
if (v___x_973_ == 0)
{
uint8_t v___x_974_; 
lean_inc(v_a_972_);
v___x_974_ = l_Lean_Exception_isRuntime(v_a_972_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; 
lean_dec_ref_known(v___x_971_, 1);
v___x_975_ = l_Lean_Meta_SavedState_restore___redArg(v_a_970_, v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_987_; 
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_987_ == 0)
{
lean_object* v_unused_988_; 
v_unused_988_ = lean_ctor_get(v___x_975_, 0);
lean_dec(v_unused_988_);
v___x_977_ = v___x_975_;
v_isShared_978_ = v_isSharedCheck_987_;
goto v_resetjp_976_;
}
else
{
lean_dec(v___x_975_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_987_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_979_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__1);
lean_inc(v_a_910_);
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 1);
lean_ctor_set(v___x_977_, 0, v_a_910_);
v___x_981_ = v___x_977_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_910_);
v___x_981_ = v_reuseFailAlloc_986_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_979_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_984_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_dec_ref_known(v___x_985_, 1);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
return v___x_985_;
}
}
}
}
else
{
return v___x_975_;
}
}
else
{
lean_dec(v_a_970_);
return v___x_971_;
}
}
else
{
lean_dec(v_a_970_);
return v___x_971_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
v_a_989_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_969_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_969_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
else
{
return v___x_968_;
}
}
else
{
lean_dec(v_a_963_);
return v___x_964_;
}
}
else
{
lean_dec(v_a_963_);
return v___x_964_;
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_962_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_962_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
else
{
lean_object* v___x_1005_; 
lean_dec(v_a_915_);
v___x_1005_ = l_Lean_Meta_saveState___redArg(v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1007_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_1005_, 1);
lean_inc(v_a_910_);
v___x_1007_ = l_Lean_MVarId_assumption(v_a_910_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_dec_ref_known(v___x_1007_, 1);
lean_dec(v_a_1006_);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_a_1008_; uint8_t v___x_1009_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v___x_1009_ = l_Lean_Exception_isInterrupt(v_a_1008_);
if (v___x_1009_ == 0)
{
uint8_t v___x_1010_; 
lean_inc(v_a_1008_);
v___x_1010_ = l_Lean_Exception_isRuntime(v_a_1008_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
lean_dec_ref_known(v___x_1007_, 1);
v___x_1011_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1006_, v___y_898_, v___y_900_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1023_; 
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v___x_1011_, 0);
lean_dec(v_unused_1024_);
v___x_1013_ = v___x_1011_;
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
else
{
lean_dec(v___x_1011_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1015_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__5);
lean_inc(v_a_910_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 1);
lean_ctor_set(v___x_1013_, 0, v_a_910_);
v___x_1017_ = v___x_1013_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_910_);
v___x_1017_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1015_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1020_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_dec_ref_known(v___x_1021_, 1);
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
return v___x_1021_;
}
}
}
}
else
{
return v___x_1011_;
}
}
else
{
lean_dec(v_a_1006_);
return v___x_1007_;
}
}
else
{
lean_dec(v_a_1006_);
return v___x_1007_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1005_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1005_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_a_1033_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_914_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_914_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
v_a_903_ = v___x_909_;
goto v___jp_902_;
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_911_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_911_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
v___jp_902_:
{
size_t v___x_904_; size_t v___x_905_; 
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_895_, v___x_904_);
v_i_895_ = v___x_905_;
v_b_896_ = v_a_903_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___boxed(lean_object* v_as_1049_, lean_object* v_sz_1050_, lean_object* v_i_1051_, lean_object* v_b_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
size_t v_sz_boxed_1058_; size_t v_i_boxed_1059_; lean_object* v_res_1060_; 
v_sz_boxed_1058_ = lean_unbox_usize(v_sz_1050_);
lean_dec(v_sz_1050_);
v_i_boxed_1059_ = lean_unbox_usize(v_i_1051_);
lean_dec(v_i_1051_);
v_res_1060_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v_as_1049_, v_sz_boxed_1058_, v_i_boxed_1059_, v_b_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec_ref(v_as_1049_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(lean_object* v_as_1061_, size_t v_i_1062_, size_t v_stop_1063_, lean_object* v_b_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_a_1071_; uint8_t v___x_1075_; 
v___x_1075_ = lean_usize_dec_eq(v_i_1062_, v_stop_1063_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = lean_array_uget_borrowed(v_as_1061_, v_i_1062_);
v___x_1077_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v___x_1076_, v___y_1066_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; uint8_t v___x_1079_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = lean_unbox(v_a_1078_);
lean_dec(v_a_1078_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
lean_inc(v___x_1076_);
v___x_1080_ = lean_array_push(v_b_1064_, v___x_1076_);
v_a_1071_ = v___x_1080_;
goto v___jp_1070_;
}
else
{
v_a_1071_ = v_b_1064_;
goto v___jp_1070_;
}
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
lean_dec_ref(v_b_1064_);
v_a_1081_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v___x_1077_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1077_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
else
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_b_1064_);
return v___x_1089_;
}
v___jp_1070_:
{
size_t v___x_1072_; size_t v___x_1073_; 
v___x_1072_ = ((size_t)1ULL);
v___x_1073_ = lean_usize_add(v_i_1062_, v___x_1072_);
v_i_1062_ = v___x_1073_;
v_b_1064_ = v_a_1071_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9___boxed(lean_object* v_as_1090_, lean_object* v_i_1091_, lean_object* v_stop_1092_, lean_object* v_b_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
size_t v_i_boxed_1099_; size_t v_stop_boxed_1100_; lean_object* v_res_1101_; 
v_i_boxed_1099_ = lean_unbox_usize(v_i_1091_);
lean_dec(v_i_1091_);
v_stop_boxed_1100_ = lean_unbox_usize(v_stop_1092_);
lean_dec(v_stop_1092_);
v_res_1101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v_as_1090_, v_i_boxed_1099_, v_stop_boxed_1100_, v_b_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec_ref(v_as_1090_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(size_t v_sz_1102_, size_t v_i_1103_, lean_object* v_bs_1104_){
_start:
{
uint8_t v___x_1105_; 
v___x_1105_ = lean_usize_dec_lt(v_i_1103_, v_sz_1102_);
if (v___x_1105_ == 0)
{
return v_bs_1104_;
}
else
{
lean_object* v_v_1106_; lean_object* v___x_1107_; lean_object* v_bs_x27_1108_; lean_object* v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; lean_object* v___x_1112_; 
v_v_1106_ = lean_array_uget(v_bs_1104_, v_i_1103_);
v___x_1107_ = lean_unsigned_to_nat(0u);
v_bs_x27_1108_ = lean_array_uset(v_bs_1104_, v_i_1103_, v___x_1107_);
v___x_1109_ = l_Lean_Expr_mvarId_x21(v_v_1106_);
lean_dec(v_v_1106_);
v___x_1110_ = ((size_t)1ULL);
v___x_1111_ = lean_usize_add(v_i_1103_, v___x_1110_);
v___x_1112_ = lean_array_uset(v_bs_x27_1108_, v_i_1103_, v___x_1109_);
v_i_1103_ = v___x_1111_;
v_bs_1104_ = v___x_1112_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4___boxed(lean_object* v_sz_1114_, lean_object* v_i_1115_, lean_object* v_bs_1116_){
_start:
{
size_t v_sz_boxed_1117_; size_t v_i_boxed_1118_; lean_object* v_res_1119_; 
v_sz_boxed_1117_ = lean_unbox_usize(v_sz_1114_);
lean_dec(v_sz_1114_);
v_i_boxed_1118_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_res_1119_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_boxed_1117_, v_i_boxed_1118_, v_bs_1116_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
if (lean_obj_tag(v_a_1120_) == 0)
{
lean_object* v___x_1122_; 
v___x_1122_ = l_List_reverse___redArg(v_a_1121_);
return v___x_1122_;
}
else
{
lean_object* v_head_1123_; lean_object* v_tail_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1133_; 
v_head_1123_ = lean_ctor_get(v_a_1120_, 0);
v_tail_1124_ = lean_ctor_get(v_a_1120_, 1);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_a_1120_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1126_ = v_a_1120_;
v_isShared_1127_ = v_isSharedCheck_1133_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_tail_1124_);
lean_inc(v_head_1123_);
lean_dec(v_a_1120_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1133_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1128_, 0, v_head_1123_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 1, v_a_1121_);
lean_ctor_set(v___x_1126_, 0, v___x_1128_);
v___x_1130_ = v___x_1126_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_a_1121_);
v___x_1130_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
v_a_1120_ = v_tail_1124_;
v_a_1121_ = v___x_1130_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__0));
v___x_1136_ = l_Lean_stringToMessageData(v___x_1135_);
return v___x_1136_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__2));
v___x_1139_ = l_Lean_stringToMessageData(v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__4));
v___x_1142_ = l_Lean_stringToMessageData(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__7(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__6));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__9(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__8));
v___x_1148_ = l_Lean_stringToMessageData(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__11));
v___x_1153_ = l_Lean_stringToMessageData(v___x_1152_);
return v___x_1153_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__14(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__13));
v___x_1156_ = l_Lean_stringToMessageData(v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__16(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__15));
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__22(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__21));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___lam__2___closed__24(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__23));
v___x_1171_ = l_Lean_stringToMessageData(v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2(uint8_t v___x_1172_, lean_object* v___x_1173_, lean_object* v_fst_1174_, lean_object* v___x_1175_, lean_object* v_e_1176_, uint8_t v___x_1177_, lean_object* v_snd_1178_, lean_object* v_____r_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v___y_1186_; lean_object* v_proof_1187_; lean_object* v___x_1191_; lean_object* v___y_1193_; uint8_t v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; uint8_t v___y_1243_; lean_object* v___y_1244_; lean_object* v_a_1245_; size_t v_sz_1268_; size_t v___x_1269_; lean_object* v___x_1270_; lean_object* v___y_1272_; uint8_t v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; uint8_t v_fst_1305_; lean_object* v_fst_1306_; lean_object* v_snd_1307_; lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1191_ = l_Lean_mkAppN(v___x_1173_, v_fst_1174_);
v_sz_1268_ = lean_array_size(v_fst_1174_);
v___x_1269_ = ((size_t)0ULL);
v___x_1270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1268_, v___x_1269_, v_fst_1174_);
v___x_1341_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1342_ = lean_unsigned_to_nat(4u);
v___x_1343_ = l_Lean_Expr_isAppOfArity(v_snd_1178_, v___x_1341_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1344_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1345_ = lean_unsigned_to_nat(3u);
v___x_1346_ = l_Lean_Expr_isAppOfArity(v_snd_1178_, v___x_1344_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
lean_dec_ref(v___x_1270_);
lean_dec_ref(v___x_1191_);
lean_dec_ref(v_e_1176_);
v___x_1347_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1348_ = l_Lean_MessageData_ofConstName(v___x_1175_, v___x_1177_);
v___x_1349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1349_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1351_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1361_ = l_Lean_Expr_appFn_x21(v_snd_1178_);
v___x_1362_ = l_Lean_Expr_appArg_x21(v___x_1361_);
lean_dec_ref(v___x_1361_);
v___x_1363_ = l_Lean_Expr_appArg_x21(v_snd_1178_);
v_fst_1305_ = v___x_1177_;
v_fst_1306_ = v___x_1362_;
v_snd_1307_ = v___x_1363_;
goto v___jp_1304_;
}
}
else
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1364_ = l_Lean_Expr_appFn_x21(v_snd_1178_);
v___x_1365_ = l_Lean_Expr_appFn_x21(v___x_1364_);
lean_dec_ref(v___x_1364_);
v___x_1366_ = l_Lean_Expr_appArg_x21(v___x_1365_);
lean_dec_ref(v___x_1365_);
v___x_1367_ = l_Lean_Expr_appArg_x21(v_snd_1178_);
v_fst_1305_ = v___x_1172_;
v_fst_1306_ = v___x_1366_;
v_snd_1307_ = v___x_1367_;
goto v___jp_1304_;
}
v___jp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_proof_1187_);
v___x_1189_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1189_, 0, v___y_1186_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*2, v___x_1172_);
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
v___jp_1192_:
{
lean_object* v___x_1199_; lean_object* v_a_1200_; lean_object* v___x_1201_; 
v___x_1199_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1193_, v___y_1196_);
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref(v___x_1199_);
v___x_1201_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1191_, v___y_1196_);
if (v___y_1194_ == 0)
{
lean_object* v_a_1202_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref(v___x_1201_);
v___y_1186_ = v_a_1200_;
v_proof_1187_ = v_a_1202_;
goto v___jp_1185_;
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1204_; 
v_a_1203_ = lean_ctor_get(v___x_1201_, 0);
lean_inc_n(v_a_1203_, 2);
lean_dec_ref(v___x_1201_);
v___x_1204_ = l_Lean_Meta_mkEqOfHEq(v_a_1203_, v___x_1172_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; 
lean_dec(v_a_1203_);
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___y_1186_ = v_a_1200_;
v_proof_1187_ = v_a_1205_;
goto v___jp_1185_;
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1237_; 
lean_dec(v_a_1200_);
v_a_1206_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1208_ = v___x_1204_;
v_isShared_1209_ = v_isSharedCheck_1237_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1204_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1237_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
uint8_t v___x_1210_; 
v___x_1210_ = l_Lean_Exception_isInterrupt(v_a_1206_);
if (v___x_1210_ == 0)
{
uint8_t v___x_1211_; 
lean_inc(v_a_1206_);
v___x_1211_ = l_Lean_Exception_isRuntime(v_a_1206_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_del_object(v___x_1208_);
v___x_1212_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1213_ = l_Lean_MessageData_ofExpr(v_a_1203_);
v___x_1214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = l_Lean_Exception_toMessageData(v_a_1206_);
v___x_1218_ = l_Lean_indentD(v___x_1217_);
v___x_1219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1216_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1221_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1222_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
else
{
lean_object* v___x_1232_; 
lean_dec(v_a_1203_);
if (v_isShared_1209_ == 0)
{
v___x_1232_ = v___x_1208_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1206_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
else
{
lean_object* v___x_1235_; 
lean_dec(v_a_1203_);
if (v_isShared_1209_ == 0)
{
v___x_1235_ = v___x_1208_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1206_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
}
v___jp_1238_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1246_ = lean_array_get_size(v_a_1245_);
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = lean_nat_dec_eq(v___x_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
lean_dec_ref(v___y_1242_);
lean_dec_ref(v___x_1191_);
v___x_1249_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1250_ = l_Lean_MessageData_ofConstName(v___x_1175_, v___x_1248_);
v___x_1251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1249_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_array_to_list(v_a_1245_);
v___x_1255_ = lean_box(0);
v___x_1256_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1254_, v___x_1255_);
v___x_1257_ = l_Lean_MessageData_ofList(v___x_1256_);
v___x_1258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1253_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1258_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1244_);
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
else
{
lean_dec_ref(v_a_1245_);
lean_dec(v___x_1175_);
v___y_1193_ = v___y_1242_;
v___y_1194_ = v___y_1243_;
v___y_1195_ = v___y_1239_;
v___y_1196_ = v___y_1240_;
v___y_1197_ = v___y_1241_;
v___y_1198_ = v___y_1244_;
goto v___jp_1192_;
}
}
v___jp_1271_:
{
lean_object* v___x_1278_; size_t v_sz_1279_; lean_object* v___x_1280_; 
v___x_1278_ = lean_box(0);
v_sz_1279_ = lean_array_size(v___x_1270_);
v___x_1280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1270_, v_sz_1279_, v___x_1269_, v___x_1278_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
lean_dec_ref_known(v___x_1280_, 1);
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_array_get_size(v___x_1270_);
v___x_1283_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1284_ = lean_nat_dec_lt(v___x_1281_, v___x_1282_);
if (v___x_1284_ == 0)
{
lean_dec_ref(v___x_1270_);
v___y_1239_ = v___y_1274_;
v___y_1240_ = v___y_1275_;
v___y_1241_ = v___y_1276_;
v___y_1242_ = v___y_1272_;
v___y_1243_ = v___y_1273_;
v___y_1244_ = v___y_1277_;
v_a_1245_ = v___x_1283_;
goto v___jp_1238_;
}
else
{
size_t v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_usize_of_nat(v___x_1282_);
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1270_, v___x_1269_, v___x_1285_, v___x_1283_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
lean_dec_ref(v___x_1270_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___y_1239_ = v___y_1274_;
v___y_1240_ = v___y_1275_;
v___y_1241_ = v___y_1276_;
v___y_1242_ = v___y_1272_;
v___y_1243_ = v___y_1273_;
v___y_1244_ = v___y_1277_;
v_a_1245_ = v_a_1287_;
goto v___jp_1238_;
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___x_1191_);
lean_dec(v___x_1175_);
v_a_1288_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1286_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1286_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___x_1270_);
lean_dec_ref(v___x_1191_);
lean_dec(v___x_1175_);
v_a_1296_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1280_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1280_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
v___jp_1304_:
{
lean_object* v___x_1308_; 
lean_inc_ref(v_fst_1306_);
lean_inc_ref(v_e_1176_);
v___x_1308_ = l_Lean_Meta_isExprDefEq(v_e_1176_, v_fst_1306_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; uint8_t v___x_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v___x_1310_ = lean_unbox(v_a_1309_);
lean_dec(v_a_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v_snd_1307_);
lean_dec_ref(v___x_1270_);
lean_dec_ref(v___x_1191_);
v___x_1311_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1312_ = l_Lean_MessageData_ofExpr(v_fst_1306_);
v___x_1313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = l_Lean_MessageData_ofConstName(v___x_1175_, v___x_1177_);
v___x_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = l_Lean_MessageData_ofExpr(v_e_1176_);
v___x_1321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1323_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_dec_ref(v_fst_1306_);
lean_dec_ref(v_e_1176_);
v___y_1272_ = v_snd_1307_;
v___y_1273_ = v_fst_1305_;
v___y_1274_ = v___y_1180_;
v___y_1275_ = v___y_1181_;
v___y_1276_ = v___y_1182_;
v___y_1277_ = v___y_1183_;
goto v___jp_1271_;
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v_snd_1307_);
lean_dec_ref(v_fst_1306_);
lean_dec_ref(v___x_1270_);
lean_dec_ref(v___x_1191_);
lean_dec_ref(v_e_1176_);
lean_dec(v___x_1175_);
v_a_1333_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1308_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1308_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__2___boxed(lean_object* v___x_1368_, lean_object* v___x_1369_, lean_object* v_fst_1370_, lean_object* v___x_1371_, lean_object* v_e_1372_, lean_object* v___x_1373_, lean_object* v_snd_1374_, lean_object* v_____r_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
uint8_t v___x_85997__boxed_1381_; uint8_t v___x_86001__boxed_1382_; lean_object* v_res_1383_; 
v___x_85997__boxed_1381_ = lean_unbox(v___x_1368_);
v___x_86001__boxed_1382_ = lean_unbox(v___x_1373_);
v_res_1383_ = l_Lean_Meta_rwMatcher___lam__2(v___x_85997__boxed_1381_, v___x_1369_, v_fst_1370_, v___x_1371_, v_e_1372_, v___x_86001__boxed_1382_, v_snd_1374_, v_____r_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec_ref(v_snd_1374_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3(uint8_t v___x_1384_, lean_object* v___x_1385_, lean_object* v_fst_1386_, lean_object* v___x_1387_, lean_object* v_e_1388_, uint8_t v___x_1389_, lean_object* v_snd_1390_, lean_object* v_____r_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___y_1398_; lean_object* v_proof_1399_; lean_object* v___x_1403_; uint8_t v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1451_; uint8_t v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v_a_1457_; size_t v_sz_1480_; size_t v___x_1481_; lean_object* v___x_1482_; uint8_t v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; uint8_t v_fst_1517_; lean_object* v_fst_1518_; lean_object* v_snd_1519_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v___x_1403_ = l_Lean_mkAppN(v___x_1385_, v_fst_1386_);
v_sz_1480_ = lean_array_size(v_fst_1386_);
v___x_1481_ = ((size_t)0ULL);
v___x_1482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1480_, v___x_1481_, v_fst_1386_);
v___x_1553_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1554_ = lean_unsigned_to_nat(4u);
v___x_1555_ = l_Lean_Expr_isAppOfArity(v_snd_1390_, v___x_1553_, v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1556_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1557_ = lean_unsigned_to_nat(3u);
v___x_1558_ = l_Lean_Expr_isAppOfArity(v_snd_1390_, v___x_1556_, v___x_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___x_1482_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v_e_1388_);
v___x_1559_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1560_ = l_Lean_MessageData_ofConstName(v___x_1387_, v___x_1389_);
v___x_1561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1563_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
else
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1573_ = l_Lean_Expr_appFn_x21(v_snd_1390_);
v___x_1574_ = l_Lean_Expr_appArg_x21(v___x_1573_);
lean_dec_ref(v___x_1573_);
v___x_1575_ = l_Lean_Expr_appArg_x21(v_snd_1390_);
v_fst_1517_ = v___x_1389_;
v_fst_1518_ = v___x_1574_;
v_snd_1519_ = v___x_1575_;
goto v___jp_1516_;
}
}
else
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1576_ = l_Lean_Expr_appFn_x21(v_snd_1390_);
v___x_1577_ = l_Lean_Expr_appFn_x21(v___x_1576_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = l_Lean_Expr_appArg_x21(v___x_1577_);
lean_dec_ref(v___x_1577_);
v___x_1579_ = l_Lean_Expr_appArg_x21(v_snd_1390_);
v_fst_1517_ = v___x_1384_;
v_fst_1518_ = v___x_1578_;
v_snd_1519_ = v___x_1579_;
goto v___jp_1516_;
}
v___jp_1397_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1400_, 0, v_proof_1399_);
v___x_1401_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1401_, 0, v___y_1398_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
lean_ctor_set_uint8(v___x_1401_, sizeof(void*)*2, v___x_1384_);
v___x_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
return v___x_1402_;
}
v___jp_1404_:
{
lean_object* v___x_1411_; lean_object* v_a_1412_; lean_object* v___x_1413_; 
v___x_1411_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1406_, v___y_1408_);
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref(v___x_1411_);
v___x_1413_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1403_, v___y_1408_);
if (v___y_1405_ == 0)
{
lean_object* v_a_1414_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref(v___x_1413_);
v___y_1398_ = v_a_1412_;
v_proof_1399_ = v_a_1414_;
goto v___jp_1397_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1413_, 0);
lean_inc_n(v_a_1415_, 2);
lean_dec_ref(v___x_1413_);
v___x_1416_ = l_Lean_Meta_mkEqOfHEq(v_a_1415_, v___x_1384_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; 
lean_dec(v_a_1415_);
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___y_1398_ = v_a_1412_;
v_proof_1399_ = v_a_1417_;
goto v___jp_1397_;
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_a_1412_);
v_a_1418_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1420_ = v___x_1416_;
v_isShared_1421_ = v_isSharedCheck_1449_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1416_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1449_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
uint8_t v___x_1422_; 
v___x_1422_ = l_Lean_Exception_isInterrupt(v_a_1418_);
if (v___x_1422_ == 0)
{
uint8_t v___x_1423_; 
lean_inc(v_a_1418_);
v___x_1423_ = l_Lean_Exception_isRuntime(v_a_1418_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_del_object(v___x_1420_);
v___x_1424_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1425_ = l_Lean_MessageData_ofExpr(v_a_1415_);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = l_Lean_Exception_toMessageData(v_a_1418_);
v___x_1430_ = l_Lean_indentD(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1428_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1433_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v___x_1444_; 
lean_dec(v_a_1415_);
if (v_isShared_1421_ == 0)
{
v___x_1444_ = v___x_1420_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1418_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
else
{
lean_object* v___x_1447_; 
lean_dec(v_a_1415_);
if (v_isShared_1421_ == 0)
{
v___x_1447_ = v___x_1420_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1418_);
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
v___jp_1450_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v___x_1458_ = lean_array_get_size(v_a_1457_);
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = lean_nat_dec_eq(v___x_1458_, v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v___y_1453_);
lean_dec_ref(v___x_1403_);
v___x_1461_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1462_ = l_Lean_MessageData_ofConstName(v___x_1387_, v___x_1460_);
v___x_1463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = lean_array_to_list(v_a_1457_);
v___x_1467_ = lean_box(0);
v___x_1468_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1466_, v___x_1467_);
v___x_1469_ = l_Lean_MessageData_ofList(v___x_1468_);
v___x_1470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1465_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
v___x_1471_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1470_, v___y_1451_, v___y_1455_, v___y_1454_, v___y_1456_);
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
else
{
lean_dec_ref(v_a_1457_);
lean_dec(v___x_1387_);
v___y_1405_ = v___y_1452_;
v___y_1406_ = v___y_1453_;
v___y_1407_ = v___y_1451_;
v___y_1408_ = v___y_1455_;
v___y_1409_ = v___y_1454_;
v___y_1410_ = v___y_1456_;
goto v___jp_1404_;
}
}
v___jp_1483_:
{
lean_object* v___x_1490_; size_t v_sz_1491_; lean_object* v___x_1492_; 
v___x_1490_ = lean_box(0);
v_sz_1491_ = lean_array_size(v___x_1482_);
v___x_1492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1482_, v_sz_1491_, v___x_1481_, v___x_1490_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
lean_dec_ref_known(v___x_1492_, 1);
v___x_1493_ = lean_unsigned_to_nat(0u);
v___x_1494_ = lean_array_get_size(v___x_1482_);
v___x_1495_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1496_ = lean_nat_dec_lt(v___x_1493_, v___x_1494_);
if (v___x_1496_ == 0)
{
lean_dec_ref(v___x_1482_);
v___y_1451_ = v___y_1486_;
v___y_1452_ = v___y_1484_;
v___y_1453_ = v___y_1485_;
v___y_1454_ = v___y_1488_;
v___y_1455_ = v___y_1487_;
v___y_1456_ = v___y_1489_;
v_a_1457_ = v___x_1495_;
goto v___jp_1450_;
}
else
{
size_t v___x_1497_; lean_object* v___x_1498_; 
v___x_1497_ = lean_usize_of_nat(v___x_1494_);
v___x_1498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1482_, v___x_1481_, v___x_1497_, v___x_1495_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
lean_dec_ref(v___x_1482_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___y_1451_ = v___y_1486_;
v___y_1452_ = v___y_1484_;
v___y_1453_ = v___y_1485_;
v___y_1454_ = v___y_1488_;
v___y_1455_ = v___y_1487_;
v___y_1456_ = v___y_1489_;
v_a_1457_ = v_a_1499_;
goto v___jp_1450_;
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec_ref(v___y_1485_);
lean_dec_ref(v___x_1403_);
lean_dec(v___x_1387_);
v_a_1500_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1498_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1498_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v___y_1485_);
lean_dec_ref(v___x_1482_);
lean_dec_ref(v___x_1403_);
lean_dec(v___x_1387_);
v_a_1508_ = lean_ctor_get(v___x_1492_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1492_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1492_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
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
v___jp_1516_:
{
lean_object* v___x_1520_; 
lean_inc_ref(v_fst_1518_);
lean_inc_ref(v_e_1388_);
v___x_1520_ = l_Lean_Meta_isExprDefEq(v_e_1388_, v_fst_1518_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; uint8_t v___x_1522_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1522_ = lean_unbox(v_a_1521_);
lean_dec(v_a_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec_ref(v_snd_1519_);
lean_dec_ref(v___x_1482_);
lean_dec_ref(v___x_1403_);
v___x_1523_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1524_ = l_Lean_MessageData_ofExpr(v_fst_1518_);
v___x_1525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = l_Lean_MessageData_ofConstName(v___x_1387_, v___x_1389_);
v___x_1529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1527_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
v___x_1532_ = l_Lean_MessageData_ofExpr(v_e_1388_);
v___x_1533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1531_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1533_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
v___x_1536_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1535_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1536_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1536_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
else
{
lean_dec_ref(v_fst_1518_);
lean_dec_ref(v_e_1388_);
v___y_1484_ = v_fst_1517_;
v___y_1485_ = v_snd_1519_;
v___y_1486_ = v___y_1392_;
v___y_1487_ = v___y_1393_;
v___y_1488_ = v___y_1394_;
v___y_1489_ = v___y_1395_;
goto v___jp_1483_;
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref(v_snd_1519_);
lean_dec_ref(v_fst_1518_);
lean_dec_ref(v___x_1482_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v_e_1388_);
lean_dec(v___x_1387_);
v_a_1545_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1520_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1520_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__3___boxed(lean_object* v___x_1580_, lean_object* v___x_1581_, lean_object* v_fst_1582_, lean_object* v___x_1583_, lean_object* v_e_1584_, lean_object* v___x_1585_, lean_object* v_snd_1586_, lean_object* v_____r_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
uint8_t v___x_86479__boxed_1593_; uint8_t v___x_86483__boxed_1594_; lean_object* v_res_1595_; 
v___x_86479__boxed_1593_ = lean_unbox(v___x_1580_);
v___x_86483__boxed_1594_ = lean_unbox(v___x_1585_);
v_res_1595_ = l_Lean_Meta_rwMatcher___lam__3(v___x_86479__boxed_1593_, v___x_1581_, v_fst_1582_, v___x_1583_, v_e_1584_, v___x_86483__boxed_1594_, v_snd_1586_, v_____r_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec_ref(v_snd_1586_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4(uint8_t v___x_1596_, lean_object* v___x_1597_, lean_object* v_fst_1598_, lean_object* v___x_1599_, lean_object* v_e_1600_, uint8_t v___x_1601_, lean_object* v_snd_1602_, lean_object* v_____r_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___y_1610_; lean_object* v_proof_1611_; lean_object* v___x_1615_; uint8_t v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; uint8_t v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v_a_1669_; size_t v_sz_1692_; size_t v___x_1693_; lean_object* v___x_1694_; uint8_t v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; uint8_t v_fst_1729_; lean_object* v_fst_1730_; lean_object* v_snd_1731_; lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1615_ = l_Lean_mkAppN(v___x_1597_, v_fst_1598_);
v_sz_1692_ = lean_array_size(v_fst_1598_);
v___x_1693_ = ((size_t)0ULL);
v___x_1694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_1692_, v___x_1693_, v_fst_1598_);
v___x_1765_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_1766_ = lean_unsigned_to_nat(4u);
v___x_1767_ = l_Lean_Expr_isAppOfArity(v_snd_1602_, v___x_1765_, v___x_1766_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1768_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_1769_ = lean_unsigned_to_nat(3u);
v___x_1770_ = l_Lean_Expr_isAppOfArity(v_snd_1602_, v___x_1768_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec_ref(v___x_1694_);
lean_dec_ref(v___x_1615_);
lean_dec_ref(v_e_1600_);
v___x_1771_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
v___x_1772_ = l_Lean_MessageData_ofConstName(v___x_1599_, v___x_1601_);
v___x_1773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1771_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_1775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1773_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1775_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1785_ = l_Lean_Expr_appFn_x21(v_snd_1602_);
v___x_1786_ = l_Lean_Expr_appArg_x21(v___x_1785_);
lean_dec_ref(v___x_1785_);
v___x_1787_ = l_Lean_Expr_appArg_x21(v_snd_1602_);
v_fst_1729_ = v___x_1601_;
v_fst_1730_ = v___x_1786_;
v_snd_1731_ = v___x_1787_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1788_ = l_Lean_Expr_appFn_x21(v_snd_1602_);
v___x_1789_ = l_Lean_Expr_appFn_x21(v___x_1788_);
lean_dec_ref(v___x_1788_);
v___x_1790_ = l_Lean_Expr_appArg_x21(v___x_1789_);
lean_dec_ref(v___x_1789_);
v___x_1791_ = l_Lean_Expr_appArg_x21(v_snd_1602_);
v_fst_1729_ = v___x_1596_;
v_fst_1730_ = v___x_1790_;
v_snd_1731_ = v___x_1791_;
goto v___jp_1728_;
}
v___jp_1609_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1612_, 0, v_proof_1611_);
v___x_1613_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1613_, 0, v___y_1610_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
lean_ctor_set_uint8(v___x_1613_, sizeof(void*)*2, v___x_1596_);
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
return v___x_1614_;
}
v___jp_1616_:
{
lean_object* v___x_1623_; lean_object* v_a_1624_; lean_object* v___x_1625_; 
v___x_1623_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_1618_, v___y_1620_);
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref(v___x_1623_);
v___x_1625_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_1615_, v___y_1620_);
if (v___y_1617_ == 0)
{
lean_object* v_a_1626_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_a_1626_);
lean_dec_ref(v___x_1625_);
v___y_1610_ = v_a_1624_;
v_proof_1611_ = v_a_1626_;
goto v___jp_1609_;
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1628_; 
v_a_1627_ = lean_ctor_get(v___x_1625_, 0);
lean_inc_n(v_a_1627_, 2);
lean_dec_ref(v___x_1625_);
v___x_1628_ = l_Lean_Meta_mkEqOfHEq(v_a_1627_, v___x_1596_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; 
lean_dec(v_a_1627_);
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
v___y_1610_ = v_a_1624_;
v_proof_1611_ = v_a_1629_;
goto v___jp_1609_;
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v_a_1624_);
v_a_1630_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1632_ = v___x_1628_;
v_isShared_1633_ = v_isSharedCheck_1661_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1628_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1661_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
uint8_t v___x_1634_; 
v___x_1634_ = l_Lean_Exception_isInterrupt(v_a_1630_);
if (v___x_1634_ == 0)
{
uint8_t v___x_1635_; 
lean_inc(v_a_1630_);
v___x_1635_ = l_Lean_Exception_isRuntime(v_a_1630_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_del_object(v___x_1632_);
v___x_1636_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_1637_ = l_Lean_MessageData_ofExpr(v_a_1627_);
v___x_1638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
v___x_1640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = l_Lean_Exception_toMessageData(v_a_1630_);
v___x_1642_ = l_Lean_indentD(v___x_1641_);
v___x_1643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1640_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_1645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1643_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
v___x_1646_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1645_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1646_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
else
{
lean_object* v___x_1656_; 
lean_dec(v_a_1627_);
if (v_isShared_1633_ == 0)
{
v___x_1656_ = v___x_1632_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1630_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
else
{
lean_object* v___x_1659_; 
lean_dec(v_a_1627_);
if (v_isShared_1633_ == 0)
{
v___x_1659_ = v___x_1632_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1630_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
}
v___jp_1662_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1670_ = lean_array_get_size(v_a_1669_);
v___x_1671_ = lean_unsigned_to_nat(0u);
v___x_1672_ = lean_nat_dec_eq(v___x_1670_, v___x_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec_ref(v___y_1665_);
lean_dec_ref(v___x_1615_);
v___x_1673_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
v___x_1674_ = l_Lean_MessageData_ofConstName(v___x_1599_, v___x_1672_);
v___x_1675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1673_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1676_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_1677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = lean_array_to_list(v_a_1669_);
v___x_1679_ = lean_box(0);
v___x_1680_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_1678_, v___x_1679_);
v___x_1681_ = l_Lean_MessageData_ofList(v___x_1680_);
v___x_1682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1677_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1682_, v___y_1667_, v___y_1666_, v___y_1668_, v___y_1664_);
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1683_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
else
{
lean_dec_ref(v_a_1669_);
lean_dec(v___x_1599_);
v___y_1617_ = v___y_1663_;
v___y_1618_ = v___y_1665_;
v___y_1619_ = v___y_1667_;
v___y_1620_ = v___y_1666_;
v___y_1621_ = v___y_1668_;
v___y_1622_ = v___y_1664_;
goto v___jp_1616_;
}
}
v___jp_1695_:
{
lean_object* v___x_1702_; size_t v_sz_1703_; lean_object* v___x_1704_; 
v___x_1702_ = lean_box(0);
v_sz_1703_ = lean_array_size(v___x_1694_);
v___x_1704_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_1694_, v_sz_1703_, v___x_1693_, v___x_1702_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; uint8_t v___x_1708_; 
lean_dec_ref_known(v___x_1704_, 1);
v___x_1705_ = lean_unsigned_to_nat(0u);
v___x_1706_ = lean_array_get_size(v___x_1694_);
v___x_1707_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_1708_ = lean_nat_dec_lt(v___x_1705_, v___x_1706_);
if (v___x_1708_ == 0)
{
lean_dec_ref(v___x_1694_);
v___y_1663_ = v___y_1696_;
v___y_1664_ = v___y_1701_;
v___y_1665_ = v___y_1697_;
v___y_1666_ = v___y_1699_;
v___y_1667_ = v___y_1698_;
v___y_1668_ = v___y_1700_;
v_a_1669_ = v___x_1707_;
goto v___jp_1662_;
}
else
{
size_t v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_usize_of_nat(v___x_1706_);
v___x_1710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_1694_, v___x_1693_, v___x_1709_, v___x_1707_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec_ref(v___x_1694_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1710_, 1);
v___y_1663_ = v___y_1696_;
v___y_1664_ = v___y_1701_;
v___y_1665_ = v___y_1697_;
v___y_1666_ = v___y_1699_;
v___y_1667_ = v___y_1698_;
v___y_1668_ = v___y_1700_;
v_a_1669_ = v_a_1711_;
goto v___jp_1662_;
}
else
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___x_1615_);
lean_dec(v___x_1599_);
v_a_1712_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___x_1710_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1710_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___x_1694_);
lean_dec_ref(v___x_1615_);
lean_dec(v___x_1599_);
v_a_1720_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1704_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1704_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
v___jp_1728_:
{
lean_object* v___x_1732_; 
lean_inc_ref(v_fst_1730_);
lean_inc_ref(v_e_1600_);
v___x_1732_ = l_Lean_Meta_isExprDefEq(v_e_1600_, v_fst_1730_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; uint8_t v___x_1734_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1732_, 1);
v___x_1734_ = lean_unbox(v_a_1733_);
lean_dec(v_a_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec_ref(v_snd_1731_);
lean_dec_ref(v___x_1694_);
lean_dec_ref(v___x_1615_);
v___x_1735_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_1736_ = l_Lean_MessageData_ofExpr(v_fst_1730_);
v___x_1737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1735_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_1739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
v___x_1740_ = l_Lean_MessageData_ofConstName(v___x_1599_, v___x_1601_);
v___x_1741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_1743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = l_Lean_MessageData_ofExpr(v_e_1600_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1743_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_1747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_1747_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
else
{
lean_dec_ref(v_fst_1730_);
lean_dec_ref(v_e_1600_);
v___y_1696_ = v_fst_1729_;
v___y_1697_ = v_snd_1731_;
v___y_1698_ = v___y_1604_;
v___y_1699_ = v___y_1605_;
v___y_1700_ = v___y_1606_;
v___y_1701_ = v___y_1607_;
goto v___jp_1695_;
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec_ref(v_snd_1731_);
lean_dec_ref(v_fst_1730_);
lean_dec_ref(v___x_1694_);
lean_dec_ref(v___x_1615_);
lean_dec_ref(v_e_1600_);
lean_dec(v___x_1599_);
v_a_1757_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1732_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1732_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___lam__4___boxed(lean_object* v___x_1792_, lean_object* v___x_1793_, lean_object* v_fst_1794_, lean_object* v___x_1795_, lean_object* v_e_1796_, lean_object* v___x_1797_, lean_object* v_snd_1798_, lean_object* v_____r_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
uint8_t v___x_86936__boxed_1805_; uint8_t v___x_86940__boxed_1806_; lean_object* v_res_1807_; 
v___x_86936__boxed_1805_ = lean_unbox(v___x_1792_);
v___x_86940__boxed_1806_ = lean_unbox(v___x_1797_);
v_res_1807_ = l_Lean_Meta_rwMatcher___lam__4(v___x_86936__boxed_1805_, v___x_1793_, v_fst_1794_, v___x_1795_, v_e_1796_, v___x_86940__boxed_1806_, v_snd_1798_, v_____r_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec_ref(v_snd_1798_);
return v_res_1807_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1808_; double v___x_1809_; 
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1809_ = lean_float_of_nat(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(lean_object* v_cls_1813_, lean_object* v_msg_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v_ref_1820_; lean_object* v___x_1821_; lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1867_; 
v_ref_1820_ = lean_ctor_get(v___y_1817_, 2);
v___x_1821_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1824_ = v___x_1821_;
v_isShared_1825_ = v_isSharedCheck_1867_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1821_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1867_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1826_; lean_object* v_traceState_1827_; lean_object* v_env_1828_; lean_object* v_nextMacroScope_1829_; lean_object* v_ngen_1830_; lean_object* v_auxDeclNGen_1831_; lean_object* v_cache_1832_; lean_object* v_recordedDeps_1833_; lean_object* v_messages_1834_; lean_object* v_infoState_1835_; lean_object* v_snapshotTasks_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1866_; 
v___x_1826_ = lean_st_ref_take(v___y_1818_);
v_traceState_1827_ = lean_ctor_get(v___x_1826_, 4);
v_env_1828_ = lean_ctor_get(v___x_1826_, 0);
v_nextMacroScope_1829_ = lean_ctor_get(v___x_1826_, 1);
v_ngen_1830_ = lean_ctor_get(v___x_1826_, 2);
v_auxDeclNGen_1831_ = lean_ctor_get(v___x_1826_, 3);
v_cache_1832_ = lean_ctor_get(v___x_1826_, 5);
v_recordedDeps_1833_ = lean_ctor_get(v___x_1826_, 6);
v_messages_1834_ = lean_ctor_get(v___x_1826_, 7);
v_infoState_1835_ = lean_ctor_get(v___x_1826_, 8);
v_snapshotTasks_1836_ = lean_ctor_get(v___x_1826_, 9);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1838_ = v___x_1826_;
v_isShared_1839_ = v_isSharedCheck_1866_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_snapshotTasks_1836_);
lean_inc(v_infoState_1835_);
lean_inc(v_messages_1834_);
lean_inc(v_recordedDeps_1833_);
lean_inc(v_cache_1832_);
lean_inc(v_traceState_1827_);
lean_inc(v_auxDeclNGen_1831_);
lean_inc(v_ngen_1830_);
lean_inc(v_nextMacroScope_1829_);
lean_inc(v_env_1828_);
lean_dec(v___x_1826_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1866_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
uint64_t v_tid_1840_; lean_object* v_traces_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1865_; 
v_tid_1840_ = lean_ctor_get_uint64(v_traceState_1827_, sizeof(void*)*1);
v_traces_1841_ = lean_ctor_get(v_traceState_1827_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_traceState_1827_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1843_ = v_traceState_1827_;
v_isShared_1844_ = v_isSharedCheck_1865_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_traces_1841_);
lean_dec(v_traceState_1827_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1865_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; double v___x_1847_; uint8_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1845_ = lean_box(0);
v___x_1846_ = lean_box(0);
v___x_1847_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
v___x_1848_ = 0;
v___x_1849_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_1850_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1850_, 0, v_cls_1813_);
lean_ctor_set(v___x_1850_, 1, v___x_1846_);
lean_ctor_set(v___x_1850_, 2, v___x_1849_);
lean_ctor_set_float(v___x_1850_, sizeof(void*)*3, v___x_1847_);
lean_ctor_set_float(v___x_1850_, sizeof(void*)*3 + 8, v___x_1847_);
lean_ctor_set_uint8(v___x_1850_, sizeof(void*)*3 + 16, v___x_1848_);
v___x_1851_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__2));
v___x_1852_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1850_);
lean_ctor_set(v___x_1852_, 1, v_a_1822_);
lean_ctor_set(v___x_1852_, 2, v___x_1851_);
lean_inc(v_ref_1820_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v_ref_1820_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = l_Lean_PersistentArray_push___redArg(v_traces_1841_, v___x_1853_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1854_);
v___x_1856_ = v___x_1843_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1854_);
lean_ctor_set_uint64(v_reuseFailAlloc_1864_, sizeof(void*)*1, v_tid_1840_);
v___x_1856_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
lean_object* v___x_1858_; 
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 4, v___x_1856_);
v___x_1858_ = v___x_1838_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_env_1828_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_nextMacroScope_1829_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_ngen_1830_);
lean_ctor_set(v_reuseFailAlloc_1863_, 3, v_auxDeclNGen_1831_);
lean_ctor_set(v_reuseFailAlloc_1863_, 4, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1863_, 5, v_cache_1832_);
lean_ctor_set(v_reuseFailAlloc_1863_, 6, v_recordedDeps_1833_);
lean_ctor_set(v_reuseFailAlloc_1863_, 7, v_messages_1834_);
lean_ctor_set(v_reuseFailAlloc_1863_, 8, v_infoState_1835_);
lean_ctor_set(v_reuseFailAlloc_1863_, 9, v_snapshotTasks_1836_);
v___x_1858_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1859_ = lean_st_ref_put(v___y_1818_, v___x_1858_);
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 0, v___x_1845_);
v___x_1861_ = v___x_1824_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1845_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___boxed(lean_object* v_cls_1868_, lean_object* v_msg_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v_cls_1868_, v_msg_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(lean_object* v_opts_1876_, lean_object* v_opt_1877_){
_start:
{
lean_object* v_name_1878_; lean_object* v_defValue_1879_; lean_object* v_map_1880_; lean_object* v___x_1881_; 
v_name_1878_ = lean_ctor_get(v_opt_1877_, 0);
v_defValue_1879_ = lean_ctor_get(v_opt_1877_, 1);
v_map_1880_ = lean_ctor_get(v_opts_1876_, 0);
v___x_1881_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1880_, v_name_1878_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_inc(v_defValue_1879_);
return v_defValue_1879_;
}
else
{
lean_object* v_val_1882_; 
v_val_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_val_1882_);
lean_dec_ref_known(v___x_1881_, 1);
if (lean_obj_tag(v_val_1882_) == 3)
{
lean_object* v_v_1883_; 
v_v_1883_ = lean_ctor_get(v_val_1882_, 0);
lean_inc(v_v_1883_);
lean_dec_ref_known(v_val_1882_, 1);
return v_v_1883_;
}
else
{
lean_dec(v_val_1882_);
lean_inc(v_defValue_1879_);
return v_defValue_1879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17___boxed(lean_object* v_opts_1884_, lean_object* v_opt_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_1884_, v_opt_1885_);
lean_dec_ref(v_opt_1885_);
lean_dec_ref(v_opts_1884_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(lean_object* v_x_1887_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
v_a_1889_ = lean_ctor_get(v_x_1887_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v_x_1887_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v_x_1887_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v_x_1887_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
lean_ctor_set_tag(v___x_1891_, 1);
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
v_a_1897_ = lean_ctor_get(v_x_1887_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_x_1887_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v_x_1887_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v_x_1887_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
lean_ctor_set_tag(v___x_1899_, 0);
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg___boxed(lean_object* v_x_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_1905_);
return v_res_1907_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(lean_object* v_e_1908_){
_start:
{
if (lean_obj_tag(v_e_1908_) == 0)
{
uint8_t v___x_1909_; 
v___x_1909_ = 2;
return v___x_1909_;
}
else
{
uint8_t v___x_1910_; 
v___x_1910_ = 0;
return v___x_1910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16___boxed(lean_object* v_e_1911_){
_start:
{
uint8_t v_res_1912_; lean_object* v_r_1913_; 
v_res_1912_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_e_1911_);
lean_dec_ref(v_e_1911_);
v_r_1913_ = lean_box(v_res_1912_);
return v_r_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(size_t v_sz_1914_, size_t v_i_1915_, lean_object* v_bs_1916_){
_start:
{
uint8_t v___x_1917_; 
v___x_1917_ = lean_usize_dec_lt(v_i_1915_, v_sz_1914_);
if (v___x_1917_ == 0)
{
return v_bs_1916_;
}
else
{
lean_object* v_v_1918_; lean_object* v_msg_1919_; lean_object* v___x_1920_; lean_object* v_bs_x27_1921_; size_t v___x_1922_; size_t v___x_1923_; lean_object* v___x_1924_; 
v_v_1918_ = lean_array_uget_borrowed(v_bs_1916_, v_i_1915_);
v_msg_1919_ = lean_ctor_get(v_v_1918_, 1);
lean_inc_ref(v_msg_1919_);
v___x_1920_ = lean_unsigned_to_nat(0u);
v_bs_x27_1921_ = lean_array_uset(v_bs_1916_, v_i_1915_, v___x_1920_);
v___x_1922_ = ((size_t)1ULL);
v___x_1923_ = lean_usize_add(v_i_1915_, v___x_1922_);
v___x_1924_ = lean_array_uset(v_bs_x27_1921_, v_i_1915_, v_msg_1919_);
v_i_1915_ = v___x_1923_;
v_bs_1916_ = v___x_1924_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16___boxed(lean_object* v_sz_1926_, lean_object* v_i_1927_, lean_object* v_bs_1928_){
_start:
{
size_t v_sz_boxed_1929_; size_t v_i_boxed_1930_; lean_object* v_res_1931_; 
v_sz_boxed_1929_ = lean_unbox_usize(v_sz_1926_);
lean_dec(v_sz_1926_);
v_i_boxed_1930_ = lean_unbox_usize(v_i_1927_);
lean_dec(v_i_1927_);
v_res_1931_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_boxed_1929_, v_i_boxed_1930_, v_bs_1928_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(lean_object* v_oldTraces_1932_, lean_object* v_data_1933_, lean_object* v_ref_1934_, lean_object* v_msg_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_toCold_1941_; lean_object* v_currRecDepth_1942_; lean_object* v_ref_1943_; uint16_t v_optionFlags_1944_; uint8_t v_suppressElabErrors_1945_; uint8_t v_checkDeprecated_1946_; uint8_t v_isRecordingDeps_1947_; lean_object* v_ref_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v_traceState_1951_; lean_object* v_traces_1952_; lean_object* v___x_1953_; size_t v_sz_1954_; size_t v___x_1955_; lean_object* v___x_1956_; lean_object* v_msg_1957_; lean_object* v___x_1958_; lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1997_; 
v_toCold_1941_ = lean_ctor_get(v___y_1938_, 0);
v_currRecDepth_1942_ = lean_ctor_get(v___y_1938_, 1);
v_ref_1943_ = lean_ctor_get(v___y_1938_, 2);
v_optionFlags_1944_ = lean_ctor_get_uint16(v___y_1938_, sizeof(void*)*3);
v_suppressElabErrors_1945_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3 + 2);
v_checkDeprecated_1946_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1947_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3 + 4);
v_ref_1948_ = l_Lean_replaceRef(v_ref_1934_, v_ref_1943_);
lean_inc(v_currRecDepth_1942_);
lean_inc_ref(v_toCold_1941_);
v___x_1949_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1949_, 0, v_toCold_1941_);
lean_ctor_set(v___x_1949_, 1, v_currRecDepth_1942_);
lean_ctor_set(v___x_1949_, 2, v_ref_1948_);
lean_ctor_set_uint16(v___x_1949_, sizeof(void*)*3, v_optionFlags_1944_);
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*3 + 2, v_suppressElabErrors_1945_);
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*3 + 3, v_checkDeprecated_1946_);
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*3 + 4, v_isRecordingDeps_1947_);
v___x_1950_ = lean_st_ref_get(v___y_1939_);
v_traceState_1951_ = lean_ctor_get(v___x_1950_, 4);
lean_inc_ref(v_traceState_1951_);
lean_dec(v___x_1950_);
v_traces_1952_ = lean_ctor_get(v_traceState_1951_, 0);
lean_inc_ref(v_traces_1952_);
lean_dec_ref(v_traceState_1951_);
v___x_1953_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1952_);
lean_dec_ref(v_traces_1952_);
v_sz_1954_ = lean_array_size(v___x_1953_);
v___x_1955_ = ((size_t)0ULL);
v___x_1956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14_spec__16(v_sz_1954_, v___x_1955_, v___x_1953_);
v_msg_1957_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1957_, 0, v_data_1933_);
lean_ctor_set(v_msg_1957_, 1, v_msg_1935_);
lean_ctor_set(v_msg_1957_, 2, v___x_1956_);
v___x_1958_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3_spec__4(v_msg_1957_, v___y_1936_, v___y_1937_, v___x_1949_, v___y_1939_);
lean_dec_ref_known(v___x_1949_, 3);
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_1997_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1997_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v_traceState_1964_; lean_object* v_env_1965_; lean_object* v_nextMacroScope_1966_; lean_object* v_ngen_1967_; lean_object* v_auxDeclNGen_1968_; lean_object* v_cache_1969_; lean_object* v_recordedDeps_1970_; lean_object* v_messages_1971_; lean_object* v_infoState_1972_; lean_object* v_snapshotTasks_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1996_; 
v___x_1963_ = lean_st_ref_take(v___y_1939_);
v_traceState_1964_ = lean_ctor_get(v___x_1963_, 4);
v_env_1965_ = lean_ctor_get(v___x_1963_, 0);
v_nextMacroScope_1966_ = lean_ctor_get(v___x_1963_, 1);
v_ngen_1967_ = lean_ctor_get(v___x_1963_, 2);
v_auxDeclNGen_1968_ = lean_ctor_get(v___x_1963_, 3);
v_cache_1969_ = lean_ctor_get(v___x_1963_, 5);
v_recordedDeps_1970_ = lean_ctor_get(v___x_1963_, 6);
v_messages_1971_ = lean_ctor_get(v___x_1963_, 7);
v_infoState_1972_ = lean_ctor_get(v___x_1963_, 8);
v_snapshotTasks_1973_ = lean_ctor_get(v___x_1963_, 9);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1975_ = v___x_1963_;
v_isShared_1976_ = v_isSharedCheck_1996_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_snapshotTasks_1973_);
lean_inc(v_infoState_1972_);
lean_inc(v_messages_1971_);
lean_inc(v_recordedDeps_1970_);
lean_inc(v_cache_1969_);
lean_inc(v_traceState_1964_);
lean_inc(v_auxDeclNGen_1968_);
lean_inc(v_ngen_1967_);
lean_inc(v_nextMacroScope_1966_);
lean_inc(v_env_1965_);
lean_dec(v___x_1963_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1996_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
uint64_t v_tid_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1994_; 
v_tid_1977_ = lean_ctor_get_uint64(v_traceState_1964_, sizeof(void*)*1);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_traceState_1964_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; 
v_unused_1995_ = lean_ctor_get(v_traceState_1964_, 0);
lean_dec(v_unused_1995_);
v___x_1979_ = v_traceState_1964_;
v_isShared_1980_ = v_isSharedCheck_1994_;
goto v_resetjp_1978_;
}
else
{
lean_dec(v_traceState_1964_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1994_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1985_; 
v___x_1981_ = lean_box(0);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_ref_1934_);
lean_ctor_set(v___x_1982_, 1, v_a_1959_);
v___x_1983_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1932_, v___x_1982_);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1983_);
v___x_1985_ = v___x_1979_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1983_);
lean_ctor_set_uint64(v_reuseFailAlloc_1993_, sizeof(void*)*1, v_tid_1977_);
v___x_1985_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 4, v___x_1985_);
v___x_1987_ = v___x_1975_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_env_1965_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_nextMacroScope_1966_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_ngen_1967_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_auxDeclNGen_1968_);
lean_ctor_set(v_reuseFailAlloc_1992_, 4, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1992_, 5, v_cache_1969_);
lean_ctor_set(v_reuseFailAlloc_1992_, 6, v_recordedDeps_1970_);
lean_ctor_set(v_reuseFailAlloc_1992_, 7, v_messages_1971_);
lean_ctor_set(v_reuseFailAlloc_1992_, 8, v_infoState_1972_);
lean_ctor_set(v_reuseFailAlloc_1992_, 9, v_snapshotTasks_1973_);
v___x_1987_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1988_ = lean_st_ref_put(v___y_1939_, v___x_1987_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1981_);
v___x_1990_ = v___x_1961_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1981_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14___boxed(lean_object* v_oldTraces_1998_, lean_object* v_data_1999_, lean_object* v_ref_2000_, lean_object* v_msg_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_1998_, v_data_1999_, v_ref_2000_, v_msg_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
return v_res_2007_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__0));
v___x_2010_ = l_Lean_stringToMessageData(v___x_2009_);
return v___x_2010_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2(void){
_start:
{
lean_object* v___x_2011_; double v___x_2012_; 
v___x_2011_ = lean_unsigned_to_nat(1000u);
v___x_2012_ = lean_float_of_nat(v___x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(lean_object* v_cls_2013_, uint8_t v_collapsed_2014_, lean_object* v_tag_2015_, lean_object* v_opts_2016_, uint8_t v_clsEnabled_2017_, lean_object* v_oldTraces_2018_, lean_object* v_msg_2019_, lean_object* v_resStartStop_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v_fst_2026_; lean_object* v_snd_2027_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v_data_2031_; lean_object* v_fst_2042_; lean_object* v_snd_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; lean_object* v___y_2047_; lean_object* v_a_2048_; uint8_t v___y_2063_; double v___y_2095_; 
v_fst_2026_ = lean_ctor_get(v_resStartStop_2020_, 0);
lean_inc(v_fst_2026_);
v_snd_2027_ = lean_ctor_get(v_resStartStop_2020_, 1);
lean_inc(v_snd_2027_);
lean_dec_ref(v_resStartStop_2020_);
v_fst_2042_ = lean_ctor_get(v_snd_2027_, 0);
lean_inc(v_fst_2042_);
v_snd_2043_ = lean_ctor_get(v_snd_2027_, 1);
lean_inc(v_snd_2043_);
lean_dec(v_snd_2027_);
v___x_2044_ = l_Lean_trace_profiler;
v___x_2045_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2016_, v___x_2044_);
if (v___x_2045_ == 0)
{
v___y_2063_ = v___x_2045_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2100_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2101_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_opts_2016_, v___x_2100_);
if (v___x_2101_ == 0)
{
lean_object* v___x_2102_; lean_object* v___x_2103_; double v___x_2104_; double v___x_2105_; double v___x_2106_; 
v___x_2102_ = l_Lean_trace_profiler_threshold;
v___x_2103_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2016_, v___x_2102_);
v___x_2104_ = lean_float_of_nat(v___x_2103_);
v___x_2105_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__2);
v___x_2106_ = lean_float_div(v___x_2104_, v___x_2105_);
v___y_2095_ = v___x_2106_;
goto v___jp_2094_;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; double v___x_2109_; 
v___x_2107_ = l_Lean_trace_profiler_threshold;
v___x_2108_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__17(v_opts_2016_, v___x_2107_);
v___x_2109_ = lean_float_of_nat(v___x_2108_);
v___y_2095_ = v___x_2109_;
goto v___jp_2094_;
}
}
v___jp_2028_:
{
lean_object* v___x_2032_; 
lean_inc(v___y_2030_);
v___x_2032_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__14(v_oldTraces_2018_, v_data_2031_, v___y_2030_, v___y_2029_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v___x_2033_; 
lean_dec_ref_known(v___x_2032_, 1);
v___x_2033_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2026_);
return v___x_2033_;
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec(v_fst_2026_);
v_a_2034_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2032_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2032_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
v___jp_2046_:
{
uint8_t v_result_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; double v___x_2052_; lean_object* v_data_2053_; 
v_result_2049_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__16(v_fst_2026_);
v___x_2050_ = lean_box(v_result_2049_);
v___x_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
v___x_2052_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__0);
lean_inc_ref(v_tag_2015_);
lean_inc_ref(v___x_2051_);
lean_inc(v_cls_2013_);
v_data_2053_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2053_, 0, v_cls_2013_);
lean_ctor_set(v_data_2053_, 1, v___x_2051_);
lean_ctor_set(v_data_2053_, 2, v_tag_2015_);
lean_ctor_set_float(v_data_2053_, sizeof(void*)*3, v___x_2052_);
lean_ctor_set_float(v_data_2053_, sizeof(void*)*3 + 8, v___x_2052_);
lean_ctor_set_uint8(v_data_2053_, sizeof(void*)*3 + 16, v_collapsed_2014_);
if (v___x_2045_ == 0)
{
lean_dec_ref_known(v___x_2051_, 1);
lean_dec(v_snd_2043_);
lean_dec(v_fst_2042_);
lean_dec_ref(v_tag_2015_);
lean_dec(v_cls_2013_);
v___y_2029_ = v_a_2048_;
v___y_2030_ = v___y_2047_;
v_data_2031_ = v_data_2053_;
goto v___jp_2028_;
}
else
{
lean_object* v_data_2054_; double v___x_2055_; double v___x_2056_; 
lean_dec_ref_known(v_data_2053_, 3);
v_data_2054_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2054_, 0, v_cls_2013_);
lean_ctor_set(v_data_2054_, 1, v___x_2051_);
lean_ctor_set(v_data_2054_, 2, v_tag_2015_);
v___x_2055_ = lean_unbox_float(v_fst_2042_);
lean_dec(v_fst_2042_);
lean_ctor_set_float(v_data_2054_, sizeof(void*)*3, v___x_2055_);
v___x_2056_ = lean_unbox_float(v_snd_2043_);
lean_dec(v_snd_2043_);
lean_ctor_set_float(v_data_2054_, sizeof(void*)*3 + 8, v___x_2056_);
lean_ctor_set_uint8(v_data_2054_, sizeof(void*)*3 + 16, v_collapsed_2014_);
v___y_2029_ = v_a_2048_;
v___y_2030_ = v___y_2047_;
v_data_2031_ = v_data_2054_;
goto v___jp_2028_;
}
}
v___jp_2057_:
{
lean_object* v_ref_2058_; lean_object* v___x_2059_; 
v_ref_2058_ = lean_ctor_get(v___y_2023_, 2);
lean_inc(v___y_2024_);
lean_inc_ref(v___y_2023_);
lean_inc(v___y_2022_);
lean_inc_ref(v___y_2021_);
lean_inc(v_fst_2026_);
v___x_2059_ = lean_apply_6(v_msg_2019_, v_fst_2026_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, lean_box(0));
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
v___y_2047_ = v_ref_2058_;
v_a_2048_ = v_a_2060_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2061_; 
lean_dec_ref_known(v___x_2059_, 1);
v___x_2061_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___closed__1);
v___y_2047_ = v_ref_2058_;
v_a_2048_ = v___x_2061_;
goto v___jp_2046_;
}
}
v___jp_2062_:
{
if (v_clsEnabled_2017_ == 0)
{
if (v___y_2063_ == 0)
{
lean_object* v___x_2064_; lean_object* v_traceState_2065_; lean_object* v_env_2066_; lean_object* v_nextMacroScope_2067_; lean_object* v_ngen_2068_; lean_object* v_auxDeclNGen_2069_; lean_object* v_cache_2070_; lean_object* v_recordedDeps_2071_; lean_object* v_messages_2072_; lean_object* v_infoState_2073_; lean_object* v_snapshotTasks_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2093_; 
lean_dec(v_snd_2043_);
lean_dec(v_fst_2042_);
lean_dec_ref(v_msg_2019_);
lean_dec_ref(v_tag_2015_);
lean_dec(v_cls_2013_);
v___x_2064_ = lean_st_ref_take(v___y_2024_);
v_traceState_2065_ = lean_ctor_get(v___x_2064_, 4);
v_env_2066_ = lean_ctor_get(v___x_2064_, 0);
v_nextMacroScope_2067_ = lean_ctor_get(v___x_2064_, 1);
v_ngen_2068_ = lean_ctor_get(v___x_2064_, 2);
v_auxDeclNGen_2069_ = lean_ctor_get(v___x_2064_, 3);
v_cache_2070_ = lean_ctor_get(v___x_2064_, 5);
v_recordedDeps_2071_ = lean_ctor_get(v___x_2064_, 6);
v_messages_2072_ = lean_ctor_get(v___x_2064_, 7);
v_infoState_2073_ = lean_ctor_get(v___x_2064_, 8);
v_snapshotTasks_2074_ = lean_ctor_get(v___x_2064_, 9);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2076_ = v___x_2064_;
v_isShared_2077_ = v_isSharedCheck_2093_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_snapshotTasks_2074_);
lean_inc(v_infoState_2073_);
lean_inc(v_messages_2072_);
lean_inc(v_recordedDeps_2071_);
lean_inc(v_cache_2070_);
lean_inc(v_traceState_2065_);
lean_inc(v_auxDeclNGen_2069_);
lean_inc(v_ngen_2068_);
lean_inc(v_nextMacroScope_2067_);
lean_inc(v_env_2066_);
lean_dec(v___x_2064_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2093_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
uint64_t v_tid_2078_; lean_object* v_traces_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2092_; 
v_tid_2078_ = lean_ctor_get_uint64(v_traceState_2065_, sizeof(void*)*1);
v_traces_2079_ = lean_ctor_get(v_traceState_2065_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_traceState_2065_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2081_ = v_traceState_2065_;
v_isShared_2082_ = v_isSharedCheck_2092_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_traces_2079_);
lean_dec(v_traceState_2065_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2092_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2083_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2018_, v_traces_2079_);
lean_dec_ref(v_traces_2079_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 0, v___x_2083_);
v___x_2085_ = v___x_2081_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2083_);
lean_ctor_set_uint64(v_reuseFailAlloc_2091_, sizeof(void*)*1, v_tid_2078_);
v___x_2085_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2087_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 4, v___x_2085_);
v___x_2087_ = v___x_2076_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_env_2066_);
lean_ctor_set(v_reuseFailAlloc_2090_, 1, v_nextMacroScope_2067_);
lean_ctor_set(v_reuseFailAlloc_2090_, 2, v_ngen_2068_);
lean_ctor_set(v_reuseFailAlloc_2090_, 3, v_auxDeclNGen_2069_);
lean_ctor_set(v_reuseFailAlloc_2090_, 4, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2090_, 5, v_cache_2070_);
lean_ctor_set(v_reuseFailAlloc_2090_, 6, v_recordedDeps_2071_);
lean_ctor_set(v_reuseFailAlloc_2090_, 7, v_messages_2072_);
lean_ctor_set(v_reuseFailAlloc_2090_, 8, v_infoState_2073_);
lean_ctor_set(v_reuseFailAlloc_2090_, 9, v_snapshotTasks_2074_);
v___x_2087_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_st_ref_put(v___y_2024_, v___x_2087_);
v___x_2089_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_fst_2026_);
return v___x_2089_;
}
}
}
}
}
else
{
goto v___jp_2057_;
}
}
else
{
goto v___jp_2057_;
}
}
v___jp_2094_:
{
double v___x_2096_; double v___x_2097_; double v___x_2098_; uint8_t v___x_2099_; 
v___x_2096_ = lean_unbox_float(v_snd_2043_);
v___x_2097_ = lean_unbox_float(v_fst_2042_);
v___x_2098_ = lean_float_sub(v___x_2096_, v___x_2097_);
v___x_2099_ = lean_float_decLt(v___y_2095_, v___x_2098_);
v___y_2063_ = v___x_2099_;
goto v___jp_2062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12___boxed(lean_object* v_cls_2110_, lean_object* v_collapsed_2111_, lean_object* v_tag_2112_, lean_object* v_opts_2113_, lean_object* v_clsEnabled_2114_, lean_object* v_oldTraces_2115_, lean_object* v_msg_2116_, lean_object* v_resStartStop_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
uint8_t v_collapsed_boxed_2123_; uint8_t v_clsEnabled_boxed_2124_; lean_object* v_res_2125_; 
v_collapsed_boxed_2123_ = lean_unbox(v_collapsed_2111_);
v_clsEnabled_boxed_2124_ = lean_unbox(v_clsEnabled_2114_);
v_res_2125_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v_cls_2110_, v_collapsed_boxed_2123_, v_tag_2112_, v_opts_2113_, v_clsEnabled_boxed_2124_, v_oldTraces_2115_, v_msg_2116_, v_resStartStop_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec_ref(v_opts_2113_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(lean_object* v_a_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = l_Lean_Meta_reduceRecMatcher_x3f(v_a_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2146_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2135_ = v___x_2132_;
v_isShared_2136_ = v_isSharedCheck_2146_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2132_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2146_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
if (lean_obj_tag(v_a_2133_) == 1)
{
lean_object* v_val_2137_; lean_object* v___x_2138_; 
lean_del_object(v___x_2135_);
lean_dec_ref(v_a_2126_);
v_val_2137_ = lean_ctor_get(v_a_2133_, 0);
lean_inc(v_val_2137_);
lean_dec_ref_known(v_a_2133_, 1);
v___x_2138_ = l_Lean_Expr_headBeta(v_val_2137_);
v_a_2126_ = v___x_2138_;
goto _start;
}
else
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
lean_dec(v_a_2133_);
lean_inc_ref(v_a_2126_);
v___x_2140_ = l_Lean_Expr_headBeta(v_a_2126_);
v___x_2141_ = lean_expr_eqv(v_a_2126_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_del_object(v___x_2135_);
lean_dec_ref(v_a_2126_);
v_a_2126_ = v___x_2140_;
goto _start;
}
else
{
lean_object* v___x_2144_; 
lean_dec_ref(v___x_2140_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v_a_2126_);
v___x_2144_ = v___x_2135_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2126_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec_ref(v_a_2126_);
v_a_2147_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2132_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2132_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg___boxed(lean_object* v_a_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
return v_res_2161_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__11(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2181_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2182_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__10));
v___x_2183_ = l_Lean_Name_append(v___x_2182_, v___x_2181_);
return v___x_2183_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__13(void){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2185_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__12));
v___x_2186_ = l_Lean_stringToMessageData(v___x_2185_);
return v___x_2186_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__15(void){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__14));
v___x_2189_ = l_Lean_stringToMessageData(v___x_2188_);
return v___x_2189_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__17(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__16));
v___x_2192_ = l_Lean_stringToMessageData(v___x_2191_);
return v___x_2192_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__19(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__18));
v___x_2195_ = l_Lean_stringToMessageData(v___x_2194_);
return v___x_2195_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__21(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__20));
v___x_2198_ = l_Lean_stringToMessageData(v___x_2197_);
return v___x_2198_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__23(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__22));
v___x_2201_ = l_Lean_stringToMessageData(v___x_2200_);
return v___x_2201_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__24(void){
_start:
{
lean_object* v___x_2202_; lean_object* v_dummy_2203_; 
v___x_2202_ = lean_box(0);
v_dummy_2203_ = l_Lean_Expr_sort___override(v___x_2202_);
return v_dummy_2203_;
}
}
static double _init_l_Lean_Meta_rwMatcher___closed__25(void){
_start:
{
lean_object* v___x_2204_; double v___x_2205_; 
v___x_2204_ = lean_unsigned_to_nat(1000000000u);
v___x_2205_ = lean_float_of_nat(v___x_2204_);
return v___x_2205_;
}
}
static lean_object* _init_l_Lean_Meta_rwMatcher___closed__27(void){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__26));
v___x_2208_ = l_Lean_stringToMessageData(v___x_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher(lean_object* v_altIdx_2209_, lean_object* v_e_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_){
_start:
{
lean_object* v___y_2238_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__2));
v___x_2249_ = l_Lean_Expr_isAppOf(v_e_2210_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; uint8_t v___x_2251_; 
v___x_2250_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__4));
v___x_2251_ = l_Lean_Expr_isAppOf(v_e_2210_, v___x_2250_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; uint8_t v___x_2253_; lean_object* v___y_2255_; lean_object* v_proof_2256_; lean_object* v___x_2271_; lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2704_; 
v___x_2252_ = lean_box(0);
v___x_2253_ = 1;
v___x_2271_ = l_Lean_Meta_isMatcherApp___at___00Lean_Meta_rwMatcher_spec__2___redArg(v_e_2210_, v_a_2214_);
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2274_ = v___x_2271_;
v_isShared_2275_ = v_isSharedCheck_2704_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2271_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2704_;
goto v_resetjp_2273_;
}
v___jp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_proof_2256_);
v___x_2258_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2258_, 0, v___y_2255_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
lean_ctor_set_uint8(v___x_2258_, sizeof(void*)*2, v___x_2253_);
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
return v___x_2259_;
}
v___jp_2260_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2261_ = lean_box(0);
v___x_2262_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2262_, 0, v_e_2210_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
lean_ctor_set_uint8(v___x_2262_, sizeof(void*)*2, v___x_2253_);
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
return v___x_2263_;
}
v___jp_2264_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2265_ = lean_box(0);
v___x_2266_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2266_, 0, v_e_2210_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
lean_ctor_set_uint8(v___x_2266_, sizeof(void*)*2, v___x_2253_);
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
v___jp_2268_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_box(0);
v___x_2270_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2210_, v___x_2253_, v___x_2269_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
v___y_2238_ = v___x_2270_;
goto v___jp_2237_;
}
v_resetjp_2273_:
{
uint8_t v___x_2276_; 
v___x_2276_ = lean_unbox(v_a_2272_);
lean_dec(v_a_2272_);
if (v___x_2276_ == 0)
{
lean_object* v_toCold_2277_; lean_object* v_options_2278_; uint8_t v_hasTrace_2279_; 
lean_del_object(v___x_2274_);
lean_dec(v_altIdx_2209_);
v_toCold_2277_ = lean_ctor_get(v_a_2213_, 0);
v_options_2278_ = lean_ctor_get(v_toCold_2277_, 2);
v_hasTrace_2279_ = lean_ctor_get_uint8(v_options_2278_, sizeof(void*)*1);
if (v_hasTrace_2279_ == 0)
{
goto v___jp_2260_;
}
else
{
lean_object* v_inheritedTraceOptions_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; 
v_inheritedTraceOptions_2280_ = lean_ctor_get(v_toCold_2277_, 11);
v___x_2281_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2282_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2283_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2280_, v_options_2278_, v___x_2282_);
if (v___x_2283_ == 0)
{
goto v___jp_2260_;
}
else
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2284_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__13, &l_Lean_Meta_rwMatcher___closed__13_once, _init_l_Lean_Meta_rwMatcher___closed__13);
lean_inc_ref(v_e_2210_);
v___x_2285_ = l_Lean_indentExpr(v_e_2210_);
v___x_2286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2281_, v___x_2286_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_dec_ref_known(v___x_2287_, 1);
goto v___jp_2260_;
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_dec_ref(v_e_2210_);
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
}
else
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = l_Lean_Expr_getAppFn(v_e_2210_);
v___x_2297_ = l_Lean_Expr_constName_x21(v___x_2296_);
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
lean_inc(v___x_2297_);
v___x_2298_ = lean_get_congr_match_equations_for(v___x_2297_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2695_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2301_ = v___x_2298_;
v_isShared_2302_ = v_isSharedCheck_2695_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2298_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2695_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2303_ = lean_array_get_size(v_a_2299_);
v___x_2304_ = lean_nat_dec_lt(v_altIdx_2209_, v___x_2303_);
if (v___x_2304_ == 0)
{
lean_object* v_toCold_2305_; lean_object* v_options_2306_; uint8_t v_hasTrace_2307_; 
lean_del_object(v___x_2301_);
lean_dec(v_a_2299_);
lean_dec_ref(v___x_2296_);
v_toCold_2305_ = lean_ctor_get(v_a_2213_, 0);
v_options_2306_ = lean_ctor_get(v_toCold_2305_, 2);
v_hasTrace_2307_ = lean_ctor_get_uint8(v_options_2306_, sizeof(void*)*1);
if (v_hasTrace_2307_ == 0)
{
lean_dec(v___x_2297_);
lean_del_object(v___x_2274_);
lean_dec(v_altIdx_2209_);
goto v___jp_2264_;
}
else
{
lean_object* v_inheritedTraceOptions_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; 
v_inheritedTraceOptions_2308_ = lean_ctor_get(v_toCold_2305_, 11);
v___x_2309_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2310_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2311_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2308_, v_options_2306_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_dec(v___x_2297_);
lean_del_object(v___x_2274_);
lean_dec(v_altIdx_2209_);
goto v___jp_2264_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2312_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__15, &l_Lean_Meta_rwMatcher___closed__15_once, _init_l_Lean_Meta_rwMatcher___closed__15);
v___x_2313_ = l_Nat_reprFast(v_altIdx_2209_);
if (v_isShared_2275_ == 0)
{
lean_ctor_set_tag(v___x_2274_, 3);
lean_ctor_set(v___x_2274_, 0, v___x_2313_);
v___x_2315_ = v___x_2274_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2316_ = l_Lean_MessageData_ofFormat(v___x_2315_);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2312_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__17, &l_Lean_Meta_rwMatcher___closed__17_once, _init_l_Lean_Meta_rwMatcher___closed__17);
v___x_2319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = l_Nat_reprFast(v___x_2303_);
v___x_2321_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
v___x_2322_ = l_Lean_MessageData_ofFormat(v___x_2321_);
v___x_2323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2319_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__19, &l_Lean_Meta_rwMatcher___closed__19_once, _init_l_Lean_Meta_rwMatcher___closed__19);
v___x_2325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = l_Lean_MessageData_ofConstName(v___x_2297_, v___x_2304_);
v___x_2327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2325_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2309_, v___x_2327_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_dec_ref_known(v___x_2328_, 1);
goto v___jp_2264_;
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec_ref(v_e_2210_);
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2328_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2328_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_2338_; lean_object* v_options_2339_; lean_object* v_inheritedTraceOptions_2340_; uint8_t v_hasTrace_2341_; lean_object* v_nargs_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v_a_2346_; lean_object* v___y_2377_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v_dummy_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
lean_dec(v___x_2297_);
v_toCold_2338_ = lean_ctor_get(v_a_2213_, 0);
v_options_2339_ = lean_ctor_get(v_toCold_2338_, 2);
v_inheritedTraceOptions_2340_ = lean_ctor_get(v_toCold_2338_, 11);
v_hasTrace_2341_ = lean_ctor_get_uint8(v_options_2339_, sizeof(void*)*1);
v_nargs_2342_ = l_Lean_Expr_getAppNumArgs(v_e_2210_);
v___x_2343_ = lean_array_get(v___x_2252_, v_a_2299_, v_altIdx_2209_);
lean_dec(v_altIdx_2209_);
lean_dec(v_a_2299_);
v___x_2344_ = ((lean_object*)(l_Lean_Meta_rwMatcher___closed__8));
v___x_2379_ = l_Lean_Expr_constLevels_x21(v___x_2296_);
lean_dec_ref(v___x_2296_);
lean_inc(v___x_2343_);
v___x_2380_ = l_Lean_mkConst(v___x_2343_, v___x_2379_);
v_dummy_2381_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__24, &l_Lean_Meta_rwMatcher___closed__24_once, _init_l_Lean_Meta_rwMatcher___closed__24);
lean_inc(v_nargs_2342_);
v___x_2382_ = lean_mk_array(v_nargs_2342_, v_dummy_2381_);
v___x_2383_ = lean_unsigned_to_nat(1u);
v___x_2384_ = lean_nat_sub(v_nargs_2342_, v___x_2383_);
lean_dec(v_nargs_2342_);
lean_inc_ref(v_e_2210_);
v___x_2385_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2210_, v___x_2382_, v___x_2384_);
v___x_2386_ = l_Lean_mkAppN(v___x_2380_, v___x_2385_);
lean_dec_ref(v___x_2385_);
if (v_hasTrace_2341_ == 0)
{
lean_object* v___x_2387_; 
lean_del_object(v___x_2274_);
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
lean_inc_ref(v___x_2386_);
v___x_2387_ = lean_infer_type(v___x_2386_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; uint8_t v___x_2389_; lean_object* v___x_2390_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v___x_2389_ = 0;
v___x_2390_ = l_Lean_Meta_forallMetaTelescope(v_a_2388_, v___x_2389_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v_snd_2392_; lean_object* v_fst_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2529_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
v_snd_2392_ = lean_ctor_get(v_a_2391_, 1);
v_fst_2393_ = lean_ctor_get(v_a_2391_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_a_2391_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2395_ = v_a_2391_;
v_isShared_2396_ = v_isSharedCheck_2529_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_snd_2392_);
lean_inc(v_fst_2393_);
lean_dec(v_a_2391_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2529_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v_snd_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2527_; 
v_snd_2397_ = lean_ctor_get(v_snd_2392_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_snd_2392_);
if (v_isSharedCheck_2527_ == 0)
{
lean_object* v_unused_2528_; 
v_unused_2528_ = lean_ctor_get(v_snd_2392_, 0);
lean_dec(v_unused_2528_);
v___x_2399_ = v_snd_2392_;
v_isShared_2400_ = v_isSharedCheck_2527_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_snd_2397_);
lean_dec(v_snd_2392_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2527_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___y_2403_; uint8_t v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; uint8_t v___y_2440_; lean_object* v___y_2441_; lean_object* v_a_2442_; size_t v_sz_2458_; size_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___y_2462_; uint8_t v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; uint8_t v_fst_2481_; lean_object* v_fst_2482_; lean_object* v_snd_2483_; lean_object* v___y_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___x_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2401_ = l_Lean_mkAppN(v___x_2386_, v_fst_2393_);
v_sz_2458_ = lean_array_size(v_fst_2393_);
v___x_2459_ = ((size_t)0ULL);
v___x_2460_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_rwMatcher_spec__4(v_sz_2458_, v___x_2459_, v_fst_2393_);
v___x_2507_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__18));
v___x_2508_ = lean_unsigned_to_nat(4u);
v___x_2509_ = l_Lean_Expr_isAppOfArity(v_snd_2397_, v___x_2507_, v___x_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2510_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__20));
v___x_2511_ = lean_unsigned_to_nat(3u);
v___x_2512_ = l_Lean_Expr_isAppOfArity(v_snd_2397_, v___x_2510_, v___x_2511_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v_a_2519_; 
lean_dec_ref(v___x_2460_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_dec(v_snd_2397_);
lean_del_object(v___x_2395_);
v___x_2513_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__22, &l_Lean_Meta_rwMatcher___lam__2___closed__22_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__22);
lean_inc(v___x_2343_);
v___x_2514_ = l_Lean_MessageData_ofConstName(v___x_2343_, v___x_2251_);
v___x_2515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2513_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__24, &l_Lean_Meta_rwMatcher___lam__2___closed__24_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__24);
v___x_2517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2515_);
lean_ctor_set(v___x_2517_, 1, v___x_2516_);
v___x_2518_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2517_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2519_);
lean_dec_ref(v___x_2518_);
v_a_2346_ = v_a_2519_;
goto v___jp_2345_;
}
else
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2520_ = l_Lean_Expr_appFn_x21(v_snd_2397_);
v___x_2521_ = l_Lean_Expr_appArg_x21(v___x_2520_);
lean_dec_ref(v___x_2520_);
v___x_2522_ = l_Lean_Expr_appArg_x21(v_snd_2397_);
lean_dec(v_snd_2397_);
v_fst_2481_ = v___x_2251_;
v_fst_2482_ = v___x_2521_;
v_snd_2483_ = v___x_2522_;
v___y_2484_ = v_a_2211_;
v___y_2485_ = v_a_2212_;
v___y_2486_ = v_a_2213_;
v___y_2487_ = v_a_2214_;
goto v___jp_2480_;
}
}
else
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2523_ = l_Lean_Expr_appFn_x21(v_snd_2397_);
v___x_2524_ = l_Lean_Expr_appFn_x21(v___x_2523_);
lean_dec_ref(v___x_2523_);
v___x_2525_ = l_Lean_Expr_appArg_x21(v___x_2524_);
lean_dec_ref(v___x_2524_);
v___x_2526_ = l_Lean_Expr_appArg_x21(v_snd_2397_);
lean_dec(v_snd_2397_);
v_fst_2481_ = v___x_2253_;
v_fst_2482_ = v___x_2525_;
v_snd_2483_ = v___x_2526_;
v___y_2484_ = v_a_2211_;
v___y_2485_ = v_a_2212_;
v___y_2486_ = v_a_2213_;
v___y_2487_ = v_a_2214_;
goto v___jp_2480_;
}
v___jp_2402_:
{
lean_object* v___x_2409_; lean_object* v_a_2410_; lean_object* v___x_2411_; 
v___x_2409_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___y_2403_, v___y_2406_);
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2410_);
lean_dec_ref(v___x_2409_);
v___x_2411_ = l_Lean_instantiateMVars___at___00Lean_Meta_rwMatcher_spec__5___redArg(v___x_2401_, v___y_2406_);
if (v___y_2404_ == 0)
{
lean_object* v_a_2412_; 
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
lean_dec(v___x_2343_);
lean_del_object(v___x_2301_);
lean_dec_ref(v_e_2210_);
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref(v___x_2411_);
v___y_2255_ = v_a_2410_;
v_proof_2256_ = v_a_2412_;
goto v___jp_2254_;
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2411_, 0);
lean_inc_n(v_a_2413_, 2);
lean_dec_ref(v___x_2411_);
v___x_2414_ = l_Lean_Meta_mkEqOfHEq(v_a_2413_, v___x_2253_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; 
lean_dec(v_a_2413_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
lean_dec(v___x_2343_);
lean_del_object(v___x_2301_);
lean_dec_ref(v_e_2210_);
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___y_2255_ = v_a_2410_;
v_proof_2256_ = v_a_2415_;
goto v___jp_2254_;
}
else
{
lean_object* v_a_2416_; uint8_t v___x_2417_; 
lean_dec(v_a_2410_);
v_a_2416_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2417_ = l_Lean_Exception_isInterrupt(v_a_2416_);
if (v___x_2417_ == 0)
{
uint8_t v___x_2418_; 
lean_inc(v_a_2416_);
v___x_2418_ = l_Lean_Exception_isRuntime(v_a_2416_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2422_; 
v___x_2419_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__1, &l_Lean_Meta_rwMatcher___lam__2___closed__1_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__1);
v___x_2420_ = l_Lean_MessageData_ofExpr(v_a_2413_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set_tag(v___x_2399_, 7);
lean_ctor_set(v___x_2399_, 1, v___x_2420_);
lean_ctor_set(v___x_2399_, 0, v___x_2419_);
v___x_2422_ = v___x_2399_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2419_);
lean_ctor_set(v_reuseFailAlloc_2434_, 1, v___x_2420_);
v___x_2422_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2423_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__3, &l_Lean_Meta_rwMatcher___lam__2___closed__3_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__3);
if (v_isShared_2396_ == 0)
{
lean_ctor_set_tag(v___x_2395_, 7);
lean_ctor_set(v___x_2395_, 1, v___x_2423_);
lean_ctor_set(v___x_2395_, 0, v___x_2422_);
v___x_2425_ = v___x_2395_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2422_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v_a_2432_; 
v___x_2426_ = l_Lean_Exception_toMessageData(v_a_2416_);
v___x_2427_ = l_Lean_indentD(v___x_2426_);
v___x_2428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2425_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__5, &l_Lean_Meta_rwMatcher___lam__2___closed__5_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__5);
v___x_2430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
v___x_2431_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2430_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref(v___x_2431_);
v_a_2346_ = v_a_2432_;
goto v___jp_2345_;
}
}
}
else
{
lean_dec(v_a_2413_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v_a_2346_ = v_a_2416_;
goto v___jp_2345_;
}
}
else
{
lean_dec(v_a_2413_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v_a_2346_ = v_a_2416_;
goto v___jp_2345_;
}
}
}
}
v___jp_2435_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; 
v___x_2443_ = lean_array_get_size(v_a_2442_);
v___x_2444_ = lean_unsigned_to_nat(0u);
v___x_2445_ = lean_nat_dec_eq(v___x_2443_, v___x_2444_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v_a_2457_; 
lean_dec_ref(v___y_2436_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v___x_2446_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__7, &l_Lean_Meta_rwMatcher___lam__2___closed__7_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__7);
lean_inc(v___x_2343_);
v___x_2447_ = l_Lean_MessageData_ofConstName(v___x_2343_, v___x_2445_);
v___x_2448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__9, &l_Lean_Meta_rwMatcher___lam__2___closed__9_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__9);
v___x_2450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = lean_array_to_list(v_a_2442_);
v___x_2452_ = lean_box(0);
v___x_2453_ = l_List_mapTR_loop___at___00Lean_Meta_rwMatcher_spec__7(v___x_2451_, v___x_2452_);
v___x_2454_ = l_Lean_MessageData_ofList(v___x_2453_);
v___x_2455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2450_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
v___x_2456_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2455_, v___y_2437_, v___y_2441_, v___y_2439_, v___y_2438_);
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref(v___x_2456_);
v_a_2346_ = v_a_2457_;
goto v___jp_2345_;
}
else
{
lean_dec_ref(v_a_2442_);
v___y_2403_ = v___y_2436_;
v___y_2404_ = v___y_2440_;
v___y_2405_ = v___y_2437_;
v___y_2406_ = v___y_2441_;
v___y_2407_ = v___y_2439_;
v___y_2408_ = v___y_2438_;
goto v___jp_2402_;
}
}
v___jp_2461_:
{
lean_object* v___x_2468_; size_t v_sz_2469_; lean_object* v___x_2470_; 
v___x_2468_ = lean_box(0);
v_sz_2469_ = lean_array_size(v___x_2460_);
v___x_2470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8(v___x_2460_, v_sz_2469_, v___x_2459_, v___x_2468_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
lean_dec_ref_known(v___x_2470_, 1);
v___x_2471_ = lean_unsigned_to_nat(0u);
v___x_2472_ = lean_array_get_size(v___x_2460_);
v___x_2473_ = ((lean_object*)(l_Lean_Meta_rwMatcher___lam__2___closed__10));
v___x_2474_ = lean_nat_dec_lt(v___x_2471_, v___x_2472_);
if (v___x_2474_ == 0)
{
lean_dec_ref(v___x_2460_);
v___y_2436_ = v___y_2462_;
v___y_2437_ = v___y_2464_;
v___y_2438_ = v___y_2467_;
v___y_2439_ = v___y_2466_;
v___y_2440_ = v___y_2463_;
v___y_2441_ = v___y_2465_;
v_a_2442_ = v___x_2473_;
goto v___jp_2435_;
}
else
{
size_t v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = lean_usize_of_nat(v___x_2472_);
v___x_2476_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_rwMatcher_spec__9(v___x_2460_, v___x_2459_, v___x_2475_, v___x_2473_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
lean_dec_ref(v___x_2460_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2476_, 1);
v___y_2436_ = v___y_2462_;
v___y_2437_ = v___y_2464_;
v___y_2438_ = v___y_2467_;
v___y_2439_ = v___y_2466_;
v___y_2440_ = v___y_2463_;
v___y_2441_ = v___y_2465_;
v_a_2442_ = v_a_2477_;
goto v___jp_2435_;
}
else
{
lean_object* v_a_2478_; 
lean_dec_ref(v___y_2462_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v_a_2478_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2478_);
lean_dec_ref_known(v___x_2476_, 1);
v_a_2346_ = v_a_2478_;
goto v___jp_2345_;
}
}
}
else
{
lean_object* v_a_2479_; 
lean_dec_ref(v___y_2462_);
lean_dec_ref(v___x_2460_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v_a_2479_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2479_);
lean_dec_ref_known(v___x_2470_, 1);
v_a_2346_ = v_a_2479_;
goto v___jp_2345_;
}
}
v___jp_2480_:
{
lean_object* v___x_2488_; 
lean_inc_ref(v_fst_2482_);
lean_inc_ref(v_e_2210_);
v___x_2488_ = l_Lean_Meta_isExprDefEq(v_e_2210_, v_fst_2482_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; uint8_t v___x_2490_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2488_, 1);
v___x_2490_ = lean_unbox(v_a_2489_);
lean_dec(v_a_2489_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v_a_2505_; 
lean_dec_ref(v_snd_2483_);
lean_dec_ref(v___x_2460_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v___x_2491_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__12, &l_Lean_Meta_rwMatcher___lam__2___closed__12_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__12);
v___x_2492_ = l_Lean_MessageData_ofExpr(v_fst_2482_);
v___x_2493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2491_);
lean_ctor_set(v___x_2493_, 1, v___x_2492_);
v___x_2494_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__14, &l_Lean_Meta_rwMatcher___lam__2___closed__14_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__14);
v___x_2495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2493_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
lean_inc(v___x_2343_);
v___x_2496_ = l_Lean_MessageData_ofConstName(v___x_2343_, v___x_2251_);
v___x_2497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2495_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = lean_obj_once(&l_Lean_Meta_rwMatcher___lam__2___closed__16, &l_Lean_Meta_rwMatcher___lam__2___closed__16_once, _init_l_Lean_Meta_rwMatcher___lam__2___closed__16);
v___x_2499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2497_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
lean_inc_ref(v_e_2210_);
v___x_2500_ = l_Lean_MessageData_ofExpr(v_e_2210_);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_rwMatcher_spec__8___closed__3);
v___x_2503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2501_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
v___x_2504_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v___x_2503_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
lean_inc(v_a_2505_);
lean_dec_ref(v___x_2504_);
v_a_2346_ = v_a_2505_;
goto v___jp_2345_;
}
else
{
lean_dec_ref(v_fst_2482_);
v___y_2462_ = v_snd_2483_;
v___y_2463_ = v_fst_2481_;
v___y_2464_ = v___y_2484_;
v___y_2465_ = v___y_2485_;
v___y_2466_ = v___y_2486_;
v___y_2467_ = v___y_2487_;
goto v___jp_2461_;
}
}
else
{
lean_object* v_a_2506_; 
lean_dec_ref(v_snd_2483_);
lean_dec_ref(v_fst_2482_);
lean_dec_ref(v___x_2460_);
lean_dec_ref(v___x_2401_);
lean_del_object(v___x_2399_);
lean_del_object(v___x_2395_);
v_a_2506_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2506_);
lean_dec_ref_known(v___x_2488_, 1);
v_a_2346_ = v_a_2506_;
goto v___jp_2345_;
}
}
}
}
}
else
{
lean_object* v_a_2530_; 
lean_dec_ref(v___x_2386_);
v_a_2530_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2390_, 1);
v_a_2346_ = v_a_2530_;
goto v___jp_2345_;
}
}
else
{
lean_object* v_a_2531_; 
lean_dec_ref(v___x_2386_);
v_a_2531_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2387_, 1);
v_a_2346_ = v_a_2531_;
goto v___jp_2345_;
}
}
else
{
lean_object* v___x_2532_; lean_object* v___f_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; uint8_t v___x_2536_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v_a_2540_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v_a_2555_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v_a_2575_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v_a_2587_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; 
v___x_2532_ = lean_box(v___x_2251_);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___f_2533_ = lean_alloc_closure((void*)(l_Lean_Meta_rwMatcher___lam__1___boxed), 9, 3);
lean_closure_set(v___f_2533_, 0, v___x_2343_);
lean_closure_set(v___f_2533_, 1, v___x_2532_);
lean_closure_set(v___f_2533_, 2, v_e_2210_);
v___x_2534_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3___closed__1));
v___x_2535_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2536_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2340_, v_options_2339_, v___x_2535_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2665_; uint8_t v___x_2666_; 
v___x_2665_ = l_Lean_trace_profiler;
v___x_2666_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2339_, v___x_2665_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; 
lean_dec_ref(v___f_2533_);
lean_del_object(v___x_2274_);
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
lean_inc_ref(v___x_2386_);
v___x_2667_ = lean_infer_type(v___x_2386_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
v___x_2669_ = 0;
v___x_2670_ = l_Lean_Meta_forallMetaTelescope(v_a_2668_, v___x_2669_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v_snd_2672_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref_known(v___x_2670_, 1);
v_snd_2672_ = lean_ctor_get(v_a_2671_, 1);
lean_inc(v_snd_2672_);
if (v___x_2536_ == 0)
{
lean_object* v_fst_2673_; lean_object* v_snd_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_fst_2673_ = lean_ctor_get(v_a_2671_, 0);
lean_inc(v_fst_2673_);
lean_dec(v_a_2671_);
v_snd_2674_ = lean_ctor_get(v_snd_2672_, 1);
lean_inc(v_snd_2674_);
lean_dec(v_snd_2672_);
v___x_2675_ = lean_box(0);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2676_ = l_Lean_Meta_rwMatcher___lam__4(v___x_2253_, v___x_2386_, v_fst_2673_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2674_, v___x_2675_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2674_);
v___y_2377_ = v___x_2676_;
goto v___jp_2376_;
}
else
{
lean_object* v_fst_2677_; lean_object* v_snd_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2691_; 
v_fst_2677_ = lean_ctor_get(v_a_2671_, 0);
lean_inc(v_fst_2677_);
lean_dec(v_a_2671_);
v_snd_2678_ = lean_ctor_get(v_snd_2672_, 1);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_snd_2672_);
if (v_isSharedCheck_2691_ == 0)
{
lean_object* v_unused_2692_; 
v_unused_2692_ = lean_ctor_get(v_snd_2672_, 0);
lean_dec(v_unused_2692_);
v___x_2680_ = v_snd_2672_;
v_isShared_2681_ = v_isSharedCheck_2691_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_snd_2678_);
lean_dec(v_snd_2672_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2691_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2682_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2678_);
v___x_2683_ = l_Lean_indentExpr(v_snd_2678_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 7);
lean_ctor_set(v___x_2680_, 1, v___x_2683_);
lean_ctor_set(v___x_2680_, 0, v___x_2682_);
v___x_2685_ = v___x_2680_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; 
v___x_2686_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2344_, v___x_2685_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2688_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2688_ = l_Lean_Meta_rwMatcher___lam__4(v___x_2253_, v___x_2386_, v_fst_2677_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2678_, v_a_2687_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2678_);
v___y_2377_ = v___x_2688_;
goto v___jp_2376_;
}
else
{
lean_object* v_a_2689_; 
lean_dec(v_snd_2678_);
lean_dec(v_fst_2677_);
lean_dec_ref(v___x_2386_);
v_a_2689_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2686_, 1);
v_a_2346_ = v_a_2689_;
goto v___jp_2345_;
}
}
}
}
}
else
{
lean_object* v_a_2693_; 
lean_dec_ref(v___x_2386_);
v_a_2693_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2670_, 1);
v_a_2346_ = v_a_2693_;
goto v___jp_2345_;
}
}
else
{
lean_object* v_a_2694_; 
lean_dec_ref(v___x_2386_);
v_a_2694_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2667_, 1);
v_a_2346_ = v_a_2694_;
goto v___jp_2345_;
}
}
else
{
goto v___jp_2602_;
}
}
else
{
goto v___jp_2602_;
}
v___jp_2537_:
{
lean_object* v___x_2541_; double v___x_2542_; double v___x_2543_; double v___x_2544_; double v___x_2545_; double v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2541_ = lean_io_mono_nanos_now();
v___x_2542_ = lean_float_of_nat(v___y_2538_);
v___x_2543_ = lean_float_once(&l_Lean_Meta_rwMatcher___closed__25, &l_Lean_Meta_rwMatcher___closed__25_once, _init_l_Lean_Meta_rwMatcher___closed__25);
v___x_2544_ = lean_float_div(v___x_2542_, v___x_2543_);
v___x_2545_ = lean_float_of_nat(v___x_2541_);
v___x_2546_ = lean_float_div(v___x_2545_, v___x_2543_);
v___x_2547_ = lean_box_float(v___x_2544_);
v___x_2548_ = lean_box_float(v___x_2546_);
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2547_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2550_, 0, v_a_2540_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___x_2551_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2344_, v___x_2253_, v___x_2534_, v_options_2339_, v___x_2536_, v___y_2539_, v___f_2533_, v___x_2550_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
v___y_2377_ = v___x_2551_;
goto v___jp_2376_;
}
v___jp_2552_:
{
lean_object* v___x_2557_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v_a_2555_);
v___x_2557_ = v___x_2274_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2555_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
v___y_2538_ = v___y_2553_;
v___y_2539_ = v___y_2554_;
v_a_2540_ = v___x_2557_;
goto v___jp_2537_;
}
}
v___jp_2559_:
{
if (lean_obj_tag(v___y_2562_) == 0)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_del_object(v___x_2274_);
v_a_2563_ = lean_ctor_get(v___y_2562_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___y_2562_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___y_2562_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___y_2562_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
lean_ctor_set_tag(v___x_2565_, 1);
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
v___y_2538_ = v___y_2560_;
v___y_2539_ = v___y_2561_;
v_a_2540_ = v___x_2568_;
goto v___jp_2537_;
}
}
}
else
{
lean_object* v_a_2571_; 
v_a_2571_ = lean_ctor_get(v___y_2562_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___y_2562_, 1);
v___y_2553_ = v___y_2560_;
v___y_2554_ = v___y_2561_;
v_a_2555_ = v_a_2571_;
goto v___jp_2552_;
}
}
v___jp_2572_:
{
lean_object* v___x_2576_; double v___x_2577_; double v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2576_ = lean_io_get_num_heartbeats();
v___x_2577_ = lean_float_of_nat(v___y_2573_);
v___x_2578_ = lean_float_of_nat(v___x_2576_);
v___x_2579_ = lean_box_float(v___x_2577_);
v___x_2580_ = lean_box_float(v___x_2578_);
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2582_, 0, v_a_2575_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12(v___x_2344_, v___x_2253_, v___x_2534_, v_options_2339_, v___x_2536_, v___y_2574_, v___f_2533_, v___x_2582_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
v___y_2377_ = v___x_2583_;
goto v___jp_2376_;
}
v___jp_2584_:
{
lean_object* v___x_2588_; 
v___x_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2588_, 0, v_a_2587_);
v___y_2573_ = v___y_2585_;
v___y_2574_ = v___y_2586_;
v_a_2575_ = v___x_2588_;
goto v___jp_2572_;
}
v___jp_2589_:
{
if (lean_obj_tag(v___y_2592_) == 0)
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
v_a_2593_ = lean_ctor_get(v___y_2592_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___y_2592_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___y_2592_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___y_2592_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
lean_ctor_set_tag(v___x_2595_, 1);
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
v___y_2573_ = v___y_2590_;
v___y_2574_ = v___y_2591_;
v_a_2575_ = v___x_2598_;
goto v___jp_2572_;
}
}
}
else
{
lean_object* v_a_2601_; 
v_a_2601_ = lean_ctor_get(v___y_2592_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___y_2592_, 1);
v___y_2585_ = v___y_2590_;
v___y_2586_ = v___y_2591_;
v_a_2587_ = v_a_2601_;
goto v___jp_2584_;
}
}
v___jp_2602_:
{
lean_object* v___x_2603_; lean_object* v_a_2604_; lean_object* v___x_2605_; uint8_t v___x_2606_; 
v___x_2603_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_rwMatcher_spec__10___redArg(v_a_2214_);
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref(v___x_2603_);
v___x_2605_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2606_ = l_Lean_Option_get___at___00Lean_Meta_rwMatcher_spec__11(v_options_2339_, v___x_2605_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = lean_io_mono_nanos_now();
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
lean_inc_ref(v___x_2386_);
v___x_2608_ = lean_infer_type(v___x_2386_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; uint8_t v___x_2610_; lean_object* v___x_2611_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2608_, 1);
v___x_2610_ = 0;
v___x_2611_ = l_Lean_Meta_forallMetaTelescope(v_a_2609_, v___x_2610_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v_snd_2613_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2612_);
lean_dec_ref_known(v___x_2611_, 1);
v_snd_2613_ = lean_ctor_get(v_a_2612_, 1);
lean_inc(v_snd_2613_);
if (v___x_2536_ == 0)
{
lean_object* v_fst_2614_; lean_object* v_snd_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v_fst_2614_ = lean_ctor_get(v_a_2612_, 0);
lean_inc(v_fst_2614_);
lean_dec(v_a_2612_);
v_snd_2615_ = lean_ctor_get(v_snd_2613_, 1);
lean_inc(v_snd_2615_);
lean_dec(v_snd_2613_);
v___x_2616_ = lean_box(0);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2617_ = l_Lean_Meta_rwMatcher___lam__2(v___x_2253_, v___x_2386_, v_fst_2614_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2615_, v___x_2616_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2615_);
v___y_2560_ = v___x_2607_;
v___y_2561_ = v_a_2604_;
v___y_2562_ = v___x_2617_;
goto v___jp_2559_;
}
else
{
lean_object* v_fst_2618_; lean_object* v_snd_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2632_; 
v_fst_2618_ = lean_ctor_get(v_a_2612_, 0);
lean_inc(v_fst_2618_);
lean_dec(v_a_2612_);
v_snd_2619_ = lean_ctor_get(v_snd_2613_, 1);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_snd_2613_);
if (v_isSharedCheck_2632_ == 0)
{
lean_object* v_unused_2633_; 
v_unused_2633_ = lean_ctor_get(v_snd_2613_, 0);
lean_dec(v_unused_2633_);
v___x_2621_ = v_snd_2613_;
v_isShared_2622_ = v_isSharedCheck_2632_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_snd_2619_);
lean_dec(v_snd_2613_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2632_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2626_; 
v___x_2623_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2619_);
v___x_2624_ = l_Lean_indentExpr(v_snd_2619_);
if (v_isShared_2622_ == 0)
{
lean_ctor_set_tag(v___x_2621_, 7);
lean_ctor_set(v___x_2621_, 1, v___x_2624_);
lean_ctor_set(v___x_2621_, 0, v___x_2623_);
v___x_2626_ = v___x_2621_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2623_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v___x_2624_);
v___x_2626_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2627_; 
v___x_2627_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2344_, v___x_2626_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2629_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2629_ = l_Lean_Meta_rwMatcher___lam__2(v___x_2253_, v___x_2386_, v_fst_2618_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2619_, v_a_2628_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2619_);
v___y_2560_ = v___x_2607_;
v___y_2561_ = v_a_2604_;
v___y_2562_ = v___x_2629_;
goto v___jp_2559_;
}
else
{
lean_object* v_a_2630_; 
lean_dec(v_snd_2619_);
lean_dec(v_fst_2618_);
lean_dec_ref(v___x_2386_);
v_a_2630_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2627_, 1);
v___y_2553_ = v___x_2607_;
v___y_2554_ = v_a_2604_;
v_a_2555_ = v_a_2630_;
goto v___jp_2552_;
}
}
}
}
}
else
{
lean_object* v_a_2634_; 
lean_dec_ref(v___x_2386_);
v_a_2634_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2634_);
lean_dec_ref_known(v___x_2611_, 1);
v___y_2553_ = v___x_2607_;
v___y_2554_ = v_a_2604_;
v_a_2555_ = v_a_2634_;
goto v___jp_2552_;
}
}
else
{
lean_object* v_a_2635_; 
lean_dec_ref(v___x_2386_);
v_a_2635_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2608_, 1);
v___y_2553_ = v___x_2607_;
v___y_2554_ = v_a_2604_;
v_a_2555_ = v_a_2635_;
goto v___jp_2552_;
}
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
lean_del_object(v___x_2274_);
v___x_2636_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
lean_inc_ref(v___x_2386_);
v___x_2637_ = lean_infer_type(v___x_2386_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; uint8_t v___x_2639_; lean_object* v___x_2640_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
v___x_2639_ = 0;
v___x_2640_ = l_Lean_Meta_forallMetaTelescope(v_a_2638_, v___x_2639_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v_snd_2642_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2640_, 1);
v_snd_2642_ = lean_ctor_get(v_a_2641_, 1);
lean_inc(v_snd_2642_);
if (v___x_2536_ == 0)
{
lean_object* v_fst_2643_; lean_object* v_snd_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v_fst_2643_ = lean_ctor_get(v_a_2641_, 0);
lean_inc(v_fst_2643_);
lean_dec(v_a_2641_);
v_snd_2644_ = lean_ctor_get(v_snd_2642_, 1);
lean_inc(v_snd_2644_);
lean_dec(v_snd_2642_);
v___x_2645_ = lean_box(0);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2646_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2253_, v___x_2386_, v_fst_2643_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2644_, v___x_2645_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2644_);
v___y_2590_ = v___x_2636_;
v___y_2591_ = v_a_2604_;
v___y_2592_ = v___x_2646_;
goto v___jp_2589_;
}
else
{
lean_object* v_fst_2647_; lean_object* v_snd_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2661_; 
v_fst_2647_ = lean_ctor_get(v_a_2641_, 0);
lean_inc(v_fst_2647_);
lean_dec(v_a_2641_);
v_snd_2648_ = lean_ctor_get(v_snd_2642_, 1);
v_isSharedCheck_2661_ = !lean_is_exclusive(v_snd_2642_);
if (v_isSharedCheck_2661_ == 0)
{
lean_object* v_unused_2662_; 
v_unused_2662_ = lean_ctor_get(v_snd_2642_, 0);
lean_dec(v_unused_2662_);
v___x_2650_ = v_snd_2642_;
v_isShared_2651_ = v_isSharedCheck_2661_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_snd_2648_);
lean_dec(v_snd_2642_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2661_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2655_; 
v___x_2652_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__27, &l_Lean_Meta_rwMatcher___closed__27_once, _init_l_Lean_Meta_rwMatcher___closed__27);
lean_inc(v_snd_2648_);
v___x_2653_ = l_Lean_indentExpr(v_snd_2648_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 7);
lean_ctor_set(v___x_2650_, 1, v___x_2653_);
lean_ctor_set(v___x_2650_, 0, v___x_2652_);
v___x_2655_ = v___x_2650_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2652_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v___x_2653_);
v___x_2655_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2344_, v___x_2655_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2658_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2656_, 1);
lean_inc_ref(v_e_2210_);
lean_inc(v___x_2343_);
v___x_2658_ = l_Lean_Meta_rwMatcher___lam__3(v___x_2253_, v___x_2386_, v_fst_2647_, v___x_2343_, v_e_2210_, v___x_2251_, v_snd_2648_, v_a_2657_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_snd_2648_);
v___y_2590_ = v___x_2636_;
v___y_2591_ = v_a_2604_;
v___y_2592_ = v___x_2658_;
goto v___jp_2589_;
}
else
{
lean_object* v_a_2659_; 
lean_dec(v_snd_2648_);
lean_dec(v_fst_2647_);
lean_dec_ref(v___x_2386_);
v_a_2659_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2656_, 1);
v___y_2585_ = v___x_2636_;
v___y_2586_ = v_a_2604_;
v_a_2587_ = v_a_2659_;
goto v___jp_2584_;
}
}
}
}
}
else
{
lean_object* v_a_2663_; 
lean_dec_ref(v___x_2386_);
v_a_2663_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2640_, 1);
v___y_2585_ = v___x_2636_;
v___y_2586_ = v_a_2604_;
v_a_2587_ = v_a_2663_;
goto v___jp_2584_;
}
}
else
{
lean_object* v_a_2664_; 
lean_dec_ref(v___x_2386_);
v_a_2664_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2637_, 1);
v___y_2585_ = v___x_2636_;
v___y_2586_ = v_a_2604_;
v_a_2587_ = v_a_2664_;
goto v___jp_2584_;
}
}
}
}
v___jp_2345_:
{
uint8_t v___x_2347_; 
v___x_2347_ = l_Lean_Exception_isInterrupt(v_a_2346_);
if (v___x_2347_ == 0)
{
uint8_t v___x_2348_; 
lean_inc_ref(v_a_2346_);
v___x_2348_ = l_Lean_Exception_isRuntime(v_a_2346_);
if (v___x_2348_ == 0)
{
lean_del_object(v___x_2301_);
if (v_hasTrace_2341_ == 0)
{
lean_dec_ref(v_a_2346_);
lean_dec(v___x_2343_);
goto v___jp_2268_;
}
else
{
lean_object* v___x_2349_; uint8_t v___x_2350_; 
v___x_2349_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__11, &l_Lean_Meta_rwMatcher___closed__11_once, _init_l_Lean_Meta_rwMatcher___closed__11);
v___x_2350_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2340_, v_options_2339_, v___x_2349_);
if (v___x_2350_ == 0)
{
lean_dec_ref(v_a_2346_);
lean_dec(v___x_2343_);
goto v___jp_2268_;
}
else
{
lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2351_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__21, &l_Lean_Meta_rwMatcher___closed__21_once, _init_l_Lean_Meta_rwMatcher___closed__21);
v___x_2352_ = l_Lean_MessageData_ofConstName(v___x_2343_, v___x_2251_);
v___x_2353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2351_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = lean_obj_once(&l_Lean_Meta_rwMatcher___closed__23, &l_Lean_Meta_rwMatcher___closed__23_once, _init_l_Lean_Meta_rwMatcher___closed__23);
v___x_2355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2353_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
v___x_2356_ = l_Lean_Exception_toMessageData(v_a_2346_);
v___x_2357_ = l_Lean_indentD(v___x_2356_);
v___x_2358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2355_);
lean_ctor_set(v___x_2358_, 1, v___x_2357_);
v___x_2359_ = l_Lean_addTrace___at___00Lean_Meta_rwMatcher_spec__3(v___x_2344_, v___x_2358_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2361_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref_known(v___x_2359_, 1);
v___x_2361_ = l_Lean_Meta_rwMatcher___lam__0(v_e_2210_, v___x_2253_, v_a_2360_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
v___y_2238_ = v___x_2361_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
lean_dec_ref(v_e_2210_);
v_a_2362_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2359_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2359_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
}
}
else
{
lean_object* v___x_2371_; 
lean_dec(v___x_2343_);
lean_dec_ref(v_e_2210_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set_tag(v___x_2301_, 1);
lean_ctor_set(v___x_2301_, 0, v_a_2346_);
v___x_2371_ = v___x_2301_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2346_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
else
{
lean_object* v___x_2374_; 
lean_dec(v___x_2343_);
lean_dec_ref(v_e_2210_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set_tag(v___x_2301_, 1);
lean_ctor_set(v___x_2301_, 0, v_a_2346_);
v___x_2374_ = v___x_2301_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2346_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
v___jp_2376_:
{
if (lean_obj_tag(v___y_2377_) == 0)
{
lean_dec(v___x_2343_);
lean_del_object(v___x_2301_);
lean_dec_ref(v_e_2210_);
return v___y_2377_;
}
else
{
lean_object* v_a_2378_; 
v_a_2378_ = lean_ctor_get(v___y_2377_, 0);
lean_inc(v_a_2378_);
lean_dec_ref_known(v___y_2377_, 1);
v_a_2346_ = v_a_2378_;
goto v___jp_2345_;
}
}
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec(v___x_2297_);
lean_dec_ref(v___x_2296_);
lean_del_object(v___x_2274_);
lean_dec_ref(v_e_2210_);
lean_dec(v_altIdx_2209_);
v_a_2696_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2298_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2298_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
}
}
else
{
lean_dec(v_altIdx_2209_);
goto v___jp_2216_;
}
}
else
{
lean_dec(v_altIdx_2209_);
goto v___jp_2216_;
}
v___jp_2216_:
{
uint8_t v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = 1;
v___x_2218_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_e_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2228_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2221_ = v___x_2218_;
v_isShared_2222_ = v_isSharedCheck_2228_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2218_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2228_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2223_ = lean_box(0);
v___x_2224_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2224_, 0, v_a_2219_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
lean_ctor_set_uint8(v___x_2224_, sizeof(void*)*2, v___x_2217_);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 0, v___x_2224_);
v___x_2226_ = v___x_2221_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
v_a_2229_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2218_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2218_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
v___jp_2237_:
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2247_; 
v_a_2239_ = lean_ctor_get(v___y_2238_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___y_2238_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2241_ = v___y_2238_;
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___y_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v_a_2243_; lean_object* v___x_2245_; 
v_a_2243_ = lean_ctor_get(v_a_2239_, 0);
lean_inc(v_a_2243_);
lean_dec(v_a_2239_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v_a_2243_);
v___x_2245_ = v___x_2241_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2243_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_rwMatcher___boxed(lean_object* v_altIdx_2705_, lean_object* v_e_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_Meta_rwMatcher(v_altIdx_2705_, v_e_2706_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_);
lean_dec(v_a_2710_);
lean_dec_ref(v_a_2709_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(lean_object* v_inst_2713_, lean_object* v_a_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___redArg(v_a_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0___boxed(lean_object* v_inst_2721_, lean_object* v_a_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_rwMatcher_spec__0(v_inst_2721_, v_a_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(lean_object* v_mvarId_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___redArg(v_mvarId_2729_, v___y_2731_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1___boxed(lean_object* v_mvarId_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1(v_mvarId_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v_mvarId_2736_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(lean_object* v_00_u03b1_2743_, lean_object* v_msg_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___redArg(v_msg_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6___boxed(lean_object* v_00_u03b1_2751_, lean_object* v_msg_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_throwError___at___00Lean_Meta_rwMatcher_spec__6(v_00_u03b1_2751_, v_msg_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(lean_object* v_00_u03b1_2759_, lean_object* v_x_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___redArg(v_x_2760_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2767_, lean_object* v_x_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_rwMatcher_spec__12_spec__15(v_00_u03b1_2767_, v_x_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
return v_res_2774_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(lean_object* v_00_u03b2_2775_, lean_object* v_x_2776_, lean_object* v_x_2777_){
_start:
{
uint8_t v___x_2778_; 
v___x_2778_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___redArg(v_x_2776_, v_x_2777_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2779_, lean_object* v_x_2780_, lean_object* v_x_2781_){
_start:
{
uint8_t v_res_2782_; lean_object* v_r_2783_; 
v_res_2782_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1(v_00_u03b2_2779_, v_x_2780_, v_x_2781_);
lean_dec(v_x_2781_);
lean_dec_ref(v_x_2780_);
v_r_2783_ = lean_box(v_res_2782_);
return v_r_2783_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_2784_, lean_object* v_x_2785_, size_t v_x_2786_, lean_object* v_x_2787_){
_start:
{
uint8_t v___x_2788_; 
v___x_2788_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___redArg(v_x_2785_, v_x_2786_, v_x_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_2789_, lean_object* v_x_2790_, lean_object* v_x_2791_, lean_object* v_x_2792_){
_start:
{
size_t v_x_89092__boxed_2793_; uint8_t v_res_2794_; lean_object* v_r_2795_; 
v_x_89092__boxed_2793_ = lean_unbox_usize(v_x_2791_);
lean_dec(v_x_2791_);
v_res_2794_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6(v_00_u03b2_2789_, v_x_2790_, v_x_89092__boxed_2793_, v_x_2792_);
lean_dec(v_x_2792_);
lean_dec_ref(v_x_2790_);
v_r_2795_ = lean_box(v_res_2794_);
return v_r_2795_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(lean_object* v_00_u03b2_2796_, lean_object* v_keys_2797_, lean_object* v_vals_2798_, lean_object* v_heq_2799_, lean_object* v_i_2800_, lean_object* v_k_2801_){
_start:
{
uint8_t v___x_2802_; 
v___x_2802_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___redArg(v_keys_2797_, v_i_2800_, v_k_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18___boxed(lean_object* v_00_u03b2_2803_, lean_object* v_keys_2804_, lean_object* v_vals_2805_, lean_object* v_heq_2806_, lean_object* v_i_2807_, lean_object* v_k_2808_){
_start:
{
uint8_t v_res_2809_; lean_object* v_r_2810_; 
v_res_2809_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_rwMatcher_spec__1_spec__1_spec__6_spec__18(v_00_u03b2_2803_, v_keys_2804_, v_vals_2805_, v_heq_2806_, v_i_2807_, v_k_2808_);
lean_dec(v_k_2808_);
lean_dec_ref(v_vals_2805_);
lean_dec_ref(v_keys_2804_);
v_r_2810_ = lean_box(v_res_2809_);
return v_r_2810_;
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
