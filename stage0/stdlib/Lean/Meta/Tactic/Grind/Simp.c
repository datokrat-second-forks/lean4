// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Simp
// Imports: public import Init.Grind.Lemmas public import Lean.Meta.Tactic.Simp.Main public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.MatchDiscrOnly import Lean.Meta.Tactic.Grind.MarkNestedSubsingletons import Lean.Meta.Sym.Util import Lean.Meta.Sym.Simp.Main import Lean.Meta.Sym.DSimp.Main
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_mainCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFactCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_backward_grind_normalizer;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_foldProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_dsimpMainCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_abstractNestedProofs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markNestedSubsingletons(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_normalizeLevels(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_eraseSimpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_replacePreMatchCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_symNorm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_symNorm___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_symNorm___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_symNorm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_symNorm___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_symNorm___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind dsimp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 174, 175, 152, 201, 92, 177, 229)}};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_preprocessImpl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__5;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\n===>\n"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_preprocessImpl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__7;
LEAN_EXPORT lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pushNewFact"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 237, 7, 223, 90, 130, 102, 106)}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__3;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " ==> "};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__5;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg(lean_object* v_a_15_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_17_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_15_);
v___x_18_ = l_Lean_Meta_Grind_backward_grind_normalizer;
v___x_19_ = l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(v___x_17_, v___x_18_);
lean_dec_ref(v___x_17_);
v___x_20_ = lean_box(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg___boxed(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_22_);
lean_dec_ref(v_a_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer(lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_25_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___boxed(lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Meta_Grind_isLegacyNormalizer(v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm(lean_object* v_e_40_, lean_object* v_methods_41_, lean_object* v_dmethods_42_, lean_object* v_s_43_, lean_object* v_ds_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Grind_foldProjs(v_e_40_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_54_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_a_53_);
lean_dec_ref_known(v___x_52_, 1);
v___x_54_ = l_Lean_Meta_Sym_preprocessExpr(v_a_53_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_a_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc_n(v_a_55_, 2);
lean_dec_ref_known(v___x_54_, 1);
v___x_56_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_56_, 0, v_a_55_);
v___x_57_ = ((lean_object*)(l_Lean_Meta_Grind_symNorm___closed__0));
v___x_58_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_56_, v_methods_41_, v___x_57_, v_s_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_105_; 
v_a_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_105_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_105_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_105_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v_fst_63_; lean_object* v_snd_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_104_; 
v_fst_63_ = lean_ctor_get(v_a_59_, 0);
v_snd_64_ = lean_ctor_get(v_a_59_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_a_59_);
if (v_isSharedCheck_104_ == 0)
{
v___x_66_ = v_a_59_;
v_isShared_67_ = v_isSharedCheck_104_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_snd_64_);
lean_inc(v_fst_63_);
lean_dec(v_a_59_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_104_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___y_69_; lean_object* v___y_70_; lean_object* v___y_71_; lean_object* v_fst_82_; lean_object* v_snd_83_; 
if (lean_obj_tag(v_fst_63_) == 0)
{
lean_object* v___x_100_; 
lean_dec_ref_known(v_fst_63_, 0);
v___x_100_ = lean_box(0);
v_fst_82_ = v_a_55_;
v_snd_83_ = v___x_100_;
goto v___jp_81_;
}
else
{
lean_object* v_e_x27_101_; lean_object* v_proof_102_; lean_object* v___x_103_; 
lean_dec(v_a_55_);
v_e_x27_101_ = lean_ctor_get(v_fst_63_, 0);
lean_inc_ref(v_e_x27_101_);
v_proof_102_ = lean_ctor_get(v_fst_63_, 1);
lean_inc_ref(v_proof_102_);
lean_dec_ref_known(v_fst_63_, 2);
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v_proof_102_);
v_fst_82_ = v_e_x27_101_;
v_snd_83_ = v___x_103_;
goto v___jp_81_;
}
v___jp_68_:
{
uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_72_ = 1;
v___x_73_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_73_, 0, v___y_71_);
lean_ctor_set(v___x_73_, 1, v___y_69_);
lean_ctor_set_uint8(v___x_73_, sizeof(void*)*2, v___x_72_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___y_70_);
lean_ctor_set(v___x_66_, 0, v_snd_64_);
v___x_75_ = v___x_66_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_snd_64_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v___y_70_);
v___x_75_ = v_reuseFailAlloc_80_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_73_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 0, v___x_76_);
v___x_78_ = v___x_61_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
v___jp_81_:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
lean_inc_ref(v_fst_82_);
v___x_84_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_84_, 0, v_fst_82_);
v___x_85_ = ((lean_object*)(l_Lean_Meta_Grind_symNorm___closed__1));
v___x_86_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_84_, v_dmethods_42_, v___x_85_, v_ds_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v_fst_88_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v_fst_88_ = lean_ctor_get(v_a_87_, 0);
if (lean_obj_tag(v_fst_88_) == 0)
{
lean_object* v_snd_89_; 
v_snd_89_ = lean_ctor_get(v_a_87_, 1);
lean_inc(v_snd_89_);
lean_dec(v_a_87_);
v___y_69_ = v_snd_83_;
v___y_70_ = v_snd_89_;
v___y_71_ = v_fst_82_;
goto v___jp_68_;
}
else
{
lean_object* v_snd_90_; lean_object* v_e_x27_91_; 
lean_inc_ref(v_fst_88_);
lean_dec_ref(v_fst_82_);
v_snd_90_ = lean_ctor_get(v_a_87_, 1);
lean_inc(v_snd_90_);
lean_dec(v_a_87_);
v_e_x27_91_ = lean_ctor_get(v_fst_88_, 0);
lean_inc_ref(v_e_x27_91_);
lean_dec_ref_known(v_fst_88_, 1);
v___y_69_ = v_snd_83_;
v___y_70_ = v_snd_90_;
v___y_71_ = v_e_x27_91_;
goto v___jp_68_;
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_snd_83_);
lean_dec_ref(v_fst_82_);
lean_del_object(v___x_66_);
lean_dec(v_snd_64_);
lean_del_object(v___x_61_);
v_a_92_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_86_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_86_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
lean_dec(v_a_55_);
lean_dec_ref(v_ds_44_);
lean_dec_ref(v_dmethods_42_);
v_a_106_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_58_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_58_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
lean_dec_ref(v_ds_44_);
lean_dec_ref(v_s_43_);
lean_dec_ref(v_dmethods_42_);
lean_dec_ref(v_methods_41_);
v_a_114_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_54_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_54_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_ds_44_);
lean_dec_ref(v_s_43_);
lean_dec_ref(v_dmethods_42_);
lean_dec_ref(v_methods_41_);
v_a_122_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_52_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_52_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___boxed(lean_object* v_e_130_, lean_object* v_methods_131_, lean_object* v_dmethods_132_, lean_object* v_s_133_, lean_object* v_ds_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Meta_Grind_symNorm(v_e_130_, v_methods_131_, v_dmethods_132_, v_s_133_, v_ds_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(lean_object* v_category_143_, lean_object* v_opts_144_, lean_object* v_act_145_, lean_object* v_decl_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_inc(v___y_155_);
lean_inc_ref(v___y_154_);
lean_inc(v___y_153_);
lean_inc_ref(v___y_152_);
lean_inc(v___y_151_);
lean_inc_ref(v___y_150_);
lean_inc(v___y_149_);
lean_inc_ref(v___y_148_);
lean_inc(v___y_147_);
v___x_157_ = lean_apply_9(v_act_145_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
v___x_158_ = l_Lean_profileitIOUnsafe___redArg(v_category_143_, v_opts_144_, v___x_157_, v_decl_146_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg___boxed(lean_object* v_category_159_, lean_object* v_opts_160_, lean_object* v_act_161_, lean_object* v_decl_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v_category_159_, v_opts_160_, v_act_161_, v_decl_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v_opts_160_);
lean_dec_ref(v_category_159_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(lean_object* v_00_u03b1_174_, lean_object* v_category_175_, lean_object* v_opts_176_, lean_object* v_act_177_, lean_object* v_decl_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v_category_175_, v_opts_176_, v_act_177_, v_decl_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___boxed(lean_object* v_00_u03b1_190_, lean_object* v_category_191_, lean_object* v_opts_192_, lean_object* v_act_193_, lean_object* v_decl_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(v_00_u03b1_190_, v_category_191_, v_opts_192_, v_act_193_, v_decl_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v_opts_192_);
lean_dec_ref(v_category_191_);
return v_res_205_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_209_);
lean_ctor_set(v___x_211_, 2, v___x_209_);
lean_ctor_set(v___x_211_, 3, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__1);
v___x_213_ = lean_unsigned_to_nat(0u);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(lean_object* v_e_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v___x_226_; lean_object* v_congrThms_227_; lean_object* v_simp_228_; lean_object* v_symSimp_229_; lean_object* v_symDSimp_230_; lean_object* v_lastTag_231_; lean_object* v_counters_232_; lean_object* v_splitDiags_233_; lean_object* v_ematchDiags_234_; lean_object* v_lawfulEqCmpMap_235_; lean_object* v_reflCmpMap_236_; lean_object* v_anchors_237_; lean_object* v_instanceMap_238_; lean_object* v_hoistedDecls_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_294_; 
v___x_226_ = lean_st_ref_take(v___y_218_);
v_congrThms_227_ = lean_ctor_get(v___x_226_, 0);
v_simp_228_ = lean_ctor_get(v___x_226_, 1);
v_symSimp_229_ = lean_ctor_get(v___x_226_, 2);
v_symDSimp_230_ = lean_ctor_get(v___x_226_, 3);
v_lastTag_231_ = lean_ctor_get(v___x_226_, 4);
v_counters_232_ = lean_ctor_get(v___x_226_, 5);
v_splitDiags_233_ = lean_ctor_get(v___x_226_, 6);
v_ematchDiags_234_ = lean_ctor_get(v___x_226_, 7);
v_lawfulEqCmpMap_235_ = lean_ctor_get(v___x_226_, 8);
v_reflCmpMap_236_ = lean_ctor_get(v___x_226_, 9);
v_anchors_237_ = lean_ctor_get(v___x_226_, 10);
v_instanceMap_238_ = lean_ctor_get(v___x_226_, 11);
v_hoistedDecls_239_ = lean_ctor_get(v___x_226_, 12);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_294_ == 0)
{
v___x_241_ = v___x_226_;
v_isShared_242_ = v_isSharedCheck_294_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_hoistedDecls_239_);
lean_inc(v_instanceMap_238_);
lean_inc(v_anchors_237_);
lean_inc(v_reflCmpMap_236_);
lean_inc(v_lawfulEqCmpMap_235_);
lean_inc(v_ematchDiags_234_);
lean_inc(v_splitDiags_233_);
lean_inc(v_counters_232_);
lean_inc(v_lastTag_231_);
lean_inc(v_symDSimp_230_);
lean_inc(v_symSimp_229_);
lean_inc(v_simp_228_);
lean_inc(v_congrThms_227_);
lean_dec(v___x_226_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_294_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_243_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__2);
v___x_244_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__3);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 3, v___x_244_);
lean_ctor_set(v___x_241_, 2, v___x_243_);
v___x_246_ = v___x_241_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_congrThms_227_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_simp_228_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v_lastTag_231_);
lean_ctor_set(v_reuseFailAlloc_293_, 5, v_counters_232_);
lean_ctor_set(v_reuseFailAlloc_293_, 6, v_splitDiags_233_);
lean_ctor_set(v_reuseFailAlloc_293_, 7, v_ematchDiags_234_);
lean_ctor_set(v_reuseFailAlloc_293_, 8, v_lawfulEqCmpMap_235_);
lean_ctor_set(v_reuseFailAlloc_293_, 9, v_reflCmpMap_236_);
lean_ctor_set(v_reuseFailAlloc_293_, 10, v_anchors_237_);
lean_ctor_set(v_reuseFailAlloc_293_, 11, v_instanceMap_238_);
lean_ctor_set(v_reuseFailAlloc_293_, 12, v_hoistedDecls_239_);
v___x_246_ = v_reuseFailAlloc_293_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_object* v___x_247_; lean_object* v_symSimpMethods_248_; lean_object* v_symDSimpMethods_249_; lean_object* v___x_250_; 
v___x_247_ = lean_st_ref_put(v___y_218_, v___x_246_);
v_symSimpMethods_248_ = lean_ctor_get(v___y_217_, 2);
v_symDSimpMethods_249_ = lean_ctor_get(v___y_217_, 3);
lean_inc_ref(v_symDSimpMethods_249_);
lean_inc_ref(v_symSimpMethods_248_);
v___x_250_ = l_Lean_Meta_Grind_symNorm(v_e_215_, v_symSimpMethods_248_, v_symDSimpMethods_249_, v_symSimp_229_, v_symDSimp_230_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_284_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_284_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_284_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_284_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v_snd_255_; lean_object* v_fst_256_; lean_object* v_fst_257_; lean_object* v_snd_258_; lean_object* v___x_259_; lean_object* v_congrThms_260_; lean_object* v_simp_261_; lean_object* v_lastTag_262_; lean_object* v_counters_263_; lean_object* v_splitDiags_264_; lean_object* v_ematchDiags_265_; lean_object* v_lawfulEqCmpMap_266_; lean_object* v_reflCmpMap_267_; lean_object* v_anchors_268_; lean_object* v_instanceMap_269_; lean_object* v_hoistedDecls_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_281_; 
v_snd_255_ = lean_ctor_get(v_a_251_, 1);
lean_inc(v_snd_255_);
v_fst_256_ = lean_ctor_get(v_a_251_, 0);
lean_inc(v_fst_256_);
lean_dec(v_a_251_);
v_fst_257_ = lean_ctor_get(v_snd_255_, 0);
lean_inc(v_fst_257_);
v_snd_258_ = lean_ctor_get(v_snd_255_, 1);
lean_inc(v_snd_258_);
lean_dec(v_snd_255_);
v___x_259_ = lean_st_ref_take(v___y_218_);
v_congrThms_260_ = lean_ctor_get(v___x_259_, 0);
v_simp_261_ = lean_ctor_get(v___x_259_, 1);
v_lastTag_262_ = lean_ctor_get(v___x_259_, 4);
v_counters_263_ = lean_ctor_get(v___x_259_, 5);
v_splitDiags_264_ = lean_ctor_get(v___x_259_, 6);
v_ematchDiags_265_ = lean_ctor_get(v___x_259_, 7);
v_lawfulEqCmpMap_266_ = lean_ctor_get(v___x_259_, 8);
v_reflCmpMap_267_ = lean_ctor_get(v___x_259_, 9);
v_anchors_268_ = lean_ctor_get(v___x_259_, 10);
v_instanceMap_269_ = lean_ctor_get(v___x_259_, 11);
v_hoistedDecls_270_ = lean_ctor_get(v___x_259_, 12);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_281_ == 0)
{
lean_object* v_unused_282_; lean_object* v_unused_283_; 
v_unused_282_ = lean_ctor_get(v___x_259_, 3);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v___x_259_, 2);
lean_dec(v_unused_283_);
v___x_272_ = v___x_259_;
v_isShared_273_ = v_isSharedCheck_281_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_hoistedDecls_270_);
lean_inc(v_instanceMap_269_);
lean_inc(v_anchors_268_);
lean_inc(v_reflCmpMap_267_);
lean_inc(v_lawfulEqCmpMap_266_);
lean_inc(v_ematchDiags_265_);
lean_inc(v_splitDiags_264_);
lean_inc(v_counters_263_);
lean_inc(v_lastTag_262_);
lean_inc(v_simp_261_);
lean_inc(v_congrThms_260_);
lean_dec(v___x_259_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_281_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 3, v_snd_258_);
lean_ctor_set(v___x_272_, 2, v_fst_257_);
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_congrThms_260_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_simp_261_);
lean_ctor_set(v_reuseFailAlloc_280_, 2, v_fst_257_);
lean_ctor_set(v_reuseFailAlloc_280_, 3, v_snd_258_);
lean_ctor_set(v_reuseFailAlloc_280_, 4, v_lastTag_262_);
lean_ctor_set(v_reuseFailAlloc_280_, 5, v_counters_263_);
lean_ctor_set(v_reuseFailAlloc_280_, 6, v_splitDiags_264_);
lean_ctor_set(v_reuseFailAlloc_280_, 7, v_ematchDiags_265_);
lean_ctor_set(v_reuseFailAlloc_280_, 8, v_lawfulEqCmpMap_266_);
lean_ctor_set(v_reuseFailAlloc_280_, 9, v_reflCmpMap_267_);
lean_ctor_set(v_reuseFailAlloc_280_, 10, v_anchors_268_);
lean_ctor_set(v_reuseFailAlloc_280_, 11, v_instanceMap_269_);
lean_ctor_set(v_reuseFailAlloc_280_, 12, v_hoistedDecls_270_);
v___x_275_ = v_reuseFailAlloc_280_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_st_ref_put(v___y_218_, v___x_275_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v_fst_256_);
v___x_278_ = v___x_253_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_fst_256_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
v_a_285_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_250_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_250_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed(lean_object* v_e_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(v_e_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(lean_object* v_e_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___f_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___f_319_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_319_, 0, v_e_308_);
v___x_320_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_316_);
v___x_321_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0));
v___x_322_ = lean_box(0);
v___x_323_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_321_, v___x_320_, v___f_319_, v___x_322_, v_a_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
lean_dec_ref(v___x_320_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___boxed(lean_object* v_e_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(v_e_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
return v_res_335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__0);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(lean_object* v_e_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_Meta_Grind_foldProjs(v_e_341_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_354_; 
v_a_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_353_);
lean_dec_ref_known(v___x_352_, 1);
v___x_354_ = l_Lean_Meta_Sym_preprocessExpr(v_a_353_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v_congrThms_357_; lean_object* v_simp_358_; lean_object* v_symSimp_359_; lean_object* v_symDSimp_360_; lean_object* v_lastTag_361_; lean_object* v_counters_362_; lean_object* v_splitDiags_363_; lean_object* v_ematchDiags_364_; lean_object* v_lawfulEqCmpMap_365_; lean_object* v_reflCmpMap_366_; lean_object* v_anchors_367_; lean_object* v_instanceMap_368_; lean_object* v_hoistedDecls_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_426_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = lean_st_ref_take(v___y_344_);
v_congrThms_357_ = lean_ctor_get(v___x_356_, 0);
v_simp_358_ = lean_ctor_get(v___x_356_, 1);
v_symSimp_359_ = lean_ctor_get(v___x_356_, 2);
v_symDSimp_360_ = lean_ctor_get(v___x_356_, 3);
v_lastTag_361_ = lean_ctor_get(v___x_356_, 4);
v_counters_362_ = lean_ctor_get(v___x_356_, 5);
v_splitDiags_363_ = lean_ctor_get(v___x_356_, 6);
v_ematchDiags_364_ = lean_ctor_get(v___x_356_, 7);
v_lawfulEqCmpMap_365_ = lean_ctor_get(v___x_356_, 8);
v_reflCmpMap_366_ = lean_ctor_get(v___x_356_, 9);
v_anchors_367_ = lean_ctor_get(v___x_356_, 10);
v_instanceMap_368_ = lean_ctor_get(v___x_356_, 11);
v_hoistedDecls_369_ = lean_ctor_get(v___x_356_, 12);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_426_ == 0)
{
v___x_371_ = v___x_356_;
v_isShared_372_ = v_isSharedCheck_426_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_hoistedDecls_369_);
lean_inc(v_instanceMap_368_);
lean_inc(v_anchors_367_);
lean_inc(v_reflCmpMap_366_);
lean_inc(v_lawfulEqCmpMap_365_);
lean_inc(v_ematchDiags_364_);
lean_inc(v_splitDiags_363_);
lean_inc(v_counters_362_);
lean_inc(v_lastTag_361_);
lean_inc(v_symDSimp_360_);
lean_inc(v_symSimp_359_);
lean_inc(v_simp_358_);
lean_inc(v_congrThms_357_);
lean_dec(v___x_356_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_426_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___closed__1);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 3, v___x_373_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_congrThms_357_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_simp_358_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_symSimp_359_);
lean_ctor_set(v_reuseFailAlloc_425_, 3, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_425_, 4, v_lastTag_361_);
lean_ctor_set(v_reuseFailAlloc_425_, 5, v_counters_362_);
lean_ctor_set(v_reuseFailAlloc_425_, 6, v_splitDiags_363_);
lean_ctor_set(v_reuseFailAlloc_425_, 7, v_ematchDiags_364_);
lean_ctor_set(v_reuseFailAlloc_425_, 8, v_lawfulEqCmpMap_365_);
lean_ctor_set(v_reuseFailAlloc_425_, 9, v_reflCmpMap_366_);
lean_ctor_set(v_reuseFailAlloc_425_, 10, v_anchors_367_);
lean_ctor_set(v_reuseFailAlloc_425_, 11, v_instanceMap_368_);
lean_ctor_set(v_reuseFailAlloc_425_, 12, v_hoistedDecls_369_);
v___x_375_ = v_reuseFailAlloc_425_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_376_; lean_object* v_symDSimpMethods_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_376_ = lean_st_ref_put(v___y_344_, v___x_375_);
v_symDSimpMethods_377_ = lean_ctor_get(v___y_343_, 3);
lean_inc(v_a_355_);
v___x_378_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_378_, 0, v_a_355_);
v___x_379_ = ((lean_object*)(l_Lean_Meta_Grind_symNorm___closed__1));
lean_inc_ref(v_symDSimpMethods_377_);
v___x_380_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_378_, v_symDSimpMethods_377_, v___x_379_, v_symDSimp_360_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_416_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_416_ == 0)
{
v___x_383_ = v___x_380_;
v_isShared_384_ = v_isSharedCheck_416_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_380_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_416_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v_fst_385_; lean_object* v_snd_386_; lean_object* v___x_387_; lean_object* v_congrThms_388_; lean_object* v_simp_389_; lean_object* v_symSimp_390_; lean_object* v_lastTag_391_; lean_object* v_counters_392_; lean_object* v_splitDiags_393_; lean_object* v_ematchDiags_394_; lean_object* v_lawfulEqCmpMap_395_; lean_object* v_reflCmpMap_396_; lean_object* v_anchors_397_; lean_object* v_instanceMap_398_; lean_object* v_hoistedDecls_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_414_; 
v_fst_385_ = lean_ctor_get(v_a_381_, 0);
lean_inc(v_fst_385_);
v_snd_386_ = lean_ctor_get(v_a_381_, 1);
lean_inc(v_snd_386_);
lean_dec(v_a_381_);
v___x_387_ = lean_st_ref_take(v___y_344_);
v_congrThms_388_ = lean_ctor_get(v___x_387_, 0);
v_simp_389_ = lean_ctor_get(v___x_387_, 1);
v_symSimp_390_ = lean_ctor_get(v___x_387_, 2);
v_lastTag_391_ = lean_ctor_get(v___x_387_, 4);
v_counters_392_ = lean_ctor_get(v___x_387_, 5);
v_splitDiags_393_ = lean_ctor_get(v___x_387_, 6);
v_ematchDiags_394_ = lean_ctor_get(v___x_387_, 7);
v_lawfulEqCmpMap_395_ = lean_ctor_get(v___x_387_, 8);
v_reflCmpMap_396_ = lean_ctor_get(v___x_387_, 9);
v_anchors_397_ = lean_ctor_get(v___x_387_, 10);
v_instanceMap_398_ = lean_ctor_get(v___x_387_, 11);
v_hoistedDecls_399_ = lean_ctor_get(v___x_387_, 12);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_387_, 3);
lean_dec(v_unused_415_);
v___x_401_ = v___x_387_;
v_isShared_402_ = v_isSharedCheck_414_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_hoistedDecls_399_);
lean_inc(v_instanceMap_398_);
lean_inc(v_anchors_397_);
lean_inc(v_reflCmpMap_396_);
lean_inc(v_lawfulEqCmpMap_395_);
lean_inc(v_ematchDiags_394_);
lean_inc(v_splitDiags_393_);
lean_inc(v_counters_392_);
lean_inc(v_lastTag_391_);
lean_inc(v_symSimp_390_);
lean_inc(v_simp_389_);
lean_inc(v_congrThms_388_);
lean_dec(v___x_387_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_414_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 3, v_snd_386_);
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_congrThms_388_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_simp_389_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_symSimp_390_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_snd_386_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_lastTag_391_);
lean_ctor_set(v_reuseFailAlloc_413_, 5, v_counters_392_);
lean_ctor_set(v_reuseFailAlloc_413_, 6, v_splitDiags_393_);
lean_ctor_set(v_reuseFailAlloc_413_, 7, v_ematchDiags_394_);
lean_ctor_set(v_reuseFailAlloc_413_, 8, v_lawfulEqCmpMap_395_);
lean_ctor_set(v_reuseFailAlloc_413_, 9, v_reflCmpMap_396_);
lean_ctor_set(v_reuseFailAlloc_413_, 10, v_anchors_397_);
lean_ctor_set(v_reuseFailAlloc_413_, 11, v_instanceMap_398_);
lean_ctor_set(v_reuseFailAlloc_413_, 12, v_hoistedDecls_399_);
v___x_404_ = v_reuseFailAlloc_413_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; 
v___x_405_ = lean_st_ref_put(v___y_344_, v___x_404_);
if (lean_obj_tag(v_fst_385_) == 0)
{
lean_object* v___x_407_; 
lean_dec_ref_known(v_fst_385_, 0);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v_a_355_);
v___x_407_ = v___x_383_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_355_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
else
{
lean_object* v_e_x27_409_; lean_object* v___x_411_; 
lean_dec(v_a_355_);
v_e_x27_409_ = lean_ctor_get(v_fst_385_, 0);
lean_inc_ref(v_e_x27_409_);
lean_dec_ref_known(v_fst_385_, 1);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v_e_x27_409_);
v___x_411_ = v___x_383_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_e_x27_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_a_355_);
v_a_417_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_380_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_380_);
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
}
}
else
{
return v___x_354_;
}
}
else
{
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed(lean_object* v_e_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(v_e_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(lean_object* v_e_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v___f_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___f_451_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_451_, 0, v_e_440_);
v___x_452_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_448_);
v___x_453_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0));
v___x_454_ = lean_box(0);
v___x_455_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_453_, v___x_452_, v___f_451_, v___x_454_, v_a_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_);
lean_dec_ref(v___x_452_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___boxed(lean_object* v_e_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(v_e_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
lean_dec(v_a_465_);
lean_dec_ref(v_a_464_);
lean_dec(v_a_463_);
lean_dec_ref(v_a_462_);
lean_dec(v_a_461_);
lean_dec_ref(v_a_460_);
lean_dec(v_a_459_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
return v_res_467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_box(0);
v___x_469_ = lean_unsigned_to_nat(16u);
v___x_470_ = lean_mk_array(v___x_469_, v___x_468_);
return v___x_470_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0);
v___x_472_ = lean_unsigned_to_nat(0u);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; 
v___x_476_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_477_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1);
v___x_478_ = 1;
v___x_479_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_476_);
lean_ctor_set_uint8(v___x_479_, sizeof(void*)*2, v___x_478_);
return v___x_479_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_480_);
return v___x_482_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_unsigned_to_nat(32u);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6(void){
_start:
{
size_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_486_ = ((size_t)5ULL);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = lean_unsigned_to_nat(32u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5);
v___x_491_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
lean_ctor_set(v___x_491_, 2, v___x_487_);
lean_ctor_set(v___x_491_, 3, v___x_487_);
lean_ctor_set_usize(v___x_491_, 4, v___x_486_);
return v___x_491_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6);
v___x_493_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_494_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
lean_ctor_set(v___x_494_, 2, v___x_493_);
lean_ctor_set(v___x_494_, 3, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_495_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7);
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4);
v___x_498_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1);
v___x_499_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3);
v___x_500_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_498_);
lean_ctor_set(v___x_500_, 2, v___x_498_);
lean_ctor_set(v___x_500_, 3, v___x_497_);
lean_ctor_set(v___x_500_, 4, v___x_496_);
lean_ctor_set(v___x_500_, 5, v___x_495_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(lean_object* v_e_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v___x_512_; lean_object* v_congrThms_513_; lean_object* v_simp_514_; lean_object* v_symSimp_515_; lean_object* v_symDSimp_516_; lean_object* v_lastTag_517_; lean_object* v_counters_518_; lean_object* v_splitDiags_519_; lean_object* v_ematchDiags_520_; lean_object* v_lawfulEqCmpMap_521_; lean_object* v_reflCmpMap_522_; lean_object* v_anchors_523_; lean_object* v_instanceMap_524_; lean_object* v_hoistedDecls_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_577_; 
v___x_512_ = lean_st_ref_take(v___y_504_);
v_congrThms_513_ = lean_ctor_get(v___x_512_, 0);
v_simp_514_ = lean_ctor_get(v___x_512_, 1);
v_symSimp_515_ = lean_ctor_get(v___x_512_, 2);
v_symDSimp_516_ = lean_ctor_get(v___x_512_, 3);
v_lastTag_517_ = lean_ctor_get(v___x_512_, 4);
v_counters_518_ = lean_ctor_get(v___x_512_, 5);
v_splitDiags_519_ = lean_ctor_get(v___x_512_, 6);
v_ematchDiags_520_ = lean_ctor_get(v___x_512_, 7);
v_lawfulEqCmpMap_521_ = lean_ctor_get(v___x_512_, 8);
v_reflCmpMap_522_ = lean_ctor_get(v___x_512_, 9);
v_anchors_523_ = lean_ctor_get(v___x_512_, 10);
v_instanceMap_524_ = lean_ctor_get(v___x_512_, 11);
v_hoistedDecls_525_ = lean_ctor_get(v___x_512_, 12);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_577_ == 0)
{
v___x_527_ = v___x_512_;
v_isShared_528_ = v_isSharedCheck_577_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_hoistedDecls_525_);
lean_inc(v_instanceMap_524_);
lean_inc(v_anchors_523_);
lean_inc(v_reflCmpMap_522_);
lean_inc(v_lawfulEqCmpMap_521_);
lean_inc(v_ematchDiags_520_);
lean_inc(v_splitDiags_519_);
lean_inc(v_counters_518_);
lean_inc(v_lastTag_517_);
lean_inc(v_symDSimp_516_);
lean_inc(v_symSimp_515_);
lean_inc(v_simp_514_);
lean_inc(v_congrThms_513_);
lean_dec(v___x_512_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_577_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v___x_529_);
v___x_531_ = v___x_527_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_congrThms_513_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_symSimp_515_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v_symDSimp_516_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v_lastTag_517_);
lean_ctor_set(v_reuseFailAlloc_576_, 5, v_counters_518_);
lean_ctor_set(v_reuseFailAlloc_576_, 6, v_splitDiags_519_);
lean_ctor_set(v_reuseFailAlloc_576_, 7, v_ematchDiags_520_);
lean_ctor_set(v_reuseFailAlloc_576_, 8, v_lawfulEqCmpMap_521_);
lean_ctor_set(v_reuseFailAlloc_576_, 9, v_reflCmpMap_522_);
lean_ctor_set(v_reuseFailAlloc_576_, 10, v_anchors_523_);
lean_ctor_set(v_reuseFailAlloc_576_, 11, v_instanceMap_524_);
lean_ctor_set(v_reuseFailAlloc_576_, 12, v_hoistedDecls_525_);
v___x_531_ = v_reuseFailAlloc_576_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_532_; lean_object* v_simp_533_; lean_object* v_simpMethods_534_; lean_object* v___x_535_; 
v___x_532_ = lean_st_ref_put(v___y_504_, v___x_531_);
v_simp_533_ = lean_ctor_get(v___y_503_, 0);
v_simpMethods_534_ = lean_ctor_get(v___y_503_, 1);
lean_inc_ref(v_simpMethods_534_);
lean_inc_ref(v_simp_533_);
v___x_535_ = l_Lean_Meta_Simp_mainCore(v_e_501_, v_simp_533_, v_simp_514_, v_simpMethods_534_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_567_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_567_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_567_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_567_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v___x_542_; lean_object* v_congrThms_543_; lean_object* v_symSimp_544_; lean_object* v_symDSimp_545_; lean_object* v_lastTag_546_; lean_object* v_counters_547_; lean_object* v_splitDiags_548_; lean_object* v_ematchDiags_549_; lean_object* v_lawfulEqCmpMap_550_; lean_object* v_reflCmpMap_551_; lean_object* v_anchors_552_; lean_object* v_instanceMap_553_; lean_object* v_hoistedDecls_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_565_; 
v_fst_540_ = lean_ctor_get(v_a_536_, 0);
lean_inc(v_fst_540_);
v_snd_541_ = lean_ctor_get(v_a_536_, 1);
lean_inc(v_snd_541_);
lean_dec(v_a_536_);
v___x_542_ = lean_st_ref_take(v___y_504_);
v_congrThms_543_ = lean_ctor_get(v___x_542_, 0);
v_symSimp_544_ = lean_ctor_get(v___x_542_, 2);
v_symDSimp_545_ = lean_ctor_get(v___x_542_, 3);
v_lastTag_546_ = lean_ctor_get(v___x_542_, 4);
v_counters_547_ = lean_ctor_get(v___x_542_, 5);
v_splitDiags_548_ = lean_ctor_get(v___x_542_, 6);
v_ematchDiags_549_ = lean_ctor_get(v___x_542_, 7);
v_lawfulEqCmpMap_550_ = lean_ctor_get(v___x_542_, 8);
v_reflCmpMap_551_ = lean_ctor_get(v___x_542_, 9);
v_anchors_552_ = lean_ctor_get(v___x_542_, 10);
v_instanceMap_553_ = lean_ctor_get(v___x_542_, 11);
v_hoistedDecls_554_ = lean_ctor_get(v___x_542_, 12);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_565_ == 0)
{
lean_object* v_unused_566_; 
v_unused_566_ = lean_ctor_get(v___x_542_, 1);
lean_dec(v_unused_566_);
v___x_556_ = v___x_542_;
v_isShared_557_ = v_isSharedCheck_565_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_hoistedDecls_554_);
lean_inc(v_instanceMap_553_);
lean_inc(v_anchors_552_);
lean_inc(v_reflCmpMap_551_);
lean_inc(v_lawfulEqCmpMap_550_);
lean_inc(v_ematchDiags_549_);
lean_inc(v_splitDiags_548_);
lean_inc(v_counters_547_);
lean_inc(v_lastTag_546_);
lean_inc(v_symDSimp_545_);
lean_inc(v_symSimp_544_);
lean_inc(v_congrThms_543_);
lean_dec(v___x_542_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_565_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_snd_541_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_congrThms_543_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_snd_541_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v_symSimp_544_);
lean_ctor_set(v_reuseFailAlloc_564_, 3, v_symDSimp_545_);
lean_ctor_set(v_reuseFailAlloc_564_, 4, v_lastTag_546_);
lean_ctor_set(v_reuseFailAlloc_564_, 5, v_counters_547_);
lean_ctor_set(v_reuseFailAlloc_564_, 6, v_splitDiags_548_);
lean_ctor_set(v_reuseFailAlloc_564_, 7, v_ematchDiags_549_);
lean_ctor_set(v_reuseFailAlloc_564_, 8, v_lawfulEqCmpMap_550_);
lean_ctor_set(v_reuseFailAlloc_564_, 9, v_reflCmpMap_551_);
lean_ctor_set(v_reuseFailAlloc_564_, 10, v_anchors_552_);
lean_ctor_set(v_reuseFailAlloc_564_, 11, v_instanceMap_553_);
lean_ctor_set(v_reuseFailAlloc_564_, 12, v_hoistedDecls_554_);
v___x_559_ = v_reuseFailAlloc_564_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_560_ = lean_st_ref_put(v___y_504_, v___x_559_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v_fst_540_);
v___x_562_ = v___x_538_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_fst_540_);
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
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
v_a_568_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_535_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_535_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed(lean_object* v_e_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(v_e_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(lean_object* v_e_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v___f_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___f_601_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_601_, 0, v_e_590_);
v___x_602_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_598_);
v___x_603_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0));
v___x_604_ = lean_box(0);
v___x_605_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_603_, v___x_602_, v___f_601_, v___x_604_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
lean_dec_ref(v___x_602_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___boxed(lean_object* v_e_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(v_e_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec(v_a_613_);
lean_dec_ref(v_a_612_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
lean_dec(v_a_607_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(lean_object* v_e_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v___x_629_; lean_object* v_congrThms_630_; lean_object* v_simp_631_; lean_object* v_symSimp_632_; lean_object* v_symDSimp_633_; lean_object* v_lastTag_634_; lean_object* v_counters_635_; lean_object* v_splitDiags_636_; lean_object* v_ematchDiags_637_; lean_object* v_lawfulEqCmpMap_638_; lean_object* v_reflCmpMap_639_; lean_object* v_anchors_640_; lean_object* v_instanceMap_641_; lean_object* v_hoistedDecls_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_696_; 
v___x_629_ = lean_st_ref_take(v___y_621_);
v_congrThms_630_ = lean_ctor_get(v___x_629_, 0);
v_simp_631_ = lean_ctor_get(v___x_629_, 1);
v_symSimp_632_ = lean_ctor_get(v___x_629_, 2);
v_symDSimp_633_ = lean_ctor_get(v___x_629_, 3);
v_lastTag_634_ = lean_ctor_get(v___x_629_, 4);
v_counters_635_ = lean_ctor_get(v___x_629_, 5);
v_splitDiags_636_ = lean_ctor_get(v___x_629_, 6);
v_ematchDiags_637_ = lean_ctor_get(v___x_629_, 7);
v_lawfulEqCmpMap_638_ = lean_ctor_get(v___x_629_, 8);
v_reflCmpMap_639_ = lean_ctor_get(v___x_629_, 9);
v_anchors_640_ = lean_ctor_get(v___x_629_, 10);
v_instanceMap_641_ = lean_ctor_get(v___x_629_, 11);
v_hoistedDecls_642_ = lean_ctor_get(v___x_629_, 12);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_696_ == 0)
{
v___x_644_ = v___x_629_;
v_isShared_645_ = v_isSharedCheck_696_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_hoistedDecls_642_);
lean_inc(v_instanceMap_641_);
lean_inc(v_anchors_640_);
lean_inc(v_reflCmpMap_639_);
lean_inc(v_lawfulEqCmpMap_638_);
lean_inc(v_ematchDiags_637_);
lean_inc(v_splitDiags_636_);
lean_inc(v_counters_635_);
lean_inc(v_lastTag_634_);
lean_inc(v_symDSimp_633_);
lean_inc(v_symSimp_632_);
lean_inc(v_simp_631_);
lean_inc(v_congrThms_630_);
lean_dec(v___x_629_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_696_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_646_ = lean_unsigned_to_nat(32u);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
lean_dec_ref(v___x_647_);
v___x_648_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v___x_648_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_congrThms_630_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_695_, 2, v_symSimp_632_);
lean_ctor_set(v_reuseFailAlloc_695_, 3, v_symDSimp_633_);
lean_ctor_set(v_reuseFailAlloc_695_, 4, v_lastTag_634_);
lean_ctor_set(v_reuseFailAlloc_695_, 5, v_counters_635_);
lean_ctor_set(v_reuseFailAlloc_695_, 6, v_splitDiags_636_);
lean_ctor_set(v_reuseFailAlloc_695_, 7, v_ematchDiags_637_);
lean_ctor_set(v_reuseFailAlloc_695_, 8, v_lawfulEqCmpMap_638_);
lean_ctor_set(v_reuseFailAlloc_695_, 9, v_reflCmpMap_639_);
lean_ctor_set(v_reuseFailAlloc_695_, 10, v_anchors_640_);
lean_ctor_set(v_reuseFailAlloc_695_, 11, v_instanceMap_641_);
lean_ctor_set(v_reuseFailAlloc_695_, 12, v_hoistedDecls_642_);
v___x_650_ = v_reuseFailAlloc_695_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; lean_object* v_simp_652_; lean_object* v_simpMethods_653_; lean_object* v___x_654_; 
v___x_651_ = lean_st_ref_put(v___y_621_, v___x_650_);
v_simp_652_ = lean_ctor_get(v___y_620_, 0);
v_simpMethods_653_ = lean_ctor_get(v___y_620_, 1);
lean_inc_ref(v_simpMethods_653_);
lean_inc_ref(v_simp_652_);
v___x_654_ = l_Lean_Meta_Simp_dsimpMainCore(v_e_618_, v_simp_652_, v_simp_631_, v_simpMethods_653_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_686_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_686_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_686_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_686_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_661_; lean_object* v_congrThms_662_; lean_object* v_symSimp_663_; lean_object* v_symDSimp_664_; lean_object* v_lastTag_665_; lean_object* v_counters_666_; lean_object* v_splitDiags_667_; lean_object* v_ematchDiags_668_; lean_object* v_lawfulEqCmpMap_669_; lean_object* v_reflCmpMap_670_; lean_object* v_anchors_671_; lean_object* v_instanceMap_672_; lean_object* v_hoistedDecls_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_684_; 
v_fst_659_ = lean_ctor_get(v_a_655_, 0);
lean_inc(v_fst_659_);
v_snd_660_ = lean_ctor_get(v_a_655_, 1);
lean_inc(v_snd_660_);
lean_dec(v_a_655_);
v___x_661_ = lean_st_ref_take(v___y_621_);
v_congrThms_662_ = lean_ctor_get(v___x_661_, 0);
v_symSimp_663_ = lean_ctor_get(v___x_661_, 2);
v_symDSimp_664_ = lean_ctor_get(v___x_661_, 3);
v_lastTag_665_ = lean_ctor_get(v___x_661_, 4);
v_counters_666_ = lean_ctor_get(v___x_661_, 5);
v_splitDiags_667_ = lean_ctor_get(v___x_661_, 6);
v_ematchDiags_668_ = lean_ctor_get(v___x_661_, 7);
v_lawfulEqCmpMap_669_ = lean_ctor_get(v___x_661_, 8);
v_reflCmpMap_670_ = lean_ctor_get(v___x_661_, 9);
v_anchors_671_ = lean_ctor_get(v___x_661_, 10);
v_instanceMap_672_ = lean_ctor_get(v___x_661_, 11);
v_hoistedDecls_673_ = lean_ctor_get(v___x_661_, 12);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v___x_661_, 1);
lean_dec(v_unused_685_);
v___x_675_ = v___x_661_;
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_hoistedDecls_673_);
lean_inc(v_instanceMap_672_);
lean_inc(v_anchors_671_);
lean_inc(v_reflCmpMap_670_);
lean_inc(v_lawfulEqCmpMap_669_);
lean_inc(v_ematchDiags_668_);
lean_inc(v_splitDiags_667_);
lean_inc(v_counters_666_);
lean_inc(v_lastTag_665_);
lean_inc(v_symDSimp_664_);
lean_inc(v_symSimp_663_);
lean_inc(v_congrThms_662_);
lean_dec(v___x_661_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v_snd_660_);
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_congrThms_662_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_snd_660_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_symSimp_663_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_symDSimp_664_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_lastTag_665_);
lean_ctor_set(v_reuseFailAlloc_683_, 5, v_counters_666_);
lean_ctor_set(v_reuseFailAlloc_683_, 6, v_splitDiags_667_);
lean_ctor_set(v_reuseFailAlloc_683_, 7, v_ematchDiags_668_);
lean_ctor_set(v_reuseFailAlloc_683_, 8, v_lawfulEqCmpMap_669_);
lean_ctor_set(v_reuseFailAlloc_683_, 9, v_reflCmpMap_670_);
lean_ctor_set(v_reuseFailAlloc_683_, 10, v_anchors_671_);
lean_ctor_set(v_reuseFailAlloc_683_, 11, v_instanceMap_672_);
lean_ctor_set(v_reuseFailAlloc_683_, 12, v_hoistedDecls_673_);
v___x_678_ = v_reuseFailAlloc_683_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_st_ref_put(v___y_621_, v___x_678_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_fst_659_);
v___x_681_ = v___x_657_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_fst_659_);
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
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_a_687_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_654_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_654_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed(lean_object* v_e_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(v_e_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(lean_object* v_e_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v___f_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___f_720_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_720_, 0, v_e_709_);
v___x_721_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_717_);
v___x_722_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0));
v___x_723_ = lean_box(0);
v___x_724_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_722_, v___x_721_, v___f_720_, v___x_723_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_);
lean_dec_ref(v___x_721_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___boxed(lean_object* v_e_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(v_e_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_726_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore(lean_object* v_e_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v___x_748_; lean_object* v_a_749_; uint8_t v___x_750_; 
v___x_748_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_745_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref(v___x_748_);
v___x_750_ = lean_unbox(v_a_749_);
lean_dec(v_a_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(v_e_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; 
v___x_752_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(v_e_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
return v___x_752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore___boxed(lean_object* v_e_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Meta_Grind_simpCore(v_e_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
lean_dec(v_a_756_);
lean_dec_ref(v_a_755_);
lean_dec(v_a_754_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore(lean_object* v_e_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v___x_776_; lean_object* v_a_777_; uint8_t v___x_778_; 
v___x_776_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_773_);
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref(v___x_776_);
v___x_778_ = lean_unbox(v_a_777_);
lean_dec(v_a_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; 
v___x_779_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(v_e_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
return v___x_779_;
}
else
{
lean_object* v___x_780_; 
v___x_780_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(v_e_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore___boxed(lean_object* v_e_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_Meta_Grind_dsimpCore(v_e_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
lean_dec(v_a_784_);
lean_dec_ref(v_a_783_);
lean_dec(v_a_782_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(lean_object* v_e_793_, lean_object* v___y_794_){
_start:
{
uint8_t v___x_796_; 
v___x_796_ = l_Lean_Expr_hasMVar(v_e_793_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; 
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v_e_793_);
return v___x_797_;
}
else
{
lean_object* v___x_798_; lean_object* v_mctx_799_; lean_object* v___x_800_; lean_object* v_fst_801_; lean_object* v_snd_802_; lean_object* v___x_803_; lean_object* v_cache_804_; lean_object* v_zetaDeltaFVarIds_805_; lean_object* v_postponed_806_; lean_object* v_diag_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_816_; 
v___x_798_ = lean_st_ref_get(v___y_794_);
v_mctx_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc_ref(v_mctx_799_);
lean_dec(v___x_798_);
v___x_800_ = l_Lean_instantiateMVarsCore(v_mctx_799_, v_e_793_);
v_fst_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_fst_801_);
v_snd_802_ = lean_ctor_get(v___x_800_, 1);
lean_inc(v_snd_802_);
lean_dec_ref(v___x_800_);
v___x_803_ = lean_st_ref_take(v___y_794_);
v_cache_804_ = lean_ctor_get(v___x_803_, 1);
v_zetaDeltaFVarIds_805_ = lean_ctor_get(v___x_803_, 2);
v_postponed_806_ = lean_ctor_get(v___x_803_, 3);
v_diag_807_ = lean_ctor_get(v___x_803_, 4);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_816_ == 0)
{
lean_object* v_unused_817_; 
v_unused_817_ = lean_ctor_get(v___x_803_, 0);
lean_dec(v_unused_817_);
v___x_809_ = v___x_803_;
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_diag_807_);
lean_inc(v_postponed_806_);
lean_inc(v_zetaDeltaFVarIds_805_);
lean_inc(v_cache_804_);
lean_dec(v___x_803_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v_snd_802_);
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_snd_802_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_cache_804_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_zetaDeltaFVarIds_805_);
lean_ctor_set(v_reuseFailAlloc_815_, 3, v_postponed_806_);
lean_ctor_set(v_reuseFailAlloc_815_, 4, v_diag_807_);
v___x_812_ = v_reuseFailAlloc_815_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lean_st_ref_put(v___y_794_, v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v_fst_801_);
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg___boxed(lean_object* v_e_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_818_, v___y_819_);
lean_dec(v___y_819_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(lean_object* v_e_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_822_, v___y_830_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___boxed(lean_object* v_e_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(v_e_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec(v___y_836_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(lean_object* v_msgData_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v___x_854_; lean_object* v_env_855_; uint8_t v___x_856_; lean_object* v_env_857_; lean_object* v___x_858_; lean_object* v_toCold_859_; lean_object* v_mctx_860_; lean_object* v_lctx_861_; lean_object* v_options_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_854_ = lean_st_ref_get(v___y_852_);
v_env_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc_ref(v_env_855_);
lean_dec(v___x_854_);
v___x_856_ = 0;
v_env_857_ = l_Lean_Environment_setRecordingDeps(v_env_855_, v___x_856_);
v___x_858_ = lean_st_ref_get(v___y_850_);
v_toCold_859_ = lean_ctor_get(v___y_851_, 0);
v_mctx_860_ = lean_ctor_get(v___x_858_, 0);
lean_inc_ref(v_mctx_860_);
lean_dec(v___x_858_);
v_lctx_861_ = lean_ctor_get(v___y_849_, 2);
v_options_862_ = lean_ctor_get(v_toCold_859_, 2);
lean_inc_ref(v_options_862_);
lean_inc_ref(v_lctx_861_);
v___x_863_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_863_, 0, v_env_857_);
lean_ctor_set(v___x_863_, 1, v_mctx_860_);
lean_ctor_set(v___x_863_, 2, v_lctx_861_);
lean_ctor_set(v___x_863_, 3, v_options_862_);
v___x_864_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
lean_ctor_set(v___x_864_, 1, v_msgData_848_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1___boxed(lean_object* v_msgData_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(v_msgData_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
return v_res_872_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_873_; double v___x_874_; 
v___x_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = lean_float_of_nat(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(lean_object* v_cls_878_, lean_object* v_msg_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_ref_885_; lean_object* v___x_886_; lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_932_; 
v_ref_885_ = lean_ctor_get(v___y_882_, 2);
v___x_886_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(v_msg_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
v_a_887_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_932_ == 0)
{
v___x_889_ = v___x_886_;
v_isShared_890_ = v_isSharedCheck_932_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_886_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_932_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v_traceState_892_; lean_object* v_env_893_; lean_object* v_nextMacroScope_894_; lean_object* v_ngen_895_; lean_object* v_auxDeclNGen_896_; lean_object* v_cache_897_; lean_object* v_recordedDeps_898_; lean_object* v_messages_899_; lean_object* v_infoState_900_; lean_object* v_snapshotTasks_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_931_; 
v___x_891_ = lean_st_ref_take(v___y_883_);
v_traceState_892_ = lean_ctor_get(v___x_891_, 4);
v_env_893_ = lean_ctor_get(v___x_891_, 0);
v_nextMacroScope_894_ = lean_ctor_get(v___x_891_, 1);
v_ngen_895_ = lean_ctor_get(v___x_891_, 2);
v_auxDeclNGen_896_ = lean_ctor_get(v___x_891_, 3);
v_cache_897_ = lean_ctor_get(v___x_891_, 5);
v_recordedDeps_898_ = lean_ctor_get(v___x_891_, 6);
v_messages_899_ = lean_ctor_get(v___x_891_, 7);
v_infoState_900_ = lean_ctor_get(v___x_891_, 8);
v_snapshotTasks_901_ = lean_ctor_get(v___x_891_, 9);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_931_ == 0)
{
v___x_903_ = v___x_891_;
v_isShared_904_ = v_isSharedCheck_931_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_snapshotTasks_901_);
lean_inc(v_infoState_900_);
lean_inc(v_messages_899_);
lean_inc(v_recordedDeps_898_);
lean_inc(v_cache_897_);
lean_inc(v_traceState_892_);
lean_inc(v_auxDeclNGen_896_);
lean_inc(v_ngen_895_);
lean_inc(v_nextMacroScope_894_);
lean_inc(v_env_893_);
lean_dec(v___x_891_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_931_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
uint64_t v_tid_905_; lean_object* v_traces_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_930_; 
v_tid_905_ = lean_ctor_get_uint64(v_traceState_892_, sizeof(void*)*1);
v_traces_906_ = lean_ctor_get(v_traceState_892_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v_traceState_892_);
if (v_isSharedCheck_930_ == 0)
{
v___x_908_ = v_traceState_892_;
v_isShared_909_ = v_isSharedCheck_930_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_traces_906_);
lean_dec(v_traceState_892_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_930_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; double v___x_912_; uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_910_ = lean_box(0);
v___x_911_ = lean_box(0);
v___x_912_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0);
v___x_913_ = 0;
v___x_914_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1));
v___x_915_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_915_, 0, v_cls_878_);
lean_ctor_set(v___x_915_, 1, v___x_911_);
lean_ctor_set(v___x_915_, 2, v___x_914_);
lean_ctor_set_float(v___x_915_, sizeof(void*)*3, v___x_912_);
lean_ctor_set_float(v___x_915_, sizeof(void*)*3 + 8, v___x_912_);
lean_ctor_set_uint8(v___x_915_, sizeof(void*)*3 + 16, v___x_913_);
v___x_916_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2));
v___x_917_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v_a_887_);
lean_ctor_set(v___x_917_, 2, v___x_916_);
lean_inc(v_ref_885_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v_ref_885_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_PersistentArray_push___redArg(v_traces_906_, v___x_918_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_919_);
v___x_921_ = v___x_908_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_919_);
lean_ctor_set_uint64(v_reuseFailAlloc_929_, sizeof(void*)*1, v_tid_905_);
v___x_921_ = v_reuseFailAlloc_929_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_923_; 
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 4, v___x_921_);
v___x_923_ = v___x_903_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_env_893_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_nextMacroScope_894_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_ngen_895_);
lean_ctor_set(v_reuseFailAlloc_928_, 3, v_auxDeclNGen_896_);
lean_ctor_set(v_reuseFailAlloc_928_, 4, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_928_, 5, v_cache_897_);
lean_ctor_set(v_reuseFailAlloc_928_, 6, v_recordedDeps_898_);
lean_ctor_set(v_reuseFailAlloc_928_, 7, v_messages_899_);
lean_ctor_set(v_reuseFailAlloc_928_, 8, v_infoState_900_);
lean_ctor_set(v_reuseFailAlloc_928_, 9, v_snapshotTasks_901_);
v___x_923_ = v_reuseFailAlloc_928_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_924_ = lean_st_ref_put(v___y_883_, v___x_923_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_910_);
v___x_926_ = v___x_889_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_910_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___boxed(lean_object* v_cls_933_, lean_object* v_msg_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v_cls_933_, v_msg_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
return v_res_940_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_preprocessImpl___closed__5(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__2));
v___x_950_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__4));
v___x_951_ = l_Lean_Name_append(v___x_950_, v___x_949_);
return v___x_951_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_preprocessImpl___closed__7(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__6));
v___x_954_ = l_Lean_stringToMessageData(v___x_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* lean_grind_preprocess(lean_object* v_e_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v___x_967_; lean_object* v_a_968_; lean_object* v___x_969_; 
v___x_967_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_955_, v_a_963_);
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc_n(v_a_968_, 2);
lean_dec_ref(v___x_967_);
v___x_969_ = l_Lean_Meta_Grind_simpCore(v_a_968_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v_expr_971_; lean_object* v___x_972_; lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v_expr_971_ = lean_ctor_get(v_a_970_, 0);
lean_inc_ref(v_expr_971_);
v___x_972_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_expr_971_, v_a_963_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = l_Lean_Meta_Sym_unfoldReducible(v_a_973_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = l_Lean_Meta_Grind_abstractNestedProofs___redArg(v_a_975_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_978_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___x_978_ = l_Lean_Meta_Grind_markNestedSubsingletons(v_a_977_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_a_979_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = l_Lean_Meta_Grind_foldProjs(v_a_981_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lean_Meta_Sym_normalizeLevels(v_a_983_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = l_Lean_Meta_Grind_eraseSimpMatchDiscrsOnly(v_a_985_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_988_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc_n(v_a_987_, 2);
lean_dec_ref_known(v___x_986_, 1);
v___x_988_ = l_Lean_Meta_Simp_Result_mkEqTrans(v_a_970_, v_a_987_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v_expr_990_; lean_object* v___x_991_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v_expr_990_ = lean_ctor_get(v_a_987_, 0);
lean_inc_ref(v_expr_990_);
lean_dec(v_a_987_);
v___x_991_ = l_Lean_Meta_Grind_replacePreMatchCond(v_expr_990_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_993_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc_n(v_a_992_, 2);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = l_Lean_Meta_Simp_Result_mkEqTrans(v_a_989_, v_a_992_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v_expr_995_; lean_object* v___x_996_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v_expr_995_ = lean_ctor_get(v_a_992_, 0);
lean_inc_ref(v_expr_995_);
lean_dec(v_a_992_);
v___x_996_ = l_Lean_Meta_Sym_canon(v_expr_995_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_998_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
v___x_998_ = l_Lean_Meta_Sym_shareCommon(v_a_997_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1047_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1047_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1047_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_toCold_1017_; lean_object* v_options_1018_; uint8_t v_hasTrace_1019_; 
v_toCold_1017_ = lean_ctor_get(v_a_964_, 0);
v_options_1018_ = lean_ctor_get(v_toCold_1017_, 2);
v_hasTrace_1019_ = lean_ctor_get_uint8(v_options_1018_, sizeof(void*)*1);
if (v_hasTrace_1019_ == 0)
{
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
goto v___jp_1003_;
}
else
{
lean_object* v_inheritedTraceOptions_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v_inheritedTraceOptions_1020_ = lean_ctor_get(v_toCold_1017_, 11);
v___x_1021_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__2));
v___x_1022_ = lean_obj_once(&l_Lean_Meta_Grind_preprocessImpl___closed__5, &l_Lean_Meta_Grind_preprocessImpl___closed__5_once, _init_l_Lean_Meta_Grind_preprocessImpl___closed__5);
v___x_1023_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1020_, v_options_1018_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
goto v___jp_1003_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_Meta_Grind_updateLastTag(v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec_ref_known(v___x_1024_, 1);
v___x_1025_ = l_Lean_MessageData_ofExpr(v_a_968_);
v___x_1026_ = lean_obj_once(&l_Lean_Meta_Grind_preprocessImpl___closed__7, &l_Lean_Meta_Grind_preprocessImpl___closed__7_once, _init_l_Lean_Meta_Grind_preprocessImpl___closed__7);
v___x_1027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
lean_inc(v_a_999_);
v___x_1028_ = l_Lean_MessageData_ofExpr(v_a_999_);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1021_, v___x_1029_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_dec_ref_known(v___x_1030_, 1);
goto v___jp_1003_;
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_del_object(v___x_1001_);
lean_dec(v_a_999_);
lean_dec(v_a_994_);
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
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
lean_del_object(v___x_1001_);
lean_dec(v_a_999_);
lean_dec(v_a_994_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
v_a_1039_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1024_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1024_);
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
v___jp_1003_:
{
lean_object* v_proof_x3f_1004_; uint8_t v_cache_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1015_; 
v_proof_x3f_1004_ = lean_ctor_get(v_a_994_, 1);
v_cache_1005_ = lean_ctor_get_uint8(v_a_994_, sizeof(void*)*2);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_a_994_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v_a_994_, 0);
lean_dec(v_unused_1016_);
v___x_1007_ = v_a_994_;
v_isShared_1008_ = v_isSharedCheck_1015_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_proof_x3f_1004_);
lean_dec(v_a_994_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1015_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v_a_999_);
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_999_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_proof_x3f_1004_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*2, v_cache_1005_);
v___x_1010_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1010_);
v___x_1012_ = v___x_1001_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1010_);
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
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec(v_a_994_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1048_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_998_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_998_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_a_994_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1056_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_996_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_996_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
else
{
lean_dec(v_a_992_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v___x_993_;
}
}
else
{
lean_dec(v_a_989_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v___x_991_;
}
}
else
{
lean_dec(v_a_987_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v___x_988_;
}
}
else
{
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v___x_986_;
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1064_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_984_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_984_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1072_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_982_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_982_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1080_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_980_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_980_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1088_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_978_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_978_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1096_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_976_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_976_);
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
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec(v_a_970_);
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
v_a_1104_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_974_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_974_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_dec(v_a_968_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessImpl___boxed(lean_object* v_e_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = lean_grind_preprocess(v_e_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(lean_object* v_cls_1125_, lean_object* v_msg_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v_cls_1125_, v_msg_1126_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___boxed(lean_object* v_cls_1139_, lean_object* v_msg_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(v_cls_1139_, v_msg_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec(v___y_1141_);
return v_res_1152_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1160_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__4));
v___x_1161_ = l_Lean_Name_append(v___x_1160_, v___x_1159_);
return v___x_1161_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__5(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__4));
v___x_1164_ = l_Lean_stringToMessageData(v___x_1163_);
return v___x_1164_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__10(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__9));
v___x_1174_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__8));
v___x_1175_ = l_Lean_mkConst(v___x_1174_, v___x_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27(lean_object* v_prop_1176_, lean_object* v_proof_1177_, lean_object* v_generation_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v___x_1190_; 
lean_inc(v_a_1188_);
lean_inc_ref(v_a_1187_);
lean_inc(v_a_1186_);
lean_inc_ref(v_a_1185_);
lean_inc(v_a_1184_);
lean_inc_ref(v_a_1183_);
lean_inc(v_a_1182_);
lean_inc_ref(v_a_1181_);
lean_inc(v_a_1180_);
lean_inc(v_a_1179_);
lean_inc_ref(v_prop_1176_);
v___x_1190_ = lean_grind_preprocess(v_prop_1176_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v_expr_1192_; lean_object* v_proof_x3f_1193_; lean_object* v___y_1195_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref_known(v___x_1190_, 1);
v_expr_1192_ = lean_ctor_get(v_a_1191_, 0);
lean_inc_ref(v_expr_1192_);
v_proof_x3f_1193_ = lean_ctor_get(v_a_1191_, 1);
lean_inc(v_proof_x3f_1193_);
lean_dec(v_a_1191_);
if (lean_obj_tag(v_proof_x3f_1193_) == 1)
{
lean_object* v_val_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v_val_1212_ = lean_ctor_get(v_proof_x3f_1193_, 0);
lean_inc(v_val_1212_);
lean_dec_ref_known(v_proof_x3f_1193_, 1);
v___x_1213_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__10, &l_Lean_Meta_Grind_pushNewFact_x27___closed__10_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__10);
lean_inc_ref(v_expr_1192_);
lean_inc_ref(v_prop_1176_);
v___x_1214_ = l_Lean_mkApp4(v___x_1213_, v_prop_1176_, v_expr_1192_, v_val_1212_, v_proof_1177_);
v___y_1195_ = v___x_1214_;
goto v___jp_1194_;
}
else
{
lean_dec(v_proof_x3f_1193_);
v___y_1195_ = v_proof_1177_;
goto v___jp_1194_;
}
v___jp_1194_:
{
lean_object* v_toCold_1196_; lean_object* v_options_1197_; uint8_t v_hasTrace_1198_; 
v_toCold_1196_ = lean_ctor_get(v_a_1187_, 0);
v_options_1197_ = lean_ctor_get(v_toCold_1196_, 2);
v_hasTrace_1198_ = lean_ctor_get_uint8(v_options_1197_, sizeof(void*)*1);
if (v_hasTrace_1198_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v_prop_1176_);
v___x_1199_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1192_, v___y_1195_, v_generation_1178_, v_a_1179_);
return v___x_1199_;
}
else
{
lean_object* v_inheritedTraceOptions_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v_inheritedTraceOptions_1200_ = lean_ctor_get(v_toCold_1196_, 11);
v___x_1201_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1202_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__3, &l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3);
v___x_1203_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1200_, v_options_1197_, v___x_1202_);
if (v___x_1203_ == 0)
{
lean_object* v___x_1204_; 
lean_dec_ref(v_prop_1176_);
v___x_1204_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1192_, v___y_1195_, v_generation_1178_, v_a_1179_);
return v___x_1204_;
}
else
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1205_ = l_Lean_MessageData_ofExpr(v_prop_1176_);
v___x_1206_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__5, &l_Lean_Meta_Grind_pushNewFact_x27___closed__5_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__5);
v___x_1207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1205_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
lean_inc_ref(v_expr_1192_);
v___x_1208_ = l_Lean_MessageData_ofExpr(v_expr_1192_);
v___x_1209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1201_, v___x_1209_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v___x_1211_; 
lean_dec_ref_known(v___x_1210_, 1);
v___x_1211_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1192_, v___y_1195_, v_generation_1178_, v_a_1179_);
return v___x_1211_;
}
else
{
lean_dec_ref(v___y_1195_);
lean_dec_ref(v_expr_1192_);
lean_dec(v_generation_1178_);
return v___x_1210_;
}
}
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec(v_generation_1178_);
lean_dec_ref(v_proof_1177_);
lean_dec_ref(v_prop_1176_);
v_a_1215_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1190_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1190_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27___boxed(lean_object* v_prop_1223_, lean_object* v_proof_1224_, lean_object* v_generation_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Meta_Grind_pushNewFact_x27(v_prop_1223_, v_proof_1224_, v_generation_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec(v_a_1229_);
lean_dec_ref(v_a_1228_);
lean_dec(v_a_1227_);
lean_dec(v_a_1226_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object* v_proof_1238_, lean_object* v_generation_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v___x_1251_; 
lean_inc(v_a_1249_);
lean_inc_ref(v_a_1248_);
lean_inc(v_a_1247_);
lean_inc_ref(v_a_1246_);
lean_inc_ref(v_proof_1238_);
v___x_1251_ = lean_infer_type(v_proof_1238_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_toCold_1252_; lean_object* v_options_1253_; uint8_t v_hasTrace_1254_; 
v_toCold_1252_ = lean_ctor_get(v_a_1248_, 0);
v_options_1253_ = lean_ctor_get(v_toCold_1252_, 2);
v_hasTrace_1254_ = lean_ctor_get_uint8(v_options_1253_, sizeof(void*)*1);
if (v_hasTrace_1254_ == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1256_; 
v_a_1255_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1251_, 1);
v___x_1256_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1255_, v_proof_1238_, v_generation_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1256_;
}
else
{
lean_object* v_a_1257_; lean_object* v_inheritedTraceOptions_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v_a_1257_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1251_, 1);
v_inheritedTraceOptions_1258_ = lean_ctor_get(v_toCold_1252_, 11);
v___x_1259_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1260_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__3, &l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3);
v___x_1261_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1258_, v_options_1253_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1257_, v_proof_1238_, v_generation_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1262_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_inc(v_a_1257_);
v___x_1263_ = l_Lean_MessageData_ofExpr(v_a_1257_);
v___x_1264_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1259_, v___x_1263_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1265_; 
lean_dec_ref_known(v___x_1264_, 1);
v___x_1265_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1257_, v_proof_1238_, v_generation_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1265_;
}
else
{
lean_dec(v_a_1257_);
lean_dec(v_generation_1239_);
lean_dec_ref(v_proof_1238_);
return v___x_1264_;
}
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v_generation_1239_);
lean_dec_ref(v_proof_1238_);
v_a_1266_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1251_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1251_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact___boxed(lean_object* v_proof_1274_, lean_object* v_generation_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_Lean_Meta_Grind_pushNewFact(v_proof_1274_, v_generation_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_a_1281_);
lean_dec_ref(v_a_1280_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec(v_a_1277_);
lean_dec(v_a_1276_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object* v_e_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v___x_1299_; lean_object* v_a_1300_; lean_object* v___x_1301_; 
v___x_1299_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_1288_, v_a_1295_);
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
lean_dec_ref(v___x_1299_);
v___x_1301_ = l_Lean_Meta_Sym_unfoldReducible(v_a_1300_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; lean_object* v___x_1303_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_a_1302_);
lean_dec_ref_known(v___x_1301_, 1);
v___x_1303_ = l_Lean_Meta_Grind_markNestedSubsingletons(v_a_1302_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1305_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1305_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_a_1304_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1307_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1307_ = l_Lean_Meta_Grind_foldProjs(v_a_1306_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = l_Lean_Meta_Sym_normalizeLevels(v_a_1308_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1311_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1311_ = l_Lean_Meta_Sym_canon(v_a_1310_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1313_ = l_Lean_Meta_Sym_shareCommon(v_a_1312_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
return v___x_1313_;
}
else
{
return v___x_1311_;
}
}
else
{
return v___x_1309_;
}
}
else
{
return v___x_1307_;
}
}
else
{
return v___x_1305_;
}
}
else
{
return v___x_1303_;
}
}
else
{
return v___x_1301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg___boxed(lean_object* v_e_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_e_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
lean_dec(v_a_1315_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight(lean_object* v_e_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_e_1326_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___boxed(lean_object* v_e_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lean_Meta_Grind_preprocessLight(v_e_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_, v_a_1349_);
lean_dec(v_a_1349_);
lean_dec_ref(v_a_1348_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_a_1343_);
lean_dec_ref(v_a_1342_);
lean_dec(v_a_1341_);
lean_dec(v_a_1340_);
return v_res_1351_;
}
}
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
}
#ifdef __cplusplus
}
#endif
