// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Rewrite
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic import Lean.Meta.Tactic.BVDecide.Normalize.Simproc import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround import Lean.Meta.Sym.DSimp import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Sym.Simp.ControlFlow
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
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_beta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zeta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "rewriteRules simproc statistics:"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed, .m_arity = 13, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_evalGround___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rewriteRules"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(39, 217, 1, 104, 84, 94, 139, 227)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(v_x_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object* v_mvarId_29_, lean_object* v_x_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_x_30_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_29_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object* v_mvarId_53_, lean_object* v_x_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_mvarId_53_, v_x_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object* v_00_u03b1_68_, lean_object* v_mvarId_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_mvarId_69_, v_x_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object* v_00_u03b1_84_, lean_object* v_mvarId_85_, lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(v_00_u03b1_84_, v_mvarId_85_, v_x_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_unsigned_to_nat(32u);
v___x_101_ = lean_mk_empty_array_with_capacity(v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_103_ = ((size_t)5ULL);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_unsigned_to_nat(32u);
v___x_106_ = lean_mk_empty_array_with_capacity(v___x_105_);
v___x_107_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0);
v___x_108_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_104_);
lean_ctor_set(v___x_108_, 3, v___x_104_);
lean_ctor_set_usize(v___x_108_, 4, v___x_103_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(lean_object* v___y_109_){
_start:
{
lean_object* v___x_111_; lean_object* v_traceState_112_; lean_object* v_traces_113_; lean_object* v___x_114_; lean_object* v_traceState_115_; lean_object* v_env_116_; lean_object* v_nextMacroScope_117_; lean_object* v_ngen_118_; lean_object* v_auxDeclNGen_119_; lean_object* v_cache_120_; lean_object* v_recordedDeps_121_; lean_object* v_messages_122_; lean_object* v_infoState_123_; lean_object* v_snapshotTasks_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_143_; 
v___x_111_ = lean_st_ref_get(v___y_109_);
v_traceState_112_ = lean_ctor_get(v___x_111_, 4);
lean_inc_ref(v_traceState_112_);
lean_dec(v___x_111_);
v_traces_113_ = lean_ctor_get(v_traceState_112_, 0);
lean_inc_ref(v_traces_113_);
lean_dec_ref(v_traceState_112_);
v___x_114_ = lean_st_ref_take(v___y_109_);
v_traceState_115_ = lean_ctor_get(v___x_114_, 4);
v_env_116_ = lean_ctor_get(v___x_114_, 0);
v_nextMacroScope_117_ = lean_ctor_get(v___x_114_, 1);
v_ngen_118_ = lean_ctor_get(v___x_114_, 2);
v_auxDeclNGen_119_ = lean_ctor_get(v___x_114_, 3);
v_cache_120_ = lean_ctor_get(v___x_114_, 5);
v_recordedDeps_121_ = lean_ctor_get(v___x_114_, 6);
v_messages_122_ = lean_ctor_get(v___x_114_, 7);
v_infoState_123_ = lean_ctor_get(v___x_114_, 8);
v_snapshotTasks_124_ = lean_ctor_get(v___x_114_, 9);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_143_ == 0)
{
v___x_126_ = v___x_114_;
v_isShared_127_ = v_isSharedCheck_143_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_snapshotTasks_124_);
lean_inc(v_infoState_123_);
lean_inc(v_messages_122_);
lean_inc(v_recordedDeps_121_);
lean_inc(v_cache_120_);
lean_inc(v_traceState_115_);
lean_inc(v_auxDeclNGen_119_);
lean_inc(v_ngen_118_);
lean_inc(v_nextMacroScope_117_);
lean_inc(v_env_116_);
lean_dec(v___x_114_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_143_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
uint64_t v_tid_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_141_; 
v_tid_128_ = lean_ctor_get_uint64(v_traceState_115_, sizeof(void*)*1);
v_isSharedCheck_141_ = !lean_is_exclusive(v_traceState_115_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v_traceState_115_, 0);
lean_dec(v_unused_142_);
v___x_130_ = v_traceState_115_;
v_isShared_131_ = v_isSharedCheck_141_;
goto v_resetjp_129_;
}
else
{
lean_dec(v_traceState_115_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_141_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_132_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 0, v___x_132_);
v___x_134_ = v___x_130_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_132_);
lean_ctor_set_uint64(v_reuseFailAlloc_140_, sizeof(void*)*1, v_tid_128_);
v___x_134_ = v_reuseFailAlloc_140_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_136_; 
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 4, v___x_134_);
v___x_136_ = v___x_126_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_env_116_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_nextMacroScope_117_);
lean_ctor_set(v_reuseFailAlloc_139_, 2, v_ngen_118_);
lean_ctor_set(v_reuseFailAlloc_139_, 3, v_auxDeclNGen_119_);
lean_ctor_set(v_reuseFailAlloc_139_, 4, v___x_134_);
lean_ctor_set(v_reuseFailAlloc_139_, 5, v_cache_120_);
lean_ctor_set(v_reuseFailAlloc_139_, 6, v_recordedDeps_121_);
lean_ctor_set(v_reuseFailAlloc_139_, 7, v_messages_122_);
lean_ctor_set(v_reuseFailAlloc_139_, 8, v_infoState_123_);
lean_ctor_set(v_reuseFailAlloc_139_, 9, v_snapshotTasks_124_);
v___x_136_ = v_reuseFailAlloc_139_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_st_ref_put(v___y_109_, v___x_136_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v_traces_113_);
return v___x_138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_144_);
lean_dec(v___y_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___boxed(lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(lean_object* v_opts_173_, lean_object* v_opt_174_){
_start:
{
lean_object* v_name_175_; lean_object* v_defValue_176_; lean_object* v_map_177_; lean_object* v___x_178_; 
v_name_175_ = lean_ctor_get(v_opt_174_, 0);
v_defValue_176_ = lean_ctor_get(v_opt_174_, 1);
v_map_177_ = lean_ctor_get(v_opts_173_, 0);
v___x_178_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_177_, v_name_175_);
if (lean_obj_tag(v___x_178_) == 0)
{
uint8_t v___x_179_; 
v___x_179_ = lean_unbox(v_defValue_176_);
return v___x_179_;
}
else
{
lean_object* v_val_180_; 
v_val_180_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_val_180_);
lean_dec_ref_known(v___x_178_, 1);
if (lean_obj_tag(v_val_180_) == 1)
{
uint8_t v_v_181_; 
v_v_181_ = lean_ctor_get_uint8(v_val_180_, 0);
lean_dec_ref_known(v_val_180_, 0);
return v_v_181_;
}
else
{
uint8_t v___x_182_; 
lean_dec(v_val_180_);
v___x_182_ = lean_unbox(v_defValue_176_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5___boxed(lean_object* v_opts_183_, lean_object* v_opt_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_183_, v_opt_184_);
lean_dec_ref(v_opt_184_);
lean_dec_ref(v_opts_183_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1));
v___x_191_ = l_Lean_MessageData_ofFormat(v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object* v_x_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object* v_x_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(v_x_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec_ref(v_x_207_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(uint8_t v___x_221_, lean_object* v_e_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_262_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_262_ == 0)
{
v___x_236_ = v___x_233_;
v_isShared_237_ = v_isSharedCheck_262_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_233_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_262_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
if (lean_obj_tag(v_a_234_) == 0)
{
uint8_t v_contextDependent_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_248_; 
v_contextDependent_238_ = lean_ctor_get_uint8(v_a_234_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v_a_234_);
if (v_isSharedCheck_248_ == 0)
{
v___x_240_ = v_a_234_;
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
else
{
lean_dec(v_a_234_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_247_, 1, v_contextDependent_238_);
v___x_243_ = v_reuseFailAlloc_247_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
lean_ctor_set_uint8(v___x_243_, 0, v___x_221_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_243_);
v___x_245_ = v___x_236_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
else
{
lean_object* v_e_x27_249_; lean_object* v_proof_250_; uint8_t v_contextDependent_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_261_; 
v_e_x27_249_ = lean_ctor_get(v_a_234_, 0);
v_proof_250_ = lean_ctor_get(v_a_234_, 1);
v_contextDependent_251_ = lean_ctor_get_uint8(v_a_234_, sizeof(void*)*2 + 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_a_234_);
if (v_isSharedCheck_261_ == 0)
{
v___x_253_ = v_a_234_;
v_isShared_254_ = v_isSharedCheck_261_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_proof_250_);
lean_inc(v_e_x27_249_);
lean_dec(v_a_234_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_261_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_e_x27_249_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_proof_250_);
lean_ctor_set_uint8(v_reuseFailAlloc_260_, sizeof(void*)*2 + 1, v_contextDependent_251_);
v___x_256_ = v_reuseFailAlloc_260_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_258_; 
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*2, v___x_221_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_256_);
v___x_258_ = v___x_236_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
else
{
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object* v___x_263_, lean_object* v_e_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
uint8_t v___x_194981__boxed_275_; lean_object* v_res_276_; 
v___x_194981__boxed_275_ = lean_unbox(v___x_263_);
v_res_276_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(v___x_194981__boxed_275_, v_e_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object* v_val_277_, lean_object* v_a_278_, lean_object* v___x_279_, lean_object* v_x_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v___x_292_; 
lean_inc_ref(v___y_281_);
v___x_292_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(v_val_277_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
if (lean_obj_tag(v_a_293_) == 0)
{
uint8_t v_done_294_; 
v_done_294_ = lean_ctor_get_uint8(v_a_293_, 0);
if (v_done_294_ == 0)
{
uint8_t v_contextDependent_295_; lean_object* v___x_296_; 
lean_dec_ref_known(v___x_292_, 1);
v_contextDependent_295_ = lean_ctor_get_uint8(v_a_293_, 1);
lean_dec_ref_known(v_a_293_, 0);
v___x_296_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_278_, v___x_279_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; uint8_t v___y_299_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
if (v_contextDependent_295_ == 0)
{
return v___x_296_;
}
else
{
if (lean_obj_tag(v_a_297_) == 0)
{
uint8_t v_contextDependent_309_; 
v_contextDependent_309_ = lean_ctor_get_uint8(v_a_297_, 1);
v___y_299_ = v_contextDependent_309_;
goto v___jp_298_;
}
else
{
uint8_t v_contextDependent_310_; 
v_contextDependent_310_ = lean_ctor_get_uint8(v_a_297_, sizeof(void*)*2 + 1);
v___y_299_ = v_contextDependent_310_;
goto v___jp_298_;
}
}
v___jp_298_:
{
if (v___y_299_ == 0)
{
lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_307_; 
lean_inc(v_a_297_);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_307_ == 0)
{
lean_object* v_unused_308_; 
v_unused_308_ = lean_ctor_get(v___x_296_, 0);
lean_dec(v_unused_308_);
v___x_301_ = v___x_296_;
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
else
{
lean_dec(v___x_296_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_303_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_303_);
v___x_305_ = v___x_301_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
return v___x_296_;
}
}
}
else
{
return v___x_296_;
}
}
else
{
lean_dec_ref_known(v_a_293_, 0);
lean_dec_ref(v___y_281_);
lean_dec_ref(v___x_279_);
return v___x_292_;
}
}
else
{
uint8_t v_done_311_; 
v_done_311_ = lean_ctor_get_uint8(v_a_293_, sizeof(void*)*2);
if (v_done_311_ == 0)
{
lean_object* v_e_x27_312_; lean_object* v_proof_313_; uint8_t v_contextDependent_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref_known(v___x_292_, 1);
v_e_x27_312_ = lean_ctor_get(v_a_293_, 0);
v_proof_313_ = lean_ctor_get(v_a_293_, 1);
v_contextDependent_314_ = lean_ctor_get_uint8(v_a_293_, sizeof(void*)*2 + 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_a_293_);
if (v_isSharedCheck_364_ == 0)
{
v___x_316_ = v_a_293_;
v_isShared_317_ = v_isSharedCheck_364_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_proof_313_);
lean_inc(v_e_x27_312_);
lean_dec(v_a_293_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_364_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; 
lean_inc_ref(v_e_x27_312_);
v___x_318_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_278_, v___x_279_, v_e_x27_312_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_363_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_363_ == 0)
{
v___x_321_ = v___x_318_;
v_isShared_322_ = v_isSharedCheck_363_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_363_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
if (lean_obj_tag(v_a_319_) == 0)
{
uint8_t v_done_323_; uint8_t v_contextDependent_324_; uint8_t v___y_326_; 
lean_dec_ref(v___y_281_);
v_done_323_ = lean_ctor_get_uint8(v_a_319_, 0);
v_contextDependent_324_ = lean_ctor_get_uint8(v_a_319_, 1);
lean_dec_ref_known(v_a_319_, 0);
if (v_contextDependent_314_ == 0)
{
v___y_326_ = v_contextDependent_324_;
goto v___jp_325_;
}
else
{
v___y_326_ = v_contextDependent_314_;
goto v___jp_325_;
}
v___jp_325_:
{
lean_object* v___x_328_; 
if (v_isShared_317_ == 0)
{
v___x_328_ = v___x_316_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_e_x27_312_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_proof_313_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_330_; 
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*2, v_done_323_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*2 + 1, v___y_326_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 0, v___x_328_);
v___x_330_ = v___x_321_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v_e_x27_333_; lean_object* v_proof_334_; uint8_t v_done_335_; uint8_t v_contextDependent_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_362_; 
lean_del_object(v___x_321_);
lean_del_object(v___x_316_);
v_e_x27_333_ = lean_ctor_get(v_a_319_, 0);
v_proof_334_ = lean_ctor_get(v_a_319_, 1);
v_done_335_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*2);
v_contextDependent_336_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*2 + 1);
v_isSharedCheck_362_ = !lean_is_exclusive(v_a_319_);
if (v_isSharedCheck_362_ == 0)
{
v___x_338_ = v_a_319_;
v_isShared_339_ = v_isSharedCheck_362_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_proof_334_);
lean_inc(v_e_x27_333_);
lean_dec(v_a_319_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_362_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; 
lean_inc_ref(v_e_x27_333_);
v___x_340_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_281_, v_e_x27_312_, v_proof_313_, v_e_x27_333_, v_proof_334_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_353_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
uint8_t v___y_346_; 
if (v_contextDependent_314_ == 0)
{
v___y_346_ = v_contextDependent_336_;
goto v___jp_345_;
}
else
{
v___y_346_ = v_contextDependent_314_;
goto v___jp_345_;
}
v___jp_345_:
{
lean_object* v___x_348_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 1, v_a_341_);
v___x_348_ = v___x_338_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_e_x27_333_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_352_, sizeof(void*)*2, v_done_335_);
v___x_348_ = v_reuseFailAlloc_352_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_350_; 
lean_ctor_set_uint8(v___x_348_, sizeof(void*)*2 + 1, v___y_346_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___x_348_);
v___x_350_ = v___x_343_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_del_object(v___x_338_);
lean_dec_ref(v_e_x27_333_);
v_a_354_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_340_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_340_);
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
}
}
}
}
else
{
lean_del_object(v___x_316_);
lean_dec_ref(v_proof_313_);
lean_dec_ref(v_e_x27_312_);
lean_dec_ref(v___y_281_);
return v___x_318_;
}
}
}
else
{
lean_dec_ref_known(v_a_293_, 2);
lean_dec_ref(v___y_281_);
lean_dec_ref(v___x_279_);
return v___x_292_;
}
}
}
else
{
lean_dec_ref(v___y_281_);
lean_dec_ref(v___x_279_);
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object* v_val_365_, lean_object* v_a_366_, lean_object* v___x_367_, lean_object* v_x_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(v_val_365_, v_a_366_, v___x_367_, v_x_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v_a_366_);
lean_dec(v_val_365_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object* v___x_381_, lean_object* v___f_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_box(0);
v___x_395_ = l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(v___y_383_, v___x_381_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
if (lean_obj_tag(v_a_396_) == 0)
{
uint8_t v_done_397_; 
v_done_397_ = lean_ctor_get_uint8(v_a_396_, 0);
if (v_done_397_ == 0)
{
uint8_t v_contextDependent_398_; lean_object* v___x_399_; 
lean_dec_ref_known(v___x_395_, 1);
v_contextDependent_398_ = lean_ctor_get_uint8(v_a_396_, 1);
lean_dec_ref_known(v_a_396_, 0);
v___x_399_ = lean_apply_12(v___f_382_, v___x_394_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, lean_box(0));
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; uint8_t v___y_402_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
if (v_contextDependent_398_ == 0)
{
lean_dec(v_a_400_);
return v___x_399_;
}
else
{
if (lean_obj_tag(v_a_400_) == 0)
{
uint8_t v_contextDependent_412_; 
v_contextDependent_412_ = lean_ctor_get_uint8(v_a_400_, 1);
v___y_402_ = v_contextDependent_412_;
goto v___jp_401_;
}
else
{
uint8_t v_contextDependent_413_; 
v_contextDependent_413_ = lean_ctor_get_uint8(v_a_400_, sizeof(void*)*2 + 1);
v___y_402_ = v_contextDependent_413_;
goto v___jp_401_;
}
}
v___jp_401_:
{
if (v___y_402_ == 0)
{
lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_410_; 
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; 
v_unused_411_ = lean_ctor_get(v___x_399_, 0);
lean_dec(v_unused_411_);
v___x_404_ = v___x_399_;
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
else
{
lean_dec(v___x_399_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_406_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_400_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_406_);
v___x_408_ = v___x_404_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_406_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
else
{
lean_dec(v_a_400_);
return v___x_399_;
}
}
}
else
{
return v___x_399_;
}
}
else
{
lean_dec_ref_known(v_a_396_, 0);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec_ref(v___f_382_);
return v___x_395_;
}
}
else
{
uint8_t v_done_414_; 
v_done_414_ = lean_ctor_get_uint8(v_a_396_, sizeof(void*)*2);
if (v_done_414_ == 0)
{
lean_object* v_e_x27_415_; lean_object* v_proof_416_; uint8_t v_contextDependent_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_467_; 
lean_dec_ref_known(v___x_395_, 1);
v_e_x27_415_ = lean_ctor_get(v_a_396_, 0);
v_proof_416_ = lean_ctor_get(v_a_396_, 1);
v_contextDependent_417_ = lean_ctor_get_uint8(v_a_396_, sizeof(void*)*2 + 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_a_396_);
if (v_isSharedCheck_467_ == 0)
{
v___x_419_ = v_a_396_;
v_isShared_420_ = v_isSharedCheck_467_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_proof_416_);
lean_inc(v_e_x27_415_);
lean_dec(v_a_396_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_467_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; 
lean_inc(v___y_392_);
lean_inc_ref(v___y_391_);
lean_inc(v___y_390_);
lean_inc_ref(v___y_389_);
lean_inc(v___y_388_);
lean_inc_ref(v___y_387_);
lean_inc_ref(v_e_x27_415_);
v___x_421_ = lean_apply_12(v___f_382_, v___x_394_, v_e_x27_415_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, lean_box(0));
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_466_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_466_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_466_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_466_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
if (lean_obj_tag(v_a_422_) == 0)
{
uint8_t v_done_426_; uint8_t v_contextDependent_427_; uint8_t v___y_429_; 
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v___y_383_);
v_done_426_ = lean_ctor_get_uint8(v_a_422_, 0);
v_contextDependent_427_ = lean_ctor_get_uint8(v_a_422_, 1);
lean_dec_ref_known(v_a_422_, 0);
if (v_contextDependent_417_ == 0)
{
v___y_429_ = v_contextDependent_427_;
goto v___jp_428_;
}
else
{
v___y_429_ = v_contextDependent_417_;
goto v___jp_428_;
}
v___jp_428_:
{
lean_object* v___x_431_; 
if (v_isShared_420_ == 0)
{
v___x_431_ = v___x_419_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_e_x27_415_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_proof_416_);
v___x_431_ = v_reuseFailAlloc_435_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_433_; 
lean_ctor_set_uint8(v___x_431_, sizeof(void*)*2, v_done_426_);
lean_ctor_set_uint8(v___x_431_, sizeof(void*)*2 + 1, v___y_429_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_431_);
v___x_433_ = v___x_424_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
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
else
{
lean_object* v_e_x27_436_; lean_object* v_proof_437_; uint8_t v_done_438_; uint8_t v_contextDependent_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_465_; 
lean_del_object(v___x_424_);
lean_del_object(v___x_419_);
v_e_x27_436_ = lean_ctor_get(v_a_422_, 0);
v_proof_437_ = lean_ctor_get(v_a_422_, 1);
v_done_438_ = lean_ctor_get_uint8(v_a_422_, sizeof(void*)*2);
v_contextDependent_439_ = lean_ctor_get_uint8(v_a_422_, sizeof(void*)*2 + 1);
v_isSharedCheck_465_ = !lean_is_exclusive(v_a_422_);
if (v_isSharedCheck_465_ == 0)
{
v___x_441_ = v_a_422_;
v_isShared_442_ = v_isSharedCheck_465_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_proof_437_);
lean_inc(v_e_x27_436_);
lean_dec(v_a_422_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_465_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; 
lean_inc_ref(v_e_x27_436_);
v___x_443_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_383_, v_e_x27_415_, v_proof_416_, v_e_x27_436_, v_proof_437_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_456_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_456_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_456_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_456_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
uint8_t v___y_449_; 
if (v_contextDependent_417_ == 0)
{
v___y_449_ = v_contextDependent_439_;
goto v___jp_448_;
}
else
{
v___y_449_ = v_contextDependent_417_;
goto v___jp_448_;
}
v___jp_448_:
{
lean_object* v___x_451_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_a_444_);
v___x_451_ = v___x_441_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_e_x27_436_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_a_444_);
lean_ctor_set_uint8(v_reuseFailAlloc_455_, sizeof(void*)*2, v_done_438_);
v___x_451_ = v_reuseFailAlloc_455_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_453_; 
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*2 + 1, v___y_449_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_451_);
v___x_453_ = v___x_446_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
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
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_del_object(v___x_441_);
lean_dec_ref(v_e_x27_436_);
v_a_457_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_443_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_443_);
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
}
else
{
lean_del_object(v___x_419_);
lean_dec_ref(v_proof_416_);
lean_dec_ref(v_e_x27_415_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v___y_383_);
return v___x_421_;
}
}
}
else
{
lean_dec_ref_known(v_a_396_, 2);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec_ref(v___f_382_);
return v___x_395_;
}
}
}
else
{
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec_ref(v___f_382_);
return v___x_395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object* v___x_468_, lean_object* v___f_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(v___x_468_, v___f_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec_ref(v___x_468_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(lean_object* v_snd_482_, lean_object* v_a_483_, lean_object* v___x_484_, lean_object* v_____r_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_498_ = lean_array_push(v_snd_482_, v_a_483_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_484_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed(lean_object* v_snd_502_, lean_object* v_a_503_, lean_object* v___x_504_, lean_object* v_____r_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(v_snd_502_, v_a_503_, v___x_504_, v_____r_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(uint8_t v___x_519_, lean_object* v___f_520_, lean_object* v_____r_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; lean_object* v_caches_535_; lean_object* v_typeAnalysis_536_; lean_object* v_target_537_; lean_object* v_hypotheses_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_548_; 
v___x_534_ = lean_st_ref_take(v___y_523_);
v_caches_535_ = lean_ctor_get(v___x_534_, 0);
v_typeAnalysis_536_ = lean_ctor_get(v___x_534_, 1);
v_target_537_ = lean_ctor_get(v___x_534_, 2);
v_hypotheses_538_ = lean_ctor_get(v___x_534_, 3);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_548_ == 0)
{
v___x_540_ = v___x_534_;
v_isShared_541_ = v_isSharedCheck_548_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_hypotheses_538_);
lean_inc(v_target_537_);
lean_inc(v_typeAnalysis_536_);
lean_inc(v_caches_535_);
lean_dec(v___x_534_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_548_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_box(0);
if (v_isShared_541_ == 0)
{
v___x_544_ = v___x_540_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_caches_535_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_typeAnalysis_536_);
lean_ctor_set(v_reuseFailAlloc_547_, 2, v_target_537_);
lean_ctor_set(v_reuseFailAlloc_547_, 3, v_hypotheses_538_);
v___x_544_ = v_reuseFailAlloc_547_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*4, v___x_519_);
v___x_545_ = lean_st_ref_put(v___y_523_, v___x_544_);
lean_inc(v___y_532_);
lean_inc_ref(v___y_531_);
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
lean_inc(v___y_526_);
lean_inc_ref(v___y_525_);
lean_inc(v___y_524_);
lean_inc(v___y_523_);
lean_inc_ref(v___y_522_);
v___x_546_ = lean_apply_13(v___f_520_, v___x_542_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, lean_box(0));
return v___x_546_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6___boxed(lean_object* v___x_549_, lean_object* v___f_550_, lean_object* v_____r_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
uint8_t v___x_195522__boxed_564_; lean_object* v_res_565_; 
v___x_195522__boxed_564_ = lean_unbox(v___x_549_);
v_res_565_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(v___x_195522__boxed_564_, v___f_550_, v_____r_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object* v_msgData_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; lean_object* v_env_573_; uint8_t v___x_574_; lean_object* v_env_575_; lean_object* v___x_576_; lean_object* v_toCold_577_; lean_object* v_mctx_578_; lean_object* v_lctx_579_; lean_object* v_options_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_572_ = lean_st_ref_get(v___y_570_);
v_env_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_env_573_);
lean_dec(v___x_572_);
v___x_574_ = 0;
v_env_575_ = l_Lean_Environment_setRecordingDeps(v_env_573_, v___x_574_);
v___x_576_ = lean_st_ref_get(v___y_568_);
v_toCold_577_ = lean_ctor_get(v___y_569_, 0);
v_mctx_578_ = lean_ctor_get(v___x_576_, 0);
lean_inc_ref(v_mctx_578_);
lean_dec(v___x_576_);
v_lctx_579_ = lean_ctor_get(v___y_567_, 2);
v_options_580_ = lean_ctor_get(v_toCold_577_, 2);
lean_inc_ref(v_options_580_);
lean_inc_ref(v_lctx_579_);
v___x_581_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_581_, 0, v_env_575_);
lean_ctor_set(v___x_581_, 1, v_mctx_578_);
lean_ctor_set(v___x_581_, 2, v_lctx_579_);
lean_ctor_set(v___x_581_, 3, v_options_580_);
v___x_582_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v_msgData_566_);
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object* v_msgData_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msgData_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
return v_res_590_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_591_; double v___x_592_; 
v___x_591_ = lean_unsigned_to_nat(0u);
v___x_592_ = lean_float_of_nat(v___x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object* v_cls_596_, lean_object* v_msg_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_ref_603_; lean_object* v___x_604_; lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_650_; 
v_ref_603_ = lean_ctor_get(v___y_600_, 2);
v___x_604_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msg_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
v_a_605_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_650_ == 0)
{
v___x_607_ = v___x_604_;
v_isShared_608_ = v_isSharedCheck_650_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_604_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_650_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v_traceState_610_; lean_object* v_env_611_; lean_object* v_nextMacroScope_612_; lean_object* v_ngen_613_; lean_object* v_auxDeclNGen_614_; lean_object* v_cache_615_; lean_object* v_recordedDeps_616_; lean_object* v_messages_617_; lean_object* v_infoState_618_; lean_object* v_snapshotTasks_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_649_; 
v___x_609_ = lean_st_ref_take(v___y_601_);
v_traceState_610_ = lean_ctor_get(v___x_609_, 4);
v_env_611_ = lean_ctor_get(v___x_609_, 0);
v_nextMacroScope_612_ = lean_ctor_get(v___x_609_, 1);
v_ngen_613_ = lean_ctor_get(v___x_609_, 2);
v_auxDeclNGen_614_ = lean_ctor_get(v___x_609_, 3);
v_cache_615_ = lean_ctor_get(v___x_609_, 5);
v_recordedDeps_616_ = lean_ctor_get(v___x_609_, 6);
v_messages_617_ = lean_ctor_get(v___x_609_, 7);
v_infoState_618_ = lean_ctor_get(v___x_609_, 8);
v_snapshotTasks_619_ = lean_ctor_get(v___x_609_, 9);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_649_ == 0)
{
v___x_621_ = v___x_609_;
v_isShared_622_ = v_isSharedCheck_649_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_snapshotTasks_619_);
lean_inc(v_infoState_618_);
lean_inc(v_messages_617_);
lean_inc(v_recordedDeps_616_);
lean_inc(v_cache_615_);
lean_inc(v_traceState_610_);
lean_inc(v_auxDeclNGen_614_);
lean_inc(v_ngen_613_);
lean_inc(v_nextMacroScope_612_);
lean_inc(v_env_611_);
lean_dec(v___x_609_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_649_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
uint64_t v_tid_623_; lean_object* v_traces_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_648_; 
v_tid_623_ = lean_ctor_get_uint64(v_traceState_610_, sizeof(void*)*1);
v_traces_624_ = lean_ctor_get(v_traceState_610_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_traceState_610_);
if (v_isSharedCheck_648_ == 0)
{
v___x_626_ = v_traceState_610_;
v_isShared_627_ = v_isSharedCheck_648_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_traces_624_);
lean_dec(v_traceState_610_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_648_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; double v___x_630_; uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_628_ = lean_box(0);
v___x_629_ = lean_box(0);
v___x_630_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0);
v___x_631_ = 0;
v___x_632_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1));
v___x_633_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_633_, 0, v_cls_596_);
lean_ctor_set(v___x_633_, 1, v___x_629_);
lean_ctor_set(v___x_633_, 2, v___x_632_);
lean_ctor_set_float(v___x_633_, sizeof(void*)*3, v___x_630_);
lean_ctor_set_float(v___x_633_, sizeof(void*)*3 + 8, v___x_630_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*3 + 16, v___x_631_);
v___x_634_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2));
v___x_635_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v_a_605_);
lean_ctor_set(v___x_635_, 2, v___x_634_);
lean_inc(v_ref_603_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v_ref_603_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = l_Lean_PersistentArray_push___redArg(v_traces_624_, v___x_636_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_637_);
v___x_639_ = v___x_626_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_637_);
lean_ctor_set_uint64(v_reuseFailAlloc_647_, sizeof(void*)*1, v_tid_623_);
v___x_639_ = v_reuseFailAlloc_647_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_641_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 4, v___x_639_);
v___x_641_ = v___x_621_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_env_611_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_nextMacroScope_612_);
lean_ctor_set(v_reuseFailAlloc_646_, 2, v_ngen_613_);
lean_ctor_set(v_reuseFailAlloc_646_, 3, v_auxDeclNGen_614_);
lean_ctor_set(v_reuseFailAlloc_646_, 4, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_646_, 5, v_cache_615_);
lean_ctor_set(v_reuseFailAlloc_646_, 6, v_recordedDeps_616_);
lean_ctor_set(v_reuseFailAlloc_646_, 7, v_messages_617_);
lean_ctor_set(v_reuseFailAlloc_646_, 8, v_infoState_618_);
lean_ctor_set(v_reuseFailAlloc_646_, 9, v_snapshotTasks_619_);
v___x_641_ = v_reuseFailAlloc_646_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_642_ = lean_st_ref_put(v___y_601_, v___x_641_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_628_);
v___x_644_ = v___x_607_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_628_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object* v_cls_651_, lean_object* v_msg_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_651_, v_msg_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(uint8_t v___x_659_, lean_object* v_x_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_671_, 0, v___x_659_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed(lean_object* v___x_673_, lean_object* v_x_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
uint8_t v___x_195717__boxed_685_; lean_object* v_res_686_; 
v___x_195717__boxed_685_ = lean_unbox(v___x_673_);
v_res_686_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(v___x_195717__boxed_685_, v_x_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v_x_674_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(lean_object* v___x_687_, lean_object* v___f_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_box(0);
v___x_701_ = l_Lean_Meta_Sym_DSimp_evalGround___redArg(v___x_687_, v___y_689_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
if (lean_obj_tag(v_a_702_) == 0)
{
uint8_t v_done_703_; 
v_done_703_ = lean_ctor_get_uint8(v_a_702_, 0);
lean_dec_ref_known(v_a_702_, 0);
if (v_done_703_ == 0)
{
lean_object* v___x_704_; 
lean_dec_ref_known(v___x_701_, 1);
v___x_704_ = lean_apply_12(v___f_688_, v___x_700_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, lean_box(0));
return v___x_704_;
}
else
{
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v___f_688_);
return v___x_701_;
}
}
else
{
uint8_t v_done_705_; 
lean_dec_ref(v___y_689_);
v_done_705_ = lean_ctor_get_uint8(v_a_702_, sizeof(void*)*1);
if (v_done_705_ == 0)
{
lean_object* v_e_x27_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_724_; 
lean_dec_ref_known(v___x_701_, 1);
v_e_x27_706_ = lean_ctor_get(v_a_702_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_a_702_);
if (v_isSharedCheck_724_ == 0)
{
v___x_708_ = v_a_702_;
v_isShared_709_ = v_isSharedCheck_724_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_e_x27_706_);
lean_dec(v_a_702_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_724_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; 
lean_inc_ref(v_e_x27_706_);
v___x_710_ = lean_apply_12(v___f_688_, v___x_700_, v_e_x27_706_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, lean_box(0));
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
if (lean_obj_tag(v_a_711_) == 0)
{
lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_722_; 
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_722_ == 0)
{
lean_object* v_unused_723_; 
v_unused_723_ = lean_ctor_get(v___x_710_, 0);
lean_dec(v_unused_723_);
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_722_;
goto v_resetjp_712_;
}
else
{
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_722_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
uint8_t v_done_715_; lean_object* v___x_717_; 
v_done_715_ = lean_ctor_get_uint8(v_a_711_, 0);
lean_dec_ref_known(v_a_711_, 0);
if (v_isShared_709_ == 0)
{
v___x_717_ = v___x_708_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_e_x27_706_);
v___x_717_ = v_reuseFailAlloc_721_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_719_; 
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*1, v_done_715_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_717_);
v___x_719_ = v___x_713_;
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
}
else
{
lean_dec_ref_known(v_a_711_, 1);
lean_del_object(v___x_708_);
lean_dec_ref(v_e_x27_706_);
return v___x_710_;
}
}
else
{
lean_del_object(v___x_708_);
lean_dec_ref(v_e_x27_706_);
return v___x_710_;
}
}
}
else
{
lean_dec_ref_known(v_a_702_, 1);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___f_688_);
return v___x_701_;
}
}
}
else
{
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v___f_688_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed(lean_object* v___x_725_, lean_object* v___f_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(v___x_725_, v___f_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___x_725_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(lean_object* v___f_739_, lean_object* v_x_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_box(0);
lean_inc_ref(v___y_741_);
v___x_753_ = l_Lean_Meta_Sym_DSimp_zeta___redArg(v___y_741_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
if (lean_obj_tag(v_a_754_) == 0)
{
uint8_t v_done_755_; 
v_done_755_ = lean_ctor_get_uint8(v_a_754_, 0);
lean_dec_ref_known(v_a_754_, 0);
if (v_done_755_ == 0)
{
lean_object* v___x_756_; 
lean_dec_ref_known(v___x_753_, 1);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
lean_inc(v___y_748_);
lean_inc_ref(v___y_747_);
lean_inc(v___y_746_);
lean_inc_ref(v___y_745_);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
v___x_756_ = lean_apply_12(v___f_739_, v___x_752_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, lean_box(0));
return v___x_756_;
}
else
{
lean_dec_ref(v___y_741_);
lean_dec_ref(v___f_739_);
return v___x_753_;
}
}
else
{
uint8_t v_done_757_; 
lean_dec_ref(v___y_741_);
v_done_757_ = lean_ctor_get_uint8(v_a_754_, sizeof(void*)*1);
if (v_done_757_ == 0)
{
lean_object* v_e_x27_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref_known(v___x_753_, 1);
v_e_x27_758_ = lean_ctor_get(v_a_754_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v_a_754_);
if (v_isSharedCheck_776_ == 0)
{
v___x_760_ = v_a_754_;
v_isShared_761_ = v_isSharedCheck_776_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_e_x27_758_);
lean_dec(v_a_754_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_776_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; 
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
lean_inc(v___y_748_);
lean_inc_ref(v___y_747_);
lean_inc(v___y_746_);
lean_inc_ref(v___y_745_);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v_e_x27_758_);
v___x_762_ = lean_apply_12(v___f_739_, v___x_752_, v_e_x27_758_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, lean_box(0));
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
if (lean_obj_tag(v_a_763_) == 0)
{
lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_774_; 
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v___x_762_, 0);
lean_dec(v_unused_775_);
v___x_765_ = v___x_762_;
v_isShared_766_ = v_isSharedCheck_774_;
goto v_resetjp_764_;
}
else
{
lean_dec(v___x_762_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_774_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
uint8_t v_done_767_; lean_object* v___x_769_; 
v_done_767_ = lean_ctor_get_uint8(v_a_763_, 0);
lean_dec_ref_known(v_a_763_, 0);
if (v_isShared_761_ == 0)
{
v___x_769_ = v___x_760_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_e_x27_758_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
lean_ctor_set_uint8(v___x_769_, sizeof(void*)*1, v_done_767_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_769_);
v___x_771_ = v___x_765_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_769_);
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
lean_dec_ref_known(v_a_763_, 1);
lean_del_object(v___x_760_);
lean_dec_ref(v_e_x27_758_);
return v___x_762_;
}
}
else
{
lean_del_object(v___x_760_);
lean_dec_ref(v_e_x27_758_);
return v___x_762_;
}
}
}
else
{
lean_dec_ref_known(v_a_754_, 1);
lean_dec_ref(v___f_739_);
return v___x_753_;
}
}
}
else
{
lean_dec_ref(v___y_741_);
lean_dec_ref(v___f_739_);
return v___x_753_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed(lean_object* v___f_777_, lean_object* v_x_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(v___f_777_, v_x_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(lean_object* v___f_791_, lean_object* v_x_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_box(0);
lean_inc_ref(v___y_793_);
v___x_805_ = l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(v___y_793_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
if (lean_obj_tag(v_a_806_) == 0)
{
uint8_t v_done_807_; 
v_done_807_ = lean_ctor_get_uint8(v_a_806_, 0);
lean_dec_ref_known(v_a_806_, 0);
if (v_done_807_ == 0)
{
lean_object* v___x_808_; 
lean_dec_ref_known(v___x_805_, 1);
lean_inc(v___y_802_);
lean_inc_ref(v___y_801_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
v___x_808_ = lean_apply_12(v___f_791_, v___x_804_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, lean_box(0));
return v___x_808_;
}
else
{
lean_dec_ref(v___y_793_);
lean_dec_ref(v___f_791_);
return v___x_805_;
}
}
else
{
uint8_t v_done_809_; 
lean_dec_ref(v___y_793_);
v_done_809_ = lean_ctor_get_uint8(v_a_806_, sizeof(void*)*1);
if (v_done_809_ == 0)
{
lean_object* v_e_x27_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref_known(v___x_805_, 1);
v_e_x27_810_ = lean_ctor_get(v_a_806_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v_a_806_);
if (v_isSharedCheck_828_ == 0)
{
v___x_812_ = v_a_806_;
v_isShared_813_ = v_isSharedCheck_828_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_e_x27_810_);
lean_dec(v_a_806_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_828_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; 
lean_inc(v___y_802_);
lean_inc_ref(v___y_801_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v_e_x27_810_);
v___x_814_ = lean_apply_12(v___f_791_, v___x_804_, v_e_x27_810_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, lean_box(0));
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
if (lean_obj_tag(v_a_815_) == 0)
{
lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_826_; 
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v___x_814_, 0);
lean_dec(v_unused_827_);
v___x_817_ = v___x_814_;
v_isShared_818_ = v_isSharedCheck_826_;
goto v_resetjp_816_;
}
else
{
lean_dec(v___x_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_826_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
uint8_t v_done_819_; lean_object* v___x_821_; 
v_done_819_ = lean_ctor_get_uint8(v_a_815_, 0);
lean_dec_ref_known(v_a_815_, 0);
if (v_isShared_813_ == 0)
{
v___x_821_ = v___x_812_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_e_x27_810_);
v___x_821_ = v_reuseFailAlloc_825_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_823_; 
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*1, v_done_819_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v___x_821_);
v___x_823_ = v___x_817_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_815_, 1);
lean_del_object(v___x_812_);
lean_dec_ref(v_e_x27_810_);
return v___x_814_;
}
}
else
{
lean_del_object(v___x_812_);
lean_dec_ref(v_e_x27_810_);
return v___x_814_;
}
}
}
else
{
lean_dec_ref_known(v_a_806_, 1);
lean_dec_ref(v___f_791_);
return v___x_805_;
}
}
}
else
{
lean_dec_ref(v___y_793_);
lean_dec_ref(v___f_791_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed(lean_object* v___f_829_, lean_object* v_x_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(v___f_829_, v_x_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(lean_object* v_x_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; 
lean_inc_ref(v___y_844_);
v___x_855_ = l_Lean_Meta_Sym_DSimp_beta___redArg(v___y_844_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
if (lean_obj_tag(v_a_856_) == 0)
{
uint8_t v_done_857_; 
v_done_857_ = lean_ctor_get_uint8(v_a_856_, 0);
lean_dec_ref_known(v_a_856_, 0);
if (v_done_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec_ref_known(v___x_855_, 1);
v___x_858_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(v___y_844_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
return v___x_858_;
}
else
{
lean_dec_ref(v___y_844_);
return v___x_855_;
}
}
else
{
uint8_t v_done_859_; 
lean_dec_ref(v___y_844_);
v_done_859_ = lean_ctor_get_uint8(v_a_856_, sizeof(void*)*1);
if (v_done_859_ == 0)
{
lean_object* v_e_x27_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref_known(v___x_855_, 1);
v_e_x27_860_ = lean_ctor_get(v_a_856_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v_a_856_);
if (v_isSharedCheck_878_ == 0)
{
v___x_862_ = v_a_856_;
v_isShared_863_ = v_isSharedCheck_878_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_e_x27_860_);
lean_dec(v_a_856_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_878_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; 
lean_inc_ref(v_e_x27_860_);
v___x_864_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(v_e_x27_860_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
if (lean_obj_tag(v_a_865_) == 0)
{
lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_876_; 
lean_inc_ref(v_a_865_);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_876_ == 0)
{
lean_object* v_unused_877_; 
v_unused_877_ = lean_ctor_get(v___x_864_, 0);
lean_dec(v_unused_877_);
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_876_;
goto v_resetjp_866_;
}
else
{
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_876_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
uint8_t v_done_869_; lean_object* v___x_871_; 
v_done_869_ = lean_ctor_get_uint8(v_a_865_, 0);
lean_dec_ref_known(v_a_865_, 0);
if (v_isShared_863_ == 0)
{
v___x_871_ = v___x_862_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_e_x27_860_);
v___x_871_ = v_reuseFailAlloc_875_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_873_; 
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1, v_done_869_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_871_);
v___x_873_ = v___x_867_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_871_);
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
lean_del_object(v___x_862_);
lean_dec_ref(v_e_x27_860_);
return v___x_864_;
}
}
else
{
lean_del_object(v___x_862_);
lean_dec_ref(v_e_x27_860_);
return v___x_864_;
}
}
}
else
{
lean_dec_ref_known(v_a_856_, 1);
return v___x_855_;
}
}
}
else
{
lean_dec_ref(v___y_844_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed(lean_object* v_x_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(v_x_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
return v_res_891_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_917_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11));
v___x_918_ = l_Lean_Name_append(v___x_917_, v___x_916_);
return v___x_918_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13));
v___x_921_ = l_Lean_stringToMessageData(v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object* v_upperBound_922_, lean_object* v___x_923_, lean_object* v___x_924_, lean_object* v___x_925_, lean_object* v___x_926_, lean_object* v_a_927_, lean_object* v_b_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___y_942_; uint8_t v___x_964_; 
v___x_964_ = lean_nat_dec_lt(v_a_927_, v_upperBound_922_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v_b_928_);
return v___x_965_;
}
else
{
lean_object* v_snd_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1051_; 
v_snd_966_ = lean_ctor_get(v_b_928_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_b_928_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v_b_928_, 0);
lean_dec(v_unused_1052_);
v___x_968_ = v_b_928_;
v_isShared_969_ = v_isSharedCheck_1051_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_snd_966_);
lean_dec(v_b_928_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1051_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v___x_974_; 
v___x_970_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5));
v___x_971_ = lean_box(0);
v___x_972_ = lean_array_fget_borrowed(v___x_923_, v_a_927_);
v___x_973_ = 0;
lean_inc(v___x_972_);
lean_inc_ref(v___x_924_);
v___x_974_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v___x_973_, v___x_970_, v___x_924_, v___x_972_, v___y_930_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; uint8_t v___x_976_; lean_object* v___x_977_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = 0;
lean_inc_ref(v___x_926_);
lean_inc_ref(v___x_925_);
v___x_977_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v___x_976_, v___x_925_, v___x_926_, v_a_975_, v___y_930_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v_type_979_; lean_object* v_value_980_; uint8_t v___x_981_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_977_, 1);
v_type_979_ = lean_ctor_get(v_a_978_, 1);
v_value_980_ = lean_ctor_get(v_a_978_, 2);
v___x_981_ = l_Lean_Expr_isFalse(v_type_979_);
if (v___x_981_ == 0)
{
lean_object* v_type_982_; lean_object* v___f_983_; uint8_t v___x_984_; 
lean_del_object(v___x_968_);
v_type_982_ = lean_ctor_get(v___x_972_, 1);
lean_inc(v_a_978_);
lean_inc(v_snd_966_);
v___f_983_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed), 16, 3);
lean_closure_set(v___f_983_, 0, v_snd_966_);
lean_closure_set(v___f_983_, 1, v_a_978_);
lean_closure_set(v___f_983_, 2, v___x_971_);
v___x_984_ = lean_expr_eqv(v_type_982_, v_type_979_);
if (v___x_984_ == 0)
{
lean_object* v_toCold_985_; lean_object* v_options_986_; lean_object* v_inheritedTraceOptions_987_; uint8_t v_hasTrace_988_; 
lean_inc_ref(v_type_979_);
lean_dec(v_a_978_);
lean_dec(v_snd_966_);
v_toCold_985_ = lean_ctor_get(v___y_938_, 0);
v_options_986_ = lean_ctor_get(v_toCold_985_, 2);
v_inheritedTraceOptions_987_ = lean_ctor_get(v_toCold_985_, 11);
v_hasTrace_988_ = lean_ctor_get_uint8(v_options_986_, sizeof(void*)*1);
if (v_hasTrace_988_ == 0)
{
lean_dec_ref(v_type_979_);
goto v___jp_989_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_992_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_993_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_994_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_987_, v_options_986_, v___x_993_);
if (v___x_994_ == 0)
{
lean_dec_ref(v_type_979_);
goto v___jp_989_;
}
else
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
lean_inc_ref(v_type_982_);
v___x_995_ = l_Lean_MessageData_ofExpr(v_type_982_);
v___x_996_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = l_Lean_MessageData_ofExpr(v_type_979_);
v___x_999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v___x_992_, v___x_999_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1002_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_1000_, 1);
v___x_1002_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(v___x_964_, v___f_983_, v_a_1001_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
v___y_942_ = v___x_1002_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec_ref(v___f_983_);
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_1003_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_1000_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1000_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
v___jp_989_:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = lean_box(0);
v___x_991_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(v___x_964_, v___f_983_, v___x_990_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
v___y_942_ = v___x_991_;
goto v___jp_941_;
}
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_dec_ref(v___f_983_);
v___x_1011_ = lean_box(0);
v___x_1012_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(v_snd_966_, v_a_978_, v___x_971_, v___x_1011_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
v___y_942_ = v___x_1012_;
goto v___jp_941_;
}
}
else
{
lean_object* v___x_1013_; 
lean_inc_ref(v_value_980_);
lean_dec(v_a_978_);
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v___x_1013_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_980_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1025_; 
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1025_ == 0)
{
lean_object* v_unused_1026_; 
v_unused_1026_ = lean_ctor_get(v___x_1013_, 0);
lean_dec(v_unused_1026_);
v___x_1015_ = v___x_1013_;
v_isShared_1016_ = v_isSharedCheck_1025_;
goto v_resetjp_1014_;
}
else
{
lean_dec(v___x_1013_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1025_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1017_ = lean_box(v___x_964_);
v___x_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_1018_);
v___x_1020_ = v___x_968_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1018_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_snd_966_);
v___x_1020_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1020_);
v___x_1022_ = v___x_1015_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
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
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_del_object(v___x_968_);
lean_dec(v_snd_966_);
v_a_1027_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1013_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1013_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
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
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_del_object(v___x_968_);
lean_dec(v_snd_966_);
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_1035_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_977_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_977_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_del_object(v___x_968_);
lean_dec(v_snd_966_);
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_1043_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_974_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_974_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
v___jp_941_:
{
if (lean_obj_tag(v___y_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_955_; 
v_a_943_ = lean_ctor_get(v___y_942_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___y_942_);
if (v_isSharedCheck_955_ == 0)
{
v___x_945_ = v___y_942_;
v_isShared_946_ = v_isSharedCheck_955_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___y_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_955_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
if (lean_obj_tag(v_a_943_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; 
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_947_ = lean_ctor_get(v_a_943_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v_a_943_, 1);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_a_947_);
v___x_949_ = v___x_945_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_947_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
lean_del_object(v___x_945_);
v_a_951_ = lean_ctor_get(v_a_943_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v_a_943_, 1);
v___x_952_ = lean_unsigned_to_nat(1u);
v___x_953_ = lean_nat_add(v_a_927_, v___x_952_);
lean_dec(v_a_927_);
v_a_927_ = v___x_953_;
v_b_928_ = v_a_951_;
goto _start;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_a_927_);
lean_dec_ref(v___x_926_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_956_ = lean_ctor_get(v___y_942_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___y_942_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___y_942_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___y_942_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_1053_ = _args[0];
lean_object* v___x_1054_ = _args[1];
lean_object* v___x_1055_ = _args[2];
lean_object* v___x_1056_ = _args[3];
lean_object* v___x_1057_ = _args[4];
lean_object* v_a_1058_ = _args[5];
lean_object* v_b_1059_ = _args[6];
lean_object* v___y_1060_ = _args[7];
lean_object* v___y_1061_ = _args[8];
lean_object* v___y_1062_ = _args[9];
lean_object* v___y_1063_ = _args[10];
lean_object* v___y_1064_ = _args[11];
lean_object* v___y_1065_ = _args[12];
lean_object* v___y_1066_ = _args[13];
lean_object* v___y_1067_ = _args[14];
lean_object* v___y_1068_ = _args[15];
lean_object* v___y_1069_ = _args[16];
lean_object* v___y_1070_ = _args[17];
lean_object* v___y_1071_ = _args[18];
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_upperBound_1053_, v___x_1054_, v___x_1055_, v___x_1056_, v___x_1057_, v_a_1058_, v_b_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec_ref(v___x_1054_);
lean_dec(v_upperBound_1053_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object* v___x_1073_, lean_object* v___x_1074_, lean_object* v___x_1075_, lean_object* v___x_1076_, uint8_t v___x_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v_hypotheses_1091_; lean_object* v___x_1092_; lean_object* v_newHyps_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1090_ = lean_st_ref_get(v___y_1079_);
v_hypotheses_1091_ = lean_ctor_get(v___x_1090_, 3);
lean_inc_ref(v_hypotheses_1091_);
lean_dec(v___x_1090_);
v___x_1092_ = lean_array_get_size(v_hypotheses_1091_);
v_newHyps_1093_ = lean_mk_empty_array_with_capacity(v___x_1092_);
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v_newHyps_1093_);
v___x_1096_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v___x_1092_, v_hypotheses_1091_, v___x_1073_, v___x_1074_, v___x_1075_, v___x_1076_, v___x_1095_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec_ref(v_hypotheses_1091_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1125_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1099_ = v___x_1096_;
v_isShared_1100_ = v_isSharedCheck_1125_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1096_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1125_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v_fst_1101_; 
v_fst_1101_ = lean_ctor_get(v_a_1097_, 0);
if (lean_obj_tag(v_fst_1101_) == 0)
{
lean_object* v_snd_1102_; lean_object* v___x_1103_; lean_object* v_caches_1104_; lean_object* v_typeAnalysis_1105_; lean_object* v_target_1106_; uint8_t v_didChange_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1119_; 
v_snd_1102_ = lean_ctor_get(v_a_1097_, 1);
lean_inc(v_snd_1102_);
lean_dec(v_a_1097_);
v___x_1103_ = lean_st_ref_take(v___y_1079_);
v_caches_1104_ = lean_ctor_get(v___x_1103_, 0);
v_typeAnalysis_1105_ = lean_ctor_get(v___x_1103_, 1);
v_target_1106_ = lean_ctor_get(v___x_1103_, 2);
v_didChange_1107_ = lean_ctor_get_uint8(v___x_1103_, sizeof(void*)*4);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; 
v_unused_1120_ = lean_ctor_get(v___x_1103_, 3);
lean_dec(v_unused_1120_);
v___x_1109_ = v___x_1103_;
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_target_1106_);
lean_inc(v_typeAnalysis_1105_);
lean_inc(v_caches_1104_);
lean_dec(v___x_1103_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 3, v_snd_1102_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_caches_1104_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_typeAnalysis_1105_);
lean_ctor_set(v_reuseFailAlloc_1118_, 2, v_target_1106_);
lean_ctor_set(v_reuseFailAlloc_1118_, 3, v_snd_1102_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*4, v_didChange_1107_);
v___x_1112_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1113_ = lean_st_ref_put(v___y_1079_, v___x_1112_);
v___x_1114_ = lean_box(v___x_1077_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1114_);
v___x_1116_ = v___x_1099_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
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
else
{
lean_object* v_val_1121_; lean_object* v___x_1123_; 
lean_inc_ref(v_fst_1101_);
lean_dec(v_a_1097_);
v_val_1121_ = lean_ctor_get(v_fst_1101_, 0);
lean_inc(v_val_1121_);
lean_dec_ref_known(v_fst_1101_, 1);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v_val_1121_);
v___x_1123_ = v___x_1099_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_val_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v_a_1126_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1096_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1096_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object** _args){
lean_object* v___x_1134_ = _args[0];
lean_object* v___x_1135_ = _args[1];
lean_object* v___x_1136_ = _args[2];
lean_object* v___x_1137_ = _args[3];
lean_object* v___x_1138_ = _args[4];
lean_object* v___y_1139_ = _args[5];
lean_object* v___y_1140_ = _args[6];
lean_object* v___y_1141_ = _args[7];
lean_object* v___y_1142_ = _args[8];
lean_object* v___y_1143_ = _args[9];
lean_object* v___y_1144_ = _args[10];
lean_object* v___y_1145_ = _args[11];
lean_object* v___y_1146_ = _args[12];
lean_object* v___y_1147_ = _args[13];
lean_object* v___y_1148_ = _args[14];
lean_object* v___y_1149_ = _args[15];
lean_object* v___y_1150_ = _args[16];
_start:
{
uint8_t v___x_196477__boxed_1151_; lean_object* v_res_1152_; 
v___x_196477__boxed_1151_ = lean_unbox(v___x_1138_);
v_res_1152_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(v___x_1134_, v___x_1135_, v___x_1136_, v___x_1137_, v___x_196477__boxed_1151_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(lean_object* v_x_1153_){
_start:
{
if (lean_obj_tag(v_x_1153_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
v_a_1155_ = lean_ctor_get(v_x_1153_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v_x_1153_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v_x_1153_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v_x_1153_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
lean_ctor_set_tag(v___x_1157_, 1);
v___x_1160_ = v___x_1157_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1155_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
v_a_1163_ = lean_ctor_get(v_x_1153_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1153_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v_x_1153_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v_x_1153_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set_tag(v___x_1165_, 0);
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg___boxed(lean_object* v_x_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_x_1171_);
return v_res_1173_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(lean_object* v_e_1174_){
_start:
{
if (lean_obj_tag(v_e_1174_) == 0)
{
uint8_t v___x_1175_; 
v___x_1175_ = 2;
return v___x_1175_;
}
else
{
uint8_t v___x_1176_; 
v___x_1176_ = 0;
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9___boxed(lean_object* v_e_1177_){
_start:
{
uint8_t v_res_1178_; lean_object* v_r_1179_; 
v_res_1178_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(v_e_1177_);
lean_dec_ref(v_e_1177_);
v_r_1179_ = lean_box(v_res_1178_);
return v_r_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(size_t v_sz_1180_, size_t v_i_1181_, lean_object* v_bs_1182_){
_start:
{
uint8_t v___x_1183_; 
v___x_1183_ = lean_usize_dec_lt(v_i_1181_, v_sz_1180_);
if (v___x_1183_ == 0)
{
return v_bs_1182_;
}
else
{
lean_object* v_v_1184_; lean_object* v_msg_1185_; lean_object* v___x_1186_; lean_object* v_bs_x27_1187_; size_t v___x_1188_; size_t v___x_1189_; lean_object* v___x_1190_; 
v_v_1184_ = lean_array_uget_borrowed(v_bs_1182_, v_i_1181_);
v_msg_1185_ = lean_ctor_get(v_v_1184_, 1);
lean_inc_ref(v_msg_1185_);
v___x_1186_ = lean_unsigned_to_nat(0u);
v_bs_x27_1187_ = lean_array_uset(v_bs_1182_, v_i_1181_, v___x_1186_);
v___x_1188_ = ((size_t)1ULL);
v___x_1189_ = lean_usize_add(v_i_1181_, v___x_1188_);
v___x_1190_ = lean_array_uset(v_bs_x27_1187_, v_i_1181_, v_msg_1185_);
v_i_1181_ = v___x_1189_;
v_bs_1182_ = v___x_1190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8___boxed(lean_object* v_sz_1192_, lean_object* v_i_1193_, lean_object* v_bs_1194_){
_start:
{
size_t v_sz_boxed_1195_; size_t v_i_boxed_1196_; lean_object* v_res_1197_; 
v_sz_boxed_1195_ = lean_unbox_usize(v_sz_1192_);
lean_dec(v_sz_1192_);
v_i_boxed_1196_ = lean_unbox_usize(v_i_1193_);
lean_dec(v_i_1193_);
v_res_1197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(v_sz_boxed_1195_, v_i_boxed_1196_, v_bs_1194_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(lean_object* v_oldTraces_1198_, lean_object* v_data_1199_, lean_object* v_ref_1200_, lean_object* v_msg_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_toCold_1207_; lean_object* v_currRecDepth_1208_; lean_object* v_ref_1209_; uint16_t v_optionFlags_1210_; uint8_t v_suppressElabErrors_1211_; uint8_t v_checkDeprecated_1212_; uint8_t v_isRecordingDeps_1213_; lean_object* v_ref_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v_traceState_1217_; lean_object* v_traces_1218_; lean_object* v___x_1219_; size_t v_sz_1220_; size_t v___x_1221_; lean_object* v___x_1222_; lean_object* v_msg_1223_; lean_object* v___x_1224_; lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1263_; 
v_toCold_1207_ = lean_ctor_get(v___y_1204_, 0);
v_currRecDepth_1208_ = lean_ctor_get(v___y_1204_, 1);
v_ref_1209_ = lean_ctor_get(v___y_1204_, 2);
v_optionFlags_1210_ = lean_ctor_get_uint16(v___y_1204_, sizeof(void*)*3);
v_suppressElabErrors_1211_ = lean_ctor_get_uint8(v___y_1204_, sizeof(void*)*3 + 2);
v_checkDeprecated_1212_ = lean_ctor_get_uint8(v___y_1204_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1213_ = lean_ctor_get_uint8(v___y_1204_, sizeof(void*)*3 + 4);
v_ref_1214_ = l_Lean_replaceRef(v_ref_1200_, v_ref_1209_);
lean_inc(v_currRecDepth_1208_);
lean_inc_ref(v_toCold_1207_);
v___x_1215_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1215_, 0, v_toCold_1207_);
lean_ctor_set(v___x_1215_, 1, v_currRecDepth_1208_);
lean_ctor_set(v___x_1215_, 2, v_ref_1214_);
lean_ctor_set_uint16(v___x_1215_, sizeof(void*)*3, v_optionFlags_1210_);
lean_ctor_set_uint8(v___x_1215_, sizeof(void*)*3 + 2, v_suppressElabErrors_1211_);
lean_ctor_set_uint8(v___x_1215_, sizeof(void*)*3 + 3, v_checkDeprecated_1212_);
lean_ctor_set_uint8(v___x_1215_, sizeof(void*)*3 + 4, v_isRecordingDeps_1213_);
v___x_1216_ = lean_st_ref_get(v___y_1205_);
v_traceState_1217_ = lean_ctor_get(v___x_1216_, 4);
lean_inc_ref(v_traceState_1217_);
lean_dec(v___x_1216_);
v_traces_1218_ = lean_ctor_get(v_traceState_1217_, 0);
lean_inc_ref(v_traces_1218_);
lean_dec_ref(v_traceState_1217_);
v___x_1219_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1218_);
lean_dec_ref(v_traces_1218_);
v_sz_1220_ = lean_array_size(v___x_1219_);
v___x_1221_ = ((size_t)0ULL);
v___x_1222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(v_sz_1220_, v___x_1221_, v___x_1219_);
v_msg_1223_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1223_, 0, v_data_1199_);
lean_ctor_set(v_msg_1223_, 1, v_msg_1201_);
lean_ctor_set(v_msg_1223_, 2, v___x_1222_);
v___x_1224_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msg_1223_, v___y_1202_, v___y_1203_, v___x_1215_, v___y_1205_);
lean_dec_ref_known(v___x_1215_, 3);
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1263_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1263_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1229_; lean_object* v_traceState_1230_; lean_object* v_env_1231_; lean_object* v_nextMacroScope_1232_; lean_object* v_ngen_1233_; lean_object* v_auxDeclNGen_1234_; lean_object* v_cache_1235_; lean_object* v_recordedDeps_1236_; lean_object* v_messages_1237_; lean_object* v_infoState_1238_; lean_object* v_snapshotTasks_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1262_; 
v___x_1229_ = lean_st_ref_take(v___y_1205_);
v_traceState_1230_ = lean_ctor_get(v___x_1229_, 4);
v_env_1231_ = lean_ctor_get(v___x_1229_, 0);
v_nextMacroScope_1232_ = lean_ctor_get(v___x_1229_, 1);
v_ngen_1233_ = lean_ctor_get(v___x_1229_, 2);
v_auxDeclNGen_1234_ = lean_ctor_get(v___x_1229_, 3);
v_cache_1235_ = lean_ctor_get(v___x_1229_, 5);
v_recordedDeps_1236_ = lean_ctor_get(v___x_1229_, 6);
v_messages_1237_ = lean_ctor_get(v___x_1229_, 7);
v_infoState_1238_ = lean_ctor_get(v___x_1229_, 8);
v_snapshotTasks_1239_ = lean_ctor_get(v___x_1229_, 9);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1241_ = v___x_1229_;
v_isShared_1242_ = v_isSharedCheck_1262_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_snapshotTasks_1239_);
lean_inc(v_infoState_1238_);
lean_inc(v_messages_1237_);
lean_inc(v_recordedDeps_1236_);
lean_inc(v_cache_1235_);
lean_inc(v_traceState_1230_);
lean_inc(v_auxDeclNGen_1234_);
lean_inc(v_ngen_1233_);
lean_inc(v_nextMacroScope_1232_);
lean_inc(v_env_1231_);
lean_dec(v___x_1229_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1262_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
uint64_t v_tid_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1260_; 
v_tid_1243_ = lean_ctor_get_uint64(v_traceState_1230_, sizeof(void*)*1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_traceState_1230_);
if (v_isSharedCheck_1260_ == 0)
{
lean_object* v_unused_1261_; 
v_unused_1261_ = lean_ctor_get(v_traceState_1230_, 0);
lean_dec(v_unused_1261_);
v___x_1245_ = v_traceState_1230_;
v_isShared_1246_ = v_isSharedCheck_1260_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_traceState_1230_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1260_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1251_; 
v___x_1247_ = lean_box(0);
v___x_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_ref_1200_);
lean_ctor_set(v___x_1248_, 1, v_a_1225_);
v___x_1249_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1198_, v___x_1248_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v___x_1249_);
v___x_1251_ = v___x_1245_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1249_);
lean_ctor_set_uint64(v_reuseFailAlloc_1259_, sizeof(void*)*1, v_tid_1243_);
v___x_1251_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1253_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 4, v___x_1251_);
v___x_1253_ = v___x_1241_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_env_1231_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_nextMacroScope_1232_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_ngen_1233_);
lean_ctor_set(v_reuseFailAlloc_1258_, 3, v_auxDeclNGen_1234_);
lean_ctor_set(v_reuseFailAlloc_1258_, 4, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1258_, 5, v_cache_1235_);
lean_ctor_set(v_reuseFailAlloc_1258_, 6, v_recordedDeps_1236_);
lean_ctor_set(v_reuseFailAlloc_1258_, 7, v_messages_1237_);
lean_ctor_set(v_reuseFailAlloc_1258_, 8, v_infoState_1238_);
lean_ctor_set(v_reuseFailAlloc_1258_, 9, v_snapshotTasks_1239_);
v___x_1253_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1254_ = lean_st_ref_put(v___y_1205_, v___x_1253_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1247_);
v___x_1256_ = v___x_1227_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1247_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg___boxed(lean_object* v_oldTraces_1264_, lean_object* v_data_1265_, lean_object* v_ref_1266_, lean_object* v_msg_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1264_, v_data_1265_, v_ref_1266_, v_msg_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(lean_object* v_opts_1274_, lean_object* v_opt_1275_){
_start:
{
lean_object* v_name_1276_; lean_object* v_defValue_1277_; lean_object* v_map_1278_; lean_object* v___x_1279_; 
v_name_1276_ = lean_ctor_get(v_opt_1275_, 0);
v_defValue_1277_ = lean_ctor_get(v_opt_1275_, 1);
v_map_1278_ = lean_ctor_get(v_opts_1274_, 0);
v___x_1279_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1278_, v_name_1276_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_inc(v_defValue_1277_);
return v_defValue_1277_;
}
else
{
lean_object* v_val_1280_; 
v_val_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v___x_1279_, 1);
if (lean_obj_tag(v_val_1280_) == 3)
{
lean_object* v_v_1281_; 
v_v_1281_ = lean_ctor_get(v_val_1280_, 0);
lean_inc(v_v_1281_);
lean_dec_ref_known(v_val_1280_, 1);
return v_v_1281_;
}
else
{
lean_dec(v_val_1280_);
lean_inc(v_defValue_1277_);
return v_defValue_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10___boxed(lean_object* v_opts_1282_, lean_object* v_opt_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1282_, v_opt_1283_);
lean_dec_ref(v_opt_1283_);
lean_dec_ref(v_opts_1282_);
return v_res_1284_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0));
v___x_1287_ = l_Lean_stringToMessageData(v___x_1286_);
return v___x_1287_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1288_; double v___x_1289_; 
v___x_1288_ = lean_unsigned_to_nat(1000u);
v___x_1289_ = lean_float_of_nat(v___x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(lean_object* v_cls_1290_, uint8_t v_collapsed_1291_, lean_object* v_tag_1292_, lean_object* v_opts_1293_, uint8_t v_clsEnabled_1294_, lean_object* v_oldTraces_1295_, lean_object* v_msg_1296_, lean_object* v_resStartStop_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v_data_1315_; lean_object* v_fst_1318_; lean_object* v_snd_1319_; lean_object* v___x_1320_; uint8_t v___x_1321_; lean_object* v___y_1323_; lean_object* v_a_1324_; uint8_t v___y_1339_; double v___y_1371_; 
v_fst_1310_ = lean_ctor_get(v_resStartStop_1297_, 0);
lean_inc(v_fst_1310_);
v_snd_1311_ = lean_ctor_get(v_resStartStop_1297_, 1);
lean_inc(v_snd_1311_);
lean_dec_ref(v_resStartStop_1297_);
v_fst_1318_ = lean_ctor_get(v_snd_1311_, 0);
lean_inc(v_fst_1318_);
v_snd_1319_ = lean_ctor_get(v_snd_1311_, 1);
lean_inc(v_snd_1319_);
lean_dec(v_snd_1311_);
v___x_1320_ = l_Lean_trace_profiler;
v___x_1321_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_1293_, v___x_1320_);
if (v___x_1321_ == 0)
{
v___y_1339_ = v___x_1321_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1377_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_1293_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1379_; double v___x_1380_; double v___x_1381_; double v___x_1382_; 
v___x_1378_ = l_Lean_trace_profiler_threshold;
v___x_1379_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1293_, v___x_1378_);
v___x_1380_ = lean_float_of_nat(v___x_1379_);
v___x_1381_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2);
v___x_1382_ = lean_float_div(v___x_1380_, v___x_1381_);
v___y_1371_ = v___x_1382_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1383_; lean_object* v___x_1384_; double v___x_1385_; 
v___x_1383_ = l_Lean_trace_profiler_threshold;
v___x_1384_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1293_, v___x_1383_);
v___x_1385_ = lean_float_of_nat(v___x_1384_);
v___y_1371_ = v___x_1385_;
goto v___jp_1370_;
}
}
v___jp_1312_:
{
lean_object* v___x_1316_; 
lean_inc(v___y_1313_);
v___x_1316_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1295_, v_data_1315_, v___y_1313_, v___y_1314_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1317_; 
lean_dec_ref_known(v___x_1316_, 1);
v___x_1317_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_fst_1310_);
return v___x_1317_;
}
else
{
lean_dec(v_fst_1310_);
return v___x_1316_;
}
}
v___jp_1322_:
{
uint8_t v_result_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; double v___x_1328_; lean_object* v_data_1329_; 
v_result_1325_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(v_fst_1310_);
v___x_1326_ = lean_box(v_result_1325_);
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
v___x_1328_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_1292_);
lean_inc_ref(v___x_1327_);
lean_inc(v_cls_1290_);
v_data_1329_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1329_, 0, v_cls_1290_);
lean_ctor_set(v_data_1329_, 1, v___x_1327_);
lean_ctor_set(v_data_1329_, 2, v_tag_1292_);
lean_ctor_set_float(v_data_1329_, sizeof(void*)*3, v___x_1328_);
lean_ctor_set_float(v_data_1329_, sizeof(void*)*3 + 8, v___x_1328_);
lean_ctor_set_uint8(v_data_1329_, sizeof(void*)*3 + 16, v_collapsed_1291_);
if (v___x_1321_ == 0)
{
lean_dec_ref_known(v___x_1327_, 1);
lean_dec(v_snd_1319_);
lean_dec(v_fst_1318_);
lean_dec_ref(v_tag_1292_);
lean_dec(v_cls_1290_);
v___y_1313_ = v___y_1323_;
v___y_1314_ = v_a_1324_;
v_data_1315_ = v_data_1329_;
goto v___jp_1312_;
}
else
{
lean_object* v_data_1330_; double v___x_1331_; double v___x_1332_; 
lean_dec_ref_known(v_data_1329_, 3);
v_data_1330_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1330_, 0, v_cls_1290_);
lean_ctor_set(v_data_1330_, 1, v___x_1327_);
lean_ctor_set(v_data_1330_, 2, v_tag_1292_);
v___x_1331_ = lean_unbox_float(v_fst_1318_);
lean_dec(v_fst_1318_);
lean_ctor_set_float(v_data_1330_, sizeof(void*)*3, v___x_1331_);
v___x_1332_ = lean_unbox_float(v_snd_1319_);
lean_dec(v_snd_1319_);
lean_ctor_set_float(v_data_1330_, sizeof(void*)*3 + 8, v___x_1332_);
lean_ctor_set_uint8(v_data_1330_, sizeof(void*)*3 + 16, v_collapsed_1291_);
v___y_1313_ = v___y_1323_;
v___y_1314_ = v_a_1324_;
v_data_1315_ = v_data_1330_;
goto v___jp_1312_;
}
}
v___jp_1333_:
{
lean_object* v_ref_1334_; lean_object* v___x_1335_; 
v_ref_1334_ = lean_ctor_get(v___y_1307_, 2);
lean_inc(v___y_1308_);
lean_inc_ref(v___y_1307_);
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1305_);
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc(v___y_1299_);
lean_inc_ref(v___y_1298_);
lean_inc(v_fst_1310_);
v___x_1335_ = lean_apply_13(v_msg_1296_, v_fst_1310_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, lean_box(0));
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___y_1323_ = v_ref_1334_;
v_a_1324_ = v_a_1336_;
goto v___jp_1322_;
}
else
{
lean_object* v___x_1337_; 
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1);
v___y_1323_ = v_ref_1334_;
v_a_1324_ = v___x_1337_;
goto v___jp_1322_;
}
}
v___jp_1338_:
{
if (v_clsEnabled_1294_ == 0)
{
if (v___y_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v_traceState_1341_; lean_object* v_env_1342_; lean_object* v_nextMacroScope_1343_; lean_object* v_ngen_1344_; lean_object* v_auxDeclNGen_1345_; lean_object* v_cache_1346_; lean_object* v_recordedDeps_1347_; lean_object* v_messages_1348_; lean_object* v_infoState_1349_; lean_object* v_snapshotTasks_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1369_; 
lean_dec(v_snd_1319_);
lean_dec(v_fst_1318_);
lean_dec_ref(v_msg_1296_);
lean_dec_ref(v_tag_1292_);
lean_dec(v_cls_1290_);
v___x_1340_ = lean_st_ref_take(v___y_1308_);
v_traceState_1341_ = lean_ctor_get(v___x_1340_, 4);
v_env_1342_ = lean_ctor_get(v___x_1340_, 0);
v_nextMacroScope_1343_ = lean_ctor_get(v___x_1340_, 1);
v_ngen_1344_ = lean_ctor_get(v___x_1340_, 2);
v_auxDeclNGen_1345_ = lean_ctor_get(v___x_1340_, 3);
v_cache_1346_ = lean_ctor_get(v___x_1340_, 5);
v_recordedDeps_1347_ = lean_ctor_get(v___x_1340_, 6);
v_messages_1348_ = lean_ctor_get(v___x_1340_, 7);
v_infoState_1349_ = lean_ctor_get(v___x_1340_, 8);
v_snapshotTasks_1350_ = lean_ctor_get(v___x_1340_, 9);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1352_ = v___x_1340_;
v_isShared_1353_ = v_isSharedCheck_1369_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_snapshotTasks_1350_);
lean_inc(v_infoState_1349_);
lean_inc(v_messages_1348_);
lean_inc(v_recordedDeps_1347_);
lean_inc(v_cache_1346_);
lean_inc(v_traceState_1341_);
lean_inc(v_auxDeclNGen_1345_);
lean_inc(v_ngen_1344_);
lean_inc(v_nextMacroScope_1343_);
lean_inc(v_env_1342_);
lean_dec(v___x_1340_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1369_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
uint64_t v_tid_1354_; lean_object* v_traces_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1368_; 
v_tid_1354_ = lean_ctor_get_uint64(v_traceState_1341_, sizeof(void*)*1);
v_traces_1355_ = lean_ctor_get(v_traceState_1341_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_traceState_1341_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1357_ = v_traceState_1341_;
v_isShared_1358_ = v_isSharedCheck_1368_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_traces_1355_);
lean_dec(v_traceState_1341_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1368_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1295_, v_traces_1355_);
lean_dec_ref(v_traces_1355_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1359_);
v___x_1361_ = v___x_1357_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1359_);
lean_ctor_set_uint64(v_reuseFailAlloc_1367_, sizeof(void*)*1, v_tid_1354_);
v___x_1361_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
lean_object* v___x_1363_; 
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 4, v___x_1361_);
v___x_1363_ = v___x_1352_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_env_1342_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_nextMacroScope_1343_);
lean_ctor_set(v_reuseFailAlloc_1366_, 2, v_ngen_1344_);
lean_ctor_set(v_reuseFailAlloc_1366_, 3, v_auxDeclNGen_1345_);
lean_ctor_set(v_reuseFailAlloc_1366_, 4, v___x_1361_);
lean_ctor_set(v_reuseFailAlloc_1366_, 5, v_cache_1346_);
lean_ctor_set(v_reuseFailAlloc_1366_, 6, v_recordedDeps_1347_);
lean_ctor_set(v_reuseFailAlloc_1366_, 7, v_messages_1348_);
lean_ctor_set(v_reuseFailAlloc_1366_, 8, v_infoState_1349_);
lean_ctor_set(v_reuseFailAlloc_1366_, 9, v_snapshotTasks_1350_);
v___x_1363_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_st_ref_put(v___y_1308_, v___x_1363_);
v___x_1365_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_fst_1310_);
return v___x_1365_;
}
}
}
}
}
else
{
goto v___jp_1333_;
}
}
else
{
goto v___jp_1333_;
}
}
v___jp_1370_:
{
double v___x_1372_; double v___x_1373_; double v___x_1374_; uint8_t v___x_1375_; 
v___x_1372_ = lean_unbox_float(v_snd_1319_);
v___x_1373_ = lean_unbox_float(v_fst_1318_);
v___x_1374_ = lean_float_sub(v___x_1372_, v___x_1373_);
v___x_1375_ = lean_float_decLt(v___y_1371_, v___x_1374_);
v___y_1339_ = v___x_1375_;
goto v___jp_1338_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___boxed(lean_object** _args){
lean_object* v_cls_1386_ = _args[0];
lean_object* v_collapsed_1387_ = _args[1];
lean_object* v_tag_1388_ = _args[2];
lean_object* v_opts_1389_ = _args[3];
lean_object* v_clsEnabled_1390_ = _args[4];
lean_object* v_oldTraces_1391_ = _args[5];
lean_object* v_msg_1392_ = _args[6];
lean_object* v_resStartStop_1393_ = _args[7];
lean_object* v___y_1394_ = _args[8];
lean_object* v___y_1395_ = _args[9];
lean_object* v___y_1396_ = _args[10];
lean_object* v___y_1397_ = _args[11];
lean_object* v___y_1398_ = _args[12];
lean_object* v___y_1399_ = _args[13];
lean_object* v___y_1400_ = _args[14];
lean_object* v___y_1401_ = _args[15];
lean_object* v___y_1402_ = _args[16];
lean_object* v___y_1403_ = _args[17];
lean_object* v___y_1404_ = _args[18];
lean_object* v___y_1405_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_1406_; uint8_t v_clsEnabled_boxed_1407_; lean_object* v_res_1408_; 
v_collapsed_boxed_1406_ = lean_unbox(v_collapsed_1387_);
v_clsEnabled_boxed_1407_ = lean_unbox(v_clsEnabled_1390_);
v_res_1408_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v_cls_1386_, v_collapsed_boxed_1406_, v_tag_1388_, v_opts_1389_, v_clsEnabled_boxed_1407_, v_oldTraces_1391_, v_msg_1392_, v_resStartStop_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec_ref(v_opts_1389_);
return v_res_1408_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0));
v___x_1411_ = l_Lean_stringToMessageData(v___x_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object* v_as_1412_, size_t v_sz_1413_, size_t v_i_1414_, lean_object* v_b_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_a_1429_; uint8_t v___x_1433_; 
v___x_1433_ = lean_usize_dec_lt(v_i_1414_, v_sz_1413_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1434_, 0, v_b_1415_);
return v___x_1434_;
}
else
{
lean_object* v_a_1435_; lean_object* v_toCold_1436_; lean_object* v_options_1437_; lean_object* v_fst_1438_; lean_object* v_snd_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1459_; 
v_a_1435_ = lean_array_uget(v_as_1412_, v_i_1414_);
v_toCold_1436_ = lean_ctor_get(v___y_1425_, 0);
v_options_1437_ = lean_ctor_get(v_toCold_1436_, 2);
v_fst_1438_ = lean_ctor_get(v_a_1435_, 0);
v_snd_1439_ = lean_ctor_get(v_a_1435_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_a_1435_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1441_ = v_a_1435_;
v_isShared_1442_ = v_isSharedCheck_1459_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_snd_1439_);
lean_inc(v_fst_1438_);
lean_dec(v_a_1435_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1459_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v_inheritedTraceOptions_1443_; uint8_t v_hasTrace_1444_; lean_object* v___x_1445_; 
v_inheritedTraceOptions_1443_ = lean_ctor_get(v_toCold_1436_, 11);
v_hasTrace_1444_ = lean_ctor_get_uint8(v_options_1437_, sizeof(void*)*1);
v___x_1445_ = lean_box(0);
if (v_hasTrace_1444_ == 0)
{
lean_del_object(v___x_1441_);
lean_dec(v_snd_1439_);
lean_dec(v_fst_1438_);
v_a_1429_ = v___x_1445_;
goto v___jp_1428_;
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; uint8_t v___x_1448_; 
v___x_1446_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_1447_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_1448_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1443_, v_options_1437_, v___x_1447_);
if (v___x_1448_ == 0)
{
lean_del_object(v___x_1441_);
lean_dec(v_snd_1439_);
lean_dec(v_fst_1438_);
v_a_1429_ = v___x_1445_;
goto v___jp_1428_;
}
else
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1449_ = l_Lean_MessageData_ofName(v_fst_1438_);
v___x_1450_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1);
if (v_isShared_1442_ == 0)
{
lean_ctor_set_tag(v___x_1441_, 7);
lean_ctor_set(v___x_1441_, 1, v___x_1450_);
lean_ctor_set(v___x_1441_, 0, v___x_1449_);
v___x_1452_ = v___x_1441_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1453_ = l_Nat_reprFast(v_snd_1439_);
v___x_1454_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
v___x_1455_ = l_Lean_MessageData_ofFormat(v___x_1454_);
v___x_1456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1452_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v___x_1446_, v___x_1456_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_dec_ref_known(v___x_1457_, 1);
v_a_1429_ = v___x_1445_;
goto v___jp_1428_;
}
else
{
return v___x_1457_;
}
}
}
}
}
}
v___jp_1428_:
{
size_t v___x_1430_; size_t v___x_1431_; 
v___x_1430_ = ((size_t)1ULL);
v___x_1431_ = lean_usize_add(v_i_1414_, v___x_1430_);
v_i_1414_ = v___x_1431_;
v_b_1415_ = v_a_1429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object* v_as_1460_, lean_object* v_sz_1461_, lean_object* v_i_1462_, lean_object* v_b_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
size_t v_sz_boxed_1476_; size_t v_i_boxed_1477_; lean_object* v_res_1478_; 
v_sz_boxed_1476_ = lean_unbox_usize(v_sz_1461_);
lean_dec(v_sz_1461_);
v_i_boxed_1477_ = lean_unbox_usize(v_i_1462_);
lean_dec(v_i_1462_);
v_res_1478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v_as_1460_, v_sz_boxed_1476_, v_i_boxed_1477_, v_b_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec_ref(v_as_1460_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(lean_object* v_x_1479_, lean_object* v_x_1480_){
_start:
{
if (lean_obj_tag(v_x_1480_) == 0)
{
return v_x_1479_;
}
else
{
lean_object* v_key_1481_; lean_object* v_value_1482_; lean_object* v_tail_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v_key_1481_ = lean_ctor_get(v_x_1480_, 0);
v_value_1482_ = lean_ctor_get(v_x_1480_, 1);
v_tail_1483_ = lean_ctor_get(v_x_1480_, 2);
lean_inc(v_value_1482_);
lean_inc(v_key_1481_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_key_1481_);
lean_ctor_set(v___x_1484_, 1, v_value_1482_);
v___x_1485_ = lean_array_push(v_x_1479_, v___x_1484_);
v_x_1479_ = v___x_1485_;
v_x_1480_ = v_tail_1483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8___boxed(lean_object* v_x_1487_, lean_object* v_x_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(v_x_1487_, v_x_1488_);
lean_dec(v_x_1488_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(lean_object* v_as_1490_, size_t v_i_1491_, size_t v_stop_1492_, lean_object* v_b_1493_){
_start:
{
uint8_t v___x_1494_; 
v___x_1494_ = lean_usize_dec_eq(v_i_1491_, v_stop_1492_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; size_t v___x_1497_; size_t v___x_1498_; 
v___x_1495_ = lean_array_uget_borrowed(v_as_1490_, v_i_1491_);
v___x_1496_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(v_b_1493_, v___x_1495_);
v___x_1497_ = ((size_t)1ULL);
v___x_1498_ = lean_usize_add(v_i_1491_, v___x_1497_);
v_i_1491_ = v___x_1498_;
v_b_1493_ = v___x_1496_;
goto _start;
}
else
{
return v_b_1493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9___boxed(lean_object* v_as_1500_, lean_object* v_i_1501_, lean_object* v_stop_1502_, lean_object* v_b_1503_){
_start:
{
size_t v_i_boxed_1504_; size_t v_stop_boxed_1505_; lean_object* v_res_1506_; 
v_i_boxed_1504_ = lean_unbox_usize(v_i_1501_);
lean_dec(v_i_1501_);
v_stop_boxed_1505_ = lean_unbox_usize(v_stop_1502_);
lean_dec(v_stop_1502_);
v_res_1506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(v_as_1500_, v_i_boxed_1504_, v_stop_boxed_1505_, v_b_1503_);
lean_dec_ref(v_as_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(lean_object* v_hi_1507_, lean_object* v_pivot_1508_, lean_object* v_as_1509_, lean_object* v_i_1510_, lean_object* v_k_1511_){
_start:
{
uint8_t v___x_1512_; 
v___x_1512_ = lean_nat_dec_lt(v_k_1511_, v_hi_1507_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
lean_dec(v_k_1511_);
v___x_1513_ = lean_array_fswap(v_as_1509_, v_i_1510_, v_hi_1507_);
v___x_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1514_, 0, v_i_1510_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
return v___x_1514_;
}
else
{
lean_object* v_snd_1515_; lean_object* v___x_1516_; lean_object* v_snd_1517_; uint8_t v___x_1518_; 
v_snd_1515_ = lean_ctor_get(v_pivot_1508_, 1);
v___x_1516_ = lean_array_fget_borrowed(v_as_1509_, v_k_1511_);
v_snd_1517_ = lean_ctor_get(v___x_1516_, 1);
v___x_1518_ = lean_nat_dec_lt(v_snd_1515_, v_snd_1517_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_unsigned_to_nat(1u);
v___x_1520_ = lean_nat_add(v_k_1511_, v___x_1519_);
lean_dec(v_k_1511_);
v_k_1511_ = v___x_1520_;
goto _start;
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1522_ = lean_array_fswap(v_as_1509_, v_i_1510_, v_k_1511_);
v___x_1523_ = lean_unsigned_to_nat(1u);
v___x_1524_ = lean_nat_add(v_i_1510_, v___x_1523_);
lean_dec(v_i_1510_);
v___x_1525_ = lean_nat_add(v_k_1511_, v___x_1523_);
lean_dec(v_k_1511_);
v_as_1509_ = v___x_1522_;
v_i_1510_ = v___x_1524_;
v_k_1511_ = v___x_1525_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg___boxed(lean_object* v_hi_1527_, lean_object* v_pivot_1528_, lean_object* v_as_1529_, lean_object* v_i_1530_, lean_object* v_k_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1527_, v_pivot_1528_, v_as_1529_, v_i_1530_, v_k_1531_);
lean_dec_ref(v_pivot_1528_);
lean_dec(v_hi_1527_);
return v_res_1532_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(lean_object* v_a_1533_, lean_object* v_b_1534_){
_start:
{
lean_object* v_snd_1535_; lean_object* v_snd_1536_; uint8_t v___x_1537_; 
v_snd_1535_ = lean_ctor_get(v_b_1534_, 1);
v_snd_1536_ = lean_ctor_get(v_a_1533_, 1);
v___x_1537_ = lean_nat_dec_lt(v_snd_1535_, v_snd_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0___boxed(lean_object* v_a_1538_, lean_object* v_b_1539_){
_start:
{
uint8_t v_res_1540_; lean_object* v_r_1541_; 
v_res_1540_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v_a_1538_, v_b_1539_);
lean_dec_ref(v_b_1539_);
lean_dec_ref(v_a_1538_);
v_r_1541_ = lean_box(v_res_1540_);
return v_r_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(lean_object* v_n_1542_, lean_object* v_as_1543_, lean_object* v_lo_1544_, lean_object* v_hi_1545_){
_start:
{
lean_object* v___y_1547_; uint8_t v___x_1557_; 
v___x_1557_ = lean_nat_dec_lt(v_lo_1544_, v_hi_1545_);
if (v___x_1557_ == 0)
{
lean_dec(v_lo_1544_);
return v_as_1543_;
}
else
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_mid_1560_; lean_object* v___y_1562_; lean_object* v___y_1568_; lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; 
v___x_1558_ = lean_nat_add(v_lo_1544_, v_hi_1545_);
v___x_1559_ = lean_unsigned_to_nat(1u);
v_mid_1560_ = lean_nat_shiftr(v___x_1558_, v___x_1559_);
lean_dec(v___x_1558_);
v___x_1573_ = lean_array_fget_borrowed(v_as_1543_, v_mid_1560_);
v___x_1574_ = lean_array_fget_borrowed(v_as_1543_, v_lo_1544_);
v___x_1575_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1573_, v___x_1574_);
if (v___x_1575_ == 0)
{
v___y_1568_ = v_as_1543_;
goto v___jp_1567_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_array_fswap(v_as_1543_, v_lo_1544_, v_mid_1560_);
v___y_1568_ = v___x_1576_;
goto v___jp_1567_;
}
v___jp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; uint8_t v___x_1565_; 
v___x_1563_ = lean_array_fget_borrowed(v___y_1562_, v_mid_1560_);
v___x_1564_ = lean_array_fget_borrowed(v___y_1562_, v_hi_1545_);
v___x_1565_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1563_, v___x_1564_);
if (v___x_1565_ == 0)
{
lean_dec(v_mid_1560_);
v___y_1547_ = v___y_1562_;
goto v___jp_1546_;
}
else
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_array_fswap(v___y_1562_, v_mid_1560_, v_hi_1545_);
lean_dec(v_mid_1560_);
v___y_1547_ = v___x_1566_;
goto v___jp_1546_;
}
}
v___jp_1567_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1569_ = lean_array_fget_borrowed(v___y_1568_, v_hi_1545_);
v___x_1570_ = lean_array_fget_borrowed(v___y_1568_, v_lo_1544_);
v___x_1571_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1569_, v___x_1570_);
if (v___x_1571_ == 0)
{
v___y_1562_ = v___y_1568_;
goto v___jp_1561_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_array_fswap(v___y_1568_, v_lo_1544_, v_hi_1545_);
v___y_1562_ = v___x_1572_;
goto v___jp_1561_;
}
}
}
v___jp_1546_:
{
lean_object* v_pivot_1548_; lean_object* v___x_1549_; lean_object* v_fst_1550_; lean_object* v_snd_1551_; uint8_t v___x_1552_; 
v_pivot_1548_ = lean_array_fget(v___y_1547_, v_hi_1545_);
lean_inc_n(v_lo_1544_, 2);
v___x_1549_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1545_, v_pivot_1548_, v___y_1547_, v_lo_1544_, v_lo_1544_);
lean_dec(v_pivot_1548_);
v_fst_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_fst_1550_);
v_snd_1551_ = lean_ctor_get(v___x_1549_, 1);
lean_inc(v_snd_1551_);
lean_dec_ref(v___x_1549_);
v___x_1552_ = lean_nat_dec_le(v_hi_1545_, v_fst_1550_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1542_, v_snd_1551_, v_lo_1544_, v_fst_1550_);
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_add(v_fst_1550_, v___x_1554_);
lean_dec(v_fst_1550_);
v_as_1543_ = v___x_1553_;
v_lo_1544_ = v___x_1555_;
goto _start;
}
else
{
lean_dec(v_fst_1550_);
lean_dec(v_lo_1544_);
return v_snd_1551_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___boxed(lean_object* v_n_1577_, lean_object* v_as_1578_, lean_object* v_lo_1579_, lean_object* v_hi_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1577_, v_as_1578_, v_lo_1579_, v_hi_1580_);
lean_dec(v_hi_1580_);
lean_dec(v_n_1577_);
return v_res_1581_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1592_ = lean_box(0);
v___x_1593_ = lean_unsigned_to_nat(16u);
v___x_1594_ = lean_mk_array(v___x_1593_, v___x_1592_);
return v___x_1594_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1595_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4);
v___x_1596_ = lean_unsigned_to_nat(0u);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
lean_ctor_set(v___x_1597_, 1, v___x_1595_);
return v___x_1597_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5);
v___x_1599_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
lean_ctor_set(v___x_1599_, 2, v___x_1598_);
lean_ctor_set(v___x_1599_, 3, v___x_1598_);
return v___x_1599_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7(void){
_start:
{
lean_object* v___x_1600_; double v___x_1601_; 
v___x_1600_ = lean_unsigned_to_nat(1000000000u);
v___x_1601_ = lean_float_of_nat(v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object* v___x_1604_, lean_object* v___f_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_1604_, v___y_1616_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_config_1619_; lean_object* v_a_1620_; lean_object* v_maxSteps_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; lean_object* v___f_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___f_1632_; lean_object* v___f_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___f_1637_; lean_object* v___x_1638_; lean_object* v_target_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_config_1619_ = lean_ctor_get(v___y_1606_, 0);
v_a_1620_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1618_, 1);
v_maxSteps_1621_ = lean_ctor_get(v_config_1619_, 1);
v___x_1622_ = lean_unsigned_to_nat(2u);
v___x_1623_ = 0;
v___f_1624_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0));
lean_inc_n(v_maxSteps_1621_, 2);
v___x_1625_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1625_, 0, v_maxSteps_1621_);
lean_ctor_set(v___x_1625_, 1, v___x_1622_);
lean_ctor_set_uint8(v___x_1625_, sizeof(void*)*2, v___x_1623_);
v___x_1626_ = 1;
v___x_1627_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1));
v___x_1628_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3));
v___x_1629_ = lean_unsigned_to_nat(0u);
v___x_1630_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__6);
v___x_1631_ = lean_st_mk_ref(v___x_1630_);
lean_inc(v___x_1631_);
v___f_1632_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed), 15, 3);
lean_closure_set(v___f_1632_, 0, v___x_1631_);
lean_closure_set(v___f_1632_, 1, v_a_1620_);
lean_closure_set(v___f_1632_, 2, v___x_1628_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed), 13, 2);
lean_closure_set(v___f_1633_, 0, v___x_1627_);
lean_closure_set(v___f_1633_, 1, v___f_1632_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___f_1624_);
lean_ctor_set(v___x_1634_, 1, v___f_1633_);
v___x_1635_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1635_, 0, v_maxSteps_1621_);
lean_ctor_set_uint8(v___x_1635_, sizeof(void*)*1, v___x_1626_);
v___x_1636_ = lean_box(v___x_1623_);
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed), 17, 5);
lean_closure_set(v___f_1637_, 0, v___x_1635_);
lean_closure_set(v___f_1637_, 1, v___x_1634_);
lean_closure_set(v___f_1637_, 2, v___x_1625_);
lean_closure_set(v___f_1637_, 3, v___x_1629_);
lean_closure_set(v___f_1637_, 4, v___x_1636_);
v___x_1638_ = lean_st_ref_get(v___y_1607_);
v_target_1639_ = lean_ctor_get(v___x_1638_, 2);
lean_inc_ref(v_target_1639_);
lean_dec(v___x_1638_);
v___x_1640_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_1639_);
lean_dec_ref(v_target_1639_);
v___x_1641_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v___x_1640_, v___f_1637_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___y_1644_; lean_object* v_toCold_1661_; lean_object* v_options_1662_; uint8_t v_hasTrace_1663_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_toCold_1661_ = lean_ctor_get(v___y_1615_, 0);
v_options_1662_ = lean_ctor_get(v_toCold_1661_, 2);
v_hasTrace_1663_ = lean_ctor_get_uint8(v_options_1662_, sizeof(void*)*1);
if (v_hasTrace_1663_ == 0)
{
lean_dec(v___x_1631_);
lean_dec_ref(v___f_1605_);
return v___x_1641_;
}
else
{
lean_object* v_inheritedTraceOptions_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v_a_1672_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v_a_1688_; 
v_inheritedTraceOptions_1664_ = lean_ctor_get(v_toCold_1661_, 11);
v___x_1665_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_1666_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_1667_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1664_, v_options_1662_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_dec(v___x_1631_);
lean_dec_ref(v___f_1605_);
return v___x_1641_;
}
else
{
lean_object* v___x_1697_; lean_object* v___y_1699_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1743_; lean_object* v_statistics_1749_; lean_object* v_size_1750_; lean_object* v_buckets_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1697_ = lean_st_ref_get(v___x_1631_);
lean_dec(v___x_1631_);
v_statistics_1749_ = lean_ctor_get(v___x_1697_, 3);
lean_inc_ref(v_statistics_1749_);
lean_dec(v___x_1697_);
v_size_1750_ = lean_ctor_get(v_statistics_1749_, 0);
lean_inc(v_size_1750_);
v_buckets_1751_ = lean_ctor_get(v_statistics_1749_, 1);
lean_inc_ref(v_buckets_1751_);
lean_dec_ref(v_statistics_1749_);
v___x_1752_ = lean_mk_empty_array_with_capacity(v_size_1750_);
lean_dec(v_size_1750_);
v___x_1753_ = lean_array_get_size(v_buckets_1751_);
v___x_1754_ = lean_nat_dec_lt(v___x_1629_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_dec_ref(v_buckets_1751_);
v___y_1743_ = v___x_1752_;
goto v___jp_1742_;
}
else
{
size_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = ((size_t)0ULL);
v___x_1756_ = lean_usize_of_nat(v___x_1753_);
v___x_1757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(v_buckets_1751_, v___x_1755_, v___x_1756_, v___x_1752_);
lean_dec_ref(v_buckets_1751_);
v___y_1743_ = v___x_1757_;
goto v___jp_1742_;
}
v___jp_1698_:
{
lean_object* v___x_1700_; size_t v_sz_1701_; size_t v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v_a_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v___x_1700_ = lean_box(0);
v_sz_1701_ = lean_array_size(v___y_1699_);
v___x_1702_ = ((size_t)0ULL);
v___x_1703_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1));
v___x_1704_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_1616_);
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref(v___x_1704_);
v___x_1706_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1707_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_options_1662_, v___x_1706_);
if (v___x_1707_ == 0)
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_io_mono_nanos_now();
v___x_1709_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v___y_1699_, v_sz_1701_, v___x_1702_, v___x_1700_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec_ref(v___y_1699_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v___x_1710_; 
lean_dec_ref_known(v___x_1709_, 1);
v___x_1710_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__8));
v___y_1669_ = v___x_1703_;
v___y_1670_ = v_a_1705_;
v___y_1671_ = v___x_1708_;
v_a_1672_ = v___x_1710_;
goto v___jp_1668_;
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
v_a_1711_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1709_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1709_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set_tag(v___x_1713_, 0);
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
v___y_1669_ = v___x_1703_;
v___y_1670_ = v_a_1705_;
v___y_1671_ = v___x_1708_;
v_a_1672_ = v___x_1716_;
goto v___jp_1668_;
}
}
}
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_io_get_num_heartbeats();
v___x_1720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v___y_1699_, v_sz_1701_, v___x_1702_, v___x_1700_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec_ref(v___y_1699_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v___x_1721_; 
lean_dec_ref_known(v___x_1720_, 1);
v___x_1721_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__8));
v___y_1685_ = v___x_1703_;
v___y_1686_ = v_a_1705_;
v___y_1687_ = v___x_1719_;
v_a_1688_ = v___x_1721_;
goto v___jp_1684_;
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
v_a_1722_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1720_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1720_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
lean_ctor_set_tag(v___x_1724_, 0);
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
v___y_1685_ = v___x_1703_;
v___y_1686_ = v_a_1705_;
v___y_1687_ = v___x_1719_;
v_a_1688_ = v___x_1727_;
goto v___jp_1684_;
}
}
}
}
}
v___jp_1730_:
{
lean_object* v___x_1735_; 
v___x_1735_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v___y_1732_, v___y_1733_, v___y_1731_, v___y_1734_);
lean_dec(v___y_1734_);
lean_dec(v___y_1732_);
v___y_1699_ = v___x_1735_;
goto v___jp_1698_;
}
v___jp_1736_:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_nat_dec_le(v___y_1740_, v___y_1737_);
if (v___x_1741_ == 0)
{
lean_dec(v___y_1737_);
lean_inc(v___y_1740_);
v___y_1731_ = v___y_1740_;
v___y_1732_ = v___y_1738_;
v___y_1733_ = v___y_1739_;
v___y_1734_ = v___y_1740_;
goto v___jp_1730_;
}
else
{
v___y_1731_ = v___y_1740_;
v___y_1732_ = v___y_1738_;
v___y_1733_ = v___y_1739_;
v___y_1734_ = v___y_1737_;
goto v___jp_1730_;
}
}
v___jp_1742_:
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = lean_array_get_size(v___y_1743_);
v___x_1745_ = lean_nat_dec_eq(v___x_1744_, v___x_1629_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v___x_1746_ = lean_unsigned_to_nat(1u);
v___x_1747_ = lean_nat_sub(v___x_1744_, v___x_1746_);
v___x_1748_ = lean_nat_dec_le(v___x_1629_, v___x_1747_);
if (v___x_1748_ == 0)
{
lean_inc(v___x_1747_);
v___y_1737_ = v___x_1747_;
v___y_1738_ = v___x_1744_;
v___y_1739_ = v___y_1743_;
v___y_1740_ = v___x_1747_;
goto v___jp_1736_;
}
else
{
v___y_1737_ = v___x_1747_;
v___y_1738_ = v___x_1744_;
v___y_1739_ = v___y_1743_;
v___y_1740_ = v___x_1629_;
goto v___jp_1736_;
}
}
else
{
v___y_1699_ = v___y_1743_;
goto v___jp_1698_;
}
}
}
v___jp_1668_:
{
lean_object* v___x_1673_; double v___x_1674_; double v___x_1675_; double v___x_1676_; double v___x_1677_; double v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1673_ = lean_io_mono_nanos_now();
v___x_1674_ = lean_float_of_nat(v___y_1671_);
v___x_1675_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__7);
v___x_1676_ = lean_float_div(v___x_1674_, v___x_1675_);
v___x_1677_ = lean_float_of_nat(v___x_1673_);
v___x_1678_ = lean_float_div(v___x_1677_, v___x_1675_);
v___x_1679_ = lean_box_float(v___x_1676_);
v___x_1680_ = lean_box_float(v___x_1678_);
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v_a_1672_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
lean_inc_ref(v___y_1669_);
v___x_1683_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v___x_1665_, v___x_1626_, v___y_1669_, v_options_1662_, v___x_1667_, v___y_1670_, v___f_1605_, v___x_1682_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
v___y_1644_ = v___x_1683_;
goto v___jp_1643_;
}
v___jp_1684_:
{
lean_object* v___x_1689_; double v___x_1690_; double v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1689_ = lean_io_get_num_heartbeats();
v___x_1690_ = lean_float_of_nat(v___y_1687_);
v___x_1691_ = lean_float_of_nat(v___x_1689_);
v___x_1692_ = lean_box_float(v___x_1690_);
v___x_1693_ = lean_box_float(v___x_1691_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_a_1688_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
lean_inc_ref(v___y_1685_);
v___x_1696_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v___x_1665_, v___x_1626_, v___y_1685_, v_options_1662_, v___x_1667_, v___y_1686_, v___f_1605_, v___x_1695_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
v___y_1644_ = v___x_1696_;
goto v___jp_1643_;
}
}
v___jp_1643_:
{
if (lean_obj_tag(v___y_1644_) == 0)
{
lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
v_isSharedCheck_1651_ = !lean_is_exclusive(v___y_1644_);
if (v_isSharedCheck_1651_ == 0)
{
lean_object* v_unused_1652_; 
v_unused_1652_ = lean_ctor_get(v___y_1644_, 0);
lean_dec(v_unused_1652_);
v___x_1646_ = v___y_1644_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_dec(v___y_1644_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v_a_1642_);
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1642_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1642_);
v_a_1653_ = lean_ctor_get(v___y_1644_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___y_1644_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___y_1644_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___y_1644_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
else
{
lean_dec(v___x_1631_);
lean_dec_ref(v___f_1605_);
return v___x_1641_;
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v___f_1605_);
v_a_1758_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1618_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1618_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object* v___x_1766_, lean_object* v___f_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(v___x_1766_, v___f_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec_ref(v___x_1766_);
return v_res_1780_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3(void){
_start:
{
lean_object* v___f_1785_; lean_object* v___x_1786_; lean_object* v___f_1787_; 
v___f_1785_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0));
v___x_1786_ = l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
v___f_1787_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed), 14, 2);
lean_closure_set(v___f_1787_, 0, v___x_1786_);
lean_closure_set(v___f_1787_, 1, v___f_1785_);
return v___f_1787_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4(void){
_start:
{
lean_object* v___f_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___f_1788_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3);
v___x_1789_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2));
v___x_1790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
lean_ctor_set(v___x_1790_, 1, v___f_1788_);
return v___x_1790_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass(void){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object* v_cls_1792_, lean_object* v_msg_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_1792_, v_msg_1793_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object* v_cls_1807_, lean_object* v_msg_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(v_cls_1807_, v_msg_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object* v_upperBound_1822_, lean_object* v___x_1823_, lean_object* v___x_1824_, lean_object* v___x_1825_, lean_object* v___x_1826_, lean_object* v_inst_1827_, lean_object* v_R_1828_, lean_object* v_a_1829_, lean_object* v_b_1830_, lean_object* v_c_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_upperBound_1822_, v___x_1823_, v___x_1824_, v___x_1825_, v___x_1826_, v_a_1829_, v_b_1830_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_1845_ = _args[0];
lean_object* v___x_1846_ = _args[1];
lean_object* v___x_1847_ = _args[2];
lean_object* v___x_1848_ = _args[3];
lean_object* v___x_1849_ = _args[4];
lean_object* v_inst_1850_ = _args[5];
lean_object* v_R_1851_ = _args[6];
lean_object* v_a_1852_ = _args[7];
lean_object* v_b_1853_ = _args[8];
lean_object* v_c_1854_ = _args[9];
lean_object* v___y_1855_ = _args[10];
lean_object* v___y_1856_ = _args[11];
lean_object* v___y_1857_ = _args[12];
lean_object* v___y_1858_ = _args[13];
lean_object* v___y_1859_ = _args[14];
lean_object* v___y_1860_ = _args[15];
lean_object* v___y_1861_ = _args[16];
lean_object* v___y_1862_ = _args[17];
lean_object* v___y_1863_ = _args[18];
lean_object* v___y_1864_ = _args[19];
lean_object* v___y_1865_ = _args[20];
lean_object* v___y_1866_ = _args[21];
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(v_upperBound_1845_, v___x_1846_, v___x_1847_, v___x_1848_, v___x_1849_, v_inst_1850_, v_R_1851_, v_a_1852_, v_b_1853_, v_c_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec_ref(v___x_1846_);
lean_dec(v_upperBound_1845_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(lean_object* v_00_u03b1_1868_, lean_object* v_x_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_x_1869_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1883_, lean_object* v_x_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(v_00_u03b1_1883_, v_x_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(lean_object* v_n_1898_, lean_object* v_as_1899_, lean_object* v_lo_1900_, lean_object* v_hi_1901_, lean_object* v_w_1902_, lean_object* v_hlo_1903_, lean_object* v_hhi_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1898_, v_as_1899_, v_lo_1900_, v_hi_1901_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___boxed(lean_object* v_n_1906_, lean_object* v_as_1907_, lean_object* v_lo_1908_, lean_object* v_hi_1909_, lean_object* v_w_1910_, lean_object* v_hlo_1911_, lean_object* v_hhi_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(v_n_1906_, v_as_1907_, v_lo_1908_, v_hi_1909_, v_w_1910_, v_hlo_1911_, v_hhi_1912_);
lean_dec(v_hi_1909_);
lean_dec(v_n_1906_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(lean_object* v_oldTraces_1914_, lean_object* v_data_1915_, lean_object* v_ref_1916_, lean_object* v_msg_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1914_, v_data_1915_, v_ref_1916_, v_msg_1917_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___boxed(lean_object* v_oldTraces_1931_, lean_object* v_data_1932_, lean_object* v_ref_1933_, lean_object* v_msg_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(v_oldTraces_1931_, v_data_1932_, v_ref_1933_, v_msg_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
lean_dec(v___y_1937_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(lean_object* v_n_1948_, lean_object* v_lo_1949_, lean_object* v_hi_1950_, lean_object* v_hhi_1951_, lean_object* v_pivot_1952_, lean_object* v_as_1953_, lean_object* v_i_1954_, lean_object* v_k_1955_, lean_object* v_ilo_1956_, lean_object* v_ik_1957_, lean_object* v_w_1958_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1950_, v_pivot_1952_, v_as_1953_, v_i_1954_, v_k_1955_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___boxed(lean_object* v_n_1960_, lean_object* v_lo_1961_, lean_object* v_hi_1962_, lean_object* v_hhi_1963_, lean_object* v_pivot_1964_, lean_object* v_as_1965_, lean_object* v_i_1966_, lean_object* v_k_1967_, lean_object* v_ilo_1968_, lean_object* v_ik_1969_, lean_object* v_w_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(v_n_1960_, v_lo_1961_, v_hi_1962_, v_hhi_1963_, v_pivot_1964_, v_as_1965_, v_i_1966_, v_k_1967_, v_ilo_1968_, v_ik_1969_, v_w_1970_);
lean_dec_ref(v_pivot_1964_);
lean_dec(v_hi_1962_);
lean_dec(v_lo_1961_);
lean_dec(v_n_1960_);
return v_res_1971_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
