// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Basic
// Imports: public import Lean.Meta.Tactic.BVDecide.Attr public import Std.Tactic.BVDecide.Syntax public import Lean.Meta.Sym.ExprPtr public import Lean.Meta.Sym.SymM public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS public import Lean.Meta.Sym.DSimp.DSimpM import Lean.Meta.Sym.DSimp.Result public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Tactic.Grind.BVDecide.Types
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
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_Result_getResultExpr(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assignFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg();
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_instMonadControlReaderT___redArg();
lean_object* l_instMonadControlStateRefT_x27___redArg();
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_GoalM_runCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "assumption "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "enum domain size lemma for "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "structure lemma projection: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "and flattening from "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind state"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__8_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__10_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__8_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__11_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Learned hypothesis: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object**);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Fixpoint iteration solved the goal"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Pipeline reached a fixpoint"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Rerunning pipeline"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v_contextDependent_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_12_; 
v_contextDependent_3_ = lean_ctor_get_uint8(v_x_2_, 1);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_5_ = v_x_2_;
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
else
{
lean_dec(v_x_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
uint8_t v___x_7_; lean_object* v___x_9_; 
v___x_7_ = 1;
if (v_isShared_6_ == 0)
{
v___x_9_ = v___x_5_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_11_, 1, v_contextDependent_3_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
lean_ctor_set_uint8(v___x_9_, 0, v___x_7_);
v___x_10_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_e_x27_13_; lean_object* v_proof_14_; uint8_t v_contextDependent_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_e_x27_13_ = lean_ctor_get(v_x_2_, 0);
v_proof_14_ = lean_ctor_get(v_x_2_, 1);
v_contextDependent_15_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*2 + 1);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_24_ == 0)
{
v___x_17_ = v_x_2_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_proof_14_);
lean_inc(v_e_x27_13_);
lean_dec(v_x_2_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
uint8_t v___x_19_; lean_object* v___x_21_; 
v___x_19_ = 1;
if (v_isShared_18_ == 0)
{
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_e_x27_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_proof_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_23_, sizeof(void*)*2 + 1, v_contextDependent_15_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
lean_ctor_set_uint8(v___x_21_, sizeof(void*)*2, v___x_19_);
v___x_22_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object* v_inst_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_25_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_25_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_25_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___f_30_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_30_, 0, v_toPure_29_);
v___x_31_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_x_26_, v___f_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object* v_m_32_, lean_object* v_inst_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_toApplicative_35_; lean_object* v_toBind_36_; lean_object* v_toPure_37_; lean_object* v___f_38_; lean_object* v___x_39_; 
v_toApplicative_35_ = lean_ctor_get(v_inst_33_, 0);
lean_inc_ref(v_toApplicative_35_);
v_toBind_36_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_toBind_36_);
lean_dec_ref(v_inst_33_);
v_toPure_37_ = lean_ctor_get(v_toApplicative_35_, 1);
lean_inc(v_toPure_37_);
lean_dec_ref(v_toApplicative_35_);
v___f_38_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_38_, 0, v_toPure_37_);
v___x_39_ = lean_apply_4(v_toBind_36_, lean_box(0), lean_box(0), v_x_34_, v___f_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(0u);
return v___x_41_;
}
else
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(1u);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___boxed(lean_object* v_x_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(v_x_43_);
lean_dec_ref(v_x_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object* v_t_45_, lean_object* v_k_46_){
_start:
{
if (lean_obj_tag(v_t_45_) == 0)
{
lean_object* v_mvar_47_; lean_object* v___x_48_; 
v_mvar_47_ = lean_ctor_get(v_t_45_, 0);
lean_inc(v_mvar_47_);
lean_dec_ref_known(v_t_45_, 1);
v___x_48_ = lean_apply_1(v_k_46_, v_mvar_47_);
return v___x_48_;
}
else
{
lean_object* v_goal_49_; lean_object* v___x_50_; 
v_goal_49_ = lean_ctor_get(v_t_45_, 0);
lean_inc_ref(v_goal_49_);
lean_dec_ref_known(v_t_45_, 1);
v___x_50_ = lean_apply_1(v_k_46_, v_goal_49_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_53_, v_k_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object* v_motive_57_, lean_object* v_ctorIdx_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_k_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(v_motive_57_, v_ctorIdx_58_, v_t_59_, v_h_60_, v_k_61_);
lean_dec(v_ctorIdx_58_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object* v_t_63_, lean_object* v_mvarIdTarget_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_63_, v_mvarIdTarget_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_mvarIdTarget_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_67_, v_mvarIdTarget_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object* v_t_71_, lean_object* v_grindTarget_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_71_, v_grindTarget_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_grindTarget_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_75_, v_grindTarget_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v_mvar_84_; 
v_mvar_84_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_mvar_84_);
return v_mvar_84_;
}
else
{
lean_object* v_goal_85_; lean_object* v_mvarId_86_; 
v_goal_85_ = lean_ctor_get(v_x_83_, 0);
v_mvarId_86_ = lean_ctor_get(v_goal_85_, 1);
lean_inc(v_mvarId_86_);
return v_mvarId_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object* v_x_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_x_87_);
lean_dec_ref(v_x_87_);
return v_res_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
else
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object* v_x_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(v_x_92_);
lean_dec_ref(v_x_92_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object* v_x_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(v_x_98_);
lean_dec_ref(v_x_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object* v_x_101_){
_start:
{
if (lean_obj_tag(v_x_101_) == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_unsigned_to_nat(0u);
return v___x_102_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_unsigned_to_nat(1u);
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object* v_x_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(v_x_104_);
lean_dec_ref(v_x_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object* v_t_106_, lean_object* v_k_107_){
_start:
{
lean_object* v_info_108_; lean_object* v_ctors_109_; lean_object* v___x_110_; 
v_info_108_ = lean_ctor_get(v_t_106_, 0);
lean_inc_ref(v_info_108_);
v_ctors_109_ = lean_ctor_get(v_t_106_, 1);
lean_inc_ref(v_ctors_109_);
lean_dec_ref(v_t_106_);
v___x_110_ = lean_apply_2(v_k_107_, v_info_108_, v_ctors_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object* v_motive_111_, lean_object* v_ctorIdx_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_k_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_113_, v_k_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object* v_motive_117_, lean_object* v_ctorIdx_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_k_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(v_motive_117_, v_ctorIdx_118_, v_t_119_, v_h_120_, v_k_121_);
lean_dec(v_ctorIdx_118_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object* v_t_123_, lean_object* v_simpleEnum_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_123_, v_simpleEnum_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_simpleEnum_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_127_, v_simpleEnum_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object* v_t_131_, lean_object* v_enumWithDefault_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_131_, v_enumWithDefault_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_enumWithDefault_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_135_, v_enumWithDefault_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object* v_x_139_){
_start:
{
lean_object* v_info_140_; 
v_info_140_ = lean_ctor_get(v_x_139_, 0);
lean_inc_ref(v_info_140_);
return v_info_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object* v_x_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(v_x_141_);
lean_dec_ref(v_x_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(lean_object* v_x_143_){
_start:
{
switch(lean_obj_tag(v_x_143_))
{
case 0:
{
lean_object* v___x_144_; 
v___x_144_ = lean_unsigned_to_nat(0u);
return v___x_144_;
}
case 1:
{
lean_object* v___x_145_; 
v___x_145_ = lean_unsigned_to_nat(1u);
return v___x_145_;
}
case 2:
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(2u);
return v___x_146_;
}
case 3:
{
lean_object* v___x_147_; 
v___x_147_ = lean_unsigned_to_nat(3u);
return v___x_147_;
}
default: 
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(4u);
return v___x_148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___boxed(lean_object* v_x_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(v_x_149_);
lean_dec(v_x_149_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object* v_t_151_, lean_object* v_k_152_){
_start:
{
switch(lean_obj_tag(v_t_151_))
{
case 2:
{
lean_object* v_e_153_; lean_object* v___x_154_; 
v_e_153_ = lean_ctor_get(v_t_151_, 0);
lean_inc_ref(v_e_153_);
lean_dec_ref_known(v_t_151_, 1);
v___x_154_ = lean_apply_1(v_k_152_, v_e_153_);
return v___x_154_;
}
case 4:
{
return v_k_152_;
}
default: 
{
lean_object* v_fvar_155_; lean_object* v___x_156_; 
v_fvar_155_ = lean_ctor_get(v_t_151_, 0);
lean_inc(v_fvar_155_);
lean_dec(v_t_151_);
v___x_156_ = lean_apply_1(v_k_152_, v_fvar_155_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object* v_motive_157_, lean_object* v_ctorIdx_158_, lean_object* v_t_159_, lean_object* v_h_160_, lean_object* v_k_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_159_, v_k_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object* v_motive_163_, lean_object* v_ctorIdx_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_k_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(v_motive_163_, v_ctorIdx_164_, v_t_165_, v_h_166_, v_k_167_);
lean_dec(v_ctorIdx_164_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object* v_t_169_, lean_object* v_lctx_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_169_, v_lctx_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_lctx_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_173_, v_lctx_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object* v_t_177_, lean_object* v_enumDomain_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_177_, v_enumDomain_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_enumDomain_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_181_, v_enumDomain_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object* v_t_185_, lean_object* v_structureProjection_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_185_, v_structureProjection_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_structureProjection_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_189_, v_structureProjection_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object* v_t_193_, lean_object* v_andFlattened_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_193_, v_andFlattened_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_andFlattened_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_197_, v_andFlattened_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object* v_t_201_, lean_object* v_grind_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_201_, v_grind_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_grind_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_205_, v_grind_207_);
return v___x_208_;
}
}
static uint64_t _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0(void){
_start:
{
uint64_t v___x_213_; uint64_t v___x_214_; uint64_t v___x_215_; 
v___x_213_ = 1723ULL;
v___x_214_ = 1ULL;
v___x_215_ = lean_uint64_mix_hash(v___x_214_, v___x_213_);
return v___x_215_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object* v_x_216_){
_start:
{
switch(lean_obj_tag(v_x_216_))
{
case 0:
{
lean_object* v_fvar_217_; uint64_t v___x_218_; uint64_t v___x_219_; uint64_t v___x_220_; 
v_fvar_217_ = lean_ctor_get(v_x_216_, 0);
v___x_218_ = 0ULL;
v___x_219_ = l_Lean_instHashableFVarId_hash(v_fvar_217_);
v___x_220_ = lean_uint64_mix_hash(v___x_218_, v___x_219_);
return v___x_220_;
}
case 1:
{
lean_object* v_n_221_; uint64_t v___x_222_; 
v_n_221_ = lean_ctor_get(v_x_216_, 0);
v___x_222_ = 1ULL;
if (lean_obj_tag(v_n_221_) == 0)
{
uint64_t v___x_223_; 
v___x_223_ = lean_uint64_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0);
return v___x_223_;
}
else
{
uint64_t v_hash_224_; uint64_t v___x_225_; 
v_hash_224_ = lean_ctor_get_uint64(v_n_221_, sizeof(void*)*2);
v___x_225_ = lean_uint64_mix_hash(v___x_222_, v_hash_224_);
return v___x_225_;
}
}
case 2:
{
lean_object* v_e_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v___x_229_; 
v_e_226_ = lean_ctor_get(v_x_216_, 0);
v___x_227_ = 2ULL;
v___x_228_ = l_Lean_Expr_hash(v_e_226_);
v___x_229_ = lean_uint64_mix_hash(v___x_227_, v___x_228_);
return v___x_229_;
}
case 3:
{
lean_object* v_s_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; 
v_s_230_ = lean_ctor_get(v_x_216_, 0);
v___x_231_ = 3ULL;
v___x_232_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_s_230_);
v___x_233_ = lean_uint64_mix_hash(v___x_231_, v___x_232_);
return v___x_233_;
}
default: 
{
uint64_t v___x_234_; 
v___x_234_ = 4ULL;
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object* v_x_235_){
_start:
{
uint64_t v_res_236_; lean_object* v_r_237_; 
v_res_236_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_x_235_);
lean_dec(v_x_235_);
v_r_237_ = lean_box_uint64(v_res_236_);
return v_r_237_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
switch(lean_obj_tag(v_x_240_))
{
case 0:
{
if (lean_obj_tag(v_x_241_) == 0)
{
lean_object* v_fvar_242_; lean_object* v_fvar_243_; uint8_t v___x_244_; 
v_fvar_242_ = lean_ctor_get(v_x_240_, 0);
v_fvar_243_ = lean_ctor_get(v_x_241_, 0);
v___x_244_ = l_Lean_instBEqFVarId_beq(v_fvar_242_, v_fvar_243_);
return v___x_244_;
}
else
{
uint8_t v___x_245_; 
v___x_245_ = 0;
return v___x_245_;
}
}
case 1:
{
if (lean_obj_tag(v_x_241_) == 1)
{
lean_object* v_n_246_; lean_object* v_n_247_; uint8_t v___x_248_; 
v_n_246_ = lean_ctor_get(v_x_240_, 0);
v_n_247_ = lean_ctor_get(v_x_241_, 0);
v___x_248_ = lean_name_eq(v_n_246_, v_n_247_);
return v___x_248_;
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
case 2:
{
if (lean_obj_tag(v_x_241_) == 2)
{
lean_object* v_e_250_; lean_object* v_e_251_; uint8_t v___x_252_; 
v_e_250_ = lean_ctor_get(v_x_240_, 0);
v_e_251_ = lean_ctor_get(v_x_241_, 0);
v___x_252_ = lean_expr_eqv(v_e_250_, v_e_251_);
return v___x_252_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = 0;
return v___x_253_;
}
}
case 3:
{
if (lean_obj_tag(v_x_241_) == 3)
{
lean_object* v_s_254_; lean_object* v_s_255_; 
v_s_254_ = lean_ctor_get(v_x_240_, 0);
v_s_255_ = lean_ctor_get(v_x_241_, 0);
v_x_240_ = v_s_254_;
v_x_241_ = v_s_255_;
goto _start;
}
else
{
uint8_t v___x_257_; 
v___x_257_ = 0;
return v___x_257_;
}
}
default: 
{
if (lean_obj_tag(v_x_241_) == 4)
{
uint8_t v___x_258_; 
v___x_258_ = 1;
return v___x_258_;
}
else
{
uint8_t v___x_259_; 
v___x_259_ = 0;
return v___x_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
uint8_t v_res_262_; lean_object* v_r_263_; 
v_res_262_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(v_x_260_, v_x_261_);
lean_dec(v_x_261_);
lean_dec(v_x_260_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object* v_s_266_){
_start:
{
if (lean_obj_tag(v_s_266_) == 3)
{
lean_object* v_s_267_; 
v_s_267_ = lean_ctor_get(v_s_266_, 0);
v_s_266_ = v_s_267_;
goto _start;
}
else
{
lean_inc(v_s_266_);
return v_s_266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object* v_s_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_269_);
lean_dec(v_s_269_);
return v_res_270_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0));
v___x_273_ = l_Lean_stringToMessageData(v___x_272_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2));
v___x_276_ = l_Lean_stringToMessageData(v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4));
v___x_279_ = l_Lean_stringToMessageData(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6));
v___x_282_ = l_Lean_stringToMessageData(v___x_281_);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8));
v___x_285_ = l_Lean_stringToMessageData(v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object* v_s_286_){
_start:
{
switch(lean_obj_tag(v_s_286_))
{
case 0:
{
lean_object* v_fvar_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v_fvar_287_ = lean_ctor_get(v_s_286_, 0);
lean_inc(v_fvar_287_);
lean_dec_ref_known(v_s_286_, 1);
v___x_288_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1);
v___x_289_ = l_Lean_mkFVar(v_fvar_287_);
v___x_290_ = l_Lean_MessageData_ofExpr(v___x_289_);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_288_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
return v___x_291_;
}
case 1:
{
lean_object* v_n_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_n_292_ = lean_ctor_get(v_s_286_, 0);
lean_inc(v_n_292_);
lean_dec_ref_known(v_s_286_, 1);
v___x_293_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3);
v___x_294_ = l_Lean_MessageData_ofName(v_n_292_);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
return v___x_295_;
}
case 2:
{
lean_object* v_e_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_e_296_ = lean_ctor_get(v_s_286_, 0);
lean_inc_ref(v_e_296_);
lean_dec_ref_known(v_s_286_, 1);
v___x_297_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5);
v___x_298_ = l_Lean_MessageData_ofExpr(v_e_296_);
v___x_299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
return v___x_299_;
}
case 3:
{
lean_object* v_s_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_s_300_ = lean_ctor_get(v_s_286_, 0);
lean_inc(v_s_300_);
lean_dec_ref_known(v_s_286_, 1);
v___x_301_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7);
v___x_302_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_300_);
lean_dec(v_s_300_);
v___x_303_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(v___x_302_);
v___x_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_301_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
return v___x_304_;
}
default: 
{
lean_object* v___x_305_; 
v___x_305_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9);
return v___x_305_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_box(0);
v___x_312_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1));
v___x_313_ = l_Lean_Expr_const___override(v___x_312_, v___x_311_);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_314_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default));
v___x_315_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2);
v___x_316_ = lean_box(0);
v___x_317_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v___x_315_);
lean_ctor_set(v___x_317_, 2, v___x_315_);
lean_ctor_set(v___x_317_, 3, v___x_314_);
return v___x_317_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
return v___x_319_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object* v_lhs_320_, lean_object* v_rhs_321_){
_start:
{
lean_object* v_type_322_; lean_object* v_type_323_; uint8_t v___x_324_; 
v_type_322_ = lean_ctor_get(v_lhs_320_, 1);
v_type_323_ = lean_ctor_get(v_rhs_321_, 1);
v___x_324_ = lean_expr_eqv(v_type_322_, v_type_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object* v_lhs_325_, lean_object* v_rhs_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(v_lhs_325_, v_rhs_326_);
lean_dec_ref(v_rhs_326_);
lean_dec_ref(v_lhs_325_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object* v_hyp_331_){
_start:
{
lean_object* v_type_332_; uint64_t v___x_333_; 
v_type_332_ = lean_ctor_get(v_hyp_331_, 1);
v___x_333_ = l_Lean_Expr_hash(v_type_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object* v_hyp_334_){
_start:
{
uint64_t v_res_335_; lean_object* v_r_336_; 
v_res_335_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(v_hyp_334_);
lean_dec_ref(v_hyp_334_);
v_r_336_ = lean_box_uint64(v_res_335_);
return v_r_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object* v_hyp_339_){
_start:
{
lean_object* v_type_340_; lean_object* v___x_341_; 
v_type_340_ = lean_ctor_get(v_hyp_339_, 1);
lean_inc_ref(v_type_340_);
lean_dec_ref(v_hyp_339_);
v___x_341_ = l_Lean_MessageData_ofExpr(v_type_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(lean_object* v_x_344_){
_start:
{
if (lean_obj_tag(v_x_344_) == 0)
{
lean_object* v___x_345_; 
v___x_345_ = lean_unsigned_to_nat(0u);
return v___x_345_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_unsigned_to_nat(1u);
return v___x_346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___boxed(lean_object* v_x_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(v_x_347_);
lean_dec(v_x_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object* v_t_349_, lean_object* v_k_350_){
_start:
{
if (lean_obj_tag(v_t_349_) == 0)
{
lean_object* v_restrictedTypes_351_; lean_object* v___x_352_; 
v_restrictedTypes_351_ = lean_ctor_get(v_t_349_, 0);
lean_inc(v_restrictedTypes_351_);
lean_dec_ref_known(v_t_349_, 1);
v___x_352_ = lean_apply_1(v_k_350_, v_restrictedTypes_351_);
return v___x_352_;
}
else
{
return v_k_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object* v_motive_353_, lean_object* v_ctorIdx_354_, lean_object* v_t_355_, lean_object* v_h_356_, lean_object* v_k_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_355_, v_k_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object* v_motive_359_, lean_object* v_ctorIdx_360_, lean_object* v_t_361_, lean_object* v_h_362_, lean_object* v_k_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(v_motive_359_, v_ctorIdx_360_, v_t_361_, v_h_362_, v_k_363_);
lean_dec(v_ctorIdx_360_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object* v_t_365_, lean_object* v_solve_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_365_, v_solve_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object* v_motive_368_, lean_object* v_t_369_, lean_object* v_h_370_, lean_object* v_solve_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_369_, v_solve_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object* v_t_373_, lean_object* v_push_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_373_, v_push_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object* v_motive_376_, lean_object* v_t_377_, lean_object* v_h_378_, lean_object* v_push_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_377_, v_push_379_);
return v___x_380_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object* v_x_381_){
_start:
{
if (lean_obj_tag(v_x_381_) == 0)
{
uint8_t v___x_382_; 
v___x_382_ = 0;
return v___x_382_;
}
else
{
uint8_t v___x_383_; 
v___x_383_ = 1;
return v___x_383_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object* v_x_384_){
_start:
{
uint8_t v_res_385_; lean_object* v_r_386_; 
v_res_385_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_x_384_);
lean_dec(v_x_384_);
v_r_386_ = lean_box(v_res_385_);
return v_r_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object* v_x_387_){
_start:
{
if (lean_obj_tag(v_x_387_) == 0)
{
lean_object* v_restrictedTypes_388_; 
v_restrictedTypes_388_ = lean_ctor_get(v_x_387_, 0);
lean_inc(v_restrictedTypes_388_);
return v_restrictedTypes_388_;
}
else
{
lean_object* v___x_389_; 
v___x_389_ = lean_box(0);
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object* v_x_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_x_390_);
lean_dec(v_x_390_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object* v_mode_392_, lean_object* v_config_393_){
_start:
{
if (lean_obj_tag(v_mode_392_) == 0)
{
return v_config_393_;
}
else
{
lean_object* v_timeout_394_; uint8_t v_trimProofs_395_; uint8_t v_binaryProofs_396_; uint8_t v_acNf_397_; uint8_t v_graphviz_398_; lean_object* v_maxSteps_399_; uint8_t v_shortCircuit_400_; uint8_t v_solverMode_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_409_; 
v_timeout_394_ = lean_ctor_get(v_config_393_, 0);
v_trimProofs_395_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2);
v_binaryProofs_396_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2 + 1);
v_acNf_397_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2 + 2);
v_graphviz_398_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2 + 8);
v_maxSteps_399_ = lean_ctor_get(v_config_393_, 1);
v_shortCircuit_400_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2 + 9);
v_solverMode_401_ = lean_ctor_get_uint8(v_config_393_, sizeof(void*)*2 + 10);
v_isSharedCheck_409_ = !lean_is_exclusive(v_config_393_);
if (v_isSharedCheck_409_ == 0)
{
v___x_403_ = v_config_393_;
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_maxSteps_399_);
lean_inc(v_timeout_394_);
lean_dec(v_config_393_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
uint8_t v___x_405_; lean_object* v___x_407_; 
v___x_405_ = 0;
if (v_isShared_404_ == 0)
{
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 11);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_timeout_394_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_maxSteps_399_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2, v_trimProofs_395_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2 + 1, v_binaryProofs_396_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2 + 2, v_acNf_397_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2 + 8, v_graphviz_398_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2 + 9, v_shortCircuit_400_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*2 + 10, v_solverMode_401_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2 + 3, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2 + 4, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2 + 5, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2 + 6, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2 + 7, v___x_405_);
return v___x_407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object* v_mode_410_, lean_object* v_config_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_410_, v_config_411_);
lean_dec(v_mode_410_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object* v_mode_413_, lean_object* v_config_414_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_413_, v_config_414_);
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v_mode_413_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(uint8_t v_x_417_){
_start:
{
if (v_x_417_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = lean_unsigned_to_nat(0u);
return v___x_418_;
}
else
{
lean_object* v___x_419_; 
v___x_419_ = lean_unsigned_to_nat(1u);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___boxed(lean_object* v_x_420_){
_start:
{
uint8_t v_x_boxed_421_; lean_object* v_res_422_; 
v_x_boxed_421_ = lean_unbox(v_x_420_);
v_res_422_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(v_x_boxed_421_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object* v_k_423_){
_start:
{
lean_inc(v_k_423_);
return v_k_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(v_k_424_);
lean_dec(v_k_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object* v_motive_426_, lean_object* v_ctorIdx_427_, uint8_t v_t_428_, lean_object* v_h_429_, lean_object* v_k_430_){
_start:
{
lean_inc(v_k_430_);
return v_k_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object* v_motive_431_, lean_object* v_ctorIdx_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_k_435_){
_start:
{
uint8_t v_t_boxed_436_; lean_object* v_res_437_; 
v_t_boxed_436_ = lean_unbox(v_t_433_);
v_res_437_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(v_motive_431_, v_ctorIdx_432_, v_t_boxed_436_, v_h_434_, v_k_435_);
lean_dec(v_k_435_);
lean_dec(v_ctorIdx_432_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_438_){
_start:
{
lean_inc(v_rewrite_438_);
return v_rewrite_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(v_rewrite_439_);
lean_dec(v_rewrite_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object* v_motive_441_, uint8_t v_t_442_, lean_object* v_h_443_, lean_object* v_rewrite_444_){
_start:
{
lean_inc(v_rewrite_444_);
return v_rewrite_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object* v_motive_445_, lean_object* v_t_446_, lean_object* v_h_447_, lean_object* v_rewrite_448_){
_start:
{
uint8_t v_t_boxed_449_; lean_object* v_res_450_; 
v_t_boxed_449_ = lean_unbox(v_t_446_);
v_res_450_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(v_motive_445_, v_t_boxed_449_, v_h_447_, v_rewrite_448_);
lean_dec(v_rewrite_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object* v_ac_451_){
_start:
{
lean_inc(v_ac_451_);
return v_ac_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object* v_ac_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(v_ac_452_);
lean_dec(v_ac_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object* v_motive_454_, uint8_t v_t_455_, lean_object* v_h_456_, lean_object* v_ac_457_){
_start:
{
lean_inc(v_ac_457_);
return v_ac_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object* v_motive_458_, lean_object* v_t_459_, lean_object* v_h_460_, lean_object* v_ac_461_){
_start:
{
uint8_t v_t_boxed_462_; lean_object* v_res_463_; 
v_t_boxed_462_ = lean_unbox(v_t_459_);
v_res_463_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(v_motive_458_, v_t_boxed_462_, v_h_460_, v_ac_461_);
lean_dec(v_ac_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(uint8_t v_x_464_){
_start:
{
if (v_x_464_ == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_unsigned_to_nat(0u);
return v___x_465_;
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_unsigned_to_nat(1u);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___boxed(lean_object* v_x_467_){
_start:
{
uint8_t v_x_boxed_468_; lean_object* v_res_469_; 
v_x_boxed_468_ = lean_unbox(v_x_467_);
v_res_469_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(v_x_boxed_468_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object* v_k_470_){
_start:
{
lean_inc(v_k_470_);
return v_k_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(v_k_471_);
lean_dec(v_k_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object* v_motive_473_, lean_object* v_ctorIdx_474_, uint8_t v_t_475_, lean_object* v_h_476_, lean_object* v_k_477_){
_start:
{
lean_inc(v_k_477_);
return v_k_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object* v_motive_478_, lean_object* v_ctorIdx_479_, lean_object* v_t_480_, lean_object* v_h_481_, lean_object* v_k_482_){
_start:
{
uint8_t v_t_boxed_483_; lean_object* v_res_484_; 
v_t_boxed_483_ = lean_unbox(v_t_480_);
v_res_484_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(v_motive_478_, v_ctorIdx_479_, v_t_boxed_483_, v_h_481_, v_k_482_);
lean_dec(v_k_482_);
lean_dec(v_ctorIdx_479_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_485_){
_start:
{
lean_inc(v_rewrite_485_);
return v_rewrite_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(v_rewrite_486_);
lean_dec(v_rewrite_486_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object* v_motive_488_, uint8_t v_t_489_, lean_object* v_h_490_, lean_object* v_rewrite_491_){
_start:
{
lean_inc(v_rewrite_491_);
return v_rewrite_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object* v_motive_492_, lean_object* v_t_493_, lean_object* v_h_494_, lean_object* v_rewrite_495_){
_start:
{
uint8_t v_t_boxed_496_; lean_object* v_res_497_; 
v_t_boxed_496_ = lean_unbox(v_t_493_);
v_res_497_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(v_motive_492_, v_t_boxed_496_, v_h_494_, v_rewrite_495_);
lean_dec(v_rewrite_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object* v_reduction_498_){
_start:
{
lean_inc(v_reduction_498_);
return v_reduction_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object* v_reduction_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(v_reduction_499_);
lean_dec(v_reduction_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object* v_motive_501_, uint8_t v_t_502_, lean_object* v_h_503_, lean_object* v_reduction_504_){
_start:
{
lean_inc(v_reduction_504_);
return v_reduction_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object* v_motive_505_, lean_object* v_t_506_, lean_object* v_h_507_, lean_object* v_reduction_508_){
_start:
{
uint8_t v_t_boxed_509_; lean_object* v_res_510_; 
v_t_boxed_509_ = lean_unbox(v_t_506_);
v_res_510_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(v_motive_505_, v_t_boxed_509_, v_h_507_, v_reduction_508_);
lean_dec(v_reduction_508_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t v_x_511_, lean_object* v_x_512_){
_start:
{
if (v_x_511_ == 0)
{
lean_object* v_rewriteSimp_513_; 
v_rewriteSimp_513_ = lean_ctor_get(v_x_512_, 1);
lean_inc_ref(v_rewriteSimp_513_);
return v_rewriteSimp_513_;
}
else
{
lean_object* v_ac_514_; 
v_ac_514_ = lean_ctor_get(v_x_512_, 3);
lean_inc_ref(v_ac_514_);
return v_ac_514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
uint8_t v_x_15__boxed_517_; lean_object* v_res_518_; 
v_x_15__boxed_517_ = lean_unbox(v_x_515_);
v_res_518_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_x_15__boxed_517_, v_x_516_);
lean_dec_ref(v_x_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
if (v_x_519_ == 0)
{
lean_object* v_reduction_522_; lean_object* v_rewriteDSimp_523_; lean_object* v_ac_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_reduction_522_ = lean_ctor_get(v_x_521_, 0);
v_rewriteDSimp_523_ = lean_ctor_get(v_x_521_, 2);
v_ac_524_ = lean_ctor_get(v_x_521_, 3);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; 
v_unused_532_ = lean_ctor_get(v_x_521_, 1);
lean_dec(v_unused_532_);
v___x_526_ = v_x_521_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_ac_524_);
lean_inc(v_rewriteDSimp_523_);
lean_inc(v_reduction_522_);
lean_dec(v_x_521_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 1, v_x_520_);
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_reduction_522_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_x_520_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_rewriteDSimp_523_);
lean_ctor_set(v_reuseFailAlloc_530_, 3, v_ac_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
else
{
lean_object* v_reduction_533_; lean_object* v_rewriteSimp_534_; lean_object* v_rewriteDSimp_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_reduction_533_ = lean_ctor_get(v_x_521_, 0);
v_rewriteSimp_534_ = lean_ctor_get(v_x_521_, 1);
v_rewriteDSimp_535_ = lean_ctor_get(v_x_521_, 2);
v_isSharedCheck_542_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_542_ == 0)
{
lean_object* v_unused_543_; 
v_unused_543_ = lean_ctor_get(v_x_521_, 3);
lean_dec(v_unused_543_);
v___x_537_ = v_x_521_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_rewriteDSimp_535_);
lean_inc(v_rewriteSimp_534_);
lean_inc(v_reduction_533_);
lean_dec(v_x_521_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 3, v_x_520_);
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_reduction_533_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_rewriteSimp_534_);
lean_ctor_set(v_reuseFailAlloc_541_, 2, v_rewriteDSimp_535_);
lean_ctor_set(v_reuseFailAlloc_541_, 3, v_x_520_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object* v_x_544_, lean_object* v_x_545_, lean_object* v_x_546_){
_start:
{
uint8_t v_x_28__boxed_547_; lean_object* v_res_548_; 
v_x_28__boxed_547_ = lean_unbox(v_x_544_);
v_res_548_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_x_28__boxed_547_, v_x_545_, v_x_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t v_x_549_, lean_object* v_x_550_){
_start:
{
if (v_x_549_ == 0)
{
lean_object* v_rewriteDSimp_551_; 
v_rewriteDSimp_551_ = lean_ctor_get(v_x_550_, 2);
lean_inc_ref(v_rewriteDSimp_551_);
return v_rewriteDSimp_551_;
}
else
{
lean_object* v_reduction_552_; 
v_reduction_552_ = lean_ctor_get(v_x_550_, 0);
lean_inc_ref(v_reduction_552_);
return v_reduction_552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object* v_x_553_, lean_object* v_x_554_){
_start:
{
uint8_t v_x_15__boxed_555_; lean_object* v_res_556_; 
v_x_15__boxed_555_ = lean_unbox(v_x_553_);
v_res_556_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_x_15__boxed_555_, v_x_554_);
lean_dec_ref(v_x_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t v_x_557_, lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
if (v_x_557_ == 0)
{
lean_object* v_reduction_560_; lean_object* v_rewriteSimp_561_; lean_object* v_ac_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
v_reduction_560_ = lean_ctor_get(v_x_559_, 0);
v_rewriteSimp_561_ = lean_ctor_get(v_x_559_, 1);
v_ac_562_ = lean_ctor_get(v_x_559_, 3);
v_isSharedCheck_569_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_569_ == 0)
{
lean_object* v_unused_570_; 
v_unused_570_ = lean_ctor_get(v_x_559_, 2);
lean_dec(v_unused_570_);
v___x_564_ = v_x_559_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_ac_562_);
lean_inc(v_rewriteSimp_561_);
lean_inc(v_reduction_560_);
lean_dec(v_x_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 2, v_x_558_);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_reduction_560_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_rewriteSimp_561_);
lean_ctor_set(v_reuseFailAlloc_568_, 2, v_x_558_);
lean_ctor_set(v_reuseFailAlloc_568_, 3, v_ac_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
else
{
lean_object* v_rewriteSimp_571_; lean_object* v_rewriteDSimp_572_; lean_object* v_ac_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_rewriteSimp_571_ = lean_ctor_get(v_x_559_, 1);
v_rewriteDSimp_572_ = lean_ctor_get(v_x_559_, 2);
v_ac_573_ = lean_ctor_get(v_x_559_, 3);
v_isSharedCheck_580_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; 
v_unused_581_ = lean_ctor_get(v_x_559_, 0);
lean_dec(v_unused_581_);
v___x_575_ = v_x_559_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_ac_573_);
lean_inc(v_rewriteDSimp_572_);
lean_inc(v_rewriteSimp_571_);
lean_dec(v_x_559_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v_x_558_);
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_x_558_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_rewriteSimp_571_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_rewriteDSimp_572_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_ac_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object* v_x_582_, lean_object* v_x_583_, lean_object* v_x_584_){
_start:
{
uint8_t v_x_28__boxed_585_; lean_object* v_res_586_; 
v_x_28__boxed_585_ = lean_unbox(v_x_582_);
v_res_586_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_x_28__boxed_585_, v_x_583_, v_x_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object* v_hyp_592_, lean_object* v_result_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
if (lean_obj_tag(v_result_593_) == 0)
{
lean_object* v___x_600_; 
lean_dec_ref_known(v_result_593_, 0);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v_hyp_592_);
return v___x_600_;
}
else
{
lean_object* v_e_x27_601_; lean_object* v_proof_602_; lean_object* v_name_603_; lean_object* v_type_604_; lean_object* v_value_605_; lean_object* v_source_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_635_; 
v_e_x27_601_ = lean_ctor_get(v_result_593_, 0);
lean_inc_ref(v_e_x27_601_);
v_proof_602_ = lean_ctor_get(v_result_593_, 1);
lean_inc_ref(v_proof_602_);
lean_dec_ref_known(v_result_593_, 2);
v_name_603_ = lean_ctor_get(v_hyp_592_, 0);
v_type_604_ = lean_ctor_get(v_hyp_592_, 1);
v_value_605_ = lean_ctor_get(v_hyp_592_, 2);
v_source_606_ = lean_ctor_get(v_hyp_592_, 3);
v_isSharedCheck_635_ = !lean_is_exclusive(v_hyp_592_);
if (v_isSharedCheck_635_ == 0)
{
v___x_608_ = v_hyp_592_;
v_isShared_609_ = v_isSharedCheck_635_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_source_606_);
lean_inc(v_value_605_);
lean_inc(v_type_604_);
lean_inc(v_name_603_);
lean_dec(v_hyp_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_635_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; 
lean_inc_ref(v_type_604_);
v___x_610_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_604_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_626_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_626_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_626_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_626_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_615_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2));
v___x_616_ = lean_box(0);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v_a_611_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = l_Lean_mkConst(v___x_615_, v___x_617_);
lean_inc_ref(v_e_x27_601_);
v___x_619_ = l_Lean_mkApp4(v___x_618_, v_type_604_, v_e_x27_601_, v_proof_602_, v_value_605_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 2, v___x_619_);
lean_ctor_set(v___x_608_, 1, v_e_x27_601_);
v___x_621_ = v___x_608_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_name_603_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_e_x27_601_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v_source_606_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_621_);
v___x_623_ = v___x_613_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_del_object(v___x_608_);
lean_dec(v_source_606_);
lean_dec_ref(v_value_605_);
lean_dec_ref(v_type_604_);
lean_dec(v_name_603_);
lean_dec_ref(v_proof_602_);
lean_dec_ref(v_e_x27_601_);
v_a_627_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_610_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_610_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object* v_hyp_636_, lean_object* v_result_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_636_, v_result_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object* v_hyp_645_, lean_object* v_result_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_645_, v_result_646_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object* v_hyp_655_, lean_object* v_result_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(v_hyp_655_, v_result_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object* v_hyp_665_, lean_object* v_result_666_){
_start:
{
lean_object* v_name_668_; lean_object* v_type_669_; lean_object* v_value_670_; lean_object* v_source_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_680_; 
v_name_668_ = lean_ctor_get(v_hyp_665_, 0);
v_type_669_ = lean_ctor_get(v_hyp_665_, 1);
v_value_670_ = lean_ctor_get(v_hyp_665_, 2);
v_source_671_ = lean_ctor_get(v_hyp_665_, 3);
v_isSharedCheck_680_ = !lean_is_exclusive(v_hyp_665_);
if (v_isSharedCheck_680_ == 0)
{
v___x_673_ = v_hyp_665_;
v_isShared_674_ = v_isSharedCheck_680_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_source_671_);
lean_inc(v_value_670_);
lean_inc(v_type_669_);
lean_inc(v_name_668_);
lean_dec(v_hyp_665_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_680_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = l_Lean_Meta_Sym_DSimp_Result_getResultExpr(v_type_669_, v_result_666_);
lean_dec_ref(v_type_669_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_name_668_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v_value_670_);
lean_ctor_set(v_reuseFailAlloc_679_, 3, v_source_671_);
v___x_677_ = v_reuseFailAlloc_679_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; 
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object* v_hyp_681_, lean_object* v_result_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_681_, v_result_682_);
lean_dec_ref(v_result_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object* v_hyp_685_, lean_object* v_result_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_685_, v_result_686_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object* v_hyp_695_, lean_object* v_result_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(v_hyp_695_, v_result_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec_ref(v_result_696_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object* v___y_705_){
_start:
{
lean_object* v_config_707_; lean_object* v___x_708_; 
v_config_707_ = lean_ctor_get(v___y_705_, 0);
lean_inc_ref(v_config_707_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_config_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(v___y_709_);
lean_dec_ref(v___y_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_config_724_; lean_object* v___x_725_; 
v_config_724_ = lean_ctor_get(v___y_712_, 0);
lean_inc_ref(v_config_724_);
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v_config_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object* v___y_739_){
_start:
{
lean_object* v_mode_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_mode_741_ = lean_ctor_get(v___y_739_, 1);
v___x_742_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_741_);
v___x_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(v___y_744_);
lean_dec_ref(v___y_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_mode_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v_mode_759_ = lean_ctor_get(v___y_747_, 1);
v___x_760_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_759_);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object* v___y_775_){
_start:
{
lean_object* v_mode_777_; uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_mode_777_ = lean_ctor_get(v___y_775_, 1);
v___x_778_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_777_);
v___x_779_ = lean_box(v___x_778_);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(v___y_781_);
lean_dec_ref(v___y_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_mode_796_; uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_mode_796_ = lean_ctor_get(v___y_784_, 1);
v___x_797_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_796_);
v___x_798_ = lean_box(v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; lean_object* v_target_816_; lean_object* v___x_817_; 
v___x_815_ = lean_st_ref_get(v___y_813_);
v_target_816_ = lean_ctor_get(v___x_815_, 2);
lean_inc_ref(v_target_816_);
lean_dec(v___x_815_);
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_target_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(v___y_818_);
lean_dec(v___y_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___x_833_; lean_object* v_target_834_; lean_object* v___x_835_; 
v___x_833_ = lean_st_ref_get(v___y_822_);
v_target_834_ = lean_ctor_get(v___x_833_, 2);
lean_inc_ref(v_target_834_);
lean_dec(v___x_833_);
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v_target_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; lean_object* v_target_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_851_ = lean_st_ref_get(v___y_849_);
v_target_852_ = lean_ctor_get(v___x_851_, 2);
lean_inc_ref(v_target_852_);
lean_dec(v___x_851_);
v___x_853_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_852_);
lean_dec_ref(v_target_852_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(v___y_855_);
lean_dec(v___y_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v___x_870_; lean_object* v_target_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_870_ = lean_st_ref_get(v___y_859_);
v_target_871_ = lean_ctor_get(v___x_870_, 2);
lean_inc_ref(v_target_871_);
lean_dec(v___x_870_);
v___x_872_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_871_);
lean_dec_ref(v_target_871_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object* v_target_887_, lean_object* v___y_888_){
_start:
{
lean_object* v___x_890_; lean_object* v_caches_891_; lean_object* v_typeAnalysis_892_; lean_object* v_hypotheses_893_; uint8_t v_didChange_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_904_; 
v___x_890_ = lean_st_ref_take(v___y_888_);
v_caches_891_ = lean_ctor_get(v___x_890_, 0);
v_typeAnalysis_892_ = lean_ctor_get(v___x_890_, 1);
v_hypotheses_893_ = lean_ctor_get(v___x_890_, 3);
v_didChange_894_ = lean_ctor_get_uint8(v___x_890_, sizeof(void*)*4);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_890_, 2);
lean_dec(v_unused_905_);
v___x_896_ = v___x_890_;
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_hypotheses_893_);
lean_inc(v_typeAnalysis_892_);
lean_inc(v_caches_891_);
lean_dec(v___x_890_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_898_ = lean_box(0);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 2, v_target_887_);
v___x_900_ = v___x_896_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_caches_891_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_typeAnalysis_892_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v_target_887_);
lean_ctor_set(v_reuseFailAlloc_903_, 3, v_hypotheses_893_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*4, v_didChange_894_);
v___x_900_ = v_reuseFailAlloc_903_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_st_ref_put(v___y_888_, v___x_900_);
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_898_);
return v___x_902_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object* v_target_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(v_target_906_, v___y_907_);
lean_dec(v___y_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object* v_target_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v_caches_924_; lean_object* v_typeAnalysis_925_; lean_object* v_hypotheses_926_; uint8_t v_didChange_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_937_; 
v___x_923_ = lean_st_ref_take(v___y_912_);
v_caches_924_ = lean_ctor_get(v___x_923_, 0);
v_typeAnalysis_925_ = lean_ctor_get(v___x_923_, 1);
v_hypotheses_926_ = lean_ctor_get(v___x_923_, 3);
v_didChange_927_ = lean_ctor_get_uint8(v___x_923_, sizeof(void*)*4);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_937_ == 0)
{
lean_object* v_unused_938_; 
v_unused_938_ = lean_ctor_get(v___x_923_, 2);
lean_dec(v_unused_938_);
v___x_929_ = v___x_923_;
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_hypotheses_926_);
lean_inc(v_typeAnalysis_925_);
lean_inc(v_caches_924_);
lean_dec(v___x_923_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_931_ = lean_box(0);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 2, v_target_910_);
v___x_933_ = v___x_929_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_caches_924_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_typeAnalysis_925_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v_target_910_);
lean_ctor_set(v_reuseFailAlloc_936_, 3, v_hypotheses_926_);
lean_ctor_set_uint8(v_reuseFailAlloc_936_, sizeof(void*)*4, v_didChange_927_);
v___x_933_ = v_reuseFailAlloc_936_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_st_ref_put(v___y_912_, v___x_933_);
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_931_);
return v___x_935_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object* v_target_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(v_target_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
return v_res_952_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0(void){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_instMonadControlReaderT___redArg();
return v___x_953_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1(void){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = l_instMonadControlStateRefT_x27___redArg();
return v___x_954_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__12));
v___x_979_ = l_StateRefT_x27_instMonad___redArg(v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; lean_object* v_target_997_; 
v___x_996_ = lean_st_ref_get(v___y_985_);
v_target_997_ = lean_ctor_get(v___x_996_, 2);
lean_inc_ref(v_target_997_);
lean_dec(v___x_996_);
if (lean_obj_tag(v_target_997_) == 1)
{
lean_object* v_goal_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1126_; 
v_goal_998_ = lean_ctor_get(v_target_997_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_target_997_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1000_ = v_target_997_;
v_isShared_1001_ = v_isSharedCheck_1126_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_goal_998_);
lean_dec(v_target_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1126_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_toApplicative_1005_; lean_object* v_toFunctor_1006_; lean_object* v_toSeq_1007_; lean_object* v_toSeqLeft_1008_; lean_object* v_toSeqRight_1009_; lean_object* v___f_1010_; lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___x_1014_; lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___x_1028_; lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___x_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___x_1037_; lean_object* v_toApplicative_1038_; lean_object* v_toFunctor_1039_; lean_object* v_toSeq_1040_; lean_object* v_toSeqLeft_1041_; lean_object* v_toSeqRight_1042_; lean_object* v___f_1043_; lean_object* v___f_1044_; lean_object* v___x_1045_; lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v_toApplicative_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1124_; 
v___x_1002_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_1003_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_1004_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_1005_ = lean_ctor_get(v___x_1004_, 0);
v_toFunctor_1006_ = lean_ctor_get(v_toApplicative_1005_, 0);
v_toSeq_1007_ = lean_ctor_get(v_toApplicative_1005_, 2);
v_toSeqLeft_1008_ = lean_ctor_get(v_toApplicative_1005_, 3);
v_toSeqRight_1009_ = lean_ctor_get(v_toApplicative_1005_, 4);
v___f_1010_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_1011_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_1006_, 2);
v___f_1012_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1012_, 0, v_toFunctor_1006_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toFunctor_1006_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___f_1012_);
lean_ctor_set(v___x_1014_, 1, v___f_1013_);
lean_inc(v_toSeqRight_1009_);
v___f_1015_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1015_, 0, v_toSeqRight_1009_);
lean_inc(v_toSeqLeft_1008_);
v___f_1016_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1016_, 0, v_toSeqLeft_1008_);
lean_inc(v_toSeq_1007_);
v___f_1017_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1017_, 0, v_toSeq_1007_);
v___x_1018_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1014_);
lean_ctor_set(v___x_1018_, 1, v___f_1010_);
lean_ctor_set(v___x_1018_, 2, v___f_1017_);
lean_ctor_set(v___x_1018_, 3, v___f_1016_);
lean_ctor_set(v___x_1018_, 4, v___f_1015_);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set(v___x_1019_, 1, v___f_1011_);
v___x_1020_ = l_StateRefT_x27_instMonad___redArg(v___x_1019_);
v___x_1021_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1021_, 0, lean_box(0));
lean_closure_set(v___x_1021_, 1, lean_box(0));
lean_closure_set(v___x_1021_, 2, v___x_1020_);
v___x_1022_ = l_instMonadControlTOfPure___redArg(v___x_1021_);
lean_inc_ref(v___x_1022_);
v___f_1023_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1023_, 0, v___x_1003_);
lean_closure_set(v___f_1023_, 1, v___x_1022_);
v___f_1024_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1024_, 0, v___x_1003_);
lean_closure_set(v___f_1024_, 1, v___x_1022_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___f_1023_);
lean_ctor_set(v___x_1025_, 1, v___f_1024_);
lean_inc_ref(v___x_1025_);
v___f_1026_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1026_, 0, v___x_1002_);
lean_closure_set(v___f_1026_, 1, v___x_1025_);
v___f_1027_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1027_, 0, v___x_1002_);
lean_closure_set(v___f_1027_, 1, v___x_1025_);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___f_1026_);
lean_ctor_set(v___x_1028_, 1, v___f_1027_);
lean_inc_ref(v___x_1028_);
v___f_1029_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1029_, 0, v___x_1003_);
lean_closure_set(v___f_1029_, 1, v___x_1028_);
v___f_1030_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1030_, 0, v___x_1003_);
lean_closure_set(v___f_1030_, 1, v___x_1028_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___f_1029_);
lean_ctor_set(v___x_1031_, 1, v___f_1030_);
lean_inc_ref(v___x_1031_);
v___f_1032_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1032_, 0, v___x_1002_);
lean_closure_set(v___f_1032_, 1, v___x_1031_);
v___f_1033_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1033_, 0, v___x_1002_);
lean_closure_set(v___f_1033_, 1, v___x_1031_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___f_1032_);
lean_ctor_set(v___x_1034_, 1, v___f_1033_);
lean_inc_ref(v___x_1034_);
v___f_1035_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1035_, 0, v___x_1002_);
lean_closure_set(v___f_1035_, 1, v___x_1034_);
v___f_1036_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1036_, 0, v___x_1002_);
lean_closure_set(v___f_1036_, 1, v___x_1034_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___f_1035_);
lean_ctor_set(v___x_1037_, 1, v___f_1036_);
v_toApplicative_1038_ = lean_ctor_get(v___x_1004_, 0);
v_toFunctor_1039_ = lean_ctor_get(v_toApplicative_1038_, 0);
v_toSeq_1040_ = lean_ctor_get(v_toApplicative_1038_, 2);
v_toSeqLeft_1041_ = lean_ctor_get(v_toApplicative_1038_, 3);
v_toSeqRight_1042_ = lean_ctor_get(v_toApplicative_1038_, 4);
lean_inc_ref_n(v_toFunctor_1039_, 2);
v___f_1043_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1043_, 0, v_toFunctor_1039_);
v___f_1044_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1044_, 0, v_toFunctor_1039_);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___f_1043_);
lean_ctor_set(v___x_1045_, 1, v___f_1044_);
lean_inc(v_toSeqRight_1042_);
v___f_1046_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1046_, 0, v_toSeqRight_1042_);
lean_inc(v_toSeqLeft_1041_);
v___f_1047_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1047_, 0, v_toSeqLeft_1041_);
lean_inc(v_toSeq_1040_);
v___f_1048_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1048_, 0, v_toSeq_1040_);
v___x_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1045_);
lean_ctor_set(v___x_1049_, 1, v___f_1010_);
lean_ctor_set(v___x_1049_, 2, v___f_1048_);
lean_ctor_set(v___x_1049_, 3, v___f_1047_);
lean_ctor_set(v___x_1049_, 4, v___f_1046_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v___f_1011_);
v___x_1051_ = l_StateRefT_x27_instMonad___redArg(v___x_1050_);
v_toApplicative_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v___x_1051_, 1);
lean_dec(v_unused_1125_);
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1124_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_toApplicative_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1124_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_toFunctor_1056_; lean_object* v_toSeq_1057_; lean_object* v_toSeqLeft_1058_; lean_object* v_toSeqRight_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1122_; 
v_toFunctor_1056_ = lean_ctor_get(v_toApplicative_1052_, 0);
v_toSeq_1057_ = lean_ctor_get(v_toApplicative_1052_, 2);
v_toSeqLeft_1058_ = lean_ctor_get(v_toApplicative_1052_, 3);
v_toSeqRight_1059_ = lean_ctor_get(v_toApplicative_1052_, 4);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_toApplicative_1052_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; 
v_unused_1123_ = lean_ctor_get(v_toApplicative_1052_, 1);
lean_dec(v_unused_1123_);
v___x_1061_ = v_toApplicative_1052_;
v_isShared_1062_ = v_isSharedCheck_1122_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_toSeqRight_1059_);
lean_inc(v_toSeqLeft_1058_);
lean_inc(v_toSeq_1057_);
lean_inc(v_toFunctor_1056_);
lean_dec(v_toApplicative_1052_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1122_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___f_1063_; lean_object* v___f_1064_; lean_object* v___f_1065_; lean_object* v___f_1066_; lean_object* v___x_1067_; lean_object* v___f_1068_; lean_object* v___f_1069_; lean_object* v___f_1070_; lean_object* v___x_1072_; 
v___f_1063_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_1064_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_1056_);
v___f_1065_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1065_, 0, v_toFunctor_1056_);
v___f_1066_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1066_, 0, v_toFunctor_1056_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___f_1065_);
lean_ctor_set(v___x_1067_, 1, v___f_1066_);
v___f_1068_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1068_, 0, v_toSeqRight_1059_);
v___f_1069_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1069_, 0, v_toSeqLeft_1058_);
v___f_1070_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1070_, 0, v_toSeq_1057_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___f_1068_);
lean_ctor_set(v___x_1061_, 3, v___f_1069_);
lean_ctor_set(v___x_1061_, 2, v___f_1070_);
lean_ctor_set(v___x_1061_, 1, v___f_1063_);
lean_ctor_set(v___x_1061_, 0, v___x_1067_);
v___x_1072_ = v___x_1061_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v___f_1063_);
lean_ctor_set(v_reuseFailAlloc_1121_, 2, v___f_1070_);
lean_ctor_set(v_reuseFailAlloc_1121_, 3, v___f_1069_);
lean_ctor_set(v_reuseFailAlloc_1121_, 4, v___f_1068_);
v___x_1072_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1074_; 
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v___f_1064_);
lean_ctor_set(v___x_1054_, 0, v___x_1072_);
v___x_1074_ = v___x_1054_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___f_1064_);
v___x_1074_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v_mvarId_1080_; lean_object* v___x_1081_; lean_object* v___x_5861__overap_1082_; lean_object* v___x_1083_; 
v___x_1075_ = l_StateRefT_x27_instMonad___redArg(v___x_1074_);
v___x_1076_ = l_ReaderT_instMonad___redArg(v___x_1075_);
v___x_1077_ = l_StateRefT_x27_instMonad___redArg(v___x_1076_);
v___x_1078_ = l_ReaderT_instMonad___redArg(v___x_1077_);
v___x_1079_ = l_ReaderT_instMonad___redArg(v___x_1078_);
v_mvarId_1080_ = lean_ctor_get(v_goal_998_, 1);
lean_inc(v_mvarId_1080_);
v___x_1081_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1081_, 0, lean_box(0));
lean_closure_set(v___x_1081_, 1, v_goal_998_);
lean_closure_set(v___x_1081_, 2, v_x_984_);
v___x_5861__overap_1082_ = l_Lean_MVarId_withContext___redArg(v___x_1037_, v___x_1079_, v_mvarId_1080_, v___x_1081_);
lean_inc(v___y_994_);
lean_inc_ref(v___y_993_);
lean_inc(v___y_992_);
lean_inc_ref(v___y_991_);
lean_inc(v___y_990_);
lean_inc_ref(v___y_989_);
lean_inc(v___y_988_);
lean_inc_ref(v___y_987_);
lean_inc(v___y_986_);
v___x_1083_ = lean_apply_10(v___x_5861__overap_1082_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, lean_box(0));
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1111_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1086_ = v___x_1083_;
v_isShared_1087_ = v_isSharedCheck_1111_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1083_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1111_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v_fst_1088_; lean_object* v_snd_1089_; lean_object* v___x_1091_; 
v_fst_1088_ = lean_ctor_get(v_a_1084_, 0);
lean_inc(v_fst_1088_);
v_snd_1089_ = lean_ctor_get(v_a_1084_, 1);
lean_inc(v_snd_1089_);
lean_dec(v_a_1084_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v_snd_1089_);
v___x_1091_ = v___x_1000_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_snd_1089_);
v___x_1091_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1092_; lean_object* v_caches_1093_; lean_object* v_typeAnalysis_1094_; lean_object* v_hypotheses_1095_; uint8_t v_didChange_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1108_; 
v___x_1092_ = lean_st_ref_take(v___y_985_);
v_caches_1093_ = lean_ctor_get(v___x_1092_, 0);
v_typeAnalysis_1094_ = lean_ctor_get(v___x_1092_, 1);
v_hypotheses_1095_ = lean_ctor_get(v___x_1092_, 3);
v_didChange_1096_ = lean_ctor_get_uint8(v___x_1092_, sizeof(void*)*4);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1108_ == 0)
{
lean_object* v_unused_1109_; 
v_unused_1109_ = lean_ctor_get(v___x_1092_, 2);
lean_dec(v_unused_1109_);
v___x_1098_ = v___x_1092_;
v_isShared_1099_ = v_isSharedCheck_1108_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_hypotheses_1095_);
lean_inc(v_typeAnalysis_1094_);
lean_inc(v_caches_1093_);
lean_dec(v___x_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1108_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 2, v___x_1091_);
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_caches_1093_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_typeAnalysis_1094_);
lean_ctor_set(v_reuseFailAlloc_1107_, 2, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1107_, 3, v_hypotheses_1095_);
lean_ctor_set_uint8(v_reuseFailAlloc_1107_, sizeof(void*)*4, v_didChange_1096_);
v___x_1101_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1102_ = lean_st_ref_put(v___y_985_, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_fst_1088_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 0, v___x_1103_);
v___x_1105_ = v___x_1086_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_del_object(v___x_1000_);
v_a_1112_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1083_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1083_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
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
lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_dec_ref(v_target_997_);
lean_dec_ref(v_x_984_);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
return v___x_1128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object* v_x_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(v_x_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec(v___y_1130_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object* v_00_u03b1_1142_, lean_object* v_x_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; lean_object* v_target_1157_; 
v___x_1156_ = lean_st_ref_get(v___y_1145_);
v_target_1157_ = lean_ctor_get(v___x_1156_, 2);
lean_inc_ref(v_target_1157_);
lean_dec(v___x_1156_);
if (lean_obj_tag(v_target_1157_) == 1)
{
lean_object* v_goal_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1286_; 
v_goal_1158_ = lean_ctor_get(v_target_1157_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_target_1157_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1160_ = v_target_1157_;
v_isShared_1161_ = v_isSharedCheck_1286_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_goal_1158_);
lean_dec(v_target_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1286_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v_toApplicative_1165_; lean_object* v_toFunctor_1166_; lean_object* v_toSeq_1167_; lean_object* v_toSeqLeft_1168_; lean_object* v_toSeqRight_1169_; lean_object* v___f_1170_; lean_object* v___f_1171_; lean_object* v___f_1172_; lean_object* v___f_1173_; lean_object* v___x_1174_; lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___f_1183_; lean_object* v___f_1184_; lean_object* v___x_1185_; lean_object* v___f_1186_; lean_object* v___f_1187_; lean_object* v___x_1188_; lean_object* v___f_1189_; lean_object* v___f_1190_; lean_object* v___x_1191_; lean_object* v___f_1192_; lean_object* v___f_1193_; lean_object* v___x_1194_; lean_object* v___f_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v_toApplicative_1198_; lean_object* v_toFunctor_1199_; lean_object* v_toSeq_1200_; lean_object* v_toSeqLeft_1201_; lean_object* v_toSeqRight_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; lean_object* v___x_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_toApplicative_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1284_; 
v___x_1162_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_1163_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_1164_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_1165_ = lean_ctor_get(v___x_1164_, 0);
v_toFunctor_1166_ = lean_ctor_get(v_toApplicative_1165_, 0);
v_toSeq_1167_ = lean_ctor_get(v_toApplicative_1165_, 2);
v_toSeqLeft_1168_ = lean_ctor_get(v_toApplicative_1165_, 3);
v_toSeqRight_1169_ = lean_ctor_get(v_toApplicative_1165_, 4);
v___f_1170_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_1171_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_1166_, 2);
v___f_1172_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1172_, 0, v_toFunctor_1166_);
v___f_1173_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1173_, 0, v_toFunctor_1166_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___f_1172_);
lean_ctor_set(v___x_1174_, 1, v___f_1173_);
lean_inc(v_toSeqRight_1169_);
v___f_1175_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1175_, 0, v_toSeqRight_1169_);
lean_inc(v_toSeqLeft_1168_);
v___f_1176_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1176_, 0, v_toSeqLeft_1168_);
lean_inc(v_toSeq_1167_);
v___f_1177_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1177_, 0, v_toSeq_1167_);
v___x_1178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1174_);
lean_ctor_set(v___x_1178_, 1, v___f_1170_);
lean_ctor_set(v___x_1178_, 2, v___f_1177_);
lean_ctor_set(v___x_1178_, 3, v___f_1176_);
lean_ctor_set(v___x_1178_, 4, v___f_1175_);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___f_1171_);
v___x_1180_ = l_StateRefT_x27_instMonad___redArg(v___x_1179_);
v___x_1181_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1181_, 0, lean_box(0));
lean_closure_set(v___x_1181_, 1, lean_box(0));
lean_closure_set(v___x_1181_, 2, v___x_1180_);
v___x_1182_ = l_instMonadControlTOfPure___redArg(v___x_1181_);
lean_inc_ref(v___x_1182_);
v___f_1183_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1183_, 0, v___x_1163_);
lean_closure_set(v___f_1183_, 1, v___x_1182_);
v___f_1184_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1184_, 0, v___x_1163_);
lean_closure_set(v___f_1184_, 1, v___x_1182_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___f_1183_);
lean_ctor_set(v___x_1185_, 1, v___f_1184_);
lean_inc_ref(v___x_1185_);
v___f_1186_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1186_, 0, v___x_1162_);
lean_closure_set(v___f_1186_, 1, v___x_1185_);
v___f_1187_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1187_, 0, v___x_1162_);
lean_closure_set(v___f_1187_, 1, v___x_1185_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___f_1186_);
lean_ctor_set(v___x_1188_, 1, v___f_1187_);
lean_inc_ref(v___x_1188_);
v___f_1189_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1189_, 0, v___x_1163_);
lean_closure_set(v___f_1189_, 1, v___x_1188_);
v___f_1190_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1190_, 0, v___x_1163_);
lean_closure_set(v___f_1190_, 1, v___x_1188_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___f_1189_);
lean_ctor_set(v___x_1191_, 1, v___f_1190_);
lean_inc_ref(v___x_1191_);
v___f_1192_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1192_, 0, v___x_1162_);
lean_closure_set(v___f_1192_, 1, v___x_1191_);
v___f_1193_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1193_, 0, v___x_1162_);
lean_closure_set(v___f_1193_, 1, v___x_1191_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___f_1192_);
lean_ctor_set(v___x_1194_, 1, v___f_1193_);
lean_inc_ref(v___x_1194_);
v___f_1195_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1195_, 0, v___x_1162_);
lean_closure_set(v___f_1195_, 1, v___x_1194_);
v___f_1196_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1196_, 0, v___x_1162_);
lean_closure_set(v___f_1196_, 1, v___x_1194_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___f_1195_);
lean_ctor_set(v___x_1197_, 1, v___f_1196_);
v_toApplicative_1198_ = lean_ctor_get(v___x_1164_, 0);
v_toFunctor_1199_ = lean_ctor_get(v_toApplicative_1198_, 0);
v_toSeq_1200_ = lean_ctor_get(v_toApplicative_1198_, 2);
v_toSeqLeft_1201_ = lean_ctor_get(v_toApplicative_1198_, 3);
v_toSeqRight_1202_ = lean_ctor_get(v_toApplicative_1198_, 4);
lean_inc_ref_n(v_toFunctor_1199_, 2);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toFunctor_1199_);
v___f_1204_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1204_, 0, v_toFunctor_1199_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___f_1203_);
lean_ctor_set(v___x_1205_, 1, v___f_1204_);
lean_inc(v_toSeqRight_1202_);
v___f_1206_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1206_, 0, v_toSeqRight_1202_);
lean_inc(v_toSeqLeft_1201_);
v___f_1207_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1207_, 0, v_toSeqLeft_1201_);
lean_inc(v_toSeq_1200_);
v___f_1208_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1208_, 0, v_toSeq_1200_);
v___x_1209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1205_);
lean_ctor_set(v___x_1209_, 1, v___f_1170_);
lean_ctor_set(v___x_1209_, 2, v___f_1208_);
lean_ctor_set(v___x_1209_, 3, v___f_1207_);
lean_ctor_set(v___x_1209_, 4, v___f_1206_);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___f_1171_);
v___x_1211_ = l_StateRefT_x27_instMonad___redArg(v___x_1210_);
v_toApplicative_1212_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1284_ == 0)
{
lean_object* v_unused_1285_; 
v_unused_1285_ = lean_ctor_get(v___x_1211_, 1);
lean_dec(v_unused_1285_);
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1284_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_toApplicative_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1284_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_toFunctor_1216_; lean_object* v_toSeq_1217_; lean_object* v_toSeqLeft_1218_; lean_object* v_toSeqRight_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1282_; 
v_toFunctor_1216_ = lean_ctor_get(v_toApplicative_1212_, 0);
v_toSeq_1217_ = lean_ctor_get(v_toApplicative_1212_, 2);
v_toSeqLeft_1218_ = lean_ctor_get(v_toApplicative_1212_, 3);
v_toSeqRight_1219_ = lean_ctor_get(v_toApplicative_1212_, 4);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_toApplicative_1212_);
if (v_isSharedCheck_1282_ == 0)
{
lean_object* v_unused_1283_; 
v_unused_1283_ = lean_ctor_get(v_toApplicative_1212_, 1);
lean_dec(v_unused_1283_);
v___x_1221_ = v_toApplicative_1212_;
v_isShared_1222_ = v_isSharedCheck_1282_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_toSeqRight_1219_);
lean_inc(v_toSeqLeft_1218_);
lean_inc(v_toSeq_1217_);
lean_inc(v_toFunctor_1216_);
lean_dec(v_toApplicative_1212_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1282_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___f_1226_; lean_object* v___x_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___x_1232_; 
v___f_1223_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_1224_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_1216_);
v___f_1225_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1225_, 0, v_toFunctor_1216_);
v___f_1226_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1226_, 0, v_toFunctor_1216_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___f_1225_);
lean_ctor_set(v___x_1227_, 1, v___f_1226_);
v___f_1228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1228_, 0, v_toSeqRight_1219_);
v___f_1229_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1229_, 0, v_toSeqLeft_1218_);
v___f_1230_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1230_, 0, v_toSeq_1217_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 4, v___f_1228_);
lean_ctor_set(v___x_1221_, 3, v___f_1229_);
lean_ctor_set(v___x_1221_, 2, v___f_1230_);
lean_ctor_set(v___x_1221_, 1, v___f_1223_);
lean_ctor_set(v___x_1221_, 0, v___x_1227_);
v___x_1232_ = v___x_1221_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v___f_1223_);
lean_ctor_set(v_reuseFailAlloc_1281_, 2, v___f_1230_);
lean_ctor_set(v_reuseFailAlloc_1281_, 3, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1281_, 4, v___f_1228_);
v___x_1232_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1234_; 
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 1, v___f_1224_);
lean_ctor_set(v___x_1214_, 0, v___x_1232_);
v___x_1234_ = v___x_1214_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v___f_1224_);
v___x_1234_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v_mvarId_1240_; lean_object* v___x_1241_; lean_object* v___x_5963__overap_1242_; lean_object* v___x_1243_; 
v___x_1235_ = l_StateRefT_x27_instMonad___redArg(v___x_1234_);
v___x_1236_ = l_ReaderT_instMonad___redArg(v___x_1235_);
v___x_1237_ = l_StateRefT_x27_instMonad___redArg(v___x_1236_);
v___x_1238_ = l_ReaderT_instMonad___redArg(v___x_1237_);
v___x_1239_ = l_ReaderT_instMonad___redArg(v___x_1238_);
v_mvarId_1240_ = lean_ctor_get(v_goal_1158_, 1);
lean_inc(v_mvarId_1240_);
v___x_1241_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1241_, 0, lean_box(0));
lean_closure_set(v___x_1241_, 1, v_goal_1158_);
lean_closure_set(v___x_1241_, 2, v_x_1143_);
v___x_5963__overap_1242_ = l_Lean_MVarId_withContext___redArg(v___x_1197_, v___x_1239_, v_mvarId_1240_, v___x_1241_);
lean_inc(v___y_1154_);
lean_inc_ref(v___y_1153_);
lean_inc(v___y_1152_);
lean_inc_ref(v___y_1151_);
lean_inc(v___y_1150_);
lean_inc_ref(v___y_1149_);
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc(v___y_1146_);
v___x_1243_ = lean_apply_10(v___x_5963__overap_1242_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, lean_box(0));
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1271_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1271_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1271_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v_fst_1248_; lean_object* v_snd_1249_; lean_object* v___x_1251_; 
v_fst_1248_ = lean_ctor_get(v_a_1244_, 0);
lean_inc(v_fst_1248_);
v_snd_1249_ = lean_ctor_get(v_a_1244_, 1);
lean_inc(v_snd_1249_);
lean_dec(v_a_1244_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_snd_1249_);
v___x_1251_ = v___x_1160_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_snd_1249_);
v___x_1251_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; lean_object* v_caches_1253_; lean_object* v_typeAnalysis_1254_; lean_object* v_hypotheses_1255_; uint8_t v_didChange_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1268_; 
v___x_1252_ = lean_st_ref_take(v___y_1145_);
v_caches_1253_ = lean_ctor_get(v___x_1252_, 0);
v_typeAnalysis_1254_ = lean_ctor_get(v___x_1252_, 1);
v_hypotheses_1255_ = lean_ctor_get(v___x_1252_, 3);
v_didChange_1256_ = lean_ctor_get_uint8(v___x_1252_, sizeof(void*)*4);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; 
v_unused_1269_ = lean_ctor_get(v___x_1252_, 2);
lean_dec(v_unused_1269_);
v___x_1258_ = v___x_1252_;
v_isShared_1259_ = v_isSharedCheck_1268_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_hypotheses_1255_);
lean_inc(v_typeAnalysis_1254_);
lean_inc(v_caches_1253_);
lean_dec(v___x_1252_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1268_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 2, v___x_1251_);
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_caches_1253_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_typeAnalysis_1254_);
lean_ctor_set(v_reuseFailAlloc_1267_, 2, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1267_, 3, v_hypotheses_1255_);
lean_ctor_set_uint8(v_reuseFailAlloc_1267_, sizeof(void*)*4, v_didChange_1256_);
v___x_1261_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1262_ = lean_st_ref_put(v___y_1145_, v___x_1261_);
v___x_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1263_, 0, v_fst_1248_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v___x_1263_);
v___x_1265_ = v___x_1246_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
lean_del_object(v___x_1160_);
v_a_1272_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1243_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1243_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
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
lean_object* v___x_1287_; lean_object* v___x_1288_; 
lean_dec_ref(v_target_1157_);
lean_dec_ref(v_x_1143_);
v___x_1287_ = lean_box(0);
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object* v_00_u03b1_1289_, lean_object* v_x_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(v_00_u03b1_1289_, v_x_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object* v_x_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v___x_1315_; 
lean_inc(v___y_1309_);
lean_inc_ref(v___y_1308_);
lean_inc(v___y_1307_);
lean_inc_ref(v___y_1306_);
lean_inc(v___y_1305_);
v___x_1315_ = lean_apply_10(v_x_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, lean_box(0));
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object* v_x_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(v_x_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object* v_mvarId_1328_, lean_object* v_x_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___f_1340_; lean_object* v___x_1341_; 
lean_inc(v___y_1334_);
lean_inc_ref(v___y_1333_);
lean_inc(v___y_1332_);
lean_inc_ref(v___y_1331_);
lean_inc(v___y_1330_);
v___f_1340_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1340_, 0, v_x_1329_);
lean_closure_set(v___f_1340_, 1, v___y_1330_);
lean_closure_set(v___f_1340_, 2, v___y_1331_);
lean_closure_set(v___f_1340_, 3, v___y_1332_);
lean_closure_set(v___f_1340_, 4, v___y_1333_);
lean_closure_set(v___f_1340_, 5, v___y_1334_);
v___x_1341_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1328_, v___f_1340_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
if (lean_obj_tag(v___x_1341_) == 0)
{
return v___x_1341_;
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1341_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1341_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object* v_mvarId_1350_, lean_object* v_x_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1350_, v_x_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object* v_00_u03b1_1363_, lean_object* v_mvarId_1364_, lean_object* v_x_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1364_, v_x_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object* v_00_u03b1_1377_, lean_object* v_mvarId_1378_, lean_object* v_x_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(v_00_u03b1_1377_, v_mvarId_1378_, v_x_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object* v_goal_1391_, lean_object* v_falseProof_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_st_mk_ref(v_goal_1391_);
v___x_1404_ = l_Lean_Meta_Grind_closeGoal(v_falseProof_1392_, v___x_1403_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1414_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1407_ = v___x_1404_;
v_isShared_1408_ = v_isSharedCheck_1414_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1414_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1409_ = lean_st_ref_get(v___x_1403_);
lean_dec(v___x_1403_);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_a_1405_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1410_);
v___x_1412_ = v___x_1407_;
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
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v___x_1403_);
v_a_1415_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1404_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1404_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object* v_goal_1423_, lean_object* v_falseProof_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(v_goal_1423_, v_falseProof_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object* v_falseProof_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v___x_1448_; lean_object* v_target_1449_; 
v___x_1448_ = lean_st_ref_get(v___y_1437_);
v_target_1449_ = lean_ctor_get(v___x_1448_, 2);
lean_inc_ref(v_target_1449_);
lean_dec(v___x_1448_);
if (lean_obj_tag(v_target_1449_) == 0)
{
lean_object* v_mvar_1450_; lean_object* v___x_1451_; 
v_mvar_1450_ = lean_ctor_get(v_target_1449_, 0);
lean_inc(v_mvar_1450_);
lean_dec_ref_known(v_target_1449_, 1);
v___x_1451_ = l_Lean_MVarId_assignFalseProof(v_mvar_1450_, v_falseProof_1436_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
return v___x_1451_;
}
else
{
lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1503_; 
v_isSharedCheck_1503_ = !lean_is_exclusive(v_target_1449_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v_target_1449_, 0);
lean_dec(v_unused_1504_);
v___x_1453_ = v_target_1449_;
v_isShared_1454_ = v_isSharedCheck_1503_;
goto v_resetjp_1452_;
}
else
{
lean_dec(v_target_1449_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1503_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v_target_1457_; 
v___x_1455_ = lean_box(0);
v___x_1456_ = lean_st_ref_get(v___y_1437_);
v_target_1457_ = lean_ctor_get(v___x_1456_, 2);
lean_inc_ref(v_target_1457_);
lean_dec(v___x_1456_);
if (lean_obj_tag(v_target_1457_) == 1)
{
lean_object* v_goal_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1499_; 
lean_del_object(v___x_1453_);
v_goal_1458_ = lean_ctor_get(v_target_1457_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v_target_1457_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1460_ = v_target_1457_;
v_isShared_1461_ = v_isSharedCheck_1499_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_goal_1458_);
lean_dec(v_target_1457_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1499_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v_mvarId_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; 
v_mvarId_1462_ = lean_ctor_get(v_goal_1458_, 1);
lean_inc(v_mvarId_1462_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1463_, 0, v_goal_1458_);
lean_closure_set(v___f_1463_, 1, v_falseProof_1436_);
v___x_1464_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1462_, v___f_1463_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1490_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1490_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1490_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_snd_1469_; lean_object* v___x_1471_; 
v_snd_1469_ = lean_ctor_get(v_a_1465_, 1);
lean_inc(v_snd_1469_);
lean_dec(v_a_1465_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_snd_1469_);
v___x_1471_ = v___x_1460_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_snd_1469_);
v___x_1471_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1472_; lean_object* v_caches_1473_; lean_object* v_typeAnalysis_1474_; lean_object* v_hypotheses_1475_; uint8_t v_didChange_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1487_; 
v___x_1472_ = lean_st_ref_take(v___y_1437_);
v_caches_1473_ = lean_ctor_get(v___x_1472_, 0);
v_typeAnalysis_1474_ = lean_ctor_get(v___x_1472_, 1);
v_hypotheses_1475_ = lean_ctor_get(v___x_1472_, 3);
v_didChange_1476_ = lean_ctor_get_uint8(v___x_1472_, sizeof(void*)*4);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v___x_1472_, 2);
lean_dec(v_unused_1488_);
v___x_1478_ = v___x_1472_;
v_isShared_1479_ = v_isSharedCheck_1487_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_hypotheses_1475_);
lean_inc(v_typeAnalysis_1474_);
lean_inc(v_caches_1473_);
lean_dec(v___x_1472_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1487_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 2, v___x_1471_);
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_caches_1473_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_typeAnalysis_1474_);
lean_ctor_set(v_reuseFailAlloc_1486_, 2, v___x_1471_);
lean_ctor_set(v_reuseFailAlloc_1486_, 3, v_hypotheses_1475_);
lean_ctor_set_uint8(v_reuseFailAlloc_1486_, sizeof(void*)*4, v_didChange_1476_);
v___x_1481_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1482_ = lean_st_ref_put(v___y_1437_, v___x_1481_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1455_);
v___x_1484_ = v___x_1467_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1455_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_del_object(v___x_1460_);
v_a_1491_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1464_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1464_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
else
{
lean_object* v___x_1501_; 
lean_dec_ref(v_target_1457_);
lean_dec_ref(v_falseProof_1436_);
if (v_isShared_1454_ == 0)
{
lean_ctor_set_tag(v___x_1453_, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1455_);
v___x_1501_ = v___x_1453_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1455_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object* v_falseProof_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec(v___y_1506_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object* v_falseProof_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1518_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object* v_falseProof_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(v_falseProof_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object* v___y_1546_){
_start:
{
lean_object* v___x_1548_; uint8_t v_didChange_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1548_ = lean_st_ref_get(v___y_1546_);
v_didChange_1549_ = lean_ctor_get_uint8(v___x_1548_, sizeof(void*)*4);
lean_dec(v___x_1548_);
v___x_1550_ = lean_box(v_didChange_1549_);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(v___y_1552_);
lean_dec(v___y_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v___x_1567_; uint8_t v_didChange_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1567_ = lean_st_ref_get(v___y_1556_);
v_didChange_1568_ = lean_ctor_get_uint8(v___x_1567_, sizeof(void*)*4);
lean_dec(v___x_1567_);
v___x_1569_ = lean_box(v_didChange_1568_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; lean_object* v_caches_1587_; lean_object* v_typeAnalysis_1588_; lean_object* v_target_1589_; lean_object* v_hypotheses_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1601_; 
v___x_1586_ = lean_st_ref_take(v___y_1584_);
v_caches_1587_ = lean_ctor_get(v___x_1586_, 0);
v_typeAnalysis_1588_ = lean_ctor_get(v___x_1586_, 1);
v_target_1589_ = lean_ctor_get(v___x_1586_, 2);
v_hypotheses_1590_ = lean_ctor_get(v___x_1586_, 3);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1592_ = v___x_1586_;
v_isShared_1593_ = v_isSharedCheck_1601_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_hypotheses_1590_);
lean_inc(v_target_1589_);
lean_inc(v_typeAnalysis_1588_);
lean_inc(v_caches_1587_);
lean_dec(v___x_1586_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1601_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1594_; uint8_t v___x_1595_; lean_object* v___x_1597_; 
v___x_1594_ = lean_box(0);
v___x_1595_ = 0;
if (v_isShared_1593_ == 0)
{
v___x_1597_ = v___x_1592_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_caches_1587_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_typeAnalysis_1588_);
lean_ctor_set(v_reuseFailAlloc_1600_, 2, v_target_1589_);
lean_ctor_set(v_reuseFailAlloc_1600_, 3, v_hypotheses_1590_);
v___x_1597_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
lean_ctor_set_uint8(v___x_1597_, sizeof(void*)*4, v___x_1595_);
v___x_1598_ = lean_st_ref_put(v___y_1584_, v___x_1597_);
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1594_);
return v___x_1599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(v___y_1602_);
lean_dec(v___y_1602_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v___x_1617_; lean_object* v_caches_1618_; lean_object* v_typeAnalysis_1619_; lean_object* v_target_1620_; lean_object* v_hypotheses_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1632_; 
v___x_1617_ = lean_st_ref_take(v___y_1606_);
v_caches_1618_ = lean_ctor_get(v___x_1617_, 0);
v_typeAnalysis_1619_ = lean_ctor_get(v___x_1617_, 1);
v_target_1620_ = lean_ctor_get(v___x_1617_, 2);
v_hypotheses_1621_ = lean_ctor_get(v___x_1617_, 3);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1623_ = v___x_1617_;
v_isShared_1624_ = v_isSharedCheck_1632_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_hypotheses_1621_);
lean_inc(v_target_1620_);
lean_inc(v_typeAnalysis_1619_);
lean_inc(v_caches_1618_);
lean_dec(v___x_1617_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1632_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v___x_1628_; 
v___x_1625_ = lean_box(0);
v___x_1626_ = 0;
if (v_isShared_1624_ == 0)
{
v___x_1628_ = v___x_1623_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_caches_1618_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v_typeAnalysis_1619_);
lean_ctor_set(v_reuseFailAlloc_1631_, 2, v_target_1620_);
lean_ctor_set(v_reuseFailAlloc_1631_, 3, v_hypotheses_1621_);
v___x_1628_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
lean_ctor_set_uint8(v___x_1628_, sizeof(void*)*4, v___x_1626_);
v___x_1629_ = lean_st_ref_put(v___y_1606_, v___x_1628_);
v___x_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1625_);
return v___x_1630_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object* v___y_1646_){
_start:
{
lean_object* v___x_1648_; lean_object* v_caches_1649_; lean_object* v_typeAnalysis_1650_; lean_object* v_target_1651_; lean_object* v_hypotheses_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1663_; 
v___x_1648_ = lean_st_ref_take(v___y_1646_);
v_caches_1649_ = lean_ctor_get(v___x_1648_, 0);
v_typeAnalysis_1650_ = lean_ctor_get(v___x_1648_, 1);
v_target_1651_ = lean_ctor_get(v___x_1648_, 2);
v_hypotheses_1652_ = lean_ctor_get(v___x_1648_, 3);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1654_ = v___x_1648_;
v_isShared_1655_ = v_isSharedCheck_1663_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_hypotheses_1652_);
lean_inc(v_target_1651_);
lean_inc(v_typeAnalysis_1650_);
lean_inc(v_caches_1649_);
lean_dec(v___x_1648_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1663_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; uint8_t v___x_1657_; lean_object* v___x_1659_; 
v___x_1656_ = lean_box(0);
v___x_1657_ = 1;
if (v_isShared_1655_ == 0)
{
v___x_1659_ = v___x_1654_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_caches_1649_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_typeAnalysis_1650_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_target_1651_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v_hypotheses_1652_);
v___x_1659_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_ctor_set_uint8(v___x_1659_, sizeof(void*)*4, v___x_1657_);
v___x_1660_ = lean_st_ref_put(v___y_1646_, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1656_);
return v___x_1661_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(v___y_1664_);
lean_dec(v___y_1664_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v___x_1679_; lean_object* v_caches_1680_; lean_object* v_typeAnalysis_1681_; lean_object* v_target_1682_; lean_object* v_hypotheses_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1694_; 
v___x_1679_ = lean_st_ref_take(v___y_1668_);
v_caches_1680_ = lean_ctor_get(v___x_1679_, 0);
v_typeAnalysis_1681_ = lean_ctor_get(v___x_1679_, 1);
v_target_1682_ = lean_ctor_get(v___x_1679_, 2);
v_hypotheses_1683_ = lean_ctor_get(v___x_1679_, 3);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1685_ = v___x_1679_;
v_isShared_1686_ = v_isSharedCheck_1694_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_hypotheses_1683_);
lean_inc(v_target_1682_);
lean_inc(v_typeAnalysis_1681_);
lean_inc(v_caches_1680_);
lean_dec(v___x_1679_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1694_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1687_; uint8_t v___x_1688_; lean_object* v___x_1690_; 
v___x_1687_ = lean_box(0);
v___x_1688_ = 1;
if (v_isShared_1686_ == 0)
{
v___x_1690_ = v___x_1685_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_caches_1680_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_typeAnalysis_1681_);
lean_ctor_set(v_reuseFailAlloc_1693_, 2, v_target_1682_);
lean_ctor_set(v_reuseFailAlloc_1693_, 3, v_hypotheses_1683_);
v___x_1690_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_ctor_set_uint8(v___x_1690_, sizeof(void*)*4, v___x_1688_);
v___x_1691_ = lean_st_ref_put(v___y_1668_, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1687_);
return v___x_1692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object* v___y_1708_){
_start:
{
lean_object* v___x_1710_; lean_object* v_caches_1711_; lean_object* v___x_1712_; 
v___x_1710_ = lean_st_ref_get(v___y_1708_);
v_caches_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc_ref(v_caches_1711_);
lean_dec(v___x_1710_);
v___x_1712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1712_, 0, v_caches_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(v___y_1713_);
lean_dec(v___y_1713_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v___x_1728_; lean_object* v_caches_1729_; lean_object* v___x_1730_; 
v___x_1728_ = lean_st_ref_get(v___y_1717_);
v_caches_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc_ref(v_caches_1729_);
lean_dec(v___x_1728_);
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v_caches_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___y_1733_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object* v_caches_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v___x_1747_; lean_object* v_typeAnalysis_1748_; lean_object* v_target_1749_; lean_object* v_hypotheses_1750_; uint8_t v_didChange_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1761_; 
v___x_1747_ = lean_st_ref_take(v___y_1745_);
v_typeAnalysis_1748_ = lean_ctor_get(v___x_1747_, 1);
v_target_1749_ = lean_ctor_get(v___x_1747_, 2);
v_hypotheses_1750_ = lean_ctor_get(v___x_1747_, 3);
v_didChange_1751_ = lean_ctor_get_uint8(v___x_1747_, sizeof(void*)*4);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1761_ == 0)
{
lean_object* v_unused_1762_; 
v_unused_1762_ = lean_ctor_get(v___x_1747_, 0);
lean_dec(v_unused_1762_);
v___x_1753_ = v___x_1747_;
v_isShared_1754_ = v_isSharedCheck_1761_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_hypotheses_1750_);
lean_inc(v_target_1749_);
lean_inc(v_typeAnalysis_1748_);
lean_dec(v___x_1747_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1761_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; lean_object* v___x_1757_; 
v___x_1755_ = lean_box(0);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v_caches_1744_);
v___x_1757_ = v___x_1753_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_caches_1744_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_typeAnalysis_1748_);
lean_ctor_set(v_reuseFailAlloc_1760_, 2, v_target_1749_);
lean_ctor_set(v_reuseFailAlloc_1760_, 3, v_hypotheses_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1760_, sizeof(void*)*4, v_didChange_1751_);
v___x_1757_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_st_ref_put(v___y_1745_, v___x_1757_);
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1755_);
return v___x_1759_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object* v_caches_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(v_caches_1763_, v___y_1764_);
lean_dec(v___y_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object* v_caches_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1780_; lean_object* v_typeAnalysis_1781_; lean_object* v_target_1782_; lean_object* v_hypotheses_1783_; uint8_t v_didChange_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1794_; 
v___x_1780_ = lean_st_ref_take(v___y_1769_);
v_typeAnalysis_1781_ = lean_ctor_get(v___x_1780_, 1);
v_target_1782_ = lean_ctor_get(v___x_1780_, 2);
v_hypotheses_1783_ = lean_ctor_get(v___x_1780_, 3);
v_didChange_1784_ = lean_ctor_get_uint8(v___x_1780_, sizeof(void*)*4);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1794_ == 0)
{
lean_object* v_unused_1795_; 
v_unused_1795_ = lean_ctor_get(v___x_1780_, 0);
lean_dec(v_unused_1795_);
v___x_1786_ = v___x_1780_;
v_isShared_1787_ = v_isSharedCheck_1794_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_hypotheses_1783_);
lean_inc(v_target_1782_);
lean_inc(v_typeAnalysis_1781_);
lean_dec(v___x_1780_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1794_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1790_; 
v___x_1788_ = lean_box(0);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v_caches_1767_);
v___x_1790_ = v___x_1786_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_caches_1767_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_typeAnalysis_1781_);
lean_ctor_set(v_reuseFailAlloc_1793_, 2, v_target_1782_);
lean_ctor_set(v_reuseFailAlloc_1793_, 3, v_hypotheses_1783_);
lean_ctor_set_uint8(v_reuseFailAlloc_1793_, sizeof(void*)*4, v_didChange_1784_);
v___x_1790_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_st_ref_put(v___y_1769_, v___x_1790_);
v___x_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1788_);
return v___x_1792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object* v_caches_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(v_caches_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
return v_res_1809_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0(void){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1810_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1(void){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1811_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
return v___x_1812_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_1814_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
lean_ctor_set(v___x_1814_, 2, v___x_1813_);
lean_ctor_set(v___x_1814_, 3, v___x_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_mode_1818_; uint8_t v___x_1819_; 
v_mode_1818_ = lean_ctor_get(v___y_1815_, 1);
v___x_1819_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v_typeAnalysis_1822_; lean_object* v_target_1823_; lean_object* v_hypotheses_1824_; uint8_t v_didChange_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1835_; 
v___x_1820_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_1821_ = lean_st_ref_take(v___y_1816_);
v_typeAnalysis_1822_ = lean_ctor_get(v___x_1821_, 1);
v_target_1823_ = lean_ctor_get(v___x_1821_, 2);
v_hypotheses_1824_ = lean_ctor_get(v___x_1821_, 3);
v_didChange_1825_ = lean_ctor_get_uint8(v___x_1821_, sizeof(void*)*4);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1835_ == 0)
{
lean_object* v_unused_1836_; 
v_unused_1836_ = lean_ctor_get(v___x_1821_, 0);
lean_dec(v_unused_1836_);
v___x_1827_ = v___x_1821_;
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_hypotheses_1824_);
lean_inc(v_target_1823_);
lean_inc(v_typeAnalysis_1822_);
lean_dec(v___x_1821_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1829_; lean_object* v___x_1831_; 
v___x_1829_ = lean_box(0);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 0, v___x_1820_);
v___x_1831_ = v___x_1827_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1820_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_typeAnalysis_1822_);
lean_ctor_set(v_reuseFailAlloc_1834_, 2, v_target_1823_);
lean_ctor_set(v_reuseFailAlloc_1834_, 3, v_hypotheses_1824_);
lean_ctor_set_uint8(v_reuseFailAlloc_1834_, sizeof(void*)*4, v_didChange_1825_);
v___x_1831_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = lean_st_ref_put(v___y_1816_, v___x_1831_);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1829_);
return v___x_1833_;
}
}
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_box(0);
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v___y_1839_, v___y_1840_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v___y_1843_, v___y_1844_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object* v___y_1869_){
_start:
{
lean_object* v___x_1871_; lean_object* v_typeAnalysis_1872_; lean_object* v___x_1873_; 
v___x_1871_ = lean_st_ref_get(v___y_1869_);
v_typeAnalysis_1872_ = lean_ctor_get(v___x_1871_, 1);
lean_inc_ref(v_typeAnalysis_1872_);
lean_dec(v___x_1871_);
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v_typeAnalysis_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(v___y_1874_);
lean_dec(v___y_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; lean_object* v_typeAnalysis_1890_; lean_object* v___x_1891_; 
v___x_1889_ = lean_st_ref_get(v___y_1878_);
v_typeAnalysis_1890_ = lean_ctor_get(v___x_1889_, 1);
lean_inc_ref(v_typeAnalysis_1890_);
lean_dec(v___x_1889_);
v___x_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1891_, 0, v_typeAnalysis_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object* v_n_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v_typeAnalysis_1916_; lean_object* v_interestingStructures_1917_; lean_object* v_uninteresting_1918_; uint8_t v___x_1919_; 
v___x_1913_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1914_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1915_ = lean_st_ref_get(v___y_1911_);
v_typeAnalysis_1916_ = lean_ctor_get(v___x_1915_, 1);
lean_inc_ref(v_typeAnalysis_1916_);
lean_dec(v___x_1915_);
v_interestingStructures_1917_ = lean_ctor_get(v_typeAnalysis_1916_, 0);
lean_inc_ref(v_interestingStructures_1917_);
v_uninteresting_1918_ = lean_ctor_get(v_typeAnalysis_1916_, 3);
lean_inc_ref(v_uninteresting_1918_);
lean_dec_ref(v_typeAnalysis_1916_);
lean_inc(v_n_1910_);
v___x_1919_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1913_, v___x_1914_, v_uninteresting_1918_, v_n_1910_);
lean_dec_ref(v_uninteresting_1918_);
if (v___x_1919_ == 0)
{
uint8_t v___x_1920_; 
v___x_1920_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1913_, v___x_1914_, v_interestingStructures_1917_, v_n_1910_);
lean_dec_ref(v_interestingStructures_1917_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = lean_box(0);
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
return v___x_1922_;
}
else
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1923_ = lean_box(v___x_1920_);
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
v___x_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
return v___x_1925_;
}
}
else
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
lean_dec_ref(v_interestingStructures_1917_);
lean_dec(v_n_1910_);
v___x_1926_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
return v___x_1927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object* v_n_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(v_n_1928_, v___y_1929_);
lean_dec(v___y_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object* v_n_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v_typeAnalysis_1948_; lean_object* v_interestingStructures_1949_; lean_object* v_uninteresting_1950_; uint8_t v___x_1951_; 
v___x_1945_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1946_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1947_ = lean_st_ref_get(v___y_1934_);
v_typeAnalysis_1948_ = lean_ctor_get(v___x_1947_, 1);
lean_inc_ref(v_typeAnalysis_1948_);
lean_dec(v___x_1947_);
v_interestingStructures_1949_ = lean_ctor_get(v_typeAnalysis_1948_, 0);
lean_inc_ref(v_interestingStructures_1949_);
v_uninteresting_1950_ = lean_ctor_get(v_typeAnalysis_1948_, 3);
lean_inc_ref(v_uninteresting_1950_);
lean_dec_ref(v_typeAnalysis_1948_);
lean_inc(v_n_1932_);
v___x_1951_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1945_, v___x_1946_, v_uninteresting_1950_, v_n_1932_);
lean_dec_ref(v_uninteresting_1950_);
if (v___x_1951_ == 0)
{
uint8_t v___x_1952_; 
v___x_1952_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1945_, v___x_1946_, v_interestingStructures_1949_, v_n_1932_);
lean_dec_ref(v_interestingStructures_1949_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = lean_box(0);
v___x_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
return v___x_1954_;
}
else
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1955_ = lean_box(v___x_1952_);
v___x_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
v___x_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
}
else
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
lean_dec_ref(v_interestingStructures_1949_);
lean_dec(v_n_1932_);
v___x_1958_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
return v___x_1959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object* v_n_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(v_n_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object* v_f_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v___x_1977_; lean_object* v_caches_1978_; lean_object* v_typeAnalysis_1979_; lean_object* v_target_1980_; lean_object* v_hypotheses_1981_; uint8_t v_didChange_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1993_; 
v___x_1977_ = lean_st_ref_take(v___y_1975_);
v_caches_1978_ = lean_ctor_get(v___x_1977_, 0);
v_typeAnalysis_1979_ = lean_ctor_get(v___x_1977_, 1);
v_target_1980_ = lean_ctor_get(v___x_1977_, 2);
v_hypotheses_1981_ = lean_ctor_get(v___x_1977_, 3);
v_didChange_1982_ = lean_ctor_get_uint8(v___x_1977_, sizeof(void*)*4);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1984_ = v___x_1977_;
v_isShared_1985_ = v_isSharedCheck_1993_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_hypotheses_1981_);
lean_inc(v_target_1980_);
lean_inc(v_typeAnalysis_1979_);
lean_inc(v_caches_1978_);
lean_dec(v___x_1977_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1993_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1986_ = lean_box(0);
v___x_1987_ = lean_apply_1(v_f_1974_, v_typeAnalysis_1979_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v___x_1987_);
v___x_1989_ = v___x_1984_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_caches_1978_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_target_1980_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_hypotheses_1981_);
lean_ctor_set_uint8(v_reuseFailAlloc_1992_, sizeof(void*)*4, v_didChange_1982_);
v___x_1989_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1990_ = lean_st_ref_put(v___y_1975_, v___x_1989_);
v___x_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1986_);
return v___x_1991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object* v_f_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(v_f_1994_, v___y_1995_);
lean_dec(v___y_1995_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object* v_f_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v___x_2011_; lean_object* v_caches_2012_; lean_object* v_typeAnalysis_2013_; lean_object* v_target_2014_; lean_object* v_hypotheses_2015_; uint8_t v_didChange_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2027_; 
v___x_2011_ = lean_st_ref_take(v___y_2000_);
v_caches_2012_ = lean_ctor_get(v___x_2011_, 0);
v_typeAnalysis_2013_ = lean_ctor_get(v___x_2011_, 1);
v_target_2014_ = lean_ctor_get(v___x_2011_, 2);
v_hypotheses_2015_ = lean_ctor_get(v___x_2011_, 3);
v_didChange_2016_ = lean_ctor_get_uint8(v___x_2011_, sizeof(void*)*4);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2018_ = v___x_2011_;
v_isShared_2019_ = v_isSharedCheck_2027_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_hypotheses_2015_);
lean_inc(v_target_2014_);
lean_inc(v_typeAnalysis_2013_);
lean_inc(v_caches_2012_);
lean_dec(v___x_2011_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2027_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2020_ = lean_box(0);
v___x_2021_ = lean_apply_1(v_f_1998_, v_typeAnalysis_2013_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 1, v___x_2021_);
v___x_2023_ = v___x_2018_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_caches_2012_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2026_, 2, v_target_2014_);
lean_ctor_set(v_reuseFailAlloc_2026_, 3, v_hypotheses_2015_);
lean_ctor_set_uint8(v_reuseFailAlloc_2026_, sizeof(void*)*4, v_didChange_2016_);
v___x_2023_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = lean_st_ref_put(v___y_2000_, v___x_2023_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2020_);
return v___x_2025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object* v_f_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(v_f_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object* v_n_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v_typeAnalysis_2048_; lean_object* v_caches_2049_; lean_object* v_target_2050_; lean_object* v_hypotheses_2051_; uint8_t v_didChange_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2074_; 
v___x_2045_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2046_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2047_ = lean_st_ref_take(v___y_2043_);
v_typeAnalysis_2048_ = lean_ctor_get(v___x_2047_, 1);
v_caches_2049_ = lean_ctor_get(v___x_2047_, 0);
v_target_2050_ = lean_ctor_get(v___x_2047_, 2);
v_hypotheses_2051_ = lean_ctor_get(v___x_2047_, 3);
v_didChange_2052_ = lean_ctor_get_uint8(v___x_2047_, sizeof(void*)*4);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2054_ = v___x_2047_;
v_isShared_2055_ = v_isSharedCheck_2074_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_hypotheses_2051_);
lean_inc(v_target_2050_);
lean_inc(v_typeAnalysis_2048_);
lean_inc(v_caches_2049_);
lean_dec(v___x_2047_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2074_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v_interestingStructures_2056_; lean_object* v_interestingEnums_2057_; lean_object* v_interestingMatchers_2058_; lean_object* v_uninteresting_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2073_; 
v_interestingStructures_2056_ = lean_ctor_get(v_typeAnalysis_2048_, 0);
v_interestingEnums_2057_ = lean_ctor_get(v_typeAnalysis_2048_, 1);
v_interestingMatchers_2058_ = lean_ctor_get(v_typeAnalysis_2048_, 2);
v_uninteresting_2059_ = lean_ctor_get(v_typeAnalysis_2048_, 3);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_typeAnalysis_2048_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2061_ = v_typeAnalysis_2048_;
v_isShared_2062_ = v_isSharedCheck_2073_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_uninteresting_2059_);
lean_inc(v_interestingMatchers_2058_);
lean_inc(v_interestingEnums_2057_);
lean_inc(v_interestingStructures_2056_);
lean_dec(v_typeAnalysis_2048_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2073_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2063_ = lean_box(0);
v___x_2064_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2045_, v___x_2046_, v_interestingStructures_2056_, v_n_2042_, v___x_2063_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2064_);
v___x_2066_ = v___x_2061_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2064_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_interestingEnums_2057_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v_interestingMatchers_2058_);
lean_ctor_set(v_reuseFailAlloc_2072_, 3, v_uninteresting_2059_);
v___x_2066_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2068_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 1, v___x_2066_);
v___x_2068_ = v___x_2054_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_caches_2049_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v_target_2050_);
lean_ctor_set(v_reuseFailAlloc_2071_, 3, v_hypotheses_2051_);
lean_ctor_set_uint8(v_reuseFailAlloc_2071_, sizeof(void*)*4, v_didChange_2052_);
v___x_2068_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = lean_st_ref_put(v___y_2043_, v___x_2068_);
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2063_);
return v___x_2070_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object* v_n_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(v_n_2075_, v___y_2076_);
lean_dec(v___y_2076_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object* v_n_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v_typeAnalysis_2095_; lean_object* v_caches_2096_; lean_object* v_target_2097_; lean_object* v_hypotheses_2098_; uint8_t v_didChange_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2121_; 
v___x_2092_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2093_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2094_ = lean_st_ref_take(v___y_2081_);
v_typeAnalysis_2095_ = lean_ctor_get(v___x_2094_, 1);
v_caches_2096_ = lean_ctor_get(v___x_2094_, 0);
v_target_2097_ = lean_ctor_get(v___x_2094_, 2);
v_hypotheses_2098_ = lean_ctor_get(v___x_2094_, 3);
v_didChange_2099_ = lean_ctor_get_uint8(v___x_2094_, sizeof(void*)*4);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2101_ = v___x_2094_;
v_isShared_2102_ = v_isSharedCheck_2121_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_hypotheses_2098_);
lean_inc(v_target_2097_);
lean_inc(v_typeAnalysis_2095_);
lean_inc(v_caches_2096_);
lean_dec(v___x_2094_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2121_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v_interestingStructures_2103_; lean_object* v_interestingEnums_2104_; lean_object* v_interestingMatchers_2105_; lean_object* v_uninteresting_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2120_; 
v_interestingStructures_2103_ = lean_ctor_get(v_typeAnalysis_2095_, 0);
v_interestingEnums_2104_ = lean_ctor_get(v_typeAnalysis_2095_, 1);
v_interestingMatchers_2105_ = lean_ctor_get(v_typeAnalysis_2095_, 2);
v_uninteresting_2106_ = lean_ctor_get(v_typeAnalysis_2095_, 3);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_typeAnalysis_2095_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2108_ = v_typeAnalysis_2095_;
v_isShared_2109_ = v_isSharedCheck_2120_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_uninteresting_2106_);
lean_inc(v_interestingMatchers_2105_);
lean_inc(v_interestingEnums_2104_);
lean_inc(v_interestingStructures_2103_);
lean_dec(v_typeAnalysis_2095_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2120_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2110_ = lean_box(0);
v___x_2111_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2092_, v___x_2093_, v_interestingStructures_2103_, v_n_2079_, v___x_2110_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v___x_2111_);
v___x_2113_ = v___x_2108_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v_interestingEnums_2104_);
lean_ctor_set(v_reuseFailAlloc_2119_, 2, v_interestingMatchers_2105_);
lean_ctor_set(v_reuseFailAlloc_2119_, 3, v_uninteresting_2106_);
v___x_2113_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 1, v___x_2113_);
v___x_2115_ = v___x_2101_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_caches_2096_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v___x_2113_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v_target_2097_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v_hypotheses_2098_);
lean_ctor_set_uint8(v_reuseFailAlloc_2118_, sizeof(void*)*4, v_didChange_2099_);
v___x_2115_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_st_ref_put(v___y_2081_, v___x_2115_);
v___x_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2110_);
return v___x_2117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object* v_n_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(v_n_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object* v_n_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v_typeAnalysis_2142_; lean_object* v_caches_2143_; lean_object* v_target_2144_; lean_object* v_hypotheses_2145_; uint8_t v_didChange_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2168_; 
v___x_2139_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2140_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2141_ = lean_st_ref_take(v___y_2137_);
v_typeAnalysis_2142_ = lean_ctor_get(v___x_2141_, 1);
v_caches_2143_ = lean_ctor_get(v___x_2141_, 0);
v_target_2144_ = lean_ctor_get(v___x_2141_, 2);
v_hypotheses_2145_ = lean_ctor_get(v___x_2141_, 3);
v_didChange_2146_ = lean_ctor_get_uint8(v___x_2141_, sizeof(void*)*4);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2148_ = v___x_2141_;
v_isShared_2149_ = v_isSharedCheck_2168_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_hypotheses_2145_);
lean_inc(v_target_2144_);
lean_inc(v_typeAnalysis_2142_);
lean_inc(v_caches_2143_);
lean_dec(v___x_2141_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2168_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v_interestingStructures_2150_; lean_object* v_interestingEnums_2151_; lean_object* v_interestingMatchers_2152_; lean_object* v_uninteresting_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2167_; 
v_interestingStructures_2150_ = lean_ctor_get(v_typeAnalysis_2142_, 0);
v_interestingEnums_2151_ = lean_ctor_get(v_typeAnalysis_2142_, 1);
v_interestingMatchers_2152_ = lean_ctor_get(v_typeAnalysis_2142_, 2);
v_uninteresting_2153_ = lean_ctor_get(v_typeAnalysis_2142_, 3);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_typeAnalysis_2142_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2155_ = v_typeAnalysis_2142_;
v_isShared_2156_ = v_isSharedCheck_2167_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_uninteresting_2153_);
lean_inc(v_interestingMatchers_2152_);
lean_inc(v_interestingEnums_2151_);
lean_inc(v_interestingStructures_2150_);
lean_dec(v_typeAnalysis_2142_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2167_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2157_ = lean_box(0);
v___x_2158_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2139_, v___x_2140_, v_interestingEnums_2151_, v_n_2136_, v___x_2157_);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 1, v___x_2158_);
v___x_2160_ = v___x_2155_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_interestingStructures_2150_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2166_, 2, v_interestingMatchers_2152_);
lean_ctor_set(v_reuseFailAlloc_2166_, 3, v_uninteresting_2153_);
v___x_2160_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2162_; 
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 1, v___x_2160_);
v___x_2162_ = v___x_2148_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_caches_2143_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v___x_2160_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v_target_2144_);
lean_ctor_set(v_reuseFailAlloc_2165_, 3, v_hypotheses_2145_);
lean_ctor_set_uint8(v_reuseFailAlloc_2165_, sizeof(void*)*4, v_didChange_2146_);
v___x_2162_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = lean_st_ref_put(v___y_2137_, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2157_);
return v___x_2164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object* v_n_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(v_n_2169_, v___y_2170_);
lean_dec(v___y_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object* v_n_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v_typeAnalysis_2189_; lean_object* v_caches_2190_; lean_object* v_target_2191_; lean_object* v_hypotheses_2192_; uint8_t v_didChange_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2215_; 
v___x_2186_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2187_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2188_ = lean_st_ref_take(v___y_2175_);
v_typeAnalysis_2189_ = lean_ctor_get(v___x_2188_, 1);
v_caches_2190_ = lean_ctor_get(v___x_2188_, 0);
v_target_2191_ = lean_ctor_get(v___x_2188_, 2);
v_hypotheses_2192_ = lean_ctor_get(v___x_2188_, 3);
v_didChange_2193_ = lean_ctor_get_uint8(v___x_2188_, sizeof(void*)*4);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2195_ = v___x_2188_;
v_isShared_2196_ = v_isSharedCheck_2215_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_hypotheses_2192_);
lean_inc(v_target_2191_);
lean_inc(v_typeAnalysis_2189_);
lean_inc(v_caches_2190_);
lean_dec(v___x_2188_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2215_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v_interestingStructures_2197_; lean_object* v_interestingEnums_2198_; lean_object* v_interestingMatchers_2199_; lean_object* v_uninteresting_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2214_; 
v_interestingStructures_2197_ = lean_ctor_get(v_typeAnalysis_2189_, 0);
v_interestingEnums_2198_ = lean_ctor_get(v_typeAnalysis_2189_, 1);
v_interestingMatchers_2199_ = lean_ctor_get(v_typeAnalysis_2189_, 2);
v_uninteresting_2200_ = lean_ctor_get(v_typeAnalysis_2189_, 3);
v_isSharedCheck_2214_ = !lean_is_exclusive(v_typeAnalysis_2189_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2202_ = v_typeAnalysis_2189_;
v_isShared_2203_ = v_isSharedCheck_2214_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_uninteresting_2200_);
lean_inc(v_interestingMatchers_2199_);
lean_inc(v_interestingEnums_2198_);
lean_inc(v_interestingStructures_2197_);
lean_dec(v_typeAnalysis_2189_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2214_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2204_ = lean_box(0);
v___x_2205_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2186_, v___x_2187_, v_interestingEnums_2198_, v_n_2173_, v___x_2204_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 1, v___x_2205_);
v___x_2207_ = v___x_2202_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_interestingStructures_2197_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v___x_2205_);
lean_ctor_set(v_reuseFailAlloc_2213_, 2, v_interestingMatchers_2199_);
lean_ctor_set(v_reuseFailAlloc_2213_, 3, v_uninteresting_2200_);
v___x_2207_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_object* v___x_2209_; 
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 1, v___x_2207_);
v___x_2209_ = v___x_2195_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_caches_2190_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2212_, 2, v_target_2191_);
lean_ctor_set(v_reuseFailAlloc_2212_, 3, v_hypotheses_2192_);
lean_ctor_set_uint8(v_reuseFailAlloc_2212_, sizeof(void*)*4, v_didChange_2193_);
v___x_2209_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2210_ = lean_st_ref_put(v___y_2175_, v___x_2209_);
v___x_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2204_);
return v___x_2211_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object* v_n_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(v_n_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object* v_n_2230_, lean_object* v_k_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v_typeAnalysis_2237_; lean_object* v_caches_2238_; lean_object* v_target_2239_; lean_object* v_hypotheses_2240_; uint8_t v_didChange_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2263_; 
v___x_2234_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2235_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2236_ = lean_st_ref_take(v___y_2232_);
v_typeAnalysis_2237_ = lean_ctor_get(v___x_2236_, 1);
v_caches_2238_ = lean_ctor_get(v___x_2236_, 0);
v_target_2239_ = lean_ctor_get(v___x_2236_, 2);
v_hypotheses_2240_ = lean_ctor_get(v___x_2236_, 3);
v_didChange_2241_ = lean_ctor_get_uint8(v___x_2236_, sizeof(void*)*4);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2243_ = v___x_2236_;
v_isShared_2244_ = v_isSharedCheck_2263_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_hypotheses_2240_);
lean_inc(v_target_2239_);
lean_inc(v_typeAnalysis_2237_);
lean_inc(v_caches_2238_);
lean_dec(v___x_2236_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2263_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v_interestingStructures_2245_; lean_object* v_interestingEnums_2246_; lean_object* v_interestingMatchers_2247_; lean_object* v_uninteresting_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2262_; 
v_interestingStructures_2245_ = lean_ctor_get(v_typeAnalysis_2237_, 0);
v_interestingEnums_2246_ = lean_ctor_get(v_typeAnalysis_2237_, 1);
v_interestingMatchers_2247_ = lean_ctor_get(v_typeAnalysis_2237_, 2);
v_uninteresting_2248_ = lean_ctor_get(v_typeAnalysis_2237_, 3);
v_isSharedCheck_2262_ = !lean_is_exclusive(v_typeAnalysis_2237_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2250_ = v_typeAnalysis_2237_;
v_isShared_2251_ = v_isSharedCheck_2262_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_uninteresting_2248_);
lean_inc(v_interestingMatchers_2247_);
lean_inc(v_interestingEnums_2246_);
lean_inc(v_interestingStructures_2245_);
lean_dec(v_typeAnalysis_2237_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2262_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2252_ = lean_box(0);
v___x_2253_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2234_, v___x_2235_, v_interestingMatchers_2247_, v_n_2230_, v_k_2231_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 2, v___x_2253_);
v___x_2255_ = v___x_2250_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_interestingStructures_2245_);
lean_ctor_set(v_reuseFailAlloc_2261_, 1, v_interestingEnums_2246_);
lean_ctor_set(v_reuseFailAlloc_2261_, 2, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2261_, 3, v_uninteresting_2248_);
v___x_2255_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2257_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 1, v___x_2255_);
v___x_2257_ = v___x_2243_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_caches_2238_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v___x_2255_);
lean_ctor_set(v_reuseFailAlloc_2260_, 2, v_target_2239_);
lean_ctor_set(v_reuseFailAlloc_2260_, 3, v_hypotheses_2240_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*4, v_didChange_2241_);
v___x_2257_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = lean_st_ref_put(v___y_2232_, v___x_2257_);
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2252_);
return v___x_2259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object* v_n_2264_, lean_object* v_k_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(v_n_2264_, v_k_2265_, v___y_2266_);
lean_dec(v___y_2266_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object* v_n_2269_, lean_object* v_k_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v_typeAnalysis_2286_; lean_object* v_caches_2287_; lean_object* v_target_2288_; lean_object* v_hypotheses_2289_; uint8_t v_didChange_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2312_; 
v___x_2283_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2284_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2285_ = lean_st_ref_take(v___y_2272_);
v_typeAnalysis_2286_ = lean_ctor_get(v___x_2285_, 1);
v_caches_2287_ = lean_ctor_get(v___x_2285_, 0);
v_target_2288_ = lean_ctor_get(v___x_2285_, 2);
v_hypotheses_2289_ = lean_ctor_get(v___x_2285_, 3);
v_didChange_2290_ = lean_ctor_get_uint8(v___x_2285_, sizeof(void*)*4);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2292_ = v___x_2285_;
v_isShared_2293_ = v_isSharedCheck_2312_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_hypotheses_2289_);
lean_inc(v_target_2288_);
lean_inc(v_typeAnalysis_2286_);
lean_inc(v_caches_2287_);
lean_dec(v___x_2285_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2312_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v_interestingStructures_2294_; lean_object* v_interestingEnums_2295_; lean_object* v_interestingMatchers_2296_; lean_object* v_uninteresting_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2311_; 
v_interestingStructures_2294_ = lean_ctor_get(v_typeAnalysis_2286_, 0);
v_interestingEnums_2295_ = lean_ctor_get(v_typeAnalysis_2286_, 1);
v_interestingMatchers_2296_ = lean_ctor_get(v_typeAnalysis_2286_, 2);
v_uninteresting_2297_ = lean_ctor_get(v_typeAnalysis_2286_, 3);
v_isSharedCheck_2311_ = !lean_is_exclusive(v_typeAnalysis_2286_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2299_ = v_typeAnalysis_2286_;
v_isShared_2300_ = v_isSharedCheck_2311_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_uninteresting_2297_);
lean_inc(v_interestingMatchers_2296_);
lean_inc(v_interestingEnums_2295_);
lean_inc(v_interestingStructures_2294_);
lean_dec(v_typeAnalysis_2286_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2311_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v___x_2301_ = lean_box(0);
v___x_2302_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2283_, v___x_2284_, v_interestingMatchers_2296_, v_n_2269_, v_k_2270_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 2, v___x_2302_);
v___x_2304_ = v___x_2299_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_interestingStructures_2294_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_interestingEnums_2295_);
lean_ctor_set(v_reuseFailAlloc_2310_, 2, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2310_, 3, v_uninteresting_2297_);
v___x_2304_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2306_; 
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 1, v___x_2304_);
v___x_2306_ = v___x_2292_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_caches_2287_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2309_, 2, v_target_2288_);
lean_ctor_set(v_reuseFailAlloc_2309_, 3, v_hypotheses_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2309_, sizeof(void*)*4, v_didChange_2290_);
v___x_2306_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = lean_st_ref_put(v___y_2272_, v___x_2306_);
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2301_);
return v___x_2308_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object* v_n_2313_, lean_object* v_k_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(v_n_2313_, v_k_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object* v_n_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v_typeAnalysis_2334_; lean_object* v_caches_2335_; lean_object* v_target_2336_; lean_object* v_hypotheses_2337_; uint8_t v_didChange_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2360_; 
v___x_2331_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2332_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2333_ = lean_st_ref_take(v___y_2329_);
v_typeAnalysis_2334_ = lean_ctor_get(v___x_2333_, 1);
v_caches_2335_ = lean_ctor_get(v___x_2333_, 0);
v_target_2336_ = lean_ctor_get(v___x_2333_, 2);
v_hypotheses_2337_ = lean_ctor_get(v___x_2333_, 3);
v_didChange_2338_ = lean_ctor_get_uint8(v___x_2333_, sizeof(void*)*4);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2340_ = v___x_2333_;
v_isShared_2341_ = v_isSharedCheck_2360_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_hypotheses_2337_);
lean_inc(v_target_2336_);
lean_inc(v_typeAnalysis_2334_);
lean_inc(v_caches_2335_);
lean_dec(v___x_2333_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2360_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v_interestingStructures_2342_; lean_object* v_interestingEnums_2343_; lean_object* v_interestingMatchers_2344_; lean_object* v_uninteresting_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2359_; 
v_interestingStructures_2342_ = lean_ctor_get(v_typeAnalysis_2334_, 0);
v_interestingEnums_2343_ = lean_ctor_get(v_typeAnalysis_2334_, 1);
v_interestingMatchers_2344_ = lean_ctor_get(v_typeAnalysis_2334_, 2);
v_uninteresting_2345_ = lean_ctor_get(v_typeAnalysis_2334_, 3);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_typeAnalysis_2334_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2347_ = v_typeAnalysis_2334_;
v_isShared_2348_ = v_isSharedCheck_2359_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_uninteresting_2345_);
lean_inc(v_interestingMatchers_2344_);
lean_inc(v_interestingEnums_2343_);
lean_inc(v_interestingStructures_2342_);
lean_dec(v_typeAnalysis_2334_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2359_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v___x_2349_ = lean_box(0);
v___x_2350_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2331_, v___x_2332_, v_uninteresting_2345_, v_n_2328_, v___x_2349_);
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 3, v___x_2350_);
v___x_2352_ = v___x_2347_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_interestingStructures_2342_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_interestingEnums_2343_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v_interestingMatchers_2344_);
lean_ctor_set(v_reuseFailAlloc_2358_, 3, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2354_; 
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 1, v___x_2352_);
v___x_2354_ = v___x_2340_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_caches_2335_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v___x_2352_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_target_2336_);
lean_ctor_set(v_reuseFailAlloc_2357_, 3, v_hypotheses_2337_);
lean_ctor_set_uint8(v_reuseFailAlloc_2357_, sizeof(void*)*4, v_didChange_2338_);
v___x_2354_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_st_ref_put(v___y_2329_, v___x_2354_);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2349_);
return v___x_2356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object* v_n_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(v_n_2361_, v___y_2362_);
lean_dec(v___y_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object* v_n_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v_typeAnalysis_2381_; lean_object* v_caches_2382_; lean_object* v_target_2383_; lean_object* v_hypotheses_2384_; uint8_t v_didChange_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2407_; 
v___x_2378_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2379_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2380_ = lean_st_ref_take(v___y_2367_);
v_typeAnalysis_2381_ = lean_ctor_get(v___x_2380_, 1);
v_caches_2382_ = lean_ctor_get(v___x_2380_, 0);
v_target_2383_ = lean_ctor_get(v___x_2380_, 2);
v_hypotheses_2384_ = lean_ctor_get(v___x_2380_, 3);
v_didChange_2385_ = lean_ctor_get_uint8(v___x_2380_, sizeof(void*)*4);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2387_ = v___x_2380_;
v_isShared_2388_ = v_isSharedCheck_2407_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_hypotheses_2384_);
lean_inc(v_target_2383_);
lean_inc(v_typeAnalysis_2381_);
lean_inc(v_caches_2382_);
lean_dec(v___x_2380_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2407_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v_interestingStructures_2389_; lean_object* v_interestingEnums_2390_; lean_object* v_interestingMatchers_2391_; lean_object* v_uninteresting_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2406_; 
v_interestingStructures_2389_ = lean_ctor_get(v_typeAnalysis_2381_, 0);
v_interestingEnums_2390_ = lean_ctor_get(v_typeAnalysis_2381_, 1);
v_interestingMatchers_2391_ = lean_ctor_get(v_typeAnalysis_2381_, 2);
v_uninteresting_2392_ = lean_ctor_get(v_typeAnalysis_2381_, 3);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_typeAnalysis_2381_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2394_ = v_typeAnalysis_2381_;
v_isShared_2395_ = v_isSharedCheck_2406_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_uninteresting_2392_);
lean_inc(v_interestingMatchers_2391_);
lean_inc(v_interestingEnums_2390_);
lean_inc(v_interestingStructures_2389_);
lean_dec(v_typeAnalysis_2381_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2406_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2399_; 
v___x_2396_ = lean_box(0);
v___x_2397_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2378_, v___x_2379_, v_uninteresting_2392_, v_n_2365_, v___x_2396_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 3, v___x_2397_);
v___x_2399_ = v___x_2394_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_interestingStructures_2389_);
lean_ctor_set(v_reuseFailAlloc_2405_, 1, v_interestingEnums_2390_);
lean_ctor_set(v_reuseFailAlloc_2405_, 2, v_interestingMatchers_2391_);
lean_ctor_set(v_reuseFailAlloc_2405_, 3, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
lean_object* v___x_2401_; 
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2399_);
v___x_2401_ = v___x_2387_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_caches_2382_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2404_, 2, v_target_2383_);
lean_ctor_set(v_reuseFailAlloc_2404_, 3, v_hypotheses_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2404_, sizeof(void*)*4, v_didChange_2385_);
v___x_2401_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = lean_st_ref_put(v___y_2367_, v___x_2401_);
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2396_);
return v___x_2403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object* v_n_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(v_n_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec(v___y_2413_);
lean_dec_ref(v___y_2412_);
lean_dec(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
return v_res_2421_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = lean_box(0);
v___x_2423_ = lean_unsigned_to_nat(16u);
v___x_2424_ = lean_mk_array(v___x_2423_, v___x_2422_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0);
v___x_2426_ = lean_unsigned_to_nat(0u);
v___x_2427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
lean_ctor_set(v___x_2427_, 1, v___x_2425_);
return v___x_2427_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v___x_2429_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
lean_ctor_set(v___x_2429_, 1, v___x_2428_);
lean_ctor_set(v___x_2429_, 2, v___x_2428_);
lean_ctor_set(v___x_2429_, 3, v___x_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object* v_ctx_2432_, lean_object* v_target_2433_, lean_object* v_x_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; uint8_t v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2445_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2446_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2447_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2448_ = 0;
v___x_2449_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2449_, 0, v___x_2445_);
lean_ctor_set(v___x_2449_, 1, v___x_2446_);
lean_ctor_set(v___x_2449_, 2, v_target_2433_);
lean_ctor_set(v___x_2449_, 3, v___x_2447_);
lean_ctor_set_uint8(v___x_2449_, sizeof(void*)*4, v___x_2448_);
v___x_2450_ = lean_st_mk_ref(v___x_2449_);
lean_inc(v___y_2443_);
lean_inc_ref(v___y_2442_);
lean_inc(v___y_2441_);
lean_inc_ref(v___y_2440_);
lean_inc(v___y_2439_);
lean_inc_ref(v___y_2438_);
lean_inc(v___y_2437_);
lean_inc_ref(v___y_2436_);
lean_inc(v___y_2435_);
lean_inc(v___x_2450_);
v___x_2451_ = lean_apply_12(v_x_2434_, v_ctx_2432_, v___x_2450_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, lean_box(0));
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2461_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2461_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2461_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2459_; 
v___x_2456_ = lean_st_ref_get(v___x_2450_);
lean_dec(v___x_2450_);
v___x_2457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2457_, 0, v_a_2452_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v___x_2457_);
v___x_2459_ = v___x_2454_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec(v___x_2450_);
v_a_2462_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2451_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2451_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object* v_ctx_2470_, lean_object* v_target_2471_, lean_object* v_x_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(v_ctx_2470_, v_target_2471_, v_x_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object* v_00_u03b1_2484_, lean_object* v_ctx_2485_, lean_object* v_target_2486_, lean_object* v_x_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; uint8_t v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2498_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2499_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2500_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2501_ = 0;
v___x_2502_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2502_, 0, v___x_2498_);
lean_ctor_set(v___x_2502_, 1, v___x_2499_);
lean_ctor_set(v___x_2502_, 2, v_target_2486_);
lean_ctor_set(v___x_2502_, 3, v___x_2500_);
lean_ctor_set_uint8(v___x_2502_, sizeof(void*)*4, v___x_2501_);
v___x_2503_ = lean_st_mk_ref(v___x_2502_);
lean_inc(v___y_2496_);
lean_inc_ref(v___y_2495_);
lean_inc(v___y_2494_);
lean_inc_ref(v___y_2493_);
lean_inc(v___y_2492_);
lean_inc_ref(v___y_2491_);
lean_inc(v___y_2490_);
lean_inc_ref(v___y_2489_);
lean_inc(v___y_2488_);
lean_inc(v___x_2503_);
v___x_2504_ = lean_apply_12(v_x_2487_, v_ctx_2485_, v___x_2503_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, lean_box(0));
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2514_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2514_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2514_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2509_ = lean_st_ref_get(v___x_2503_);
lean_dec(v___x_2503_);
v___x_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2510_, 0, v_a_2505_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2510_);
v___x_2512_ = v___x_2507_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec(v___x_2503_);
v_a_2515_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2504_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2504_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object* v_00_u03b1_2523_, lean_object* v_ctx_2524_, lean_object* v_target_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(v_00_u03b1_2523_, v_ctx_2524_, v_target_2525_, v_x_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object* v_ctx_2538_, lean_object* v_target_2539_, lean_object* v_x_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2551_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2552_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2553_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2554_ = 0;
v___x_2555_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2555_, 0, v___x_2551_);
lean_ctor_set(v___x_2555_, 1, v___x_2552_);
lean_ctor_set(v___x_2555_, 2, v_target_2539_);
lean_ctor_set(v___x_2555_, 3, v___x_2553_);
lean_ctor_set_uint8(v___x_2555_, sizeof(void*)*4, v___x_2554_);
v___x_2556_ = lean_st_mk_ref(v___x_2555_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2548_);
lean_inc(v___y_2547_);
lean_inc_ref(v___y_2546_);
lean_inc(v___y_2545_);
lean_inc_ref(v___y_2544_);
lean_inc(v___y_2543_);
lean_inc_ref(v___y_2542_);
lean_inc(v___y_2541_);
lean_inc(v___x_2556_);
v___x_2557_ = lean_apply_12(v_x_2540_, v_ctx_2538_, v___x_2556_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, lean_box(0));
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2566_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2562_ = lean_st_ref_get(v___x_2556_);
lean_dec(v___x_2556_);
lean_dec(v___x_2562_);
if (v_isShared_2561_ == 0)
{
v___x_2564_ = v___x_2560_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2558_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
else
{
lean_dec(v___x_2556_);
return v___x_2557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object* v_ctx_2567_, lean_object* v_target_2568_, lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(v_ctx_2567_, v_target_2568_, v_x_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec(v___y_2570_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object* v_00_u03b1_2581_, lean_object* v_ctx_2582_, lean_object* v_target_2583_, lean_object* v_x_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2595_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2596_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2597_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2598_ = 0;
v___x_2599_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2599_, 0, v___x_2595_);
lean_ctor_set(v___x_2599_, 1, v___x_2596_);
lean_ctor_set(v___x_2599_, 2, v_target_2583_);
lean_ctor_set(v___x_2599_, 3, v___x_2597_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*4, v___x_2598_);
v___x_2600_ = lean_st_mk_ref(v___x_2599_);
lean_inc(v___y_2593_);
lean_inc_ref(v___y_2592_);
lean_inc(v___y_2591_);
lean_inc_ref(v___y_2590_);
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v___y_2585_);
lean_inc(v___x_2600_);
v___x_2601_ = lean_apply_12(v_x_2584_, v_ctx_2582_, v___x_2600_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, lean_box(0));
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2610_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2604_ = v___x_2601_;
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2601_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2606_; lean_object* v___x_2608_; 
v___x_2606_ = lean_st_ref_get(v___x_2600_);
lean_dec(v___x_2600_);
lean_dec(v___x_2606_);
if (v_isShared_2605_ == 0)
{
v___x_2608_ = v___x_2604_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2602_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
else
{
lean_dec(v___x_2600_);
return v___x_2601_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object* v_00_u03b1_2611_, lean_object* v_ctx_2612_, lean_object* v_target_2613_, lean_object* v_x_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(v_00_u03b1_2611_, v_ctx_2612_, v_target_2613_, v_x_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v___y_2615_);
return v_res_2625_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2628_ = l_Lean_Core_instMonadTraceCoreM;
v___x_2629_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2630_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2629_, v___x_2628_);
return v___x_2630_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___f_2632_; lean_object* v___x_2633_; 
v___x_2631_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2);
v___f_2632_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2633_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2632_, v___x_2631_);
return v___x_2633_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2634_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3);
v___x_2635_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2636_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2635_, v___x_2634_);
return v___x_2636_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___f_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4);
v___f_2638_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2639_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5);
v___x_2641_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2642_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2641_, v___x_2640_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7(void){
_start:
{
lean_object* v___x_2643_; lean_object* v___f_2644_; lean_object* v___x_2645_; 
v___x_2643_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6);
v___f_2644_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2645_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2644_, v___x_2643_);
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___f_2647_; lean_object* v___x_2648_; 
v___x_2646_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v___f_2647_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2648_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2647_, v___x_2646_);
return v___x_2648_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2649_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8);
v___x_2650_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2651_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2650_, v___x_2649_);
return v___x_2651_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___f_2653_; lean_object* v___x_2654_; 
v___x_2652_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9);
v___f_2653_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2654_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2653_, v___x_2652_);
return v___x_2654_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13(void){
_start:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___f_2659_; lean_object* v___x_2660_; 
v___x_2657_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2658_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2659_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2660_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2659_, v___x_2658_, v___x_2657_);
return v___x_2660_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14(void){
_start:
{
lean_object* v___x_2661_; lean_object* v___f_2662_; lean_object* v___f_2663_; lean_object* v___x_2664_; 
v___x_2661_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13);
v___f_2662_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2663_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2664_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2663_, v___f_2662_, v___x_2661_);
return v___x_2664_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15(void){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___f_2667_; lean_object* v___x_2668_; 
v___x_2665_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_2666_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2667_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2668_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2667_, v___x_2666_, v___x_2665_);
return v___x_2668_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___f_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; 
v___x_2669_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15);
v___f_2670_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2671_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2672_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2671_, v___f_2670_, v___x_2669_);
return v___x_2672_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17(void){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___f_2675_; lean_object* v___x_2676_; 
v___x_2673_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16);
v___x_2674_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2675_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2676_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2675_, v___x_2674_, v___x_2673_);
return v___x_2676_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___f_2678_; lean_object* v___f_2679_; lean_object* v___x_2680_; 
v___x_2677_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17);
v___f_2678_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2679_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2680_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2679_, v___f_2678_, v___x_2677_);
return v___x_2680_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___f_2682_; lean_object* v___f_2683_; lean_object* v___x_2684_; 
v___x_2681_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18);
v___f_2682_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2683_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2684_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2683_, v___f_2682_, v___x_2681_);
return v___x_2684_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20(void){
_start:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___f_2687_; lean_object* v___x_2688_; 
v___x_2685_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19);
v___x_2686_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2687_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2688_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2687_, v___x_2686_, v___x_2685_);
return v___x_2688_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___f_2690_; lean_object* v___f_2691_; lean_object* v___x_2692_; 
v___x_2689_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20);
v___f_2690_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2691_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2692_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2691_, v___f_2690_, v___x_2689_);
return v___x_2692_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28(void){
_start:
{
lean_object* v_cls_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v_cls_2703_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2704_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_2705_ = l_Lean_Name_append(v___x_2704_, v_cls_2703_);
return v___x_2705_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29(void){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___f_2708_; 
v___x_2706_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2707_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2708_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2708_, 0, v___x_2707_);
lean_closure_set(v___f_2708_, 1, v___x_2706_);
return v___f_2708_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30(void){
_start:
{
lean_object* v___f_2709_; lean_object* v___f_2710_; lean_object* v___f_2711_; 
v___f_2709_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2710_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29);
v___f_2711_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2711_, 0, v___f_2710_);
lean_closure_set(v___f_2711_, 1, v___f_2709_);
return v___f_2711_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31(void){
_start:
{
lean_object* v___x_2712_; lean_object* v___f_2713_; lean_object* v___f_2714_; 
v___x_2712_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2713_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30);
v___f_2714_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2714_, 0, v___f_2713_);
lean_closure_set(v___f_2714_, 1, v___x_2712_);
return v___f_2714_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32(void){
_start:
{
lean_object* v___f_2715_; lean_object* v___f_2716_; lean_object* v___f_2717_; 
v___f_2715_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2716_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31);
v___f_2717_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2717_, 0, v___f_2716_);
lean_closure_set(v___f_2717_, 1, v___f_2715_);
return v___f_2717_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33(void){
_start:
{
lean_object* v___f_2718_; lean_object* v___f_2719_; lean_object* v___f_2720_; 
v___f_2718_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2719_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32);
v___f_2720_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2720_, 0, v___f_2719_);
lean_closure_set(v___f_2720_, 1, v___f_2718_);
return v___f_2720_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34(void){
_start:
{
lean_object* v___x_2721_; lean_object* v___f_2722_; lean_object* v___f_2723_; 
v___x_2721_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2722_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33);
v___f_2723_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2723_, 0, v___f_2722_);
lean_closure_set(v___f_2723_, 1, v___x_2721_);
return v___f_2723_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35(void){
_start:
{
lean_object* v___f_2724_; lean_object* v___f_2725_; lean_object* v___f_2726_; 
v___f_2724_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2725_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34);
v___f_2726_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2726_, 0, v___f_2725_);
lean_closure_set(v___f_2726_, 1, v___f_2724_);
return v___f_2726_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37(void){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36));
v___x_2729_ = l_Lean_stringToMessageData(v___x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object* v_hyp_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v___y_2744_; lean_object* v___x_2762_; lean_object* v_toApplicative_2763_; lean_object* v_toFunctor_2764_; lean_object* v_toSeq_2765_; lean_object* v_toSeqLeft_2766_; lean_object* v_toSeqRight_2767_; lean_object* v___f_2768_; lean_object* v___f_2769_; lean_object* v___f_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; lean_object* v___f_2773_; lean_object* v___f_2774_; lean_object* v___f_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v_toApplicative_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2830_; 
v___x_2762_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_2763_ = lean_ctor_get(v___x_2762_, 0);
v_toFunctor_2764_ = lean_ctor_get(v_toApplicative_2763_, 0);
v_toSeq_2765_ = lean_ctor_get(v_toApplicative_2763_, 2);
v_toSeqLeft_2766_ = lean_ctor_get(v_toApplicative_2763_, 3);
v_toSeqRight_2767_ = lean_ctor_get(v_toApplicative_2763_, 4);
v___f_2768_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_2769_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_2764_, 2);
v___f_2770_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2770_, 0, v_toFunctor_2764_);
v___f_2771_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2771_, 0, v_toFunctor_2764_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___f_2770_);
lean_ctor_set(v___x_2772_, 1, v___f_2771_);
lean_inc(v_toSeqRight_2767_);
v___f_2773_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2773_, 0, v_toSeqRight_2767_);
lean_inc(v_toSeqLeft_2766_);
v___f_2774_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2774_, 0, v_toSeqLeft_2766_);
lean_inc(v_toSeq_2765_);
v___f_2775_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2775_, 0, v_toSeq_2765_);
v___x_2776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2772_);
lean_ctor_set(v___x_2776_, 1, v___f_2768_);
lean_ctor_set(v___x_2776_, 2, v___f_2775_);
lean_ctor_set(v___x_2776_, 3, v___f_2774_);
lean_ctor_set(v___x_2776_, 4, v___f_2773_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
lean_ctor_set(v___x_2777_, 1, v___f_2769_);
v___x_2778_ = l_StateRefT_x27_instMonad___redArg(v___x_2777_);
v_toApplicative_2779_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v___x_2778_, 1);
lean_dec(v_unused_2831_);
v___x_2781_ = v___x_2778_;
v_isShared_2782_ = v_isSharedCheck_2830_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_toApplicative_2779_);
lean_dec(v___x_2778_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2830_;
goto v_resetjp_2780_;
}
v___jp_2743_:
{
lean_object* v___x_2745_; lean_object* v_caches_2746_; lean_object* v_typeAnalysis_2747_; lean_object* v_target_2748_; lean_object* v_hypotheses_2749_; uint8_t v_didChange_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2761_; 
v___x_2745_ = lean_st_ref_take(v___y_2744_);
v_caches_2746_ = lean_ctor_get(v___x_2745_, 0);
v_typeAnalysis_2747_ = lean_ctor_get(v___x_2745_, 1);
v_target_2748_ = lean_ctor_get(v___x_2745_, 2);
v_hypotheses_2749_ = lean_ctor_get(v___x_2745_, 3);
v_didChange_2750_ = lean_ctor_get_uint8(v___x_2745_, sizeof(void*)*4);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2752_ = v___x_2745_;
v_isShared_2753_ = v_isSharedCheck_2761_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_hypotheses_2749_);
lean_inc(v_target_2748_);
lean_inc(v_typeAnalysis_2747_);
lean_inc(v_caches_2746_);
lean_dec(v___x_2745_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2761_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2757_; 
v___x_2754_ = lean_box(0);
v___x_2755_ = lean_array_push(v_hypotheses_2749_, v_hyp_2730_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 3, v___x_2755_);
v___x_2757_ = v___x_2752_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_caches_2746_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v_typeAnalysis_2747_);
lean_ctor_set(v_reuseFailAlloc_2760_, 2, v_target_2748_);
lean_ctor_set(v_reuseFailAlloc_2760_, 3, v___x_2755_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, sizeof(void*)*4, v_didChange_2750_);
v___x_2757_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = lean_st_ref_put(v___y_2744_, v___x_2757_);
v___x_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2754_);
return v___x_2759_;
}
}
}
v_resetjp_2780_:
{
lean_object* v_toFunctor_2783_; lean_object* v_toSeq_2784_; lean_object* v_toSeqLeft_2785_; lean_object* v_toSeqRight_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2828_; 
v_toFunctor_2783_ = lean_ctor_get(v_toApplicative_2779_, 0);
v_toSeq_2784_ = lean_ctor_get(v_toApplicative_2779_, 2);
v_toSeqLeft_2785_ = lean_ctor_get(v_toApplicative_2779_, 3);
v_toSeqRight_2786_ = lean_ctor_get(v_toApplicative_2779_, 4);
v_isSharedCheck_2828_ = !lean_is_exclusive(v_toApplicative_2779_);
if (v_isSharedCheck_2828_ == 0)
{
lean_object* v_unused_2829_; 
v_unused_2829_ = lean_ctor_get(v_toApplicative_2779_, 1);
lean_dec(v_unused_2829_);
v___x_2788_ = v_toApplicative_2779_;
v_isShared_2789_ = v_isSharedCheck_2828_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_toSeqRight_2786_);
lean_inc(v_toSeqLeft_2785_);
lean_inc(v_toSeq_2784_);
lean_inc(v_toFunctor_2783_);
lean_dec(v_toApplicative_2779_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2828_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___f_2790_; lean_object* v___f_2791_; lean_object* v___f_2792_; lean_object* v___f_2793_; lean_object* v___x_2794_; lean_object* v___f_2795_; lean_object* v___f_2796_; lean_object* v___f_2797_; lean_object* v___x_2799_; 
v___f_2790_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_2791_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_2783_);
v___f_2792_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2792_, 0, v_toFunctor_2783_);
v___f_2793_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2793_, 0, v_toFunctor_2783_);
v___x_2794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2794_, 0, v___f_2792_);
lean_ctor_set(v___x_2794_, 1, v___f_2793_);
v___f_2795_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2795_, 0, v_toSeqRight_2786_);
v___f_2796_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2796_, 0, v_toSeqLeft_2785_);
v___f_2797_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2797_, 0, v_toSeq_2784_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 4, v___f_2795_);
lean_ctor_set(v___x_2788_, 3, v___f_2796_);
lean_ctor_set(v___x_2788_, 2, v___f_2797_);
lean_ctor_set(v___x_2788_, 1, v___f_2790_);
lean_ctor_set(v___x_2788_, 0, v___x_2794_);
v___x_2799_ = v___x_2788_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2827_, 1, v___f_2790_);
lean_ctor_set(v_reuseFailAlloc_2827_, 2, v___f_2797_);
lean_ctor_set(v_reuseFailAlloc_2827_, 3, v___f_2796_);
lean_ctor_set(v_reuseFailAlloc_2827_, 4, v___f_2795_);
v___x_2799_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
lean_object* v___x_2801_; 
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 1, v___f_2791_);
lean_ctor_set(v___x_2781_, 0, v___x_2799_);
v___x_2801_ = v___x_2781_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v___x_2799_);
lean_ctor_set(v_reuseFailAlloc_2826_, 1, v___f_2791_);
v___x_2801_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v_toCold_2811_; lean_object* v_options_2812_; uint8_t v_hasTrace_2813_; 
v___x_2802_ = l_StateRefT_x27_instMonad___redArg(v___x_2801_);
v___x_2803_ = l_ReaderT_instMonad___redArg(v___x_2802_);
v___x_2804_ = l_StateRefT_x27_instMonad___redArg(v___x_2803_);
v___x_2805_ = l_ReaderT_instMonad___redArg(v___x_2804_);
v___x_2806_ = l_ReaderT_instMonad___redArg(v___x_2805_);
v___x_2807_ = l_StateRefT_x27_instMonad___redArg(v___x_2806_);
v___x_2808_ = l_ReaderT_instMonad___redArg(v___x_2807_);
v___x_2809_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2810_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toCold_2811_ = lean_ctor_get(v___y_2740_, 0);
v_options_2812_ = lean_ctor_get(v_toCold_2811_, 2);
v_hasTrace_2813_ = lean_ctor_get_uint8(v_options_2812_, sizeof(void*)*1);
if (v_hasTrace_2813_ == 0)
{
lean_dec_ref(v___x_2808_);
v___y_2744_ = v___y_2732_;
goto v___jp_2743_;
}
else
{
lean_object* v_toMonadRef_2814_; lean_object* v_inheritedTraceOptions_2815_; lean_object* v_cls_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v_toMonadRef_2814_ = lean_ctor_get(v___x_2810_, 0);
v_inheritedTraceOptions_2815_ = lean_ctor_get(v_toCold_2811_, 11);
v_cls_2816_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2817_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2818_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2815_, v_options_2812_, v___x_2817_);
if (v___x_2818_ == 0)
{
lean_dec_ref(v___x_2808_);
v___y_2744_ = v___y_2732_;
goto v___jp_2743_;
}
else
{
lean_object* v_type_2819_; lean_object* v___f_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_6242__overap_2824_; lean_object* v___x_2825_; 
v_type_2819_ = lean_ctor_get(v_hyp_2730_, 1);
v___f_2820_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_2821_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
lean_inc_ref(v_type_2819_);
v___x_2822_ = l_Lean_MessageData_ofExpr(v_type_2819_);
v___x_2823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
lean_inc_ref(v_toMonadRef_2814_);
v___x_6242__overap_2824_ = l_Lean_addTrace___redArg(v___x_2808_, v___x_2809_, v_toMonadRef_2814_, v___f_2820_, v_cls_2816_, v___x_2823_);
lean_inc(v___y_2741_);
lean_inc_ref(v___y_2740_);
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc_ref(v___y_2736_);
lean_inc(v___y_2735_);
lean_inc_ref(v___y_2734_);
lean_inc(v___y_2733_);
lean_inc(v___y_2732_);
lean_inc_ref(v___y_2731_);
v___x_2825_ = lean_apply_12(v___x_6242__overap_2824_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, lean_box(0));
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_dec_ref_known(v___x_2825_, 1);
v___y_2744_ = v___y_2732_;
goto v___jp_2743_;
}
else
{
lean_dec_ref(v_hyp_2730_);
return v___x_2825_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object* v_hyp_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(v_hyp_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v_toMonadRef_2848_, lean_object* v___f_2849_, lean_object* v_x_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_){
_start:
{
lean_object* v_toCold_2867_; lean_object* v_options_2868_; uint8_t v_hasTrace_2869_; 
v_toCold_2867_ = lean_ctor_get(v___y_2861_, 0);
v_options_2868_ = lean_ctor_get(v_toCold_2867_, 2);
v_hasTrace_2869_ = lean_ctor_get_uint8(v_options_2868_, sizeof(void*)*1);
if (v_hasTrace_2869_ == 0)
{
lean_dec_ref(v___y_2851_);
lean_dec(v___f_2849_);
lean_dec_ref(v_toMonadRef_2848_);
lean_dec_ref(v___x_2847_);
lean_dec_ref(v___x_2846_);
goto v___jp_2864_;
}
else
{
lean_object* v_inheritedTraceOptions_2870_; lean_object* v_cls_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v_inheritedTraceOptions_2870_ = lean_ctor_get(v_toCold_2867_, 11);
v_cls_2871_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2872_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2873_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2870_, v_options_2868_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_dec_ref(v___y_2851_);
lean_dec(v___f_2849_);
lean_dec_ref(v_toMonadRef_2848_);
lean_dec_ref(v___x_2847_);
lean_dec_ref(v___x_2846_);
goto v___jp_2864_;
}
else
{
lean_object* v_type_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_7693__overap_2878_; lean_object* v___x_2879_; 
v_type_2874_ = lean_ctor_get(v___y_2851_, 1);
lean_inc_ref(v_type_2874_);
lean_dec_ref(v___y_2851_);
v___x_2875_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
v___x_2876_ = l_Lean_MessageData_ofExpr(v_type_2874_);
v___x_2877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2875_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_7693__overap_2878_ = l_Lean_addTrace___redArg(v___x_2846_, v___x_2847_, v_toMonadRef_2848_, v___f_2849_, v_cls_2871_, v___x_2877_);
lean_inc(v___y_2862_);
lean_inc_ref(v___y_2861_);
lean_inc(v___y_2860_);
lean_inc_ref(v___y_2859_);
lean_inc(v___y_2858_);
lean_inc_ref(v___y_2857_);
lean_inc(v___y_2856_);
lean_inc_ref(v___y_2855_);
lean_inc(v___y_2854_);
lean_inc(v___y_2853_);
lean_inc_ref(v___y_2852_);
v___x_2879_ = lean_apply_12(v___x_7693__overap_2878_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, lean_box(0));
return v___x_2879_;
}
}
v___jp_2864_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_box(0);
v___x_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
return v___x_2866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object** _args){
lean_object* v___x_2880_ = _args[0];
lean_object* v___x_2881_ = _args[1];
lean_object* v_toMonadRef_2882_ = _args[2];
lean_object* v___f_2883_ = _args[3];
lean_object* v_x_2884_ = _args[4];
lean_object* v___y_2885_ = _args[5];
lean_object* v___y_2886_ = _args[6];
lean_object* v___y_2887_ = _args[7];
lean_object* v___y_2888_ = _args[8];
lean_object* v___y_2889_ = _args[9];
lean_object* v___y_2890_ = _args[10];
lean_object* v___y_2891_ = _args[11];
lean_object* v___y_2892_ = _args[12];
lean_object* v___y_2893_ = _args[13];
lean_object* v___y_2894_ = _args[14];
lean_object* v___y_2895_ = _args[15];
lean_object* v___y_2896_ = _args[16];
lean_object* v___y_2897_ = _args[17];
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(v___x_2880_, v___x_2881_, v_toMonadRef_2882_, v___f_2883_, v_x_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec_ref(v___y_2886_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object* v_hyps_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___y_2931_; lean_object* v___x_2932_; lean_object* v_toApplicative_2933_; lean_object* v_toFunctor_2934_; lean_object* v_toSeq_2935_; lean_object* v_toSeqLeft_2936_; lean_object* v_toSeqRight_2937_; lean_object* v___f_2938_; lean_object* v___f_2939_; lean_object* v___f_2940_; lean_object* v___f_2941_; lean_object* v___x_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___f_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v_toApplicative_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_3001_; 
v___x_2932_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_2933_ = lean_ctor_get(v___x_2932_, 0);
v_toFunctor_2934_ = lean_ctor_get(v_toApplicative_2933_, 0);
v_toSeq_2935_ = lean_ctor_get(v_toApplicative_2933_, 2);
v_toSeqLeft_2936_ = lean_ctor_get(v_toApplicative_2933_, 3);
v_toSeqRight_2937_ = lean_ctor_get(v_toApplicative_2933_, 4);
v___f_2938_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_2939_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_2934_, 2);
v___f_2940_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2940_, 0, v_toFunctor_2934_);
v___f_2941_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2941_, 0, v_toFunctor_2934_);
v___x_2942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___f_2940_);
lean_ctor_set(v___x_2942_, 1, v___f_2941_);
lean_inc(v_toSeqRight_2937_);
v___f_2943_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2943_, 0, v_toSeqRight_2937_);
lean_inc(v_toSeqLeft_2936_);
v___f_2944_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2944_, 0, v_toSeqLeft_2936_);
lean_inc(v_toSeq_2935_);
v___f_2945_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2945_, 0, v_toSeq_2935_);
v___x_2946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2942_);
lean_ctor_set(v___x_2946_, 1, v___f_2938_);
lean_ctor_set(v___x_2946_, 2, v___f_2945_);
lean_ctor_set(v___x_2946_, 3, v___f_2944_);
lean_ctor_set(v___x_2946_, 4, v___f_2943_);
v___x_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v___f_2939_);
v___x_2948_ = l_StateRefT_x27_instMonad___redArg(v___x_2947_);
v_toApplicative_2949_ = lean_ctor_get(v___x_2948_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2948_);
if (v_isSharedCheck_3001_ == 0)
{
lean_object* v_unused_3002_; 
v_unused_3002_ = lean_ctor_get(v___x_2948_, 1);
lean_dec(v_unused_3002_);
v___x_2951_ = v___x_2948_;
v_isShared_2952_ = v_isSharedCheck_3001_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_toApplicative_2949_);
lean_dec(v___x_2948_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_3001_;
goto v_resetjp_2950_;
}
v___jp_2912_:
{
lean_object* v___x_2913_; lean_object* v_caches_2914_; lean_object* v_typeAnalysis_2915_; lean_object* v_target_2916_; lean_object* v_hypotheses_2917_; uint8_t v_didChange_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2929_; 
v___x_2913_ = lean_st_ref_take(v___y_2901_);
v_caches_2914_ = lean_ctor_get(v___x_2913_, 0);
v_typeAnalysis_2915_ = lean_ctor_get(v___x_2913_, 1);
v_target_2916_ = lean_ctor_get(v___x_2913_, 2);
v_hypotheses_2917_ = lean_ctor_get(v___x_2913_, 3);
v_didChange_2918_ = lean_ctor_get_uint8(v___x_2913_, sizeof(void*)*4);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2920_ = v___x_2913_;
v_isShared_2921_ = v_isSharedCheck_2929_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_hypotheses_2917_);
lean_inc(v_target_2916_);
lean_inc(v_typeAnalysis_2915_);
lean_inc(v_caches_2914_);
lean_dec(v___x_2913_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2929_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2925_; 
v___x_2922_ = lean_box(0);
v___x_2923_ = l_Array_append___redArg(v_hypotheses_2917_, v_hyps_2899_);
lean_dec_ref(v_hyps_2899_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 3, v___x_2923_);
v___x_2925_ = v___x_2920_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_caches_2914_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_typeAnalysis_2915_);
lean_ctor_set(v_reuseFailAlloc_2928_, 2, v_target_2916_);
lean_ctor_set(v_reuseFailAlloc_2928_, 3, v___x_2923_);
lean_ctor_set_uint8(v_reuseFailAlloc_2928_, sizeof(void*)*4, v_didChange_2918_);
v___x_2925_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2926_ = lean_st_ref_put(v___y_2901_, v___x_2925_);
v___x_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2922_);
return v___x_2927_;
}
}
}
v___jp_2930_:
{
if (lean_obj_tag(v___y_2931_) == 0)
{
lean_dec_ref_known(v___y_2931_, 1);
goto v___jp_2912_;
}
else
{
lean_dec_ref(v_hyps_2899_);
return v___y_2931_;
}
}
v_resetjp_2950_:
{
lean_object* v_toFunctor_2953_; lean_object* v_toSeq_2954_; lean_object* v_toSeqLeft_2955_; lean_object* v_toSeqRight_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2999_; 
v_toFunctor_2953_ = lean_ctor_get(v_toApplicative_2949_, 0);
v_toSeq_2954_ = lean_ctor_get(v_toApplicative_2949_, 2);
v_toSeqLeft_2955_ = lean_ctor_get(v_toApplicative_2949_, 3);
v_toSeqRight_2956_ = lean_ctor_get(v_toApplicative_2949_, 4);
v_isSharedCheck_2999_ = !lean_is_exclusive(v_toApplicative_2949_);
if (v_isSharedCheck_2999_ == 0)
{
lean_object* v_unused_3000_; 
v_unused_3000_ = lean_ctor_get(v_toApplicative_2949_, 1);
lean_dec(v_unused_3000_);
v___x_2958_ = v_toApplicative_2949_;
v_isShared_2959_ = v_isSharedCheck_2999_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_toSeqRight_2956_);
lean_inc(v_toSeqLeft_2955_);
lean_inc(v_toSeq_2954_);
lean_inc(v_toFunctor_2953_);
lean_dec(v_toApplicative_2949_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2999_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___f_2960_; lean_object* v___f_2961_; lean_object* v___f_2962_; lean_object* v___f_2963_; lean_object* v___x_2964_; lean_object* v___f_2965_; lean_object* v___f_2966_; lean_object* v___f_2967_; lean_object* v___x_2969_; 
v___f_2960_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_2961_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_2953_);
v___f_2962_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2962_, 0, v_toFunctor_2953_);
v___f_2963_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2963_, 0, v_toFunctor_2953_);
v___x_2964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___f_2962_);
lean_ctor_set(v___x_2964_, 1, v___f_2963_);
v___f_2965_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2965_, 0, v_toSeqRight_2956_);
v___f_2966_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2966_, 0, v_toSeqLeft_2955_);
v___f_2967_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2967_, 0, v_toSeq_2954_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 4, v___f_2965_);
lean_ctor_set(v___x_2958_, 3, v___f_2966_);
lean_ctor_set(v___x_2958_, 2, v___f_2967_);
lean_ctor_set(v___x_2958_, 1, v___f_2960_);
lean_ctor_set(v___x_2958_, 0, v___x_2964_);
v___x_2969_ = v___x_2958_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_2998_, 1, v___f_2960_);
lean_ctor_set(v_reuseFailAlloc_2998_, 2, v___f_2967_);
lean_ctor_set(v_reuseFailAlloc_2998_, 3, v___f_2966_);
lean_ctor_set(v_reuseFailAlloc_2998_, 4, v___f_2965_);
v___x_2969_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2971_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___f_2961_);
lean_ctor_set(v___x_2951_, 0, v___x_2969_);
v___x_2971_ = v___x_2951_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2969_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v___f_2961_);
v___x_2971_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v_toMonadRef_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; 
v___x_2972_ = l_StateRefT_x27_instMonad___redArg(v___x_2971_);
v___x_2973_ = l_ReaderT_instMonad___redArg(v___x_2972_);
v___x_2974_ = l_StateRefT_x27_instMonad___redArg(v___x_2973_);
v___x_2975_ = l_ReaderT_instMonad___redArg(v___x_2974_);
v___x_2976_ = l_ReaderT_instMonad___redArg(v___x_2975_);
v___x_2977_ = l_StateRefT_x27_instMonad___redArg(v___x_2976_);
v___x_2978_ = l_ReaderT_instMonad___redArg(v___x_2977_);
v___x_2979_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2980_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_2981_ = lean_ctor_get(v___x_2980_, 0);
v___x_2982_ = lean_unsigned_to_nat(0u);
v___x_2983_ = lean_array_get_size(v_hyps_2899_);
v___x_2984_ = lean_nat_dec_lt(v___x_2982_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_dec_ref(v___x_2978_);
goto v___jp_2912_;
}
else
{
lean_object* v___f_2985_; lean_object* v___f_2986_; lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___f_2985_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
lean_inc_ref(v_toMonadRef_2981_);
lean_inc_ref(v___x_2978_);
v___f_2986_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed), 18, 4);
lean_closure_set(v___f_2986_, 0, v___x_2978_);
lean_closure_set(v___f_2986_, 1, v___x_2979_);
lean_closure_set(v___f_2986_, 2, v_toMonadRef_2981_);
lean_closure_set(v___f_2986_, 3, v___f_2985_);
v___x_2987_ = lean_box(0);
v___x_2988_ = lean_nat_dec_le(v___x_2983_, v___x_2983_);
if (v___x_2988_ == 0)
{
if (v___x_2984_ == 0)
{
lean_dec_ref(v___f_2986_);
lean_dec_ref(v___x_2978_);
goto v___jp_2912_;
}
else
{
size_t v___x_2989_; size_t v___x_2990_; lean_object* v___x_7336__overap_2991_; lean_object* v___x_2992_; 
v___x_2989_ = ((size_t)0ULL);
v___x_2990_ = lean_usize_of_nat(v___x_2983_);
lean_inc_ref(v_hyps_2899_);
v___x_7336__overap_2991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2978_, v___f_2986_, v_hyps_2899_, v___x_2989_, v___x_2990_, v___x_2987_);
lean_inc(v___y_2910_);
lean_inc_ref(v___y_2909_);
lean_inc(v___y_2908_);
lean_inc_ref(v___y_2907_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
lean_inc_ref(v___y_2903_);
lean_inc(v___y_2902_);
lean_inc(v___y_2901_);
lean_inc_ref(v___y_2900_);
v___x_2992_ = lean_apply_12(v___x_7336__overap_2991_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, lean_box(0));
v___y_2931_ = v___x_2992_;
goto v___jp_2930_;
}
}
else
{
size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_7339__overap_2995_; lean_object* v___x_2996_; 
v___x_2993_ = ((size_t)0ULL);
v___x_2994_ = lean_usize_of_nat(v___x_2983_);
lean_inc_ref(v_hyps_2899_);
v___x_7339__overap_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2978_, v___f_2986_, v_hyps_2899_, v___x_2993_, v___x_2994_, v___x_2987_);
lean_inc(v___y_2910_);
lean_inc_ref(v___y_2909_);
lean_inc(v___y_2908_);
lean_inc_ref(v___y_2907_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
lean_inc_ref(v___y_2903_);
lean_inc(v___y_2902_);
lean_inc(v___y_2901_);
lean_inc_ref(v___y_2900_);
v___x_2996_ = lean_apply_12(v___x_7339__overap_2995_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, lean_box(0));
v___y_2931_ = v___x_2996_;
goto v___jp_2930_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object* v_hyps_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(v_hyps_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
lean_dec(v___y_3008_);
lean_dec_ref(v___y_3007_);
lean_dec(v___y_3006_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object* v___y_3017_){
_start:
{
lean_object* v___x_3019_; lean_object* v_hypotheses_3020_; lean_object* v___x_3021_; 
v___x_3019_ = lean_st_ref_get(v___y_3017_);
v_hypotheses_3020_ = lean_ctor_get(v___x_3019_, 3);
lean_inc_ref(v_hypotheses_3020_);
lean_dec(v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v_hypotheses_3020_);
return v___x_3021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(v___y_3022_);
lean_dec(v___y_3022_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v___x_3037_; lean_object* v_hypotheses_3038_; lean_object* v___x_3039_; 
v___x_3037_ = lean_st_ref_get(v___y_3026_);
v_hypotheses_3038_ = lean_ctor_get(v___x_3037_, 3);
lean_inc_ref(v_hypotheses_3038_);
lean_dec(v___x_3037_);
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v_hypotheses_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object* v_hyps_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
lean_object* v___x_3066_; lean_object* v_caches_3067_; lean_object* v_typeAnalysis_3068_; lean_object* v_target_3069_; uint8_t v_didChange_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3080_; 
v___x_3066_ = lean_st_ref_take(v___y_3055_);
v_caches_3067_ = lean_ctor_get(v___x_3066_, 0);
v_typeAnalysis_3068_ = lean_ctor_get(v___x_3066_, 1);
v_target_3069_ = lean_ctor_get(v___x_3066_, 2);
v_didChange_3070_ = lean_ctor_get_uint8(v___x_3066_, sizeof(void*)*4);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3080_ == 0)
{
lean_object* v_unused_3081_; 
v_unused_3081_ = lean_ctor_get(v___x_3066_, 3);
lean_dec(v_unused_3081_);
v___x_3072_ = v___x_3066_;
v_isShared_3073_ = v_isSharedCheck_3080_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_target_3069_);
lean_inc(v_typeAnalysis_3068_);
lean_inc(v_caches_3067_);
lean_dec(v___x_3066_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3080_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3074_; lean_object* v___x_3076_; 
v___x_3074_ = lean_box(0);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 3, v_hyps_3053_);
v___x_3076_ = v___x_3072_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_caches_3067_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v_typeAnalysis_3068_);
lean_ctor_set(v_reuseFailAlloc_3079_, 2, v_target_3069_);
lean_ctor_set(v_reuseFailAlloc_3079_, 3, v_hyps_3053_);
lean_ctor_set_uint8(v_reuseFailAlloc_3079_, sizeof(void*)*4, v_didChange_3070_);
v___x_3076_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_st_ref_put(v___y_3055_, v___x_3076_);
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3074_);
return v___x_3078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object* v_hyps_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(v_hyps_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object* v_inst_3096_, lean_object* v_hyps_3097_){
_start:
{
lean_object* v___f_3098_; lean_object* v___x_3099_; 
v___f_3098_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3098_, 0, v_hyps_3097_);
v___x_3099_ = lean_apply_2(v_inst_3096_, lean_box(0), v___f_3098_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v___x_3112_; lean_object* v_caches_3113_; lean_object* v_typeAnalysis_3114_; lean_object* v_target_3115_; uint8_t v_didChange_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3127_; 
v___x_3112_ = lean_st_ref_take(v___y_3101_);
v_caches_3113_ = lean_ctor_get(v___x_3112_, 0);
v_typeAnalysis_3114_ = lean_ctor_get(v___x_3112_, 1);
v_target_3115_ = lean_ctor_get(v___x_3112_, 2);
v_didChange_3116_ = lean_ctor_get_uint8(v___x_3112_, sizeof(void*)*4);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v___x_3112_, 3);
lean_dec(v_unused_3128_);
v___x_3118_ = v___x_3112_;
v_isShared_3119_ = v_isSharedCheck_3127_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_target_3115_);
lean_inc(v_typeAnalysis_3114_);
lean_inc(v_caches_3113_);
lean_dec(v___x_3112_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3127_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3120_ = lean_box(0);
v___x_3121_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 3, v___x_3121_);
v___x_3123_ = v___x_3118_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_caches_3113_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_typeAnalysis_3114_);
lean_ctor_set(v_reuseFailAlloc_3126_, 2, v_target_3115_);
lean_ctor_set(v_reuseFailAlloc_3126_, 3, v___x_3121_);
lean_ctor_set_uint8(v_reuseFailAlloc_3126_, sizeof(void*)*4, v_didChange_3116_);
v___x_3123_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = lean_st_ref_put(v___y_3101_, v___x_3123_);
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3120_);
return v___x_3125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
lean_dec(v___y_3131_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object* v_toPure_3142_, lean_object* v_cls_3143_, lean_object* v_____do__lift_3144_, lean_object* v_____do__lift_3145_){
_start:
{
uint8_t v_hasTrace_3146_; 
v_hasTrace_3146_ = lean_ctor_get_uint8(v_____do__lift_3145_, sizeof(void*)*1);
if (v_hasTrace_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
lean_dec(v_cls_3143_);
v___x_3147_ = lean_box(v_hasTrace_3146_);
v___x_3148_ = lean_apply_2(v_toPure_3142_, lean_box(0), v___x_3147_);
return v___x_3148_;
}
else
{
lean_object* v___x_3149_; lean_object* v___x_3150_; uint8_t v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3149_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3150_ = l_Lean_Name_append(v___x_3149_, v_cls_3143_);
v___x_3151_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3144_, v_____do__lift_3145_, v___x_3150_);
lean_dec(v___x_3150_);
v___x_3152_ = lean_box(v___x_3151_);
v___x_3153_ = lean_apply_2(v_toPure_3142_, lean_box(0), v___x_3152_);
return v___x_3153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object* v_toPure_3154_, lean_object* v_cls_3155_, lean_object* v_____do__lift_3156_, lean_object* v_____do__lift_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(v_toPure_3154_, v_cls_3155_, v_____do__lift_3156_, v_____do__lift_3157_);
lean_dec_ref(v_____do__lift_3157_);
lean_dec_ref(v_____do__lift_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object* v_toPure_3159_, lean_object* v_cls_3160_, lean_object* v_toBind_3161_, lean_object* v_inst_3162_, lean_object* v_____do__lift_3163_){
_start:
{
lean_object* v___f_3164_; lean_object* v___x_3165_; 
v___f_3164_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3164_, 0, v_toPure_3159_);
lean_closure_set(v___f_3164_, 1, v_cls_3160_);
lean_closure_set(v___f_3164_, 2, v_____do__lift_3163_);
v___x_3165_ = lean_apply_4(v_toBind_3161_, lean_box(0), lean_box(0), v_inst_3162_, v___f_3164_);
return v___x_3165_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0));
v___x_3168_ = l_Lean_stringToMessageData(v___x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object* v_toPure_3169_, lean_object* v_a_3170_, lean_object* v___y_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_cls_3176_, uint8_t v_____do__lift_3177_){
_start:
{
if (v_____do__lift_3177_ == 0)
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
lean_dec(v_cls_3176_);
lean_dec(v_inst_3175_);
lean_dec_ref(v_inst_3174_);
lean_dec_ref(v_inst_3173_);
lean_dec_ref(v_inst_3172_);
lean_dec_ref(v___y_3171_);
lean_dec_ref(v_a_3170_);
v___x_3178_ = lean_box(0);
v___x_3179_ = lean_apply_2(v_toPure_3169_, lean_box(0), v___x_3178_);
return v___x_3179_;
}
else
{
lean_object* v_type_3180_; lean_object* v_type_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
lean_dec(v_toPure_3169_);
v_type_3180_ = lean_ctor_get(v_a_3170_, 1);
lean_inc_ref(v_type_3180_);
lean_dec_ref(v_a_3170_);
v_type_3181_ = lean_ctor_get(v___y_3171_, 1);
lean_inc_ref(v_type_3181_);
lean_dec_ref(v___y_3171_);
v___x_3182_ = l_Lean_MessageData_ofExpr(v_type_3180_);
v___x_3183_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3182_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = l_Lean_MessageData_ofExpr(v_type_3181_);
v___x_3186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3184_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = l_Lean_addTrace___redArg(v_inst_3172_, v_inst_3173_, v_inst_3174_, v_inst_3175_, v_cls_3176_, v___x_3186_);
return v___x_3187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object* v_toPure_3188_, lean_object* v_a_3189_, lean_object* v___y_3190_, lean_object* v_inst_3191_, lean_object* v_inst_3192_, lean_object* v_inst_3193_, lean_object* v_inst_3194_, lean_object* v_cls_3195_, lean_object* v_____do__lift_3196_){
_start:
{
uint8_t v_____do__lift_3042__boxed_3197_; lean_object* v_res_3198_; 
v_____do__lift_3042__boxed_3197_ = lean_unbox(v_____do__lift_3196_);
v_res_3198_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(v_toPure_3188_, v_a_3189_, v___y_3190_, v_inst_3191_, v_inst_3192_, v_inst_3193_, v_inst_3194_, v_cls_3195_, v_____do__lift_3042__boxed_3197_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object* v_inst_3199_, lean_object* v_toPure_3200_, lean_object* v_toBind_3201_, lean_object* v_inst_3202_, lean_object* v_a_3203_, lean_object* v_inst_3204_, lean_object* v_inst_3205_, lean_object* v_inst_3206_, lean_object* v_x_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_getInheritedTraceOptions_3209_; lean_object* v_cls_3210_; lean_object* v___f_3211_; lean_object* v___f_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_getInheritedTraceOptions_3209_ = lean_ctor_get(v_inst_3199_, 2);
lean_inc(v_getInheritedTraceOptions_3209_);
v_cls_3210_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3201_, 2);
lean_inc(v_toPure_3200_);
v___f_3211_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3211_, 0, v_toPure_3200_);
lean_closure_set(v___f_3211_, 1, v_cls_3210_);
lean_closure_set(v___f_3211_, 2, v_toBind_3201_);
lean_closure_set(v___f_3211_, 3, v_inst_3202_);
v___f_3212_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_3212_, 0, v_toPure_3200_);
lean_closure_set(v___f_3212_, 1, v_a_3203_);
lean_closure_set(v___f_3212_, 2, v___y_3208_);
lean_closure_set(v___f_3212_, 3, v_inst_3204_);
lean_closure_set(v___f_3212_, 4, v_inst_3199_);
lean_closure_set(v___f_3212_, 5, v_inst_3205_);
lean_closure_set(v___f_3212_, 6, v_inst_3206_);
lean_closure_set(v___f_3212_, 7, v_cls_3210_);
v___x_3213_ = lean_apply_4(v_toBind_3201_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3209_, v___f_3211_);
v___x_3214_ = lean_apply_4(v_toBind_3201_, lean_box(0), lean_box(0), v___x_3213_, v___f_3212_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object* v_toPure_3215_, lean_object* v_res_3216_, lean_object* v_____r_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = lean_apply_2(v_toPure_3215_, lean_box(0), v_res_3216_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object* v_inst_3219_, lean_object* v_toBind_3220_, lean_object* v___f_3221_, lean_object* v_____r_3222_){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3223_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed), 12, 0);
v___x_3224_ = lean_apply_2(v_inst_3219_, lean_box(0), v___x_3223_);
v___x_3225_ = lean_apply_4(v_toBind_3220_, lean_box(0), lean_box(0), v___x_3224_, v___f_3221_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object* v___f_3226_, lean_object* v_____r_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = lean_apply_1(v___f_3226_, v_____r_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object* v___f_3229_, lean_object* v_type_3230_, lean_object* v_type_3231_, lean_object* v_inst_3232_, lean_object* v_inst_3233_, lean_object* v_inst_3234_, lean_object* v_inst_3235_, lean_object* v_cls_3236_, lean_object* v_toBind_3237_, lean_object* v___f_3238_, uint8_t v_____do__lift_3239_){
_start:
{
if (v_____do__lift_3239_ == 0)
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
lean_dec(v___f_3238_);
lean_dec(v_toBind_3237_);
lean_dec(v_cls_3236_);
lean_dec(v_inst_3235_);
lean_dec_ref(v_inst_3234_);
lean_dec_ref(v_inst_3233_);
lean_dec_ref(v_inst_3232_);
lean_dec_ref(v_type_3231_);
lean_dec_ref(v_type_3230_);
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_apply_1(v___f_3229_, v___x_3240_);
return v___x_3241_;
}
else
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
lean_dec(v___f_3229_);
v___x_3242_ = l_Lean_MessageData_ofExpr(v_type_3230_);
v___x_3243_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3244_, 0, v___x_3242_);
lean_ctor_set(v___x_3244_, 1, v___x_3243_);
v___x_3245_ = l_Lean_MessageData_ofExpr(v_type_3231_);
v___x_3246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3244_);
lean_ctor_set(v___x_3246_, 1, v___x_3245_);
v___x_3247_ = l_Lean_addTrace___redArg(v_inst_3232_, v_inst_3233_, v_inst_3234_, v_inst_3235_, v_cls_3236_, v___x_3246_);
v___x_3248_ = lean_apply_4(v_toBind_3237_, lean_box(0), lean_box(0), v___x_3247_, v___f_3238_);
return v___x_3248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object* v___f_3249_, lean_object* v_type_3250_, lean_object* v_type_3251_, lean_object* v_inst_3252_, lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_inst_3255_, lean_object* v_cls_3256_, lean_object* v_toBind_3257_, lean_object* v___f_3258_, lean_object* v_____do__lift_3259_){
_start:
{
uint8_t v_____do__lift_3142__boxed_3260_; lean_object* v_res_3261_; 
v_____do__lift_3142__boxed_3260_ = lean_unbox(v_____do__lift_3259_);
v_res_3261_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(v___f_3249_, v_type_3250_, v_type_3251_, v_inst_3252_, v_inst_3253_, v_inst_3254_, v_inst_3255_, v_cls_3256_, v_toBind_3257_, v___f_3258_, v_____do__lift_3142__boxed_3260_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object* v_toPure_3262_, lean_object* v_inst_3263_, lean_object* v_toBind_3264_, lean_object* v_inst_3265_, lean_object* v___f_3266_, lean_object* v_a_3267_, lean_object* v_inst_3268_, lean_object* v_inst_3269_, lean_object* v_inst_3270_, lean_object* v_inst_3271_, lean_object* v___f_3272_, lean_object* v_res_3273_){
_start:
{
lean_object* v___x_3274_; lean_object* v_zero_3275_; uint8_t v_isZero_3276_; 
v___x_3274_ = lean_array_get_size(v_res_3273_);
v_zero_3275_ = lean_unsigned_to_nat(0u);
v_isZero_3276_ = lean_nat_dec_eq(v___x_3274_, v_zero_3275_);
if (v_isZero_3276_ == 1)
{
lean_object* v___f_3277_; lean_object* v___f_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
lean_dec(v___f_3272_);
lean_dec(v_inst_3271_);
lean_dec_ref(v_inst_3270_);
lean_dec(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_a_3267_);
lean_inc_ref(v_res_3273_);
lean_inc(v_toPure_3262_);
v___f_3277_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3277_, 0, v_toPure_3262_);
lean_closure_set(v___f_3277_, 1, v_res_3273_);
lean_inc(v_toBind_3264_);
v___f_3278_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3278_, 0, v_inst_3263_);
lean_closure_set(v___f_3278_, 1, v_toBind_3264_);
lean_closure_set(v___f_3278_, 2, v___f_3277_);
v___x_3279_ = lean_box(0);
v___x_3280_ = lean_nat_dec_lt(v_zero_3275_, v___x_3274_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
lean_dec_ref(v_res_3273_);
lean_dec(v___f_3266_);
lean_dec_ref(v_inst_3265_);
v___x_3281_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3279_);
v___x_3282_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3281_, v___f_3278_);
return v___x_3282_;
}
else
{
uint8_t v___x_3283_; 
v___x_3283_ = lean_nat_dec_le(v___x_3274_, v___x_3274_);
if (v___x_3283_ == 0)
{
if (v___x_3280_ == 0)
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_dec_ref(v_res_3273_);
lean_dec(v___f_3266_);
lean_dec_ref(v_inst_3265_);
v___x_3284_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3279_);
v___x_3285_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3284_, v___f_3278_);
return v___x_3285_;
}
else
{
size_t v___x_3286_; size_t v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
lean_dec(v_toPure_3262_);
v___x_3286_ = ((size_t)0ULL);
v___x_3287_ = lean_usize_of_nat(v___x_3274_);
v___x_3288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3266_, v_res_3273_, v___x_3286_, v___x_3287_, v___x_3279_);
v___x_3289_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3288_, v___f_3278_);
return v___x_3289_;
}
}
else
{
size_t v___x_3290_; size_t v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
lean_dec(v_toPure_3262_);
v___x_3290_ = ((size_t)0ULL);
v___x_3291_ = lean_usize_of_nat(v___x_3274_);
v___x_3292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3266_, v_res_3273_, v___x_3290_, v___x_3291_, v___x_3279_);
v___x_3293_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3292_, v___f_3278_);
return v___x_3293_;
}
}
}
else
{
lean_object* v_one_3294_; lean_object* v_n_3295_; uint8_t v_isZero_3296_; 
lean_dec(v___f_3266_);
v_one_3294_ = lean_unsigned_to_nat(1u);
v_n_3295_ = lean_nat_sub(v___x_3274_, v_one_3294_);
v_isZero_3296_ = lean_nat_dec_eq(v_n_3295_, v_zero_3275_);
lean_dec(v_n_3295_);
if (v_isZero_3296_ == 1)
{
lean_object* v_newHyp_3297_; lean_object* v_type_3298_; lean_object* v_type_3299_; uint8_t v___x_3300_; 
lean_dec(v___f_3272_);
v_newHyp_3297_ = lean_array_fget_borrowed(v_res_3273_, v_zero_3275_);
v_type_3298_ = lean_ctor_get(v_newHyp_3297_, 1);
v_type_3299_ = lean_ctor_get(v_a_3267_, 1);
lean_inc_ref(v_type_3299_);
lean_dec_ref(v_a_3267_);
v___x_3300_ = lean_expr_eqv(v_type_3298_, v_type_3299_);
if (v___x_3300_ == 0)
{
lean_object* v_getInheritedTraceOptions_3301_; lean_object* v___f_3302_; lean_object* v___f_3303_; lean_object* v___f_3304_; lean_object* v_cls_3305_; lean_object* v___f_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
lean_inc_ref(v_type_3298_);
v_getInheritedTraceOptions_3301_ = lean_ctor_get(v_inst_3268_, 2);
lean_inc(v_getInheritedTraceOptions_3301_);
lean_inc(v_toPure_3262_);
v___f_3302_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3302_, 0, v_toPure_3262_);
lean_closure_set(v___f_3302_, 1, v_res_3273_);
lean_inc_n(v_toBind_3264_, 4);
v___f_3303_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3303_, 0, v_inst_3263_);
lean_closure_set(v___f_3303_, 1, v_toBind_3264_);
lean_closure_set(v___f_3303_, 2, v___f_3302_);
lean_inc_ref(v___f_3303_);
v___f_3304_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3304_, 0, v___f_3303_);
v_cls_3305_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___f_3306_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3306_, 0, v_toPure_3262_);
lean_closure_set(v___f_3306_, 1, v_cls_3305_);
lean_closure_set(v___f_3306_, 2, v_toBind_3264_);
lean_closure_set(v___f_3306_, 3, v_inst_3269_);
v___f_3307_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_3307_, 0, v___f_3303_);
lean_closure_set(v___f_3307_, 1, v_type_3299_);
lean_closure_set(v___f_3307_, 2, v_type_3298_);
lean_closure_set(v___f_3307_, 3, v_inst_3265_);
lean_closure_set(v___f_3307_, 4, v_inst_3268_);
lean_closure_set(v___f_3307_, 5, v_inst_3270_);
lean_closure_set(v___f_3307_, 6, v_inst_3271_);
lean_closure_set(v___f_3307_, 7, v_cls_3305_);
lean_closure_set(v___f_3307_, 8, v_toBind_3264_);
lean_closure_set(v___f_3307_, 9, v___f_3304_);
v___x_3308_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3301_, v___f_3306_);
v___x_3309_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3308_, v___f_3307_);
return v___x_3309_;
}
else
{
lean_object* v___x_3310_; 
lean_dec_ref(v_type_3299_);
lean_dec(v_inst_3271_);
lean_dec_ref(v_inst_3270_);
lean_dec(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_inst_3265_);
lean_dec(v_toBind_3264_);
lean_dec(v_inst_3263_);
v___x_3310_ = lean_apply_2(v_toPure_3262_, lean_box(0), v_res_3273_);
return v___x_3310_;
}
}
else
{
lean_object* v___f_3311_; lean_object* v___f_3312_; lean_object* v___x_3313_; uint8_t v___x_3314_; 
lean_dec(v_inst_3271_);
lean_dec_ref(v_inst_3270_);
lean_dec(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_a_3267_);
lean_inc_ref(v_res_3273_);
lean_inc(v_toPure_3262_);
v___f_3311_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3311_, 0, v_toPure_3262_);
lean_closure_set(v___f_3311_, 1, v_res_3273_);
lean_inc(v_toBind_3264_);
v___f_3312_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3312_, 0, v_inst_3263_);
lean_closure_set(v___f_3312_, 1, v_toBind_3264_);
lean_closure_set(v___f_3312_, 2, v___f_3311_);
v___x_3313_ = lean_box(0);
v___x_3314_ = lean_nat_dec_lt(v_zero_3275_, v___x_3274_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; lean_object* v___x_3316_; 
lean_dec_ref(v_res_3273_);
lean_dec(v___f_3272_);
lean_dec_ref(v_inst_3265_);
v___x_3315_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3313_);
v___x_3316_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3315_, v___f_3312_);
return v___x_3316_;
}
else
{
uint8_t v___x_3317_; 
v___x_3317_ = lean_nat_dec_le(v___x_3274_, v___x_3274_);
if (v___x_3317_ == 0)
{
if (v___x_3314_ == 0)
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
lean_dec_ref(v_res_3273_);
lean_dec(v___f_3272_);
lean_dec_ref(v_inst_3265_);
v___x_3318_ = lean_apply_2(v_toPure_3262_, lean_box(0), v___x_3313_);
v___x_3319_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3318_, v___f_3312_);
return v___x_3319_;
}
else
{
size_t v___x_3320_; size_t v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
lean_dec(v_toPure_3262_);
v___x_3320_ = ((size_t)0ULL);
v___x_3321_ = lean_usize_of_nat(v___x_3274_);
v___x_3322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3272_, v_res_3273_, v___x_3320_, v___x_3321_, v___x_3313_);
v___x_3323_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3322_, v___f_3312_);
return v___x_3323_;
}
}
else
{
size_t v___x_3324_; size_t v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
lean_dec(v_toPure_3262_);
v___x_3324_ = ((size_t)0ULL);
v___x_3325_ = lean_usize_of_nat(v___x_3274_);
v___x_3326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3265_, v___f_3272_, v_res_3273_, v___x_3324_, v___x_3325_, v___x_3313_);
v___x_3327_ = lean_apply_4(v_toBind_3264_, lean_box(0), lean_box(0), v___x_3326_, v___f_3312_);
return v___x_3327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object* v_bs_3328_, lean_object* v_toPure_3329_, lean_object* v_____do__lift_3330_){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = l_Array_append___redArg(v_bs_3328_, v_____do__lift_3330_);
v___x_3332_ = lean_apply_2(v_toPure_3329_, lean_box(0), v___x_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object* v_bs_3333_, lean_object* v_toPure_3334_, lean_object* v_____do__lift_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(v_bs_3333_, v_toPure_3334_, v_____do__lift_3335_);
lean_dec_ref(v_____do__lift_3335_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object* v_inst_3337_, lean_object* v_toPure_3338_, lean_object* v_toBind_3339_, lean_object* v_inst_3340_, lean_object* v_inst_3341_, lean_object* v_inst_3342_, lean_object* v_inst_3343_, lean_object* v_inst_3344_, lean_object* v_f_3345_, lean_object* v_bs_3346_, lean_object* v_a_3347_){
_start:
{
lean_object* v___f_3348_; lean_object* v___f_3349_; lean_object* v___f_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_inc(v_inst_3343_);
lean_inc_ref(v_inst_3342_);
lean_inc_ref(v_inst_3341_);
lean_inc_ref_n(v_a_3347_, 2);
lean_inc(v_inst_3340_);
lean_inc_n(v_toBind_3339_, 3);
lean_inc_n(v_toPure_3338_, 2);
lean_inc_ref(v_inst_3337_);
v___f_3348_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6), 10, 8);
lean_closure_set(v___f_3348_, 0, v_inst_3337_);
lean_closure_set(v___f_3348_, 1, v_toPure_3338_);
lean_closure_set(v___f_3348_, 2, v_toBind_3339_);
lean_closure_set(v___f_3348_, 3, v_inst_3340_);
lean_closure_set(v___f_3348_, 4, v_a_3347_);
lean_closure_set(v___f_3348_, 5, v_inst_3341_);
lean_closure_set(v___f_3348_, 6, v_inst_3342_);
lean_closure_set(v___f_3348_, 7, v_inst_3343_);
lean_inc_ref(v___f_3348_);
v___f_3349_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13), 12, 11);
lean_closure_set(v___f_3349_, 0, v_toPure_3338_);
lean_closure_set(v___f_3349_, 1, v_inst_3344_);
lean_closure_set(v___f_3349_, 2, v_toBind_3339_);
lean_closure_set(v___f_3349_, 3, v_inst_3341_);
lean_closure_set(v___f_3349_, 4, v___f_3348_);
lean_closure_set(v___f_3349_, 5, v_a_3347_);
lean_closure_set(v___f_3349_, 6, v_inst_3337_);
lean_closure_set(v___f_3349_, 7, v_inst_3340_);
lean_closure_set(v___f_3349_, 8, v_inst_3342_);
lean_closure_set(v___f_3349_, 9, v_inst_3343_);
lean_closure_set(v___f_3349_, 10, v___f_3348_);
v___f_3350_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed), 3, 2);
lean_closure_set(v___f_3350_, 0, v_bs_3346_);
lean_closure_set(v___f_3350_, 1, v_toPure_3338_);
v___x_3351_ = lean_apply_1(v_f_3345_, v_a_3347_);
v___x_3352_ = lean_apply_4(v_toBind_3339_, lean_box(0), lean_box(0), v___x_3351_, v___f_3349_);
v___x_3353_ = lean_apply_4(v_toBind_3339_, lean_box(0), lean_box(0), v___x_3352_, v___f_3350_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object* v_hyps_3356_, lean_object* v_toPure_3357_, lean_object* v_toBind_3358_, lean_object* v___f_3359_, lean_object* v_inst_3360_, lean_object* v___f_3361_, lean_object* v_____r_3362_){
_start:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; 
v___x_3363_ = lean_unsigned_to_nat(0u);
v___x_3364_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0));
v___x_3365_ = lean_array_get_size(v_hyps_3356_);
v___x_3366_ = lean_nat_dec_lt(v___x_3363_, v___x_3365_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec(v___f_3361_);
lean_dec_ref(v_inst_3360_);
lean_dec_ref(v_hyps_3356_);
v___x_3367_ = lean_apply_2(v_toPure_3357_, lean_box(0), v___x_3364_);
v___x_3368_ = lean_apply_4(v_toBind_3358_, lean_box(0), lean_box(0), v___x_3367_, v___f_3359_);
return v___x_3368_;
}
else
{
size_t v___x_3369_; size_t v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
lean_dec(v_toPure_3357_);
v___x_3369_ = ((size_t)0ULL);
v___x_3370_ = lean_usize_of_nat(v___x_3365_);
v___x_3371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3360_, v___f_3361_, v_hyps_3356_, v___x_3369_, v___x_3370_, v___x_3364_);
v___x_3372_ = lean_apply_4(v_toBind_3358_, lean_box(0), lean_box(0), v___x_3371_, v___f_3359_);
return v___x_3372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object* v_toPure_3373_, lean_object* v_toBind_3374_, lean_object* v___f_3375_, lean_object* v_inst_3376_, lean_object* v___f_3377_, lean_object* v_inst_3378_, lean_object* v___f_3379_, lean_object* v_hyps_3380_){
_start:
{
lean_object* v___f_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
lean_inc(v_toBind_3374_);
v___f_3381_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14), 7, 6);
lean_closure_set(v___f_3381_, 0, v_hyps_3380_);
lean_closure_set(v___f_3381_, 1, v_toPure_3373_);
lean_closure_set(v___f_3381_, 2, v_toBind_3374_);
lean_closure_set(v___f_3381_, 3, v___f_3375_);
lean_closure_set(v___f_3381_, 4, v_inst_3376_);
lean_closure_set(v___f_3381_, 5, v___f_3377_);
v___x_3382_ = lean_apply_2(v_inst_3378_, lean_box(0), v___f_3379_);
v___x_3383_ = lean_apply_4(v_toBind_3374_, lean_box(0), lean_box(0), v___x_3382_, v___f_3381_);
return v___x_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_f_3391_){
_start:
{
lean_object* v_toApplicative_3392_; lean_object* v_toBind_3393_; lean_object* v_toPure_3394_; lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___x_3401_; 
v_toApplicative_3392_ = lean_ctor_get(v_inst_3385_, 0);
v_toBind_3393_ = lean_ctor_get(v_inst_3385_, 1);
lean_inc_n(v_toBind_3393_, 3);
v_toPure_3394_ = lean_ctor_get(v_toApplicative_3392_, 1);
lean_inc_n(v_toPure_3394_, 2);
lean_inc_n(v_inst_3390_, 3);
v___f_3395_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3395_, 0, v_inst_3390_);
v___f_3396_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3397_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3398_ = lean_apply_2(v_inst_3390_, lean_box(0), v___x_3397_);
lean_inc_ref(v_inst_3385_);
v___f_3399_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3399_, 0, v_inst_3386_);
lean_closure_set(v___f_3399_, 1, v_toPure_3394_);
lean_closure_set(v___f_3399_, 2, v_toBind_3393_);
lean_closure_set(v___f_3399_, 3, v_inst_3387_);
lean_closure_set(v___f_3399_, 4, v_inst_3385_);
lean_closure_set(v___f_3399_, 5, v_inst_3389_);
lean_closure_set(v___f_3399_, 6, v_inst_3388_);
lean_closure_set(v___f_3399_, 7, v_inst_3390_);
lean_closure_set(v___f_3399_, 8, v_f_3391_);
v___f_3400_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3400_, 0, v_toPure_3394_);
lean_closure_set(v___f_3400_, 1, v_toBind_3393_);
lean_closure_set(v___f_3400_, 2, v___f_3395_);
lean_closure_set(v___f_3400_, 3, v_inst_3385_);
lean_closure_set(v___f_3400_, 4, v___f_3399_);
lean_closure_set(v___f_3400_, 5, v_inst_3390_);
lean_closure_set(v___f_3400_, 6, v___f_3396_);
v___x_3401_ = lean_apply_4(v_toBind_3393_, lean_box(0), lean_box(0), v___x_3398_, v___f_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object* v_m_3402_, lean_object* v_inst_3403_, lean_object* v_inst_3404_, lean_object* v_inst_3405_, lean_object* v_inst_3406_, lean_object* v_inst_3407_, lean_object* v_inst_3408_, lean_object* v_f_3409_){
_start:
{
lean_object* v_toApplicative_3410_; lean_object* v_toBind_3411_; lean_object* v_toPure_3412_; lean_object* v___f_3413_; lean_object* v___f_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___f_3417_; lean_object* v___f_3418_; lean_object* v___x_3419_; 
v_toApplicative_3410_ = lean_ctor_get(v_inst_3403_, 0);
v_toBind_3411_ = lean_ctor_get(v_inst_3403_, 1);
lean_inc_n(v_toBind_3411_, 3);
v_toPure_3412_ = lean_ctor_get(v_toApplicative_3410_, 1);
lean_inc_n(v_toPure_3412_, 2);
lean_inc_n(v_inst_3408_, 3);
v___f_3413_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3413_, 0, v_inst_3408_);
v___f_3414_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3415_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3416_ = lean_apply_2(v_inst_3408_, lean_box(0), v___x_3415_);
lean_inc_ref(v_inst_3403_);
v___f_3417_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3417_, 0, v_inst_3404_);
lean_closure_set(v___f_3417_, 1, v_toPure_3412_);
lean_closure_set(v___f_3417_, 2, v_toBind_3411_);
lean_closure_set(v___f_3417_, 3, v_inst_3405_);
lean_closure_set(v___f_3417_, 4, v_inst_3403_);
lean_closure_set(v___f_3417_, 5, v_inst_3407_);
lean_closure_set(v___f_3417_, 6, v_inst_3406_);
lean_closure_set(v___f_3417_, 7, v_inst_3408_);
lean_closure_set(v___f_3417_, 8, v_f_3409_);
v___f_3418_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3418_, 0, v_toPure_3412_);
lean_closure_set(v___f_3418_, 1, v_toBind_3411_);
lean_closure_set(v___f_3418_, 2, v___f_3413_);
lean_closure_set(v___f_3418_, 3, v_inst_3403_);
lean_closure_set(v___f_3418_, 4, v___f_3417_);
lean_closure_set(v___f_3418_, 5, v_inst_3408_);
lean_closure_set(v___f_3418_, 6, v___f_3414_);
v___x_3419_ = lean_apply_4(v_toBind_3411_, lean_box(0), lean_box(0), v___x_3416_, v___f_3418_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object* v_toPure_3420_, lean_object* v_____r_3421_){
_start:
{
uint8_t v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = 0;
v___x_3423_ = lean_box(v___x_3422_);
v___x_3424_ = lean_apply_2(v_toPure_3420_, lean_box(0), v___x_3423_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object* v_snd_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v___x_3438_; lean_object* v_caches_3439_; lean_object* v_typeAnalysis_3440_; lean_object* v_target_3441_; uint8_t v_didChange_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3452_; 
v___x_3438_ = lean_st_ref_take(v___y_3427_);
v_caches_3439_ = lean_ctor_get(v___x_3438_, 0);
v_typeAnalysis_3440_ = lean_ctor_get(v___x_3438_, 1);
v_target_3441_ = lean_ctor_get(v___x_3438_, 2);
v_didChange_3442_ = lean_ctor_get_uint8(v___x_3438_, sizeof(void*)*4);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; 
v_unused_3453_ = lean_ctor_get(v___x_3438_, 3);
lean_dec(v_unused_3453_);
v___x_3444_ = v___x_3438_;
v_isShared_3445_ = v_isSharedCheck_3452_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_target_3441_);
lean_inc(v_typeAnalysis_3440_);
lean_inc(v_caches_3439_);
lean_dec(v___x_3438_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3452_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3446_; lean_object* v___x_3448_; 
v___x_3446_ = lean_box(0);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 3, v_snd_3425_);
v___x_3448_ = v___x_3444_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_caches_3439_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_typeAnalysis_3440_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v_target_3441_);
lean_ctor_set(v_reuseFailAlloc_3451_, 3, v_snd_3425_);
lean_ctor_set_uint8(v_reuseFailAlloc_3451_, sizeof(void*)*4, v_didChange_3442_);
v___x_3448_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3449_ = lean_st_ref_put(v___y_3427_, v___x_3448_);
v___x_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3446_);
return v___x_3450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object* v_snd_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(v_snd_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
lean_dec(v___y_3465_);
lean_dec_ref(v___y_3464_);
lean_dec(v___y_3463_);
lean_dec_ref(v___y_3462_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec(v___y_3457_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object* v_inst_3468_, lean_object* v_toBind_3469_, lean_object* v___f_3470_, lean_object* v_toPure_3471_, lean_object* v_____s_3472_){
_start:
{
lean_object* v_fst_3473_; 
v_fst_3473_ = lean_ctor_get(v_____s_3472_, 0);
if (lean_obj_tag(v_fst_3473_) == 0)
{
lean_object* v_snd_3474_; lean_object* v___f_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec(v_toPure_3471_);
v_snd_3474_ = lean_ctor_get(v_____s_3472_, 1);
lean_inc(v_snd_3474_);
lean_dec_ref(v_____s_3472_);
v___f_3475_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed), 13, 1);
lean_closure_set(v___f_3475_, 0, v_snd_3474_);
v___x_3476_ = lean_apply_2(v_inst_3468_, lean_box(0), v___f_3475_);
v___x_3477_ = lean_apply_4(v_toBind_3469_, lean_box(0), lean_box(0), v___x_3476_, v___f_3470_);
return v___x_3477_;
}
else
{
lean_object* v_val_3478_; lean_object* v___x_3479_; 
lean_inc_ref(v_fst_3473_);
lean_dec_ref(v_____s_3472_);
lean_dec(v___f_3470_);
lean_dec(v_toBind_3469_);
lean_dec(v_inst_3468_);
v_val_3478_ = lean_ctor_get(v_fst_3473_, 0);
lean_inc(v_val_3478_);
lean_dec_ref_known(v_fst_3473_, 1);
v___x_3479_ = lean_apply_2(v_toPure_3471_, lean_box(0), v_val_3478_);
return v___x_3479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object* v_toPure_3480_, lean_object* v_____do__lift_3481_){
_start:
{
lean_object* v___x_3482_; 
v___x_3482_ = lean_apply_2(v_toPure_3480_, lean_box(0), v_____do__lift_3481_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object* v_toPure_3483_, lean_object* v_next_3484_, lean_object* v_G_3485_, lean_object* v_____do__lift_3486_){
_start:
{
if (lean_obj_tag(v_____do__lift_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3488_; 
lean_dec(v_G_3485_);
v_a_3487_ = lean_ctor_get(v_____do__lift_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v_____do__lift_3486_, 1);
v___x_3488_ = lean_apply_2(v_toPure_3483_, lean_box(0), v_a_3487_);
return v___x_3488_;
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_dec(v_toPure_3483_);
v_a_3489_ = lean_ctor_get(v_____do__lift_3486_, 0);
lean_inc(v_a_3489_);
lean_dec_ref_known(v_____do__lift_3486_, 1);
v___x_3490_ = lean_unsigned_to_nat(1u);
v___x_3491_ = lean_nat_add(v_next_3484_, v___x_3490_);
v___x_3492_ = lean_apply_4(v_G_3485_, v___x_3491_, v_a_3489_, lean_box(0), lean_box(0));
return v___x_3492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object* v_toPure_3493_, lean_object* v_next_3494_, lean_object* v_G_3495_, lean_object* v_____do__lift_3496_){
_start:
{
lean_object* v_res_3497_; 
v_res_3497_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(v_toPure_3493_, v_next_3494_, v_G_3495_, v_____do__lift_3496_);
lean_dec(v_next_3494_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(uint8_t v___x_3498_, lean_object* v_snd_3499_, lean_object* v_toPure_3500_, lean_object* v_____r_3501_){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3502_ = lean_box(v___x_3498_);
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
lean_ctor_set(v___x_3504_, 1, v_snd_3499_);
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
v___x_3506_ = lean_apply_2(v_toPure_3500_, lean_box(0), v___x_3505_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed(lean_object* v___x_3507_, lean_object* v_snd_3508_, lean_object* v_toPure_3509_, lean_object* v_____r_3510_){
_start:
{
uint8_t v___x_1676__boxed_3511_; lean_object* v_res_3512_; 
v___x_1676__boxed_3511_ = lean_unbox(v___x_3507_);
v_res_3512_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v___x_1676__boxed_3511_, v_snd_3508_, v_toPure_3509_, v_____r_3510_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object* v_snd_3513_, lean_object* v_newHyp_3514_, lean_object* v___x_3515_, lean_object* v_toPure_3516_, lean_object* v_____r_3517_){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3518_ = lean_array_push(v_snd_3513_, v_newHyp_3514_);
v___x_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3515_);
lean_ctor_set(v___x_3519_, 1, v___x_3518_);
v___x_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
v___x_3521_ = lean_apply_2(v_toPure_3516_, lean_box(0), v___x_3520_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object* v_toPure_3522_, lean_object* v___x_3523_, lean_object* v_____do__lift_3524_, lean_object* v_____do__lift_3525_){
_start:
{
uint8_t v_hasTrace_3526_; 
v_hasTrace_3526_ = lean_ctor_get_uint8(v_____do__lift_3525_, sizeof(void*)*1);
if (v_hasTrace_3526_ == 0)
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_dec(v___x_3523_);
v___x_3527_ = lean_box(v_hasTrace_3526_);
v___x_3528_ = lean_apply_2(v_toPure_3522_, lean_box(0), v___x_3527_);
return v___x_3528_;
}
else
{
lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3529_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3530_ = l_Lean_Name_append(v___x_3529_, v___x_3523_);
v___x_3531_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3524_, v_____do__lift_3525_, v___x_3530_);
lean_dec(v___x_3530_);
v___x_3532_ = lean_box(v___x_3531_);
v___x_3533_ = lean_apply_2(v_toPure_3522_, lean_box(0), v___x_3532_);
return v___x_3533_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed(lean_object* v_toPure_3534_, lean_object* v___x_3535_, lean_object* v_____do__lift_3536_, lean_object* v_____do__lift_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(v_toPure_3534_, v___x_3535_, v_____do__lift_3536_, v_____do__lift_3537_);
lean_dec_ref(v_____do__lift_3537_);
lean_dec_ref(v_____do__lift_3536_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object* v_toPure_3539_, lean_object* v___x_3540_, lean_object* v_toBind_3541_, lean_object* v_inst_3542_, lean_object* v_____do__lift_3543_){
_start:
{
lean_object* v___f_3544_; lean_object* v___x_3545_; 
v___f_3544_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed), 4, 3);
lean_closure_set(v___f_3544_, 0, v_toPure_3539_);
lean_closure_set(v___f_3544_, 1, v___x_3540_);
lean_closure_set(v___f_3544_, 2, v_____do__lift_3543_);
v___x_3545_ = lean_apply_4(v_toBind_3541_, lean_box(0), lean_box(0), v_inst_3542_, v___f_3544_);
return v___x_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(lean_object* v___f_3546_, lean_object* v___x_3547_, lean_object* v_type_3548_, lean_object* v_inst_3549_, lean_object* v_inst_3550_, lean_object* v_toMonadRef_3551_, lean_object* v_inst_3552_, lean_object* v___x_3553_, lean_object* v_toBind_3554_, lean_object* v___f_3555_, uint8_t v_____do__lift_3556_){
_start:
{
if (v_____do__lift_3556_ == 0)
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_dec(v___f_3555_);
lean_dec(v_toBind_3554_);
lean_dec(v___x_3553_);
lean_dec(v_inst_3552_);
lean_dec_ref(v_toMonadRef_3551_);
lean_dec_ref(v_inst_3550_);
lean_dec_ref(v_inst_3549_);
lean_dec_ref(v_type_3548_);
lean_dec_ref(v___x_3547_);
v___x_3557_ = lean_box(0);
v___x_3558_ = lean_apply_1(v___f_3546_, v___x_3557_);
return v___x_3558_;
}
else
{
lean_object* v_type_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
lean_dec(v___f_3546_);
v_type_3559_ = lean_ctor_get(v___x_3547_, 1);
lean_inc_ref(v_type_3559_);
lean_dec_ref(v___x_3547_);
v___x_3560_ = l_Lean_MessageData_ofExpr(v_type_3559_);
v___x_3561_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3560_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = l_Lean_MessageData_ofExpr(v_type_3548_);
v___x_3564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3562_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = l_Lean_addTrace___redArg(v_inst_3549_, v_inst_3550_, v_toMonadRef_3551_, v_inst_3552_, v___x_3553_, v___x_3564_);
v___x_3566_ = lean_apply_4(v_toBind_3554_, lean_box(0), lean_box(0), v___x_3565_, v___f_3555_);
return v___x_3566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object* v___f_3567_, lean_object* v___x_3568_, lean_object* v_type_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_toMonadRef_3572_, lean_object* v_inst_3573_, lean_object* v___x_3574_, lean_object* v_toBind_3575_, lean_object* v___f_3576_, lean_object* v_____do__lift_3577_){
_start:
{
uint8_t v_____do__lift_1751__boxed_3578_; lean_object* v_res_3579_; 
v_____do__lift_1751__boxed_3578_ = lean_unbox(v_____do__lift_3577_);
v_res_3579_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(v___f_3567_, v___x_3568_, v_type_3569_, v_inst_3570_, v_inst_3571_, v_toMonadRef_3572_, v_inst_3573_, v___x_3574_, v_toBind_3575_, v___f_3576_, v_____do__lift_1751__boxed_3578_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object* v___x_3580_, lean_object* v_snd_3581_, lean_object* v___x_3582_, lean_object* v_toPure_3583_, lean_object* v_inst_3584_, lean_object* v_toBind_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_inst_3588_, lean_object* v_toMonadRef_3589_, lean_object* v_inst_3590_, lean_object* v___f_3591_, lean_object* v_newHyp_3592_){
_start:
{
lean_object* v_type_3593_; lean_object* v_value_3594_; uint8_t v___x_3595_; 
v_type_3593_ = lean_ctor_get(v_newHyp_3592_, 1);
v_value_3594_ = lean_ctor_get(v_newHyp_3592_, 2);
lean_inc_ref(v_type_3593_);
v___x_3595_ = l_Lean_Expr_isFalse(v_type_3593_);
if (v___x_3595_ == 0)
{
lean_object* v_type_3596_; lean_object* v___f_3597_; lean_object* v___f_3598_; lean_object* v___f_3599_; lean_object* v___f_3600_; uint8_t v___x_3608_; 
lean_dec(v___f_3591_);
v_type_3596_ = lean_ctor_get(v___x_3580_, 1);
lean_inc(v_toPure_3583_);
lean_inc(v___x_3582_);
lean_inc_ref(v_newHyp_3592_);
lean_inc(v_snd_3581_);
v___f_3597_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3597_, 0, v_snd_3581_);
lean_closure_set(v___f_3597_, 1, v_newHyp_3592_);
lean_closure_set(v___f_3597_, 2, v___x_3582_);
lean_closure_set(v___f_3597_, 3, v_toPure_3583_);
v___f_3598_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3598_, 0, v___f_3597_);
lean_inc(v_toBind_3585_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3599_, 0, v_inst_3584_);
lean_closure_set(v___f_3599_, 1, v_toBind_3585_);
lean_closure_set(v___f_3599_, 2, v___f_3598_);
lean_inc_ref(v___f_3599_);
v___f_3600_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3600_, 0, v___f_3599_);
v___x_3608_ = lean_expr_eqv(v_type_3596_, v_type_3593_);
if (v___x_3608_ == 0)
{
lean_inc_ref(v_type_3593_);
lean_dec_ref(v_newHyp_3592_);
lean_dec(v___x_3582_);
lean_dec(v_snd_3581_);
goto v___jp_3601_;
}
else
{
if (v___x_3595_ == 0)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_dec_ref(v___f_3600_);
lean_dec_ref(v___f_3599_);
lean_dec(v_inst_3590_);
lean_dec_ref(v_toMonadRef_3589_);
lean_dec_ref(v_inst_3588_);
lean_dec(v_inst_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec(v_toBind_3585_);
lean_dec_ref(v___x_3580_);
v___x_3609_ = lean_box(0);
v___x_3610_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(v_snd_3581_, v_newHyp_3592_, v___x_3582_, v_toPure_3583_, v___x_3609_);
return v___x_3610_;
}
else
{
lean_inc_ref(v_type_3593_);
lean_dec_ref(v_newHyp_3592_);
lean_dec(v___x_3582_);
lean_dec(v_snd_3581_);
goto v___jp_3601_;
}
}
v___jp_3601_:
{
lean_object* v_getInheritedTraceOptions_3602_; lean_object* v___x_3603_; lean_object* v___f_3604_; lean_object* v___f_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_getInheritedTraceOptions_3602_ = lean_ctor_get(v_inst_3586_, 2);
lean_inc(v_getInheritedTraceOptions_3602_);
v___x_3603_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3585_, 3);
v___f_3604_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7), 5, 4);
lean_closure_set(v___f_3604_, 0, v_toPure_3583_);
lean_closure_set(v___f_3604_, 1, v___x_3603_);
lean_closure_set(v___f_3604_, 2, v_toBind_3585_);
lean_closure_set(v___f_3604_, 3, v_inst_3587_);
v___f_3605_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_3605_, 0, v___f_3599_);
lean_closure_set(v___f_3605_, 1, v___x_3580_);
lean_closure_set(v___f_3605_, 2, v_type_3593_);
lean_closure_set(v___f_3605_, 3, v_inst_3588_);
lean_closure_set(v___f_3605_, 4, v_inst_3586_);
lean_closure_set(v___f_3605_, 5, v_toMonadRef_3589_);
lean_closure_set(v___f_3605_, 6, v_inst_3590_);
lean_closure_set(v___f_3605_, 7, v___x_3603_);
lean_closure_set(v___f_3605_, 8, v_toBind_3585_);
lean_closure_set(v___f_3605_, 9, v___f_3600_);
v___x_3606_ = lean_apply_4(v_toBind_3585_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3602_, v___f_3604_);
v___x_3607_ = lean_apply_4(v_toBind_3585_, lean_box(0), lean_box(0), v___x_3606_, v___f_3605_);
return v___x_3607_;
}
}
else
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
lean_inc_ref(v_value_3594_);
lean_dec_ref(v_newHyp_3592_);
lean_dec(v_inst_3590_);
lean_dec_ref(v_toMonadRef_3589_);
lean_dec_ref(v_inst_3588_);
lean_dec(v_inst_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec(v_toPure_3583_);
lean_dec(v___x_3582_);
lean_dec(v_snd_3581_);
lean_dec_ref(v___x_3580_);
v___x_3611_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3611_, 0, v_value_3594_);
v___x_3612_ = lean_apply_2(v_inst_3584_, lean_box(0), v___x_3611_);
v___x_3613_ = lean_apply_4(v_toBind_3585_, lean_box(0), lean_box(0), v___x_3612_, v___f_3591_);
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object* v___x_3614_, lean_object* v_toPure_3615_, lean_object* v_hyps_3616_, lean_object* v___x_3617_, lean_object* v_inst_3618_, lean_object* v_toBind_3619_, lean_object* v_inst_3620_, lean_object* v_inst_3621_, lean_object* v_inst_3622_, lean_object* v_toMonadRef_3623_, lean_object* v_inst_3624_, lean_object* v_f_3625_, lean_object* v___f_3626_, lean_object* v_next_3627_, lean_object* v_acc_3628_, lean_object* v_h_3629_, lean_object* v_G_3630_){
_start:
{
uint8_t v___x_3631_; 
v___x_3631_ = lean_nat_dec_lt(v_next_3627_, v___x_3614_);
if (v___x_3631_ == 0)
{
lean_object* v___x_3632_; 
lean_dec(v_G_3630_);
lean_dec(v_next_3627_);
lean_dec(v___f_3626_);
lean_dec(v_f_3625_);
lean_dec(v_inst_3624_);
lean_dec_ref(v_toMonadRef_3623_);
lean_dec_ref(v_inst_3622_);
lean_dec(v_inst_3621_);
lean_dec_ref(v_inst_3620_);
lean_dec(v_toBind_3619_);
lean_dec(v_inst_3618_);
lean_dec(v___x_3617_);
v___x_3632_ = lean_apply_2(v_toPure_3615_, lean_box(0), v_acc_3628_);
return v___x_3632_;
}
else
{
lean_object* v_snd_3633_; lean_object* v___f_3634_; lean_object* v___x_3635_; lean_object* v___f_3636_; lean_object* v___x_3637_; lean_object* v___f_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v_snd_3633_ = lean_ctor_get(v_acc_3628_, 1);
lean_inc_n(v_snd_3633_, 2);
lean_dec_ref(v_acc_3628_);
lean_inc(v_next_3627_);
lean_inc_n(v_toPure_3615_, 2);
v___f_3634_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3634_, 0, v_toPure_3615_);
lean_closure_set(v___f_3634_, 1, v_next_3627_);
lean_closure_set(v___f_3634_, 2, v_G_3630_);
v___x_3635_ = lean_box(v___x_3631_);
v___f_3636_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_3636_, 0, v___x_3635_);
lean_closure_set(v___f_3636_, 1, v_snd_3633_);
lean_closure_set(v___f_3636_, 2, v_toPure_3615_);
v___x_3637_ = lean_array_fget_borrowed(v_hyps_3616_, v_next_3627_);
lean_inc_n(v_toBind_3619_, 3);
lean_inc_n(v___x_3637_, 2);
v___f_3638_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9), 13, 12);
lean_closure_set(v___f_3638_, 0, v___x_3637_);
lean_closure_set(v___f_3638_, 1, v_snd_3633_);
lean_closure_set(v___f_3638_, 2, v___x_3617_);
lean_closure_set(v___f_3638_, 3, v_toPure_3615_);
lean_closure_set(v___f_3638_, 4, v_inst_3618_);
lean_closure_set(v___f_3638_, 5, v_toBind_3619_);
lean_closure_set(v___f_3638_, 6, v_inst_3620_);
lean_closure_set(v___f_3638_, 7, v_inst_3621_);
lean_closure_set(v___f_3638_, 8, v_inst_3622_);
lean_closure_set(v___f_3638_, 9, v_toMonadRef_3623_);
lean_closure_set(v___f_3638_, 10, v_inst_3624_);
lean_closure_set(v___f_3638_, 11, v___f_3636_);
v___x_3639_ = lean_apply_2(v_f_3625_, v_next_3627_, v___x_3637_);
v___x_3640_ = lean_apply_4(v_toBind_3619_, lean_box(0), lean_box(0), v___x_3639_, v___f_3638_);
v___x_3641_ = lean_apply_4(v_toBind_3619_, lean_box(0), lean_box(0), v___x_3640_, v___f_3626_);
v___x_3642_ = lean_apply_4(v_toBind_3619_, lean_box(0), lean_box(0), v___x_3641_, v___f_3634_);
return v___x_3642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object** _args){
lean_object* v___x_3643_ = _args[0];
lean_object* v_toPure_3644_ = _args[1];
lean_object* v_hyps_3645_ = _args[2];
lean_object* v___x_3646_ = _args[3];
lean_object* v_inst_3647_ = _args[4];
lean_object* v_toBind_3648_ = _args[5];
lean_object* v_inst_3649_ = _args[6];
lean_object* v_inst_3650_ = _args[7];
lean_object* v_inst_3651_ = _args[8];
lean_object* v_toMonadRef_3652_ = _args[9];
lean_object* v_inst_3653_ = _args[10];
lean_object* v_f_3654_ = _args[11];
lean_object* v___f_3655_ = _args[12];
lean_object* v_next_3656_ = _args[13];
lean_object* v_acc_3657_ = _args[14];
lean_object* v_h_3658_ = _args[15];
lean_object* v_G_3659_ = _args[16];
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(v___x_3643_, v_toPure_3644_, v_hyps_3645_, v___x_3646_, v_inst_3647_, v_toBind_3648_, v_inst_3649_, v_inst_3650_, v_inst_3651_, v_toMonadRef_3652_, v_inst_3653_, v_f_3654_, v___f_3655_, v_next_3656_, v_acc_3657_, v_h_3658_, v_G_3659_);
lean_dec_ref(v_hyps_3645_);
lean_dec(v___x_3643_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object* v_toPure_3661_, lean_object* v_inst_3662_, lean_object* v_toBind_3663_, lean_object* v_inst_3664_, lean_object* v_inst_3665_, lean_object* v_inst_3666_, lean_object* v_toMonadRef_3667_, lean_object* v_inst_3668_, lean_object* v_f_3669_, lean_object* v___f_3670_, lean_object* v___f_3671_, lean_object* v_hyps_3672_){
_start:
{
lean_object* v___x_3673_; lean_object* v_newHyps_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___f_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3673_ = lean_array_get_size(v_hyps_3672_);
v_newHyps_3674_ = lean_mk_empty_array_with_capacity(v___x_3673_);
v___x_3675_ = lean_unsigned_to_nat(0u);
v___x_3676_ = lean_box(0);
lean_inc(v_toBind_3663_);
v___f_3677_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed), 17, 13);
lean_closure_set(v___f_3677_, 0, v___x_3673_);
lean_closure_set(v___f_3677_, 1, v_toPure_3661_);
lean_closure_set(v___f_3677_, 2, v_hyps_3672_);
lean_closure_set(v___f_3677_, 3, v___x_3676_);
lean_closure_set(v___f_3677_, 4, v_inst_3662_);
lean_closure_set(v___f_3677_, 5, v_toBind_3663_);
lean_closure_set(v___f_3677_, 6, v_inst_3664_);
lean_closure_set(v___f_3677_, 7, v_inst_3665_);
lean_closure_set(v___f_3677_, 8, v_inst_3666_);
lean_closure_set(v___f_3677_, 9, v_toMonadRef_3667_);
lean_closure_set(v___f_3677_, 10, v_inst_3668_);
lean_closure_set(v___f_3677_, 11, v_f_3669_);
lean_closure_set(v___f_3677_, 12, v___f_3670_);
v___x_3678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3676_);
lean_ctor_set(v___x_3678_, 1, v_newHyps_3674_);
v___x_3679_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3677_, v___x_3675_, v___x_3678_, lean_box(0));
v___x_3680_ = lean_apply_4(v_toBind_3663_, lean_box(0), lean_box(0), v___x_3679_, v___f_3671_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object* v_inst_3681_, lean_object* v_inst_3682_, lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_f_3687_){
_start:
{
lean_object* v_toApplicative_3688_; lean_object* v_toBind_3689_; lean_object* v_toPure_3690_; lean_object* v_toMonadRef_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___f_3694_; lean_object* v___f_3695_; lean_object* v___f_3696_; lean_object* v___f_3697_; lean_object* v___x_3698_; 
v_toApplicative_3688_ = lean_ctor_get(v_inst_3681_, 0);
v_toBind_3689_ = lean_ctor_get(v_inst_3681_, 1);
lean_inc_n(v_toBind_3689_, 3);
v_toPure_3690_ = lean_ctor_get(v_toApplicative_3688_, 1);
lean_inc_n(v_toPure_3690_, 4);
v_toMonadRef_3691_ = lean_ctor_get(v_inst_3683_, 1);
lean_inc_ref(v_toMonadRef_3691_);
lean_dec_ref(v_inst_3683_);
v___x_3692_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3682_, 2);
v___x_3693_ = lean_apply_2(v_inst_3682_, lean_box(0), v___x_3692_);
v___f_3694_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3694_, 0, v_toPure_3690_);
v___f_3695_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3695_, 0, v_inst_3682_);
lean_closure_set(v___f_3695_, 1, v_toBind_3689_);
lean_closure_set(v___f_3695_, 2, v___f_3694_);
lean_closure_set(v___f_3695_, 3, v_toPure_3690_);
v___f_3696_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3696_, 0, v_toPure_3690_);
v___f_3697_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3697_, 0, v_toPure_3690_);
lean_closure_set(v___f_3697_, 1, v_inst_3682_);
lean_closure_set(v___f_3697_, 2, v_toBind_3689_);
lean_closure_set(v___f_3697_, 3, v_inst_3684_);
lean_closure_set(v___f_3697_, 4, v_inst_3685_);
lean_closure_set(v___f_3697_, 5, v_inst_3681_);
lean_closure_set(v___f_3697_, 6, v_toMonadRef_3691_);
lean_closure_set(v___f_3697_, 7, v_inst_3686_);
lean_closure_set(v___f_3697_, 8, v_f_3687_);
lean_closure_set(v___f_3697_, 9, v___f_3696_);
lean_closure_set(v___f_3697_, 10, v___f_3695_);
v___x_3698_ = lean_apply_4(v_toBind_3689_, lean_box(0), lean_box(0), v___x_3693_, v___f_3697_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object* v_m_3699_, lean_object* v_inst_3700_, lean_object* v_inst_3701_, lean_object* v_inst_3702_, lean_object* v_inst_3703_, lean_object* v_inst_3704_, lean_object* v_inst_3705_, lean_object* v_inst_3706_, lean_object* v_inst_3707_, lean_object* v_f_3708_){
_start:
{
lean_object* v_toApplicative_3709_; lean_object* v_toBind_3710_; lean_object* v_toPure_3711_; lean_object* v_toMonadRef_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___f_3715_; lean_object* v___f_3716_; lean_object* v___f_3717_; lean_object* v___f_3718_; lean_object* v___x_3719_; 
v_toApplicative_3709_ = lean_ctor_get(v_inst_3700_, 0);
v_toBind_3710_ = lean_ctor_get(v_inst_3700_, 1);
lean_inc_n(v_toBind_3710_, 3);
v_toPure_3711_ = lean_ctor_get(v_toApplicative_3709_, 1);
lean_inc_n(v_toPure_3711_, 4);
v_toMonadRef_3712_ = lean_ctor_get(v_inst_3702_, 1);
lean_inc_ref(v_toMonadRef_3712_);
lean_dec_ref(v_inst_3702_);
v___x_3713_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3701_, 2);
v___x_3714_ = lean_apply_2(v_inst_3701_, lean_box(0), v___x_3713_);
v___f_3715_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3715_, 0, v_toPure_3711_);
v___f_3716_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3716_, 0, v_inst_3701_);
lean_closure_set(v___f_3716_, 1, v_toBind_3710_);
lean_closure_set(v___f_3716_, 2, v___f_3715_);
lean_closure_set(v___f_3716_, 3, v_toPure_3711_);
v___f_3717_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3717_, 0, v_toPure_3711_);
v___f_3718_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3718_, 0, v_toPure_3711_);
lean_closure_set(v___f_3718_, 1, v_inst_3701_);
lean_closure_set(v___f_3718_, 2, v_toBind_3710_);
lean_closure_set(v___f_3718_, 3, v_inst_3704_);
lean_closure_set(v___f_3718_, 4, v_inst_3705_);
lean_closure_set(v___f_3718_, 5, v_inst_3700_);
lean_closure_set(v___f_3718_, 6, v_toMonadRef_3712_);
lean_closure_set(v___f_3718_, 7, v_inst_3706_);
lean_closure_set(v___f_3718_, 8, v_f_3708_);
lean_closure_set(v___f_3718_, 9, v___f_3717_);
lean_closure_set(v___f_3718_, 10, v___f_3716_);
v___x_3719_ = lean_apply_4(v_toBind_3710_, lean_box(0), lean_box(0), v___x_3714_, v___f_3718_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object* v_m_3720_, lean_object* v_inst_3721_, lean_object* v_inst_3722_, lean_object* v_inst_3723_, lean_object* v_inst_3724_, lean_object* v_inst_3725_, lean_object* v_inst_3726_, lean_object* v_inst_3727_, lean_object* v_inst_3728_, lean_object* v_f_3729_){
_start:
{
lean_object* v_res_3730_; 
v_res_3730_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(v_m_3720_, v_inst_3721_, v_inst_3722_, v_inst_3723_, v_inst_3724_, v_inst_3725_, v_inst_3726_, v_inst_3727_, v_inst_3728_, v_f_3729_);
lean_dec_ref(v_inst_3728_);
lean_dec_ref(v_inst_3724_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object* v___x_3731_, lean_object* v_snd_3732_, lean_object* v___x_3733_, lean_object* v_toPure_3734_, lean_object* v_inst_3735_, lean_object* v_toBind_3736_, lean_object* v_inst_3737_, lean_object* v_inst_3738_, lean_object* v_toMonadRef_3739_, lean_object* v_inst_3740_, lean_object* v_inst_3741_, lean_object* v___f_3742_, lean_object* v_newHyp_3743_){
_start:
{
lean_object* v_type_3744_; lean_object* v_value_3745_; uint8_t v___x_3746_; 
v_type_3744_ = lean_ctor_get(v_newHyp_3743_, 1);
v_value_3745_ = lean_ctor_get(v_newHyp_3743_, 2);
lean_inc_ref(v_type_3744_);
v___x_3746_ = l_Lean_Expr_isFalse(v_type_3744_);
if (v___x_3746_ == 0)
{
lean_object* v_type_3747_; lean_object* v___f_3748_; lean_object* v___f_3749_; lean_object* v___f_3750_; lean_object* v___f_3751_; uint8_t v___x_3759_; 
lean_dec(v___f_3742_);
v_type_3747_ = lean_ctor_get(v___x_3731_, 1);
lean_inc(v_toPure_3734_);
lean_inc(v___x_3733_);
lean_inc_ref(v_newHyp_3743_);
lean_inc(v_snd_3732_);
v___f_3748_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3748_, 0, v_snd_3732_);
lean_closure_set(v___f_3748_, 1, v_newHyp_3743_);
lean_closure_set(v___f_3748_, 2, v___x_3733_);
lean_closure_set(v___f_3748_, 3, v_toPure_3734_);
v___f_3749_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3749_, 0, v___f_3748_);
lean_inc(v_toBind_3736_);
v___f_3750_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3750_, 0, v_inst_3735_);
lean_closure_set(v___f_3750_, 1, v_toBind_3736_);
lean_closure_set(v___f_3750_, 2, v___f_3749_);
lean_inc_ref(v___f_3750_);
v___f_3751_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3751_, 0, v___f_3750_);
v___x_3759_ = lean_expr_eqv(v_type_3747_, v_type_3744_);
if (v___x_3759_ == 0)
{
lean_inc_ref(v_type_3744_);
lean_dec_ref(v_newHyp_3743_);
lean_dec(v___x_3733_);
lean_dec(v_snd_3732_);
goto v___jp_3752_;
}
else
{
if (v___x_3746_ == 0)
{
lean_object* v___x_3760_; lean_object* v___x_3761_; 
lean_dec_ref(v___f_3751_);
lean_dec_ref(v___f_3750_);
lean_dec(v_inst_3741_);
lean_dec(v_inst_3740_);
lean_dec_ref(v_toMonadRef_3739_);
lean_dec_ref(v_inst_3738_);
lean_dec_ref(v_inst_3737_);
lean_dec(v_toBind_3736_);
lean_dec_ref(v___x_3731_);
v___x_3760_ = lean_box(0);
v___x_3761_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(v_snd_3732_, v_newHyp_3743_, v___x_3733_, v_toPure_3734_, v___x_3760_);
return v___x_3761_;
}
else
{
lean_inc_ref(v_type_3744_);
lean_dec_ref(v_newHyp_3743_);
lean_dec(v___x_3733_);
lean_dec(v_snd_3732_);
goto v___jp_3752_;
}
}
v___jp_3752_:
{
lean_object* v_getInheritedTraceOptions_3753_; lean_object* v___x_3754_; lean_object* v___f_3755_; lean_object* v___f_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v_getInheritedTraceOptions_3753_ = lean_ctor_get(v_inst_3737_, 2);
lean_inc(v_getInheritedTraceOptions_3753_);
v___x_3754_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3736_, 3);
v___f_3755_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_3755_, 0, v___f_3750_);
lean_closure_set(v___f_3755_, 1, v___x_3731_);
lean_closure_set(v___f_3755_, 2, v_type_3744_);
lean_closure_set(v___f_3755_, 3, v_inst_3738_);
lean_closure_set(v___f_3755_, 4, v_inst_3737_);
lean_closure_set(v___f_3755_, 5, v_toMonadRef_3739_);
lean_closure_set(v___f_3755_, 6, v_inst_3740_);
lean_closure_set(v___f_3755_, 7, v___x_3754_);
lean_closure_set(v___f_3755_, 8, v_toBind_3736_);
lean_closure_set(v___f_3755_, 9, v___f_3751_);
v___f_3756_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7), 5, 4);
lean_closure_set(v___f_3756_, 0, v_toPure_3734_);
lean_closure_set(v___f_3756_, 1, v___x_3754_);
lean_closure_set(v___f_3756_, 2, v_toBind_3736_);
lean_closure_set(v___f_3756_, 3, v_inst_3741_);
v___x_3757_ = lean_apply_4(v_toBind_3736_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3753_, v___f_3756_);
v___x_3758_ = lean_apply_4(v_toBind_3736_, lean_box(0), lean_box(0), v___x_3757_, v___f_3755_);
return v___x_3758_;
}
}
else
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
lean_inc_ref(v_value_3745_);
lean_dec_ref(v_newHyp_3743_);
lean_dec(v_inst_3741_);
lean_dec(v_inst_3740_);
lean_dec_ref(v_toMonadRef_3739_);
lean_dec_ref(v_inst_3738_);
lean_dec_ref(v_inst_3737_);
lean_dec(v_toPure_3734_);
lean_dec(v___x_3733_);
lean_dec(v_snd_3732_);
lean_dec_ref(v___x_3731_);
v___x_3762_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3762_, 0, v_value_3745_);
v___x_3763_ = lean_apply_2(v_inst_3735_, lean_box(0), v___x_3762_);
v___x_3764_ = lean_apply_4(v_toBind_3736_, lean_box(0), lean_box(0), v___x_3763_, v___f_3742_);
return v___x_3764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object* v___x_3765_, lean_object* v_toPure_3766_, lean_object* v_hyps_3767_, lean_object* v___x_3768_, lean_object* v_inst_3769_, lean_object* v_toBind_3770_, lean_object* v_inst_3771_, lean_object* v_inst_3772_, lean_object* v_toMonadRef_3773_, lean_object* v_inst_3774_, lean_object* v_inst_3775_, lean_object* v_f_3776_, lean_object* v___f_3777_, lean_object* v_next_3778_, lean_object* v_acc_3779_, lean_object* v_h_3780_, lean_object* v_G_3781_){
_start:
{
uint8_t v___x_3782_; 
v___x_3782_ = lean_nat_dec_lt(v_next_3778_, v___x_3765_);
if (v___x_3782_ == 0)
{
lean_object* v___x_3783_; 
lean_dec(v_G_3781_);
lean_dec(v_next_3778_);
lean_dec(v___f_3777_);
lean_dec(v_f_3776_);
lean_dec(v_inst_3775_);
lean_dec(v_inst_3774_);
lean_dec_ref(v_toMonadRef_3773_);
lean_dec_ref(v_inst_3772_);
lean_dec_ref(v_inst_3771_);
lean_dec(v_toBind_3770_);
lean_dec(v_inst_3769_);
lean_dec(v___x_3768_);
v___x_3783_ = lean_apply_2(v_toPure_3766_, lean_box(0), v_acc_3779_);
return v___x_3783_;
}
else
{
lean_object* v_snd_3784_; lean_object* v___f_3785_; lean_object* v___x_3786_; lean_object* v___f_3787_; lean_object* v___x_3788_; lean_object* v___f_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v_snd_3784_ = lean_ctor_get(v_acc_3779_, 1);
lean_inc_n(v_snd_3784_, 2);
lean_dec_ref(v_acc_3779_);
lean_inc(v_next_3778_);
lean_inc_n(v_toPure_3766_, 2);
v___f_3785_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3785_, 0, v_toPure_3766_);
lean_closure_set(v___f_3785_, 1, v_next_3778_);
lean_closure_set(v___f_3785_, 2, v_G_3781_);
v___x_3786_ = lean_box(v___x_3782_);
v___f_3787_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_3787_, 0, v___x_3786_);
lean_closure_set(v___f_3787_, 1, v_snd_3784_);
lean_closure_set(v___f_3787_, 2, v_toPure_3766_);
v___x_3788_ = lean_array_fget_borrowed(v_hyps_3767_, v_next_3778_);
lean_dec(v_next_3778_);
lean_inc_n(v_toBind_3770_, 3);
lean_inc_n(v___x_3788_, 2);
v___f_3789_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13), 13, 12);
lean_closure_set(v___f_3789_, 0, v___x_3788_);
lean_closure_set(v___f_3789_, 1, v_snd_3784_);
lean_closure_set(v___f_3789_, 2, v___x_3768_);
lean_closure_set(v___f_3789_, 3, v_toPure_3766_);
lean_closure_set(v___f_3789_, 4, v_inst_3769_);
lean_closure_set(v___f_3789_, 5, v_toBind_3770_);
lean_closure_set(v___f_3789_, 6, v_inst_3771_);
lean_closure_set(v___f_3789_, 7, v_inst_3772_);
lean_closure_set(v___f_3789_, 8, v_toMonadRef_3773_);
lean_closure_set(v___f_3789_, 9, v_inst_3774_);
lean_closure_set(v___f_3789_, 10, v_inst_3775_);
lean_closure_set(v___f_3789_, 11, v___f_3787_);
v___x_3790_ = lean_apply_1(v_f_3776_, v___x_3788_);
v___x_3791_ = lean_apply_4(v_toBind_3770_, lean_box(0), lean_box(0), v___x_3790_, v___f_3789_);
v___x_3792_ = lean_apply_4(v_toBind_3770_, lean_box(0), lean_box(0), v___x_3791_, v___f_3777_);
v___x_3793_ = lean_apply_4(v_toBind_3770_, lean_box(0), lean_box(0), v___x_3792_, v___f_3785_);
return v___x_3793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3794_ = _args[0];
lean_object* v_toPure_3795_ = _args[1];
lean_object* v_hyps_3796_ = _args[2];
lean_object* v___x_3797_ = _args[3];
lean_object* v_inst_3798_ = _args[4];
lean_object* v_toBind_3799_ = _args[5];
lean_object* v_inst_3800_ = _args[6];
lean_object* v_inst_3801_ = _args[7];
lean_object* v_toMonadRef_3802_ = _args[8];
lean_object* v_inst_3803_ = _args[9];
lean_object* v_inst_3804_ = _args[10];
lean_object* v_f_3805_ = _args[11];
lean_object* v___f_3806_ = _args[12];
lean_object* v_next_3807_ = _args[13];
lean_object* v_acc_3808_ = _args[14];
lean_object* v_h_3809_ = _args[15];
lean_object* v_G_3810_ = _args[16];
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(v___x_3794_, v_toPure_3795_, v_hyps_3796_, v___x_3797_, v_inst_3798_, v_toBind_3799_, v_inst_3800_, v_inst_3801_, v_toMonadRef_3802_, v_inst_3803_, v_inst_3804_, v_f_3805_, v___f_3806_, v_next_3807_, v_acc_3808_, v_h_3809_, v_G_3810_);
lean_dec_ref(v_hyps_3796_);
lean_dec(v___x_3794_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object* v_toPure_3812_, lean_object* v_inst_3813_, lean_object* v_toBind_3814_, lean_object* v_inst_3815_, lean_object* v_inst_3816_, lean_object* v_toMonadRef_3817_, lean_object* v_inst_3818_, lean_object* v_inst_3819_, lean_object* v_f_3820_, lean_object* v___f_3821_, lean_object* v___f_3822_, lean_object* v_hyps_3823_){
_start:
{
lean_object* v___x_3824_; lean_object* v_newHyps_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___f_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3824_ = lean_array_get_size(v_hyps_3823_);
v_newHyps_3825_ = lean_mk_empty_array_with_capacity(v___x_3824_);
v___x_3826_ = lean_unsigned_to_nat(0u);
v___x_3827_ = lean_box(0);
lean_inc(v_toBind_3814_);
v___f_3828_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed), 17, 13);
lean_closure_set(v___f_3828_, 0, v___x_3824_);
lean_closure_set(v___f_3828_, 1, v_toPure_3812_);
lean_closure_set(v___f_3828_, 2, v_hyps_3823_);
lean_closure_set(v___f_3828_, 3, v___x_3827_);
lean_closure_set(v___f_3828_, 4, v_inst_3813_);
lean_closure_set(v___f_3828_, 5, v_toBind_3814_);
lean_closure_set(v___f_3828_, 6, v_inst_3815_);
lean_closure_set(v___f_3828_, 7, v_inst_3816_);
lean_closure_set(v___f_3828_, 8, v_toMonadRef_3817_);
lean_closure_set(v___f_3828_, 9, v_inst_3818_);
lean_closure_set(v___f_3828_, 10, v_inst_3819_);
lean_closure_set(v___f_3828_, 11, v_f_3820_);
lean_closure_set(v___f_3828_, 12, v___f_3821_);
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3827_);
lean_ctor_set(v___x_3829_, 1, v_newHyps_3825_);
v___x_3830_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3828_, v___x_3826_, v___x_3829_, lean_box(0));
v___x_3831_ = lean_apply_4(v_toBind_3814_, lean_box(0), lean_box(0), v___x_3830_, v___f_3822_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object* v_inst_3832_, lean_object* v_inst_3833_, lean_object* v_inst_3834_, lean_object* v_inst_3835_, lean_object* v_inst_3836_, lean_object* v_inst_3837_, lean_object* v_f_3838_){
_start:
{
lean_object* v_toApplicative_3839_; lean_object* v_toBind_3840_; lean_object* v_toPure_3841_; lean_object* v_toMonadRef_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___f_3845_; lean_object* v___f_3846_; lean_object* v___f_3847_; lean_object* v___f_3848_; lean_object* v___x_3849_; 
v_toApplicative_3839_ = lean_ctor_get(v_inst_3832_, 0);
v_toBind_3840_ = lean_ctor_get(v_inst_3832_, 1);
lean_inc_n(v_toBind_3840_, 3);
v_toPure_3841_ = lean_ctor_get(v_toApplicative_3839_, 1);
lean_inc_n(v_toPure_3841_, 4);
v_toMonadRef_3842_ = lean_ctor_get(v_inst_3834_, 1);
lean_inc_ref(v_toMonadRef_3842_);
lean_dec_ref(v_inst_3834_);
v___x_3843_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3833_, 2);
v___x_3844_ = lean_apply_2(v_inst_3833_, lean_box(0), v___x_3843_);
v___f_3845_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3845_, 0, v_toPure_3841_);
v___f_3846_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3846_, 0, v_inst_3833_);
lean_closure_set(v___f_3846_, 1, v_toBind_3840_);
lean_closure_set(v___f_3846_, 2, v___f_3845_);
lean_closure_set(v___f_3846_, 3, v_toPure_3841_);
v___f_3847_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3847_, 0, v_toPure_3841_);
v___f_3848_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3848_, 0, v_toPure_3841_);
lean_closure_set(v___f_3848_, 1, v_inst_3833_);
lean_closure_set(v___f_3848_, 2, v_toBind_3840_);
lean_closure_set(v___f_3848_, 3, v_inst_3835_);
lean_closure_set(v___f_3848_, 4, v_inst_3832_);
lean_closure_set(v___f_3848_, 5, v_toMonadRef_3842_);
lean_closure_set(v___f_3848_, 6, v_inst_3837_);
lean_closure_set(v___f_3848_, 7, v_inst_3836_);
lean_closure_set(v___f_3848_, 8, v_f_3838_);
lean_closure_set(v___f_3848_, 9, v___f_3847_);
lean_closure_set(v___f_3848_, 10, v___f_3846_);
v___x_3849_ = lean_apply_4(v_toBind_3840_, lean_box(0), lean_box(0), v___x_3844_, v___f_3848_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object* v_m_3850_, lean_object* v_inst_3851_, lean_object* v_inst_3852_, lean_object* v_inst_3853_, lean_object* v_inst_3854_, lean_object* v_inst_3855_, lean_object* v_inst_3856_, lean_object* v_inst_3857_, lean_object* v_inst_3858_, lean_object* v_f_3859_){
_start:
{
lean_object* v_toApplicative_3860_; lean_object* v_toBind_3861_; lean_object* v_toPure_3862_; lean_object* v_toMonadRef_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___f_3866_; lean_object* v___f_3867_; lean_object* v___f_3868_; lean_object* v___f_3869_; lean_object* v___x_3870_; 
v_toApplicative_3860_ = lean_ctor_get(v_inst_3851_, 0);
v_toBind_3861_ = lean_ctor_get(v_inst_3851_, 1);
lean_inc_n(v_toBind_3861_, 3);
v_toPure_3862_ = lean_ctor_get(v_toApplicative_3860_, 1);
lean_inc_n(v_toPure_3862_, 4);
v_toMonadRef_3863_ = lean_ctor_get(v_inst_3853_, 1);
lean_inc_ref(v_toMonadRef_3863_);
lean_dec_ref(v_inst_3853_);
v___x_3864_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3852_, 2);
v___x_3865_ = lean_apply_2(v_inst_3852_, lean_box(0), v___x_3864_);
v___f_3866_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3866_, 0, v_toPure_3862_);
v___f_3867_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3867_, 0, v_inst_3852_);
lean_closure_set(v___f_3867_, 1, v_toBind_3861_);
lean_closure_set(v___f_3867_, 2, v___f_3866_);
lean_closure_set(v___f_3867_, 3, v_toPure_3862_);
v___f_3868_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3868_, 0, v_toPure_3862_);
v___f_3869_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3869_, 0, v_toPure_3862_);
lean_closure_set(v___f_3869_, 1, v_inst_3852_);
lean_closure_set(v___f_3869_, 2, v_toBind_3861_);
lean_closure_set(v___f_3869_, 3, v_inst_3855_);
lean_closure_set(v___f_3869_, 4, v_inst_3851_);
lean_closure_set(v___f_3869_, 5, v_toMonadRef_3863_);
lean_closure_set(v___f_3869_, 6, v_inst_3857_);
lean_closure_set(v___f_3869_, 7, v_inst_3856_);
lean_closure_set(v___f_3869_, 8, v_f_3859_);
lean_closure_set(v___f_3869_, 9, v___f_3868_);
lean_closure_set(v___f_3869_, 10, v___f_3867_);
v___x_3870_ = lean_apply_4(v_toBind_3861_, lean_box(0), lean_box(0), v___x_3865_, v___f_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object* v_m_3871_, lean_object* v_inst_3872_, lean_object* v_inst_3873_, lean_object* v_inst_3874_, lean_object* v_inst_3875_, lean_object* v_inst_3876_, lean_object* v_inst_3877_, lean_object* v_inst_3878_, lean_object* v_inst_3879_, lean_object* v_f_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(v_m_3871_, v_inst_3872_, v_inst_3873_, v_inst_3874_, v_inst_3875_, v_inst_3876_, v_inst_3877_, v_inst_3878_, v_inst_3879_, v_f_3880_);
lean_dec_ref(v_inst_3879_);
lean_dec_ref(v_inst_3875_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object* v_f_3882_, lean_object* v_x_3883_, lean_object* v___y_3884_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = lean_apply_1(v_f_3882_, v___y_3884_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object* v_toApplicative_3886_, lean_object* v_inst_3887_, lean_object* v___f_3888_, lean_object* v_hyps_3889_){
_start:
{
lean_object* v_toPure_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; uint8_t v___x_3894_; 
v_toPure_3890_ = lean_ctor_get(v_toApplicative_3886_, 1);
lean_inc(v_toPure_3890_);
lean_dec_ref(v_toApplicative_3886_);
v___x_3891_ = lean_unsigned_to_nat(0u);
v___x_3892_ = lean_array_get_size(v_hyps_3889_);
v___x_3893_ = lean_box(0);
v___x_3894_ = lean_nat_dec_lt(v___x_3891_, v___x_3892_);
if (v___x_3894_ == 0)
{
lean_object* v___x_3895_; 
lean_dec_ref(v_hyps_3889_);
lean_dec(v___f_3888_);
lean_dec_ref(v_inst_3887_);
v___x_3895_ = lean_apply_2(v_toPure_3890_, lean_box(0), v___x_3893_);
return v___x_3895_;
}
else
{
uint8_t v___x_3896_; 
v___x_3896_ = lean_nat_dec_le(v___x_3892_, v___x_3892_);
if (v___x_3896_ == 0)
{
if (v___x_3894_ == 0)
{
lean_object* v___x_3897_; 
lean_dec_ref(v_hyps_3889_);
lean_dec(v___f_3888_);
lean_dec_ref(v_inst_3887_);
v___x_3897_ = lean_apply_2(v_toPure_3890_, lean_box(0), v___x_3893_);
return v___x_3897_;
}
else
{
size_t v___x_3898_; size_t v___x_3899_; lean_object* v___x_3900_; 
lean_dec(v_toPure_3890_);
v___x_3898_ = ((size_t)0ULL);
v___x_3899_ = lean_usize_of_nat(v___x_3892_);
v___x_3900_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3887_, v___f_3888_, v_hyps_3889_, v___x_3898_, v___x_3899_, v___x_3893_);
return v___x_3900_;
}
}
else
{
size_t v___x_3901_; size_t v___x_3902_; lean_object* v___x_3903_; 
lean_dec(v_toPure_3890_);
v___x_3901_ = ((size_t)0ULL);
v___x_3902_ = lean_usize_of_nat(v___x_3892_);
v___x_3903_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3887_, v___f_3888_, v_hyps_3889_, v___x_3901_, v___x_3902_, v___x_3893_);
return v___x_3903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object* v_inst_3904_, lean_object* v_inst_3905_, lean_object* v_f_3906_){
_start:
{
lean_object* v_toApplicative_3907_; lean_object* v_toBind_3908_; lean_object* v___f_3909_; lean_object* v___f_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v_toApplicative_3907_ = lean_ctor_get(v_inst_3904_, 0);
lean_inc_ref(v_toApplicative_3907_);
v_toBind_3908_ = lean_ctor_get(v_inst_3904_, 1);
lean_inc(v_toBind_3908_);
v___f_3909_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3909_, 0, v_f_3906_);
v___f_3910_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3910_, 0, v_toApplicative_3907_);
lean_closure_set(v___f_3910_, 1, v_inst_3904_);
lean_closure_set(v___f_3910_, 2, v___f_3909_);
v___x_3911_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3912_ = lean_apply_2(v_inst_3905_, lean_box(0), v___x_3911_);
v___x_3913_ = lean_apply_4(v_toBind_3908_, lean_box(0), lean_box(0), v___x_3912_, v___f_3910_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object* v_m_3914_, lean_object* v_inst_3915_, lean_object* v_inst_3916_, lean_object* v_inst_3917_, lean_object* v_f_3918_){
_start:
{
lean_object* v_toApplicative_3919_; lean_object* v_toBind_3920_; lean_object* v___f_3921_; lean_object* v___f_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v_toApplicative_3919_ = lean_ctor_get(v_inst_3915_, 0);
lean_inc_ref(v_toApplicative_3919_);
v_toBind_3920_ = lean_ctor_get(v_inst_3915_, 1);
lean_inc(v_toBind_3920_);
v___f_3921_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3921_, 0, v_f_3918_);
v___f_3922_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3922_, 0, v_toApplicative_3919_);
lean_closure_set(v___f_3922_, 1, v_inst_3915_);
lean_closure_set(v___f_3922_, 2, v___f_3921_);
v___x_3923_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3924_ = lean_apply_2(v_inst_3916_, lean_box(0), v___x_3923_);
v___x_3925_ = lean_apply_4(v_toBind_3920_, lean_box(0), lean_box(0), v___x_3924_, v___f_3922_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object* v_m_3926_, lean_object* v_inst_3927_, lean_object* v_inst_3928_, lean_object* v_inst_3929_, lean_object* v_f_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(v_m_3926_, v_inst_3927_, v_inst_3928_, v_inst_3929_, v_f_3930_);
lean_dec_ref(v_inst_3929_);
return v_res_3931_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3932_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3932_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t v_cacheId_3934_, lean_object* v_methods_3935_, lean_object* v_config_3936_, lean_object* v_hyp_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
lean_object* v___x_3946_; lean_object* v_caches_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v_typeAnalysis_3954_; lean_object* v_target_3955_; lean_object* v_hypotheses_3956_; uint8_t v_didChange_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3998_; 
v___x_3946_ = lean_st_ref_get(v___y_3938_);
v_caches_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc_ref(v_caches_3947_);
lean_dec(v___x_3946_);
v___x_3948_ = lean_unsigned_to_nat(0u);
v___x_3949_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_cacheId_3934_, v_caches_3947_);
v___x_3950_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_3951_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3948_);
lean_ctor_set(v___x_3951_, 1, v___x_3949_);
lean_ctor_set(v___x_3951_, 2, v___x_3950_);
lean_ctor_set(v___x_3951_, 3, v___x_3950_);
v___x_3952_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3934_, v___x_3950_, v_caches_3947_);
v___x_3953_ = lean_st_ref_take(v___y_3938_);
v_typeAnalysis_3954_ = lean_ctor_get(v___x_3953_, 1);
v_target_3955_ = lean_ctor_get(v___x_3953_, 2);
v_hypotheses_3956_ = lean_ctor_get(v___x_3953_, 3);
v_didChange_3957_ = lean_ctor_get_uint8(v___x_3953_, sizeof(void*)*4);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_3998_ == 0)
{
lean_object* v_unused_3999_; 
v_unused_3999_ = lean_ctor_get(v___x_3953_, 0);
lean_dec(v_unused_3999_);
v___x_3959_ = v___x_3953_;
v_isShared_3960_ = v_isSharedCheck_3998_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_hypotheses_3956_);
lean_inc(v_target_3955_);
lean_inc(v_typeAnalysis_3954_);
lean_dec(v___x_3953_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3998_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
lean_ctor_set(v___x_3959_, 0, v___x_3952_);
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3952_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v_typeAnalysis_3954_);
lean_ctor_set(v_reuseFailAlloc_3997_, 2, v_target_3955_);
lean_ctor_set(v_reuseFailAlloc_3997_, 3, v_hypotheses_3956_);
lean_ctor_set_uint8(v_reuseFailAlloc_3997_, sizeof(void*)*4, v_didChange_3957_);
v___x_3962_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
lean_object* v___x_3963_; lean_object* v_type_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3963_ = lean_st_ref_put(v___y_3938_, v___x_3962_);
v_type_3964_ = lean_ctor_get(v_hyp_3937_, 1);
lean_inc_ref(v_type_3964_);
v___x_3965_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_3965_, 0, v_type_3964_);
v___x_3966_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_3965_, v_methods_3935_, v_config_3936_, v___x_3951_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_object* v_a_3967_; lean_object* v_fst_3968_; lean_object* v_snd_3969_; lean_object* v___x_3970_; lean_object* v_caches_3971_; lean_object* v_persistentCache_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v_typeAnalysis_3975_; lean_object* v_target_3976_; lean_object* v_hypotheses_3977_; uint8_t v_didChange_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3987_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3967_);
lean_dec_ref_known(v___x_3966_, 1);
v_fst_3968_ = lean_ctor_get(v_a_3967_, 0);
lean_inc(v_fst_3968_);
v_snd_3969_ = lean_ctor_get(v_a_3967_, 1);
lean_inc(v_snd_3969_);
lean_dec(v_a_3967_);
v___x_3970_ = lean_st_ref_get(v___y_3938_);
v_caches_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc_ref(v_caches_3971_);
lean_dec(v___x_3970_);
v_persistentCache_3972_ = lean_ctor_get(v_snd_3969_, 1);
lean_inc_ref(v_persistentCache_3972_);
lean_dec(v_snd_3969_);
v___x_3973_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3934_, v_persistentCache_3972_, v_caches_3971_);
v___x_3974_ = lean_st_ref_take(v___y_3938_);
v_typeAnalysis_3975_ = lean_ctor_get(v___x_3974_, 1);
v_target_3976_ = lean_ctor_get(v___x_3974_, 2);
v_hypotheses_3977_ = lean_ctor_get(v___x_3974_, 3);
v_didChange_3978_ = lean_ctor_get_uint8(v___x_3974_, sizeof(void*)*4);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3987_ == 0)
{
lean_object* v_unused_3988_; 
v_unused_3988_ = lean_ctor_get(v___x_3974_, 0);
lean_dec(v_unused_3988_);
v___x_3980_ = v___x_3974_;
v_isShared_3981_ = v_isSharedCheck_3987_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_hypotheses_3977_);
lean_inc(v_target_3976_);
lean_inc(v_typeAnalysis_3975_);
lean_dec(v___x_3974_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3987_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
lean_ctor_set(v___x_3980_, 0, v___x_3973_);
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v___x_3973_);
lean_ctor_set(v_reuseFailAlloc_3986_, 1, v_typeAnalysis_3975_);
lean_ctor_set(v_reuseFailAlloc_3986_, 2, v_target_3976_);
lean_ctor_set(v_reuseFailAlloc_3986_, 3, v_hypotheses_3977_);
lean_ctor_set_uint8(v_reuseFailAlloc_3986_, sizeof(void*)*4, v_didChange_3978_);
v___x_3983_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; 
v___x_3984_ = lean_st_ref_put(v___y_3938_, v___x_3983_);
v___x_3985_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_3937_, v_fst_3968_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
return v___x_3985_;
}
}
}
else
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_dec_ref(v_hyp_3937_);
v_a_3989_ = lean_ctor_get(v___x_3966_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3966_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3966_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3966_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object* v_cacheId_4000_, lean_object* v_methods_4001_, lean_object* v_config_4002_, lean_object* v_hyp_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_){
_start:
{
uint8_t v_cacheId_boxed_4012_; lean_object* v_res_4013_; 
v_cacheId_boxed_4012_ = lean_unbox(v_cacheId_4000_);
v_res_4013_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_boxed_4012_, v_methods_4001_, v_config_4002_, v_hyp_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
lean_dec(v___y_4006_);
lean_dec_ref(v___y_4005_);
lean_dec(v___y_4004_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t v_cacheId_4014_, lean_object* v_methods_4015_, lean_object* v_config_4016_, lean_object* v_hyp_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
lean_object* v___x_4030_; 
v___x_4030_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_4014_, v_methods_4015_, v_config_4016_, v_hyp_4017_, v___y_4019_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object* v_cacheId_4031_, lean_object* v_methods_4032_, lean_object* v_config_4033_, lean_object* v_hyp_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
uint8_t v_cacheId_boxed_4047_; lean_object* v_res_4048_; 
v_cacheId_boxed_4047_ = lean_unbox(v_cacheId_4031_);
v_res_4048_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(v_cacheId_boxed_4047_, v_methods_4032_, v_config_4033_, v_hyp_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t v_cacheId_4049_, lean_object* v_methods_4050_, lean_object* v_config_4051_, lean_object* v_hyp_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_){
_start:
{
lean_object* v___x_4061_; lean_object* v_caches_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v_typeAnalysis_4069_; lean_object* v_target_4070_; lean_object* v_hypotheses_4071_; uint8_t v_didChange_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4113_; 
v___x_4061_ = lean_st_ref_get(v___y_4053_);
v_caches_4062_ = lean_ctor_get(v___x_4061_, 0);
lean_inc_ref(v_caches_4062_);
lean_dec(v___x_4061_);
v___x_4063_ = lean_unsigned_to_nat(0u);
v___x_4064_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_cacheId_4049_, v_caches_4062_);
v___x_4065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4063_);
lean_ctor_set(v___x_4065_, 1, v___x_4064_);
v___x_4066_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_4067_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4049_, v___x_4066_, v_caches_4062_);
v___x_4068_ = lean_st_ref_take(v___y_4053_);
v_typeAnalysis_4069_ = lean_ctor_get(v___x_4068_, 1);
v_target_4070_ = lean_ctor_get(v___x_4068_, 2);
v_hypotheses_4071_ = lean_ctor_get(v___x_4068_, 3);
v_didChange_4072_ = lean_ctor_get_uint8(v___x_4068_, sizeof(void*)*4);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4113_ == 0)
{
lean_object* v_unused_4114_; 
v_unused_4114_ = lean_ctor_get(v___x_4068_, 0);
lean_dec(v_unused_4114_);
v___x_4074_ = v___x_4068_;
v_isShared_4075_ = v_isSharedCheck_4113_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_hypotheses_4071_);
lean_inc(v_target_4070_);
lean_inc(v_typeAnalysis_4069_);
lean_dec(v___x_4068_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4113_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
lean_ctor_set(v___x_4074_, 0, v___x_4067_);
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v___x_4067_);
lean_ctor_set(v_reuseFailAlloc_4112_, 1, v_typeAnalysis_4069_);
lean_ctor_set(v_reuseFailAlloc_4112_, 2, v_target_4070_);
lean_ctor_set(v_reuseFailAlloc_4112_, 3, v_hypotheses_4071_);
lean_ctor_set_uint8(v_reuseFailAlloc_4112_, sizeof(void*)*4, v_didChange_4072_);
v___x_4077_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
lean_object* v___x_4078_; lean_object* v_type_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4078_ = lean_st_ref_put(v___y_4053_, v___x_4077_);
v_type_4079_ = lean_ctor_get(v_hyp_4052_, 1);
lean_inc_ref(v_type_4079_);
v___x_4080_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_4080_, 0, v_type_4079_);
v___x_4081_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_4080_, v_methods_4050_, v_config_4051_, v___x_4065_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_);
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_object* v_a_4082_; lean_object* v_fst_4083_; lean_object* v_snd_4084_; lean_object* v___x_4085_; lean_object* v_caches_4086_; lean_object* v_cache_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v_typeAnalysis_4090_; lean_object* v_target_4091_; lean_object* v_hypotheses_4092_; uint8_t v_didChange_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4102_; 
v_a_4082_ = lean_ctor_get(v___x_4081_, 0);
lean_inc(v_a_4082_);
lean_dec_ref_known(v___x_4081_, 1);
v_fst_4083_ = lean_ctor_get(v_a_4082_, 0);
lean_inc(v_fst_4083_);
v_snd_4084_ = lean_ctor_get(v_a_4082_, 1);
lean_inc(v_snd_4084_);
lean_dec(v_a_4082_);
v___x_4085_ = lean_st_ref_get(v___y_4053_);
v_caches_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc_ref(v_caches_4086_);
lean_dec(v___x_4085_);
v_cache_4087_ = lean_ctor_get(v_snd_4084_, 1);
lean_inc_ref(v_cache_4087_);
lean_dec(v_snd_4084_);
v___x_4088_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4049_, v_cache_4087_, v_caches_4086_);
v___x_4089_ = lean_st_ref_take(v___y_4053_);
v_typeAnalysis_4090_ = lean_ctor_get(v___x_4089_, 1);
v_target_4091_ = lean_ctor_get(v___x_4089_, 2);
v_hypotheses_4092_ = lean_ctor_get(v___x_4089_, 3);
v_didChange_4093_ = lean_ctor_get_uint8(v___x_4089_, sizeof(void*)*4);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4102_ == 0)
{
lean_object* v_unused_4103_; 
v_unused_4103_ = lean_ctor_get(v___x_4089_, 0);
lean_dec(v_unused_4103_);
v___x_4095_ = v___x_4089_;
v_isShared_4096_ = v_isSharedCheck_4102_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_hypotheses_4092_);
lean_inc(v_target_4091_);
lean_inc(v_typeAnalysis_4090_);
lean_dec(v___x_4089_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4102_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v___x_4088_);
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v___x_4088_);
lean_ctor_set(v_reuseFailAlloc_4101_, 1, v_typeAnalysis_4090_);
lean_ctor_set(v_reuseFailAlloc_4101_, 2, v_target_4091_);
lean_ctor_set(v_reuseFailAlloc_4101_, 3, v_hypotheses_4092_);
lean_ctor_set_uint8(v_reuseFailAlloc_4101_, sizeof(void*)*4, v_didChange_4093_);
v___x_4098_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4099_ = lean_st_ref_put(v___y_4053_, v___x_4098_);
v___x_4100_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_4052_, v_fst_4083_);
lean_dec(v_fst_4083_);
return v___x_4100_;
}
}
}
else
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4111_; 
lean_dec_ref(v_hyp_4052_);
v_a_4104_ = lean_ctor_get(v___x_4081_, 0);
v_isSharedCheck_4111_ = !lean_is_exclusive(v___x_4081_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4106_ = v___x_4081_;
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v___x_4081_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4109_; 
if (v_isShared_4107_ == 0)
{
v___x_4109_ = v___x_4106_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v_a_4104_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
return v___x_4109_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object* v_cacheId_4115_, lean_object* v_methods_4116_, lean_object* v_config_4117_, lean_object* v_hyp_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
uint8_t v_cacheId_boxed_4127_; lean_object* v_res_4128_; 
v_cacheId_boxed_4127_ = lean_unbox(v_cacheId_4115_);
v_res_4128_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_boxed_4127_, v_methods_4116_, v_config_4117_, v_hyp_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
lean_dec(v___y_4123_);
lean_dec_ref(v___y_4122_);
lean_dec(v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec(v___y_4119_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t v_cacheId_4129_, lean_object* v_methods_4130_, lean_object* v_config_4131_, lean_object* v_hyp_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v___x_4145_; 
v___x_4145_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4129_, v_methods_4130_, v_config_4131_, v_hyp_4132_, v___y_4134_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object* v_cacheId_4146_, lean_object* v_methods_4147_, lean_object* v_config_4148_, lean_object* v_hyp_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_){
_start:
{
uint8_t v_cacheId_boxed_4162_; lean_object* v_res_4163_; 
v_cacheId_boxed_4162_ = lean_unbox(v_cacheId_4146_);
v_res_4163_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(v_cacheId_boxed_4162_, v_methods_4147_, v_config_4148_, v_hyp_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec(v___y_4154_);
lean_dec_ref(v___y_4153_);
lean_dec(v___y_4152_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object* v_snd_4164_, lean_object* v_a_4165_, lean_object* v___x_4166_, lean_object* v_____r_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4180_ = lean_array_push(v_snd_4164_, v_a_4165_);
v___x_4181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4166_);
lean_ctor_set(v___x_4181_, 1, v___x_4180_);
v___x_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4181_);
v___x_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
return v___x_4183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object* v_snd_4184_, lean_object* v_a_4185_, lean_object* v___x_4186_, lean_object* v_____r_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_){
_start:
{
lean_object* v_res_4200_; 
v_res_4200_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4184_, v_a_4185_, v___x_4186_, v_____r_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
lean_dec(v___y_4198_);
lean_dec_ref(v___y_4197_);
lean_dec(v___y_4196_);
lean_dec_ref(v___y_4195_);
lean_dec(v___y_4194_);
lean_dec_ref(v___y_4193_);
lean_dec(v___y_4192_);
lean_dec_ref(v___y_4191_);
lean_dec(v___y_4190_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t v___x_4201_, lean_object* v___f_4202_, lean_object* v_____r_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v___x_4216_; lean_object* v_caches_4217_; lean_object* v_typeAnalysis_4218_; lean_object* v_target_4219_; lean_object* v_hypotheses_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4230_; 
v___x_4216_ = lean_st_ref_take(v___y_4205_);
v_caches_4217_ = lean_ctor_get(v___x_4216_, 0);
v_typeAnalysis_4218_ = lean_ctor_get(v___x_4216_, 1);
v_target_4219_ = lean_ctor_get(v___x_4216_, 2);
v_hypotheses_4220_ = lean_ctor_get(v___x_4216_, 3);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4222_ = v___x_4216_;
v_isShared_4223_ = v_isSharedCheck_4230_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_hypotheses_4220_);
lean_inc(v_target_4219_);
lean_inc(v_typeAnalysis_4218_);
lean_inc(v_caches_4217_);
lean_dec(v___x_4216_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4230_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4224_; lean_object* v___x_4226_; 
v___x_4224_ = lean_box(0);
if (v_isShared_4223_ == 0)
{
v___x_4226_ = v___x_4222_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_caches_4217_);
lean_ctor_set(v_reuseFailAlloc_4229_, 1, v_typeAnalysis_4218_);
lean_ctor_set(v_reuseFailAlloc_4229_, 2, v_target_4219_);
lean_ctor_set(v_reuseFailAlloc_4229_, 3, v_hypotheses_4220_);
v___x_4226_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; 
lean_ctor_set_uint8(v___x_4226_, sizeof(void*)*4, v___x_4201_);
v___x_4227_ = lean_st_ref_put(v___y_4205_, v___x_4226_);
lean_inc(v___y_4214_);
lean_inc_ref(v___y_4213_);
lean_inc(v___y_4212_);
lean_inc_ref(v___y_4211_);
lean_inc(v___y_4210_);
lean_inc_ref(v___y_4209_);
lean_inc(v___y_4208_);
lean_inc_ref(v___y_4207_);
lean_inc(v___y_4206_);
lean_inc(v___y_4205_);
lean_inc_ref(v___y_4204_);
v___x_4228_ = lean_apply_13(v___f_4202_, v___x_4224_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, lean_box(0));
return v___x_4228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object* v___x_4231_, lean_object* v___f_4232_, lean_object* v_____r_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
uint8_t v___x_25621__boxed_4246_; lean_object* v_res_4247_; 
v___x_25621__boxed_4246_ = lean_unbox(v___x_4231_);
v_res_4247_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_25621__boxed_4246_, v___f_4232_, v_____r_4233_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_);
lean_dec(v___y_4244_);
lean_dec_ref(v___y_4243_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
lean_dec(v___y_4236_);
lean_dec(v___y_4235_);
lean_dec_ref(v___y_4234_);
return v_res_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object* v___x_4248_, lean_object* v_hypotheses_4249_, uint8_t v_cacheId_4250_, lean_object* v_methods_4251_, lean_object* v_config_4252_, lean_object* v___x_4253_, lean_object* v___x_4254_, lean_object* v___x_4255_, lean_object* v_toMonadRef_4256_, lean_object* v___f_4257_, lean_object* v_next_4258_, lean_object* v_acc_4259_, lean_object* v_h_4260_, lean_object* v_G_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___y_4275_; uint8_t v___x_4297_; 
v___x_4297_ = lean_nat_dec_lt(v_next_4258_, v___x_4248_);
if (v___x_4297_ == 0)
{
lean_object* v___x_4298_; 
lean_dec_ref(v_G_4261_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
lean_dec(v___x_4253_);
lean_dec_ref(v_config_4252_);
lean_dec_ref(v_methods_4251_);
v___x_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4298_, 0, v_acc_4259_);
return v___x_4298_;
}
else
{
lean_object* v_snd_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4373_; 
v_snd_4299_ = lean_ctor_get(v_acc_4259_, 1);
v_isSharedCheck_4373_ = !lean_is_exclusive(v_acc_4259_);
if (v_isSharedCheck_4373_ == 0)
{
lean_object* v_unused_4374_; 
v_unused_4374_ = lean_ctor_get(v_acc_4259_, 0);
lean_dec(v_unused_4374_);
v___x_4301_ = v_acc_4259_;
v_isShared_4302_ = v_isSharedCheck_4373_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_snd_4299_);
lean_dec(v_acc_4259_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4373_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = lean_array_fget_borrowed(v_hypotheses_4249_, v_next_4258_);
lean_inc(v___x_4303_);
v___x_4304_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_4250_, v_methods_4251_, v_config_4252_, v___x_4303_, v___y_4263_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v_type_4306_; lean_object* v_value_4307_; uint8_t v___x_4308_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc(v_a_4305_);
lean_dec_ref_known(v___x_4304_, 1);
v_type_4306_ = lean_ctor_get(v_a_4305_, 1);
v_value_4307_ = lean_ctor_get(v_a_4305_, 2);
lean_inc_ref(v_type_4306_);
v___x_4308_ = l_Lean_Expr_isFalse(v_type_4306_);
if (v___x_4308_ == 0)
{
lean_object* v_type_4309_; lean_object* v___f_4310_; uint8_t v___x_4340_; 
lean_del_object(v___x_4301_);
v_type_4309_ = lean_ctor_get(v___x_4303_, 1);
lean_inc(v___x_4253_);
lean_inc(v_a_4305_);
lean_inc(v_snd_4299_);
v___f_4310_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4310_, 0, v_snd_4299_);
lean_closure_set(v___f_4310_, 1, v_a_4305_);
lean_closure_set(v___f_4310_, 2, v___x_4253_);
v___x_4340_ = lean_expr_eqv(v_type_4309_, v_type_4306_);
if (v___x_4340_ == 0)
{
lean_inc_ref(v_type_4306_);
lean_dec(v_a_4305_);
lean_dec(v_snd_4299_);
lean_dec(v___x_4253_);
goto v___jp_4314_;
}
else
{
if (v___x_4308_ == 0)
{
lean_object* v___x_4341_; lean_object* v___x_4342_; 
lean_dec_ref(v___f_4310_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
v___x_4341_ = lean_box(0);
v___x_4342_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4299_, v_a_4305_, v___x_4253_, v___x_4341_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
v___y_4275_ = v___x_4342_;
goto v___jp_4274_;
}
else
{
lean_inc_ref(v_type_4306_);
lean_dec(v_a_4305_);
lean_dec(v_snd_4299_);
lean_dec(v___x_4253_);
goto v___jp_4314_;
}
}
v___jp_4311_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4312_ = lean_box(0);
v___x_4313_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4297_, v___f_4310_, v___x_4312_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
v___y_4275_ = v___x_4313_;
goto v___jp_4274_;
}
v___jp_4314_:
{
lean_object* v_toCold_4315_; lean_object* v_options_4316_; uint8_t v_hasTrace_4317_; 
v_toCold_4315_ = lean_ctor_get(v___y_4271_, 0);
v_options_4316_ = lean_ctor_get(v_toCold_4315_, 2);
v_hasTrace_4317_ = lean_ctor_get_uint8(v_options_4316_, sizeof(void*)*1);
if (v_hasTrace_4317_ == 0)
{
lean_dec_ref(v_type_4306_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
goto v___jp_4311_;
}
else
{
lean_object* v_inheritedTraceOptions_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; uint8_t v___x_4321_; 
v_inheritedTraceOptions_4318_ = lean_ctor_get(v_toCold_4315_, 11);
v___x_4319_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4320_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4321_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4318_, v_options_4316_, v___x_4320_);
if (v___x_4321_ == 0)
{
lean_dec_ref(v_type_4306_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
goto v___jp_4311_;
}
else
{
lean_object* v_type_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_25546__overap_4328_; lean_object* v___x_4329_; 
v_type_4322_ = lean_ctor_get(v___x_4303_, 1);
lean_inc_ref(v_type_4322_);
v___x_4323_ = l_Lean_MessageData_ofExpr(v_type_4322_);
v___x_4324_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4325_, 0, v___x_4323_);
lean_ctor_set(v___x_4325_, 1, v___x_4324_);
v___x_4326_ = l_Lean_MessageData_ofExpr(v_type_4306_);
v___x_4327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4325_);
lean_ctor_set(v___x_4327_, 1, v___x_4326_);
v___x_25546__overap_4328_ = l_Lean_addTrace___redArg(v___x_4254_, v___x_4255_, v_toMonadRef_4256_, v___f_4257_, v___x_4319_, v___x_4327_);
lean_inc(v___y_4272_);
lean_inc_ref(v___y_4271_);
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
lean_inc(v___y_4264_);
lean_inc(v___y_4263_);
lean_inc_ref(v___y_4262_);
v___x_4329_ = lean_apply_12(v___x_25546__overap_4328_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, lean_box(0));
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4331_; 
v_a_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_a_4330_);
lean_dec_ref_known(v___x_4329_, 1);
v___x_4331_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4297_, v___f_4310_, v_a_4330_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
v___y_4275_ = v___x_4331_;
goto v___jp_4274_;
}
else
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4339_; 
lean_dec_ref(v___f_4310_);
lean_dec_ref(v_G_4261_);
v_a_4332_ = lean_ctor_get(v___x_4329_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4329_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4334_ = v___x_4329_;
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4329_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4337_; 
if (v_isShared_4335_ == 0)
{
v___x_4337_ = v___x_4334_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v_a_4332_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4343_; 
lean_inc_ref(v_value_4307_);
lean_dec(v_a_4305_);
lean_dec_ref(v_G_4261_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
lean_dec(v___x_4253_);
v___x_4343_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4307_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
if (lean_obj_tag(v___x_4343_) == 0)
{
lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4355_; 
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4343_);
if (v_isSharedCheck_4355_ == 0)
{
lean_object* v_unused_4356_; 
v_unused_4356_ = lean_ctor_get(v___x_4343_, 0);
lean_dec(v_unused_4356_);
v___x_4345_ = v___x_4343_;
v_isShared_4346_ = v_isSharedCheck_4355_;
goto v_resetjp_4344_;
}
else
{
lean_dec(v___x_4343_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4355_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4347_ = lean_box(v___x_4297_);
v___x_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4347_);
if (v_isShared_4302_ == 0)
{
lean_ctor_set(v___x_4301_, 0, v___x_4348_);
v___x_4350_ = v___x_4301_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v___x_4348_);
lean_ctor_set(v_reuseFailAlloc_4354_, 1, v_snd_4299_);
v___x_4350_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
lean_object* v___x_4352_; 
if (v_isShared_4346_ == 0)
{
lean_ctor_set(v___x_4345_, 0, v___x_4350_);
v___x_4352_ = v___x_4345_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v___x_4350_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
lean_del_object(v___x_4301_);
lean_dec(v_snd_4299_);
v_a_4357_ = lean_ctor_get(v___x_4343_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4343_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4343_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4343_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
}
else
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
lean_del_object(v___x_4301_);
lean_dec(v_snd_4299_);
lean_dec_ref(v_G_4261_);
lean_dec(v___f_4257_);
lean_dec_ref(v_toMonadRef_4256_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
lean_dec(v___x_4253_);
v_a_4365_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4367_ = v___x_4304_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v___x_4304_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
}
}
v___jp_4274_:
{
if (lean_obj_tag(v___y_4275_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4288_; 
v_a_4276_ = lean_ctor_get(v___y_4275_, 0);
v_isSharedCheck_4288_ = !lean_is_exclusive(v___y_4275_);
if (v_isSharedCheck_4288_ == 0)
{
v___x_4278_ = v___y_4275_;
v_isShared_4279_ = v_isSharedCheck_4288_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___y_4275_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4288_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
if (lean_obj_tag(v_a_4276_) == 0)
{
lean_object* v_a_4280_; lean_object* v___x_4282_; 
lean_dec_ref(v_G_4261_);
v_a_4280_ = lean_ctor_get(v_a_4276_, 0);
lean_inc(v_a_4280_);
lean_dec_ref_known(v_a_4276_, 1);
if (v_isShared_4279_ == 0)
{
lean_ctor_set(v___x_4278_, 0, v_a_4280_);
v___x_4282_ = v___x_4278_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4280_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
else
{
lean_object* v_a_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
lean_del_object(v___x_4278_);
v_a_4284_ = lean_ctor_get(v_a_4276_, 0);
lean_inc(v_a_4284_);
lean_dec_ref_known(v_a_4276_, 1);
v___x_4285_ = lean_unsigned_to_nat(1u);
v___x_4286_ = lean_nat_add(v_next_4258_, v___x_4285_);
lean_inc(v___y_4272_);
lean_inc_ref(v___y_4271_);
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
lean_inc(v___y_4264_);
lean_inc(v___y_4263_);
lean_inc_ref(v___y_4262_);
v___x_4287_ = lean_apply_16(v_G_4261_, v___x_4286_, v_a_4284_, lean_box(0), lean_box(0), v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, lean_box(0));
return v___x_4287_;
}
}
}
else
{
lean_object* v_a_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4296_; 
lean_dec_ref(v_G_4261_);
v_a_4289_ = lean_ctor_get(v___y_4275_, 0);
v_isSharedCheck_4296_ = !lean_is_exclusive(v___y_4275_);
if (v_isSharedCheck_4296_ == 0)
{
v___x_4291_ = v___y_4275_;
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_a_4289_);
lean_dec(v___y_4275_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4294_; 
if (v_isShared_4292_ == 0)
{
v___x_4294_ = v___x_4291_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v_a_4289_);
v___x_4294_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
return v___x_4294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4375_ = _args[0];
lean_object* v_hypotheses_4376_ = _args[1];
lean_object* v_cacheId_4377_ = _args[2];
lean_object* v_methods_4378_ = _args[3];
lean_object* v_config_4379_ = _args[4];
lean_object* v___x_4380_ = _args[5];
lean_object* v___x_4381_ = _args[6];
lean_object* v___x_4382_ = _args[7];
lean_object* v_toMonadRef_4383_ = _args[8];
lean_object* v___f_4384_ = _args[9];
lean_object* v_next_4385_ = _args[10];
lean_object* v_acc_4386_ = _args[11];
lean_object* v_h_4387_ = _args[12];
lean_object* v_G_4388_ = _args[13];
lean_object* v___y_4389_ = _args[14];
lean_object* v___y_4390_ = _args[15];
lean_object* v___y_4391_ = _args[16];
lean_object* v___y_4392_ = _args[17];
lean_object* v___y_4393_ = _args[18];
lean_object* v___y_4394_ = _args[19];
lean_object* v___y_4395_ = _args[20];
lean_object* v___y_4396_ = _args[21];
lean_object* v___y_4397_ = _args[22];
lean_object* v___y_4398_ = _args[23];
lean_object* v___y_4399_ = _args[24];
lean_object* v___y_4400_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4401_; lean_object* v_res_4402_; 
v_cacheId_boxed_4401_ = lean_unbox(v_cacheId_4377_);
v_res_4402_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(v___x_4375_, v_hypotheses_4376_, v_cacheId_boxed_4401_, v_methods_4378_, v_config_4379_, v___x_4380_, v___x_4381_, v___x_4382_, v_toMonadRef_4383_, v___f_4384_, v_next_4385_, v_acc_4386_, v_h_4387_, v_G_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
lean_dec(v___y_4399_);
lean_dec_ref(v___y_4398_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
lean_dec(v___y_4391_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
lean_dec(v_next_4385_);
lean_dec_ref(v_hypotheses_4376_);
lean_dec(v___x_4375_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t v_cacheId_4403_, lean_object* v_methods_4404_, lean_object* v_config_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v___x_4418_; lean_object* v_toApplicative_4419_; lean_object* v_toFunctor_4420_; lean_object* v_toSeq_4421_; lean_object* v_toSeqLeft_4422_; lean_object* v_toSeqRight_4423_; lean_object* v___f_4424_; lean_object* v___f_4425_; lean_object* v___f_4426_; lean_object* v___f_4427_; lean_object* v___x_4428_; lean_object* v___f_4429_; lean_object* v___f_4430_; lean_object* v___f_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v_toApplicative_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4522_; 
v___x_4418_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_4419_ = lean_ctor_get(v___x_4418_, 0);
v_toFunctor_4420_ = lean_ctor_get(v_toApplicative_4419_, 0);
v_toSeq_4421_ = lean_ctor_get(v_toApplicative_4419_, 2);
v_toSeqLeft_4422_ = lean_ctor_get(v_toApplicative_4419_, 3);
v_toSeqRight_4423_ = lean_ctor_get(v_toApplicative_4419_, 4);
v___f_4424_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_4425_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_4420_, 2);
v___f_4426_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4426_, 0, v_toFunctor_4420_);
v___f_4427_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4427_, 0, v_toFunctor_4420_);
v___x_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4428_, 0, v___f_4426_);
lean_ctor_set(v___x_4428_, 1, v___f_4427_);
lean_inc(v_toSeqRight_4423_);
v___f_4429_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4429_, 0, v_toSeqRight_4423_);
lean_inc(v_toSeqLeft_4422_);
v___f_4430_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4430_, 0, v_toSeqLeft_4422_);
lean_inc(v_toSeq_4421_);
v___f_4431_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4431_, 0, v_toSeq_4421_);
v___x_4432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4432_, 0, v___x_4428_);
lean_ctor_set(v___x_4432_, 1, v___f_4424_);
lean_ctor_set(v___x_4432_, 2, v___f_4431_);
lean_ctor_set(v___x_4432_, 3, v___f_4430_);
lean_ctor_set(v___x_4432_, 4, v___f_4429_);
v___x_4433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4432_);
lean_ctor_set(v___x_4433_, 1, v___f_4425_);
v___x_4434_ = l_StateRefT_x27_instMonad___redArg(v___x_4433_);
v_toApplicative_4435_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4522_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4522_ == 0)
{
lean_object* v_unused_4523_; 
v_unused_4523_ = lean_ctor_get(v___x_4434_, 1);
lean_dec(v_unused_4523_);
v___x_4437_ = v___x_4434_;
v_isShared_4438_ = v_isSharedCheck_4522_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_toApplicative_4435_);
lean_dec(v___x_4434_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4522_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v_toFunctor_4439_; lean_object* v_toSeq_4440_; lean_object* v_toSeqLeft_4441_; lean_object* v_toSeqRight_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4520_; 
v_toFunctor_4439_ = lean_ctor_get(v_toApplicative_4435_, 0);
v_toSeq_4440_ = lean_ctor_get(v_toApplicative_4435_, 2);
v_toSeqLeft_4441_ = lean_ctor_get(v_toApplicative_4435_, 3);
v_toSeqRight_4442_ = lean_ctor_get(v_toApplicative_4435_, 4);
v_isSharedCheck_4520_ = !lean_is_exclusive(v_toApplicative_4435_);
if (v_isSharedCheck_4520_ == 0)
{
lean_object* v_unused_4521_; 
v_unused_4521_ = lean_ctor_get(v_toApplicative_4435_, 1);
lean_dec(v_unused_4521_);
v___x_4444_ = v_toApplicative_4435_;
v_isShared_4445_ = v_isSharedCheck_4520_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_toSeqRight_4442_);
lean_inc(v_toSeqLeft_4441_);
lean_inc(v_toSeq_4440_);
lean_inc(v_toFunctor_4439_);
lean_dec(v_toApplicative_4435_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4520_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___f_4446_; lean_object* v___f_4447_; lean_object* v___f_4448_; lean_object* v___f_4449_; lean_object* v___x_4450_; lean_object* v___f_4451_; lean_object* v___f_4452_; lean_object* v___f_4453_; lean_object* v___x_4455_; 
v___f_4446_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_4447_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_4439_);
v___f_4448_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4448_, 0, v_toFunctor_4439_);
v___f_4449_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4449_, 0, v_toFunctor_4439_);
v___x_4450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___f_4448_);
lean_ctor_set(v___x_4450_, 1, v___f_4449_);
v___f_4451_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4451_, 0, v_toSeqRight_4442_);
v___f_4452_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4452_, 0, v_toSeqLeft_4441_);
v___f_4453_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4453_, 0, v_toSeq_4440_);
if (v_isShared_4445_ == 0)
{
lean_ctor_set(v___x_4444_, 4, v___f_4451_);
lean_ctor_set(v___x_4444_, 3, v___f_4452_);
lean_ctor_set(v___x_4444_, 2, v___f_4453_);
lean_ctor_set(v___x_4444_, 1, v___f_4446_);
lean_ctor_set(v___x_4444_, 0, v___x_4450_);
v___x_4455_ = v___x_4444_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v___x_4450_);
lean_ctor_set(v_reuseFailAlloc_4519_, 1, v___f_4446_);
lean_ctor_set(v_reuseFailAlloc_4519_, 2, v___f_4453_);
lean_ctor_set(v_reuseFailAlloc_4519_, 3, v___f_4452_);
lean_ctor_set(v_reuseFailAlloc_4519_, 4, v___f_4451_);
v___x_4455_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
lean_object* v___x_4457_; 
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 1, v___f_4447_);
lean_ctor_set(v___x_4437_, 0, v___x_4455_);
v___x_4457_ = v___x_4437_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v___x_4455_);
lean_ctor_set(v_reuseFailAlloc_4518_, 1, v___f_4447_);
v___x_4457_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v_toMonadRef_4466_; lean_object* v___f_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v_hypotheses_4470_; lean_object* v___x_4471_; lean_object* v_newHyps_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___f_4476_; lean_object* v___x_4477_; lean_object* v___x_25444__overap_4478_; lean_object* v___x_4479_; 
v___x_4458_ = l_StateRefT_x27_instMonad___redArg(v___x_4457_);
v___x_4459_ = l_ReaderT_instMonad___redArg(v___x_4458_);
v___x_4460_ = l_StateRefT_x27_instMonad___redArg(v___x_4459_);
v___x_4461_ = l_ReaderT_instMonad___redArg(v___x_4460_);
v___x_4462_ = l_ReaderT_instMonad___redArg(v___x_4461_);
v___x_4463_ = l_StateRefT_x27_instMonad___redArg(v___x_4462_);
v___x_4464_ = l_ReaderT_instMonad___redArg(v___x_4463_);
v___x_4465_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4466_ = lean_ctor_get(v___x_4465_, 0);
v___f_4467_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4468_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4469_ = lean_st_ref_get(v___y_4407_);
v_hypotheses_4470_ = lean_ctor_get(v___x_4469_, 3);
lean_inc_ref(v_hypotheses_4470_);
lean_dec(v___x_4469_);
v___x_4471_ = lean_array_get_size(v_hypotheses_4470_);
v_newHyps_4472_ = lean_mk_empty_array_with_capacity(v___x_4471_);
v___x_4473_ = lean_unsigned_to_nat(0u);
v___x_4474_ = lean_box(0);
v___x_4475_ = lean_box(v_cacheId_4403_);
lean_inc_ref(v_toMonadRef_4466_);
v___f_4476_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4476_, 0, v___x_4471_);
lean_closure_set(v___f_4476_, 1, v_hypotheses_4470_);
lean_closure_set(v___f_4476_, 2, v___x_4475_);
lean_closure_set(v___f_4476_, 3, v_methods_4404_);
lean_closure_set(v___f_4476_, 4, v_config_4405_);
lean_closure_set(v___f_4476_, 5, v___x_4474_);
lean_closure_set(v___f_4476_, 6, v___x_4464_);
lean_closure_set(v___f_4476_, 7, v___x_4468_);
lean_closure_set(v___f_4476_, 8, v_toMonadRef_4466_);
lean_closure_set(v___f_4476_, 9, v___f_4467_);
v___x_4477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4477_, 0, v___x_4474_);
lean_ctor_set(v___x_4477_, 1, v_newHyps_4472_);
v___x_25444__overap_4478_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4476_, v___x_4473_, v___x_4477_, lean_box(0));
lean_inc(v___y_4416_);
lean_inc_ref(v___y_4415_);
lean_inc(v___y_4414_);
lean_inc_ref(v___y_4413_);
lean_inc(v___y_4412_);
lean_inc_ref(v___y_4411_);
lean_inc(v___y_4410_);
lean_inc_ref(v___y_4409_);
lean_inc(v___y_4408_);
lean_inc(v___y_4407_);
lean_inc_ref(v___y_4406_);
v___x_4479_ = lean_apply_12(v___x_25444__overap_4478_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_, lean_box(0));
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4509_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4482_ = v___x_4479_;
v_isShared_4483_ = v_isSharedCheck_4509_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4479_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4509_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v_fst_4484_; 
v_fst_4484_ = lean_ctor_get(v_a_4480_, 0);
if (lean_obj_tag(v_fst_4484_) == 0)
{
lean_object* v_snd_4485_; lean_object* v___x_4486_; lean_object* v_caches_4487_; lean_object* v_typeAnalysis_4488_; lean_object* v_target_4489_; uint8_t v_didChange_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4503_; 
v_snd_4485_ = lean_ctor_get(v_a_4480_, 1);
lean_inc(v_snd_4485_);
lean_dec(v_a_4480_);
v___x_4486_ = lean_st_ref_take(v___y_4407_);
v_caches_4487_ = lean_ctor_get(v___x_4486_, 0);
v_typeAnalysis_4488_ = lean_ctor_get(v___x_4486_, 1);
v_target_4489_ = lean_ctor_get(v___x_4486_, 2);
v_didChange_4490_ = lean_ctor_get_uint8(v___x_4486_, sizeof(void*)*4);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4503_ == 0)
{
lean_object* v_unused_4504_; 
v_unused_4504_ = lean_ctor_get(v___x_4486_, 3);
lean_dec(v_unused_4504_);
v___x_4492_ = v___x_4486_;
v_isShared_4493_ = v_isSharedCheck_4503_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_target_4489_);
lean_inc(v_typeAnalysis_4488_);
lean_inc(v_caches_4487_);
lean_dec(v___x_4486_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4503_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 3, v_snd_4485_);
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_caches_4487_);
lean_ctor_set(v_reuseFailAlloc_4502_, 1, v_typeAnalysis_4488_);
lean_ctor_set(v_reuseFailAlloc_4502_, 2, v_target_4489_);
lean_ctor_set(v_reuseFailAlloc_4502_, 3, v_snd_4485_);
lean_ctor_set_uint8(v_reuseFailAlloc_4502_, sizeof(void*)*4, v_didChange_4490_);
v___x_4495_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
lean_object* v___x_4496_; uint8_t v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4500_; 
v___x_4496_ = lean_st_ref_put(v___y_4407_, v___x_4495_);
v___x_4497_ = 0;
v___x_4498_ = lean_box(v___x_4497_);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v___x_4498_);
v___x_4500_ = v___x_4482_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4498_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
return v___x_4500_;
}
}
}
}
else
{
lean_object* v_val_4505_; lean_object* v___x_4507_; 
lean_inc_ref(v_fst_4484_);
lean_dec(v_a_4480_);
v_val_4505_ = lean_ctor_get(v_fst_4484_, 0);
lean_inc(v_val_4505_);
lean_dec_ref_known(v_fst_4484_, 1);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v_val_4505_);
v___x_4507_ = v___x_4482_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_val_4505_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4517_; 
v_a_4510_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4517_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4517_ == 0)
{
v___x_4512_ = v___x_4479_;
v_isShared_4513_ = v_isSharedCheck_4517_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v___x_4479_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4517_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4515_; 
if (v_isShared_4513_ == 0)
{
v___x_4515_ = v___x_4512_;
goto v_reusejp_4514_;
}
else
{
lean_object* v_reuseFailAlloc_4516_; 
v_reuseFailAlloc_4516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4516_, 0, v_a_4510_);
v___x_4515_ = v_reuseFailAlloc_4516_;
goto v_reusejp_4514_;
}
v_reusejp_4514_:
{
return v___x_4515_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object* v_cacheId_4524_, lean_object* v_methods_4525_, lean_object* v_config_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_){
_start:
{
uint8_t v_cacheId_boxed_4539_; lean_object* v_res_4540_; 
v_cacheId_boxed_4539_ = lean_unbox(v_cacheId_4524_);
v_res_4540_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(v_cacheId_boxed_4539_, v_methods_4525_, v_config_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
lean_dec(v___y_4537_);
lean_dec_ref(v___y_4536_);
lean_dec(v___y_4535_);
lean_dec_ref(v___y_4534_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v___y_4529_);
lean_dec(v___y_4528_);
lean_dec_ref(v___y_4527_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object* v___x_4541_, lean_object* v_hypotheses_4542_, uint8_t v_cacheId_4543_, lean_object* v_methods_4544_, lean_object* v_config_4545_, lean_object* v___x_4546_, lean_object* v___x_4547_, lean_object* v___x_4548_, lean_object* v_toMonadRef_4549_, lean_object* v___f_4550_, lean_object* v_next_4551_, lean_object* v_acc_4552_, lean_object* v_h_4553_, lean_object* v_G_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_){
_start:
{
lean_object* v___y_4568_; uint8_t v___x_4590_; 
v___x_4590_ = lean_nat_dec_lt(v_next_4551_, v___x_4541_);
if (v___x_4590_ == 0)
{
lean_object* v___x_4591_; 
lean_dec_ref(v_G_4554_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
lean_dec(v___x_4546_);
lean_dec_ref(v_config_4545_);
lean_dec_ref(v_methods_4544_);
v___x_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4591_, 0, v_acc_4552_);
return v___x_4591_;
}
else
{
lean_object* v_snd_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4666_; 
v_snd_4592_ = lean_ctor_get(v_acc_4552_, 1);
v_isSharedCheck_4666_ = !lean_is_exclusive(v_acc_4552_);
if (v_isSharedCheck_4666_ == 0)
{
lean_object* v_unused_4667_; 
v_unused_4667_ = lean_ctor_get(v_acc_4552_, 0);
lean_dec(v_unused_4667_);
v___x_4594_ = v_acc_4552_;
v_isShared_4595_ = v_isSharedCheck_4666_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_snd_4592_);
lean_dec(v_acc_4552_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4666_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = lean_array_fget_borrowed(v_hypotheses_4542_, v_next_4551_);
lean_inc(v___x_4596_);
v___x_4597_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4543_, v_methods_4544_, v_config_4545_, v___x_4596_, v___y_4556_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
if (lean_obj_tag(v___x_4597_) == 0)
{
lean_object* v_a_4598_; lean_object* v_type_4599_; lean_object* v_value_4600_; uint8_t v___x_4601_; 
v_a_4598_ = lean_ctor_get(v___x_4597_, 0);
lean_inc(v_a_4598_);
lean_dec_ref_known(v___x_4597_, 1);
v_type_4599_ = lean_ctor_get(v_a_4598_, 1);
v_value_4600_ = lean_ctor_get(v_a_4598_, 2);
lean_inc_ref(v_type_4599_);
v___x_4601_ = l_Lean_Expr_isFalse(v_type_4599_);
if (v___x_4601_ == 0)
{
lean_object* v_type_4602_; lean_object* v___f_4603_; uint8_t v___x_4633_; 
lean_del_object(v___x_4594_);
v_type_4602_ = lean_ctor_get(v___x_4596_, 1);
lean_inc(v___x_4546_);
lean_inc(v_a_4598_);
lean_inc(v_snd_4592_);
v___f_4603_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4603_, 0, v_snd_4592_);
lean_closure_set(v___f_4603_, 1, v_a_4598_);
lean_closure_set(v___f_4603_, 2, v___x_4546_);
v___x_4633_ = lean_expr_eqv(v_type_4602_, v_type_4599_);
if (v___x_4633_ == 0)
{
lean_inc_ref(v_type_4599_);
lean_dec(v_a_4598_);
lean_dec(v_snd_4592_);
lean_dec(v___x_4546_);
goto v___jp_4607_;
}
else
{
if (v___x_4601_ == 0)
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref(v___f_4603_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
v___x_4634_ = lean_box(0);
v___x_4635_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4592_, v_a_4598_, v___x_4546_, v___x_4634_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
v___y_4568_ = v___x_4635_;
goto v___jp_4567_;
}
else
{
lean_inc_ref(v_type_4599_);
lean_dec(v_a_4598_);
lean_dec(v_snd_4592_);
lean_dec(v___x_4546_);
goto v___jp_4607_;
}
}
v___jp_4604_:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4605_ = lean_box(0);
v___x_4606_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4590_, v___f_4603_, v___x_4605_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
v___y_4568_ = v___x_4606_;
goto v___jp_4567_;
}
v___jp_4607_:
{
lean_object* v_toCold_4608_; lean_object* v_options_4609_; uint8_t v_hasTrace_4610_; 
v_toCold_4608_ = lean_ctor_get(v___y_4564_, 0);
v_options_4609_ = lean_ctor_get(v_toCold_4608_, 2);
v_hasTrace_4610_ = lean_ctor_get_uint8(v_options_4609_, sizeof(void*)*1);
if (v_hasTrace_4610_ == 0)
{
lean_dec_ref(v_type_4599_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
goto v___jp_4604_;
}
else
{
lean_object* v_inheritedTraceOptions_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; uint8_t v___x_4614_; 
v_inheritedTraceOptions_4611_ = lean_ctor_get(v_toCold_4608_, 11);
v___x_4612_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4613_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4614_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4611_, v_options_4609_, v___x_4613_);
if (v___x_4614_ == 0)
{
lean_dec_ref(v_type_4599_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
goto v___jp_4604_;
}
else
{
lean_object* v_type_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_25546__overap_4621_; lean_object* v___x_4622_; 
v_type_4615_ = lean_ctor_get(v___x_4596_, 1);
lean_inc_ref(v_type_4615_);
v___x_4616_ = l_Lean_MessageData_ofExpr(v_type_4615_);
v___x_4617_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4616_);
lean_ctor_set(v___x_4618_, 1, v___x_4617_);
v___x_4619_ = l_Lean_MessageData_ofExpr(v_type_4599_);
v___x_4620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4620_, 0, v___x_4618_);
lean_ctor_set(v___x_4620_, 1, v___x_4619_);
v___x_25546__overap_4621_ = l_Lean_addTrace___redArg(v___x_4547_, v___x_4548_, v_toMonadRef_4549_, v___f_4550_, v___x_4612_, v___x_4620_);
lean_inc(v___y_4565_);
lean_inc_ref(v___y_4564_);
lean_inc(v___y_4563_);
lean_inc_ref(v___y_4562_);
lean_inc(v___y_4561_);
lean_inc_ref(v___y_4560_);
lean_inc(v___y_4559_);
lean_inc_ref(v___y_4558_);
lean_inc(v___y_4557_);
lean_inc(v___y_4556_);
lean_inc_ref(v___y_4555_);
v___x_4622_ = lean_apply_12(v___x_25546__overap_4621_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, lean_box(0));
if (lean_obj_tag(v___x_4622_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4624_; 
v_a_4623_ = lean_ctor_get(v___x_4622_, 0);
lean_inc(v_a_4623_);
lean_dec_ref_known(v___x_4622_, 1);
v___x_4624_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4590_, v___f_4603_, v_a_4623_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
v___y_4568_ = v___x_4624_;
goto v___jp_4567_;
}
else
{
lean_object* v_a_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4632_; 
lean_dec_ref(v___f_4603_);
lean_dec_ref(v_G_4554_);
v_a_4625_ = lean_ctor_get(v___x_4622_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4622_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4627_ = v___x_4622_;
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_a_4625_);
lean_dec(v___x_4622_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4630_; 
if (v_isShared_4628_ == 0)
{
v___x_4630_ = v___x_4627_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v_a_4625_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4636_; 
lean_inc_ref(v_value_4600_);
lean_dec(v_a_4598_);
lean_dec_ref(v_G_4554_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
lean_dec(v___x_4546_);
v___x_4636_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4600_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4648_; 
v_isSharedCheck_4648_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4648_ == 0)
{
lean_object* v_unused_4649_; 
v_unused_4649_ = lean_ctor_get(v___x_4636_, 0);
lean_dec(v_unused_4649_);
v___x_4638_ = v___x_4636_;
v_isShared_4639_ = v_isSharedCheck_4648_;
goto v_resetjp_4637_;
}
else
{
lean_dec(v___x_4636_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4648_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4643_; 
v___x_4640_ = lean_box(v___x_4590_);
v___x_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4640_);
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 0, v___x_4641_);
v___x_4643_ = v___x_4594_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v___x_4641_);
lean_ctor_set(v_reuseFailAlloc_4647_, 1, v_snd_4592_);
v___x_4643_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
lean_object* v___x_4645_; 
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 0, v___x_4643_);
v___x_4645_ = v___x_4638_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v___x_4643_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_del_object(v___x_4594_);
lean_dec(v_snd_4592_);
v_a_4650_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4636_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4636_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
}
else
{
lean_object* v_a_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4665_; 
lean_del_object(v___x_4594_);
lean_dec(v_snd_4592_);
lean_dec_ref(v_G_4554_);
lean_dec(v___f_4550_);
lean_dec_ref(v_toMonadRef_4549_);
lean_dec_ref(v___x_4548_);
lean_dec_ref(v___x_4547_);
lean_dec(v___x_4546_);
v_a_4658_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4660_ = v___x_4597_;
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_a_4658_);
lean_dec(v___x_4597_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4663_; 
if (v_isShared_4661_ == 0)
{
v___x_4663_ = v___x_4660_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_a_4658_);
v___x_4663_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
return v___x_4663_;
}
}
}
}
}
v___jp_4567_:
{
if (lean_obj_tag(v___y_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4581_; 
v_a_4569_ = lean_ctor_get(v___y_4568_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___y_4568_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4571_ = v___y_4568_;
v_isShared_4572_ = v_isSharedCheck_4581_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___y_4568_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4581_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
if (lean_obj_tag(v_a_4569_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4575_; 
lean_dec_ref(v_G_4554_);
v_a_4573_ = lean_ctor_get(v_a_4569_, 0);
lean_inc(v_a_4573_);
lean_dec_ref_known(v_a_4569_, 1);
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 0, v_a_4573_);
v___x_4575_ = v___x_4571_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_a_4573_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
return v___x_4575_;
}
}
else
{
lean_object* v_a_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; 
lean_del_object(v___x_4571_);
v_a_4577_ = lean_ctor_get(v_a_4569_, 0);
lean_inc(v_a_4577_);
lean_dec_ref_known(v_a_4569_, 1);
v___x_4578_ = lean_unsigned_to_nat(1u);
v___x_4579_ = lean_nat_add(v_next_4551_, v___x_4578_);
lean_inc(v___y_4565_);
lean_inc_ref(v___y_4564_);
lean_inc(v___y_4563_);
lean_inc_ref(v___y_4562_);
lean_inc(v___y_4561_);
lean_inc_ref(v___y_4560_);
lean_inc(v___y_4559_);
lean_inc_ref(v___y_4558_);
lean_inc(v___y_4557_);
lean_inc(v___y_4556_);
lean_inc_ref(v___y_4555_);
v___x_4580_ = lean_apply_16(v_G_4554_, v___x_4579_, v_a_4577_, lean_box(0), lean_box(0), v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, lean_box(0));
return v___x_4580_;
}
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec_ref(v_G_4554_);
v_a_4582_ = lean_ctor_get(v___y_4568_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___y_4568_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___y_4568_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___y_4568_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4587_; 
if (v_isShared_4585_ == 0)
{
v___x_4587_ = v___x_4584_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4582_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4668_ = _args[0];
lean_object* v_hypotheses_4669_ = _args[1];
lean_object* v_cacheId_4670_ = _args[2];
lean_object* v_methods_4671_ = _args[3];
lean_object* v_config_4672_ = _args[4];
lean_object* v___x_4673_ = _args[5];
lean_object* v___x_4674_ = _args[6];
lean_object* v___x_4675_ = _args[7];
lean_object* v_toMonadRef_4676_ = _args[8];
lean_object* v___f_4677_ = _args[9];
lean_object* v_next_4678_ = _args[10];
lean_object* v_acc_4679_ = _args[11];
lean_object* v_h_4680_ = _args[12];
lean_object* v_G_4681_ = _args[13];
lean_object* v___y_4682_ = _args[14];
lean_object* v___y_4683_ = _args[15];
lean_object* v___y_4684_ = _args[16];
lean_object* v___y_4685_ = _args[17];
lean_object* v___y_4686_ = _args[18];
lean_object* v___y_4687_ = _args[19];
lean_object* v___y_4688_ = _args[20];
lean_object* v___y_4689_ = _args[21];
lean_object* v___y_4690_ = _args[22];
lean_object* v___y_4691_ = _args[23];
lean_object* v___y_4692_ = _args[24];
lean_object* v___y_4693_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4694_; lean_object* v_res_4695_; 
v_cacheId_boxed_4694_ = lean_unbox(v_cacheId_4670_);
v_res_4695_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(v___x_4668_, v_hypotheses_4669_, v_cacheId_boxed_4694_, v_methods_4671_, v_config_4672_, v___x_4673_, v___x_4674_, v___x_4675_, v_toMonadRef_4676_, v___f_4677_, v_next_4678_, v_acc_4679_, v_h_4680_, v_G_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec(v___y_4690_);
lean_dec_ref(v___y_4689_);
lean_dec(v___y_4688_);
lean_dec_ref(v___y_4687_);
lean_dec(v___y_4686_);
lean_dec_ref(v___y_4685_);
lean_dec(v___y_4684_);
lean_dec(v___y_4683_);
lean_dec_ref(v___y_4682_);
lean_dec(v_next_4678_);
lean_dec_ref(v_hypotheses_4669_);
lean_dec(v___x_4668_);
return v_res_4695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t v_cacheId_4696_, lean_object* v_methods_4697_, lean_object* v_config_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v___x_4711_; lean_object* v_toApplicative_4712_; lean_object* v_toFunctor_4713_; lean_object* v_toSeq_4714_; lean_object* v_toSeqLeft_4715_; lean_object* v_toSeqRight_4716_; lean_object* v___f_4717_; lean_object* v___f_4718_; lean_object* v___f_4719_; lean_object* v___f_4720_; lean_object* v___x_4721_; lean_object* v___f_4722_; lean_object* v___f_4723_; lean_object* v___f_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v_toApplicative_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4815_; 
v___x_4711_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_4712_ = lean_ctor_get(v___x_4711_, 0);
v_toFunctor_4713_ = lean_ctor_get(v_toApplicative_4712_, 0);
v_toSeq_4714_ = lean_ctor_get(v_toApplicative_4712_, 2);
v_toSeqLeft_4715_ = lean_ctor_get(v_toApplicative_4712_, 3);
v_toSeqRight_4716_ = lean_ctor_get(v_toApplicative_4712_, 4);
v___f_4717_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_4718_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_4713_, 2);
v___f_4719_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4719_, 0, v_toFunctor_4713_);
v___f_4720_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4720_, 0, v_toFunctor_4713_);
v___x_4721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4721_, 0, v___f_4719_);
lean_ctor_set(v___x_4721_, 1, v___f_4720_);
lean_inc(v_toSeqRight_4716_);
v___f_4722_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4722_, 0, v_toSeqRight_4716_);
lean_inc(v_toSeqLeft_4715_);
v___f_4723_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4723_, 0, v_toSeqLeft_4715_);
lean_inc(v_toSeq_4714_);
v___f_4724_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4724_, 0, v_toSeq_4714_);
v___x_4725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4721_);
lean_ctor_set(v___x_4725_, 1, v___f_4717_);
lean_ctor_set(v___x_4725_, 2, v___f_4724_);
lean_ctor_set(v___x_4725_, 3, v___f_4723_);
lean_ctor_set(v___x_4725_, 4, v___f_4722_);
v___x_4726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4725_);
lean_ctor_set(v___x_4726_, 1, v___f_4718_);
v___x_4727_ = l_StateRefT_x27_instMonad___redArg(v___x_4726_);
v_toApplicative_4728_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4815_ == 0)
{
lean_object* v_unused_4816_; 
v_unused_4816_ = lean_ctor_get(v___x_4727_, 1);
lean_dec(v_unused_4816_);
v___x_4730_ = v___x_4727_;
v_isShared_4731_ = v_isSharedCheck_4815_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_toApplicative_4728_);
lean_dec(v___x_4727_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4815_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v_toFunctor_4732_; lean_object* v_toSeq_4733_; lean_object* v_toSeqLeft_4734_; lean_object* v_toSeqRight_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4813_; 
v_toFunctor_4732_ = lean_ctor_get(v_toApplicative_4728_, 0);
v_toSeq_4733_ = lean_ctor_get(v_toApplicative_4728_, 2);
v_toSeqLeft_4734_ = lean_ctor_get(v_toApplicative_4728_, 3);
v_toSeqRight_4735_ = lean_ctor_get(v_toApplicative_4728_, 4);
v_isSharedCheck_4813_ = !lean_is_exclusive(v_toApplicative_4728_);
if (v_isSharedCheck_4813_ == 0)
{
lean_object* v_unused_4814_; 
v_unused_4814_ = lean_ctor_get(v_toApplicative_4728_, 1);
lean_dec(v_unused_4814_);
v___x_4737_ = v_toApplicative_4728_;
v_isShared_4738_ = v_isSharedCheck_4813_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_toSeqRight_4735_);
lean_inc(v_toSeqLeft_4734_);
lean_inc(v_toSeq_4733_);
lean_inc(v_toFunctor_4732_);
lean_dec(v_toApplicative_4728_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4813_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___f_4739_; lean_object* v___f_4740_; lean_object* v___f_4741_; lean_object* v___f_4742_; lean_object* v___x_4743_; lean_object* v___f_4744_; lean_object* v___f_4745_; lean_object* v___f_4746_; lean_object* v___x_4748_; 
v___f_4739_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_4740_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_4732_);
v___f_4741_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4741_, 0, v_toFunctor_4732_);
v___f_4742_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4742_, 0, v_toFunctor_4732_);
v___x_4743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4743_, 0, v___f_4741_);
lean_ctor_set(v___x_4743_, 1, v___f_4742_);
v___f_4744_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4744_, 0, v_toSeqRight_4735_);
v___f_4745_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4745_, 0, v_toSeqLeft_4734_);
v___f_4746_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4746_, 0, v_toSeq_4733_);
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 4, v___f_4744_);
lean_ctor_set(v___x_4737_, 3, v___f_4745_);
lean_ctor_set(v___x_4737_, 2, v___f_4746_);
lean_ctor_set(v___x_4737_, 1, v___f_4739_);
lean_ctor_set(v___x_4737_, 0, v___x_4743_);
v___x_4748_ = v___x_4737_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4812_, 1, v___f_4739_);
lean_ctor_set(v_reuseFailAlloc_4812_, 2, v___f_4746_);
lean_ctor_set(v_reuseFailAlloc_4812_, 3, v___f_4745_);
lean_ctor_set(v_reuseFailAlloc_4812_, 4, v___f_4744_);
v___x_4748_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
lean_object* v___x_4750_; 
if (v_isShared_4731_ == 0)
{
lean_ctor_set(v___x_4730_, 1, v___f_4740_);
lean_ctor_set(v___x_4730_, 0, v___x_4748_);
v___x_4750_ = v___x_4730_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4811_; 
v_reuseFailAlloc_4811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4811_, 0, v___x_4748_);
lean_ctor_set(v_reuseFailAlloc_4811_, 1, v___f_4740_);
v___x_4750_ = v_reuseFailAlloc_4811_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v_toMonadRef_4759_; lean_object* v___f_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v_hypotheses_4763_; lean_object* v___x_4764_; lean_object* v_newHyps_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___f_4769_; lean_object* v___x_4770_; lean_object* v___x_25444__overap_4771_; lean_object* v___x_4772_; 
v___x_4751_ = l_StateRefT_x27_instMonad___redArg(v___x_4750_);
v___x_4752_ = l_ReaderT_instMonad___redArg(v___x_4751_);
v___x_4753_ = l_StateRefT_x27_instMonad___redArg(v___x_4752_);
v___x_4754_ = l_ReaderT_instMonad___redArg(v___x_4753_);
v___x_4755_ = l_ReaderT_instMonad___redArg(v___x_4754_);
v___x_4756_ = l_StateRefT_x27_instMonad___redArg(v___x_4755_);
v___x_4757_ = l_ReaderT_instMonad___redArg(v___x_4756_);
v___x_4758_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4759_ = lean_ctor_get(v___x_4758_, 0);
v___f_4760_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4761_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4762_ = lean_st_ref_get(v___y_4700_);
v_hypotheses_4763_ = lean_ctor_get(v___x_4762_, 3);
lean_inc_ref(v_hypotheses_4763_);
lean_dec(v___x_4762_);
v___x_4764_ = lean_array_get_size(v_hypotheses_4763_);
v_newHyps_4765_ = lean_mk_empty_array_with_capacity(v___x_4764_);
v___x_4766_ = lean_unsigned_to_nat(0u);
v___x_4767_ = lean_box(0);
v___x_4768_ = lean_box(v_cacheId_4696_);
lean_inc_ref(v_toMonadRef_4759_);
v___f_4769_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4769_, 0, v___x_4764_);
lean_closure_set(v___f_4769_, 1, v_hypotheses_4763_);
lean_closure_set(v___f_4769_, 2, v___x_4768_);
lean_closure_set(v___f_4769_, 3, v_methods_4697_);
lean_closure_set(v___f_4769_, 4, v_config_4698_);
lean_closure_set(v___f_4769_, 5, v___x_4767_);
lean_closure_set(v___f_4769_, 6, v___x_4757_);
lean_closure_set(v___f_4769_, 7, v___x_4761_);
lean_closure_set(v___f_4769_, 8, v_toMonadRef_4759_);
lean_closure_set(v___f_4769_, 9, v___f_4760_);
v___x_4770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4770_, 0, v___x_4767_);
lean_ctor_set(v___x_4770_, 1, v_newHyps_4765_);
v___x_25444__overap_4771_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4769_, v___x_4766_, v___x_4770_, lean_box(0));
lean_inc(v___y_4709_);
lean_inc_ref(v___y_4708_);
lean_inc(v___y_4707_);
lean_inc_ref(v___y_4706_);
lean_inc(v___y_4705_);
lean_inc_ref(v___y_4704_);
lean_inc(v___y_4703_);
lean_inc_ref(v___y_4702_);
lean_inc(v___y_4701_);
lean_inc(v___y_4700_);
lean_inc_ref(v___y_4699_);
v___x_4772_ = lean_apply_12(v___x_25444__overap_4771_, v___y_4699_, v___y_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, lean_box(0));
if (lean_obj_tag(v___x_4772_) == 0)
{
lean_object* v_a_4773_; lean_object* v___x_4775_; uint8_t v_isShared_4776_; uint8_t v_isSharedCheck_4802_; 
v_a_4773_ = lean_ctor_get(v___x_4772_, 0);
v_isSharedCheck_4802_ = !lean_is_exclusive(v___x_4772_);
if (v_isSharedCheck_4802_ == 0)
{
v___x_4775_ = v___x_4772_;
v_isShared_4776_ = v_isSharedCheck_4802_;
goto v_resetjp_4774_;
}
else
{
lean_inc(v_a_4773_);
lean_dec(v___x_4772_);
v___x_4775_ = lean_box(0);
v_isShared_4776_ = v_isSharedCheck_4802_;
goto v_resetjp_4774_;
}
v_resetjp_4774_:
{
lean_object* v_fst_4777_; 
v_fst_4777_ = lean_ctor_get(v_a_4773_, 0);
if (lean_obj_tag(v_fst_4777_) == 0)
{
lean_object* v_snd_4778_; lean_object* v___x_4779_; lean_object* v_caches_4780_; lean_object* v_typeAnalysis_4781_; lean_object* v_target_4782_; uint8_t v_didChange_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4796_; 
v_snd_4778_ = lean_ctor_get(v_a_4773_, 1);
lean_inc(v_snd_4778_);
lean_dec(v_a_4773_);
v___x_4779_ = lean_st_ref_take(v___y_4700_);
v_caches_4780_ = lean_ctor_get(v___x_4779_, 0);
v_typeAnalysis_4781_ = lean_ctor_get(v___x_4779_, 1);
v_target_4782_ = lean_ctor_get(v___x_4779_, 2);
v_didChange_4783_ = lean_ctor_get_uint8(v___x_4779_, sizeof(void*)*4);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4796_ == 0)
{
lean_object* v_unused_4797_; 
v_unused_4797_ = lean_ctor_get(v___x_4779_, 3);
lean_dec(v_unused_4797_);
v___x_4785_ = v___x_4779_;
v_isShared_4786_ = v_isSharedCheck_4796_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_target_4782_);
lean_inc(v_typeAnalysis_4781_);
lean_inc(v_caches_4780_);
lean_dec(v___x_4779_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4796_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v___x_4788_; 
if (v_isShared_4786_ == 0)
{
lean_ctor_set(v___x_4785_, 3, v_snd_4778_);
v___x_4788_ = v___x_4785_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4795_; 
v_reuseFailAlloc_4795_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4795_, 0, v_caches_4780_);
lean_ctor_set(v_reuseFailAlloc_4795_, 1, v_typeAnalysis_4781_);
lean_ctor_set(v_reuseFailAlloc_4795_, 2, v_target_4782_);
lean_ctor_set(v_reuseFailAlloc_4795_, 3, v_snd_4778_);
lean_ctor_set_uint8(v_reuseFailAlloc_4795_, sizeof(void*)*4, v_didChange_4783_);
v___x_4788_ = v_reuseFailAlloc_4795_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
lean_object* v___x_4789_; uint8_t v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4793_; 
v___x_4789_ = lean_st_ref_put(v___y_4700_, v___x_4788_);
v___x_4790_ = 0;
v___x_4791_ = lean_box(v___x_4790_);
if (v_isShared_4776_ == 0)
{
lean_ctor_set(v___x_4775_, 0, v___x_4791_);
v___x_4793_ = v___x_4775_;
goto v_reusejp_4792_;
}
else
{
lean_object* v_reuseFailAlloc_4794_; 
v_reuseFailAlloc_4794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4794_, 0, v___x_4791_);
v___x_4793_ = v_reuseFailAlloc_4794_;
goto v_reusejp_4792_;
}
v_reusejp_4792_:
{
return v___x_4793_;
}
}
}
}
else
{
lean_object* v_val_4798_; lean_object* v___x_4800_; 
lean_inc_ref(v_fst_4777_);
lean_dec(v_a_4773_);
v_val_4798_ = lean_ctor_get(v_fst_4777_, 0);
lean_inc(v_val_4798_);
lean_dec_ref_known(v_fst_4777_, 1);
if (v_isShared_4776_ == 0)
{
lean_ctor_set(v___x_4775_, 0, v_val_4798_);
v___x_4800_ = v___x_4775_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v_val_4798_);
v___x_4800_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
return v___x_4800_;
}
}
}
}
else
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4810_; 
v_a_4803_ = lean_ctor_get(v___x_4772_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4772_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4805_ = v___x_4772_;
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v___x_4772_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object* v_cacheId_4817_, lean_object* v_methods_4818_, lean_object* v_config_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_){
_start:
{
uint8_t v_cacheId_boxed_4832_; lean_object* v_res_4833_; 
v_cacheId_boxed_4832_ = lean_unbox(v_cacheId_4817_);
v_res_4833_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(v_cacheId_boxed_4832_, v_methods_4818_, v_config_4819_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
lean_dec(v___y_4830_);
lean_dec_ref(v___y_4829_);
lean_dec(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
lean_dec(v___y_4824_);
lean_dec_ref(v___y_4823_);
lean_dec(v___y_4822_);
lean_dec(v___y_4821_);
lean_dec_ref(v___y_4820_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object* v_msgData_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_){
_start:
{
lean_object* v___x_4840_; lean_object* v_env_4841_; lean_object* v___x_4842_; lean_object* v_toCold_4843_; lean_object* v_mctx_4844_; lean_object* v_lctx_4845_; lean_object* v_options_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v___x_4840_ = lean_st_ref_get(v___y_4838_);
v_env_4841_ = lean_ctor_get(v___x_4840_, 0);
lean_inc_ref(v_env_4841_);
lean_dec(v___x_4840_);
v___x_4842_ = lean_st_ref_get(v___y_4836_);
v_toCold_4843_ = lean_ctor_get(v___y_4837_, 0);
v_mctx_4844_ = lean_ctor_get(v___x_4842_, 0);
lean_inc_ref(v_mctx_4844_);
lean_dec(v___x_4842_);
v_lctx_4845_ = lean_ctor_get(v___y_4835_, 2);
v_options_4846_ = lean_ctor_get(v_toCold_4843_, 2);
lean_inc_ref(v_options_4846_);
lean_inc_ref(v_lctx_4845_);
v___x_4847_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4847_, 0, v_env_4841_);
lean_ctor_set(v___x_4847_, 1, v_mctx_4844_);
lean_ctor_set(v___x_4847_, 2, v_lctx_4845_);
lean_ctor_set(v___x_4847_, 3, v_options_4846_);
v___x_4848_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4848_, 0, v___x_4847_);
lean_ctor_set(v___x_4848_, 1, v_msgData_4834_);
v___x_4849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4849_, 0, v___x_4848_);
return v___x_4849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object* v_msgData_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_){
_start:
{
lean_object* v_res_4856_; 
v_res_4856_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msgData_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
return v_res_4856_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4857_; double v___x_4858_; 
v___x_4857_ = lean_unsigned_to_nat(0u);
v___x_4858_ = lean_float_of_nat(v___x_4857_);
return v___x_4858_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object* v_cls_4862_, lean_object* v_msg_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v_ref_4869_; lean_object* v___x_4870_; lean_object* v_a_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4915_; 
v_ref_4869_ = lean_ctor_get(v___y_4866_, 2);
v___x_4870_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_4863_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4873_ = v___x_4870_;
v_isShared_4874_ = v_isSharedCheck_4915_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_a_4871_);
lean_dec(v___x_4870_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4915_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
lean_object* v___x_4875_; lean_object* v_traceState_4876_; lean_object* v_env_4877_; lean_object* v_nextMacroScope_4878_; lean_object* v_ngen_4879_; lean_object* v_auxDeclNGen_4880_; lean_object* v_cache_4881_; lean_object* v_messages_4882_; lean_object* v_infoState_4883_; lean_object* v_snapshotTasks_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4914_; 
v___x_4875_ = lean_st_ref_take(v___y_4867_);
v_traceState_4876_ = lean_ctor_get(v___x_4875_, 4);
v_env_4877_ = lean_ctor_get(v___x_4875_, 0);
v_nextMacroScope_4878_ = lean_ctor_get(v___x_4875_, 1);
v_ngen_4879_ = lean_ctor_get(v___x_4875_, 2);
v_auxDeclNGen_4880_ = lean_ctor_get(v___x_4875_, 3);
v_cache_4881_ = lean_ctor_get(v___x_4875_, 5);
v_messages_4882_ = lean_ctor_get(v___x_4875_, 6);
v_infoState_4883_ = lean_ctor_get(v___x_4875_, 7);
v_snapshotTasks_4884_ = lean_ctor_get(v___x_4875_, 8);
v_isSharedCheck_4914_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_4914_ == 0)
{
v___x_4886_ = v___x_4875_;
v_isShared_4887_ = v_isSharedCheck_4914_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_snapshotTasks_4884_);
lean_inc(v_infoState_4883_);
lean_inc(v_messages_4882_);
lean_inc(v_cache_4881_);
lean_inc(v_traceState_4876_);
lean_inc(v_auxDeclNGen_4880_);
lean_inc(v_ngen_4879_);
lean_inc(v_nextMacroScope_4878_);
lean_inc(v_env_4877_);
lean_dec(v___x_4875_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4914_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
uint64_t v_tid_4888_; lean_object* v_traces_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4913_; 
v_tid_4888_ = lean_ctor_get_uint64(v_traceState_4876_, sizeof(void*)*1);
v_traces_4889_ = lean_ctor_get(v_traceState_4876_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v_traceState_4876_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4891_ = v_traceState_4876_;
v_isShared_4892_ = v_isSharedCheck_4913_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_traces_4889_);
lean_dec(v_traceState_4876_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4913_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; double v___x_4895_; uint8_t v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4904_; 
v___x_4893_ = lean_box(0);
v___x_4894_ = lean_box(0);
v___x_4895_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_4896_ = 0;
v___x_4897_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_4898_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4898_, 0, v_cls_4862_);
lean_ctor_set(v___x_4898_, 1, v___x_4894_);
lean_ctor_set(v___x_4898_, 2, v___x_4897_);
lean_ctor_set_float(v___x_4898_, sizeof(void*)*3, v___x_4895_);
lean_ctor_set_float(v___x_4898_, sizeof(void*)*3 + 8, v___x_4895_);
lean_ctor_set_uint8(v___x_4898_, sizeof(void*)*3 + 16, v___x_4896_);
v___x_4899_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_4900_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4898_);
lean_ctor_set(v___x_4900_, 1, v_a_4871_);
lean_ctor_set(v___x_4900_, 2, v___x_4899_);
lean_inc(v_ref_4869_);
v___x_4901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4901_, 0, v_ref_4869_);
lean_ctor_set(v___x_4901_, 1, v___x_4900_);
v___x_4902_ = l_Lean_PersistentArray_push___redArg(v_traces_4889_, v___x_4901_);
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 0, v___x_4902_);
v___x_4904_ = v___x_4891_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4912_; 
v_reuseFailAlloc_4912_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4912_, 0, v___x_4902_);
lean_ctor_set_uint64(v_reuseFailAlloc_4912_, sizeof(void*)*1, v_tid_4888_);
v___x_4904_ = v_reuseFailAlloc_4912_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
lean_object* v___x_4906_; 
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 4, v___x_4904_);
v___x_4906_ = v___x_4886_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v_env_4877_);
lean_ctor_set(v_reuseFailAlloc_4911_, 1, v_nextMacroScope_4878_);
lean_ctor_set(v_reuseFailAlloc_4911_, 2, v_ngen_4879_);
lean_ctor_set(v_reuseFailAlloc_4911_, 3, v_auxDeclNGen_4880_);
lean_ctor_set(v_reuseFailAlloc_4911_, 4, v___x_4904_);
lean_ctor_set(v_reuseFailAlloc_4911_, 5, v_cache_4881_);
lean_ctor_set(v_reuseFailAlloc_4911_, 6, v_messages_4882_);
lean_ctor_set(v_reuseFailAlloc_4911_, 7, v_infoState_4883_);
lean_ctor_set(v_reuseFailAlloc_4911_, 8, v_snapshotTasks_4884_);
v___x_4906_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
lean_object* v___x_4907_; lean_object* v___x_4909_; 
v___x_4907_ = lean_st_ref_put(v___y_4867_, v___x_4906_);
if (v_isShared_4874_ == 0)
{
lean_ctor_set(v___x_4873_, 0, v___x_4893_);
v___x_4909_ = v___x_4873_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v___x_4893_);
v___x_4909_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4908_;
}
v_reusejp_4908_:
{
return v___x_4909_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_4916_, lean_object* v_msg_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_4916_, v_msg_4917_, v___y_4918_, v___y_4919_, v___y_4920_, v___y_4921_);
lean_dec(v___y_4921_);
lean_dec_ref(v___y_4920_);
lean_dec(v___y_4919_);
lean_dec_ref(v___y_4918_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t v___x_4924_, lean_object* v___f_4925_, lean_object* v_____r_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
lean_object* v___x_4940_; lean_object* v_caches_4941_; lean_object* v_typeAnalysis_4942_; lean_object* v_target_4943_; lean_object* v_hypotheses_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4954_; 
v___x_4940_ = lean_st_ref_take(v___y_4929_);
v_caches_4941_ = lean_ctor_get(v___x_4940_, 0);
v_typeAnalysis_4942_ = lean_ctor_get(v___x_4940_, 1);
v_target_4943_ = lean_ctor_get(v___x_4940_, 2);
v_hypotheses_4944_ = lean_ctor_get(v___x_4940_, 3);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4940_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4946_ = v___x_4940_;
v_isShared_4947_ = v_isSharedCheck_4954_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_hypotheses_4944_);
lean_inc(v_target_4943_);
lean_inc(v_typeAnalysis_4942_);
lean_inc(v_caches_4941_);
lean_dec(v___x_4940_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4954_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4948_; lean_object* v___x_4950_; 
v___x_4948_ = lean_box(0);
if (v_isShared_4947_ == 0)
{
v___x_4950_ = v___x_4946_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_caches_4941_);
lean_ctor_set(v_reuseFailAlloc_4953_, 1, v_typeAnalysis_4942_);
lean_ctor_set(v_reuseFailAlloc_4953_, 2, v_target_4943_);
lean_ctor_set(v_reuseFailAlloc_4953_, 3, v_hypotheses_4944_);
v___x_4950_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
lean_object* v___x_4951_; lean_object* v___x_4952_; 
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*4, v___x_4924_);
v___x_4951_ = lean_st_ref_put(v___y_4929_, v___x_4950_);
lean_inc(v___y_4938_);
lean_inc_ref(v___y_4937_);
lean_inc(v___y_4936_);
lean_inc_ref(v___y_4935_);
lean_inc(v___y_4934_);
lean_inc_ref(v___y_4933_);
lean_inc(v___y_4932_);
lean_inc_ref(v___y_4931_);
lean_inc(v___y_4930_);
lean_inc(v___y_4929_);
lean_inc_ref(v___y_4928_);
lean_inc(v___y_4927_);
v___x_4952_ = lean_apply_14(v___f_4925_, v___x_4948_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_, v___y_4937_, v___y_4938_, lean_box(0));
return v___x_4952_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object* v___x_4955_, lean_object* v___f_4956_, lean_object* v_____r_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_){
_start:
{
uint8_t v___x_40433__boxed_4971_; lean_object* v_res_4972_; 
v___x_40433__boxed_4971_ = lean_unbox(v___x_4955_);
v_res_4972_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_40433__boxed_4971_, v___f_4956_, v_____r_4957_, v___y_4958_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_);
lean_dec(v___y_4969_);
lean_dec_ref(v___y_4968_);
lean_dec(v___y_4967_);
lean_dec_ref(v___y_4966_);
lean_dec(v___y_4965_);
lean_dec_ref(v___y_4964_);
lean_dec(v___y_4963_);
lean_dec_ref(v___y_4962_);
lean_dec(v___y_4961_);
lean_dec(v___y_4960_);
lean_dec_ref(v___y_4959_);
lean_dec(v___y_4958_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object* v_snd_4973_, lean_object* v_a_4974_, lean_object* v___x_4975_, lean_object* v_____r_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_){
_start:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4990_ = lean_array_push(v_snd_4973_, v_a_4974_);
v___x_4991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4975_);
lean_ctor_set(v___x_4991_, 1, v___x_4990_);
v___x_4992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4991_);
v___x_4993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4992_);
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_snd_4994_ = _args[0];
lean_object* v_a_4995_ = _args[1];
lean_object* v___x_4996_ = _args[2];
lean_object* v_____r_4997_ = _args[3];
lean_object* v___y_4998_ = _args[4];
lean_object* v___y_4999_ = _args[5];
lean_object* v___y_5000_ = _args[6];
lean_object* v___y_5001_ = _args[7];
lean_object* v___y_5002_ = _args[8];
lean_object* v___y_5003_ = _args[9];
lean_object* v___y_5004_ = _args[10];
lean_object* v___y_5005_ = _args[11];
lean_object* v___y_5006_ = _args[12];
lean_object* v___y_5007_ = _args[13];
lean_object* v___y_5008_ = _args[14];
lean_object* v___y_5009_ = _args[15];
lean_object* v___y_5010_ = _args[16];
_start:
{
lean_object* v_res_5011_; 
v_res_5011_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_4994_, v_a_4995_, v___x_4996_, v_____r_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_);
lean_dec(v___y_5009_);
lean_dec_ref(v___y_5008_);
lean_dec(v___y_5007_);
lean_dec_ref(v___y_5006_);
lean_dec(v___y_5005_);
lean_dec_ref(v___y_5004_);
lean_dec(v___y_5003_);
lean_dec_ref(v___y_5002_);
lean_dec(v___y_5001_);
lean_dec(v___y_5000_);
lean_dec_ref(v___y_4999_);
lean_dec(v___y_4998_);
return v_res_5011_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_5012_, lean_object* v___x_5013_, lean_object* v_methods_5014_, lean_object* v_config_5015_, lean_object* v_a_5016_, lean_object* v_b_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_){
_start:
{
lean_object* v___y_5032_; uint8_t v___x_5054_; 
v___x_5054_ = lean_nat_dec_lt(v_a_5016_, v_upperBound_5012_);
if (v___x_5054_ == 0)
{
lean_object* v___x_5055_; 
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v___x_5055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5055_, 0, v_b_5017_);
return v___x_5055_;
}
else
{
lean_object* v_snd_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5155_; 
v_snd_5056_ = lean_ctor_get(v_b_5017_, 1);
v_isSharedCheck_5155_ = !lean_is_exclusive(v_b_5017_);
if (v_isSharedCheck_5155_ == 0)
{
lean_object* v_unused_5156_; 
v_unused_5156_ = lean_ctor_get(v_b_5017_, 0);
lean_dec(v_unused_5156_);
v___x_5058_ = v_b_5017_;
v_isShared_5059_ = v_isSharedCheck_5155_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_snd_5056_);
lean_dec(v_b_5017_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5155_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v_type_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5060_ = lean_box(0);
v___x_5061_ = lean_array_fget_borrowed(v___x_5013_, v_a_5016_);
v___x_5062_ = lean_st_ref_take(v___y_5018_);
v___x_5063_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_5064_ = lean_st_ref_put(v___y_5018_, v___x_5063_);
v_type_5065_ = lean_ctor_get(v___x_5061_, 1);
v___x_5066_ = lean_unsigned_to_nat(0u);
v___x_5067_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5067_, 0, v___x_5066_);
lean_ctor_set(v___x_5067_, 1, v___x_5062_);
lean_ctor_set(v___x_5067_, 2, v___x_5063_);
lean_ctor_set(v___x_5067_, 3, v___x_5063_);
lean_inc_ref(v_type_5065_);
v___x_5068_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_5068_, 0, v_type_5065_);
lean_inc_ref(v_config_5015_);
lean_inc_ref(v_methods_5014_);
v___x_5069_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_5068_, v_methods_5014_, v_config_5015_, v___x_5067_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v_snd_5071_; lean_object* v_fst_5072_; lean_object* v___x_5074_; uint8_t v_isShared_5075_; uint8_t v_isSharedCheck_5146_; 
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
lean_inc(v_a_5070_);
lean_dec_ref_known(v___x_5069_, 1);
v_snd_5071_ = lean_ctor_get(v_a_5070_, 1);
v_fst_5072_ = lean_ctor_get(v_a_5070_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v_a_5070_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5074_ = v_a_5070_;
v_isShared_5075_ = v_isSharedCheck_5146_;
goto v_resetjp_5073_;
}
else
{
lean_inc(v_snd_5071_);
lean_inc(v_fst_5072_);
lean_dec(v_a_5070_);
v___x_5074_ = lean_box(0);
v_isShared_5075_ = v_isSharedCheck_5146_;
goto v_resetjp_5073_;
}
v_resetjp_5073_:
{
lean_object* v_persistentCache_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; 
v_persistentCache_5076_ = lean_ctor_get(v_snd_5071_, 1);
lean_inc_ref(v_persistentCache_5076_);
lean_dec(v_snd_5071_);
v___x_5077_ = lean_st_ref_swap(v___y_5018_, v_persistentCache_5076_);
lean_dec(v___x_5077_);
lean_inc(v___x_5061_);
v___x_5078_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_5061_, v_fst_5072_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_object* v_a_5079_; lean_object* v_type_5080_; lean_object* v_value_5081_; uint8_t v___x_5082_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_a_5079_);
lean_dec_ref_known(v___x_5078_, 1);
v_type_5080_ = lean_ctor_get(v_a_5079_, 1);
v_value_5081_ = lean_ctor_get(v_a_5079_, 2);
lean_inc_ref(v_type_5080_);
v___x_5082_ = l_Lean_Expr_isFalse(v_type_5080_);
if (v___x_5082_ == 0)
{
lean_object* v___f_5083_; uint8_t v___x_5113_; 
lean_del_object(v___x_5074_);
lean_inc(v_a_5079_);
lean_inc(v_snd_5056_);
v___f_5083_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5083_, 0, v_snd_5056_);
lean_closure_set(v___f_5083_, 1, v_a_5079_);
lean_closure_set(v___f_5083_, 2, v___x_5060_);
v___x_5113_ = lean_expr_eqv(v_type_5065_, v_type_5080_);
if (v___x_5113_ == 0)
{
lean_inc_ref(v_type_5080_);
lean_dec(v_a_5079_);
lean_dec(v_snd_5056_);
goto v___jp_5087_;
}
else
{
if (v___x_5082_ == 0)
{
lean_object* v___x_5114_; lean_object* v___x_5115_; 
lean_dec_ref(v___f_5083_);
lean_del_object(v___x_5058_);
v___x_5114_ = lean_box(0);
v___x_5115_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5056_, v_a_5079_, v___x_5060_, v___x_5114_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
v___y_5032_ = v___x_5115_;
goto v___jp_5031_;
}
else
{
lean_inc_ref(v_type_5080_);
lean_dec(v_a_5079_);
lean_dec(v_snd_5056_);
goto v___jp_5087_;
}
}
v___jp_5084_:
{
lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5085_ = lean_box(0);
v___x_5086_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5054_, v___f_5083_, v___x_5085_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
v___y_5032_ = v___x_5086_;
goto v___jp_5031_;
}
v___jp_5087_:
{
lean_object* v_toCold_5088_; lean_object* v_options_5089_; uint8_t v_hasTrace_5090_; 
v_toCold_5088_ = lean_ctor_get(v___y_5028_, 0);
v_options_5089_ = lean_ctor_get(v_toCold_5088_, 2);
v_hasTrace_5090_ = lean_ctor_get_uint8(v_options_5089_, sizeof(void*)*1);
if (v_hasTrace_5090_ == 0)
{
lean_dec_ref(v_type_5080_);
lean_del_object(v___x_5058_);
goto v___jp_5084_;
}
else
{
lean_object* v_inheritedTraceOptions_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; uint8_t v___x_5094_; 
v_inheritedTraceOptions_5091_ = lean_ctor_get(v_toCold_5088_, 11);
v___x_5092_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5093_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5094_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5091_, v_options_5089_, v___x_5093_);
if (v___x_5094_ == 0)
{
lean_dec_ref(v_type_5080_);
lean_del_object(v___x_5058_);
goto v___jp_5084_;
}
else
{
lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5098_; 
lean_inc_ref(v_type_5065_);
v___x_5095_ = l_Lean_MessageData_ofExpr(v_type_5065_);
v___x_5096_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5059_ == 0)
{
lean_ctor_set_tag(v___x_5058_, 7);
lean_ctor_set(v___x_5058_, 1, v___x_5096_);
lean_ctor_set(v___x_5058_, 0, v___x_5095_);
v___x_5098_ = v___x_5058_;
goto v_reusejp_5097_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v___x_5095_);
lean_ctor_set(v_reuseFailAlloc_5112_, 1, v___x_5096_);
v___x_5098_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5097_;
}
v_reusejp_5097_:
{
lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; 
v___x_5099_ = l_Lean_MessageData_ofExpr(v_type_5080_);
v___x_5100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5098_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v___x_5092_, v___x_5100_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; lean_object* v___x_5103_; 
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
v___x_5103_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5054_, v___f_5083_, v_a_5102_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
v___y_5032_ = v___x_5103_;
goto v___jp_5031_;
}
else
{
lean_object* v_a_5104_; lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5111_; 
lean_dec_ref(v___f_5083_);
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v_a_5104_ = lean_ctor_get(v___x_5101_, 0);
v_isSharedCheck_5111_ = !lean_is_exclusive(v___x_5101_);
if (v_isSharedCheck_5111_ == 0)
{
v___x_5106_ = v___x_5101_;
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
else
{
lean_inc(v_a_5104_);
lean_dec(v___x_5101_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
lean_object* v___x_5109_; 
if (v_isShared_5107_ == 0)
{
v___x_5109_ = v___x_5106_;
goto v_reusejp_5108_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v_a_5104_);
v___x_5109_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5108_;
}
v_reusejp_5108_:
{
return v___x_5109_;
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
lean_object* v___x_5116_; 
lean_inc_ref(v_value_5081_);
lean_dec(v_a_5079_);
lean_del_object(v___x_5058_);
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v___x_5116_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5081_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
if (lean_obj_tag(v___x_5116_) == 0)
{
lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5128_; 
v_isSharedCheck_5128_ = !lean_is_exclusive(v___x_5116_);
if (v_isSharedCheck_5128_ == 0)
{
lean_object* v_unused_5129_; 
v_unused_5129_ = lean_ctor_get(v___x_5116_, 0);
lean_dec(v_unused_5129_);
v___x_5118_ = v___x_5116_;
v_isShared_5119_ = v_isSharedCheck_5128_;
goto v_resetjp_5117_;
}
else
{
lean_dec(v___x_5116_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5128_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5123_; 
v___x_5120_ = lean_box(v___x_5054_);
v___x_5121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5121_, 0, v___x_5120_);
if (v_isShared_5075_ == 0)
{
lean_ctor_set(v___x_5074_, 1, v_snd_5056_);
lean_ctor_set(v___x_5074_, 0, v___x_5121_);
v___x_5123_ = v___x_5074_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5127_; 
v_reuseFailAlloc_5127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5127_, 0, v___x_5121_);
lean_ctor_set(v_reuseFailAlloc_5127_, 1, v_snd_5056_);
v___x_5123_ = v_reuseFailAlloc_5127_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
lean_object* v___x_5125_; 
if (v_isShared_5119_ == 0)
{
lean_ctor_set(v___x_5118_, 0, v___x_5123_);
v___x_5125_ = v___x_5118_;
goto v_reusejp_5124_;
}
else
{
lean_object* v_reuseFailAlloc_5126_; 
v_reuseFailAlloc_5126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5126_, 0, v___x_5123_);
v___x_5125_ = v_reuseFailAlloc_5126_;
goto v_reusejp_5124_;
}
v_reusejp_5124_:
{
return v___x_5125_;
}
}
}
}
else
{
lean_object* v_a_5130_; lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5137_; 
lean_del_object(v___x_5074_);
lean_dec(v_snd_5056_);
v_a_5130_ = lean_ctor_get(v___x_5116_, 0);
v_isSharedCheck_5137_ = !lean_is_exclusive(v___x_5116_);
if (v_isSharedCheck_5137_ == 0)
{
v___x_5132_ = v___x_5116_;
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
else
{
lean_inc(v_a_5130_);
lean_dec(v___x_5116_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___x_5135_; 
if (v_isShared_5133_ == 0)
{
v___x_5135_ = v___x_5132_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5136_; 
v_reuseFailAlloc_5136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5136_, 0, v_a_5130_);
v___x_5135_ = v_reuseFailAlloc_5136_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
return v___x_5135_;
}
}
}
}
}
else
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5145_; 
lean_del_object(v___x_5074_);
lean_del_object(v___x_5058_);
lean_dec(v_snd_5056_);
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v_a_5138_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5140_ = v___x_5078_;
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5078_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5143_; 
if (v_isShared_5141_ == 0)
{
v___x_5143_ = v___x_5140_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_a_5138_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
lean_del_object(v___x_5058_);
lean_dec(v_snd_5056_);
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v_a_5147_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_5069_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5069_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
}
v___jp_5031_:
{
if (lean_obj_tag(v___y_5032_) == 0)
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5045_; 
v_a_5033_ = lean_ctor_get(v___y_5032_, 0);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___y_5032_);
if (v_isSharedCheck_5045_ == 0)
{
v___x_5035_ = v___y_5032_;
v_isShared_5036_ = v_isSharedCheck_5045_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___y_5032_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5045_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
if (lean_obj_tag(v_a_5033_) == 0)
{
lean_object* v_a_5037_; lean_object* v___x_5039_; 
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v_a_5037_ = lean_ctor_get(v_a_5033_, 0);
lean_inc(v_a_5037_);
lean_dec_ref_known(v_a_5033_, 1);
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 0, v_a_5037_);
v___x_5039_ = v___x_5035_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_a_5037_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
else
{
lean_object* v_a_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
lean_del_object(v___x_5035_);
v_a_5041_ = lean_ctor_get(v_a_5033_, 0);
lean_inc(v_a_5041_);
lean_dec_ref_known(v_a_5033_, 1);
v___x_5042_ = lean_unsigned_to_nat(1u);
v___x_5043_ = lean_nat_add(v_a_5016_, v___x_5042_);
lean_dec(v_a_5016_);
v_a_5016_ = v___x_5043_;
v_b_5017_ = v_a_5041_;
goto _start;
}
}
}
else
{
lean_object* v_a_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5053_; 
lean_dec(v_a_5016_);
lean_dec_ref(v_config_5015_);
lean_dec_ref(v_methods_5014_);
v_a_5046_ = lean_ctor_get(v___y_5032_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___y_5032_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5048_ = v___y_5032_;
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_a_5046_);
lean_dec(v___y_5032_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5053_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
lean_object* v___x_5051_; 
if (v_isShared_5049_ == 0)
{
v___x_5051_ = v___x_5048_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_a_5046_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
return v___x_5051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5157_ = _args[0];
lean_object* v___x_5158_ = _args[1];
lean_object* v_methods_5159_ = _args[2];
lean_object* v_config_5160_ = _args[3];
lean_object* v_a_5161_ = _args[4];
lean_object* v_b_5162_ = _args[5];
lean_object* v___y_5163_ = _args[6];
lean_object* v___y_5164_ = _args[7];
lean_object* v___y_5165_ = _args[8];
lean_object* v___y_5166_ = _args[9];
lean_object* v___y_5167_ = _args[10];
lean_object* v___y_5168_ = _args[11];
lean_object* v___y_5169_ = _args[12];
lean_object* v___y_5170_ = _args[13];
lean_object* v___y_5171_ = _args[14];
lean_object* v___y_5172_ = _args[15];
lean_object* v___y_5173_ = _args[16];
lean_object* v___y_5174_ = _args[17];
lean_object* v___y_5175_ = _args[18];
_start:
{
lean_object* v_res_5176_; 
v_res_5176_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5157_, v___x_5158_, v_methods_5159_, v_config_5160_, v_a_5161_, v_b_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_, v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_);
lean_dec(v___y_5174_);
lean_dec_ref(v___y_5173_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
lean_dec(v___y_5170_);
lean_dec_ref(v___y_5169_);
lean_dec(v___y_5168_);
lean_dec_ref(v___y_5167_);
lean_dec(v___y_5166_);
lean_dec(v___y_5165_);
lean_dec_ref(v___y_5164_);
lean_dec(v___y_5163_);
lean_dec_ref(v___x_5158_);
lean_dec(v_upperBound_5157_);
return v_res_5176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object* v_methods_5177_, lean_object* v_config_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_){
_start:
{
lean_object* v___x_5192_; lean_object* v_hypotheses_5193_; lean_object* v___x_5194_; lean_object* v_newHyps_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v___x_5192_ = lean_st_ref_get(v___y_5181_);
v_hypotheses_5193_ = lean_ctor_get(v___x_5192_, 3);
lean_inc_ref(v_hypotheses_5193_);
lean_dec(v___x_5192_);
v___x_5194_ = lean_array_get_size(v_hypotheses_5193_);
v_newHyps_5195_ = lean_mk_empty_array_with_capacity(v___x_5194_);
v___x_5196_ = lean_unsigned_to_nat(0u);
v___x_5197_ = lean_box(0);
v___x_5198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
lean_ctor_set(v___x_5198_, 1, v_newHyps_5195_);
v___x_5199_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v___x_5194_, v_hypotheses_5193_, v_methods_5177_, v_config_5178_, v___x_5196_, v___x_5198_, v___y_5179_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_, v___y_5184_, v___y_5185_, v___y_5186_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_);
lean_dec_ref(v_hypotheses_5193_);
if (lean_obj_tag(v___x_5199_) == 0)
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5229_; 
v_a_5200_ = lean_ctor_get(v___x_5199_, 0);
v_isSharedCheck_5229_ = !lean_is_exclusive(v___x_5199_);
if (v_isSharedCheck_5229_ == 0)
{
v___x_5202_ = v___x_5199_;
v_isShared_5203_ = v_isSharedCheck_5229_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5199_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5229_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v_fst_5204_; 
v_fst_5204_ = lean_ctor_get(v_a_5200_, 0);
if (lean_obj_tag(v_fst_5204_) == 0)
{
lean_object* v_snd_5205_; lean_object* v___x_5206_; lean_object* v_caches_5207_; lean_object* v_typeAnalysis_5208_; lean_object* v_target_5209_; uint8_t v_didChange_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5223_; 
v_snd_5205_ = lean_ctor_get(v_a_5200_, 1);
lean_inc(v_snd_5205_);
lean_dec(v_a_5200_);
v___x_5206_ = lean_st_ref_take(v___y_5181_);
v_caches_5207_ = lean_ctor_get(v___x_5206_, 0);
v_typeAnalysis_5208_ = lean_ctor_get(v___x_5206_, 1);
v_target_5209_ = lean_ctor_get(v___x_5206_, 2);
v_didChange_5210_ = lean_ctor_get_uint8(v___x_5206_, sizeof(void*)*4);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5206_);
if (v_isSharedCheck_5223_ == 0)
{
lean_object* v_unused_5224_; 
v_unused_5224_ = lean_ctor_get(v___x_5206_, 3);
lean_dec(v_unused_5224_);
v___x_5212_ = v___x_5206_;
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_target_5209_);
lean_inc(v_typeAnalysis_5208_);
lean_inc(v_caches_5207_);
lean_dec(v___x_5206_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5215_; 
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 3, v_snd_5205_);
v___x_5215_ = v___x_5212_;
goto v_reusejp_5214_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_caches_5207_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v_typeAnalysis_5208_);
lean_ctor_set(v_reuseFailAlloc_5222_, 2, v_target_5209_);
lean_ctor_set(v_reuseFailAlloc_5222_, 3, v_snd_5205_);
lean_ctor_set_uint8(v_reuseFailAlloc_5222_, sizeof(void*)*4, v_didChange_5210_);
v___x_5215_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5214_;
}
v_reusejp_5214_:
{
lean_object* v___x_5216_; uint8_t v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5220_; 
v___x_5216_ = lean_st_ref_put(v___y_5181_, v___x_5215_);
v___x_5217_ = 0;
v___x_5218_ = lean_box(v___x_5217_);
if (v_isShared_5203_ == 0)
{
lean_ctor_set(v___x_5202_, 0, v___x_5218_);
v___x_5220_ = v___x_5202_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5218_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
}
else
{
lean_object* v_val_5225_; lean_object* v___x_5227_; 
lean_inc_ref(v_fst_5204_);
lean_dec(v_a_5200_);
v_val_5225_ = lean_ctor_get(v_fst_5204_, 0);
lean_inc(v_val_5225_);
lean_dec_ref_known(v_fst_5204_, 1);
if (v_isShared_5203_ == 0)
{
lean_ctor_set(v___x_5202_, 0, v_val_5225_);
v___x_5227_ = v___x_5202_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v_val_5225_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
return v___x_5227_;
}
}
}
}
else
{
lean_object* v_a_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5237_; 
v_a_5230_ = lean_ctor_get(v___x_5199_, 0);
v_isSharedCheck_5237_ = !lean_is_exclusive(v___x_5199_);
if (v_isSharedCheck_5237_ == 0)
{
v___x_5232_ = v___x_5199_;
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_a_5230_);
lean_dec(v___x_5199_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v___x_5235_; 
if (v_isShared_5233_ == 0)
{
v___x_5235_ = v___x_5232_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_a_5230_);
v___x_5235_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
return v___x_5235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object* v_methods_5238_, lean_object* v_config_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_){
_start:
{
lean_object* v_res_5253_; 
v_res_5253_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5238_, v_config_5239_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_);
lean_dec(v___y_5251_);
lean_dec_ref(v___y_5250_);
lean_dec(v___y_5249_);
lean_dec_ref(v___y_5248_);
lean_dec(v___y_5247_);
lean_dec_ref(v___y_5246_);
lean_dec(v___y_5245_);
lean_dec_ref(v___y_5244_);
lean_dec(v___y_5243_);
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
lean_dec(v___y_5240_);
return v_res_5253_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object* v_cls_5254_, lean_object* v_msg_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
lean_object* v___x_5269_; 
v___x_5269_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_5254_, v_msg_5255_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_);
return v___x_5269_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object* v_cls_5270_, lean_object* v_msg_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(v_cls_5270_, v_msg_5271_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_);
lean_dec(v___y_5283_);
lean_dec_ref(v___y_5282_);
lean_dec(v___y_5281_);
lean_dec_ref(v___y_5280_);
lean_dec(v___y_5279_);
lean_dec_ref(v___y_5278_);
lean_dec(v___y_5277_);
lean_dec_ref(v___y_5276_);
lean_dec(v___y_5275_);
lean_dec(v___y_5274_);
lean_dec_ref(v___y_5273_);
lean_dec(v___y_5272_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object* v_upperBound_5286_, lean_object* v___x_5287_, lean_object* v_methods_5288_, lean_object* v_config_5289_, lean_object* v_inst_5290_, lean_object* v_R_5291_, lean_object* v_a_5292_, lean_object* v_b_5293_, lean_object* v_c_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_){
_start:
{
lean_object* v___x_5308_; 
v___x_5308_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5286_, v___x_5287_, v_methods_5288_, v_config_5289_, v_a_5292_, v_b_5293_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_);
return v___x_5308_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5309_ = _args[0];
lean_object* v___x_5310_ = _args[1];
lean_object* v_methods_5311_ = _args[2];
lean_object* v_config_5312_ = _args[3];
lean_object* v_inst_5313_ = _args[4];
lean_object* v_R_5314_ = _args[5];
lean_object* v_a_5315_ = _args[6];
lean_object* v_b_5316_ = _args[7];
lean_object* v_c_5317_ = _args[8];
lean_object* v___y_5318_ = _args[9];
lean_object* v___y_5319_ = _args[10];
lean_object* v___y_5320_ = _args[11];
lean_object* v___y_5321_ = _args[12];
lean_object* v___y_5322_ = _args[13];
lean_object* v___y_5323_ = _args[14];
lean_object* v___y_5324_ = _args[15];
lean_object* v___y_5325_ = _args[16];
lean_object* v___y_5326_ = _args[17];
lean_object* v___y_5327_ = _args[18];
lean_object* v___y_5328_ = _args[19];
lean_object* v___y_5329_ = _args[20];
lean_object* v___y_5330_ = _args[21];
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(v_upperBound_5309_, v___x_5310_, v_methods_5311_, v_config_5312_, v_inst_5313_, v_R_5314_, v_a_5315_, v_b_5316_, v_c_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
lean_dec(v___y_5321_);
lean_dec(v___y_5320_);
lean_dec_ref(v___y_5319_);
lean_dec(v___y_5318_);
lean_dec_ref(v___x_5310_);
lean_dec(v_upperBound_5309_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object* v_methods_5332_, lean_object* v_config_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_){
_start:
{
lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v___x_5346_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_5347_ = lean_st_mk_ref(v___x_5346_);
v___x_5348_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5332_, v_config_5333_, v___x_5347_, v___y_5334_, v___y_5335_, v___y_5336_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_);
if (lean_obj_tag(v___x_5348_) == 0)
{
lean_object* v_a_5349_; lean_object* v___x_5351_; uint8_t v_isShared_5352_; uint8_t v_isSharedCheck_5357_; 
v_a_5349_ = lean_ctor_get(v___x_5348_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5348_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5351_ = v___x_5348_;
v_isShared_5352_ = v_isSharedCheck_5357_;
goto v_resetjp_5350_;
}
else
{
lean_inc(v_a_5349_);
lean_dec(v___x_5348_);
v___x_5351_ = lean_box(0);
v_isShared_5352_ = v_isSharedCheck_5357_;
goto v_resetjp_5350_;
}
v_resetjp_5350_:
{
lean_object* v___x_5353_; lean_object* v___x_5355_; 
v___x_5353_ = lean_st_ref_get(v___x_5347_);
lean_dec(v___x_5347_);
lean_dec(v___x_5353_);
if (v_isShared_5352_ == 0)
{
v___x_5355_ = v___x_5351_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5349_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
else
{
lean_dec(v___x_5347_);
return v___x_5348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object* v_methods_5358_, lean_object* v_config_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v_res_5372_; 
v_res_5372_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(v_methods_5358_, v_config_5359_, v___y_5360_, v___y_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_, v___y_5370_);
lean_dec(v___y_5370_);
lean_dec_ref(v___y_5369_);
lean_dec(v___y_5368_);
lean_dec_ref(v___y_5367_);
lean_dec(v___y_5366_);
lean_dec_ref(v___y_5365_);
lean_dec(v___y_5364_);
lean_dec_ref(v___y_5363_);
lean_dec(v___y_5362_);
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5360_);
return v_res_5372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object* v_cls_5373_, lean_object* v_msg_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_){
_start:
{
lean_object* v_ref_5380_; lean_object* v___x_5381_; lean_object* v_a_5382_; lean_object* v___x_5384_; uint8_t v_isShared_5385_; uint8_t v_isSharedCheck_5426_; 
v_ref_5380_ = lean_ctor_get(v___y_5377_, 2);
v___x_5381_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_);
v_a_5382_ = lean_ctor_get(v___x_5381_, 0);
v_isSharedCheck_5426_ = !lean_is_exclusive(v___x_5381_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5384_ = v___x_5381_;
v_isShared_5385_ = v_isSharedCheck_5426_;
goto v_resetjp_5383_;
}
else
{
lean_inc(v_a_5382_);
lean_dec(v___x_5381_);
v___x_5384_ = lean_box(0);
v_isShared_5385_ = v_isSharedCheck_5426_;
goto v_resetjp_5383_;
}
v_resetjp_5383_:
{
lean_object* v___x_5386_; lean_object* v_traceState_5387_; lean_object* v_env_5388_; lean_object* v_nextMacroScope_5389_; lean_object* v_ngen_5390_; lean_object* v_auxDeclNGen_5391_; lean_object* v_cache_5392_; lean_object* v_messages_5393_; lean_object* v_infoState_5394_; lean_object* v_snapshotTasks_5395_; lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5425_; 
v___x_5386_ = lean_st_ref_take(v___y_5378_);
v_traceState_5387_ = lean_ctor_get(v___x_5386_, 4);
v_env_5388_ = lean_ctor_get(v___x_5386_, 0);
v_nextMacroScope_5389_ = lean_ctor_get(v___x_5386_, 1);
v_ngen_5390_ = lean_ctor_get(v___x_5386_, 2);
v_auxDeclNGen_5391_ = lean_ctor_get(v___x_5386_, 3);
v_cache_5392_ = lean_ctor_get(v___x_5386_, 5);
v_messages_5393_ = lean_ctor_get(v___x_5386_, 6);
v_infoState_5394_ = lean_ctor_get(v___x_5386_, 7);
v_snapshotTasks_5395_ = lean_ctor_get(v___x_5386_, 8);
v_isSharedCheck_5425_ = !lean_is_exclusive(v___x_5386_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5397_ = v___x_5386_;
v_isShared_5398_ = v_isSharedCheck_5425_;
goto v_resetjp_5396_;
}
else
{
lean_inc(v_snapshotTasks_5395_);
lean_inc(v_infoState_5394_);
lean_inc(v_messages_5393_);
lean_inc(v_cache_5392_);
lean_inc(v_traceState_5387_);
lean_inc(v_auxDeclNGen_5391_);
lean_inc(v_ngen_5390_);
lean_inc(v_nextMacroScope_5389_);
lean_inc(v_env_5388_);
lean_dec(v___x_5386_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5425_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
uint64_t v_tid_5399_; lean_object* v_traces_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5424_; 
v_tid_5399_ = lean_ctor_get_uint64(v_traceState_5387_, sizeof(void*)*1);
v_traces_5400_ = lean_ctor_get(v_traceState_5387_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v_traceState_5387_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5402_ = v_traceState_5387_;
v_isShared_5403_ = v_isSharedCheck_5424_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_traces_5400_);
lean_dec(v_traceState_5387_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5424_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; double v___x_5406_; uint8_t v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5415_; 
v___x_5404_ = lean_box(0);
v___x_5405_ = lean_box(0);
v___x_5406_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_5407_ = 0;
v___x_5408_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5409_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5409_, 0, v_cls_5373_);
lean_ctor_set(v___x_5409_, 1, v___x_5405_);
lean_ctor_set(v___x_5409_, 2, v___x_5408_);
lean_ctor_set_float(v___x_5409_, sizeof(void*)*3, v___x_5406_);
lean_ctor_set_float(v___x_5409_, sizeof(void*)*3 + 8, v___x_5406_);
lean_ctor_set_uint8(v___x_5409_, sizeof(void*)*3 + 16, v___x_5407_);
v___x_5410_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_5411_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5411_, 0, v___x_5409_);
lean_ctor_set(v___x_5411_, 1, v_a_5382_);
lean_ctor_set(v___x_5411_, 2, v___x_5410_);
lean_inc(v_ref_5380_);
v___x_5412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5412_, 0, v_ref_5380_);
lean_ctor_set(v___x_5412_, 1, v___x_5411_);
v___x_5413_ = l_Lean_PersistentArray_push___redArg(v_traces_5400_, v___x_5412_);
if (v_isShared_5403_ == 0)
{
lean_ctor_set(v___x_5402_, 0, v___x_5413_);
v___x_5415_ = v___x_5402_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v___x_5413_);
lean_ctor_set_uint64(v_reuseFailAlloc_5423_, sizeof(void*)*1, v_tid_5399_);
v___x_5415_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
lean_object* v___x_5417_; 
if (v_isShared_5398_ == 0)
{
lean_ctor_set(v___x_5397_, 4, v___x_5415_);
v___x_5417_ = v___x_5397_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v_env_5388_);
lean_ctor_set(v_reuseFailAlloc_5422_, 1, v_nextMacroScope_5389_);
lean_ctor_set(v_reuseFailAlloc_5422_, 2, v_ngen_5390_);
lean_ctor_set(v_reuseFailAlloc_5422_, 3, v_auxDeclNGen_5391_);
lean_ctor_set(v_reuseFailAlloc_5422_, 4, v___x_5415_);
lean_ctor_set(v_reuseFailAlloc_5422_, 5, v_cache_5392_);
lean_ctor_set(v_reuseFailAlloc_5422_, 6, v_messages_5393_);
lean_ctor_set(v_reuseFailAlloc_5422_, 7, v_infoState_5394_);
lean_ctor_set(v_reuseFailAlloc_5422_, 8, v_snapshotTasks_5395_);
v___x_5417_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
lean_object* v___x_5418_; lean_object* v___x_5420_; 
v___x_5418_ = lean_st_ref_put(v___y_5378_, v___x_5417_);
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 0, v___x_5404_);
v___x_5420_ = v___x_5384_;
goto v_reusejp_5419_;
}
else
{
lean_object* v_reuseFailAlloc_5421_; 
v_reuseFailAlloc_5421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5421_, 0, v___x_5404_);
v___x_5420_ = v_reuseFailAlloc_5421_;
goto v_reusejp_5419_;
}
v_reusejp_5419_:
{
return v___x_5420_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_5427_, lean_object* v_msg_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
lean_object* v_res_5434_; 
v_res_5434_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5427_, v_msg_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_);
lean_dec(v___y_5432_);
lean_dec_ref(v___y_5431_);
lean_dec(v___y_5430_);
lean_dec_ref(v___y_5429_);
return v_res_5434_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_5435_, lean_object* v___x_5436_, lean_object* v_methods_5437_, lean_object* v_config_5438_, lean_object* v_a_5439_, lean_object* v_b_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_){
_start:
{
lean_object* v___y_5455_; uint8_t v___x_5477_; 
v___x_5477_ = lean_nat_dec_lt(v_a_5439_, v_upperBound_5435_);
if (v___x_5477_ == 0)
{
lean_object* v___x_5478_; 
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v___x_5478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5478_, 0, v_b_5440_);
return v___x_5478_;
}
else
{
lean_object* v_snd_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5585_; 
v_snd_5479_ = lean_ctor_get(v_b_5440_, 1);
v_isSharedCheck_5585_ = !lean_is_exclusive(v_b_5440_);
if (v_isSharedCheck_5585_ == 0)
{
lean_object* v_unused_5586_; 
v_unused_5586_ = lean_ctor_get(v_b_5440_, 0);
lean_dec(v_unused_5586_);
v___x_5481_ = v_b_5440_;
v_isShared_5482_ = v_isSharedCheck_5585_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_snd_5479_);
lean_dec(v_b_5440_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5585_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v_type_5488_; lean_object* v___x_5489_; lean_object* v___x_5491_; 
v___x_5483_ = lean_box(0);
v___x_5484_ = lean_array_fget_borrowed(v___x_5436_, v_a_5439_);
v___x_5485_ = lean_st_ref_take(v___y_5441_);
v___x_5486_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5487_ = lean_st_ref_put(v___y_5441_, v___x_5486_);
v_type_5488_ = lean_ctor_get(v___x_5484_, 1);
v___x_5489_ = lean_unsigned_to_nat(0u);
if (v_isShared_5482_ == 0)
{
lean_ctor_set(v___x_5481_, 1, v___x_5485_);
lean_ctor_set(v___x_5481_, 0, v___x_5489_);
v___x_5491_ = v___x_5481_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v___x_5489_);
lean_ctor_set(v_reuseFailAlloc_5584_, 1, v___x_5485_);
v___x_5491_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
lean_object* v___x_5492_; lean_object* v___x_5493_; 
lean_inc_ref(v_type_5488_);
v___x_5492_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_5492_, 0, v_type_5488_);
lean_inc_ref(v_config_5438_);
lean_inc_ref(v_methods_5437_);
v___x_5493_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_5492_, v_methods_5437_, v_config_5438_, v___x_5491_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
if (lean_obj_tag(v___x_5493_) == 0)
{
lean_object* v_a_5494_; lean_object* v_snd_5495_; lean_object* v_fst_5496_; lean_object* v___x_5498_; uint8_t v_isShared_5499_; uint8_t v_isSharedCheck_5575_; 
v_a_5494_ = lean_ctor_get(v___x_5493_, 0);
lean_inc(v_a_5494_);
lean_dec_ref_known(v___x_5493_, 1);
v_snd_5495_ = lean_ctor_get(v_a_5494_, 1);
v_fst_5496_ = lean_ctor_get(v_a_5494_, 0);
v_isSharedCheck_5575_ = !lean_is_exclusive(v_a_5494_);
if (v_isSharedCheck_5575_ == 0)
{
v___x_5498_ = v_a_5494_;
v_isShared_5499_ = v_isSharedCheck_5575_;
goto v_resetjp_5497_;
}
else
{
lean_inc(v_snd_5495_);
lean_inc(v_fst_5496_);
lean_dec(v_a_5494_);
v___x_5498_ = lean_box(0);
v_isShared_5499_ = v_isSharedCheck_5575_;
goto v_resetjp_5497_;
}
v_resetjp_5497_:
{
lean_object* v_cache_5500_; lean_object* v___x_5502_; uint8_t v_isShared_5503_; uint8_t v_isSharedCheck_5573_; 
v_cache_5500_ = lean_ctor_get(v_snd_5495_, 1);
v_isSharedCheck_5573_ = !lean_is_exclusive(v_snd_5495_);
if (v_isSharedCheck_5573_ == 0)
{
lean_object* v_unused_5574_; 
v_unused_5574_ = lean_ctor_get(v_snd_5495_, 0);
lean_dec(v_unused_5574_);
v___x_5502_ = v_snd_5495_;
v_isShared_5503_ = v_isSharedCheck_5573_;
goto v_resetjp_5501_;
}
else
{
lean_inc(v_cache_5500_);
lean_dec(v_snd_5495_);
v___x_5502_ = lean_box(0);
v_isShared_5503_ = v_isSharedCheck_5573_;
goto v_resetjp_5501_;
}
v_resetjp_5501_:
{
lean_object* v___x_5504_; lean_object* v___x_5505_; 
v___x_5504_ = lean_st_ref_swap(v___y_5441_, v_cache_5500_);
lean_dec(v___x_5504_);
lean_inc(v___x_5484_);
v___x_5505_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v___x_5484_, v_fst_5496_);
lean_dec(v_fst_5496_);
if (lean_obj_tag(v___x_5505_) == 0)
{
lean_object* v_a_5506_; lean_object* v_type_5507_; lean_object* v_value_5508_; uint8_t v___x_5509_; 
v_a_5506_ = lean_ctor_get(v___x_5505_, 0);
lean_inc(v_a_5506_);
lean_dec_ref_known(v___x_5505_, 1);
v_type_5507_ = lean_ctor_get(v_a_5506_, 1);
v_value_5508_ = lean_ctor_get(v_a_5506_, 2);
lean_inc_ref(v_type_5507_);
v___x_5509_ = l_Lean_Expr_isFalse(v_type_5507_);
if (v___x_5509_ == 0)
{
lean_object* v___f_5510_; uint8_t v___x_5540_; 
lean_del_object(v___x_5498_);
lean_inc(v_a_5506_);
lean_inc(v_snd_5479_);
v___f_5510_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5510_, 0, v_snd_5479_);
lean_closure_set(v___f_5510_, 1, v_a_5506_);
lean_closure_set(v___f_5510_, 2, v___x_5483_);
v___x_5540_ = lean_expr_eqv(v_type_5488_, v_type_5507_);
if (v___x_5540_ == 0)
{
lean_inc_ref(v_type_5507_);
lean_dec(v_a_5506_);
lean_dec(v_snd_5479_);
goto v___jp_5514_;
}
else
{
if (v___x_5509_ == 0)
{
lean_object* v___x_5541_; lean_object* v___x_5542_; 
lean_dec_ref(v___f_5510_);
lean_del_object(v___x_5502_);
v___x_5541_ = lean_box(0);
v___x_5542_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5479_, v_a_5506_, v___x_5483_, v___x_5541_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
v___y_5455_ = v___x_5542_;
goto v___jp_5454_;
}
else
{
lean_inc_ref(v_type_5507_);
lean_dec(v_a_5506_);
lean_dec(v_snd_5479_);
goto v___jp_5514_;
}
}
v___jp_5511_:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5512_ = lean_box(0);
v___x_5513_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5477_, v___f_5510_, v___x_5512_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
v___y_5455_ = v___x_5513_;
goto v___jp_5454_;
}
v___jp_5514_:
{
lean_object* v_toCold_5515_; lean_object* v_options_5516_; uint8_t v_hasTrace_5517_; 
v_toCold_5515_ = lean_ctor_get(v___y_5451_, 0);
v_options_5516_ = lean_ctor_get(v_toCold_5515_, 2);
v_hasTrace_5517_ = lean_ctor_get_uint8(v_options_5516_, sizeof(void*)*1);
if (v_hasTrace_5517_ == 0)
{
lean_dec_ref(v_type_5507_);
lean_del_object(v___x_5502_);
goto v___jp_5511_;
}
else
{
lean_object* v_inheritedTraceOptions_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; uint8_t v___x_5521_; 
v_inheritedTraceOptions_5518_ = lean_ctor_get(v_toCold_5515_, 11);
v___x_5519_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5520_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5521_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5518_, v_options_5516_, v___x_5520_);
if (v___x_5521_ == 0)
{
lean_dec_ref(v_type_5507_);
lean_del_object(v___x_5502_);
goto v___jp_5511_;
}
else
{
lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5525_; 
lean_inc_ref(v_type_5488_);
v___x_5522_ = l_Lean_MessageData_ofExpr(v_type_5488_);
v___x_5523_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5503_ == 0)
{
lean_ctor_set_tag(v___x_5502_, 7);
lean_ctor_set(v___x_5502_, 1, v___x_5523_);
lean_ctor_set(v___x_5502_, 0, v___x_5522_);
v___x_5525_ = v___x_5502_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v___x_5522_);
lean_ctor_set(v_reuseFailAlloc_5539_, 1, v___x_5523_);
v___x_5525_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; 
v___x_5526_ = l_Lean_MessageData_ofExpr(v_type_5507_);
v___x_5527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5527_, 0, v___x_5525_);
lean_ctor_set(v___x_5527_, 1, v___x_5526_);
v___x_5528_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v___x_5519_, v___x_5527_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
if (lean_obj_tag(v___x_5528_) == 0)
{
lean_object* v_a_5529_; lean_object* v___x_5530_; 
v_a_5529_ = lean_ctor_get(v___x_5528_, 0);
lean_inc(v_a_5529_);
lean_dec_ref_known(v___x_5528_, 1);
v___x_5530_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5477_, v___f_5510_, v_a_5529_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
v___y_5455_ = v___x_5530_;
goto v___jp_5454_;
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5538_; 
lean_dec_ref(v___f_5510_);
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v_a_5531_ = lean_ctor_get(v___x_5528_, 0);
v_isSharedCheck_5538_ = !lean_is_exclusive(v___x_5528_);
if (v_isSharedCheck_5538_ == 0)
{
v___x_5533_ = v___x_5528_;
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
else
{
lean_inc(v_a_5531_);
lean_dec(v___x_5528_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5531_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
return v___x_5536_;
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
lean_object* v___x_5543_; 
lean_inc_ref(v_value_5508_);
lean_dec(v_a_5506_);
lean_del_object(v___x_5502_);
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v___x_5543_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5508_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
if (lean_obj_tag(v___x_5543_) == 0)
{
lean_object* v___x_5545_; uint8_t v_isShared_5546_; uint8_t v_isSharedCheck_5555_; 
v_isSharedCheck_5555_ = !lean_is_exclusive(v___x_5543_);
if (v_isSharedCheck_5555_ == 0)
{
lean_object* v_unused_5556_; 
v_unused_5556_ = lean_ctor_get(v___x_5543_, 0);
lean_dec(v_unused_5556_);
v___x_5545_ = v___x_5543_;
v_isShared_5546_ = v_isSharedCheck_5555_;
goto v_resetjp_5544_;
}
else
{
lean_dec(v___x_5543_);
v___x_5545_ = lean_box(0);
v_isShared_5546_ = v_isSharedCheck_5555_;
goto v_resetjp_5544_;
}
v_resetjp_5544_:
{
lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5550_; 
v___x_5547_ = lean_box(v___x_5477_);
v___x_5548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5548_, 0, v___x_5547_);
if (v_isShared_5499_ == 0)
{
lean_ctor_set(v___x_5498_, 1, v_snd_5479_);
lean_ctor_set(v___x_5498_, 0, v___x_5548_);
v___x_5550_ = v___x_5498_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v___x_5548_);
lean_ctor_set(v_reuseFailAlloc_5554_, 1, v_snd_5479_);
v___x_5550_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5552_; 
if (v_isShared_5546_ == 0)
{
lean_ctor_set(v___x_5545_, 0, v___x_5550_);
v___x_5552_ = v___x_5545_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v___x_5550_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
return v___x_5552_;
}
}
}
}
else
{
lean_object* v_a_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5564_; 
lean_del_object(v___x_5498_);
lean_dec(v_snd_5479_);
v_a_5557_ = lean_ctor_get(v___x_5543_, 0);
v_isSharedCheck_5564_ = !lean_is_exclusive(v___x_5543_);
if (v_isSharedCheck_5564_ == 0)
{
v___x_5559_ = v___x_5543_;
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_a_5557_);
lean_dec(v___x_5543_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
lean_object* v___x_5562_; 
if (v_isShared_5560_ == 0)
{
v___x_5562_ = v___x_5559_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v_a_5557_);
v___x_5562_ = v_reuseFailAlloc_5563_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
return v___x_5562_;
}
}
}
}
}
else
{
lean_object* v_a_5565_; lean_object* v___x_5567_; uint8_t v_isShared_5568_; uint8_t v_isSharedCheck_5572_; 
lean_del_object(v___x_5502_);
lean_del_object(v___x_5498_);
lean_dec(v_snd_5479_);
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v_a_5565_ = lean_ctor_get(v___x_5505_, 0);
v_isSharedCheck_5572_ = !lean_is_exclusive(v___x_5505_);
if (v_isSharedCheck_5572_ == 0)
{
v___x_5567_ = v___x_5505_;
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
else
{
lean_inc(v_a_5565_);
lean_dec(v___x_5505_);
v___x_5567_ = lean_box(0);
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
v_resetjp_5566_:
{
lean_object* v___x_5570_; 
if (v_isShared_5568_ == 0)
{
v___x_5570_ = v___x_5567_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5571_; 
v_reuseFailAlloc_5571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5571_, 0, v_a_5565_);
v___x_5570_ = v_reuseFailAlloc_5571_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
return v___x_5570_;
}
}
}
}
}
}
else
{
lean_object* v_a_5576_; lean_object* v___x_5578_; uint8_t v_isShared_5579_; uint8_t v_isSharedCheck_5583_; 
lean_dec(v_snd_5479_);
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v_a_5576_ = lean_ctor_get(v___x_5493_, 0);
v_isSharedCheck_5583_ = !lean_is_exclusive(v___x_5493_);
if (v_isSharedCheck_5583_ == 0)
{
v___x_5578_ = v___x_5493_;
v_isShared_5579_ = v_isSharedCheck_5583_;
goto v_resetjp_5577_;
}
else
{
lean_inc(v_a_5576_);
lean_dec(v___x_5493_);
v___x_5578_ = lean_box(0);
v_isShared_5579_ = v_isSharedCheck_5583_;
goto v_resetjp_5577_;
}
v_resetjp_5577_:
{
lean_object* v___x_5581_; 
if (v_isShared_5579_ == 0)
{
v___x_5581_ = v___x_5578_;
goto v_reusejp_5580_;
}
else
{
lean_object* v_reuseFailAlloc_5582_; 
v_reuseFailAlloc_5582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5582_, 0, v_a_5576_);
v___x_5581_ = v_reuseFailAlloc_5582_;
goto v_reusejp_5580_;
}
v_reusejp_5580_:
{
return v___x_5581_;
}
}
}
}
}
}
v___jp_5454_:
{
if (lean_obj_tag(v___y_5455_) == 0)
{
lean_object* v_a_5456_; lean_object* v___x_5458_; uint8_t v_isShared_5459_; uint8_t v_isSharedCheck_5468_; 
v_a_5456_ = lean_ctor_get(v___y_5455_, 0);
v_isSharedCheck_5468_ = !lean_is_exclusive(v___y_5455_);
if (v_isSharedCheck_5468_ == 0)
{
v___x_5458_ = v___y_5455_;
v_isShared_5459_ = v_isSharedCheck_5468_;
goto v_resetjp_5457_;
}
else
{
lean_inc(v_a_5456_);
lean_dec(v___y_5455_);
v___x_5458_ = lean_box(0);
v_isShared_5459_ = v_isSharedCheck_5468_;
goto v_resetjp_5457_;
}
v_resetjp_5457_:
{
if (lean_obj_tag(v_a_5456_) == 0)
{
lean_object* v_a_5460_; lean_object* v___x_5462_; 
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v_a_5460_ = lean_ctor_get(v_a_5456_, 0);
lean_inc(v_a_5460_);
lean_dec_ref_known(v_a_5456_, 1);
if (v_isShared_5459_ == 0)
{
lean_ctor_set(v___x_5458_, 0, v_a_5460_);
v___x_5462_ = v___x_5458_;
goto v_reusejp_5461_;
}
else
{
lean_object* v_reuseFailAlloc_5463_; 
v_reuseFailAlloc_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5463_, 0, v_a_5460_);
v___x_5462_ = v_reuseFailAlloc_5463_;
goto v_reusejp_5461_;
}
v_reusejp_5461_:
{
return v___x_5462_;
}
}
else
{
lean_object* v_a_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; 
lean_del_object(v___x_5458_);
v_a_5464_ = lean_ctor_get(v_a_5456_, 0);
lean_inc(v_a_5464_);
lean_dec_ref_known(v_a_5456_, 1);
v___x_5465_ = lean_unsigned_to_nat(1u);
v___x_5466_ = lean_nat_add(v_a_5439_, v___x_5465_);
lean_dec(v_a_5439_);
v_a_5439_ = v___x_5466_;
v_b_5440_ = v_a_5464_;
goto _start;
}
}
}
else
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5476_; 
lean_dec(v_a_5439_);
lean_dec_ref(v_config_5438_);
lean_dec_ref(v_methods_5437_);
v_a_5469_ = lean_ctor_get(v___y_5455_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v___y_5455_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5471_ = v___y_5455_;
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___y_5455_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5474_; 
if (v_isShared_5472_ == 0)
{
v___x_5474_ = v___x_5471_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_a_5469_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
return v___x_5474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5587_ = _args[0];
lean_object* v___x_5588_ = _args[1];
lean_object* v_methods_5589_ = _args[2];
lean_object* v_config_5590_ = _args[3];
lean_object* v_a_5591_ = _args[4];
lean_object* v_b_5592_ = _args[5];
lean_object* v___y_5593_ = _args[6];
lean_object* v___y_5594_ = _args[7];
lean_object* v___y_5595_ = _args[8];
lean_object* v___y_5596_ = _args[9];
lean_object* v___y_5597_ = _args[10];
lean_object* v___y_5598_ = _args[11];
lean_object* v___y_5599_ = _args[12];
lean_object* v___y_5600_ = _args[13];
lean_object* v___y_5601_ = _args[14];
lean_object* v___y_5602_ = _args[15];
lean_object* v___y_5603_ = _args[16];
lean_object* v___y_5604_ = _args[17];
lean_object* v___y_5605_ = _args[18];
_start:
{
lean_object* v_res_5606_; 
v_res_5606_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5587_, v___x_5588_, v_methods_5589_, v_config_5590_, v_a_5591_, v_b_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_, v___y_5604_);
lean_dec(v___y_5604_);
lean_dec_ref(v___y_5603_);
lean_dec(v___y_5602_);
lean_dec_ref(v___y_5601_);
lean_dec(v___y_5600_);
lean_dec_ref(v___y_5599_);
lean_dec(v___y_5598_);
lean_dec_ref(v___y_5597_);
lean_dec(v___y_5596_);
lean_dec(v___y_5595_);
lean_dec_ref(v___y_5594_);
lean_dec(v___y_5593_);
lean_dec_ref(v___x_5588_);
lean_dec(v_upperBound_5587_);
return v_res_5606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object* v_methods_5607_, lean_object* v_config_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_){
_start:
{
lean_object* v___x_5622_; lean_object* v_hypotheses_5623_; lean_object* v___x_5624_; lean_object* v_newHyps_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; 
v___x_5622_ = lean_st_ref_get(v___y_5611_);
v_hypotheses_5623_ = lean_ctor_get(v___x_5622_, 3);
lean_inc_ref(v_hypotheses_5623_);
lean_dec(v___x_5622_);
v___x_5624_ = lean_array_get_size(v_hypotheses_5623_);
v_newHyps_5625_ = lean_mk_empty_array_with_capacity(v___x_5624_);
v___x_5626_ = lean_unsigned_to_nat(0u);
v___x_5627_ = lean_box(0);
v___x_5628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5627_);
lean_ctor_set(v___x_5628_, 1, v_newHyps_5625_);
v___x_5629_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v___x_5624_, v_hypotheses_5623_, v_methods_5607_, v_config_5608_, v___x_5626_, v___x_5628_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
lean_dec_ref(v_hypotheses_5623_);
if (lean_obj_tag(v___x_5629_) == 0)
{
lean_object* v_a_5630_; lean_object* v___x_5632_; uint8_t v_isShared_5633_; uint8_t v_isSharedCheck_5659_; 
v_a_5630_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5659_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5659_ == 0)
{
v___x_5632_ = v___x_5629_;
v_isShared_5633_ = v_isSharedCheck_5659_;
goto v_resetjp_5631_;
}
else
{
lean_inc(v_a_5630_);
lean_dec(v___x_5629_);
v___x_5632_ = lean_box(0);
v_isShared_5633_ = v_isSharedCheck_5659_;
goto v_resetjp_5631_;
}
v_resetjp_5631_:
{
lean_object* v_fst_5634_; 
v_fst_5634_ = lean_ctor_get(v_a_5630_, 0);
if (lean_obj_tag(v_fst_5634_) == 0)
{
lean_object* v_snd_5635_; lean_object* v___x_5636_; lean_object* v_caches_5637_; lean_object* v_typeAnalysis_5638_; lean_object* v_target_5639_; uint8_t v_didChange_5640_; lean_object* v___x_5642_; uint8_t v_isShared_5643_; uint8_t v_isSharedCheck_5653_; 
v_snd_5635_ = lean_ctor_get(v_a_5630_, 1);
lean_inc(v_snd_5635_);
lean_dec(v_a_5630_);
v___x_5636_ = lean_st_ref_take(v___y_5611_);
v_caches_5637_ = lean_ctor_get(v___x_5636_, 0);
v_typeAnalysis_5638_ = lean_ctor_get(v___x_5636_, 1);
v_target_5639_ = lean_ctor_get(v___x_5636_, 2);
v_didChange_5640_ = lean_ctor_get_uint8(v___x_5636_, sizeof(void*)*4);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5636_);
if (v_isSharedCheck_5653_ == 0)
{
lean_object* v_unused_5654_; 
v_unused_5654_ = lean_ctor_get(v___x_5636_, 3);
lean_dec(v_unused_5654_);
v___x_5642_ = v___x_5636_;
v_isShared_5643_ = v_isSharedCheck_5653_;
goto v_resetjp_5641_;
}
else
{
lean_inc(v_target_5639_);
lean_inc(v_typeAnalysis_5638_);
lean_inc(v_caches_5637_);
lean_dec(v___x_5636_);
v___x_5642_ = lean_box(0);
v_isShared_5643_ = v_isSharedCheck_5653_;
goto v_resetjp_5641_;
}
v_resetjp_5641_:
{
lean_object* v___x_5645_; 
if (v_isShared_5643_ == 0)
{
lean_ctor_set(v___x_5642_, 3, v_snd_5635_);
v___x_5645_ = v___x_5642_;
goto v_reusejp_5644_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_caches_5637_);
lean_ctor_set(v_reuseFailAlloc_5652_, 1, v_typeAnalysis_5638_);
lean_ctor_set(v_reuseFailAlloc_5652_, 2, v_target_5639_);
lean_ctor_set(v_reuseFailAlloc_5652_, 3, v_snd_5635_);
lean_ctor_set_uint8(v_reuseFailAlloc_5652_, sizeof(void*)*4, v_didChange_5640_);
v___x_5645_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5644_;
}
v_reusejp_5644_:
{
lean_object* v___x_5646_; uint8_t v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5650_; 
v___x_5646_ = lean_st_ref_put(v___y_5611_, v___x_5645_);
v___x_5647_ = 0;
v___x_5648_ = lean_box(v___x_5647_);
if (v_isShared_5633_ == 0)
{
lean_ctor_set(v___x_5632_, 0, v___x_5648_);
v___x_5650_ = v___x_5632_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v___x_5648_);
v___x_5650_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
return v___x_5650_;
}
}
}
}
else
{
lean_object* v_val_5655_; lean_object* v___x_5657_; 
lean_inc_ref(v_fst_5634_);
lean_dec(v_a_5630_);
v_val_5655_ = lean_ctor_get(v_fst_5634_, 0);
lean_inc(v_val_5655_);
lean_dec_ref_known(v_fst_5634_, 1);
if (v_isShared_5633_ == 0)
{
lean_ctor_set(v___x_5632_, 0, v_val_5655_);
v___x_5657_ = v___x_5632_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_val_5655_);
v___x_5657_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
return v___x_5657_;
}
}
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5662_; uint8_t v_isShared_5663_; uint8_t v_isSharedCheck_5667_; 
v_a_5660_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5662_ = v___x_5629_;
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
else
{
lean_inc(v_a_5660_);
lean_dec(v___x_5629_);
v___x_5662_ = lean_box(0);
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
v_resetjp_5661_:
{
lean_object* v___x_5665_; 
if (v_isShared_5663_ == 0)
{
v___x_5665_ = v___x_5662_;
goto v_reusejp_5664_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_a_5660_);
v___x_5665_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5664_;
}
v_reusejp_5664_:
{
return v___x_5665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object* v_methods_5668_, lean_object* v_config_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_){
_start:
{
lean_object* v_res_5683_; 
v_res_5683_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5668_, v_config_5669_, v___y_5670_, v___y_5671_, v___y_5672_, v___y_5673_, v___y_5674_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_);
lean_dec(v___y_5681_);
lean_dec_ref(v___y_5680_);
lean_dec(v___y_5679_);
lean_dec_ref(v___y_5678_);
lean_dec(v___y_5677_);
lean_dec_ref(v___y_5676_);
lean_dec(v___y_5675_);
lean_dec_ref(v___y_5674_);
lean_dec(v___y_5673_);
lean_dec(v___y_5672_);
lean_dec_ref(v___y_5671_);
lean_dec(v___y_5670_);
return v_res_5683_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object* v_cls_5684_, lean_object* v_msg_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_){
_start:
{
lean_object* v___x_5699_; 
v___x_5699_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5684_, v_msg_5685_, v___y_5694_, v___y_5695_, v___y_5696_, v___y_5697_);
return v___x_5699_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object* v_cls_5700_, lean_object* v_msg_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_, lean_object* v___y_5713_, lean_object* v___y_5714_){
_start:
{
lean_object* v_res_5715_; 
v_res_5715_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(v_cls_5700_, v_msg_5701_, v___y_5702_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_, v___y_5707_, v___y_5708_, v___y_5709_, v___y_5710_, v___y_5711_, v___y_5712_, v___y_5713_);
lean_dec(v___y_5713_);
lean_dec_ref(v___y_5712_);
lean_dec(v___y_5711_);
lean_dec_ref(v___y_5710_);
lean_dec(v___y_5709_);
lean_dec_ref(v___y_5708_);
lean_dec(v___y_5707_);
lean_dec_ref(v___y_5706_);
lean_dec(v___y_5705_);
lean_dec(v___y_5704_);
lean_dec_ref(v___y_5703_);
lean_dec(v___y_5702_);
return v_res_5715_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object* v_upperBound_5716_, lean_object* v___x_5717_, lean_object* v_methods_5718_, lean_object* v_config_5719_, lean_object* v_inst_5720_, lean_object* v_R_5721_, lean_object* v_a_5722_, lean_object* v_b_5723_, lean_object* v_c_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_){
_start:
{
lean_object* v___x_5738_; 
v___x_5738_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5716_, v___x_5717_, v_methods_5718_, v_config_5719_, v_a_5722_, v_b_5723_, v___y_5725_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_, v___y_5736_);
return v___x_5738_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5739_ = _args[0];
lean_object* v___x_5740_ = _args[1];
lean_object* v_methods_5741_ = _args[2];
lean_object* v_config_5742_ = _args[3];
lean_object* v_inst_5743_ = _args[4];
lean_object* v_R_5744_ = _args[5];
lean_object* v_a_5745_ = _args[6];
lean_object* v_b_5746_ = _args[7];
lean_object* v_c_5747_ = _args[8];
lean_object* v___y_5748_ = _args[9];
lean_object* v___y_5749_ = _args[10];
lean_object* v___y_5750_ = _args[11];
lean_object* v___y_5751_ = _args[12];
lean_object* v___y_5752_ = _args[13];
lean_object* v___y_5753_ = _args[14];
lean_object* v___y_5754_ = _args[15];
lean_object* v___y_5755_ = _args[16];
lean_object* v___y_5756_ = _args[17];
lean_object* v___y_5757_ = _args[18];
lean_object* v___y_5758_ = _args[19];
lean_object* v___y_5759_ = _args[20];
lean_object* v___y_5760_ = _args[21];
_start:
{
lean_object* v_res_5761_; 
v_res_5761_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(v_upperBound_5739_, v___x_5740_, v_methods_5741_, v_config_5742_, v_inst_5743_, v_R_5744_, v_a_5745_, v_b_5746_, v_c_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_, v___y_5752_, v___y_5753_, v___y_5754_, v___y_5755_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
lean_dec(v___y_5759_);
lean_dec_ref(v___y_5758_);
lean_dec(v___y_5757_);
lean_dec_ref(v___y_5756_);
lean_dec(v___y_5755_);
lean_dec_ref(v___y_5754_);
lean_dec(v___y_5753_);
lean_dec_ref(v___y_5752_);
lean_dec(v___y_5751_);
lean_dec(v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec(v___y_5748_);
lean_dec_ref(v___x_5740_);
lean_dec(v_upperBound_5739_);
return v_res_5761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object* v_methods_5762_, lean_object* v_config_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_){
_start:
{
lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; 
v___x_5776_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5777_ = lean_st_mk_ref(v___x_5776_);
v___x_5778_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5762_, v_config_5763_, v___x_5777_, v___y_5764_, v___y_5765_, v___y_5766_, v___y_5767_, v___y_5768_, v___y_5769_, v___y_5770_, v___y_5771_, v___y_5772_, v___y_5773_, v___y_5774_);
if (lean_obj_tag(v___x_5778_) == 0)
{
lean_object* v_a_5779_; lean_object* v___x_5781_; uint8_t v_isShared_5782_; uint8_t v_isSharedCheck_5787_; 
v_a_5779_ = lean_ctor_get(v___x_5778_, 0);
v_isSharedCheck_5787_ = !lean_is_exclusive(v___x_5778_);
if (v_isSharedCheck_5787_ == 0)
{
v___x_5781_ = v___x_5778_;
v_isShared_5782_ = v_isSharedCheck_5787_;
goto v_resetjp_5780_;
}
else
{
lean_inc(v_a_5779_);
lean_dec(v___x_5778_);
v___x_5781_ = lean_box(0);
v_isShared_5782_ = v_isSharedCheck_5787_;
goto v_resetjp_5780_;
}
v_resetjp_5780_:
{
lean_object* v___x_5783_; lean_object* v___x_5785_; 
v___x_5783_ = lean_st_ref_get(v___x_5777_);
lean_dec(v___x_5777_);
lean_dec(v___x_5783_);
if (v_isShared_5782_ == 0)
{
v___x_5785_ = v___x_5781_;
goto v_reusejp_5784_;
}
else
{
lean_object* v_reuseFailAlloc_5786_; 
v_reuseFailAlloc_5786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5786_, 0, v_a_5779_);
v___x_5785_ = v_reuseFailAlloc_5786_;
goto v_reusejp_5784_;
}
v_reusejp_5784_:
{
return v___x_5785_;
}
}
}
else
{
lean_dec(v___x_5777_);
return v___x_5778_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object* v_methods_5788_, lean_object* v_config_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_){
_start:
{
lean_object* v_res_5802_; 
v_res_5802_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(v_methods_5788_, v_config_5789_, v___y_5790_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_, v___y_5795_, v___y_5796_, v___y_5797_, v___y_5798_, v___y_5799_, v___y_5800_);
lean_dec(v___y_5800_);
lean_dec_ref(v___y_5799_);
lean_dec(v___y_5798_);
lean_dec_ref(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec_ref(v___y_5795_);
lean_dec(v___y_5794_);
lean_dec_ref(v___y_5793_);
lean_dec(v___y_5792_);
lean_dec(v___y_5791_);
lean_dec_ref(v___y_5790_);
return v_res_5802_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; 
v___x_5804_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0));
v___x_5805_ = l_Lean_stringToMessageData(v___x_5804_);
return v___x_5805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object* v_name_5806_, lean_object* v_x_5807_, lean_object* v___y_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_){
_start:
{
lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5820_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1);
v___x_5821_ = l_Lean_MessageData_ofName(v_name_5806_);
v___x_5822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5822_, 0, v___x_5820_);
lean_ctor_set(v___x_5822_, 1, v___x_5821_);
v___x_5823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5823_, 0, v___x_5822_);
return v___x_5823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object* v_name_5824_, lean_object* v_x_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_){
_start:
{
lean_object* v_res_5838_; 
v_res_5838_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(v_name_5824_, v_x_5825_, v___y_5826_, v___y_5827_, v___y_5828_, v___y_5829_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_, v___y_5835_, v___y_5836_);
lean_dec(v___y_5836_);
lean_dec_ref(v___y_5835_);
lean_dec(v___y_5834_);
lean_dec_ref(v___y_5833_);
lean_dec(v___y_5832_);
lean_dec_ref(v___y_5831_);
lean_dec(v___y_5830_);
lean_dec_ref(v___y_5829_);
lean_dec(v___y_5828_);
lean_dec(v___y_5827_);
lean_dec_ref(v___y_5826_);
lean_dec_ref(v_x_5825_);
return v_res_5838_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0(void){
_start:
{
lean_object* v___x_5839_; 
v___x_5839_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v___x_5839_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1(void){
_start:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; 
v___x_5840_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0);
v___x_5841_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5840_);
return v___x_5841_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2(void){
_start:
{
lean_object* v___x_5842_; lean_object* v___x_5843_; 
v___x_5842_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1);
v___x_5843_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5842_);
return v___x_5843_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3(void){
_start:
{
lean_object* v___x_5844_; lean_object* v___x_5845_; 
v___x_5844_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2);
v___x_5845_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5844_);
return v___x_5845_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4(void){
_start:
{
lean_object* v___x_5846_; lean_object* v___x_5847_; 
v___x_5846_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3);
v___x_5847_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5846_);
return v___x_5847_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5(void){
_start:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; 
v___x_5848_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4);
v___x_5849_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5848_);
return v___x_5849_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6(void){
_start:
{
lean_object* v___x_5850_; lean_object* v___x_5851_; 
v___x_5850_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5);
v___x_5851_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5850_);
return v___x_5851_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7(void){
_start:
{
lean_object* v___x_5852_; lean_object* v___x_5853_; 
v___x_5852_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6);
v___x_5853_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5852_);
return v___x_5853_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8(void){
_start:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; 
v___x_5854_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7);
v___x_5855_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5854_);
return v___x_5855_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9(void){
_start:
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8);
v___x_5857_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5856_);
return v___x_5857_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10(void){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9);
v___x_5859_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5858_);
return v___x_5859_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11(void){
_start:
{
lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5860_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10);
v___x_5861_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5860_);
return v___x_5861_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13(void){
_start:
{
lean_object* v___x_5863_; double v___x_5864_; 
v___x_5863_ = lean_unsigned_to_nat(1000000000u);
v___x_5864_ = lean_float_of_nat(v___x_5863_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object* v_pass_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_, lean_object* v___y_5873_, lean_object* v___y_5874_, lean_object* v___y_5875_, lean_object* v___y_5876_){
_start:
{
lean_object* v___x_5878_; lean_object* v_toApplicative_5879_; lean_object* v_toFunctor_5880_; lean_object* v_toSeq_5881_; lean_object* v_toSeqLeft_5882_; lean_object* v_toSeqRight_5883_; lean_object* v___f_5884_; lean_object* v___f_5885_; lean_object* v___f_5886_; lean_object* v___f_5887_; lean_object* v___x_5888_; lean_object* v___f_5889_; lean_object* v___f_5890_; lean_object* v___f_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v_toApplicative_5895_; lean_object* v___x_5897_; uint8_t v_isShared_5898_; uint8_t v_isSharedCheck_6038_; 
v___x_5878_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__13);
v_toApplicative_5879_ = lean_ctor_get(v___x_5878_, 0);
v_toFunctor_5880_ = lean_ctor_get(v_toApplicative_5879_, 0);
v_toSeq_5881_ = lean_ctor_get(v_toApplicative_5879_, 2);
v_toSeqLeft_5882_ = lean_ctor_get(v_toApplicative_5879_, 3);
v_toSeqRight_5883_ = lean_ctor_get(v_toApplicative_5879_, 4);
v___f_5884_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__14));
v___f_5885_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__15));
lean_inc_ref_n(v_toFunctor_5880_, 2);
v___f_5886_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5886_, 0, v_toFunctor_5880_);
v___f_5887_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5887_, 0, v_toFunctor_5880_);
v___x_5888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5888_, 0, v___f_5886_);
lean_ctor_set(v___x_5888_, 1, v___f_5887_);
lean_inc(v_toSeqRight_5883_);
v___f_5889_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5889_, 0, v_toSeqRight_5883_);
lean_inc(v_toSeqLeft_5882_);
v___f_5890_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5890_, 0, v_toSeqLeft_5882_);
lean_inc(v_toSeq_5881_);
v___f_5891_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5891_, 0, v_toSeq_5881_);
v___x_5892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5892_, 0, v___x_5888_);
lean_ctor_set(v___x_5892_, 1, v___f_5884_);
lean_ctor_set(v___x_5892_, 2, v___f_5891_);
lean_ctor_set(v___x_5892_, 3, v___f_5890_);
lean_ctor_set(v___x_5892_, 4, v___f_5889_);
v___x_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5892_);
lean_ctor_set(v___x_5893_, 1, v___f_5885_);
v___x_5894_ = l_StateRefT_x27_instMonad___redArg(v___x_5893_);
v_toApplicative_5895_ = lean_ctor_get(v___x_5894_, 0);
v_isSharedCheck_6038_ = !lean_is_exclusive(v___x_5894_);
if (v_isSharedCheck_6038_ == 0)
{
lean_object* v_unused_6039_; 
v_unused_6039_ = lean_ctor_get(v___x_5894_, 1);
lean_dec(v_unused_6039_);
v___x_5897_ = v___x_5894_;
v_isShared_5898_ = v_isSharedCheck_6038_;
goto v_resetjp_5896_;
}
else
{
lean_inc(v_toApplicative_5895_);
lean_dec(v___x_5894_);
v___x_5897_ = lean_box(0);
v_isShared_5898_ = v_isSharedCheck_6038_;
goto v_resetjp_5896_;
}
v_resetjp_5896_:
{
lean_object* v_toFunctor_5899_; lean_object* v_toSeq_5900_; lean_object* v_toSeqLeft_5901_; lean_object* v_toSeqRight_5902_; lean_object* v___x_5904_; uint8_t v_isShared_5905_; uint8_t v_isSharedCheck_6036_; 
v_toFunctor_5899_ = lean_ctor_get(v_toApplicative_5895_, 0);
v_toSeq_5900_ = lean_ctor_get(v_toApplicative_5895_, 2);
v_toSeqLeft_5901_ = lean_ctor_get(v_toApplicative_5895_, 3);
v_toSeqRight_5902_ = lean_ctor_get(v_toApplicative_5895_, 4);
v_isSharedCheck_6036_ = !lean_is_exclusive(v_toApplicative_5895_);
if (v_isSharedCheck_6036_ == 0)
{
lean_object* v_unused_6037_; 
v_unused_6037_ = lean_ctor_get(v_toApplicative_5895_, 1);
lean_dec(v_unused_6037_);
v___x_5904_ = v_toApplicative_5895_;
v_isShared_5905_ = v_isSharedCheck_6036_;
goto v_resetjp_5903_;
}
else
{
lean_inc(v_toSeqRight_5902_);
lean_inc(v_toSeqLeft_5901_);
lean_inc(v_toSeq_5900_);
lean_inc(v_toFunctor_5899_);
lean_dec(v_toApplicative_5895_);
v___x_5904_ = lean_box(0);
v_isShared_5905_ = v_isSharedCheck_6036_;
goto v_resetjp_5903_;
}
v_resetjp_5903_:
{
lean_object* v___f_5906_; lean_object* v___f_5907_; lean_object* v___f_5908_; lean_object* v___f_5909_; lean_object* v___x_5910_; lean_object* v___f_5911_; lean_object* v___f_5912_; lean_object* v___f_5913_; lean_object* v___x_5915_; 
v___f_5906_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__16));
v___f_5907_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__17));
lean_inc_ref(v_toFunctor_5899_);
v___f_5908_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5908_, 0, v_toFunctor_5899_);
v___f_5909_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5909_, 0, v_toFunctor_5899_);
v___x_5910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5910_, 0, v___f_5908_);
lean_ctor_set(v___x_5910_, 1, v___f_5909_);
v___f_5911_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5911_, 0, v_toSeqRight_5902_);
v___f_5912_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5912_, 0, v_toSeqLeft_5901_);
v___f_5913_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5913_, 0, v_toSeq_5900_);
if (v_isShared_5905_ == 0)
{
lean_ctor_set(v___x_5904_, 4, v___f_5911_);
lean_ctor_set(v___x_5904_, 3, v___f_5912_);
lean_ctor_set(v___x_5904_, 2, v___f_5913_);
lean_ctor_set(v___x_5904_, 1, v___f_5906_);
lean_ctor_set(v___x_5904_, 0, v___x_5910_);
v___x_5915_ = v___x_5904_;
goto v_reusejp_5914_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v___x_5910_);
lean_ctor_set(v_reuseFailAlloc_6035_, 1, v___f_5906_);
lean_ctor_set(v_reuseFailAlloc_6035_, 2, v___f_5913_);
lean_ctor_set(v_reuseFailAlloc_6035_, 3, v___f_5912_);
lean_ctor_set(v_reuseFailAlloc_6035_, 4, v___f_5911_);
v___x_5915_ = v_reuseFailAlloc_6035_;
goto v_reusejp_5914_;
}
v_reusejp_5914_:
{
lean_object* v___x_5917_; 
if (v_isShared_5898_ == 0)
{
lean_ctor_set(v___x_5897_, 1, v___f_5907_);
lean_ctor_set(v___x_5897_, 0, v___x_5915_);
v___x_5917_ = v___x_5897_;
goto v_reusejp_5916_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v___x_5915_);
lean_ctor_set(v_reuseFailAlloc_6034_, 1, v___f_5907_);
v___x_5917_ = v_reuseFailAlloc_6034_;
goto v_reusejp_5916_;
}
v_reusejp_5916_:
{
lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v_toMonadRef_5927_; lean_object* v___x_5928_; lean_object* v_name_5929_; lean_object* v_run_x27_5930_; lean_object* v___x_5932_; uint8_t v_isShared_5933_; uint8_t v_isSharedCheck_6033_; 
v___x_5918_ = l_StateRefT_x27_instMonad___redArg(v___x_5917_);
v___x_5919_ = l_ReaderT_instMonad___redArg(v___x_5918_);
v___x_5920_ = l_StateRefT_x27_instMonad___redArg(v___x_5919_);
v___x_5921_ = l_ReaderT_instMonad___redArg(v___x_5920_);
v___x_5922_ = l_ReaderT_instMonad___redArg(v___x_5921_);
v___x_5923_ = l_StateRefT_x27_instMonad___redArg(v___x_5922_);
v___x_5924_ = l_ReaderT_instMonad___redArg(v___x_5923_);
v___x_5925_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_5926_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_5927_ = lean_ctor_get(v___x_5926_, 0);
v___x_5928_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11);
v_name_5929_ = lean_ctor_get(v_pass_5865_, 0);
v_run_x27_5930_ = lean_ctor_get(v_pass_5865_, 1);
v_isSharedCheck_6033_ = !lean_is_exclusive(v_pass_5865_);
if (v_isSharedCheck_6033_ == 0)
{
v___x_5932_ = v_pass_5865_;
v_isShared_5933_ = v_isSharedCheck_6033_;
goto v_resetjp_5931_;
}
else
{
lean_inc(v_run_x27_5930_);
lean_inc(v_name_5929_);
lean_dec(v_pass_5865_);
v___x_5932_ = lean_box(0);
v_isShared_5933_ = v_isSharedCheck_6033_;
goto v_resetjp_5931_;
}
v_resetjp_5931_:
{
lean_object* v___x_5934_; lean_object* v_toCold_5935_; lean_object* v_options_5936_; uint8_t v_hasTrace_5937_; 
v___x_5934_ = l_Lean_KVMap_instValueBool;
v_toCold_5935_ = lean_ctor_get(v___y_5875_, 0);
v_options_5936_ = lean_ctor_get(v_toCold_5935_, 2);
v_hasTrace_5937_ = lean_ctor_get_uint8(v_options_5936_, sizeof(void*)*1);
if (v_hasTrace_5937_ == 0)
{
lean_object* v___x_5938_; 
lean_del_object(v___x_5932_);
lean_dec(v_name_5929_);
lean_dec_ref(v___x_5924_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5938_ = lean_apply_12(v_run_x27_5930_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
return v___x_5938_;
}
else
{
lean_object* v_inheritedTraceOptions_5939_; lean_object* v___f_5940_; lean_object* v___f_5941_; lean_object* v___f_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; uint8_t v___x_5946_; lean_object* v___y_5948_; lean_object* v___y_5949_; lean_object* v_a_5950_; lean_object* v___y_5966_; lean_object* v___y_5967_; lean_object* v_a_5968_; 
v_inheritedTraceOptions_5939_ = lean_ctor_get(v_toCold_5935_, 11);
v___f_5940_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_5940_, 0, v_name_5929_);
v___f_5941_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___f_5942_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12));
v___x_5943_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5944_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5945_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5946_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5939_, v_options_5936_, v___x_5945_);
if (v___x_5946_ == 0)
{
lean_object* v___x_6029_; lean_object* v___x_6030_; uint8_t v___x_6031_; 
v___x_6029_ = l_Lean_trace_profiler;
v___x_6030_ = l_Lean_Option_get___redArg(v___x_5934_, v_options_5936_, v___x_6029_);
v___x_6031_ = lean_unbox(v___x_6030_);
lean_dec(v___x_6030_);
if (v___x_6031_ == 0)
{
lean_object* v___x_6032_; 
lean_dec_ref(v___f_5940_);
lean_del_object(v___x_5932_);
lean_dec_ref(v___x_5924_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_6032_ = lean_apply_12(v_run_x27_5930_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
return v___x_6032_;
}
else
{
goto v___jp_5978_;
}
}
else
{
goto v___jp_5978_;
}
v___jp_5947_:
{
lean_object* v___x_5951_; double v___x_5952_; double v___x_5953_; double v___x_5954_; double v___x_5955_; double v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5960_; 
v___x_5951_ = lean_io_mono_nanos_now();
v___x_5952_ = lean_float_of_nat(v___y_5949_);
v___x_5953_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_5954_ = lean_float_div(v___x_5952_, v___x_5953_);
v___x_5955_ = lean_float_of_nat(v___x_5951_);
v___x_5956_ = lean_float_div(v___x_5955_, v___x_5953_);
v___x_5957_ = lean_box_float(v___x_5954_);
v___x_5958_ = lean_box_float(v___x_5956_);
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 1, v___x_5958_);
lean_ctor_set(v___x_5932_, 0, v___x_5957_);
v___x_5960_ = v___x_5932_;
goto v_reusejp_5959_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v___x_5957_);
lean_ctor_set(v_reuseFailAlloc_5964_, 1, v___x_5958_);
v___x_5960_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5959_;
}
v_reusejp_5959_:
{
lean_object* v___x_5961_; lean_object* v___x_32035__overap_5962_; lean_object* v___x_5963_; 
v___x_5961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5961_, 0, v_a_5950_);
lean_ctor_set(v___x_5961_, 1, v___x_5960_);
lean_inc_ref(v_toMonadRef_5927_);
v___x_32035__overap_5962_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5924_, v___x_5925_, v_toMonadRef_5927_, v___f_5941_, lean_box(0), v___x_5928_, v___f_5942_, v___x_5943_, v_hasTrace_5937_, v___x_5944_, v_options_5936_, v___x_5946_, v___y_5948_, v___f_5940_, v___x_5961_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5963_ = lean_apply_12(v___x_32035__overap_5962_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
return v___x_5963_;
}
}
v___jp_5965_:
{
lean_object* v___x_5969_; double v___x_5970_; double v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_32056__overap_5976_; lean_object* v___x_5977_; 
v___x_5969_ = lean_io_get_num_heartbeats();
v___x_5970_ = lean_float_of_nat(v___y_5967_);
v___x_5971_ = lean_float_of_nat(v___x_5969_);
v___x_5972_ = lean_box_float(v___x_5970_);
v___x_5973_ = lean_box_float(v___x_5971_);
v___x_5974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5972_);
lean_ctor_set(v___x_5974_, 1, v___x_5973_);
v___x_5975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5975_, 0, v_a_5968_);
lean_ctor_set(v___x_5975_, 1, v___x_5974_);
lean_inc_ref(v_toMonadRef_5927_);
v___x_32056__overap_5976_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5924_, v___x_5925_, v_toMonadRef_5927_, v___f_5941_, lean_box(0), v___x_5928_, v___f_5942_, v___x_5943_, v_hasTrace_5937_, v___x_5944_, v_options_5936_, v___x_5946_, v___y_5966_, v___f_5940_, v___x_5975_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5977_ = lean_apply_12(v___x_32056__overap_5976_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
return v___x_5977_;
}
v___jp_5978_:
{
lean_object* v___x_32013__overap_5979_; lean_object* v___x_5980_; 
lean_inc_ref(v___x_5924_);
v___x_32013__overap_5979_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_5924_, v___x_5925_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5980_ = lean_apply_12(v___x_32013__overap_5979_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
if (lean_obj_tag(v___x_5980_) == 0)
{
lean_object* v_a_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; uint8_t v___x_5984_; 
v_a_5981_ = lean_ctor_get(v___x_5980_, 0);
lean_inc(v_a_5981_);
lean_dec_ref_known(v___x_5980_, 1);
v___x_5982_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5983_ = l_Lean_Option_get___redArg(v___x_5934_, v_options_5936_, v___x_5982_);
v___x_5984_ = lean_unbox(v___x_5983_);
lean_dec(v___x_5983_);
if (v___x_5984_ == 0)
{
lean_object* v___x_5985_; lean_object* v___x_5986_; 
v___x_5985_ = lean_io_mono_nanos_now();
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5986_ = lean_apply_12(v_run_x27_5930_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
if (lean_obj_tag(v___x_5986_) == 0)
{
lean_object* v_a_5987_; lean_object* v___x_5989_; uint8_t v_isShared_5990_; uint8_t v_isSharedCheck_5994_; 
v_a_5987_ = lean_ctor_get(v___x_5986_, 0);
v_isSharedCheck_5994_ = !lean_is_exclusive(v___x_5986_);
if (v_isSharedCheck_5994_ == 0)
{
v___x_5989_ = v___x_5986_;
v_isShared_5990_ = v_isSharedCheck_5994_;
goto v_resetjp_5988_;
}
else
{
lean_inc(v_a_5987_);
lean_dec(v___x_5986_);
v___x_5989_ = lean_box(0);
v_isShared_5990_ = v_isSharedCheck_5994_;
goto v_resetjp_5988_;
}
v_resetjp_5988_:
{
lean_object* v___x_5992_; 
if (v_isShared_5990_ == 0)
{
lean_ctor_set_tag(v___x_5989_, 1);
v___x_5992_ = v___x_5989_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5993_; 
v_reuseFailAlloc_5993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5993_, 0, v_a_5987_);
v___x_5992_ = v_reuseFailAlloc_5993_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
v___y_5948_ = v_a_5981_;
v___y_5949_ = v___x_5985_;
v_a_5950_ = v___x_5992_;
goto v___jp_5947_;
}
}
}
else
{
lean_object* v_a_5995_; lean_object* v___x_5997_; uint8_t v_isShared_5998_; uint8_t v_isSharedCheck_6002_; 
v_a_5995_ = lean_ctor_get(v___x_5986_, 0);
v_isSharedCheck_6002_ = !lean_is_exclusive(v___x_5986_);
if (v_isSharedCheck_6002_ == 0)
{
v___x_5997_ = v___x_5986_;
v_isShared_5998_ = v_isSharedCheck_6002_;
goto v_resetjp_5996_;
}
else
{
lean_inc(v_a_5995_);
lean_dec(v___x_5986_);
v___x_5997_ = lean_box(0);
v_isShared_5998_ = v_isSharedCheck_6002_;
goto v_resetjp_5996_;
}
v_resetjp_5996_:
{
lean_object* v___x_6000_; 
if (v_isShared_5998_ == 0)
{
lean_ctor_set_tag(v___x_5997_, 0);
v___x_6000_ = v___x_5997_;
goto v_reusejp_5999_;
}
else
{
lean_object* v_reuseFailAlloc_6001_; 
v_reuseFailAlloc_6001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6001_, 0, v_a_5995_);
v___x_6000_ = v_reuseFailAlloc_6001_;
goto v_reusejp_5999_;
}
v_reusejp_5999_:
{
v___y_5948_ = v_a_5981_;
v___y_5949_ = v___x_5985_;
v_a_5950_ = v___x_6000_;
goto v___jp_5947_;
}
}
}
}
else
{
lean_object* v___x_6003_; lean_object* v___x_6004_; 
lean_del_object(v___x_5932_);
v___x_6003_ = lean_io_get_num_heartbeats();
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc(v___y_5874_);
lean_inc_ref(v___y_5873_);
lean_inc(v___y_5872_);
lean_inc_ref(v___y_5871_);
lean_inc(v___y_5870_);
lean_inc_ref(v___y_5869_);
lean_inc(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_6004_ = lean_apply_12(v_run_x27_5930_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, lean_box(0));
if (lean_obj_tag(v___x_6004_) == 0)
{
lean_object* v_a_6005_; lean_object* v___x_6007_; uint8_t v_isShared_6008_; uint8_t v_isSharedCheck_6012_; 
v_a_6005_ = lean_ctor_get(v___x_6004_, 0);
v_isSharedCheck_6012_ = !lean_is_exclusive(v___x_6004_);
if (v_isSharedCheck_6012_ == 0)
{
v___x_6007_ = v___x_6004_;
v_isShared_6008_ = v_isSharedCheck_6012_;
goto v_resetjp_6006_;
}
else
{
lean_inc(v_a_6005_);
lean_dec(v___x_6004_);
v___x_6007_ = lean_box(0);
v_isShared_6008_ = v_isSharedCheck_6012_;
goto v_resetjp_6006_;
}
v_resetjp_6006_:
{
lean_object* v___x_6010_; 
if (v_isShared_6008_ == 0)
{
lean_ctor_set_tag(v___x_6007_, 1);
v___x_6010_ = v___x_6007_;
goto v_reusejp_6009_;
}
else
{
lean_object* v_reuseFailAlloc_6011_; 
v_reuseFailAlloc_6011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6011_, 0, v_a_6005_);
v___x_6010_ = v_reuseFailAlloc_6011_;
goto v_reusejp_6009_;
}
v_reusejp_6009_:
{
v___y_5966_ = v_a_5981_;
v___y_5967_ = v___x_6003_;
v_a_5968_ = v___x_6010_;
goto v___jp_5965_;
}
}
}
else
{
lean_object* v_a_6013_; lean_object* v___x_6015_; uint8_t v_isShared_6016_; uint8_t v_isSharedCheck_6020_; 
v_a_6013_ = lean_ctor_get(v___x_6004_, 0);
v_isSharedCheck_6020_ = !lean_is_exclusive(v___x_6004_);
if (v_isSharedCheck_6020_ == 0)
{
v___x_6015_ = v___x_6004_;
v_isShared_6016_ = v_isSharedCheck_6020_;
goto v_resetjp_6014_;
}
else
{
lean_inc(v_a_6013_);
lean_dec(v___x_6004_);
v___x_6015_ = lean_box(0);
v_isShared_6016_ = v_isSharedCheck_6020_;
goto v_resetjp_6014_;
}
v_resetjp_6014_:
{
lean_object* v___x_6018_; 
if (v_isShared_6016_ == 0)
{
lean_ctor_set_tag(v___x_6015_, 0);
v___x_6018_ = v___x_6015_;
goto v_reusejp_6017_;
}
else
{
lean_object* v_reuseFailAlloc_6019_; 
v_reuseFailAlloc_6019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6019_, 0, v_a_6013_);
v___x_6018_ = v_reuseFailAlloc_6019_;
goto v_reusejp_6017_;
}
v_reusejp_6017_:
{
v___y_5966_ = v_a_5981_;
v___y_5967_ = v___x_6003_;
v_a_5968_ = v___x_6018_;
goto v___jp_5965_;
}
}
}
}
}
else
{
lean_object* v_a_6021_; lean_object* v___x_6023_; uint8_t v_isShared_6024_; uint8_t v_isSharedCheck_6028_; 
lean_dec_ref(v___f_5940_);
lean_del_object(v___x_5932_);
lean_dec_ref(v_run_x27_5930_);
lean_dec_ref(v___x_5924_);
v_a_6021_ = lean_ctor_get(v___x_5980_, 0);
v_isSharedCheck_6028_ = !lean_is_exclusive(v___x_5980_);
if (v_isSharedCheck_6028_ == 0)
{
v___x_6023_ = v___x_5980_;
v_isShared_6024_ = v_isSharedCheck_6028_;
goto v_resetjp_6022_;
}
else
{
lean_inc(v_a_6021_);
lean_dec(v___x_5980_);
v___x_6023_ = lean_box(0);
v_isShared_6024_ = v_isSharedCheck_6028_;
goto v_resetjp_6022_;
}
v_resetjp_6022_:
{
lean_object* v___x_6026_; 
if (v_isShared_6024_ == 0)
{
v___x_6026_ = v___x_6023_;
goto v_reusejp_6025_;
}
else
{
lean_object* v_reuseFailAlloc_6027_; 
v_reuseFailAlloc_6027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6027_, 0, v_a_6021_);
v___x_6026_ = v_reuseFailAlloc_6027_;
goto v_reusejp_6025_;
}
v_reusejp_6025_:
{
return v___x_6026_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object* v_pass_6040_, lean_object* v___y_6041_, lean_object* v___y_6042_, lean_object* v___y_6043_, lean_object* v___y_6044_, lean_object* v___y_6045_, lean_object* v___y_6046_, lean_object* v___y_6047_, lean_object* v___y_6048_, lean_object* v___y_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_){
_start:
{
lean_object* v_res_6053_; 
v_res_6053_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(v_pass_6040_, v___y_6041_, v___y_6042_, v___y_6043_, v___y_6044_, v___y_6045_, v___y_6046_, v___y_6047_, v___y_6048_, v___y_6049_, v___y_6050_, v___y_6051_);
lean_dec(v___y_6051_);
lean_dec_ref(v___y_6050_);
lean_dec(v___y_6049_);
lean_dec_ref(v___y_6048_);
lean_dec(v___y_6047_);
lean_dec_ref(v___y_6046_);
lean_dec(v___y_6045_);
lean_dec_ref(v___y_6044_);
lean_dec(v___y_6043_);
lean_dec(v___y_6042_);
lean_dec_ref(v___y_6041_);
return v_res_6053_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; 
v___x_6054_ = lean_unsigned_to_nat(32u);
v___x_6055_ = lean_mk_empty_array_with_capacity(v___x_6054_);
v___x_6056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6056_, 0, v___x_6055_);
return v___x_6056_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; 
v___x_6057_ = ((size_t)5ULL);
v___x_6058_ = lean_unsigned_to_nat(0u);
v___x_6059_ = lean_unsigned_to_nat(32u);
v___x_6060_ = lean_mk_empty_array_with_capacity(v___x_6059_);
v___x_6061_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0);
v___x_6062_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6062_, 0, v___x_6061_);
lean_ctor_set(v___x_6062_, 1, v___x_6060_);
lean_ctor_set(v___x_6062_, 2, v___x_6058_);
lean_ctor_set(v___x_6062_, 3, v___x_6058_);
lean_ctor_set_usize(v___x_6062_, 4, v___x_6057_);
return v___x_6062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object* v___y_6063_){
_start:
{
lean_object* v___x_6065_; lean_object* v_traceState_6066_; lean_object* v_traces_6067_; lean_object* v___x_6068_; lean_object* v_traceState_6069_; lean_object* v_env_6070_; lean_object* v_nextMacroScope_6071_; lean_object* v_ngen_6072_; lean_object* v_auxDeclNGen_6073_; lean_object* v_cache_6074_; lean_object* v_messages_6075_; lean_object* v_infoState_6076_; lean_object* v_snapshotTasks_6077_; lean_object* v___x_6079_; uint8_t v_isShared_6080_; uint8_t v_isSharedCheck_6096_; 
v___x_6065_ = lean_st_ref_get(v___y_6063_);
v_traceState_6066_ = lean_ctor_get(v___x_6065_, 4);
lean_inc_ref(v_traceState_6066_);
lean_dec(v___x_6065_);
v_traces_6067_ = lean_ctor_get(v_traceState_6066_, 0);
lean_inc_ref(v_traces_6067_);
lean_dec_ref(v_traceState_6066_);
v___x_6068_ = lean_st_ref_take(v___y_6063_);
v_traceState_6069_ = lean_ctor_get(v___x_6068_, 4);
v_env_6070_ = lean_ctor_get(v___x_6068_, 0);
v_nextMacroScope_6071_ = lean_ctor_get(v___x_6068_, 1);
v_ngen_6072_ = lean_ctor_get(v___x_6068_, 2);
v_auxDeclNGen_6073_ = lean_ctor_get(v___x_6068_, 3);
v_cache_6074_ = lean_ctor_get(v___x_6068_, 5);
v_messages_6075_ = lean_ctor_get(v___x_6068_, 6);
v_infoState_6076_ = lean_ctor_get(v___x_6068_, 7);
v_snapshotTasks_6077_ = lean_ctor_get(v___x_6068_, 8);
v_isSharedCheck_6096_ = !lean_is_exclusive(v___x_6068_);
if (v_isSharedCheck_6096_ == 0)
{
v___x_6079_ = v___x_6068_;
v_isShared_6080_ = v_isSharedCheck_6096_;
goto v_resetjp_6078_;
}
else
{
lean_inc(v_snapshotTasks_6077_);
lean_inc(v_infoState_6076_);
lean_inc(v_messages_6075_);
lean_inc(v_cache_6074_);
lean_inc(v_traceState_6069_);
lean_inc(v_auxDeclNGen_6073_);
lean_inc(v_ngen_6072_);
lean_inc(v_nextMacroScope_6071_);
lean_inc(v_env_6070_);
lean_dec(v___x_6068_);
v___x_6079_ = lean_box(0);
v_isShared_6080_ = v_isSharedCheck_6096_;
goto v_resetjp_6078_;
}
v_resetjp_6078_:
{
uint64_t v_tid_6081_; lean_object* v___x_6083_; uint8_t v_isShared_6084_; uint8_t v_isSharedCheck_6094_; 
v_tid_6081_ = lean_ctor_get_uint64(v_traceState_6069_, sizeof(void*)*1);
v_isSharedCheck_6094_ = !lean_is_exclusive(v_traceState_6069_);
if (v_isSharedCheck_6094_ == 0)
{
lean_object* v_unused_6095_; 
v_unused_6095_ = lean_ctor_get(v_traceState_6069_, 0);
lean_dec(v_unused_6095_);
v___x_6083_ = v_traceState_6069_;
v_isShared_6084_ = v_isSharedCheck_6094_;
goto v_resetjp_6082_;
}
else
{
lean_dec(v_traceState_6069_);
v___x_6083_ = lean_box(0);
v_isShared_6084_ = v_isSharedCheck_6094_;
goto v_resetjp_6082_;
}
v_resetjp_6082_:
{
lean_object* v___x_6085_; lean_object* v___x_6087_; 
v___x_6085_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1);
if (v_isShared_6084_ == 0)
{
lean_ctor_set(v___x_6083_, 0, v___x_6085_);
v___x_6087_ = v___x_6083_;
goto v_reusejp_6086_;
}
else
{
lean_object* v_reuseFailAlloc_6093_; 
v_reuseFailAlloc_6093_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6093_, 0, v___x_6085_);
lean_ctor_set_uint64(v_reuseFailAlloc_6093_, sizeof(void*)*1, v_tid_6081_);
v___x_6087_ = v_reuseFailAlloc_6093_;
goto v_reusejp_6086_;
}
v_reusejp_6086_:
{
lean_object* v___x_6089_; 
if (v_isShared_6080_ == 0)
{
lean_ctor_set(v___x_6079_, 4, v___x_6087_);
v___x_6089_ = v___x_6079_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6092_; 
v_reuseFailAlloc_6092_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6092_, 0, v_env_6070_);
lean_ctor_set(v_reuseFailAlloc_6092_, 1, v_nextMacroScope_6071_);
lean_ctor_set(v_reuseFailAlloc_6092_, 2, v_ngen_6072_);
lean_ctor_set(v_reuseFailAlloc_6092_, 3, v_auxDeclNGen_6073_);
lean_ctor_set(v_reuseFailAlloc_6092_, 4, v___x_6087_);
lean_ctor_set(v_reuseFailAlloc_6092_, 5, v_cache_6074_);
lean_ctor_set(v_reuseFailAlloc_6092_, 6, v_messages_6075_);
lean_ctor_set(v_reuseFailAlloc_6092_, 7, v_infoState_6076_);
lean_ctor_set(v_reuseFailAlloc_6092_, 8, v_snapshotTasks_6077_);
v___x_6089_ = v_reuseFailAlloc_6092_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; 
v___x_6090_ = lean_st_ref_put(v___y_6063_, v___x_6089_);
v___x_6091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6091_, 0, v_traces_6067_);
return v___x_6091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object* v___y_6097_, lean_object* v___y_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6097_);
lean_dec(v___y_6097_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_){
_start:
{
lean_object* v___x_6112_; 
v___x_6112_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6110_);
return v___x_6112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object* v___y_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_, lean_object* v___y_6119_, lean_object* v___y_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_, lean_object* v___y_6123_, lean_object* v___y_6124_){
_start:
{
lean_object* v_res_6125_; 
v_res_6125_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(v___y_6113_, v___y_6114_, v___y_6115_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_, v___y_6120_, v___y_6121_, v___y_6122_, v___y_6123_);
lean_dec(v___y_6123_);
lean_dec_ref(v___y_6122_);
lean_dec(v___y_6121_);
lean_dec_ref(v___y_6120_);
lean_dec(v___y_6119_);
lean_dec_ref(v___y_6118_);
lean_dec(v___y_6117_);
lean_dec_ref(v___y_6116_);
lean_dec(v___y_6115_);
lean_dec(v___y_6114_);
lean_dec_ref(v___y_6113_);
return v_res_6125_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object* v_opts_6126_, lean_object* v_opt_6127_){
_start:
{
lean_object* v_name_6128_; lean_object* v_defValue_6129_; lean_object* v_map_6130_; lean_object* v___x_6131_; 
v_name_6128_ = lean_ctor_get(v_opt_6127_, 0);
v_defValue_6129_ = lean_ctor_get(v_opt_6127_, 1);
v_map_6130_ = lean_ctor_get(v_opts_6126_, 0);
v___x_6131_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6130_, v_name_6128_);
if (lean_obj_tag(v___x_6131_) == 0)
{
uint8_t v___x_6132_; 
v___x_6132_ = lean_unbox(v_defValue_6129_);
return v___x_6132_;
}
else
{
lean_object* v_val_6133_; 
v_val_6133_ = lean_ctor_get(v___x_6131_, 0);
lean_inc(v_val_6133_);
lean_dec_ref_known(v___x_6131_, 1);
if (lean_obj_tag(v_val_6133_) == 1)
{
uint8_t v_v_6134_; 
v_v_6134_ = lean_ctor_get_uint8(v_val_6133_, 0);
lean_dec_ref_known(v_val_6133_, 0);
return v_v_6134_;
}
else
{
uint8_t v___x_6135_; 
lean_dec(v_val_6133_);
v___x_6135_ = lean_unbox(v_defValue_6129_);
return v___x_6135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object* v_opts_6136_, lean_object* v_opt_6137_){
_start:
{
uint8_t v_res_6138_; lean_object* v_r_6139_; 
v_res_6138_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6136_, v_opt_6137_);
lean_dec_ref(v_opt_6137_);
lean_dec_ref(v_opts_6136_);
v_r_6139_ = lean_box(v_res_6138_);
return v_r_6139_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object* v_cls_6140_, lean_object* v_msg_6141_, lean_object* v___y_6142_, lean_object* v___y_6143_, lean_object* v___y_6144_, lean_object* v___y_6145_){
_start:
{
lean_object* v_ref_6147_; lean_object* v___x_6148_; lean_object* v_a_6149_; lean_object* v___x_6151_; uint8_t v_isShared_6152_; uint8_t v_isSharedCheck_6193_; 
v_ref_6147_ = lean_ctor_get(v___y_6144_, 2);
v___x_6148_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6141_, v___y_6142_, v___y_6143_, v___y_6144_, v___y_6145_);
v_a_6149_ = lean_ctor_get(v___x_6148_, 0);
v_isSharedCheck_6193_ = !lean_is_exclusive(v___x_6148_);
if (v_isSharedCheck_6193_ == 0)
{
v___x_6151_ = v___x_6148_;
v_isShared_6152_ = v_isSharedCheck_6193_;
goto v_resetjp_6150_;
}
else
{
lean_inc(v_a_6149_);
lean_dec(v___x_6148_);
v___x_6151_ = lean_box(0);
v_isShared_6152_ = v_isSharedCheck_6193_;
goto v_resetjp_6150_;
}
v_resetjp_6150_:
{
lean_object* v___x_6153_; lean_object* v_traceState_6154_; lean_object* v_env_6155_; lean_object* v_nextMacroScope_6156_; lean_object* v_ngen_6157_; lean_object* v_auxDeclNGen_6158_; lean_object* v_cache_6159_; lean_object* v_messages_6160_; lean_object* v_infoState_6161_; lean_object* v_snapshotTasks_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6192_; 
v___x_6153_ = lean_st_ref_take(v___y_6145_);
v_traceState_6154_ = lean_ctor_get(v___x_6153_, 4);
v_env_6155_ = lean_ctor_get(v___x_6153_, 0);
v_nextMacroScope_6156_ = lean_ctor_get(v___x_6153_, 1);
v_ngen_6157_ = lean_ctor_get(v___x_6153_, 2);
v_auxDeclNGen_6158_ = lean_ctor_get(v___x_6153_, 3);
v_cache_6159_ = lean_ctor_get(v___x_6153_, 5);
v_messages_6160_ = lean_ctor_get(v___x_6153_, 6);
v_infoState_6161_ = lean_ctor_get(v___x_6153_, 7);
v_snapshotTasks_6162_ = lean_ctor_get(v___x_6153_, 8);
v_isSharedCheck_6192_ = !lean_is_exclusive(v___x_6153_);
if (v_isSharedCheck_6192_ == 0)
{
v___x_6164_ = v___x_6153_;
v_isShared_6165_ = v_isSharedCheck_6192_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_snapshotTasks_6162_);
lean_inc(v_infoState_6161_);
lean_inc(v_messages_6160_);
lean_inc(v_cache_6159_);
lean_inc(v_traceState_6154_);
lean_inc(v_auxDeclNGen_6158_);
lean_inc(v_ngen_6157_);
lean_inc(v_nextMacroScope_6156_);
lean_inc(v_env_6155_);
lean_dec(v___x_6153_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6192_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
uint64_t v_tid_6166_; lean_object* v_traces_6167_; lean_object* v___x_6169_; uint8_t v_isShared_6170_; uint8_t v_isSharedCheck_6191_; 
v_tid_6166_ = lean_ctor_get_uint64(v_traceState_6154_, sizeof(void*)*1);
v_traces_6167_ = lean_ctor_get(v_traceState_6154_, 0);
v_isSharedCheck_6191_ = !lean_is_exclusive(v_traceState_6154_);
if (v_isSharedCheck_6191_ == 0)
{
v___x_6169_ = v_traceState_6154_;
v_isShared_6170_ = v_isSharedCheck_6191_;
goto v_resetjp_6168_;
}
else
{
lean_inc(v_traces_6167_);
lean_dec(v_traceState_6154_);
v___x_6169_ = lean_box(0);
v_isShared_6170_ = v_isSharedCheck_6191_;
goto v_resetjp_6168_;
}
v_resetjp_6168_:
{
lean_object* v___x_6171_; lean_object* v___x_6172_; double v___x_6173_; uint8_t v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6182_; 
v___x_6171_ = lean_box(0);
v___x_6172_ = lean_box(0);
v___x_6173_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_6174_ = 0;
v___x_6175_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6176_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_6176_, 0, v_cls_6140_);
lean_ctor_set(v___x_6176_, 1, v___x_6172_);
lean_ctor_set(v___x_6176_, 2, v___x_6175_);
lean_ctor_set_float(v___x_6176_, sizeof(void*)*3, v___x_6173_);
lean_ctor_set_float(v___x_6176_, sizeof(void*)*3 + 8, v___x_6173_);
lean_ctor_set_uint8(v___x_6176_, sizeof(void*)*3 + 16, v___x_6174_);
v___x_6177_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_6178_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6176_);
lean_ctor_set(v___x_6178_, 1, v_a_6149_);
lean_ctor_set(v___x_6178_, 2, v___x_6177_);
lean_inc(v_ref_6147_);
v___x_6179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6179_, 0, v_ref_6147_);
lean_ctor_set(v___x_6179_, 1, v___x_6178_);
v___x_6180_ = l_Lean_PersistentArray_push___redArg(v_traces_6167_, v___x_6179_);
if (v_isShared_6170_ == 0)
{
lean_ctor_set(v___x_6169_, 0, v___x_6180_);
v___x_6182_ = v___x_6169_;
goto v_reusejp_6181_;
}
else
{
lean_object* v_reuseFailAlloc_6190_; 
v_reuseFailAlloc_6190_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6190_, 0, v___x_6180_);
lean_ctor_set_uint64(v_reuseFailAlloc_6190_, sizeof(void*)*1, v_tid_6166_);
v___x_6182_ = v_reuseFailAlloc_6190_;
goto v_reusejp_6181_;
}
v_reusejp_6181_:
{
lean_object* v___x_6184_; 
if (v_isShared_6165_ == 0)
{
lean_ctor_set(v___x_6164_, 4, v___x_6182_);
v___x_6184_ = v___x_6164_;
goto v_reusejp_6183_;
}
else
{
lean_object* v_reuseFailAlloc_6189_; 
v_reuseFailAlloc_6189_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6189_, 0, v_env_6155_);
lean_ctor_set(v_reuseFailAlloc_6189_, 1, v_nextMacroScope_6156_);
lean_ctor_set(v_reuseFailAlloc_6189_, 2, v_ngen_6157_);
lean_ctor_set(v_reuseFailAlloc_6189_, 3, v_auxDeclNGen_6158_);
lean_ctor_set(v_reuseFailAlloc_6189_, 4, v___x_6182_);
lean_ctor_set(v_reuseFailAlloc_6189_, 5, v_cache_6159_);
lean_ctor_set(v_reuseFailAlloc_6189_, 6, v_messages_6160_);
lean_ctor_set(v_reuseFailAlloc_6189_, 7, v_infoState_6161_);
lean_ctor_set(v_reuseFailAlloc_6189_, 8, v_snapshotTasks_6162_);
v___x_6184_ = v_reuseFailAlloc_6189_;
goto v_reusejp_6183_;
}
v_reusejp_6183_:
{
lean_object* v___x_6185_; lean_object* v___x_6187_; 
v___x_6185_ = lean_st_ref_put(v___y_6145_, v___x_6184_);
if (v_isShared_6152_ == 0)
{
lean_ctor_set(v___x_6151_, 0, v___x_6171_);
v___x_6187_ = v___x_6151_;
goto v_reusejp_6186_;
}
else
{
lean_object* v_reuseFailAlloc_6188_; 
v_reuseFailAlloc_6188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6188_, 0, v___x_6171_);
v___x_6187_ = v_reuseFailAlloc_6188_;
goto v_reusejp_6186_;
}
v_reusejp_6186_:
{
return v___x_6187_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object* v_cls_6194_, lean_object* v_msg_6195_, lean_object* v___y_6196_, lean_object* v___y_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_){
_start:
{
lean_object* v_res_6201_; 
v_res_6201_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6194_, v_msg_6195_, v___y_6196_, v___y_6197_, v___y_6198_, v___y_6199_);
lean_dec(v___y_6199_);
lean_dec_ref(v___y_6198_);
lean_dec(v___y_6197_);
lean_dec_ref(v___y_6196_);
return v_res_6201_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object* v_e_6202_){
_start:
{
if (lean_obj_tag(v_e_6202_) == 0)
{
uint8_t v___x_6203_; 
v___x_6203_ = 2;
return v___x_6203_;
}
else
{
lean_object* v_a_6204_; uint8_t v___x_6205_; 
v_a_6204_ = lean_ctor_get(v_e_6202_, 0);
v___x_6205_ = lean_unbox(v_a_6204_);
if (v___x_6205_ == 0)
{
uint8_t v___x_6206_; 
v___x_6206_ = 1;
return v___x_6206_;
}
else
{
uint8_t v___x_6207_; 
v___x_6207_ = 0;
return v___x_6207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object* v_e_6208_){
_start:
{
uint8_t v_res_6209_; lean_object* v_r_6210_; 
v_res_6209_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_e_6208_);
lean_dec_ref(v_e_6208_);
v_r_6210_ = lean_box(v_res_6209_);
return v_r_6210_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object* v_x_6211_){
_start:
{
if (lean_obj_tag(v_x_6211_) == 0)
{
lean_object* v_a_6213_; lean_object* v___x_6215_; uint8_t v_isShared_6216_; uint8_t v_isSharedCheck_6220_; 
v_a_6213_ = lean_ctor_get(v_x_6211_, 0);
v_isSharedCheck_6220_ = !lean_is_exclusive(v_x_6211_);
if (v_isSharedCheck_6220_ == 0)
{
v___x_6215_ = v_x_6211_;
v_isShared_6216_ = v_isSharedCheck_6220_;
goto v_resetjp_6214_;
}
else
{
lean_inc(v_a_6213_);
lean_dec(v_x_6211_);
v___x_6215_ = lean_box(0);
v_isShared_6216_ = v_isSharedCheck_6220_;
goto v_resetjp_6214_;
}
v_resetjp_6214_:
{
lean_object* v___x_6218_; 
if (v_isShared_6216_ == 0)
{
lean_ctor_set_tag(v___x_6215_, 1);
v___x_6218_ = v___x_6215_;
goto v_reusejp_6217_;
}
else
{
lean_object* v_reuseFailAlloc_6219_; 
v_reuseFailAlloc_6219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6219_, 0, v_a_6213_);
v___x_6218_ = v_reuseFailAlloc_6219_;
goto v_reusejp_6217_;
}
v_reusejp_6217_:
{
return v___x_6218_;
}
}
}
else
{
lean_object* v_a_6221_; lean_object* v___x_6223_; uint8_t v_isShared_6224_; uint8_t v_isSharedCheck_6228_; 
v_a_6221_ = lean_ctor_get(v_x_6211_, 0);
v_isSharedCheck_6228_ = !lean_is_exclusive(v_x_6211_);
if (v_isSharedCheck_6228_ == 0)
{
v___x_6223_ = v_x_6211_;
v_isShared_6224_ = v_isSharedCheck_6228_;
goto v_resetjp_6222_;
}
else
{
lean_inc(v_a_6221_);
lean_dec(v_x_6211_);
v___x_6223_ = lean_box(0);
v_isShared_6224_ = v_isSharedCheck_6228_;
goto v_resetjp_6222_;
}
v_resetjp_6222_:
{
lean_object* v___x_6226_; 
if (v_isShared_6224_ == 0)
{
lean_ctor_set_tag(v___x_6223_, 0);
v___x_6226_ = v___x_6223_;
goto v_reusejp_6225_;
}
else
{
lean_object* v_reuseFailAlloc_6227_; 
v_reuseFailAlloc_6227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6227_, 0, v_a_6221_);
v___x_6226_ = v_reuseFailAlloc_6227_;
goto v_reusejp_6225_;
}
v_reusejp_6225_:
{
return v___x_6226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object* v_x_6229_, lean_object* v___y_6230_){
_start:
{
lean_object* v_res_6231_; 
v_res_6231_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6229_);
return v_res_6231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object* v_opts_6232_, lean_object* v_opt_6233_){
_start:
{
lean_object* v_name_6234_; lean_object* v_defValue_6235_; lean_object* v_map_6236_; lean_object* v___x_6237_; 
v_name_6234_ = lean_ctor_get(v_opt_6233_, 0);
v_defValue_6235_ = lean_ctor_get(v_opt_6233_, 1);
v_map_6236_ = lean_ctor_get(v_opts_6232_, 0);
v___x_6237_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6236_, v_name_6234_);
if (lean_obj_tag(v___x_6237_) == 0)
{
lean_inc(v_defValue_6235_);
return v_defValue_6235_;
}
else
{
lean_object* v_val_6238_; 
v_val_6238_ = lean_ctor_get(v___x_6237_, 0);
lean_inc(v_val_6238_);
lean_dec_ref_known(v___x_6237_, 1);
if (lean_obj_tag(v_val_6238_) == 3)
{
lean_object* v_v_6239_; 
v_v_6239_ = lean_ctor_get(v_val_6238_, 0);
lean_inc(v_v_6239_);
lean_dec_ref_known(v_val_6238_, 1);
return v_v_6239_;
}
else
{
lean_dec(v_val_6238_);
lean_inc(v_defValue_6235_);
return v_defValue_6235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object* v_opts_6240_, lean_object* v_opt_6241_){
_start:
{
lean_object* v_res_6242_; 
v_res_6242_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6240_, v_opt_6241_);
lean_dec_ref(v_opt_6241_);
lean_dec_ref(v_opts_6240_);
return v_res_6242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t v_sz_6243_, size_t v_i_6244_, lean_object* v_bs_6245_){
_start:
{
uint8_t v___x_6246_; 
v___x_6246_ = lean_usize_dec_lt(v_i_6244_, v_sz_6243_);
if (v___x_6246_ == 0)
{
return v_bs_6245_;
}
else
{
lean_object* v_v_6247_; lean_object* v_msg_6248_; lean_object* v___x_6249_; lean_object* v_bs_x27_6250_; size_t v___x_6251_; size_t v___x_6252_; lean_object* v___x_6253_; 
v_v_6247_ = lean_array_uget_borrowed(v_bs_6245_, v_i_6244_);
v_msg_6248_ = lean_ctor_get(v_v_6247_, 1);
lean_inc_ref(v_msg_6248_);
v___x_6249_ = lean_unsigned_to_nat(0u);
v_bs_x27_6250_ = lean_array_uset(v_bs_6245_, v_i_6244_, v___x_6249_);
v___x_6251_ = ((size_t)1ULL);
v___x_6252_ = lean_usize_add(v_i_6244_, v___x_6251_);
v___x_6253_ = lean_array_uset(v_bs_x27_6250_, v_i_6244_, v_msg_6248_);
v_i_6244_ = v___x_6252_;
v_bs_6245_ = v___x_6253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_6255_, lean_object* v_i_6256_, lean_object* v_bs_6257_){
_start:
{
size_t v_sz_boxed_6258_; size_t v_i_boxed_6259_; lean_object* v_res_6260_; 
v_sz_boxed_6258_ = lean_unbox_usize(v_sz_6255_);
lean_dec(v_sz_6255_);
v_i_boxed_6259_ = lean_unbox_usize(v_i_6256_);
lean_dec(v_i_6256_);
v_res_6260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_boxed_6258_, v_i_boxed_6259_, v_bs_6257_);
return v_res_6260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object* v_oldTraces_6261_, lean_object* v_data_6262_, lean_object* v_ref_6263_, lean_object* v_msg_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_){
_start:
{
lean_object* v_toCold_6270_; lean_object* v_currRecDepth_6271_; lean_object* v_ref_6272_; uint8_t v_diag_6273_; uint8_t v_suppressElabErrors_6274_; lean_object* v_ref_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v_traceState_6278_; lean_object* v_traces_6279_; lean_object* v___x_6280_; size_t v_sz_6281_; size_t v___x_6282_; lean_object* v___x_6283_; lean_object* v_msg_6284_; lean_object* v___x_6285_; lean_object* v_a_6286_; lean_object* v___x_6288_; uint8_t v_isShared_6289_; uint8_t v_isSharedCheck_6323_; 
v_toCold_6270_ = lean_ctor_get(v___y_6267_, 0);
v_currRecDepth_6271_ = lean_ctor_get(v___y_6267_, 1);
v_ref_6272_ = lean_ctor_get(v___y_6267_, 2);
v_diag_6273_ = lean_ctor_get_uint8(v___y_6267_, sizeof(void*)*3);
v_suppressElabErrors_6274_ = lean_ctor_get_uint8(v___y_6267_, sizeof(void*)*3 + 1);
v_ref_6275_ = l_Lean_replaceRef(v_ref_6263_, v_ref_6272_);
lean_inc(v_currRecDepth_6271_);
lean_inc_ref(v_toCold_6270_);
v___x_6276_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_6276_, 0, v_toCold_6270_);
lean_ctor_set(v___x_6276_, 1, v_currRecDepth_6271_);
lean_ctor_set(v___x_6276_, 2, v_ref_6275_);
lean_ctor_set_uint8(v___x_6276_, sizeof(void*)*3, v_diag_6273_);
lean_ctor_set_uint8(v___x_6276_, sizeof(void*)*3 + 1, v_suppressElabErrors_6274_);
v___x_6277_ = lean_st_ref_get(v___y_6268_);
v_traceState_6278_ = lean_ctor_get(v___x_6277_, 4);
lean_inc_ref(v_traceState_6278_);
lean_dec(v___x_6277_);
v_traces_6279_ = lean_ctor_get(v_traceState_6278_, 0);
lean_inc_ref(v_traces_6279_);
lean_dec_ref(v_traceState_6278_);
v___x_6280_ = l_Lean_PersistentArray_toArray___redArg(v_traces_6279_);
lean_dec_ref(v_traces_6279_);
v_sz_6281_ = lean_array_size(v___x_6280_);
v___x_6282_ = ((size_t)0ULL);
v___x_6283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_6281_, v___x_6282_, v___x_6280_);
v_msg_6284_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_6284_, 0, v_data_6262_);
lean_ctor_set(v_msg_6284_, 1, v_msg_6264_);
lean_ctor_set(v_msg_6284_, 2, v___x_6283_);
v___x_6285_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6284_, v___y_6265_, v___y_6266_, v___x_6276_, v___y_6268_);
lean_dec_ref_known(v___x_6276_, 3);
v_a_6286_ = lean_ctor_get(v___x_6285_, 0);
v_isSharedCheck_6323_ = !lean_is_exclusive(v___x_6285_);
if (v_isSharedCheck_6323_ == 0)
{
v___x_6288_ = v___x_6285_;
v_isShared_6289_ = v_isSharedCheck_6323_;
goto v_resetjp_6287_;
}
else
{
lean_inc(v_a_6286_);
lean_dec(v___x_6285_);
v___x_6288_ = lean_box(0);
v_isShared_6289_ = v_isSharedCheck_6323_;
goto v_resetjp_6287_;
}
v_resetjp_6287_:
{
lean_object* v___x_6290_; lean_object* v_traceState_6291_; lean_object* v_env_6292_; lean_object* v_nextMacroScope_6293_; lean_object* v_ngen_6294_; lean_object* v_auxDeclNGen_6295_; lean_object* v_cache_6296_; lean_object* v_messages_6297_; lean_object* v_infoState_6298_; lean_object* v_snapshotTasks_6299_; lean_object* v___x_6301_; uint8_t v_isShared_6302_; uint8_t v_isSharedCheck_6322_; 
v___x_6290_ = lean_st_ref_take(v___y_6268_);
v_traceState_6291_ = lean_ctor_get(v___x_6290_, 4);
v_env_6292_ = lean_ctor_get(v___x_6290_, 0);
v_nextMacroScope_6293_ = lean_ctor_get(v___x_6290_, 1);
v_ngen_6294_ = lean_ctor_get(v___x_6290_, 2);
v_auxDeclNGen_6295_ = lean_ctor_get(v___x_6290_, 3);
v_cache_6296_ = lean_ctor_get(v___x_6290_, 5);
v_messages_6297_ = lean_ctor_get(v___x_6290_, 6);
v_infoState_6298_ = lean_ctor_get(v___x_6290_, 7);
v_snapshotTasks_6299_ = lean_ctor_get(v___x_6290_, 8);
v_isSharedCheck_6322_ = !lean_is_exclusive(v___x_6290_);
if (v_isSharedCheck_6322_ == 0)
{
v___x_6301_ = v___x_6290_;
v_isShared_6302_ = v_isSharedCheck_6322_;
goto v_resetjp_6300_;
}
else
{
lean_inc(v_snapshotTasks_6299_);
lean_inc(v_infoState_6298_);
lean_inc(v_messages_6297_);
lean_inc(v_cache_6296_);
lean_inc(v_traceState_6291_);
lean_inc(v_auxDeclNGen_6295_);
lean_inc(v_ngen_6294_);
lean_inc(v_nextMacroScope_6293_);
lean_inc(v_env_6292_);
lean_dec(v___x_6290_);
v___x_6301_ = lean_box(0);
v_isShared_6302_ = v_isSharedCheck_6322_;
goto v_resetjp_6300_;
}
v_resetjp_6300_:
{
uint64_t v_tid_6303_; lean_object* v___x_6305_; uint8_t v_isShared_6306_; uint8_t v_isSharedCheck_6320_; 
v_tid_6303_ = lean_ctor_get_uint64(v_traceState_6291_, sizeof(void*)*1);
v_isSharedCheck_6320_ = !lean_is_exclusive(v_traceState_6291_);
if (v_isSharedCheck_6320_ == 0)
{
lean_object* v_unused_6321_; 
v_unused_6321_ = lean_ctor_get(v_traceState_6291_, 0);
lean_dec(v_unused_6321_);
v___x_6305_ = v_traceState_6291_;
v_isShared_6306_ = v_isSharedCheck_6320_;
goto v_resetjp_6304_;
}
else
{
lean_dec(v_traceState_6291_);
v___x_6305_ = lean_box(0);
v_isShared_6306_ = v_isSharedCheck_6320_;
goto v_resetjp_6304_;
}
v_resetjp_6304_:
{
lean_object* v___x_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6311_; 
v___x_6307_ = lean_box(0);
v___x_6308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6308_, 0, v_ref_6263_);
lean_ctor_set(v___x_6308_, 1, v_a_6286_);
v___x_6309_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_6261_, v___x_6308_);
if (v_isShared_6306_ == 0)
{
lean_ctor_set(v___x_6305_, 0, v___x_6309_);
v___x_6311_ = v___x_6305_;
goto v_reusejp_6310_;
}
else
{
lean_object* v_reuseFailAlloc_6319_; 
v_reuseFailAlloc_6319_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6319_, 0, v___x_6309_);
lean_ctor_set_uint64(v_reuseFailAlloc_6319_, sizeof(void*)*1, v_tid_6303_);
v___x_6311_ = v_reuseFailAlloc_6319_;
goto v_reusejp_6310_;
}
v_reusejp_6310_:
{
lean_object* v___x_6313_; 
if (v_isShared_6302_ == 0)
{
lean_ctor_set(v___x_6301_, 4, v___x_6311_);
v___x_6313_ = v___x_6301_;
goto v_reusejp_6312_;
}
else
{
lean_object* v_reuseFailAlloc_6318_; 
v_reuseFailAlloc_6318_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6318_, 0, v_env_6292_);
lean_ctor_set(v_reuseFailAlloc_6318_, 1, v_nextMacroScope_6293_);
lean_ctor_set(v_reuseFailAlloc_6318_, 2, v_ngen_6294_);
lean_ctor_set(v_reuseFailAlloc_6318_, 3, v_auxDeclNGen_6295_);
lean_ctor_set(v_reuseFailAlloc_6318_, 4, v___x_6311_);
lean_ctor_set(v_reuseFailAlloc_6318_, 5, v_cache_6296_);
lean_ctor_set(v_reuseFailAlloc_6318_, 6, v_messages_6297_);
lean_ctor_set(v_reuseFailAlloc_6318_, 7, v_infoState_6298_);
lean_ctor_set(v_reuseFailAlloc_6318_, 8, v_snapshotTasks_6299_);
v___x_6313_ = v_reuseFailAlloc_6318_;
goto v_reusejp_6312_;
}
v_reusejp_6312_:
{
lean_object* v___x_6314_; lean_object* v___x_6316_; 
v___x_6314_ = lean_st_ref_put(v___y_6268_, v___x_6313_);
if (v_isShared_6289_ == 0)
{
lean_ctor_set(v___x_6288_, 0, v___x_6307_);
v___x_6316_ = v___x_6288_;
goto v_reusejp_6315_;
}
else
{
lean_object* v_reuseFailAlloc_6317_; 
v_reuseFailAlloc_6317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6317_, 0, v___x_6307_);
v___x_6316_ = v_reuseFailAlloc_6317_;
goto v_reusejp_6315_;
}
v_reusejp_6315_:
{
return v___x_6316_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object* v_oldTraces_6324_, lean_object* v_data_6325_, lean_object* v_ref_6326_, lean_object* v_msg_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_, lean_object* v___y_6330_, lean_object* v___y_6331_, lean_object* v___y_6332_){
_start:
{
lean_object* v_res_6333_; 
v_res_6333_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6324_, v_data_6325_, v_ref_6326_, v_msg_6327_, v___y_6328_, v___y_6329_, v___y_6330_, v___y_6331_);
lean_dec(v___y_6331_);
lean_dec_ref(v___y_6330_);
lean_dec(v___y_6329_);
lean_dec_ref(v___y_6328_);
return v_res_6333_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1(void){
_start:
{
lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6335_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0));
v___x_6336_ = l_Lean_stringToMessageData(v___x_6335_);
return v___x_6336_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2(void){
_start:
{
lean_object* v___x_6337_; double v___x_6338_; 
v___x_6337_ = lean_unsigned_to_nat(1000u);
v___x_6338_ = lean_float_of_nat(v___x_6337_);
return v___x_6338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object* v_cls_6339_, uint8_t v_collapsed_6340_, lean_object* v_tag_6341_, lean_object* v_opts_6342_, uint8_t v_clsEnabled_6343_, lean_object* v_oldTraces_6344_, lean_object* v_msg_6345_, lean_object* v_resStartStop_6346_, lean_object* v___y_6347_, lean_object* v___y_6348_, lean_object* v___y_6349_, lean_object* v___y_6350_, lean_object* v___y_6351_, lean_object* v___y_6352_, lean_object* v___y_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_){
_start:
{
lean_object* v_fst_6359_; lean_object* v_snd_6360_; lean_object* v___y_6362_; lean_object* v___y_6363_; lean_object* v_data_6364_; lean_object* v_fst_6375_; lean_object* v_snd_6376_; lean_object* v___x_6377_; uint8_t v___x_6378_; lean_object* v___y_6380_; lean_object* v_a_6381_; uint8_t v___y_6396_; double v___y_6427_; 
v_fst_6359_ = lean_ctor_get(v_resStartStop_6346_, 0);
lean_inc(v_fst_6359_);
v_snd_6360_ = lean_ctor_get(v_resStartStop_6346_, 1);
lean_inc(v_snd_6360_);
lean_dec_ref(v_resStartStop_6346_);
v_fst_6375_ = lean_ctor_get(v_snd_6360_, 0);
lean_inc(v_fst_6375_);
v_snd_6376_ = lean_ctor_get(v_snd_6360_, 1);
lean_inc(v_snd_6376_);
lean_dec(v_snd_6360_);
v___x_6377_ = l_Lean_trace_profiler;
v___x_6378_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6342_, v___x_6377_);
if (v___x_6378_ == 0)
{
v___y_6396_ = v___x_6378_;
goto v___jp_6395_;
}
else
{
lean_object* v___x_6432_; uint8_t v___x_6433_; 
v___x_6432_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6433_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6342_, v___x_6432_);
if (v___x_6433_ == 0)
{
lean_object* v___x_6434_; lean_object* v___x_6435_; double v___x_6436_; double v___x_6437_; double v___x_6438_; 
v___x_6434_ = l_Lean_trace_profiler_threshold;
v___x_6435_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6342_, v___x_6434_);
v___x_6436_ = lean_float_of_nat(v___x_6435_);
v___x_6437_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2);
v___x_6438_ = lean_float_div(v___x_6436_, v___x_6437_);
v___y_6427_ = v___x_6438_;
goto v___jp_6426_;
}
else
{
lean_object* v___x_6439_; lean_object* v___x_6440_; double v___x_6441_; 
v___x_6439_ = l_Lean_trace_profiler_threshold;
v___x_6440_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6342_, v___x_6439_);
v___x_6441_ = lean_float_of_nat(v___x_6440_);
v___y_6427_ = v___x_6441_;
goto v___jp_6426_;
}
}
v___jp_6361_:
{
lean_object* v___x_6365_; 
lean_inc(v___y_6362_);
v___x_6365_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6344_, v_data_6364_, v___y_6362_, v___y_6363_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_);
if (lean_obj_tag(v___x_6365_) == 0)
{
lean_object* v___x_6366_; 
lean_dec_ref_known(v___x_6365_, 1);
v___x_6366_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6359_);
return v___x_6366_;
}
else
{
lean_object* v_a_6367_; lean_object* v___x_6369_; uint8_t v_isShared_6370_; uint8_t v_isSharedCheck_6374_; 
lean_dec(v_fst_6359_);
v_a_6367_ = lean_ctor_get(v___x_6365_, 0);
v_isSharedCheck_6374_ = !lean_is_exclusive(v___x_6365_);
if (v_isSharedCheck_6374_ == 0)
{
v___x_6369_ = v___x_6365_;
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
else
{
lean_inc(v_a_6367_);
lean_dec(v___x_6365_);
v___x_6369_ = lean_box(0);
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
v_resetjp_6368_:
{
lean_object* v___x_6372_; 
if (v_isShared_6370_ == 0)
{
v___x_6372_ = v___x_6369_;
goto v_reusejp_6371_;
}
else
{
lean_object* v_reuseFailAlloc_6373_; 
v_reuseFailAlloc_6373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6373_, 0, v_a_6367_);
v___x_6372_ = v_reuseFailAlloc_6373_;
goto v_reusejp_6371_;
}
v_reusejp_6371_:
{
return v___x_6372_;
}
}
}
}
v___jp_6379_:
{
uint8_t v_result_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; double v___x_6385_; lean_object* v_data_6386_; 
v_result_6382_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_fst_6359_);
v___x_6383_ = lean_box(v_result_6382_);
v___x_6384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6384_, 0, v___x_6383_);
v___x_6385_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_6341_);
lean_inc_ref(v___x_6384_);
lean_inc(v_cls_6339_);
v_data_6386_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6386_, 0, v_cls_6339_);
lean_ctor_set(v_data_6386_, 1, v___x_6384_);
lean_ctor_set(v_data_6386_, 2, v_tag_6341_);
lean_ctor_set_float(v_data_6386_, sizeof(void*)*3, v___x_6385_);
lean_ctor_set_float(v_data_6386_, sizeof(void*)*3 + 8, v___x_6385_);
lean_ctor_set_uint8(v_data_6386_, sizeof(void*)*3 + 16, v_collapsed_6340_);
if (v___x_6378_ == 0)
{
lean_dec_ref_known(v___x_6384_, 1);
lean_dec(v_snd_6376_);
lean_dec(v_fst_6375_);
lean_dec_ref(v_tag_6341_);
lean_dec(v_cls_6339_);
v___y_6362_ = v___y_6380_;
v___y_6363_ = v_a_6381_;
v_data_6364_ = v_data_6386_;
goto v___jp_6361_;
}
else
{
lean_object* v_data_6387_; double v___x_6388_; double v___x_6389_; 
lean_dec_ref_known(v_data_6386_, 3);
v_data_6387_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6387_, 0, v_cls_6339_);
lean_ctor_set(v_data_6387_, 1, v___x_6384_);
lean_ctor_set(v_data_6387_, 2, v_tag_6341_);
v___x_6388_ = lean_unbox_float(v_fst_6375_);
lean_dec(v_fst_6375_);
lean_ctor_set_float(v_data_6387_, sizeof(void*)*3, v___x_6388_);
v___x_6389_ = lean_unbox_float(v_snd_6376_);
lean_dec(v_snd_6376_);
lean_ctor_set_float(v_data_6387_, sizeof(void*)*3 + 8, v___x_6389_);
lean_ctor_set_uint8(v_data_6387_, sizeof(void*)*3 + 16, v_collapsed_6340_);
v___y_6362_ = v___y_6380_;
v___y_6363_ = v_a_6381_;
v_data_6364_ = v_data_6387_;
goto v___jp_6361_;
}
}
v___jp_6390_:
{
lean_object* v_ref_6391_; lean_object* v___x_6392_; 
v_ref_6391_ = lean_ctor_get(v___y_6356_, 2);
lean_inc(v___y_6357_);
lean_inc_ref(v___y_6356_);
lean_inc(v___y_6355_);
lean_inc_ref(v___y_6354_);
lean_inc(v___y_6353_);
lean_inc_ref(v___y_6352_);
lean_inc(v___y_6351_);
lean_inc_ref(v___y_6350_);
lean_inc(v___y_6349_);
lean_inc(v___y_6348_);
lean_inc_ref(v___y_6347_);
lean_inc(v_fst_6359_);
v___x_6392_ = lean_apply_13(v_msg_6345_, v_fst_6359_, v___y_6347_, v___y_6348_, v___y_6349_, v___y_6350_, v___y_6351_, v___y_6352_, v___y_6353_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, lean_box(0));
if (lean_obj_tag(v___x_6392_) == 0)
{
lean_object* v_a_6393_; 
v_a_6393_ = lean_ctor_get(v___x_6392_, 0);
lean_inc(v_a_6393_);
lean_dec_ref_known(v___x_6392_, 1);
v___y_6380_ = v_ref_6391_;
v_a_6381_ = v_a_6393_;
goto v___jp_6379_;
}
else
{
lean_object* v___x_6394_; 
lean_dec_ref_known(v___x_6392_, 1);
v___x_6394_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1);
v___y_6380_ = v_ref_6391_;
v_a_6381_ = v___x_6394_;
goto v___jp_6379_;
}
}
v___jp_6395_:
{
if (v_clsEnabled_6343_ == 0)
{
if (v___y_6396_ == 0)
{
lean_object* v___x_6397_; lean_object* v_traceState_6398_; lean_object* v_env_6399_; lean_object* v_nextMacroScope_6400_; lean_object* v_ngen_6401_; lean_object* v_auxDeclNGen_6402_; lean_object* v_cache_6403_; lean_object* v_messages_6404_; lean_object* v_infoState_6405_; lean_object* v_snapshotTasks_6406_; lean_object* v___x_6408_; uint8_t v_isShared_6409_; uint8_t v_isSharedCheck_6425_; 
lean_dec(v_snd_6376_);
lean_dec(v_fst_6375_);
lean_dec_ref(v_msg_6345_);
lean_dec_ref(v_tag_6341_);
lean_dec(v_cls_6339_);
v___x_6397_ = lean_st_ref_take(v___y_6357_);
v_traceState_6398_ = lean_ctor_get(v___x_6397_, 4);
v_env_6399_ = lean_ctor_get(v___x_6397_, 0);
v_nextMacroScope_6400_ = lean_ctor_get(v___x_6397_, 1);
v_ngen_6401_ = lean_ctor_get(v___x_6397_, 2);
v_auxDeclNGen_6402_ = lean_ctor_get(v___x_6397_, 3);
v_cache_6403_ = lean_ctor_get(v___x_6397_, 5);
v_messages_6404_ = lean_ctor_get(v___x_6397_, 6);
v_infoState_6405_ = lean_ctor_get(v___x_6397_, 7);
v_snapshotTasks_6406_ = lean_ctor_get(v___x_6397_, 8);
v_isSharedCheck_6425_ = !lean_is_exclusive(v___x_6397_);
if (v_isSharedCheck_6425_ == 0)
{
v___x_6408_ = v___x_6397_;
v_isShared_6409_ = v_isSharedCheck_6425_;
goto v_resetjp_6407_;
}
else
{
lean_inc(v_snapshotTasks_6406_);
lean_inc(v_infoState_6405_);
lean_inc(v_messages_6404_);
lean_inc(v_cache_6403_);
lean_inc(v_traceState_6398_);
lean_inc(v_auxDeclNGen_6402_);
lean_inc(v_ngen_6401_);
lean_inc(v_nextMacroScope_6400_);
lean_inc(v_env_6399_);
lean_dec(v___x_6397_);
v___x_6408_ = lean_box(0);
v_isShared_6409_ = v_isSharedCheck_6425_;
goto v_resetjp_6407_;
}
v_resetjp_6407_:
{
uint64_t v_tid_6410_; lean_object* v_traces_6411_; lean_object* v___x_6413_; uint8_t v_isShared_6414_; uint8_t v_isSharedCheck_6424_; 
v_tid_6410_ = lean_ctor_get_uint64(v_traceState_6398_, sizeof(void*)*1);
v_traces_6411_ = lean_ctor_get(v_traceState_6398_, 0);
v_isSharedCheck_6424_ = !lean_is_exclusive(v_traceState_6398_);
if (v_isSharedCheck_6424_ == 0)
{
v___x_6413_ = v_traceState_6398_;
v_isShared_6414_ = v_isSharedCheck_6424_;
goto v_resetjp_6412_;
}
else
{
lean_inc(v_traces_6411_);
lean_dec(v_traceState_6398_);
v___x_6413_ = lean_box(0);
v_isShared_6414_ = v_isSharedCheck_6424_;
goto v_resetjp_6412_;
}
v_resetjp_6412_:
{
lean_object* v___x_6415_; lean_object* v___x_6417_; 
v___x_6415_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_6344_, v_traces_6411_);
lean_dec_ref(v_traces_6411_);
if (v_isShared_6414_ == 0)
{
lean_ctor_set(v___x_6413_, 0, v___x_6415_);
v___x_6417_ = v___x_6413_;
goto v_reusejp_6416_;
}
else
{
lean_object* v_reuseFailAlloc_6423_; 
v_reuseFailAlloc_6423_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6423_, 0, v___x_6415_);
lean_ctor_set_uint64(v_reuseFailAlloc_6423_, sizeof(void*)*1, v_tid_6410_);
v___x_6417_ = v_reuseFailAlloc_6423_;
goto v_reusejp_6416_;
}
v_reusejp_6416_:
{
lean_object* v___x_6419_; 
if (v_isShared_6409_ == 0)
{
lean_ctor_set(v___x_6408_, 4, v___x_6417_);
v___x_6419_ = v___x_6408_;
goto v_reusejp_6418_;
}
else
{
lean_object* v_reuseFailAlloc_6422_; 
v_reuseFailAlloc_6422_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6422_, 0, v_env_6399_);
lean_ctor_set(v_reuseFailAlloc_6422_, 1, v_nextMacroScope_6400_);
lean_ctor_set(v_reuseFailAlloc_6422_, 2, v_ngen_6401_);
lean_ctor_set(v_reuseFailAlloc_6422_, 3, v_auxDeclNGen_6402_);
lean_ctor_set(v_reuseFailAlloc_6422_, 4, v___x_6417_);
lean_ctor_set(v_reuseFailAlloc_6422_, 5, v_cache_6403_);
lean_ctor_set(v_reuseFailAlloc_6422_, 6, v_messages_6404_);
lean_ctor_set(v_reuseFailAlloc_6422_, 7, v_infoState_6405_);
lean_ctor_set(v_reuseFailAlloc_6422_, 8, v_snapshotTasks_6406_);
v___x_6419_ = v_reuseFailAlloc_6422_;
goto v_reusejp_6418_;
}
v_reusejp_6418_:
{
lean_object* v___x_6420_; lean_object* v___x_6421_; 
v___x_6420_ = lean_st_ref_put(v___y_6357_, v___x_6419_);
v___x_6421_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6359_);
return v___x_6421_;
}
}
}
}
}
else
{
goto v___jp_6390_;
}
}
else
{
goto v___jp_6390_;
}
}
v___jp_6426_:
{
double v___x_6428_; double v___x_6429_; double v___x_6430_; uint8_t v___x_6431_; 
v___x_6428_ = lean_unbox_float(v_snd_6376_);
v___x_6429_ = lean_unbox_float(v_fst_6375_);
v___x_6430_ = lean_float_sub(v___x_6428_, v___x_6429_);
v___x_6431_ = lean_float_decLt(v___y_6427_, v___x_6430_);
v___y_6396_ = v___x_6431_;
goto v___jp_6395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object** _args){
lean_object* v_cls_6442_ = _args[0];
lean_object* v_collapsed_6443_ = _args[1];
lean_object* v_tag_6444_ = _args[2];
lean_object* v_opts_6445_ = _args[3];
lean_object* v_clsEnabled_6446_ = _args[4];
lean_object* v_oldTraces_6447_ = _args[5];
lean_object* v_msg_6448_ = _args[6];
lean_object* v_resStartStop_6449_ = _args[7];
lean_object* v___y_6450_ = _args[8];
lean_object* v___y_6451_ = _args[9];
lean_object* v___y_6452_ = _args[10];
lean_object* v___y_6453_ = _args[11];
lean_object* v___y_6454_ = _args[12];
lean_object* v___y_6455_ = _args[13];
lean_object* v___y_6456_ = _args[14];
lean_object* v___y_6457_ = _args[15];
lean_object* v___y_6458_ = _args[16];
lean_object* v___y_6459_ = _args[17];
lean_object* v___y_6460_ = _args[18];
lean_object* v___y_6461_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_6462_; uint8_t v_clsEnabled_boxed_6463_; lean_object* v_res_6464_; 
v_collapsed_boxed_6462_ = lean_unbox(v_collapsed_6443_);
v_clsEnabled_boxed_6463_ = lean_unbox(v_clsEnabled_6446_);
v_res_6464_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v_cls_6442_, v_collapsed_boxed_6462_, v_tag_6444_, v_opts_6445_, v_clsEnabled_boxed_6463_, v_oldTraces_6447_, v_msg_6448_, v_resStartStop_6449_, v___y_6450_, v___y_6451_, v___y_6452_, v___y_6453_, v___y_6454_, v___y_6455_, v___y_6456_, v___y_6457_, v___y_6458_, v___y_6459_, v___y_6460_);
lean_dec(v___y_6460_);
lean_dec_ref(v___y_6459_);
lean_dec(v___y_6458_);
lean_dec_ref(v___y_6457_);
lean_dec(v___y_6456_);
lean_dec_ref(v___y_6455_);
lean_dec(v___y_6454_);
lean_dec_ref(v___y_6453_);
lean_dec(v___y_6452_);
lean_dec(v___y_6451_);
lean_dec_ref(v___y_6450_);
lean_dec_ref(v_opts_6445_);
return v_res_6464_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_6469_; lean_object* v___x_6470_; 
v___x_6469_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1));
v___x_6470_ = l_Lean_stringToMessageData(v___x_6469_);
return v___x_6470_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object* v_as_x27_6471_, lean_object* v_b_6472_, lean_object* v___y_6473_, lean_object* v___y_6474_, lean_object* v___y_6475_, lean_object* v___y_6476_, lean_object* v___y_6477_, lean_object* v___y_6478_, lean_object* v___y_6479_, lean_object* v___y_6480_, lean_object* v___y_6481_, lean_object* v___y_6482_, lean_object* v___y_6483_){
_start:
{
if (lean_obj_tag(v_as_x27_6471_) == 0)
{
lean_object* v___x_6485_; 
v___x_6485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6485_, 0, v_b_6472_);
return v___x_6485_;
}
else
{
lean_object* v_head_6486_; lean_object* v_toCold_6487_; lean_object* v_options_6488_; lean_object* v_tail_6489_; lean_object* v_name_6490_; lean_object* v_run_x27_6491_; lean_object* v_inheritedTraceOptions_6492_; uint8_t v_hasTrace_6493_; lean_object* v___x_6494_; uint8_t v___y_6496_; lean_object* v___x_6501_; lean_object* v___y_6503_; 
lean_dec_ref(v_b_6472_);
v_head_6486_ = lean_ctor_get(v_as_x27_6471_, 0);
v_toCold_6487_ = lean_ctor_get(v___y_6482_, 0);
v_options_6488_ = lean_ctor_get(v_toCold_6487_, 2);
v_tail_6489_ = lean_ctor_get(v_as_x27_6471_, 1);
v_name_6490_ = lean_ctor_get(v_head_6486_, 0);
v_run_x27_6491_ = lean_ctor_get(v_head_6486_, 1);
v_inheritedTraceOptions_6492_ = lean_ctor_get(v_toCold_6487_, 11);
v_hasTrace_6493_ = lean_ctor_get_uint8(v_options_6488_, sizeof(void*)*1);
v___x_6494_ = lean_box(0);
v___x_6501_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
if (v_hasTrace_6493_ == 0)
{
lean_object* v___x_6531_; 
lean_inc_ref(v_run_x27_6491_);
lean_inc(v___y_6483_);
lean_inc_ref(v___y_6482_);
lean_inc(v___y_6481_);
lean_inc_ref(v___y_6480_);
lean_inc(v___y_6479_);
lean_inc_ref(v___y_6478_);
lean_inc(v___y_6477_);
lean_inc_ref(v___y_6476_);
lean_inc(v___y_6475_);
lean_inc(v___y_6474_);
lean_inc_ref(v___y_6473_);
v___x_6531_ = lean_apply_12(v_run_x27_6491_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, lean_box(0));
v___y_6503_ = v___x_6531_;
goto v___jp_6502_;
}
else
{
lean_object* v___f_6532_; lean_object* v___x_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; uint8_t v___x_6536_; lean_object* v___y_6538_; lean_object* v___y_6539_; lean_object* v_a_6540_; lean_object* v___y_6553_; lean_object* v___y_6554_; lean_object* v_a_6555_; 
lean_inc(v_name_6490_);
v___f_6532_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_6532_, 0, v_name_6490_);
v___x_6533_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6534_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6535_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6536_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6492_, v_options_6488_, v___x_6535_);
if (v___x_6536_ == 0)
{
lean_object* v___x_6605_; uint8_t v___x_6606_; 
v___x_6605_ = l_Lean_trace_profiler;
v___x_6606_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6488_, v___x_6605_);
if (v___x_6606_ == 0)
{
lean_object* v___x_6607_; 
lean_dec_ref(v___f_6532_);
lean_inc_ref(v_run_x27_6491_);
lean_inc(v___y_6483_);
lean_inc_ref(v___y_6482_);
lean_inc(v___y_6481_);
lean_inc_ref(v___y_6480_);
lean_inc(v___y_6479_);
lean_inc_ref(v___y_6478_);
lean_inc(v___y_6477_);
lean_inc_ref(v___y_6476_);
lean_inc(v___y_6475_);
lean_inc(v___y_6474_);
lean_inc_ref(v___y_6473_);
v___x_6607_ = lean_apply_12(v_run_x27_6491_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, lean_box(0));
v___y_6503_ = v___x_6607_;
goto v___jp_6502_;
}
else
{
goto v___jp_6564_;
}
}
else
{
goto v___jp_6564_;
}
v___jp_6537_:
{
lean_object* v___x_6541_; double v___x_6542_; double v___x_6543_; double v___x_6544_; double v___x_6545_; double v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; 
v___x_6541_ = lean_io_mono_nanos_now();
v___x_6542_ = lean_float_of_nat(v___y_6538_);
v___x_6543_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_6544_ = lean_float_div(v___x_6542_, v___x_6543_);
v___x_6545_ = lean_float_of_nat(v___x_6541_);
v___x_6546_ = lean_float_div(v___x_6545_, v___x_6543_);
v___x_6547_ = lean_box_float(v___x_6544_);
v___x_6548_ = lean_box_float(v___x_6546_);
v___x_6549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6549_, 0, v___x_6547_);
lean_ctor_set(v___x_6549_, 1, v___x_6548_);
v___x_6550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6550_, 0, v_a_6540_);
lean_ctor_set(v___x_6550_, 1, v___x_6549_);
v___x_6551_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6533_, v_hasTrace_6493_, v___x_6534_, v_options_6488_, v___x_6536_, v___y_6539_, v___f_6532_, v___x_6550_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_);
v___y_6503_ = v___x_6551_;
goto v___jp_6502_;
}
v___jp_6552_:
{
lean_object* v___x_6556_; double v___x_6557_; double v___x_6558_; lean_object* v___x_6559_; lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v___x_6562_; lean_object* v___x_6563_; 
v___x_6556_ = lean_io_get_num_heartbeats();
v___x_6557_ = lean_float_of_nat(v___y_6553_);
v___x_6558_ = lean_float_of_nat(v___x_6556_);
v___x_6559_ = lean_box_float(v___x_6557_);
v___x_6560_ = lean_box_float(v___x_6558_);
v___x_6561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6561_, 0, v___x_6559_);
lean_ctor_set(v___x_6561_, 1, v___x_6560_);
v___x_6562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6562_, 0, v_a_6555_);
lean_ctor_set(v___x_6562_, 1, v___x_6561_);
v___x_6563_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6533_, v_hasTrace_6493_, v___x_6534_, v_options_6488_, v___x_6536_, v___y_6554_, v___f_6532_, v___x_6562_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_);
v___y_6503_ = v___x_6563_;
goto v___jp_6502_;
}
v___jp_6564_:
{
lean_object* v___x_6565_; lean_object* v_a_6566_; lean_object* v___x_6567_; uint8_t v___x_6568_; 
v___x_6565_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6483_);
v_a_6566_ = lean_ctor_get(v___x_6565_, 0);
lean_inc(v_a_6566_);
lean_dec_ref(v___x_6565_);
v___x_6567_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6568_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6488_, v___x_6567_);
if (v___x_6568_ == 0)
{
lean_object* v___x_6569_; lean_object* v___x_6570_; 
v___x_6569_ = lean_io_mono_nanos_now();
lean_inc_ref(v_run_x27_6491_);
lean_inc(v___y_6483_);
lean_inc_ref(v___y_6482_);
lean_inc(v___y_6481_);
lean_inc_ref(v___y_6480_);
lean_inc(v___y_6479_);
lean_inc_ref(v___y_6478_);
lean_inc(v___y_6477_);
lean_inc_ref(v___y_6476_);
lean_inc(v___y_6475_);
lean_inc(v___y_6474_);
lean_inc_ref(v___y_6473_);
v___x_6570_ = lean_apply_12(v_run_x27_6491_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, lean_box(0));
if (lean_obj_tag(v___x_6570_) == 0)
{
lean_object* v_a_6571_; lean_object* v___x_6573_; uint8_t v_isShared_6574_; uint8_t v_isSharedCheck_6578_; 
v_a_6571_ = lean_ctor_get(v___x_6570_, 0);
v_isSharedCheck_6578_ = !lean_is_exclusive(v___x_6570_);
if (v_isSharedCheck_6578_ == 0)
{
v___x_6573_ = v___x_6570_;
v_isShared_6574_ = v_isSharedCheck_6578_;
goto v_resetjp_6572_;
}
else
{
lean_inc(v_a_6571_);
lean_dec(v___x_6570_);
v___x_6573_ = lean_box(0);
v_isShared_6574_ = v_isSharedCheck_6578_;
goto v_resetjp_6572_;
}
v_resetjp_6572_:
{
lean_object* v___x_6576_; 
if (v_isShared_6574_ == 0)
{
lean_ctor_set_tag(v___x_6573_, 1);
v___x_6576_ = v___x_6573_;
goto v_reusejp_6575_;
}
else
{
lean_object* v_reuseFailAlloc_6577_; 
v_reuseFailAlloc_6577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6577_, 0, v_a_6571_);
v___x_6576_ = v_reuseFailAlloc_6577_;
goto v_reusejp_6575_;
}
v_reusejp_6575_:
{
v___y_6538_ = v___x_6569_;
v___y_6539_ = v_a_6566_;
v_a_6540_ = v___x_6576_;
goto v___jp_6537_;
}
}
}
else
{
lean_object* v_a_6579_; lean_object* v___x_6581_; uint8_t v_isShared_6582_; uint8_t v_isSharedCheck_6586_; 
v_a_6579_ = lean_ctor_get(v___x_6570_, 0);
v_isSharedCheck_6586_ = !lean_is_exclusive(v___x_6570_);
if (v_isSharedCheck_6586_ == 0)
{
v___x_6581_ = v___x_6570_;
v_isShared_6582_ = v_isSharedCheck_6586_;
goto v_resetjp_6580_;
}
else
{
lean_inc(v_a_6579_);
lean_dec(v___x_6570_);
v___x_6581_ = lean_box(0);
v_isShared_6582_ = v_isSharedCheck_6586_;
goto v_resetjp_6580_;
}
v_resetjp_6580_:
{
lean_object* v___x_6584_; 
if (v_isShared_6582_ == 0)
{
lean_ctor_set_tag(v___x_6581_, 0);
v___x_6584_ = v___x_6581_;
goto v_reusejp_6583_;
}
else
{
lean_object* v_reuseFailAlloc_6585_; 
v_reuseFailAlloc_6585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6585_, 0, v_a_6579_);
v___x_6584_ = v_reuseFailAlloc_6585_;
goto v_reusejp_6583_;
}
v_reusejp_6583_:
{
v___y_6538_ = v___x_6569_;
v___y_6539_ = v_a_6566_;
v_a_6540_ = v___x_6584_;
goto v___jp_6537_;
}
}
}
}
else
{
lean_object* v___x_6587_; lean_object* v___x_6588_; 
v___x_6587_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_run_x27_6491_);
lean_inc(v___y_6483_);
lean_inc_ref(v___y_6482_);
lean_inc(v___y_6481_);
lean_inc_ref(v___y_6480_);
lean_inc(v___y_6479_);
lean_inc_ref(v___y_6478_);
lean_inc(v___y_6477_);
lean_inc_ref(v___y_6476_);
lean_inc(v___y_6475_);
lean_inc(v___y_6474_);
lean_inc_ref(v___y_6473_);
v___x_6588_ = lean_apply_12(v_run_x27_6491_, v___y_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, lean_box(0));
if (lean_obj_tag(v___x_6588_) == 0)
{
lean_object* v_a_6589_; lean_object* v___x_6591_; uint8_t v_isShared_6592_; uint8_t v_isSharedCheck_6596_; 
v_a_6589_ = lean_ctor_get(v___x_6588_, 0);
v_isSharedCheck_6596_ = !lean_is_exclusive(v___x_6588_);
if (v_isSharedCheck_6596_ == 0)
{
v___x_6591_ = v___x_6588_;
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
else
{
lean_inc(v_a_6589_);
lean_dec(v___x_6588_);
v___x_6591_ = lean_box(0);
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
v_resetjp_6590_:
{
lean_object* v___x_6594_; 
if (v_isShared_6592_ == 0)
{
lean_ctor_set_tag(v___x_6591_, 1);
v___x_6594_ = v___x_6591_;
goto v_reusejp_6593_;
}
else
{
lean_object* v_reuseFailAlloc_6595_; 
v_reuseFailAlloc_6595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6595_, 0, v_a_6589_);
v___x_6594_ = v_reuseFailAlloc_6595_;
goto v_reusejp_6593_;
}
v_reusejp_6593_:
{
v___y_6553_ = v___x_6587_;
v___y_6554_ = v_a_6566_;
v_a_6555_ = v___x_6594_;
goto v___jp_6552_;
}
}
}
else
{
lean_object* v_a_6597_; lean_object* v___x_6599_; uint8_t v_isShared_6600_; uint8_t v_isSharedCheck_6604_; 
v_a_6597_ = lean_ctor_get(v___x_6588_, 0);
v_isSharedCheck_6604_ = !lean_is_exclusive(v___x_6588_);
if (v_isSharedCheck_6604_ == 0)
{
v___x_6599_ = v___x_6588_;
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
else
{
lean_inc(v_a_6597_);
lean_dec(v___x_6588_);
v___x_6599_ = lean_box(0);
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
v_resetjp_6598_:
{
lean_object* v___x_6602_; 
if (v_isShared_6600_ == 0)
{
lean_ctor_set_tag(v___x_6599_, 0);
v___x_6602_ = v___x_6599_;
goto v_reusejp_6601_;
}
else
{
lean_object* v_reuseFailAlloc_6603_; 
v_reuseFailAlloc_6603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6603_, 0, v_a_6597_);
v___x_6602_ = v_reuseFailAlloc_6603_;
goto v_reusejp_6601_;
}
v_reusejp_6601_:
{
v___y_6553_ = v___x_6587_;
v___y_6554_ = v_a_6566_;
v_a_6555_ = v___x_6602_;
goto v___jp_6552_;
}
}
}
}
}
}
v___jp_6495_:
{
lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; 
v___x_6497_ = lean_box(v___y_6496_);
v___x_6498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6498_, 0, v___x_6497_);
v___x_6499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6499_, 0, v___x_6498_);
lean_ctor_set(v___x_6499_, 1, v___x_6494_);
v___x_6500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6500_, 0, v___x_6499_);
return v___x_6500_;
}
v___jp_6502_:
{
if (lean_obj_tag(v___y_6503_) == 0)
{
lean_object* v_a_6504_; uint8_t v___x_6505_; 
v_a_6504_ = lean_ctor_get(v___y_6503_, 0);
lean_inc(v_a_6504_);
lean_dec_ref_known(v___y_6503_, 1);
v___x_6505_ = lean_unbox(v_a_6504_);
if (v___x_6505_ == 0)
{
lean_dec(v_a_6504_);
v_as_x27_6471_ = v_tail_6489_;
v_b_6472_ = v___x_6501_;
goto _start;
}
else
{
if (v_hasTrace_6493_ == 0)
{
uint8_t v___x_6507_; 
v___x_6507_ = lean_unbox(v_a_6504_);
lean_dec(v_a_6504_);
v___y_6496_ = v___x_6507_;
goto v___jp_6495_;
}
else
{
lean_object* v___x_6508_; lean_object* v___x_6509_; uint8_t v___x_6510_; 
v___x_6508_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6509_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6510_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6492_, v_options_6488_, v___x_6509_);
if (v___x_6510_ == 0)
{
uint8_t v___x_6511_; 
v___x_6511_ = lean_unbox(v_a_6504_);
lean_dec(v_a_6504_);
v___y_6496_ = v___x_6511_;
goto v___jp_6495_;
}
else
{
lean_object* v___x_6512_; lean_object* v___x_6513_; 
v___x_6512_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2);
v___x_6513_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6508_, v___x_6512_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_);
if (lean_obj_tag(v___x_6513_) == 0)
{
uint8_t v___x_6514_; 
lean_dec_ref_known(v___x_6513_, 1);
v___x_6514_ = lean_unbox(v_a_6504_);
lean_dec(v_a_6504_);
v___y_6496_ = v___x_6514_;
goto v___jp_6495_;
}
else
{
lean_object* v_a_6515_; lean_object* v___x_6517_; uint8_t v_isShared_6518_; uint8_t v_isSharedCheck_6522_; 
lean_dec(v_a_6504_);
v_a_6515_ = lean_ctor_get(v___x_6513_, 0);
v_isSharedCheck_6522_ = !lean_is_exclusive(v___x_6513_);
if (v_isSharedCheck_6522_ == 0)
{
v___x_6517_ = v___x_6513_;
v_isShared_6518_ = v_isSharedCheck_6522_;
goto v_resetjp_6516_;
}
else
{
lean_inc(v_a_6515_);
lean_dec(v___x_6513_);
v___x_6517_ = lean_box(0);
v_isShared_6518_ = v_isSharedCheck_6522_;
goto v_resetjp_6516_;
}
v_resetjp_6516_:
{
lean_object* v___x_6520_; 
if (v_isShared_6518_ == 0)
{
v___x_6520_ = v___x_6517_;
goto v_reusejp_6519_;
}
else
{
lean_object* v_reuseFailAlloc_6521_; 
v_reuseFailAlloc_6521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6521_, 0, v_a_6515_);
v___x_6520_ = v_reuseFailAlloc_6521_;
goto v_reusejp_6519_;
}
v_reusejp_6519_:
{
return v___x_6520_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6523_; lean_object* v___x_6525_; uint8_t v_isShared_6526_; uint8_t v_isSharedCheck_6530_; 
v_a_6523_ = lean_ctor_get(v___y_6503_, 0);
v_isSharedCheck_6530_ = !lean_is_exclusive(v___y_6503_);
if (v_isSharedCheck_6530_ == 0)
{
v___x_6525_ = v___y_6503_;
v_isShared_6526_ = v_isSharedCheck_6530_;
goto v_resetjp_6524_;
}
else
{
lean_inc(v_a_6523_);
lean_dec(v___y_6503_);
v___x_6525_ = lean_box(0);
v_isShared_6526_ = v_isSharedCheck_6530_;
goto v_resetjp_6524_;
}
v_resetjp_6524_:
{
lean_object* v___x_6528_; 
if (v_isShared_6526_ == 0)
{
v___x_6528_ = v___x_6525_;
goto v_reusejp_6527_;
}
else
{
lean_object* v_reuseFailAlloc_6529_; 
v_reuseFailAlloc_6529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6529_, 0, v_a_6523_);
v___x_6528_ = v_reuseFailAlloc_6529_;
goto v_reusejp_6527_;
}
v_reusejp_6527_:
{
return v___x_6528_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object* v_as_x27_6608_, lean_object* v_b_6609_, lean_object* v___y_6610_, lean_object* v___y_6611_, lean_object* v___y_6612_, lean_object* v___y_6613_, lean_object* v___y_6614_, lean_object* v___y_6615_, lean_object* v___y_6616_, lean_object* v___y_6617_, lean_object* v___y_6618_, lean_object* v___y_6619_, lean_object* v___y_6620_, lean_object* v___y_6621_){
_start:
{
lean_object* v_res_6622_; 
v_res_6622_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6608_, v_b_6609_, v___y_6610_, v___y_6611_, v___y_6612_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_, v___y_6619_, v___y_6620_);
lean_dec(v___y_6620_);
lean_dec_ref(v___y_6619_);
lean_dec(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec(v___y_6616_);
lean_dec_ref(v___y_6615_);
lean_dec(v___y_6614_);
lean_dec_ref(v___y_6613_);
lean_dec(v___y_6612_);
lean_dec(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec(v_as_x27_6608_);
return v_res_6622_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2(void){
_start:
{
lean_object* v___x_6625_; lean_object* v___x_6626_; 
v___x_6625_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1));
v___x_6626_ = l_Lean_stringToMessageData(v___x_6625_);
return v___x_6626_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4(void){
_start:
{
lean_object* v___x_6628_; lean_object* v___x_6629_; 
v___x_6628_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3));
v___x_6629_ = l_Lean_stringToMessageData(v___x_6628_);
return v___x_6629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object* v_passes_6630_, lean_object* v___y_6631_, lean_object* v___y_6632_, lean_object* v___y_6633_, lean_object* v___y_6634_, lean_object* v___y_6635_, lean_object* v___y_6636_, lean_object* v___y_6637_, lean_object* v___y_6638_, lean_object* v___y_6639_, lean_object* v___y_6640_, lean_object* v___y_6641_){
_start:
{
lean_object* v___x_6643_; lean_object* v___x_6644_; 
v___x_6643_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0));
v___x_6644_ = l_Lean_Core_checkSystem(v___x_6643_, v___y_6640_, v___y_6641_);
if (lean_obj_tag(v___x_6644_) == 0)
{
lean_object* v___x_6645_; lean_object* v_caches_6646_; lean_object* v_typeAnalysis_6647_; lean_object* v_target_6648_; lean_object* v_hypotheses_6649_; lean_object* v___x_6651_; uint8_t v_isShared_6652_; uint8_t v_isSharedCheck_6734_; 
lean_dec_ref_known(v___x_6644_, 1);
v___x_6645_ = lean_st_ref_take(v___y_6632_);
v_caches_6646_ = lean_ctor_get(v___x_6645_, 0);
v_typeAnalysis_6647_ = lean_ctor_get(v___x_6645_, 1);
v_target_6648_ = lean_ctor_get(v___x_6645_, 2);
v_hypotheses_6649_ = lean_ctor_get(v___x_6645_, 3);
v_isSharedCheck_6734_ = !lean_is_exclusive(v___x_6645_);
if (v_isSharedCheck_6734_ == 0)
{
v___x_6651_ = v___x_6645_;
v_isShared_6652_ = v_isSharedCheck_6734_;
goto v_resetjp_6650_;
}
else
{
lean_inc(v_hypotheses_6649_);
lean_inc(v_target_6648_);
lean_inc(v_typeAnalysis_6647_);
lean_inc(v_caches_6646_);
lean_dec(v___x_6645_);
v___x_6651_ = lean_box(0);
v_isShared_6652_ = v_isSharedCheck_6734_;
goto v_resetjp_6650_;
}
v_resetjp_6650_:
{
uint8_t v___x_6653_; lean_object* v___x_6655_; 
v___x_6653_ = 0;
if (v_isShared_6652_ == 0)
{
v___x_6655_ = v___x_6651_;
goto v_reusejp_6654_;
}
else
{
lean_object* v_reuseFailAlloc_6733_; 
v_reuseFailAlloc_6733_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_6733_, 0, v_caches_6646_);
lean_ctor_set(v_reuseFailAlloc_6733_, 1, v_typeAnalysis_6647_);
lean_ctor_set(v_reuseFailAlloc_6733_, 2, v_target_6648_);
lean_ctor_set(v_reuseFailAlloc_6733_, 3, v_hypotheses_6649_);
v___x_6655_ = v_reuseFailAlloc_6733_;
goto v_reusejp_6654_;
}
v_reusejp_6654_:
{
lean_object* v___x_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; 
lean_ctor_set_uint8(v___x_6655_, sizeof(void*)*4, v___x_6653_);
v___x_6656_ = lean_st_ref_put(v___y_6632_, v___x_6655_);
v___x_6657_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
v___x_6658_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_passes_6630_, v___x_6657_, v___y_6631_, v___y_6632_, v___y_6633_, v___y_6634_, v___y_6635_, v___y_6636_, v___y_6637_, v___y_6638_, v___y_6639_, v___y_6640_, v___y_6641_);
if (lean_obj_tag(v___x_6658_) == 0)
{
lean_object* v_a_6659_; lean_object* v___x_6661_; uint8_t v_isShared_6662_; uint8_t v_isSharedCheck_6724_; 
v_a_6659_ = lean_ctor_get(v___x_6658_, 0);
v_isSharedCheck_6724_ = !lean_is_exclusive(v___x_6658_);
if (v_isSharedCheck_6724_ == 0)
{
v___x_6661_ = v___x_6658_;
v_isShared_6662_ = v_isSharedCheck_6724_;
goto v_resetjp_6660_;
}
else
{
lean_inc(v_a_6659_);
lean_dec(v___x_6658_);
v___x_6661_ = lean_box(0);
v_isShared_6662_ = v_isSharedCheck_6724_;
goto v_resetjp_6660_;
}
v_resetjp_6660_:
{
lean_object* v_fst_6663_; 
v_fst_6663_ = lean_ctor_get(v_a_6659_, 0);
lean_inc(v_fst_6663_);
lean_dec(v_a_6659_);
if (lean_obj_tag(v_fst_6663_) == 0)
{
lean_object* v___x_6664_; uint8_t v_didChange_6665_; 
v___x_6664_ = lean_st_ref_get(v___y_6632_);
v_didChange_6665_ = lean_ctor_get_uint8(v___x_6664_, sizeof(void*)*4);
lean_dec(v___x_6664_);
if (v_didChange_6665_ == 0)
{
lean_object* v_toCold_6666_; lean_object* v_options_6667_; uint8_t v_hasTrace_6668_; 
v_toCold_6666_ = lean_ctor_get(v___y_6640_, 0);
v_options_6667_ = lean_ctor_get(v_toCold_6666_, 2);
v_hasTrace_6668_ = lean_ctor_get_uint8(v_options_6667_, sizeof(void*)*1);
if (v_hasTrace_6668_ == 0)
{
lean_object* v___x_6669_; lean_object* v___x_6671_; 
v___x_6669_ = lean_box(v_didChange_6665_);
if (v_isShared_6662_ == 0)
{
lean_ctor_set(v___x_6661_, 0, v___x_6669_);
v___x_6671_ = v___x_6661_;
goto v_reusejp_6670_;
}
else
{
lean_object* v_reuseFailAlloc_6672_; 
v_reuseFailAlloc_6672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6672_, 0, v___x_6669_);
v___x_6671_ = v_reuseFailAlloc_6672_;
goto v_reusejp_6670_;
}
v_reusejp_6670_:
{
return v___x_6671_;
}
}
else
{
lean_object* v_inheritedTraceOptions_6673_; lean_object* v___x_6674_; lean_object* v___x_6675_; uint8_t v___x_6676_; 
v_inheritedTraceOptions_6673_ = lean_ctor_get(v_toCold_6666_, 11);
v___x_6674_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6675_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6676_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6673_, v_options_6667_, v___x_6675_);
if (v___x_6676_ == 0)
{
lean_object* v___x_6677_; lean_object* v___x_6679_; 
v___x_6677_ = lean_box(v_didChange_6665_);
if (v_isShared_6662_ == 0)
{
lean_ctor_set(v___x_6661_, 0, v___x_6677_);
v___x_6679_ = v___x_6661_;
goto v_reusejp_6678_;
}
else
{
lean_object* v_reuseFailAlloc_6680_; 
v_reuseFailAlloc_6680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6680_, 0, v___x_6677_);
v___x_6679_ = v_reuseFailAlloc_6680_;
goto v_reusejp_6678_;
}
v_reusejp_6678_:
{
return v___x_6679_;
}
}
else
{
lean_object* v___x_6681_; lean_object* v___x_6682_; 
lean_del_object(v___x_6661_);
v___x_6681_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2);
v___x_6682_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6674_, v___x_6681_, v___y_6638_, v___y_6639_, v___y_6640_, v___y_6641_);
if (lean_obj_tag(v___x_6682_) == 0)
{
lean_object* v___x_6684_; uint8_t v_isShared_6685_; uint8_t v_isSharedCheck_6690_; 
v_isSharedCheck_6690_ = !lean_is_exclusive(v___x_6682_);
if (v_isSharedCheck_6690_ == 0)
{
lean_object* v_unused_6691_; 
v_unused_6691_ = lean_ctor_get(v___x_6682_, 0);
lean_dec(v_unused_6691_);
v___x_6684_ = v___x_6682_;
v_isShared_6685_ = v_isSharedCheck_6690_;
goto v_resetjp_6683_;
}
else
{
lean_dec(v___x_6682_);
v___x_6684_ = lean_box(0);
v_isShared_6685_ = v_isSharedCheck_6690_;
goto v_resetjp_6683_;
}
v_resetjp_6683_:
{
lean_object* v___x_6686_; lean_object* v___x_6688_; 
v___x_6686_ = lean_box(v_didChange_6665_);
if (v_isShared_6685_ == 0)
{
lean_ctor_set(v___x_6684_, 0, v___x_6686_);
v___x_6688_ = v___x_6684_;
goto v_reusejp_6687_;
}
else
{
lean_object* v_reuseFailAlloc_6689_; 
v_reuseFailAlloc_6689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6689_, 0, v___x_6686_);
v___x_6688_ = v_reuseFailAlloc_6689_;
goto v_reusejp_6687_;
}
v_reusejp_6687_:
{
return v___x_6688_;
}
}
}
else
{
lean_object* v_a_6692_; lean_object* v___x_6694_; uint8_t v_isShared_6695_; uint8_t v_isSharedCheck_6699_; 
v_a_6692_ = lean_ctor_get(v___x_6682_, 0);
v_isSharedCheck_6699_ = !lean_is_exclusive(v___x_6682_);
if (v_isSharedCheck_6699_ == 0)
{
v___x_6694_ = v___x_6682_;
v_isShared_6695_ = v_isSharedCheck_6699_;
goto v_resetjp_6693_;
}
else
{
lean_inc(v_a_6692_);
lean_dec(v___x_6682_);
v___x_6694_ = lean_box(0);
v_isShared_6695_ = v_isSharedCheck_6699_;
goto v_resetjp_6693_;
}
v_resetjp_6693_:
{
lean_object* v___x_6697_; 
if (v_isShared_6695_ == 0)
{
v___x_6697_ = v___x_6694_;
goto v_reusejp_6696_;
}
else
{
lean_object* v_reuseFailAlloc_6698_; 
v_reuseFailAlloc_6698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6698_, 0, v_a_6692_);
v___x_6697_ = v_reuseFailAlloc_6698_;
goto v_reusejp_6696_;
}
v_reusejp_6696_:
{
return v___x_6697_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_6700_; lean_object* v_options_6701_; uint8_t v_hasTrace_6702_; 
lean_del_object(v___x_6661_);
v_toCold_6700_ = lean_ctor_get(v___y_6640_, 0);
v_options_6701_ = lean_ctor_get(v_toCold_6700_, 2);
v_hasTrace_6702_ = lean_ctor_get_uint8(v_options_6701_, sizeof(void*)*1);
if (v_hasTrace_6702_ == 0)
{
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_6704_; lean_object* v___x_6705_; lean_object* v___x_6706_; uint8_t v___x_6707_; 
v_inheritedTraceOptions_6704_ = lean_ctor_get(v_toCold_6700_, 11);
v___x_6705_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6706_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6707_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6704_, v_options_6701_, v___x_6706_);
if (v___x_6707_ == 0)
{
goto _start;
}
else
{
lean_object* v___x_6709_; lean_object* v___x_6710_; 
v___x_6709_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4);
v___x_6710_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6705_, v___x_6709_, v___y_6638_, v___y_6639_, v___y_6640_, v___y_6641_);
if (lean_obj_tag(v___x_6710_) == 0)
{
lean_dec_ref_known(v___x_6710_, 1);
goto _start;
}
else
{
lean_object* v_a_6712_; lean_object* v___x_6714_; uint8_t v_isShared_6715_; uint8_t v_isSharedCheck_6719_; 
v_a_6712_ = lean_ctor_get(v___x_6710_, 0);
v_isSharedCheck_6719_ = !lean_is_exclusive(v___x_6710_);
if (v_isSharedCheck_6719_ == 0)
{
v___x_6714_ = v___x_6710_;
v_isShared_6715_ = v_isSharedCheck_6719_;
goto v_resetjp_6713_;
}
else
{
lean_inc(v_a_6712_);
lean_dec(v___x_6710_);
v___x_6714_ = lean_box(0);
v_isShared_6715_ = v_isSharedCheck_6719_;
goto v_resetjp_6713_;
}
v_resetjp_6713_:
{
lean_object* v___x_6717_; 
if (v_isShared_6715_ == 0)
{
v___x_6717_ = v___x_6714_;
goto v_reusejp_6716_;
}
else
{
lean_object* v_reuseFailAlloc_6718_; 
v_reuseFailAlloc_6718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6718_, 0, v_a_6712_);
v___x_6717_ = v_reuseFailAlloc_6718_;
goto v_reusejp_6716_;
}
v_reusejp_6716_:
{
return v___x_6717_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_6720_; lean_object* v___x_6722_; 
v_val_6720_ = lean_ctor_get(v_fst_6663_, 0);
lean_inc(v_val_6720_);
lean_dec_ref_known(v_fst_6663_, 1);
if (v_isShared_6662_ == 0)
{
lean_ctor_set(v___x_6661_, 0, v_val_6720_);
v___x_6722_ = v___x_6661_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6723_; 
v_reuseFailAlloc_6723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6723_, 0, v_val_6720_);
v___x_6722_ = v_reuseFailAlloc_6723_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
return v___x_6722_;
}
}
}
}
else
{
lean_object* v_a_6725_; lean_object* v___x_6727_; uint8_t v_isShared_6728_; uint8_t v_isSharedCheck_6732_; 
v_a_6725_ = lean_ctor_get(v___x_6658_, 0);
v_isSharedCheck_6732_ = !lean_is_exclusive(v___x_6658_);
if (v_isSharedCheck_6732_ == 0)
{
v___x_6727_ = v___x_6658_;
v_isShared_6728_ = v_isSharedCheck_6732_;
goto v_resetjp_6726_;
}
else
{
lean_inc(v_a_6725_);
lean_dec(v___x_6658_);
v___x_6727_ = lean_box(0);
v_isShared_6728_ = v_isSharedCheck_6732_;
goto v_resetjp_6726_;
}
v_resetjp_6726_:
{
lean_object* v___x_6730_; 
if (v_isShared_6728_ == 0)
{
v___x_6730_ = v___x_6727_;
goto v_reusejp_6729_;
}
else
{
lean_object* v_reuseFailAlloc_6731_; 
v_reuseFailAlloc_6731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6731_, 0, v_a_6725_);
v___x_6730_ = v_reuseFailAlloc_6731_;
goto v_reusejp_6729_;
}
v_reusejp_6729_:
{
return v___x_6730_;
}
}
}
}
}
}
else
{
lean_object* v_a_6735_; lean_object* v___x_6737_; uint8_t v_isShared_6738_; uint8_t v_isSharedCheck_6742_; 
v_a_6735_ = lean_ctor_get(v___x_6644_, 0);
v_isSharedCheck_6742_ = !lean_is_exclusive(v___x_6644_);
if (v_isSharedCheck_6742_ == 0)
{
v___x_6737_ = v___x_6644_;
v_isShared_6738_ = v_isSharedCheck_6742_;
goto v_resetjp_6736_;
}
else
{
lean_inc(v_a_6735_);
lean_dec(v___x_6644_);
v___x_6737_ = lean_box(0);
v_isShared_6738_ = v_isSharedCheck_6742_;
goto v_resetjp_6736_;
}
v_resetjp_6736_:
{
lean_object* v___x_6740_; 
if (v_isShared_6738_ == 0)
{
v___x_6740_ = v___x_6737_;
goto v_reusejp_6739_;
}
else
{
lean_object* v_reuseFailAlloc_6741_; 
v_reuseFailAlloc_6741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6741_, 0, v_a_6735_);
v___x_6740_ = v_reuseFailAlloc_6741_;
goto v_reusejp_6739_;
}
v_reusejp_6739_:
{
return v___x_6740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object* v_passes_6743_, lean_object* v___y_6744_, lean_object* v___y_6745_, lean_object* v___y_6746_, lean_object* v___y_6747_, lean_object* v___y_6748_, lean_object* v___y_6749_, lean_object* v___y_6750_, lean_object* v___y_6751_, lean_object* v___y_6752_, lean_object* v___y_6753_, lean_object* v___y_6754_, lean_object* v___y_6755_){
_start:
{
lean_object* v_res_6756_; 
v_res_6756_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6743_, v___y_6744_, v___y_6745_, v___y_6746_, v___y_6747_, v___y_6748_, v___y_6749_, v___y_6750_, v___y_6751_, v___y_6752_, v___y_6753_, v___y_6754_);
lean_dec(v___y_6754_);
lean_dec_ref(v___y_6753_);
lean_dec(v___y_6752_);
lean_dec_ref(v___y_6751_);
lean_dec(v___y_6750_);
lean_dec_ref(v___y_6749_);
lean_dec(v___y_6748_);
lean_dec_ref(v___y_6747_);
lean_dec(v___y_6746_);
lean_dec(v___y_6745_);
lean_dec_ref(v___y_6744_);
lean_dec(v_passes_6743_);
return v_res_6756_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object* v_cls_6757_, lean_object* v_msg_6758_, lean_object* v___y_6759_, lean_object* v___y_6760_, lean_object* v___y_6761_, lean_object* v___y_6762_, lean_object* v___y_6763_, lean_object* v___y_6764_, lean_object* v___y_6765_, lean_object* v___y_6766_, lean_object* v___y_6767_, lean_object* v___y_6768_, lean_object* v___y_6769_){
_start:
{
lean_object* v___x_6771_; 
v___x_6771_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6757_, v_msg_6758_, v___y_6766_, v___y_6767_, v___y_6768_, v___y_6769_);
return v___x_6771_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object* v_cls_6772_, lean_object* v_msg_6773_, lean_object* v___y_6774_, lean_object* v___y_6775_, lean_object* v___y_6776_, lean_object* v___y_6777_, lean_object* v___y_6778_, lean_object* v___y_6779_, lean_object* v___y_6780_, lean_object* v___y_6781_, lean_object* v___y_6782_, lean_object* v___y_6783_, lean_object* v___y_6784_, lean_object* v___y_6785_){
_start:
{
lean_object* v_res_6786_; 
v_res_6786_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(v_cls_6772_, v_msg_6773_, v___y_6774_, v___y_6775_, v___y_6776_, v___y_6777_, v___y_6778_, v___y_6779_, v___y_6780_, v___y_6781_, v___y_6782_, v___y_6783_, v___y_6784_);
lean_dec(v___y_6784_);
lean_dec_ref(v___y_6783_);
lean_dec(v___y_6782_);
lean_dec_ref(v___y_6781_);
lean_dec(v___y_6780_);
lean_dec_ref(v___y_6779_);
lean_dec(v___y_6778_);
lean_dec_ref(v___y_6777_);
lean_dec(v___y_6776_);
lean_dec(v___y_6775_);
lean_dec_ref(v___y_6774_);
return v_res_6786_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object* v_00_u03b1_6787_, lean_object* v_x_6788_, lean_object* v___y_6789_, lean_object* v___y_6790_, lean_object* v___y_6791_, lean_object* v___y_6792_, lean_object* v___y_6793_, lean_object* v___y_6794_, lean_object* v___y_6795_, lean_object* v___y_6796_, lean_object* v___y_6797_, lean_object* v___y_6798_, lean_object* v___y_6799_){
_start:
{
lean_object* v___x_6801_; 
v___x_6801_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6788_);
return v___x_6801_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object* v_00_u03b1_6802_, lean_object* v_x_6803_, lean_object* v___y_6804_, lean_object* v___y_6805_, lean_object* v___y_6806_, lean_object* v___y_6807_, lean_object* v___y_6808_, lean_object* v___y_6809_, lean_object* v___y_6810_, lean_object* v___y_6811_, lean_object* v___y_6812_, lean_object* v___y_6813_, lean_object* v___y_6814_, lean_object* v___y_6815_){
_start:
{
lean_object* v_res_6816_; 
v_res_6816_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(v_00_u03b1_6802_, v_x_6803_, v___y_6804_, v___y_6805_, v___y_6806_, v___y_6807_, v___y_6808_, v___y_6809_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_, v___y_6814_);
lean_dec(v___y_6814_);
lean_dec_ref(v___y_6813_);
lean_dec(v___y_6812_);
lean_dec_ref(v___y_6811_);
lean_dec(v___y_6810_);
lean_dec_ref(v___y_6809_);
lean_dec(v___y_6808_);
lean_dec_ref(v___y_6807_);
lean_dec(v___y_6806_);
lean_dec(v___y_6805_);
lean_dec_ref(v___y_6804_);
return v_res_6816_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object* v_as_6817_, lean_object* v_as_x27_6818_, lean_object* v_b_6819_, lean_object* v_a_6820_, lean_object* v___y_6821_, lean_object* v___y_6822_, lean_object* v___y_6823_, lean_object* v___y_6824_, lean_object* v___y_6825_, lean_object* v___y_6826_, lean_object* v___y_6827_, lean_object* v___y_6828_, lean_object* v___y_6829_, lean_object* v___y_6830_, lean_object* v___y_6831_){
_start:
{
lean_object* v___x_6833_; 
v___x_6833_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6818_, v_b_6819_, v___y_6821_, v___y_6822_, v___y_6823_, v___y_6824_, v___y_6825_, v___y_6826_, v___y_6827_, v___y_6828_, v___y_6829_, v___y_6830_, v___y_6831_);
return v___x_6833_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object* v_as_6834_, lean_object* v_as_x27_6835_, lean_object* v_b_6836_, lean_object* v_a_6837_, lean_object* v___y_6838_, lean_object* v___y_6839_, lean_object* v___y_6840_, lean_object* v___y_6841_, lean_object* v___y_6842_, lean_object* v___y_6843_, lean_object* v___y_6844_, lean_object* v___y_6845_, lean_object* v___y_6846_, lean_object* v___y_6847_, lean_object* v___y_6848_, lean_object* v___y_6849_){
_start:
{
lean_object* v_res_6850_; 
v_res_6850_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(v_as_6834_, v_as_x27_6835_, v_b_6836_, v_a_6837_, v___y_6838_, v___y_6839_, v___y_6840_, v___y_6841_, v___y_6842_, v___y_6843_, v___y_6844_, v___y_6845_, v___y_6846_, v___y_6847_, v___y_6848_);
lean_dec(v___y_6848_);
lean_dec_ref(v___y_6847_);
lean_dec(v___y_6846_);
lean_dec_ref(v___y_6845_);
lean_dec(v___y_6844_);
lean_dec_ref(v___y_6843_);
lean_dec(v___y_6842_);
lean_dec_ref(v___y_6841_);
lean_dec(v___y_6840_);
lean_dec(v___y_6839_);
lean_dec_ref(v___y_6838_);
lean_dec(v_as_x27_6835_);
lean_dec(v_as_6834_);
return v_res_6850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object* v_oldTraces_6851_, lean_object* v_data_6852_, lean_object* v_ref_6853_, lean_object* v_msg_6854_, lean_object* v___y_6855_, lean_object* v___y_6856_, lean_object* v___y_6857_, lean_object* v___y_6858_, lean_object* v___y_6859_, lean_object* v___y_6860_, lean_object* v___y_6861_, lean_object* v___y_6862_, lean_object* v___y_6863_, lean_object* v___y_6864_, lean_object* v___y_6865_){
_start:
{
lean_object* v___x_6867_; 
v___x_6867_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6851_, v_data_6852_, v_ref_6853_, v_msg_6854_, v___y_6862_, v___y_6863_, v___y_6864_, v___y_6865_);
return v___x_6867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object* v_oldTraces_6868_, lean_object* v_data_6869_, lean_object* v_ref_6870_, lean_object* v_msg_6871_, lean_object* v___y_6872_, lean_object* v___y_6873_, lean_object* v___y_6874_, lean_object* v___y_6875_, lean_object* v___y_6876_, lean_object* v___y_6877_, lean_object* v___y_6878_, lean_object* v___y_6879_, lean_object* v___y_6880_, lean_object* v___y_6881_, lean_object* v___y_6882_, lean_object* v___y_6883_){
_start:
{
lean_object* v_res_6884_; 
v_res_6884_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(v_oldTraces_6868_, v_data_6869_, v_ref_6870_, v_msg_6871_, v___y_6872_, v___y_6873_, v___y_6874_, v___y_6875_, v___y_6876_, v___y_6877_, v___y_6878_, v___y_6879_, v___y_6880_, v___y_6881_, v___y_6882_);
lean_dec(v___y_6882_);
lean_dec_ref(v___y_6881_);
lean_dec(v___y_6880_);
lean_dec_ref(v___y_6879_);
lean_dec(v___y_6878_);
lean_dec_ref(v___y_6877_);
lean_dec(v___y_6876_);
lean_dec_ref(v___y_6875_);
lean_dec(v___y_6874_);
lean_dec(v___y_6873_);
lean_dec_ref(v___y_6872_);
return v_res_6884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object* v_passes_6885_, lean_object* v___y_6886_, lean_object* v___y_6887_, lean_object* v___y_6888_, lean_object* v___y_6889_, lean_object* v___y_6890_, lean_object* v___y_6891_, lean_object* v___y_6892_, lean_object* v___y_6893_, lean_object* v___y_6894_, lean_object* v___y_6895_, lean_object* v___y_6896_){
_start:
{
lean_object* v___x_6898_; 
v___x_6898_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6885_, v___y_6886_, v___y_6887_, v___y_6888_, v___y_6889_, v___y_6890_, v___y_6891_, v___y_6892_, v___y_6893_, v___y_6894_, v___y_6895_, v___y_6896_);
if (lean_obj_tag(v___x_6898_) == 0)
{
lean_object* v_a_6899_; lean_object* v___x_6900_; lean_object* v___x_6902_; uint8_t v_isShared_6903_; uint8_t v_isSharedCheck_6907_; 
v_a_6899_ = lean_ctor_get(v___x_6898_, 0);
lean_inc(v_a_6899_);
lean_dec_ref_known(v___x_6898_, 1);
v___x_6900_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v___y_6886_, v___y_6887_);
v_isSharedCheck_6907_ = !lean_is_exclusive(v___x_6900_);
if (v_isSharedCheck_6907_ == 0)
{
lean_object* v_unused_6908_; 
v_unused_6908_ = lean_ctor_get(v___x_6900_, 0);
lean_dec(v_unused_6908_);
v___x_6902_ = v___x_6900_;
v_isShared_6903_ = v_isSharedCheck_6907_;
goto v_resetjp_6901_;
}
else
{
lean_dec(v___x_6900_);
v___x_6902_ = lean_box(0);
v_isShared_6903_ = v_isSharedCheck_6907_;
goto v_resetjp_6901_;
}
v_resetjp_6901_:
{
lean_object* v___x_6905_; 
if (v_isShared_6903_ == 0)
{
lean_ctor_set(v___x_6902_, 0, v_a_6899_);
v___x_6905_ = v___x_6902_;
goto v_reusejp_6904_;
}
else
{
lean_object* v_reuseFailAlloc_6906_; 
v_reuseFailAlloc_6906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6906_, 0, v_a_6899_);
v___x_6905_ = v_reuseFailAlloc_6906_;
goto v_reusejp_6904_;
}
v_reusejp_6904_:
{
return v___x_6905_;
}
}
}
else
{
return v___x_6898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object* v_passes_6909_, lean_object* v___y_6910_, lean_object* v___y_6911_, lean_object* v___y_6912_, lean_object* v___y_6913_, lean_object* v___y_6914_, lean_object* v___y_6915_, lean_object* v___y_6916_, lean_object* v___y_6917_, lean_object* v___y_6918_, lean_object* v___y_6919_, lean_object* v___y_6920_, lean_object* v___y_6921_){
_start:
{
lean_object* v_res_6922_; 
v_res_6922_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_passes_6909_, v___y_6910_, v___y_6911_, v___y_6912_, v___y_6913_, v___y_6914_, v___y_6915_, v___y_6916_, v___y_6917_, v___y_6918_, v___y_6919_, v___y_6920_);
lean_dec(v___y_6920_);
lean_dec_ref(v___y_6919_);
lean_dec(v___y_6918_);
lean_dec_ref(v___y_6917_);
lean_dec(v___y_6916_);
lean_dec_ref(v___y_6915_);
lean_dec(v___y_6914_);
lean_dec_ref(v___y_6913_);
lean_dec(v___y_6912_);
lean_dec(v___y_6911_);
lean_dec_ref(v___y_6910_);
lean_dec(v_passes_6909_);
return v_res_6922_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
