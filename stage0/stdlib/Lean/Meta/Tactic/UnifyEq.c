// Lean compiler output
// Module: Lean.Meta.Tactic.UnifyEq
// Imports: public import Lean.Meta.Tactic.Injection import Init.Data.Nat.Internal.Linear import Lean.Structure import Lean.ProjFns import Lean.Meta.Tactic.OneFieldStructure
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
lean_object* l_Lean_Meta_OneFieldStructure_Bijection_inv(lean_object*);
lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_injectionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "z"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 196, 150, 181, 147, 170, 254, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Dependent elimination failed: Failed to solve equation"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nat case `"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elimOffset"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(238, 85, 239, 193, 128, 115, 38, 143)}};
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 91, 22, 141, 221, 120, 153, 253)}};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Expected an equality, but found"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_unifyEq_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object* v_mvarId_1_, lean_object* v_eqDecl_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; lean_object* v___x_11_; 
v___x_8_ = l_Lean_LocalDecl_fvarId(v_eqDecl_2_);
lean_inc(v___x_8_);
v___x_9_ = l_Lean_mkFVar(v___x_8_);
v___x_10_ = 1;
v___x_11_ = l_Lean_Meta_mkEqOfHEq(v___x_9_, v___x_10_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
lean_inc_n(v_a_12_, 2);
lean_dec_ref_known(v___x_11_, 1);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_13_ = lean_infer_type(v_a_12_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v___x_13_, 1);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_15_ = lean_whnf(v_a_14_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v___x_15_, 1);
v___x_17_ = l_Lean_LocalDecl_userName(v_eqDecl_2_);
v___x_18_ = l_Lean_MVarId_assert(v_mvarId_1_, v___x_17_, v_a_16_, v_a_12_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_a_19_);
lean_dec_ref_known(v___x_18_, 1);
v___x_20_ = l_Lean_MVarId_clear(v_a_19_, v___x_8_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
return v___x_20_;
}
else
{
lean_dec(v___x_8_);
return v___x_18_;
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_a_12_);
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_21_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_15_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_15_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
else
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
lean_dec(v_a_12_);
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_29_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_13_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_13_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_37_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_11_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_11_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object* v_mvarId_45_, lean_object* v_eqDecl_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_45_, v_eqDecl_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_eqDecl_46_);
return v_res_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = l_Lean_mkNatLit(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object* v_e_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
lean_inc_ref(v_e_55_);
v___x_61_ = l_Lean_Meta_evalNat(v_e_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_80_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_80_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
if (lean_obj_tag(v_a_62_) == 0)
{
lean_object* v___x_66_; 
lean_del_object(v___x_64_);
v___x_66_ = l_Lean_Meta_isOffset_x3f(v_e_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
return v___x_66_;
}
else
{
lean_object* v_val_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_79_; 
lean_dec_ref(v_e_55_);
v_val_67_ = lean_ctor_get(v_a_62_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_a_62_);
if (v_isSharedCheck_79_ == 0)
{
v___x_69_ = v_a_62_;
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_val_67_);
lean_dec(v_a_62_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v_val_67_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_72_);
v___x_74_ = v___x_69_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_78_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_76_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_74_);
v___x_76_ = v___x_64_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
}
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec_ref(v_e_55_);
v_a_81_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_61_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_61_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object* v_e_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_e_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
lean_dec(v_a_93_);
lean_dec_ref(v_a_92_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0(lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
if (lean_obj_tag(v_x_97_) == 0)
{
lean_object* v___x_103_; 
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v_x_96_);
return v___x_103_;
}
else
{
lean_object* v_head_104_; lean_object* v_tail_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_head_104_ = lean_ctor_get(v_x_97_, 0);
lean_inc(v_head_104_);
v_tail_105_ = lean_ctor_get(v_x_97_, 1);
lean_inc(v_tail_105_);
lean_dec_ref_known(v_x_97_, 2);
v___x_106_ = l_Lean_Meta_OneFieldStructure_Bijection_inv(v_head_104_);
v___x_107_ = l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(v___x_106_, v_x_96_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_a_108_);
lean_dec_ref_known(v___x_107_, 1);
v_x_96_ = v_a_108_;
v_x_97_ = v_tail_105_;
goto _start;
}
else
{
lean_dec(v_tail_105_);
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0___boxed(lean_object* v_x_110_, lean_object* v_x_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0(v_x_110_, v_x_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0(lean_object* v_bijectionsInsideOut_118_, lean_object* v_e_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = l_List_reverse___redArg(v_bijectionsInsideOut_118_);
v___x_126_ = l_List_foldlM___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__0(v_e_119_, v___x_125_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0___boxed(lean_object* v_bijectionsInsideOut_127_, lean_object* v_e_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0(v_bijectionsInsideOut_127_, v_e_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1(lean_object* v___f_135_, uint8_t v___y_136_, uint8_t v___x_137_, lean_object* v_z_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; 
lean_inc(v___y_142_);
lean_inc_ref(v___y_141_);
lean_inc(v___y_140_);
lean_inc_ref(v___y_139_);
lean_inc_ref(v_z_138_);
v___x_144_ = lean_apply_6(v___f_135_, v_z_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_a_145_);
lean_dec_ref_known(v___x_144_, 1);
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
v___x_148_ = lean_array_push(v___x_147_, v_z_138_);
v___x_149_ = 1;
v___x_150_ = l_Lean_Meta_mkLambdaFVars(v___x_148_, v_a_145_, v___y_136_, v___x_137_, v___y_136_, v___x_137_, v___x_149_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec_ref(v___x_148_);
return v___x_150_;
}
else
{
lean_dec_ref(v_z_138_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1___boxed(lean_object* v___f_151_, lean_object* v___y_152_, lean_object* v___x_153_, lean_object* v_z_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
uint8_t v___y_2792__boxed_160_; uint8_t v___x_2793__boxed_161_; lean_object* v_res_162_; 
v___y_2792__boxed_160_ = lean_unbox(v___y_152_);
v___x_2793__boxed_161_ = lean_unbox(v___x_153_);
v_res_162_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1(v___f_151_, v___y_2792__boxed_160_, v___x_2793__boxed_161_, v_z_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0(lean_object* v_k_163_, lean_object* v_b_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v___x_170_; 
lean_inc(v___y_168_);
lean_inc_ref(v___y_167_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
v___x_170_ = lean_apply_6(v_k_163_, v_b_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, lean_box(0));
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_k_171_, lean_object* v_b_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0(v_k_171_, v_b_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg(lean_object* v_name_179_, uint8_t v_bi_180_, lean_object* v_type_181_, lean_object* v_k_182_, uint8_t v_kind_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___f_189_; lean_object* v___x_190_; 
v___f_189_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_189_, 0, v_k_182_);
v___x_190_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_179_, v_bi_180_, v_type_181_, v___f_189_, v_kind_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_190_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_190_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
v_a_199_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_190_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_190_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_name_207_, lean_object* v_bi_208_, lean_object* v_type_209_, lean_object* v_k_210_, lean_object* v_kind_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
uint8_t v_bi_boxed_217_; uint8_t v_kind_boxed_218_; lean_object* v_res_219_; 
v_bi_boxed_217_ = lean_unbox(v_bi_208_);
v_kind_boxed_218_ = lean_unbox(v_kind_211_);
v_res_219_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg(v_name_207_, v_bi_boxed_217_, v_type_209_, v_k_210_, v_kind_boxed_218_, v___y_212_, v___y_213_, v___y_214_, v___y_215_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg(lean_object* v_name_220_, lean_object* v_type_221_, lean_object* v_k_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
uint8_t v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; 
v___x_228_ = 0;
v___x_229_ = 0;
v___x_230_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg(v_name_220_, v___x_228_, v_type_221_, v_k_222_, v___x_229_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg___boxed(lean_object* v_name_231_, lean_object* v_type_232_, lean_object* v_k_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg(v_name_231_, v_type_232_, v_k_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2(lean_object* v_00_u03b1_243_, lean_object* v_eqDecl_244_, lean_object* v_mvarId_245_, lean_object* v_subst_246_, lean_object* v_bx_247_, lean_object* v_t_248_, uint8_t v_symm_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_box(0);
v___x_256_ = l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(v_bx_247_, v___x_255_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_393_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_393_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_393_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_393_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
if (lean_obj_tag(v_a_257_) == 1)
{
lean_object* v_val_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_388_; 
lean_del_object(v___x_259_);
v_val_261_ = lean_ctor_get(v_a_257_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v_a_257_);
if (v_isSharedCheck_388_ == 0)
{
v___x_263_ = v_a_257_;
v_isShared_264_ = v_isSharedCheck_388_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_val_261_);
lean_dec(v_a_257_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_388_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_fvarId_265_; lean_object* v_bijectionsInsideOut_266_; lean_object* v___f_267_; lean_object* v___y_269_; lean_object* v_prf_270_; lean_object* v___y_271_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___x_351_; 
v_fvarId_265_ = lean_ctor_get(v_val_261_, 0);
lean_inc_n(v_fvarId_265_, 2);
v_bijectionsInsideOut_266_ = lean_ctor_get(v_val_261_, 1);
lean_inc_n(v_bijectionsInsideOut_266_, 2);
lean_dec(v_val_261_);
v___f_267_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0___boxed), 7, 1);
lean_closure_set(v___f_267_, 0, v_bijectionsInsideOut_266_);
v___x_351_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_265_, v___y_250_, v___y_252_, v___y_253_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_379_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_379_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_379_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_379_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
uint8_t v___y_357_; uint8_t v___x_377_; 
v___x_377_ = l_Lean_Expr_containsFVar(v_t_248_, v_fvarId_265_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; 
v___x_378_ = l_Lean_LocalDecl_isLet(v_a_352_, v___x_377_);
lean_dec(v_a_352_);
v___y_357_ = v___x_378_;
goto v___jp_356_;
}
else
{
lean_dec(v_a_352_);
v___y_357_ = v___x_377_;
goto v___jp_356_;
}
v___jp_356_:
{
if (v___y_357_ == 0)
{
uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___f_361_; lean_object* v___x_362_; 
lean_del_object(v___x_354_);
v___x_358_ = 1;
v___x_359_ = lean_box(v___y_357_);
v___x_360_ = lean_box(v___x_358_);
v___f_361_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__1___boxed), 9, 3);
lean_closure_set(v___f_361_, 0, v___f_267_);
lean_closure_set(v___f_361_, 1, v___x_359_);
lean_closure_set(v___f_361_, 2, v___x_360_);
lean_inc_ref(v_eqDecl_244_);
v___x_362_ = l_Lean_LocalDecl_toExpr(v_eqDecl_244_);
if (v_symm_249_ == 0)
{
v___y_269_ = v___f_361_;
v_prf_270_ = v___x_362_;
v___y_271_ = v___y_250_;
v___y_272_ = v___y_251_;
v___y_273_ = v___y_252_;
v___y_274_ = v___y_253_;
goto v___jp_268_;
}
else
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_Meta_mkEqSymm(v___x_362_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
v___y_269_ = v___f_361_;
v_prf_270_ = v_a_364_;
v___y_271_ = v___y_250_;
v___y_272_ = v___y_251_;
v___y_273_ = v___y_252_;
v___y_274_ = v___y_253_;
goto v___jp_268_;
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec_ref(v___f_361_);
lean_dec(v_bijectionsInsideOut_266_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
lean_dec_ref(v_00_u03b1_243_);
v_a_365_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_363_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
else
{
lean_object* v___x_373_; lean_object* v___x_375_; 
lean_dec_ref(v___f_267_);
lean_dec(v_bijectionsInsideOut_266_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
lean_dec_ref(v_00_u03b1_243_);
v___x_373_ = lean_box(0);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_373_);
v___x_375_ = v___x_354_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
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
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec_ref(v___f_267_);
lean_dec(v_bijectionsInsideOut_266_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
lean_dec_ref(v_00_u03b1_243_);
v_a_380_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_351_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_351_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
v___jp_268_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___closed__1));
v___x_276_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg(v___x_275_, v_00_u03b1_243_, v___y_269_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
v___x_278_ = l_Lean_Meta_mkCongrArg(v_a_277_, v_prf_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_280_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v___x_280_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__0(v_bijectionsInsideOut_266_, v_t_248_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = l_Lean_mkFVar(v_fvarId_265_);
v___x_283_ = l_Lean_Meta_mkEq(v___x_282_, v_a_281_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_284_);
lean_dec_ref_known(v___x_283_, 1);
v___x_285_ = l_Lean_LocalDecl_userName(v_eqDecl_244_);
v___x_286_ = l_Lean_MVarId_assert(v_mvarId_245_, v___x_285_, v_a_284_, v_a_279_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = l_Lean_LocalDecl_fvarId(v_eqDecl_244_);
lean_dec_ref(v_eqDecl_244_);
v___x_289_ = l_Lean_MVarId_clear(v_a_287_, v___x_288_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_302_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_302_ == 0)
{
v___x_292_ = v___x_289_;
v_isShared_293_ = v_isSharedCheck_302_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_302_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_295_, 0, v_a_290_);
lean_ctor_set(v___x_295_, 1, v_subst_246_);
lean_ctor_set(v___x_295_, 2, v___x_294_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_295_);
v___x_297_ = v___x_263_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_301_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_299_; 
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_297_);
v___x_299_ = v___x_292_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_del_object(v___x_263_);
lean_dec(v_subst_246_);
v_a_303_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_289_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_289_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
lean_del_object(v___x_263_);
lean_dec(v_subst_246_);
lean_dec_ref(v_eqDecl_244_);
v_a_311_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_286_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_286_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
lean_dec(v_a_279_);
lean_del_object(v___x_263_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
v_a_319_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_283_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_283_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_a_279_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
v_a_327_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_280_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_280_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_bijectionsInsideOut_266_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
v_a_335_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_278_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_278_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_prf_270_);
lean_dec(v_bijectionsInsideOut_266_);
lean_dec(v_fvarId_265_);
lean_del_object(v___x_263_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
v_a_343_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_276_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_276_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
}
else
{
lean_object* v___x_389_; lean_object* v___x_391_; 
lean_dec(v_a_257_);
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
lean_dec_ref(v_00_u03b1_243_);
v___x_389_ = lean_box(0);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_389_);
v___x_391_ = v___x_259_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec_ref(v_t_248_);
lean_dec(v_subst_246_);
lean_dec(v_mvarId_245_);
lean_dec_ref(v_eqDecl_244_);
lean_dec_ref(v_00_u03b1_243_);
v_a_394_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_256_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_256_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2___boxed(lean_object* v_00_u03b1_402_, lean_object* v_eqDecl_403_, lean_object* v_mvarId_404_, lean_object* v_subst_405_, lean_object* v_bx_406_, lean_object* v_t_407_, lean_object* v_symm_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
uint8_t v_symm_boxed_414_; lean_object* v_res_415_; 
v_symm_boxed_414_ = lean_unbox(v_symm_408_);
v_res_415_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2(v_00_u03b1_402_, v_eqDecl_403_, v_mvarId_404_, v_subst_405_, v_bx_406_, v_t_407_, v_symm_boxed_414_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f(lean_object* v_mvarId_416_, lean_object* v_eqDecl_417_, lean_object* v_subst_418_, lean_object* v_00_u03b1_419_, lean_object* v_a_420_, lean_object* v_b_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
uint8_t v___x_427_; lean_object* v___x_428_; 
v___x_427_ = 0;
lean_inc_ref(v_b_421_);
lean_inc_ref(v_a_420_);
lean_inc(v_subst_418_);
lean_inc(v_mvarId_416_);
lean_inc_ref(v_eqDecl_417_);
lean_inc_ref(v_00_u03b1_419_);
v___x_428_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2(v_00_u03b1_419_, v_eqDecl_417_, v_mvarId_416_, v_subst_418_, v_a_420_, v_b_421_, v___x_427_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
if (lean_obj_tag(v_a_429_) == 1)
{
lean_dec_ref_known(v_a_429_, 1);
lean_dec_ref(v_b_421_);
lean_dec_ref(v_a_420_);
lean_dec_ref(v_00_u03b1_419_);
lean_dec(v_subst_418_);
lean_dec_ref(v_eqDecl_417_);
lean_dec(v_mvarId_416_);
return v___x_428_;
}
else
{
uint8_t v___x_430_; lean_object* v___x_431_; 
lean_dec(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = 1;
v___x_431_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___lam__2(v_00_u03b1_419_, v_eqDecl_417_, v_mvarId_416_, v_subst_418_, v_b_421_, v_a_420_, v___x_430_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
return v___x_431_;
}
}
else
{
lean_dec_ref(v_b_421_);
lean_dec_ref(v_a_420_);
lean_dec_ref(v_00_u03b1_419_);
lean_dec(v_subst_418_);
lean_dec_ref(v_eqDecl_417_);
lean_dec(v_mvarId_416_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f___boxed(lean_object* v_mvarId_432_, lean_object* v_eqDecl_433_, lean_object* v_subst_434_, lean_object* v_00_u03b1_435_, lean_object* v_a_436_, lean_object* v_b_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f(v_mvarId_432_, v_eqDecl_433_, v_subst_434_, v_00_u03b1_435_, v_a_436_, v_b_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1(lean_object* v_00_u03b1_444_, lean_object* v_name_445_, uint8_t v_bi_446_, lean_object* v_type_447_, lean_object* v_k_448_, uint8_t v_kind_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___redArg(v_name_445_, v_bi_446_, v_type_447_, v_k_448_, v_kind_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b1_456_, lean_object* v_name_457_, lean_object* v_bi_458_, lean_object* v_type_459_, lean_object* v_k_460_, lean_object* v_kind_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
uint8_t v_bi_boxed_467_; uint8_t v_kind_boxed_468_; lean_object* v_res_469_; 
v_bi_boxed_467_ = lean_unbox(v_bi_458_);
v_kind_boxed_468_ = lean_unbox(v_kind_461_);
v_res_469_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1_spec__1(v_00_u03b1_456_, v_name_457_, v_bi_boxed_467_, v_type_459_, v_k_460_, v_kind_boxed_468_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1(lean_object* v_00_u03b1_470_, lean_object* v_name_471_, lean_object* v_type_472_, lean_object* v_k_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___redArg(v_name_471_, v_type_472_, v_k_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1___boxed(lean_object* v_00_u03b1_480_, lean_object* v_name_481_, lean_object* v_type_482_, lean_object* v_k_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f_spec__1(v_00_u03b1_480_, v_name_481_, v_type_482_, v_k_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(lean_object* v_x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Meta_saveState___redArg(v___y_492_, v___y_494_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_498_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
lean_inc(v___y_494_);
lean_inc_ref(v___y_493_);
lean_inc(v___y_492_);
lean_inc_ref(v___y_491_);
v___x_498_ = lean_apply_5(v_x_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, lean_box(0));
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
lean_dec(v_a_497_);
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_507_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v_a_499_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_503_);
v___x_505_ = v___x_501_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_537_; 
v_a_508_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_537_ == 0)
{
v___x_510_ = v___x_498_;
v_isShared_511_ = v_isSharedCheck_537_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_498_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_537_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
uint8_t v___y_513_; uint8_t v___x_535_; 
v___x_535_ = l_Lean_Exception_isInterrupt(v_a_508_);
if (v___x_535_ == 0)
{
uint8_t v___x_536_; 
lean_inc(v_a_508_);
v___x_536_ = l_Lean_Exception_isRuntime(v_a_508_);
v___y_513_ = v___x_536_;
goto v___jp_512_;
}
else
{
v___y_513_ = v___x_535_;
goto v___jp_512_;
}
v___jp_512_:
{
if (v___y_513_ == 0)
{
lean_object* v___x_514_; 
lean_del_object(v___x_510_);
lean_dec(v_a_508_);
v___x_514_ = l_Lean_Meta_SavedState_restore___redArg(v_a_497_, v___y_492_, v___y_494_);
lean_dec(v_a_497_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_522_; 
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v___x_514_, 0);
lean_dec(v_unused_523_);
v___x_516_ = v___x_514_;
v_isShared_517_ = v_isSharedCheck_522_;
goto v_resetjp_515_;
}
else
{
lean_dec(v___x_514_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_522_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_518_ = lean_box(0);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_518_);
v___x_520_ = v___x_516_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_a_524_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_514_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_514_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
else
{
lean_object* v___x_533_; 
lean_dec(v_a_497_);
if (v_isShared_511_ == 0)
{
v___x_533_ = v___x_510_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_508_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v_x_490_);
v_a_538_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_496_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_496_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg___boxed(lean_object* v_x_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(lean_object* v_00_u03b1_553_, lean_object* v_x_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___boxed(lean_object* v_00_u03b1_561_, lean_object* v_x_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(v_00_u03b1_561_, v_x_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(lean_object* v_msgData_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v___x_575_; lean_object* v_env_576_; lean_object* v___x_577_; lean_object* v_toCold_578_; lean_object* v_mctx_579_; lean_object* v_lctx_580_; lean_object* v_options_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_575_ = lean_st_ref_get(v___y_573_);
v_env_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc_ref(v_env_576_);
lean_dec(v___x_575_);
v___x_577_ = lean_st_ref_get(v___y_571_);
v_toCold_578_ = lean_ctor_get(v___y_572_, 0);
v_mctx_579_ = lean_ctor_get(v___x_577_, 0);
lean_inc_ref(v_mctx_579_);
lean_dec(v___x_577_);
v_lctx_580_ = lean_ctor_get(v___y_570_, 2);
v_options_581_ = lean_ctor_get(v_toCold_578_, 2);
lean_inc_ref(v_options_581_);
lean_inc_ref(v_lctx_580_);
v___x_582_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_582_, 0, v_env_576_);
lean_ctor_set(v___x_582_, 1, v_mctx_579_);
lean_ctor_set(v___x_582_, 2, v_lctx_580_);
lean_ctor_set(v___x_582_, 3, v_options_581_);
v___x_583_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v_msgData_569_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1___boxed(lean_object* v_msgData_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msgData_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(lean_object* v_msg_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_ref_598_; lean_object* v___x_599_; lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_608_; 
v_ref_598_ = lean_ctor_get(v___y_595_, 2);
v___x_599_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msg_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_608_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_606_; 
lean_inc(v_ref_598_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v_ref_598_);
lean_ctor_set(v___x_604_, 1, v_a_600_);
if (v_isShared_603_ == 0)
{
lean_ctor_set_tag(v___x_602_, 1);
lean_ctor_set(v___x_602_, 0, v___x_604_);
v___x_606_ = v___x_602_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg___boxed(lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_615_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0));
v___x_618_ = l_Lean_stringToMessageData(v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(lean_object* v_mvarId_619_, lean_object* v_eqFVarId_620_, lean_object* v_subst_621_, lean_object* v_acyclic_622_, lean_object* v_eqDecl_623_, lean_object* v_a_624_, lean_object* v_b_625_, uint8_t v_symm_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
uint8_t v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_632_ = 1;
v___x_633_ = lean_box(v_symm_626_);
v___x_634_ = lean_box(v___x_632_);
v___x_635_ = lean_box(v___x_632_);
lean_inc(v_subst_621_);
lean_inc(v_eqFVarId_620_);
lean_inc(v_mvarId_619_);
v___x_636_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_636_, 0, v_mvarId_619_);
lean_closure_set(v___x_636_, 1, v_eqFVarId_620_);
lean_closure_set(v___x_636_, 2, v___x_633_);
lean_closure_set(v___x_636_, 3, v_subst_621_);
lean_closure_set(v___x_636_, 4, v___x_634_);
lean_closure_set(v___x_636_, 5, v___x_635_);
v___x_637_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v___x_636_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_713_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_713_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_713_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_713_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
if (lean_obj_tag(v_a_638_) == 1)
{
lean_object* v_val_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_656_; 
lean_dec_ref(v_b_625_);
lean_dec_ref(v_a_624_);
lean_dec_ref(v_acyclic_622_);
lean_dec(v_subst_621_);
lean_dec(v_eqFVarId_620_);
lean_dec(v_mvarId_619_);
v_val_642_ = lean_ctor_get(v_a_638_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_a_638_);
if (v_isSharedCheck_656_ == 0)
{
v___x_644_ = v_a_638_;
v_isShared_645_ = v_isSharedCheck_656_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_val_642_);
lean_dec(v_a_638_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_656_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v_fst_646_; lean_object* v_snd_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_651_; 
v_fst_646_ = lean_ctor_get(v_val_642_, 0);
lean_inc(v_fst_646_);
v_snd_647_ = lean_ctor_get(v_val_642_, 1);
lean_inc(v_snd_647_);
lean_dec(v_val_642_);
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_649_, 0, v_snd_647_);
lean_ctor_set(v___x_649_, 1, v_fst_646_);
lean_ctor_set(v___x_649_, 2, v___x_648_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_649_);
v___x_651_ = v___x_644_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_655_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
lean_object* v___x_653_; 
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_651_);
v___x_653_ = v___x_640_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
else
{
lean_object* v___x_657_; 
lean_del_object(v___x_640_);
lean_dec(v_a_638_);
v___x_657_ = l_Lean_Meta_isExprDefEq(v_a_624_, v_b_625_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; uint8_t v___x_659_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
v___x_659_ = lean_unbox(v_a_658_);
lean_dec(v_a_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec(v_subst_621_);
v___x_660_ = l_Lean_mkFVar(v_eqFVarId_620_);
lean_inc(v_a_630_);
lean_inc_ref(v_a_629_);
lean_inc(v_a_628_);
lean_inc_ref(v_a_627_);
v___x_661_ = lean_apply_7(v_acyclic_622_, v_mvarId_619_, v___x_660_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, lean_box(0));
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_676_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_676_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_676_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_676_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
uint8_t v___x_666_; 
v___x_666_ = lean_unbox(v_a_662_);
lean_dec(v_a_662_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
lean_del_object(v___x_664_);
v___x_667_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_668_ = l_Lean_LocalDecl_type(v_eqDecl_623_);
v___x_669_ = l_Lean_indentExpr(v___x_668_);
v___x_670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_667_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_670_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_672_ = lean_box(0);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v___x_672_);
v___x_674_ = v___x_664_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
v_a_677_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_661_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_661_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
lean_object* v___x_685_; 
lean_dec_ref(v_acyclic_622_);
v___x_685_ = l_Lean_MVarId_clear(v_mvarId_619_, v_eqFVarId_620_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_696_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_696_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_690_ = lean_unsigned_to_nat(0u);
v___x_691_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_691_, 0, v_a_686_);
lean_ctor_set(v___x_691_, 1, v_subst_621_);
lean_ctor_set(v___x_691_, 2, v___x_690_);
v___x_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_692_);
v___x_694_ = v___x_688_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_dec(v_subst_621_);
v_a_697_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_685_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_685_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_dec_ref(v_acyclic_622_);
lean_dec(v_subst_621_);
lean_dec(v_eqFVarId_620_);
lean_dec(v_mvarId_619_);
v_a_705_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_657_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_657_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec_ref(v_b_625_);
lean_dec_ref(v_a_624_);
lean_dec_ref(v_acyclic_622_);
lean_dec(v_subst_621_);
lean_dec(v_eqFVarId_620_);
lean_dec(v_mvarId_619_);
v_a_714_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_637_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_637_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___boxed(lean_object* v_mvarId_722_, lean_object* v_eqFVarId_723_, lean_object* v_subst_724_, lean_object* v_acyclic_725_, lean_object* v_eqDecl_726_, lean_object* v_a_727_, lean_object* v_b_728_, lean_object* v_symm_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
uint8_t v_symm_boxed_735_; lean_object* v_res_736_; 
v_symm_boxed_735_ = lean_unbox(v_symm_729_);
v_res_736_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_722_, v_eqFVarId_723_, v_subst_724_, v_acyclic_725_, v_eqDecl_726_, v_a_727_, v_b_728_, v_symm_boxed_735_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec_ref(v_eqDecl_726_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(lean_object* v_00_u03b1_737_, lean_object* v_msg_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___boxed(lean_object* v_00_u03b1_745_, lean_object* v_msg_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(v_00_u03b1_745_, v_msg_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_752_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0));
v___x_755_ = l_Lean_stringToMessageData(v___x_754_);
return v___x_755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2));
v___x_758_ = l_Lean_stringToMessageData(v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(lean_object* v_mvarId_759_, lean_object* v_eqFVarId_760_, lean_object* v_subst_761_, lean_object* v_caseName_x3f_762_, lean_object* v_eqDecl_763_, lean_object* v_00_u03b1_764_, lean_object* v_injectionOffset_x3f_765_, lean_object* v_a_766_, lean_object* v_b_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_819_; lean_object* v___x_897_; 
lean_inc(v_a_771_);
lean_inc_ref(v_a_770_);
lean_inc(v_a_769_);
lean_inc_ref(v_a_768_);
lean_inc_ref(v_b_767_);
lean_inc_ref(v_a_766_);
v___x_897_ = lean_apply_7(v_injectionOffset_x3f_765_, v_a_766_, v_b_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, lean_box(0));
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_919_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_919_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_919_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_919_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
if (lean_obj_tag(v_a_898_) == 1)
{
lean_object* v_val_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_val_902_ = lean_ctor_get(v_a_898_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v_a_898_);
if (v_isSharedCheck_914_ == 0)
{
v___x_904_ = v_a_898_;
v_isShared_905_ = v_isSharedCheck_914_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_val_902_);
lean_dec(v_a_898_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_914_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_906_ = lean_unsigned_to_nat(1u);
v___x_907_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_907_, 0, v_val_902_);
lean_ctor_set(v___x_907_, 1, v_subst_761_);
lean_ctor_set(v___x_907_, 2, v___x_906_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v___x_907_);
v___x_909_ = v___x_904_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_907_);
v___x_909_ = v_reuseFailAlloc_913_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_911_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_909_);
v___x_911_ = v___x_900_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v___x_915_; 
lean_del_object(v___x_900_);
lean_dec(v_a_898_);
lean_inc_ref(v_a_766_);
v___x_915_ = l_Lean_Meta_isConstructorApp(v_a_766_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; uint8_t v___x_917_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
v___x_917_ = lean_unbox(v_a_916_);
lean_dec(v_a_916_);
if (v___x_917_ == 0)
{
v___y_819_ = v___x_915_;
goto v___jp_818_;
}
else
{
lean_object* v___x_918_; 
lean_dec_ref_known(v___x_915_, 1);
lean_inc_ref(v_b_767_);
v___x_918_ = l_Lean_Meta_isConstructorApp(v_b_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
v___y_819_ = v___x_918_;
goto v___jp_818_;
}
}
else
{
v___y_819_ = v___x_915_;
goto v___jp_818_;
}
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_a_920_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_897_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_897_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
v___jp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
lean_inc(v_eqFVarId_760_);
v___x_776_ = l_Lean_mkFVar(v_eqFVarId_760_);
v___x_777_ = l_Lean_Meta_mkEq(v___y_775_, v___y_774_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v___x_779_ = l_Lean_LocalDecl_userName(v_eqDecl_763_);
lean_dec_ref(v_eqDecl_763_);
v___x_780_ = l_Lean_MVarId_assert(v_mvarId_759_, v___x_779_, v_a_778_, v___x_776_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_782_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 1);
v___x_782_ = l_Lean_MVarId_clear(v_a_781_, v_eqFVarId_760_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_793_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_793_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_793_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_793_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_788_, 0, v_a_783_);
lean_ctor_set(v___x_788_, 1, v_subst_761_);
lean_ctor_set(v___x_788_, 2, v___x_787_);
v___x_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_789_);
v___x_791_ = v___x_785_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec(v_subst_761_);
v_a_794_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_782_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_782_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
v_a_802_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_780_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_780_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec_ref(v___x_776_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_a_810_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_777_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_777_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
v___jp_818_:
{
if (lean_obj_tag(v___y_819_) == 0)
{
lean_object* v_a_820_; uint8_t v___x_821_; 
v_a_820_ = lean_ctor_get(v___y_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___y_819_, 1);
v___x_821_ = lean_unbox(v_a_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; 
lean_inc(v_a_771_);
lean_inc_ref(v_a_770_);
lean_inc(v_a_769_);
lean_inc_ref(v_a_768_);
lean_inc_ref(v_a_766_);
v___x_822_ = lean_whnf(v_a_766_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
lean_inc(v_a_771_);
lean_inc_ref(v_a_770_);
lean_inc(v_a_769_);
lean_inc_ref(v_a_768_);
lean_inc_ref(v_b_767_);
v___x_824_ = lean_whnf(v_b_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; uint8_t v___x_826_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_824_, 1);
v___x_826_ = lean_expr_eqv(v_a_823_, v_a_766_);
if (v___x_826_ == 0)
{
lean_dec(v_a_820_);
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec(v_caseName_x3f_762_);
v___y_774_ = v_a_825_;
v___y_775_ = v_a_823_;
goto v___jp_773_;
}
else
{
uint8_t v___x_827_; 
v___x_827_ = lean_expr_eqv(v_a_825_, v_b_767_);
if (v___x_827_ == 0)
{
lean_dec(v_a_820_);
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec(v_caseName_x3f_762_);
v___y_774_ = v_a_825_;
v___y_775_ = v_a_823_;
goto v___jp_773_;
}
else
{
lean_object* v___x_828_; 
lean_dec(v_a_825_);
lean_dec(v_a_823_);
lean_dec(v_eqFVarId_760_);
lean_inc_ref(v_eqDecl_763_);
v___x_828_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEqInvertingBijections_x3f(v_mvarId_759_, v_eqDecl_763_, v_subst_761_, v_00_u03b1_764_, v_a_766_, v_b_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
if (lean_obj_tag(v_a_829_) == 1)
{
lean_dec_ref_known(v_a_829_, 1);
lean_dec(v_a_820_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
return v___x_828_;
}
else
{
lean_dec_ref_known(v___x_828_, 1);
lean_dec(v_a_829_);
if (lean_obj_tag(v_caseName_x3f_762_) == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec(v_a_820_);
v___x_830_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_831_ = l_Lean_LocalDecl_type(v_eqDecl_763_);
lean_dec_ref(v_eqDecl_763_);
v___x_832_ = l_Lean_indentExpr(v___x_831_);
v___x_833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_830_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_833_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
return v___x_834_;
}
else
{
lean_object* v_val_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_val_835_ = lean_ctor_get(v_caseName_x3f_762_, 0);
lean_inc(v_val_835_);
lean_dec_ref_known(v_caseName_x3f_762_, 1);
v___x_836_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_837_ = l_Lean_LocalDecl_type(v_eqDecl_763_);
lean_dec_ref(v_eqDecl_763_);
v___x_838_ = l_Lean_indentExpr(v___x_837_);
v___x_839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_836_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1);
v___x_841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_unbox(v_a_820_);
lean_dec(v_a_820_);
v___x_843_ = l_Lean_MessageData_ofConstName(v_val_835_, v___x_842_);
v___x_844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_841_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_844_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_846_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
return v___x_847_;
}
}
}
else
{
lean_dec(v_a_820_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_a_823_);
lean_dec(v_a_820_);
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_a_848_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_824_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_824_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_a_820_);
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_a_856_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_822_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_822_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
else
{
lean_object* v___x_864_; 
lean_dec(v_a_820_);
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
v___x_864_ = l_Lean_Meta_injectionCore(v_mvarId_759_, v_eqFVarId_760_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_880_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_880_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_880_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_880_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
if (lean_obj_tag(v_a_865_) == 0)
{
lean_object* v___x_869_; lean_object* v___x_871_; 
lean_dec(v_subst_761_);
v___x_869_ = lean_box(0);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_869_);
v___x_871_ = v___x_867_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
lean_object* v_mvarId_873_; lean_object* v_numNewEqs_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
v_mvarId_873_ = lean_ctor_get(v_a_865_, 0);
lean_inc(v_mvarId_873_);
v_numNewEqs_874_ = lean_ctor_get(v_a_865_, 1);
lean_inc(v_numNewEqs_874_);
lean_dec_ref_known(v_a_865_, 2);
v___x_875_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_875_, 0, v_mvarId_873_);
lean_ctor_set(v___x_875_, 1, v_subst_761_);
lean_ctor_set(v___x_875_, 2, v_numNewEqs_874_);
v___x_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_876_);
v___x_878_ = v___x_867_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec(v_subst_761_);
v_a_881_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_864_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_864_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref(v_b_767_);
lean_dec_ref(v_a_766_);
lean_dec_ref(v_00_u03b1_764_);
lean_dec_ref(v_eqDecl_763_);
lean_dec(v_caseName_x3f_762_);
lean_dec(v_subst_761_);
lean_dec(v_eqFVarId_760_);
lean_dec(v_mvarId_759_);
v_a_889_ = lean_ctor_get(v___y_819_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___y_819_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___y_819_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___y_819_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___boxed(lean_object* v_mvarId_928_, lean_object* v_eqFVarId_929_, lean_object* v_subst_930_, lean_object* v_caseName_x3f_931_, lean_object* v_eqDecl_932_, lean_object* v_00_u03b1_933_, lean_object* v_injectionOffset_x3f_934_, lean_object* v_a_935_, lean_object* v_b_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_928_, v_eqFVarId_929_, v_subst_930_, v_caseName_x3f_931_, v_eqDecl_932_, v_00_u03b1_933_, v_injectionOffset_x3f_934_, v_a_935_, v_b_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(lean_object* v_e_943_, lean_object* v___y_944_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = l_Lean_Expr_hasMVar(v_e_943_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_e_943_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v_mctx_949_; lean_object* v___x_950_; lean_object* v_fst_951_; lean_object* v_snd_952_; lean_object* v___x_953_; lean_object* v_cache_954_; lean_object* v_zetaDeltaFVarIds_955_; lean_object* v_postponed_956_; lean_object* v_diag_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_966_; 
v___x_948_ = lean_st_ref_get(v___y_944_);
v_mctx_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc_ref(v_mctx_949_);
lean_dec(v___x_948_);
v___x_950_ = l_Lean_instantiateMVarsCore(v_mctx_949_, v_e_943_);
v_fst_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_fst_951_);
v_snd_952_ = lean_ctor_get(v___x_950_, 1);
lean_inc(v_snd_952_);
lean_dec_ref(v___x_950_);
v___x_953_ = lean_st_ref_take(v___y_944_);
v_cache_954_ = lean_ctor_get(v___x_953_, 1);
v_zetaDeltaFVarIds_955_ = lean_ctor_get(v___x_953_, 2);
v_postponed_956_ = lean_ctor_get(v___x_953_, 3);
v_diag_957_ = lean_ctor_get(v___x_953_, 4);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_966_ == 0)
{
lean_object* v_unused_967_; 
v_unused_967_ = lean_ctor_get(v___x_953_, 0);
lean_dec(v_unused_967_);
v___x_959_ = v___x_953_;
v_isShared_960_ = v_isSharedCheck_966_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_diag_957_);
lean_inc(v_postponed_956_);
lean_inc(v_zetaDeltaFVarIds_955_);
lean_inc(v_cache_954_);
lean_dec(v___x_953_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_966_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v_snd_952_);
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_snd_952_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_cache_954_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_zetaDeltaFVarIds_955_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_postponed_956_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v_diag_957_);
v___x_962_ = v_reuseFailAlloc_965_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_st_ref_put(v___y_944_, v___x_962_);
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v_fst_951_);
return v___x_964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg___boxed(lean_object* v_e_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_968_, v___y_969_);
lean_dec(v___y_969_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(lean_object* v_e_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_972_, v___y_974_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___boxed(lean_object* v_e_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(v_e_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(lean_object* v_mvarId_986_, lean_object* v_x_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_986_, v_x_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_993_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_993_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
v_a_1002_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_993_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_993_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg___boxed(lean_object* v_mvarId_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1010_, v_x_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(lean_object* v_00_u03b1_1018_, lean_object* v_mvarId_1019_, lean_object* v_x_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1019_, v_x_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___boxed(lean_object* v_00_u03b1_1027_, lean_object* v_mvarId_1028_, lean_object* v_x_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(v_00_u03b1_1027_, v_mvarId_1028_, v_x_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1036_, lean_object* v_x_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_){
_start:
{
lean_object* v_ks_1040_; lean_object* v_vs_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1065_; 
v_ks_1040_ = lean_ctor_get(v_x_1036_, 0);
v_vs_1041_ = lean_ctor_get(v_x_1036_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_x_1036_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1043_ = v_x_1036_;
v_isShared_1044_ = v_isSharedCheck_1065_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_vs_1041_);
lean_inc(v_ks_1040_);
lean_dec(v_x_1036_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1065_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1045_ = lean_array_get_size(v_ks_1040_);
v___x_1046_ = lean_nat_dec_lt(v_x_1037_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
lean_dec(v_x_1037_);
v___x_1047_ = lean_array_push(v_ks_1040_, v_x_1038_);
v___x_1048_ = lean_array_push(v_vs_1041_, v_x_1039_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 1, v___x_1048_);
lean_ctor_set(v___x_1043_, 0, v___x_1047_);
v___x_1050_ = v___x_1043_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
else
{
lean_object* v_k_x27_1052_; uint8_t v___x_1053_; 
v_k_x27_1052_ = lean_array_fget_borrowed(v_ks_1040_, v_x_1037_);
v___x_1053_ = l_Lean_instBEqMVarId_beq(v_x_1038_, v_k_x27_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1055_; 
if (v_isShared_1044_ == 0)
{
v___x_1055_ = v___x_1043_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_ks_1040_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_vs_1041_);
v___x_1055_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = lean_nat_add(v_x_1037_, v___x_1056_);
lean_dec(v_x_1037_);
v_x_1036_ = v___x_1055_;
v_x_1037_ = v___x_1057_;
goto _start;
}
}
else
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1060_ = lean_array_fset(v_ks_1040_, v_x_1037_, v_x_1038_);
v___x_1061_ = lean_array_fset(v_vs_1041_, v_x_1037_, v_x_1039_);
lean_dec(v_x_1037_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 1, v___x_1061_);
lean_ctor_set(v___x_1043_, 0, v___x_1060_);
v___x_1063_ = v___x_1043_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_n_1066_, lean_object* v_k_1067_, lean_object* v_v_1068_){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = lean_unsigned_to_nat(0u);
v___x_1070_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_n_1066_, v___x_1069_, v_k_1067_, v_v_1068_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(lean_object* v_x_1072_, size_t v_x_1073_, size_t v_x_1074_, lean_object* v_x_1075_, lean_object* v_x_1076_){
_start:
{
if (lean_obj_tag(v_x_1072_) == 0)
{
lean_object* v_es_1077_; size_t v___x_1078_; size_t v___x_1079_; lean_object* v_j_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v_es_1077_ = lean_ctor_get(v_x_1072_, 0);
v___x_1078_ = ((size_t)31ULL);
v___x_1079_ = lean_usize_land(v_x_1073_, v___x_1078_);
v_j_1080_ = lean_usize_to_nat(v___x_1079_);
v___x_1081_ = lean_array_get_size(v_es_1077_);
v___x_1082_ = lean_nat_dec_lt(v_j_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_dec(v_j_1080_);
lean_dec(v_x_1076_);
lean_dec(v_x_1075_);
return v_x_1072_;
}
else
{
lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1121_; 
lean_inc_ref(v_es_1077_);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_x_1072_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; 
v_unused_1122_ = lean_ctor_get(v_x_1072_, 0);
lean_dec(v_unused_1122_);
v___x_1084_ = v_x_1072_;
v_isShared_1085_ = v_isSharedCheck_1121_;
goto v_resetjp_1083_;
}
else
{
lean_dec(v_x_1072_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1121_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v_v_1086_; lean_object* v___x_1087_; lean_object* v_xs_x27_1088_; lean_object* v___y_1090_; 
v_v_1086_ = lean_array_fget(v_es_1077_, v_j_1080_);
v___x_1087_ = lean_box(0);
v_xs_x27_1088_ = lean_array_fset(v_es_1077_, v_j_1080_, v___x_1087_);
switch(lean_obj_tag(v_v_1086_))
{
case 0:
{
lean_object* v_key_1095_; lean_object* v_val_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1106_; 
v_key_1095_ = lean_ctor_get(v_v_1086_, 0);
v_val_1096_ = lean_ctor_get(v_v_1086_, 1);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_v_1086_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1098_ = v_v_1086_;
v_isShared_1099_ = v_isSharedCheck_1106_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_val_1096_);
lean_inc(v_key_1095_);
lean_dec(v_v_1086_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1106_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
uint8_t v___x_1100_; 
v___x_1100_ = l_Lean_instBEqMVarId_beq(v_x_1075_, v_key_1095_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_del_object(v___x_1098_);
v___x_1101_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1095_, v_val_1096_, v_x_1075_, v_x_1076_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
v___y_1090_ = v___x_1102_;
goto v___jp_1089_;
}
else
{
lean_object* v___x_1104_; 
lean_dec(v_val_1096_);
lean_dec(v_key_1095_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 1, v_x_1076_);
lean_ctor_set(v___x_1098_, 0, v_x_1075_);
v___x_1104_ = v___x_1098_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_x_1075_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_x_1076_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
v___y_1090_ = v___x_1104_;
goto v___jp_1089_;
}
}
}
}
case 1:
{
lean_object* v_node_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1119_; 
v_node_1107_ = lean_ctor_get(v_v_1086_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_v_1086_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1109_ = v_v_1086_;
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_node_1107_);
lean_dec(v_v_1086_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
size_t v___x_1111_; size_t v___x_1112_; size_t v___x_1113_; size_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1111_ = ((size_t)5ULL);
v___x_1112_ = lean_usize_shift_right(v_x_1073_, v___x_1111_);
v___x_1113_ = ((size_t)1ULL);
v___x_1114_ = lean_usize_add(v_x_1074_, v___x_1113_);
v___x_1115_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_node_1107_, v___x_1112_, v___x_1114_, v_x_1075_, v_x_1076_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v___x_1115_);
v___x_1117_ = v___x_1109_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
v___y_1090_ = v___x_1117_;
goto v___jp_1089_;
}
}
}
default: 
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1120_, 0, v_x_1075_);
lean_ctor_set(v___x_1120_, 1, v_x_1076_);
v___y_1090_ = v___x_1120_;
goto v___jp_1089_;
}
}
v___jp_1089_:
{
lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1091_ = lean_array_fset(v_xs_x27_1088_, v_j_1080_, v___y_1090_);
lean_dec(v_j_1080_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1091_);
v___x_1093_ = v___x_1084_;
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
}
}
else
{
lean_object* v_ks_1123_; lean_object* v_vs_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1142_; 
v_ks_1123_ = lean_ctor_get(v_x_1072_, 0);
v_vs_1124_ = lean_ctor_get(v_x_1072_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_x_1072_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1126_ = v_x_1072_;
v_isShared_1127_ = v_isSharedCheck_1142_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_vs_1124_);
lean_inc(v_ks_1123_);
lean_dec(v_x_1072_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1142_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_ks_1123_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_vs_1124_);
v___x_1129_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v_newNode_1130_; size_t v___x_1131_; uint8_t v___x_1132_; 
v_newNode_1130_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v___x_1129_, v_x_1075_, v_x_1076_);
v___x_1131_ = ((size_t)7ULL);
v___x_1132_ = lean_usize_dec_le(v___x_1131_, v_x_1074_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; uint8_t v___x_1135_; 
v___x_1133_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1130_);
v___x_1134_ = lean_unsigned_to_nat(4u);
v___x_1135_ = lean_nat_dec_lt(v___x_1133_, v___x_1134_);
lean_dec(v___x_1133_);
if (v___x_1135_ == 0)
{
lean_object* v_ks_1136_; lean_object* v_vs_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v_ks_1136_ = lean_ctor_get(v_newNode_1130_, 0);
lean_inc_ref(v_ks_1136_);
v_vs_1137_ = lean_ctor_get(v_newNode_1130_, 1);
lean_inc_ref(v_vs_1137_);
lean_dec_ref(v_newNode_1130_);
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_1140_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_x_1074_, v_ks_1136_, v_vs_1137_, v___x_1138_, v___x_1139_);
lean_dec_ref(v_vs_1137_);
lean_dec_ref(v_ks_1136_);
return v___x_1140_;
}
else
{
return v_newNode_1130_;
}
}
else
{
return v_newNode_1130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(size_t v_depth_1143_, lean_object* v_keys_1144_, lean_object* v_vals_1145_, lean_object* v_i_1146_, lean_object* v_entries_1147_){
_start:
{
lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = lean_array_get_size(v_keys_1144_);
v___x_1149_ = lean_nat_dec_lt(v_i_1146_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_dec(v_i_1146_);
return v_entries_1147_;
}
else
{
lean_object* v_k_1150_; lean_object* v_v_1151_; uint64_t v___x_1152_; size_t v_h_1153_; size_t v___x_1154_; lean_object* v___x_1155_; size_t v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; size_t v_h_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_k_1150_ = lean_array_fget_borrowed(v_keys_1144_, v_i_1146_);
v_v_1151_ = lean_array_fget_borrowed(v_vals_1145_, v_i_1146_);
v___x_1152_ = l_Lean_instHashableMVarId_hash(v_k_1150_);
v_h_1153_ = lean_uint64_to_usize(v___x_1152_);
v___x_1154_ = ((size_t)5ULL);
v___x_1155_ = lean_unsigned_to_nat(1u);
v___x_1156_ = ((size_t)1ULL);
v___x_1157_ = lean_usize_sub(v_depth_1143_, v___x_1156_);
v___x_1158_ = lean_usize_mul(v___x_1154_, v___x_1157_);
v_h_1159_ = lean_usize_shift_right(v_h_1153_, v___x_1158_);
v___x_1160_ = lean_nat_add(v_i_1146_, v___x_1155_);
lean_dec(v_i_1146_);
lean_inc(v_v_1151_);
lean_inc(v_k_1150_);
v___x_1161_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_entries_1147_, v_h_1159_, v_depth_1143_, v_k_1150_, v_v_1151_);
v_i_1146_ = v___x_1160_;
v_entries_1147_ = v___x_1161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_depth_1163_, lean_object* v_keys_1164_, lean_object* v_vals_1165_, lean_object* v_i_1166_, lean_object* v_entries_1167_){
_start:
{
size_t v_depth_boxed_1168_; lean_object* v_res_1169_; 
v_depth_boxed_1168_ = lean_unbox_usize(v_depth_1163_);
lean_dec(v_depth_1163_);
v_res_1169_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_boxed_1168_, v_keys_1164_, v_vals_1165_, v_i_1166_, v_entries_1167_);
lean_dec_ref(v_vals_1165_);
lean_dec_ref(v_keys_1164_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_1170_, lean_object* v_x_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
size_t v_x_7885__boxed_1175_; size_t v_x_7886__boxed_1176_; lean_object* v_res_1177_; 
v_x_7885__boxed_1175_ = lean_unbox_usize(v_x_1171_);
lean_dec(v_x_1171_);
v_x_7886__boxed_1176_ = lean_unbox_usize(v_x_1172_);
lean_dec(v_x_1172_);
v_res_1177_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1170_, v_x_7885__boxed_1175_, v_x_7886__boxed_1176_, v_x_1173_, v_x_1174_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(lean_object* v_x_1178_, lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
uint64_t v___x_1181_; size_t v___x_1182_; size_t v___x_1183_; lean_object* v___x_1184_; 
v___x_1181_ = l_Lean_instHashableMVarId_hash(v_x_1179_);
v___x_1182_ = lean_uint64_to_usize(v___x_1181_);
v___x_1183_ = ((size_t)1ULL);
v___x_1184_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1178_, v___x_1182_, v___x_1183_, v_x_1179_, v_x_1180_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(lean_object* v_mvarId_1185_, lean_object* v_val_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v_mctx_1190_; lean_object* v_cache_1191_; lean_object* v_zetaDeltaFVarIds_1192_; lean_object* v_postponed_1193_; lean_object* v_diag_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1223_; 
v___x_1189_ = lean_st_ref_take(v___y_1187_);
v_mctx_1190_ = lean_ctor_get(v___x_1189_, 0);
v_cache_1191_ = lean_ctor_get(v___x_1189_, 1);
v_zetaDeltaFVarIds_1192_ = lean_ctor_get(v___x_1189_, 2);
v_postponed_1193_ = lean_ctor_get(v___x_1189_, 3);
v_diag_1194_ = lean_ctor_get(v___x_1189_, 4);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1196_ = v___x_1189_;
v_isShared_1197_ = v_isSharedCheck_1223_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_diag_1194_);
lean_inc(v_postponed_1193_);
lean_inc(v_zetaDeltaFVarIds_1192_);
lean_inc(v_cache_1191_);
lean_inc(v_mctx_1190_);
lean_dec(v___x_1189_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1223_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v_depth_1198_; lean_object* v_levelAssignDepth_1199_; lean_object* v_lmvarCounter_1200_; lean_object* v_mvarCounter_1201_; lean_object* v_lDecls_1202_; lean_object* v_decls_1203_; lean_object* v_userNames_1204_; lean_object* v_lAssignment_1205_; lean_object* v_eAssignment_1206_; lean_object* v_dAssignment_1207_; lean_object* v_instanceTypedMVars_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1222_; 
v_depth_1198_ = lean_ctor_get(v_mctx_1190_, 0);
v_levelAssignDepth_1199_ = lean_ctor_get(v_mctx_1190_, 1);
v_lmvarCounter_1200_ = lean_ctor_get(v_mctx_1190_, 2);
v_mvarCounter_1201_ = lean_ctor_get(v_mctx_1190_, 3);
v_lDecls_1202_ = lean_ctor_get(v_mctx_1190_, 4);
v_decls_1203_ = lean_ctor_get(v_mctx_1190_, 5);
v_userNames_1204_ = lean_ctor_get(v_mctx_1190_, 6);
v_lAssignment_1205_ = lean_ctor_get(v_mctx_1190_, 7);
v_eAssignment_1206_ = lean_ctor_get(v_mctx_1190_, 8);
v_dAssignment_1207_ = lean_ctor_get(v_mctx_1190_, 9);
v_instanceTypedMVars_1208_ = lean_ctor_get(v_mctx_1190_, 10);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_mctx_1190_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1210_ = v_mctx_1190_;
v_isShared_1211_ = v_isSharedCheck_1222_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_instanceTypedMVars_1208_);
lean_inc(v_dAssignment_1207_);
lean_inc(v_eAssignment_1206_);
lean_inc(v_lAssignment_1205_);
lean_inc(v_userNames_1204_);
lean_inc(v_decls_1203_);
lean_inc(v_lDecls_1202_);
lean_inc(v_mvarCounter_1201_);
lean_inc(v_lmvarCounter_1200_);
lean_inc(v_levelAssignDepth_1199_);
lean_inc(v_depth_1198_);
lean_dec(v_mctx_1190_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1222_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1212_ = lean_box(0);
v___x_1213_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_eAssignment_1206_, v_mvarId_1185_, v_val_1186_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 8, v___x_1213_);
v___x_1215_ = v___x_1210_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_depth_1198_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_levelAssignDepth_1199_);
lean_ctor_set(v_reuseFailAlloc_1221_, 2, v_lmvarCounter_1200_);
lean_ctor_set(v_reuseFailAlloc_1221_, 3, v_mvarCounter_1201_);
lean_ctor_set(v_reuseFailAlloc_1221_, 4, v_lDecls_1202_);
lean_ctor_set(v_reuseFailAlloc_1221_, 5, v_decls_1203_);
lean_ctor_set(v_reuseFailAlloc_1221_, 6, v_userNames_1204_);
lean_ctor_set(v_reuseFailAlloc_1221_, 7, v_lAssignment_1205_);
lean_ctor_set(v_reuseFailAlloc_1221_, 8, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1221_, 9, v_dAssignment_1207_);
lean_ctor_set(v_reuseFailAlloc_1221_, 10, v_instanceTypedMVars_1208_);
v___x_1215_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1217_; 
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1215_);
v___x_1217_ = v___x_1196_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_cache_1191_);
lean_ctor_set(v_reuseFailAlloc_1220_, 2, v_zetaDeltaFVarIds_1192_);
lean_ctor_set(v_reuseFailAlloc_1220_, 3, v_postponed_1193_);
lean_ctor_set(v_reuseFailAlloc_1220_, 4, v_diag_1194_);
v___x_1217_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_st_ref_put(v___y_1187_, v___x_1217_);
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1212_);
return v___x_1219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_1224_, lean_object* v_val_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1224_, v_val_1225_, v___y_1226_);
lean_dec(v___y_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0(uint8_t v___x_1236_, lean_object* v_mvarId_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_b_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v___x_1246_; lean_object* v_env_1247_; lean_object* v___x_1248_; lean_object* v_fst_1250_; lean_object* v_fst_1251_; lean_object* v_snd_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; uint8_t v___x_1359_; 
v___x_1246_ = lean_st_ref_get(v___y_1244_);
v_env_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc_ref(v_env_1247_);
lean_dec(v___x_1246_);
v___x_1248_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__0___closed__3));
v___x_1359_ = l_Lean_Environment_contains(v_env_1247_, v___x_1248_, v___x_1236_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_dec_ref(v_b_1240_);
lean_dec_ref(v_a_1239_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v___x_1360_ = lean_box(0);
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
else
{
lean_object* v___x_1362_; 
v___x_1362_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_a_1239_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1429_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1429_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1429_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
if (lean_obj_tag(v_a_1363_) == 1)
{
lean_object* v_val_1367_; lean_object* v_fst_1368_; lean_object* v_snd_1369_; lean_object* v___x_1370_; 
v_val_1367_ = lean_ctor_get(v_a_1363_, 0);
lean_inc(v_val_1367_);
lean_dec_ref_known(v_a_1363_, 1);
v_fst_1368_ = lean_ctor_get(v_val_1367_, 0);
lean_inc(v_fst_1368_);
v_snd_1369_ = lean_ctor_get(v_val_1367_, 1);
lean_inc(v_snd_1369_);
lean_dec(v_val_1367_);
v___x_1370_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_b_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1416_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1416_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1416_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
if (lean_obj_tag(v_a_1371_) == 1)
{
lean_object* v_val_1380_; lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
lean_del_object(v___x_1365_);
v_val_1380_ = lean_ctor_get(v_a_1371_, 0);
lean_inc(v_val_1380_);
lean_dec_ref_known(v_a_1371_, 1);
v_fst_1381_ = lean_ctor_get(v_val_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v_val_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec(v_val_1380_);
v___x_1383_ = lean_unsigned_to_nat(0u);
v___x_1384_ = lean_nat_dec_eq(v_snd_1369_, v___x_1383_);
if (v___x_1384_ == 0)
{
uint8_t v___x_1385_; 
v___x_1385_ = lean_nat_dec_eq(v_snd_1382_, v___x_1383_);
if (v___x_1385_ == 0)
{
uint8_t v___x_1386_; 
lean_del_object(v___x_1373_);
v___x_1386_ = lean_nat_dec_lt(v_snd_1369_, v_snd_1382_);
if (v___x_1386_ == 0)
{
uint8_t v___x_1387_; 
v___x_1387_ = lean_nat_dec_eq(v_snd_1369_, v_snd_1382_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = lean_nat_sub(v_snd_1369_, v_snd_1382_);
lean_dec(v_snd_1369_);
v___x_1389_ = l_Lean_mkNatLit(v___x_1388_);
v___x_1390_ = l_Lean_Meta_mkAdd(v_fst_1368_, v___x_1389_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v_fst_1250_ = v_a_1391_;
v_fst_1251_ = v_fst_1381_;
v_snd_1252_ = v_snd_1382_;
v___y_1253_ = v___y_1241_;
v___y_1254_ = v___y_1242_;
v___y_1255_ = v___y_1243_;
v___y_1256_ = v___y_1244_;
goto v___jp_1249_;
}
else
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1399_; 
lean_dec(v_snd_1382_);
lean_dec(v_fst_1381_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1392_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1394_ = v___x_1390_;
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1390_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_a_1392_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
}
else
{
lean_dec(v_snd_1382_);
v_fst_1250_ = v_fst_1368_;
v_fst_1251_ = v_fst_1381_;
v_snd_1252_ = v_snd_1369_;
v___y_1253_ = v___y_1241_;
v___y_1254_ = v___y_1242_;
v___y_1255_ = v___y_1243_;
v___y_1256_ = v___y_1244_;
goto v___jp_1249_;
}
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = lean_nat_sub(v_snd_1382_, v_snd_1369_);
lean_dec(v_snd_1382_);
v___x_1401_ = l_Lean_mkNatLit(v___x_1400_);
v___x_1402_ = l_Lean_Meta_mkAdd(v_fst_1381_, v___x_1401_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v_fst_1250_ = v_fst_1368_;
v_fst_1251_ = v_a_1403_;
v_snd_1252_ = v_snd_1369_;
v___y_1253_ = v___y_1241_;
v___y_1254_ = v___y_1242_;
v___y_1255_ = v___y_1243_;
v___y_1256_ = v___y_1244_;
goto v___jp_1249_;
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1404_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1402_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1402_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
lean_dec(v_snd_1382_);
lean_dec(v_fst_1381_);
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
goto v___jp_1375_;
}
}
else
{
lean_dec(v_snd_1382_);
lean_dec(v_fst_1381_);
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
goto v___jp_1375_;
}
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
lean_del_object(v___x_1373_);
lean_dec(v_a_1371_);
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v___x_1412_ = lean_box(0);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1412_);
v___x_1414_ = v___x_1365_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
v___jp_1375_:
{
lean_object* v___x_1376_; lean_object* v___x_1378_; 
v___x_1376_ = lean_box(0);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1376_);
v___x_1378_ = v___x_1373_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
lean_del_object(v___x_1365_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1417_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1370_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1370_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
else
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
lean_dec(v_a_1363_);
lean_dec_ref(v_b_1240_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v___x_1425_ = lean_box(0);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1425_);
v___x_1427_ = v___x_1365_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
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
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec_ref(v_b_1240_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1430_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1362_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1362_);
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
v___jp_1249_:
{
lean_object* v___x_1257_; 
lean_inc(v_mvarId_1237_);
v___x_1257_ = l_Lean_MVarId_getType(v_mvarId_1237_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1259_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc_n(v_a_1258_, 2);
lean_dec_ref_known(v___x_1257_, 1);
v___x_1259_ = l_Lean_Meta_getLevel(v_a_1258_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v___x_1261_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
lean_inc_ref(v_fst_1251_);
lean_inc_ref(v_fst_1250_);
v___x_1261_ = l_Lean_Meta_mkEq(v_fst_1250_, v_fst_1251_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
lean_inc(v_a_1258_);
v___x_1263_ = l_Lean_mkArrow(v_a_1262_, v_a_1258_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1265_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref_known(v___x_1263_, 1);
lean_inc(v_mvarId_1237_);
v___x_1265_ = l_Lean_MVarId_getTag(v_mvarId_1237_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1267_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1267_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1264_, v_a_1266_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1309_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc_n(v_a_1268_, 2);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = lean_box(0);
v___x_1270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1270_, 0, v_a_1260_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = l_Lean_mkConst(v___x_1248_, v___x_1270_);
v___x_1272_ = l_Lean_mkNatLit(v_snd_1252_);
lean_inc_ref(v_a_1238_);
v___x_1273_ = l_Lean_LocalDecl_toExpr(v_a_1238_);
v___x_1274_ = lean_unsigned_to_nat(6u);
v___x_1275_ = lean_mk_empty_array_with_capacity(v___x_1274_);
v___x_1276_ = lean_array_push(v___x_1275_, v_a_1258_);
v___x_1277_ = lean_array_push(v___x_1276_, v_fst_1250_);
v___x_1278_ = lean_array_push(v___x_1277_, v_fst_1251_);
v___x_1279_ = lean_array_push(v___x_1278_, v___x_1272_);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1273_);
v___x_1281_ = lean_array_push(v___x_1280_, v_a_1268_);
v___x_1282_ = l_Lean_mkAppN(v___x_1271_, v___x_1281_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1237_, v___x_1282_, v___y_1254_);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1309_ == 0)
{
lean_object* v_unused_1310_; 
v_unused_1310_ = lean_ctor_get(v___x_1283_, 0);
lean_dec(v_unused_1310_);
v___x_1285_ = v___x_1283_;
v_isShared_1286_ = v_isSharedCheck_1309_;
goto v_resetjp_1284_;
}
else
{
lean_dec(v___x_1283_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1309_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = l_Lean_Expr_mvarId_x21(v_a_1268_);
lean_dec(v_a_1268_);
v___x_1288_ = l_Lean_LocalDecl_fvarId(v_a_1238_);
lean_dec_ref(v_a_1238_);
v___x_1289_ = l_Lean_MVarId_tryClear(v___x_1287_, v___x_1288_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1300_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 1);
lean_ctor_set(v___x_1285_, 0, v_a_1290_);
v___x_1295_ = v___x_1285_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1297_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1295_);
v___x_1297_ = v___x_1292_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_del_object(v___x_1285_);
v_a_1301_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1289_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1289_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v_a_1260_);
lean_dec(v_a_1258_);
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1311_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1267_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1267_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec(v_a_1264_);
lean_dec(v_a_1260_);
lean_dec(v_a_1258_);
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1319_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1265_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1265_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec(v_a_1260_);
lean_dec(v_a_1258_);
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1327_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1263_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1263_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec(v_a_1260_);
lean_dec(v_a_1258_);
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1335_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1261_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1261_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_a_1258_);
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1343_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1259_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1259_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_snd_1252_);
lean_dec_ref(v_fst_1251_);
lean_dec_ref(v_fst_1250_);
lean_dec_ref(v_a_1238_);
lean_dec(v_mvarId_1237_);
v_a_1351_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1257_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1257_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___boxed(lean_object* v___x_1438_, lean_object* v_mvarId_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_b_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v___x_8108__boxed_1448_; lean_object* v_res_1449_; 
v___x_8108__boxed_1448_ = lean_unbox(v___x_1438_);
v_res_1449_ = l_Lean_Meta_unifyEq_x3f___lam__0(v___x_8108__boxed_1448_, v_mvarId_1439_, v_a_1440_, v_a_1441_, v_b_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
return v_res_1449_;
}
}
static lean_object* _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__2));
v___x_1455_ = l_Lean_stringToMessageData(v___x_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1(lean_object* v_eqFVarId_1456_, lean_object* v_mvarId_1457_, lean_object* v_subst_1458_, lean_object* v_acyclic_1459_, lean_object* v_caseName_x3f_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___x_1466_; 
lean_inc(v_eqFVarId_1456_);
v___x_1466_ = l_Lean_FVarId_getDecl___redArg(v_eqFVarId_1456_, v___y_1461_, v___y_1463_, v___y_1464_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = l_Lean_LocalDecl_type(v_a_1467_);
v___x_1469_ = l_Lean_Expr_isHEq(v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1470_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__1));
v___x_1471_ = lean_unsigned_to_nat(3u);
v___x_1472_ = l_Lean_Expr_isAppOfArity(v___x_1468_, v___x_1470_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
lean_dec(v_a_1467_);
lean_dec(v_caseName_x3f_1460_);
lean_dec_ref(v_acyclic_1459_);
lean_dec(v_subst_1458_);
lean_dec(v_mvarId_1457_);
lean_dec(v_eqFVarId_1456_);
v___x_1473_ = lean_obj_once(&l_Lean_Meta_unifyEq_x3f___lam__1___closed__3, &l_Lean_Meta_unifyEq_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3);
v___x_1474_ = l_Lean_indentExpr(v___x_1468_);
v___x_1475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
v___x_1476_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_1475_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1476_;
}
else
{
lean_object* v___x_1477_; lean_object* v___f_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_a_1485_; lean_object* v___x_1486_; 
v___x_1477_ = lean_box(v___x_1472_);
lean_inc(v_a_1467_);
lean_inc(v_mvarId_1457_);
v___f_1478_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1478_, 0, v___x_1477_);
lean_closure_set(v___f_1478_, 1, v_mvarId_1457_);
lean_closure_set(v___f_1478_, 2, v_a_1467_);
v___x_1479_ = l_Lean_Expr_appFn_x21(v___x_1468_);
v___x_1480_ = l_Lean_Expr_appFn_x21(v___x_1479_);
v___x_1481_ = l_Lean_Expr_appArg_x21(v___x_1480_);
lean_dec_ref(v___x_1480_);
v___x_1482_ = l_Lean_Expr_appArg_x21(v___x_1479_);
lean_dec_ref(v___x_1479_);
v___x_1483_ = l_Lean_Expr_appArg_x21(v___x_1468_);
lean_dec_ref(v___x_1468_);
lean_inc_ref(v___x_1482_);
v___x_1484_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1482_, v___y_1462_);
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1485_);
lean_dec_ref(v___x_1484_);
lean_inc_ref(v___x_1483_);
v___x_1486_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1483_, v___y_1462_);
if (lean_obj_tag(v_a_1485_) == 1)
{
lean_object* v_a_1487_; 
lean_dec_ref(v___x_1481_);
lean_dec_ref(v___f_1478_);
lean_dec(v_caseName_x3f_1460_);
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref(v___x_1486_);
if (lean_obj_tag(v_a_1487_) == 1)
{
lean_object* v_fvarId_1488_; lean_object* v_fvarId_1489_; lean_object* v___x_1490_; 
v_fvarId_1488_ = lean_ctor_get(v_a_1485_, 0);
lean_inc(v_fvarId_1488_);
lean_dec_ref_known(v_a_1485_, 1);
v_fvarId_1489_ = lean_ctor_get(v_a_1487_, 0);
lean_inc(v_fvarId_1489_);
lean_dec_ref_known(v_a_1487_, 1);
v___x_1490_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1488_, v___y_1461_, v___y_1463_, v___y_1464_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1492_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
lean_dec_ref_known(v___x_1490_, 1);
v___x_1492_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1489_, v___y_1461_, v___y_1463_, v___y_1464_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; lean_object* v___x_1497_; 
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_a_1493_);
lean_dec_ref_known(v___x_1492_, 1);
v___x_1494_ = l_Lean_LocalDecl_index(v_a_1491_);
lean_dec(v_a_1491_);
v___x_1495_ = l_Lean_LocalDecl_index(v_a_1493_);
lean_dec(v_a_1493_);
v___x_1496_ = lean_nat_dec_lt(v___x_1494_, v___x_1495_);
lean_dec(v___x_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1457_, v_eqFVarId_1456_, v_subst_1458_, v_acyclic_1459_, v_a_1467_, v___x_1482_, v___x_1483_, v___x_1496_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v_a_1467_);
return v___x_1497_;
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec(v_a_1491_);
lean_dec_ref(v___x_1483_);
lean_dec_ref(v___x_1482_);
lean_dec(v_a_1467_);
lean_dec_ref(v_acyclic_1459_);
lean_dec(v_subst_1458_);
lean_dec(v_mvarId_1457_);
lean_dec(v_eqFVarId_1456_);
v_a_1498_ = lean_ctor_get(v___x_1492_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1492_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1492_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
else
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
lean_dec(v_fvarId_1489_);
lean_dec_ref(v___x_1483_);
lean_dec_ref(v___x_1482_);
lean_dec(v_a_1467_);
lean_dec_ref(v_acyclic_1459_);
lean_dec(v_subst_1458_);
lean_dec(v_mvarId_1457_);
lean_dec(v_eqFVarId_1456_);
v_a_1506_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1490_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1490_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
else
{
lean_object* v___x_1514_; 
lean_dec_ref_known(v_a_1485_, 1);
lean_dec(v_a_1487_);
v___x_1514_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1457_, v_eqFVarId_1456_, v_subst_1458_, v_acyclic_1459_, v_a_1467_, v___x_1482_, v___x_1483_, v___x_1469_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v_a_1467_);
return v___x_1514_;
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1554_; 
v_a_1515_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1517_ = v___x_1486_;
v_isShared_1518_ = v_isSharedCheck_1554_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1486_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1554_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
if (lean_obj_tag(v_a_1515_) == 1)
{
lean_object* v___x_1519_; 
lean_dec_ref_known(v_a_1515_, 1);
lean_del_object(v___x_1517_);
lean_dec(v_a_1485_);
lean_dec_ref(v___x_1481_);
lean_dec_ref(v___f_1478_);
lean_dec(v_caseName_x3f_1460_);
v___x_1519_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1457_, v_eqFVarId_1456_, v_subst_1458_, v_acyclic_1459_, v_a_1467_, v___x_1482_, v___x_1483_, v___x_1472_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v_a_1467_);
return v___x_1519_;
}
else
{
lean_object* v___x_1520_; 
lean_dec_ref(v___x_1483_);
lean_dec_ref(v___x_1482_);
lean_dec_ref(v_acyclic_1459_);
lean_inc(v_a_1515_);
lean_inc(v_a_1485_);
v___x_1520_ = l_Lean_Meta_isExprDefEq(v_a_1485_, v_a_1515_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
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
lean_object* v___x_1523_; 
lean_del_object(v___x_1517_);
v___x_1523_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_1457_, v_eqFVarId_1456_, v_subst_1458_, v_caseName_x3f_1460_, v_a_1467_, v___x_1481_, v___f_1478_, v_a_1485_, v_a_1515_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1523_;
}
else
{
lean_object* v___x_1524_; 
lean_dec(v_a_1515_);
lean_dec(v_a_1485_);
lean_dec_ref(v___x_1481_);
lean_dec_ref(v___f_1478_);
lean_dec(v_a_1467_);
lean_dec(v_caseName_x3f_1460_);
v___x_1524_ = l_Lean_MVarId_clear(v_mvarId_1457_, v_eqFVarId_1456_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1537_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1537_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1537_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1529_ = lean_unsigned_to_nat(0u);
v___x_1530_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1530_, 0, v_a_1525_);
lean_ctor_set(v___x_1530_, 1, v_subst_1458_);
lean_ctor_set(v___x_1530_, 2, v___x_1529_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set_tag(v___x_1517_, 1);
lean_ctor_set(v___x_1517_, 0, v___x_1530_);
v___x_1532_ = v___x_1517_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1532_);
v___x_1534_ = v___x_1527_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_del_object(v___x_1517_);
lean_dec(v_subst_1458_);
v_a_1538_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1524_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1524_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_del_object(v___x_1517_);
lean_dec(v_a_1515_);
lean_dec(v_a_1485_);
lean_dec_ref(v___x_1481_);
lean_dec_ref(v___f_1478_);
lean_dec(v_a_1467_);
lean_dec(v_caseName_x3f_1460_);
lean_dec(v_subst_1458_);
lean_dec(v_mvarId_1457_);
lean_dec(v_eqFVarId_1456_);
v_a_1546_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1520_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1520_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
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
lean_object* v___x_1555_; 
lean_dec_ref(v___x_1468_);
lean_dec(v_caseName_x3f_1460_);
lean_dec_ref(v_acyclic_1459_);
lean_dec(v_eqFVarId_1456_);
v___x_1555_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_1457_, v_a_1467_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v_a_1467_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1566_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1558_ = v___x_1555_;
v_isShared_1559_ = v_isSharedCheck_1566_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1566_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1564_; 
v___x_1560_ = lean_unsigned_to_nat(1u);
v___x_1561_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1561_, 0, v_a_1556_);
lean_ctor_set(v___x_1561_, 1, v_subst_1458_);
lean_ctor_set(v___x_1561_, 2, v___x_1560_);
v___x_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 0, v___x_1562_);
v___x_1564_ = v___x_1558_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1562_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_subst_1458_);
v_a_1567_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1555_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1555_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
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
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec(v_caseName_x3f_1460_);
lean_dec_ref(v_acyclic_1459_);
lean_dec(v_subst_1458_);
lean_dec(v_mvarId_1457_);
lean_dec(v_eqFVarId_1456_);
v_a_1575_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1466_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1466_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___boxed(lean_object* v_eqFVarId_1583_, lean_object* v_mvarId_1584_, lean_object* v_subst_1585_, lean_object* v_acyclic_1586_, lean_object* v_caseName_x3f_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lean_Meta_unifyEq_x3f___lam__1(v_eqFVarId_1583_, v_mvarId_1584_, v_subst_1585_, v_acyclic_1586_, v_caseName_x3f_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f(lean_object* v_mvarId_1594_, lean_object* v_eqFVarId_1595_, lean_object* v_subst_1596_, lean_object* v_acyclic_1597_, lean_object* v_caseName_x3f_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v___f_1604_; lean_object* v___x_1605_; 
lean_inc(v_mvarId_1594_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__1___boxed), 10, 5);
lean_closure_set(v___f_1604_, 0, v_eqFVarId_1595_);
lean_closure_set(v___f_1604_, 1, v_mvarId_1594_);
lean_closure_set(v___f_1604_, 2, v_subst_1596_);
lean_closure_set(v___f_1604_, 3, v_acyclic_1597_);
lean_closure_set(v___f_1604_, 4, v_caseName_x3f_1598_);
v___x_1605_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1594_, v___f_1604_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___boxed(lean_object* v_mvarId_1606_, lean_object* v_eqFVarId_1607_, lean_object* v_subst_1608_, lean_object* v_acyclic_1609_, lean_object* v_caseName_x3f_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Meta_unifyEq_x3f(v_mvarId_1606_, v_eqFVarId_1607_, v_subst_1608_, v_acyclic_1609_, v_caseName_x3f_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(lean_object* v_mvarId_1617_, lean_object* v_val_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1617_, v_val_1618_, v___y_1620_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___boxed(lean_object* v_mvarId_1625_, lean_object* v_val_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(v_mvarId_1625_, v_val_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_x_1634_, v_x_1635_, v_x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1638_, lean_object* v_x_1639_, size_t v_x_1640_, size_t v_x_1641_, lean_object* v_x_1642_, lean_object* v_x_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1639_, v_x_1640_, v_x_1641_, v_x_1642_, v_x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_, lean_object* v_x_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_){
_start:
{
size_t v_x_8823__boxed_1651_; size_t v_x_8824__boxed_1652_; lean_object* v_res_1653_; 
v_x_8823__boxed_1651_ = lean_unbox_usize(v_x_1647_);
lean_dec(v_x_1647_);
v_x_8824__boxed_1652_ = lean_unbox_usize(v_x_1648_);
lean_dec(v_x_1648_);
v_res_1653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(v_00_u03b2_1645_, v_x_1646_, v_x_8823__boxed_1651_, v_x_8824__boxed_1652_, v_x_1649_, v_x_1650_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1654_, lean_object* v_n_1655_, lean_object* v_k_1656_, lean_object* v_v_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v_n_1655_, v_k_1656_, v_v_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(lean_object* v_00_u03b2_1659_, size_t v_depth_1660_, lean_object* v_keys_1661_, lean_object* v_vals_1662_, lean_object* v_heq_1663_, lean_object* v_i_1664_, lean_object* v_entries_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_1660_, v_keys_1661_, v_vals_1662_, v_i_1664_, v_entries_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1667_, lean_object* v_depth_1668_, lean_object* v_keys_1669_, lean_object* v_vals_1670_, lean_object* v_heq_1671_, lean_object* v_i_1672_, lean_object* v_entries_1673_){
_start:
{
size_t v_depth_boxed_1674_; lean_object* v_res_1675_; 
v_depth_boxed_1674_ = lean_unbox_usize(v_depth_1668_);
lean_dec(v_depth_1668_);
v_res_1675_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(v_00_u03b2_1667_, v_depth_boxed_1674_, v_keys_1669_, v_vals_1670_, v_heq_1671_, v_i_1672_, v_entries_1673_);
lean_dec_ref(v_vals_1670_);
lean_dec_ref(v_keys_1669_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1676_, lean_object* v_x_1677_, lean_object* v_x_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_x_1677_, v_x_1678_, v_x_1679_, v_x_1680_);
return v___x_1681_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_OneFieldStructure(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_OneFieldStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_OneFieldStructure(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_OneFieldStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_UnifyEq(builtin);
}
#ifdef __cplusplus
}
#endif
